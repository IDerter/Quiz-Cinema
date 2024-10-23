using SpaceShooter;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using TMPro;
using TowerDefense;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace QuizCinema
{
    public class GameManager : SingletonBase<GameManager>, IDependency<QuestionMethods>, IDependency<Score>
    {
        public event Action<UIManager.ResolutionScreenType, int> UpdateDisplayScreenResolution;
        public event Action OnFinishGame;
        public event Action OnDownloadedQuestions;

        public event Action OnCorrectAnswer;
        public event Action OnInCorrectAnswer;

        public event Action OnNextQuestion;

        #region Variables
        [SerializeField] private TimerInLvl _timerInLvl;
        [SerializeField] private QuestionMethods _questionMethods;
        [SerializeField] private Score _score;
        [SerializeField] private Animator _timerAnimator;
        [SerializeField] private GameObject _numberQuestionContainer;
        [SerializeField] private GameObject _panelInfoQuiz;
        [SerializeField] private Animator _loadLvlBgAnimator;
        [SerializeField] private float _timeLoadLvl = 2f;
        public float GetTimeLoadLvl => _timeLoadLvl;
        public Animator TimerAnimator { get { return _timerAnimator; } set { value = _timerAnimator; } }

        private bool _isCorrectAnswer;
        private int _levelCountStars = 3;
        public int GetLevelCountStars => _levelCountStars;

        private const string _correctSFX = "CorrectSFX";
        private const string _inCorrectSFX = "IncorrectSFX";

        [Header("Lvl")]

        private int _loadingScreenStateParaHash = 0;

        private IEnumerator IE_WaitTillNextRound = null;

        private WWW www;

        private bool _pressButtonAnswer = false;

        [SerializeField] private int _countCorrectAnswer = 0;
        public int CountCorrectAnswer { get { return _countCorrectAnswer; } set { _countCorrectAnswer = value; } }
        [SerializeField] private int _countCurrentAnswer = 1;
        public int CountCurrentAnswer { get { return _countCurrentAnswer; } set { _countCurrentAnswer = value; } }

        #endregion
        private bool _isActivateBoost50Percent = false;
        public bool IsActivateBoost50Percent { get { return _isActivateBoost50Percent; } set { _isActivateBoost50Percent = value; } }
        [SerializeField] private bool _isRewarded;
        public bool IsRewarded { get { return _isRewarded; } set { _isRewarded = value; } }


        public void Construct(QuestionMethods obj) 
        { 
            _questionMethods = obj;
            Debug.Log("Construct in GameManager");
        }

        public void Construct(Score obj)
        {
            _score = obj;
            Debug.Log("Construct in Score");
        }


        private void Start()
        {
            _loadingScreenStateParaHash = Animator.StringToHash("Loading Screen");
			// _timerText.color = _timerDefaultColor;
			_timerInLvl.OnEndFillSlider += TimerOnEndFillSlider;
			RewardedAds.RewardOn += RewardOn;

            StartCoroutine(Downloader()); //Call download data

            var seed = UnityEngine.Random.Range(int.MinValue, int.MaxValue);
            UnityEngine.Random.InitState(seed);
        }

		private void RewardOn()
		{
            
            _score.UpdateScoreGame(_score.CurrentLvlScore / 2);
            Debug.Log($"UPDATE SCORE : {_score.CurrentLvlScore / 2}");
            _isRewarded = false;
            UIManager.Instance.StartCalculateScore(_levelCountStars);
        }

		private void TimerOnEndFillSlider()
		{
 
            Debug.Log("Accept False");
           // OnInCorrectAnswer?.Invoke();

            _questionMethods.FinishedQuestions.Add(_questionMethods._currentIndexNotRandom);

            var numberBar = LevelSequenceController.Instance.CurrentEpisode.EpisodeID;
            var numberLvlInBar = LevelSequenceController.Instance.CurrentLevel;


            Debug.Log("TimerOnEndFillSlider");
            var scoreAdd = StorageBarsInfo.Instance.InfoBars[numberBar - 1].ScoreLvlsInBar[numberLvlInBar % 5] / _questionMethods.GetLengthQuestions;
            Debug.Log(scoreAdd / 10 + " СКОЛЬКО НУЖНО ДОБАВИТЬ!");
            _score.UpdateScoreGame(_isCorrectAnswer ? scoreAdd : -scoreAdd);
            AudioManager.Instance.PlaySound((_isCorrectAnswer) ? _correctSFX : _inCorrectSFX);
            //TODO�� ������ �������� _currentIndexNotRandom ������� �� CurrentIndexQuestion � ���� ������� � ����� � QUESTUINMETHODS!!!
            // !!! !!!!
            //  _questionMethods.FinishedQuestions.Add(_questionMethods.CurrentIndexQuestion);

            //  _score.UpdateScoreGame(isCorrect ? _questionMethods.Data.Questions[_questionMethods.CurrentIndexQuestion].AddScore : -_questionMethods.Data.Questions[_questionMethods.CurrentIndexQuestion].AddScore);
            NextQuestion();
        }

		IEnumerator Downloader()
        {
            Debug.Log("StartDownloader");
            if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.WindowsPlayer)
            {
                www = new WWW("file://" + Application.streamingAssetsPath + $"/Q{SceneManager.GetActiveScene().buildIndex}.xml");
                Debug.Log("file://" + Application.streamingAssetsPath + $"/Q{SceneManager.GetActiveScene().buildIndex}.xml");
            }

            if  (Application.platform == RuntimePlatform.WebGLPlayer)
            {
                www = new WWW(Application.streamingAssetsPath + $"/Q{SceneManager.GetActiveScene().buildIndex}.xml");
                Debug.Log(Application.streamingAssetsPath + $"/Q{SceneManager.GetActiveScene().buildIndex}.xml");
                Debug.Log("Go to WEBGL Donwloader!");
            }

            if (Application.platform == RuntimePlatform.OSXEditor || Application.platform == RuntimePlatform.OSXPlayer)
            {
                www = new WWW("file://" + Application.streamingAssetsPath + $"/Q{SceneManager.GetActiveScene().buildIndex}.xml");
                Debug.Log("file://" + Application.streamingAssetsPath + $"/Q{SceneManager.GetActiveScene().buildIndex}.xml");
            }

            if (Application.platform == RuntimePlatform.Android)
            {
                www = new WWW("jar:file://" + Application.dataPath + $"!/assets/Q{SceneManager.GetActiveScene().buildIndex}.xml");
            }

            if (Application.platform == RuntimePlatform.IPhonePlayer)
            {
                www = new WWW("file://" + Application.dataPath + "/Raw" + $"/Q{SceneManager.GetActiveScene().buildIndex}.xml");
            }

            yield return new WaitForSeconds(_timeLoadLvl); //will wait until the download finishes
            _loadLvlBgAnimator.enabled = true;
            _timerAnimator.enabled = true;

            if (!MapCompletion.Instance.CompleteLearning)
                _timerInLvl.IsStopTime = true;

            if (_timerInLvl.IsStopTime)
                _timerInLvl.StopSlider();

            _panelInfoQuiz.SetActive(true);

            Debug.Log(_timerInLvl.IsStopTime + " gameManager");

            _timerInLvl.gameObject.SetActive(true);

            _numberQuestionContainer.SetActive(true);

            Debug.Log("End download");
            OnDownloadedQuestions?.Invoke();

            if (www.isDone == true)
            {
                File.WriteAllBytes(Application.persistentDataPath + $"/Q{SceneManager.GetActiveScene().buildIndex}.xml", www.bytes);
                //_questionMethods.Data = Data.Fetch(Path.Combine(GameUtility.FileDir, GameUtility.FileName + $"{SceneManager.GetActiveScene().buildIndex}" + ".xml"));
                _questionMethods.Data = Data.Fetch(Path.Combine(Application.persistentDataPath, GameUtility.FileName + $"{SceneManager.GetActiveScene().buildIndex}" + ".xml"));
                _questionMethods.Display();
                Debug.Log("TryToDisplay");
            }
        }

        public void Accept()
        {
            if (!_pressButtonAnswer)
            {
                _timerInLvl.StopSlider();

                _isCorrectAnswer = _questionMethods.CheckAnswers();
                Debug.Log("ISCORRECT" + _isCorrectAnswer);

                if (_isCorrectAnswer)
                {
                    Debug.Log("Accept True");
                    OnCorrectAnswer?.Invoke();
                    _countCorrectAnswer++;
                }
                else
                {
                    Debug.Log("Accept False");
                    OnInCorrectAnswer?.Invoke();
                }
                _questionMethods.FinishedQuestions.Add(_questionMethods._currentIndexNotRandom);

                var numberBar = LevelSequenceController.Instance.CurrentEpisode.EpisodeID;
                var numberLvlInBar = LevelSequenceController.Instance.CurrentLevel;

                Debug.Log(numberBar + "number bar" + numberLvlInBar % 5 + "numberLvlInVar");

                var scoreAdd = StorageBarsInfo.Instance.InfoBars[numberBar - 1].ScoreLvlsInBar[numberLvlInBar % 5] / _questionMethods.GetLengthQuestions;
                Debug.Log(scoreAdd / 10 + " СКОЛЬКО НУЖНО ДОБАВИТЬ!");
                _score.UpdateScoreGame(_isCorrectAnswer ? scoreAdd : -scoreAdd);
                AudioManager.Instance.PlaySound((_isCorrectAnswer) ? _correctSFX : _inCorrectSFX);
                //TODO�� ������ �������� _currentIndexNotRandom ������� �� CurrentIndexQuestion � ���� ������� � ����� � QUESTUINMETHODS!!!
                // !!! !!!!
                //  _questionMethods.FinishedQuestions.Add(_questionMethods.CurrentIndexQuestion);

                //  _score.UpdateScoreGame(isCorrect ? _questionMethods.Data.Questions[_questionMethods.CurrentIndexQuestion].AddScore : -_questionMethods.Data.Questions[_questionMethods.CurrentIndexQuestion].AddScore);

                Invoke("AfterAnswerСounted", 0.5f);
            }
            _pressButtonAnswer = true;
        }

        private void AfterAnswerСounted()
        {

            var numberBar = LevelSequenceController.Instance.CurrentEpisode.EpisodeID;
            var numberLvlInBar = LevelSequenceController.Instance.CurrentLevel;

            var scoreAdd = StorageBarsInfo.Instance.InfoBars[numberBar - 1].ScoreLvlsInBar[numberLvlInBar % 5] / _questionMethods.GetLengthQuestions;


            if (IE_WaitTillNextRound != null)
            {
                StopCoroutine(IE_WaitTillNextRound);
            }

            var type = (_isCorrectAnswer) ? UIManager.ResolutionScreenType.Correct : UIManager.ResolutionScreenType.Incorrect;
            UpdateDisplayScreenResolution?.Invoke(type, scoreAdd);

        }

        public void NextQuestion()
        {
            bool isCorrect = _questionMethods.CheckAnswers();
            Debug.Log(_questionMethods.IsFinished);

            if (_questionMethods.GetLengthQuestions > _countCurrentAnswer)
                _countCurrentAnswer++;

            if (!_questionMethods.IsFinished)
            {
                OnNextQuestion?.Invoke();

                IE_WaitTillNextRound = WaitTillNextRound();
                StartCoroutine(IE_WaitTillNextRound);
            }
            else
            {
                _levelCountStars = CalculateLevelStars();
                FinishGame();
                OnFinishGame?.Invoke();
            }
            _pressButtonAnswer = false;
            //_questionMethods.Display(); //TODO
        }

        private void FinishGame()
        {
            if (_questionMethods.IsFinished)
            {
                Debug.Log("FINISH GAME!");


                UIManager.Instance.StartCalculateScore(_levelCountStars);

                Debug.Log(_levelCountStars + " " + _score.CurrentLvlScore);

                var type = UIManager.ResolutionScreenType.Finish;
                UpdateDisplayScreenResolution?.Invoke(type, _questionMethods.Data.Questions[_questionMethods._currentIndexNotRandom].AddScore);

            }
        }

        public int CalculateLevelStars()
        {
            if (_countCorrectAnswer >= (_countCurrentAnswer - 1))
            {
                _levelCountStars = 3;
            }
            else if (_countCorrectAnswer >= Math.Ceiling(_countCurrentAnswer / 1.5))
            {
                _levelCountStars = 2;
            }
            else if (_countCorrectAnswer >= Math.Ceiling(_countCurrentAnswer / 2.0))
            {
                _levelCountStars = 1;
            }
            else
            {
                _levelCountStars = 0;
            }
            return _levelCountStars;
        }

        IEnumerator WaitTillNextRound()
        {
            yield return new WaitForSeconds(GameUtility.ResolutionDelayTime);

            _timerInLvl.StopSlider();

            _questionMethods._currentIndexNotRandom++; // TODO ����� ������
            _questionMethods.Display();


            _timerInLvl.StartSlider();
        }
    }
}