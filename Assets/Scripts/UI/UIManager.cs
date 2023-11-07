using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TowerDefense;
using SpaceShooter;
using TMPro;
using UnityEngine.UI;

namespace QuizCinema
{
    public class UIManager : MonoBehaviour, IDependency<Score>, IDependency<AnswerData>
    {
        public event Action<Question> OnCreateAnswers;
        public event Action<AnswerData> OnCorrectAnswer;

        public enum ResolutionScreenType { Correct, Incorrect, Finish }

        [Header("References")]
        [SerializeField] private GameManager _gameManager;
        [SerializeField] private QuestionMethods _questionMethods;
        [SerializeField] private Score _score;

        [SerializeField] SettingUIManager _settingUIManager;

        [Header("UI Elements (Prefabs)")]
        [SerializeField] private AnswerData[] _answerPrefab;

        [SerializeField] private UIElements _uIElements;


        private List<AnswerData> _currentAnswer = new List<AnswerData>();
        private int _resStateParaHash = 0;

        private IEnumerator IE_DisplayTimedResolution;

        private ResolutionScreenType _typeAnswer;

        public void Construct(Score obj) => _score = obj;
        public void Construct(AnswerData obj) 
        {
            var index = obj.AnswerIndex;
            _answerPrefab[index] = obj;   
        }



        private void OnEnable()
        {
            _questionMethods.UpdateQuestionUI += UpdateQuestionUI;
            _gameManager.UpdateDisplayScreenResolution += DisplayResolution;
            _score.UpdateScore += UpdateScoreUI;

        }

        private void OnDisable()
        {
            _questionMethods.UpdateQuestionUI -= UpdateQuestionUI;
            _gameManager.UpdateDisplayScreenResolution -= DisplayResolution;
            _score.UpdateScore -= UpdateScoreUI;
        }

        private void Awake()
        {
           // _uIElements = _settingUIManager.UIGameElements;
           
        }


        private void Start()
        {
            //UpdateScoreUI();
            _resStateParaHash = Animator.StringToHash("ScreenState");

            _answerPrefab = _settingUIManager.AnswersPrefabs;
          //  for (int i = 0; i < _questionInfoTextObject.Length; i++)
          //  {
          ///     _questionInfoTextObject[i] = _settingUIManager.QuestionInfoTextObject[i].GetComponentInChildren<TextMeshProUGUI>();
          //  }
        }


        private void UpdateQuestionUI(Question question)
        {
            UpdateScoreUI();

            for (int i = 0; i < _answerPrefab.Length; i++)
            {
                _uIElements.QuestionInfoTextObject[i].transform.parent.gameObject.SetActive(false);
                _uIElements.CadrCinema[i].gameObject.SetActive(false);
                _uIElements.AnswerContentArea[i].transform.parent.parent.gameObject.SetActive(false);
            }

            var index = question.IndexPrefab;

            _uIElements.QuestionInfoTextObject[index].transform.parent.gameObject.SetActive(true);
            _uIElements.CadrCinema[index].gameObject.SetActive(true);
            _uIElements.AnswerContentArea[index].transform.parent.parent.gameObject.SetActive(true);

            _uIElements.QuestionInfoTextObject[index].text = question.Info;

            Sprite sprite = Resources.Load($"{question._cadrCinemaName}", typeof(Sprite)) as Sprite;

            if (index == 0)
            {
                sprite = Resources.Load($"Type{index}/{question._cadrCinemaName}", typeof(Sprite)) as Sprite;
            }

            if (index == 3)
            {
                sprite = Resources.Load($"Type{index}/{question._cadrCinemaName}", typeof(Sprite)) as Sprite;
            }

            _uIElements.CadrCinema[index].sprite = sprite;

            if (!_questionMethods.IsFinished)
            {
                CreateAnswers(question);
            }
        }

        private void DisplayResolution(ResolutionScreenType type, int score)
        {
            UpdateResUI(type, score);
            _uIElements.ResolutionScreenAnimator.SetInteger(_resStateParaHash, 2);
            _typeAnswer = type;
        }

        public void CloseResultQuestion()
        {
            if (_typeAnswer != ResolutionScreenType.Finish)
            {
                if (IE_DisplayTimedResolution != null)
                {
                    StopCoroutine(IE_DisplayTimedResolution);
                }
                IE_DisplayTimedResolution = DisplayTimedResolution();
                StartCoroutine(IE_DisplayTimedResolution);  
            }
        }

