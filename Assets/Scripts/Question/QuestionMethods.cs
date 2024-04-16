using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace QuizCinema
{
    public class QuestionMethods : SingletonBase<QuestionMethods>, IDependency<Timer>, IDependency<GameManager>
    {
        public event Action<Question> OnUpdateQuestionUI;
        public event Action<List<AnswerData>> CurrentAnswerList;

        [SerializeField] private GameManager _gameManager;
        [SerializeField] private Timer _timer;

        private Data _data = new Data();
        public Data Data { get { return _data; } set { _data = value; } }

        private List<AnswerData> _pickedAnswers = new List<AnswerData>();
        public List<AnswerData> PickedAnswers => _pickedAnswers;

        private List<int> _finishedQuestions = new List<int>();
        public List<int> FinishedQuestions => _finishedQuestions;
        public int GetFinishedLengthQuestions => _finishedQuestions.Count();

        private int _currentIndexQuestion = 0;
        public int CurrentIndexQuestion { get { return _currentIndexQuestion; } set { _currentIndexQuestion = value; } }
        public bool IsFinished => _finishedQuestions.Count < _data.Questions.Length ? false : true;
        public int GetLengthQuestions => _data.Questions.Length;

        public int _currentIndexNotRandom = 0;
        private void OnEnable()
        {
            AnswerData.UpdateQuestionAnswer += UpdateAnswers;
            ConfirmAnswer.OnAcceptAnswer += UpdateAnswers;
        }

        private void OnDisable()
        {
            AnswerData.UpdateQuestionAnswer -= UpdateAnswers;
            ConfirmAnswer.OnAcceptAnswer -= UpdateAnswers;
        }

        private void Start()
        {
            _currentIndexNotRandom = 0;
        }

        public void UpdateAnswers(AnswerData newAnswer)
        {
            if (_data.Questions[_currentIndexNotRandom].GetAnswerType == AnswerType.Single)
            {
                foreach (var answer in _pickedAnswers.ToList())
                {
                    if (answer != newAnswer)
                    {
                        answer.Reset();
                    }

                }
                _pickedAnswers.Clear();
                _pickedAnswers.Add(newAnswer);

                _gameManager.Accept();
            }
            else
            {
                bool alreadyPicked = _pickedAnswers.Exists(x => x == newAnswer);
                Debug.Log("Multiply");
                if (alreadyPicked)
                {
                    _pickedAnswers.Remove(newAnswer);
                }
                else
                {
                    Debug.Log("Add Multiply");
                    _pickedAnswers.Add(newAnswer);
                }
                if (_pickedAnswers.Count == _data.Questions[_currentIndexNotRandom].GetCorrectAnswers().Count)
                {
                    _gameManager.Accept();
                }
            }

            CurrentAnswerList?.Invoke(_pickedAnswers);
        }

        public void EraseAnswers()
        {
            _pickedAnswers = new List<AnswerData>();
        }


        public Question GetRandomQuestion()
        {
            int randomIndex = GetRandomQuestionIndex();
            _currentIndexNotRandom = randomIndex;

            return _data.Questions[_currentIndexNotRandom];
        }

        public Question GetNotRandomQuestion(int index)
        {
            return _data.Questions[index];
        }

        public int GetRandomQuestionIndex()
        {
            var random = 0;
            if (_finishedQuestions.Count < _data.Questions.Length)
            {
                do
                {
                    random = UnityEngine.Random.Range(0, _data.Questions.Length);
                } while (_finishedQuestions.Contains(random) || _currentIndexNotRandom == random);
            }
            return random;
        }

        public bool CheckAnswers()
        {
            if (!CompareAnswers())
            {
                return false;
            }
            return true;
        }

        public bool CompareAnswers()
        {
            if (_pickedAnswers.Count > 0)
            {
                List<int> correctAnswersList = _data.Questions[_currentIndexNotRandom].GetCorrectAnswers();
                List<int> pickedAnswersList = _pickedAnswers.Select(x => x.AnswerIndex).ToList();

                var firstList = correctAnswersList.Except(pickedAnswersList).ToList();
                var secondList = pickedAnswersList.Except(correctAnswersList).ToList();
                return !firstList.Any() && !secondList.Any();
            }
            return false;
        }

        public void Display()
        {
            EraseAnswers();

            // var question = GetRandomQuestion();
            var question = GetNotRandomQuestion(_currentIndexNotRandom);

           // if (_finishedQuestions.Count < _data.Questions.Length)
           //     _currentIndexNotRandom++;

            OnUpdateQuestionUI?.Invoke(question);

            if (question.UseTimer)
            {
                _timer.UpdateTimer(question.UseTimer);
            }
        }

        public void Construct(Timer obj)
        {
            _timer = obj;
        }

        public void Construct(GameManager obj)
        {
            _gameManager = obj;
        }
    }
}