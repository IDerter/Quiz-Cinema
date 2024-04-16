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
    public class GameManager : MonoBehaviour, IDependency<QuestionMethods>, IDependency<Score>, IDependency<LvlData>, IDependency<Timer>
    {
        public event Action<UIManager.ResolutionScreenType, int> UpdateDisplayScreenResolution;
        public event Action OnFinishGame;

        public event Action OnCorrectAnswer;
        public event Action OnUnCorrectAnswer;

        #region Variables
        [SerializeField] private QuestionMethods _questionMethods;
        [SerializeField] private Score _score;
        [SerializeField] private Animator _timerAnimator;
        [SerializeField] private Timer _timer;
        public Animator TimerAnimator { get { return _timerAnimator; } set { value = _timerAnimator; } }

        [SerializeField] private Animator _loadingScreenAnimator;

        private int levelCountStars = 3;

        [Header("Lvl")]
        [SerializeField] private LvlData _lvl;

        private int _loadingScreenStateParaHash = 0;

        private IEnumerator IE_WaitTillNextRound = null;

        private WWW www;

        [SerializeField] private int _countCorrectAnswer = 0;
        public int CountCorrectAnswer { get { return _countCorrectAnswer; } set { _countCorrectAnswer = value; } }
        [SerializeField] private int _countCurrentAnswer = 1;
        public int CountCurrenttAnswer { get { return _countCurrentAnswer; } set { _countCurrentAnswer = value; } }

        #endregion
        private bool _isActivateBoost50Percent = false;
        public bool IsActivateBoost50Percent { get { return _isActivateBoost50Percent; } set { _isActivateBoost50Percent = value; } }

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
        public void Construct(LvlData obj) => _lvl = obj;

        public void Construct(Timer obj)
        {
            _timer = obj;
        }

        private void Start()
        {
            _loadingScreenStateParaHash = Animator.StringToHash("Loading Screen");
           // _timerText.color = _timerDefaultColor;
   
            StartCoroutine(Downloader(_lvl.Level)); //Call download data

            var seed = UnityEngine.Random.Range(int.MinValue, int.MaxValue);
            UnityEngine.Random.InitState(seed);
        }

        IEnumerator Downloader(int level)
        {
           
            _loadingScreenAnimator.SetInteger(_loadingScreenStateParaHash, 1);

            Debug.Log("StartDownloader");
            if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.WindowsPlayer)
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
            yield return new WaitForSeconds(2f); //will wait until the download finishes
            _loadingScreenAnimator.SetInteger(_loadingScreenStateParaHash, 0);
            _timerAnimator.enabled = true;

            Debug.Log("End download");

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
            _timer.UpdateTimer(false);

            bool isCorrect =_questionMethods.CheckAnswers();
            Debug.Log(isCorrect + " Правильный ответ!");

            if (isCorrect)
            {
                OnCorrectAnswer?.Invoke();
                _countCorrectAnswer++;
            }
            else
            {
                OnUnCorrectAnswer?.Invoke();
            }

            //TODOне забудь заменить _currentIndexNotRandom обратно на CurrentIndexQuestion в этом скрипте и потом в QUESTUINMETHODS!!!
            // !!! !!!!
            //  _questionMethods.FinishedQuestions.Add(_questionMethods.CurrentIndexQuestion);

            //  _score.UpdateScoreGame(isCorrect ? _questionMethods.Data.Questions[_questionMethods.CurrentIndexQuestion].AddScore : -_questionMethods.Data.Questions[_questionMethods.CurrentIndexQuestion].AddScore);

            _questionMethods.FinishedQuestions.Add(_questionMethods._currentIndexNotRandom);

              _score.UpdateScoreGame(isCorrect ? _questionMethods.Data.Questions[_questionMethods._currentIndexNotRandom].AddScore : -_questionMethods.Data.Questions[_questionMethods._currentIndexNotRandom].AddScore);

            if (IE_WaitTillNextRound != null)
            {
                StopCoroutine(IE_WaitTillNextRound);
            }

            AudioManager.Instance.PlaySound((isCorrect) ? "CorrectSFX" : "IncorrectSFX");

            var type = (isCorrect) ? UIManager.ResolutionScreenType.Correct : UIManager.ResolutionScreenType.Incorrect;
            UpdateDisplayScreenResolution?.Invoke(type, _questionMethods.Data.Questions[_questionMethods._currentIndexNotRandom].AddScore);
        }

        public void NextQuestion()
        {
            bool isCorrect = _questionMethods.CheckAnswers();
            Debug.Log(_questionMethods.IsFinished);

            Debug.Log(_questionMethods.GetLengthQuestions + "длина + " + _countCurrentAnswer);
            if (_questionMethods.GetLengthQuestions > _countCurrentAnswer)
                _countCurrentAnswer++;

            if (!_questionMethods.IsFinished)
            {
                IE_WaitTillNextRound = WaitTillNextRound();
                StartCoroutine(IE_WaitTillNextRound);
            }
            else
            {
                Debug.Log(_countCurrentAnswer + " текущее кол-во вопросов!");

                OnFinishGame?.Invoke();
                Debug.Log("ПОДПИСЫВАЕМСЯ НА ONFINISHGAME!");

                FinishGame();
            }
            
            //_questionMethods.Display(); //TODO
        }

        private void FinishGame()
        {
            if (_questionMethods.IsFinished)
            {
                Debug.Log("FINISH GAME!");
                _lvl.Level++;

                Debug.Log(_lvl.Level);
                if (_lvl.Level > _lvl.MaxLevel)
                {
                    _lvl.Level = 1;
                }
                PlayerPrefs.SetInt(GameUtility.SavePrefLvlKey, _lvl.Level);

                Debug.Log(Math.Ceiling(_questionMethods.FinishedQuestions.Count / 1.5) + " - сколько нужно ответить на 2 звезды");
                Debug.Log(Math.Ceiling(_questionMethods.FinishedQuestions.Count / 3.0) + " - сколько нужно ответить на 1 звезду");

                CalculateLevelStars();

                MapCompletion.SaveEpisodeResult(levelCountStars, _score.CurrentLvlScore);

                var type = UIManager.ResolutionScreenType.Finish;
                UpdateDisplayScreenResolution?.Invoke(type, _questionMethods.Data.Questions[_questionMethods._currentIndexNotRandom].AddScore);
            }
        }

        public int CalculateLevelStars()
        {
            if (_countCorrectAnswer == _questionMethods.FinishedQuestions.Count)
            {
                levelCountStars = 3;
            }
            else if (_countCorrectAnswer >= Math.Ceiling(_questionMethods.FinishedQuestions.Count / 1.5))
            {
                levelCountStars = 2;
            }
            else if (_countCorrectAnswer >= Math.Ceiling(_questionMethods.FinishedQuestions.Count / 3.0))
            {
                levelCountStars = 1;
            }
            else
            {
                levelCountStars = 0;
            }

            return levelCountStars;
        }

        IEnumerator WaitTillNextRound()
        {
            yield return new WaitForSeconds(GameUtility.ResolutionDelayTime);

            _timer.UpdateTimer(false);

            _questionMethods._currentIndexNotRandom++; // TODO потом убрать
            _questionMethods.Display();

        }
    }
}