        private IEnumerator DisplayTimedResolution()
        {
            yield return new WaitForSeconds(GameUtility.ResolutionDelayTime);

            Debug.Log("DisplayTimedResolution");
            _uIElements.ResolutionScreenAnimator.SetInteger(_resStateParaHash, 1);
        }

        private void UpdateResUI(ResolutionScreenType type, int score)
        {
            var currentEpisode = LevelSequenceController.Instance.CurrentEpisode;

            _uIElements.CountCurrentAnswer.text = _gameManager.CountCurrenttAnswer + "/" + _questionMethods.Data.Questions.Length;

            switch (type)
            {
                case ResolutionScreenType.Correct:
                    _uIElements.ResolutionStateInfoText.text = "Correct!";
                    _uIElements.ResolutionScoreText.text = "+" + score;
                    break;
                case ResolutionScreenType.Incorrect:
                    _uIElements.ResolutionStateInfoText.text = "Wrong!";
                    _uIElements.ResolutionScoreText.text = "-" + score;
                    break;
                case ResolutionScreenType.Finish:
                    _uIElements.ResolutionStateInfoText.text = "Final Score!";

                    StartCoroutine(CalculateScore());
                    _uIElements.FinishUIElements.gameObject.SetActive(true);
                    _uIElements.HighScoreText.gameObject.SetActive(true);
                    _uIElements.HighScoreText.text = (MapCompletion.Instance.GetEpisodeScore(currentEpisode) > MapCompletion.Instance.TotalScoreLvls ? "new " : string.Empty) 
                        + "Highscore: " + MapCompletion.Instance.GetEpisodeScore(currentEpisode).ToString();
                    _uIElements.CountCorrectAnswer.text = "Кол-во правильных ответов: " + _gameManager.CountCorrectAnswer + " \nКол-во неправильных ответов: "
                        + (_questionMethods.GetLengthQuestions - _gameManager.CountCorrectAnswer);

                    var numberLvl = MapCompletion.Instance.GetEpisodeNumber(currentEpisode);

                    _uIElements.TextSuccessLvl.text = (MapCompletion.Instance.GetEpisodeStars(currentEpisode) > 0 ? "ПРОЙДЕН" : $"НЕ ПРОЙДЕН");
                    _uIElements.TextFinalLvl.text = $"Уровень {numberLvl}";
                    
                    break;

            }
        }

        IEnumerator CalculateScore()
        {
            if (_score.CurrentLvlScore == 0)
            {
                _uIElements.ScoreFinalLvl.text = 0.ToString();
                yield break;
            }

            var scoreValue = 0;
            var scoreMoreThanZero = _score.CurrentLvlScore > 0;

            while (scoreMoreThanZero ?  scoreValue < _score.CurrentLvlScore : scoreValue > _score.CurrentLvlScore)
            {
                yield return new WaitForSeconds(0.001f);
                scoreValue += scoreMoreThanZero ? 1 : -1;
                _uIElements.ScoreFinalLvl.text = scoreValue.ToString();

                yield return null;
            }
        }

        private void CreateAnswers(Question question)
        {
            EraseAnswers();

            var index = question.IndexPrefab;

            for (int i = 0; i < question.Answers.Length; i++)
            {
                AnswerData newAnswer = Instantiate(_answerPrefab[index], _uIElements.AnswerContentArea[index]);
                newAnswer.UpdateData(question.Answers[i].TranslateInfo, i);

                _currentAnswer.Add(newAnswer);

                if (question.GetCorrectAnswers()[0] == i)
                {
                    OnCorrectAnswer?.Invoke(newAnswer);
                }
            }

            OnCreateAnswers?.Invoke(question);
        }

        private void EraseAnswers()
        {
            foreach(var answer in _currentAnswer)
            {
                Destroy(answer.gameObject);
            }
            _currentAnswer.Clear();
        }

        private void UpdateScoreUI()
        {
            if (_gameManager.CountCorrectAnswer <= _questionMethods.Data.Questions.Length)
                _uIElements.CountCurrentAnswer.text = _gameManager.CountCurrenttAnswer + "/" + _questionMethods.Data.Questions.Length;

            _uIElements.ScoreCurrentLvl.text = _score.CurrentLvlScore.ToString();

            _uIElements.ScoreFinalLvl.text = _score.CurrentLvlScore.ToString();
        }
    }
}