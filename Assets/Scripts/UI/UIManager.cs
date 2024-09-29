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
    public class UIManager : SingletonBase<UIManager>
    {
        public enum ResolutionScreenType { Correct, Incorrect, Finish }

        [Header("References")]
        [SerializeField] private GameManager _gameManager;
        [SerializeField] private QuestionMethods _questionMethods;
        [SerializeField] private Score _score;

        [SerializeField] SettingUIManager _settingUIManager;

        [Header("UI Elements (Prefabs)")]
        [SerializeField] private AnswerData[] _answerPrefab;
        [SerializeField] private RectTransform _panelInfoQuiz;

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

        public void SetPanelInfoValues(bool panelUp)
        {
            var valueY = panelUp ? 1 : 0;
            _panelInfoQuiz.anchorMax = new Vector2(0.5f, valueY);
            _panelInfoQuiz.anchorMin = new Vector2(0.5f, valueY);
            _panelInfoQuiz.pivot = new Vector2(0.5f, valueY);
          //  _panelInfoQuiz.localPosition = new Vector2(300, 200);
        }



        public void UpdateQuestionUI(Question question)
        {

            UpdateScoreUI();

            var index = question.IndexPrefab;
            if (index <= 1)
            {
                SetPanelInfoValues(false);
            }
            else if (index == 2 || index == 3)
            {
                SetPanelInfoValues(true);
            }


            for (int i = 0; i < _answerPrefab.Length; i++)
            {
                _uIElements.QuestionInfoTextObject[i].transform.parent.gameObject.SetActive(false);
                _uIElements.CadrCinema[i].transform.parent.gameObject.SetActive(false);
                _uIElements.AnswersHolder[i].transform.gameObject.SetActive(false);
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

            SwipeMenu.Instance?.ResetAllSwipeArguments();
        }

        private void ActivateUIObjects(int index, Question question)
        {
            _uIElements.QuestionInfoTextObject[index].transform.parent.gameObject.SetActive(true);
            _uIElements.CadrCinema[index].transform.parent.gameObject.SetActive(true);
            _uIElements.AnswersHolder[index].transform.gameObject.SetActive(true);

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

            _uIElements.NumberCurrentQuestion.text = _gameManager.CountCurrentAnswer + "/" + _questionMethods.Data.Questions.Length;
        }

        private void UpdateFinishScreen()
        {
            Debug.Log("UpdateFinishScreen");
            var sceneName = SceneManager.GetActiveScene().name;


            if (_uIElements.CountCorrectAnswer.Length == 2)
            {
                _uIElements.CountCorrectAnswer[0].text = _gameManager.CountCorrectAnswer + "/10";
                _uIElements.CountCorrectAnswer[1].text = _gameManager.CountCorrectAnswer + "/10";
            }
            else
            {
                Debug.LogError("Fill in the field CountCorrectAnswer");
            }

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

        // CalculateScore TODO
        public void StartCalculateScore(int levelCountsStars)
        {
            Debug.Log("StartCalculateScore " + MapCompletion.Instance.LearnSteps[1]);

            StartCoroutine(CalculateScore(levelCountsStars));
        }

        IEnumerator CalculateScore(int levelCountsStars)
        {
            Debug.Log("StartCalculate");
            if (_score.CurrentLvlScore == 0)
            {
                if (_uIElements.ScoreFinalLvl.Length == 2)
                {
                    _uIElements.ScoreFinalLvl[0].text = 0.ToString();
                    _uIElements.ScoreFinalLvl[1].text = 0.ToString();
                }
                yield break;
            }

            var scoreValue = 0;
            var scoreMoreThanZero = _score.CurrentLvlScore > 0;
            var maxScoreCurrentLvl = MapCompletion.Instance.GetLvlMaxScore(SceneManager.GetActiveScene().name);
            var maxScoreMoreThanZero = maxScoreCurrentLvl > _score.CurrentLvlScore;
            if (maxScoreMoreThanZero)
			{
                _uIElements.MaxScoreFinalLvl[0].text = maxScoreCurrentLvl.ToString();
                _uIElements.MaxScoreFinalLvl[1].text = maxScoreCurrentLvl.ToString();
            }

            Debug.Log("scoreMoreThanZero" + scoreMoreThanZero);
            while (scoreMoreThanZero ?  scoreValue < _score.CurrentLvlScore : scoreValue > _score.CurrentLvlScore)
            {
                yield return new WaitForSeconds(0.00001f);
                scoreValue += scoreMoreThanZero ? 1 : -1;

                if (_uIElements.ScoreFinalLvl.Length == 2)
                {
                    _uIElements.ScoreFinalLvl[0].text = scoreValue.ToString();
                    _uIElements.ScoreFinalLvl[1].text = scoreValue.ToString();
                }
                if (_uIElements.MaxScoreFinalLvl.Length == 2 && !maxScoreMoreThanZero)
                {
                    _uIElements.MaxScoreFinalLvl[0].text = scoreValue.ToString();
                    _uIElements.MaxScoreFinalLvl[1].text = scoreValue.ToString();
                }

                yield return null;
            }


            MapCompletion.SaveEpisodeResult(levelCountsStars, _score.CurrentLvlScore);
        }


        private void UpdateScoreUI()
        {
            if (_gameManager.CountCorrectAnswer <= _questionMethods.Data.Questions.Length)
                _uIElements.NumberCurrentQuestion.text = _gameManager.CountCurrentAnswer + "/" + _questionMethods.Data.Questions.Length;


            if (_uIElements.ScoreFinalLvl.Length == 2)
            {
                _uIElements.ScoreFinalLvl[0].text = _score.CurrentLvlScore.ToString();
                _uIElements.ScoreFinalLvl[1].text = _score.CurrentLvlScore.ToString();
            }
            

            
        }
    }
}