using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class AnswersMethods : SingletonBase<AnswersMethods> , IDependency<AnswerData>
    {
        public event Action<Question> OnCreateAnswers;
        public event Action<List<AnswerData>> OnCorrectAnswer;
        public event Action<AnswerData> OnCorrectSpriteActivate;

        private List<AnswerData> _currentAnswer = new List<AnswerData>();
        public List<AnswerData> GetCurrentAnswerList { get { return _currentAnswer; } set { _currentAnswer = value; } }

        private List<AnswerData> _correctAnswer = new List<AnswerData>();
        public List<AnswerData> GetCorrectAnswerList { get { return _correctAnswer; } set { _correctAnswer = value; } }

        [Header("UI Elements (Prefabs)")]
        [SerializeField] private AnswerData[] _answerPrefab;
        [SerializeField] private UIElements _uIElements;

        public void Construct(AnswerData obj)
        {
            var index = obj.AnswerIndex;
            _answerPrefab[index] = obj;
        }



        public void CreateAnswers(Question question)
        {
            _correctAnswer.Clear();

            EraseAnswers();

            var index = question.IndexPrefab;

            var listIndexCorrectAnswer = question.GetCorrectAnswers();

            UpdateCorrectAnswerList(question);

            OnCorrectAnswer?.Invoke(_correctAnswer);

            OnCreateAnswers?.Invoke(question);
        }

        public static void Shuffle<T>(T[] arr)
        {
            System.Random rand = new System.Random();

            for (int i = arr.Length - 1; i >= 1; i--)
            {
                int j = rand.Next(i + 1);

                T tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }

        private void UpdateCorrectAnswerList(Question question)
        {
            var index = question.IndexPrefab;

            Shuffle(question.Answers);
            var listIndexCorrectAnswer = question.GetCorrectAnswers();

            for (int i = 0; i < question.Answers.Length; i++)
            {

                AnswerData newAnswer = Instantiate(_answerPrefab[index], _uIElements.AnswerContentArea[index]);
                newAnswer.UpdateData(question.Answers[i].InfoList[PlayerPrefs.GetInt("IndexLanguageSave")], i);

                _currentAnswer.Add(newAnswer);
                Debug.Log(question._cadrCinemaName);

                if (question.GetAnswerType == AnswerType.Single)
                {
                    if (listIndexCorrectAnswer[0] == i)
                        _correctAnswer.Add(newAnswer);
                }
                else if (question.GetAnswerType == AnswerType.Multiply)
                {
                    for (int j = 0; j < listIndexCorrectAnswer.Count; j++)
                    {
                        if (i == listIndexCorrectAnswer[j])
                        {
                            _correctAnswer.Add(newAnswer);
                        }
                    }
                }
            }
        }

        private void EraseAnswers()
        {
            foreach (var answer in _currentAnswer)
            {
                Destroy(answer.gameObject);
            }
            _currentAnswer.Clear();
        }
    }
}