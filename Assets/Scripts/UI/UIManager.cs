using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TowerDefense;
using SpaceShooter;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

namespace QuizCinema
{
    public class UIManager : MonoBehaviour
    {
        public enum ResolutionScreenType { Correct, Incorrect, Finish }

        [Header("References")]
        [SerializeField] private GameManager _gameManager;
        [SerializeField] private QuestionMethods _questionMethods;
        [SerializeField] private Score _score;

        [SerializeField] SettingUIManager _settingUIManager;

        [Header("UI Elements (Prefabs)")]
        [SerializeField] private AnswerData[] _answerPrefab;

        [SerializeField] private UIElements _uIElements;

        private List<int> _finishedAnswers = new List<int>();
        public List<int> FinishedAnswers => _finishedAnswers;

        private List<AnswerData> _currentAnswer = new List<AnswerData>();
        public List<AnswerData> GetCurrentAnswerList { get { return _currentAnswer; } set { _currentAnswer = value; } }

        private List<AnswerData> _correctAnswer = new List<AnswerData>();
        public List<AnswerData> GetCorrectAnswerList { get { return _correctAnswer; } set { _correctAnswer = value; } }

        private int _resStateParaHash = 0;

        private IEnumerator IE_DisplayTimedResolution;

        private ResolutionScreenType _typeAnswer;



        private void OnEnable()
        {
            _questionMethods.OnUpdateQuestionUI += UpdateQuestionUI;
            _gameManager.UpdateDisplayScreenResolution += DisplayResolution;
            _gameManager.OnFinishGame += OnFinishGame;

            _score.UpdateScore += UpdateScoreUI;

        }

        private void OnFinishGame()
        {
            UpdateFinishScreen();
        }

        private void OnDisable()
        {
            _questionMethods.OnUpdateQuestionUI -= UpdateQuestionUI;
            _gameManager.UpdateDisplayScreenResolution -= DisplayResolution;
            _gameManager.OnFinishGame -= OnFinishGame;

            _score.UpdateScore -= UpdateScoreUI;
        }



        private void Start()
        {
            _resStateParaHash = Animator.StringToHash("ScreenState");

            _answerPrefab = _settingUIManager.AnswersPrefabs;
        }



        private void UpdateQuestionUI(Question question)
        {
            UpdateScoreUI();

            var index = question.IndexPrefab;

            for (int i = 0; i < _answerPrefab.Length; i++)
            {
                _uIElements.QuestionInfoTextObject[i].transform.parent.gameObject.SetActive(false);
                _uIElements.CadrCinema[i].transform.parent.gameObject.SetActive(false);
                _uIElements.AnswerContentArea[i].transform.parent.parent.gameObject.SetActive(false);
            }

            ActivateUIObjects(index, question);

            if (!_questionMethods.IsFinished)
            {
                AnswersMethods.Instance.CreateAnswers(question);
                Debug.Log("Вызываем CreateAnswers");
            }
            else
            {
                UpdateFinishScreen();
            }
        }

        private void ActivateUIObjects(int index, Question question)
        {
            _uIElements.QuestionInfoTextObject[index].transform.parent.gameObject.SetActive(true);
            _uIElements.CadrCinema[index].transform.parent.gameObject.SetActive(true);
            _uIElements.AnswerContentArea[index].transform.parent.parent.gameObject.SetActive(true);

            _uIElements.QuestionInfoTextObject[index].text = question.ListInfoQuestion[PlayerPrefs.GetInt("IndexLanguageSave")];

            Sprite sprite = Resources.Load($"{question._cadrCinemaName}", typeof(Sprite)) as Sprite;
            _uIElements.CadrCinema[index].sprite = sprite;
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

            if (_typeAnswer == ResolutionScreenType.Finish)
            {
                _uIElements.FinishUIElements.gameObject.SetActive(true);
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
            var sceneName = SceneManager.GetActiveScene().name;

            _uIElements.NumberCurrentQuestion.text = _gameManager.CountCurrenttAnswer + "/" + _questionMethods.Data.Questions.Length;
        }

        private void UpdateFinishScreen()
        {
            Debug.Log("UpdateFinishScreen");
            var sceneName = SceneManager.GetActiveScene().name;

            _uIElements.CountCorrectAnswer.text = _gameManager.CountCorrectAnswer + "/10";

         //   var numberLvl = MapCompletion.Instance.GetLvlNumber(sceneName) + 1; // т.к нумерация с 0 (у номера 1 индекс 0)
         //   _uIElements.TextFinalLvl.text = $"Уровень {numberLvl}";

            if (_gameManager.CalculateLevelStars() > 0)
            {
                _uIElements.EnableButtonFinishNextLvl.SetActive(true);
                Debug.Log("УРОВЕНЬ ПРОЙДЕН!!!");
            }
            else
            {
                _uIElements.EnableButtonFinishReloadLvl.SetActive(true);
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


        private void UpdateScoreUI()
        {
            if (_gameManager.CountCorrectAnswer <= _questionMethods.Data.Questions.Length)
                _uIElements.NumberCurrentQuestion.text = _gameManager.CountCurrenttAnswer + "/" + _questionMethods.Data.Questions.Length;

            _uIElements.CountCurrentScore.text = _score.CurrentLvlScore.ToString();

            _uIElements.ScoreFinalLvl.text = _score.CurrentLvlScore.ToString();
        }
    }
}