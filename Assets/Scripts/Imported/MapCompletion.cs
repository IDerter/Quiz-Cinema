using UnityEngine.SceneManagement;
using UnityEngine;
using SpaceShooter;
using System;
using QuizCinema;
using UnityEngine.Events;

namespace TowerDefense
{
    public class MapCompletion : SingletonBase<MapCompletion>
    {
        public static event Action OnScoreUpdate;
        public static event Action OnBarOpenInfoUpdate;
        public static event Action OnLearningSave;

        private const string _fileName = "savelvls.dat";
        private const string _fileBarsSave = "saveBars.dat";
        private const string _fileLearningStepsName = "saveLearningSteps.dat";
        public string FileLearning => _fileLearningStepsName;
        public string FileName => _fileName;

        [Serializable]
        private class EpisodeScore 
        {
            [SerializeField] private int _episodeID;

            [SerializeField] private int _stars;
            [SerializeField] private int _scoreLvl;
            [SerializeField] private string _lvlName;
            [SerializeField] private int _maxScoreLvl;
            public int EpisodeID { get => _episodeID; set => _episodeID = value; }
            public int Stars { get => _stars; set => _stars = value; }

            public int ScoreLvl { get => _scoreLvl; set => _scoreLvl = value; }
            public string LvlName { get => _lvlName; set => _lvlName = value; }
            public int MaxScoreLvl { get => _maxScoreLvl; set => _maxScoreLvl = value; }

        }

        [SerializeField] private EpisodeScore[] _completionData;

        [SerializeField] private EpisodeScore[] _completionDataUnity;

        private Episode _currentEpisode;
        //[SerializeField] private StorageEpisode _storageEpisode;
        [SerializeField] private int _totalStars;
        public int TotalStars => _totalStars;
        [SerializeField] private int _totalScoreLvls;
        public int TotalScoreLvls { get { return _totalScoreLvls; } 
            set 
            {
                _totalScoreLvls = Mathf.Clamp(_totalScoreLvls, 0, int.MaxValue);
                _totalScoreLvls = value; 
            }
        }

        [SerializeField] private int _moneyShop;
        public int MoneyShop { get { return _moneyShop; } set { _moneyShop = value; } }

        [SerializeField] private int _skinShop;
        public int SkinShop { get { return _skinShop; } set { _skinShop = value; } }
        [SerializeField] private bool[] _isOpenBar;
        public bool[] GetOpensBar => _isOpenBar;
        [SerializeField] private bool _completeLearning;
        public bool CompleteLearning => _completeLearning;
        [SerializeField] private bool[] _learnSteps = new bool[10];
        public bool[] LearnSteps { get { return _learnSteps; } set { _learnSteps = value; } }


        private new void Awake()
        {
            base.Awake();
        }

        private void Start()
        {
            SaveNewInUnityProgress();
            _moneyShop = BoostsManager.Instance.GetMoneyForBoosts;
            _skinShop = SkinManager.Instance.GetMoneyForSkins;

			SkinManager.Instance.OnBuySkin += OnBuy;
            BoostsManager.Instance.OnBuyBoost += OnBuy;
        }

		private void OnDestroy()
        {
            SkinManager.Instance.OnBuySkin -= OnBuy;
            BoostsManager.Instance.OnBuyBoost -= OnBuy;
        }

        private void OnBuy()
        {
            OnScoreUpdate?.Invoke();
        }

        public virtual void LoadData()
        {
            bool flag =  Saver<EpisodeScore[]>.TryLoad(_fileName, ref _completionData);
            Debug.Log(flag + " произошло сохранение!");

            //bool flagLearningSteps = Saver<bool[]>.TryLoad(_fileLearningStepsName, ref _learnSteps);

            if (flag)
            {
                foreach (var episodeScore in _completionDataUnity)
                {
                    _totalStars += episodeScore.Stars;
                    _totalScoreLvls += episodeScore.ScoreLvl;
                }
            }
            else
            {
                ResetEpisodeResult();
            }

           // _totalScoreLvls -= _moneyShop;
            OnScoreUpdate?.Invoke();
            Debug.Log(_totalStars);
            Instance._isOpenBar = new bool[StorageEpisode.Instance.GetEpisodes.Length];
            _isOpenBar[0] = true;
            bool flagOpenBar = Saver<bool[]>.TryLoad(_fileBarsSave, ref Instance._isOpenBar);
            Saver<bool[]>.Save(_fileBarsSave, Instance._isOpenBar);
            /*
            for (int i = 1; i < Instance._isOpenBar.Length; i++)
			{
                var episodeStars = GetEpisodeStars(i);
                var needToOpenStars = StorageBarsInfo.Instance.InfoBars[i].NeedStarsScore;

                Debug.Log(episodeStars + " " + needToOpenStars);
                if (episodeStars >= needToOpenStars)
				{
                    _isOpenBar[i] = true;
				}
				else
				{
                    _isOpenBar[i] = false;
                }
            }
            */
            Saver<bool[]>.Save(_fileBarsSave, Instance._isOpenBar);
            Saver<bool[]>.Save(_fileLearningStepsName, Instance._learnSteps);
        }

        public void SaveNewInUnityProgress()
        {
            bool flag = Saver<EpisodeScore[]>.TryLoad(_fileName, ref _completionData);
            bool flagBarsSave = Saver<bool[]>.TryLoad(_fileBarsSave, ref _isOpenBar);
            bool flagLearningSteps = Saver<bool[]>.TryLoad(_fileLearningStepsName, ref _learnSteps);

            Debug.Log(flag + " произошло попытка получени€ сохранение! " + _completionData.Length);
            Debug.Log(flagLearningSteps + " произошло попытка получени€ сохранение обучени€! " + _learnSteps.Length);

            if (flag)
            {
                for (int i = 0; i < _completionData.Length; i++)
                {
                    //Debug.Log(i + " index");
                    _completionDataUnity[i] = _completionData[i];
                }
            }
            else
            {
                ResetEpisodeResult();
            }
            if (flagLearningSteps)
			{
                if (_learnSteps[4])
                    SaveFinishLearining();
			}

            LoadData();
        }

        public static void SaveLearningProgress()
		{
            Saver<bool[]>.Save(_fileLearningStepsName, Instance._learnSteps);
        }

        public static void SaveFinishLearining()
        {
            Instance._completeLearning = true;
        }

        public static void ResetLearningAndBarProgress()
		{
            Instance._learnSteps = new bool[Instance._learnSteps.Length];
            Instance._isOpenBar = new bool[Instance._isOpenBar.Length];
            Instance._isOpenBar[0] = true;
            Saver<bool[]>.Save(_fileLearningStepsName, Instance._learnSteps);
            Saver<bool[]>.Save(_fileBarsSave, Instance._isOpenBar);
            Instance._completeLearning = false;
        }

        public static void SaveBarProgress()
        {
            Saver<bool[]>.Save(_fileBarsSave, Instance._isOpenBar);
        }

        public static void SaveEpisodeResult(int levelStars, int levelScore)
        {
            Debug.Log("StartSave");
            string currentSceneName = SceneManager.GetActiveScene().name;

            if (Instance)
            {
                int i = 0;
                
                foreach (var item in Instance._completionDataUnity)
                {
                   // Debug.Log(i + " index of levels" + item.LvlName);
                    Episode episode = StorageEpisode.Instance.GetEpisodes[item.EpisodeID - 1];
                   // Debug.Log(episode.Levels.Length);
                    if (i >= 5)
                        i = 0;

                    if (episode == LevelSequenceController.Instance.CurrentEpisode && episode.Levels[i] == currentSceneName)
                    {
                        if (episode.Levels.Length > i)
                            item.LvlName = currentSceneName;

                        Debug.Log("Level stars: " + levelStars);

                        SaveStarsAndScoreLvls(item, levelStars, levelScore);

                        var score = item.ScoreLvl;
                        item.MaxScoreLvl = score > item.MaxScoreLvl ? score : item.MaxScoreLvl;
                        Debug.Log($"Current score {score} MaxScore {item.MaxScoreLvl}");
                    }
                    i++;
                 
                }
            }
            OnScoreUpdate?.Invoke();
        }


        private static void SaveStarsAndScoreLvls(EpisodeScore item, int levelStars, int levelScore)
        {

            if (item.ScoreLvl < levelScore)
            {
                Instance._totalScoreLvls += levelScore - item.ScoreLvl; // к примеру было 2 очка. станет _totalScore += 3 - 2
                item.ScoreLvl = levelScore;

                Instance._totalStars += levelStars - item.Stars;
                item.Stars = levelStars;

                Saver<EpisodeScore[]>.Save(_fileName, Instance._completionDataUnity);
                Debug.Log("ѕроизошел сейв" + levelScore);
            }

            //Instance._totalScoreLvls -= Instance._moneyShop;
            OnScoreUpdate?.Invoke();
        }

        public static void ResetEpisodeResult()
        {
            if (Instance)
            {
                foreach (var item in Instance._completionDataUnity)
                {

                    if (item.Stars > 0 || item.ScoreLvl > 0)
                    {
                        item.Stars = 0;
                        item.ScoreLvl = 0;
                        item.MaxScoreLvl = 0;

                        Saver<EpisodeScore[]>.Save(_fileName, Instance._completionDataUnity);
                        Debug.Log("ѕроизошел ResetEpisdoeResult");
                    }
                }
                Instance._totalStars = 0;
                Instance._totalScoreLvls = 0;
                Instance._moneyShop = 0;
                Instance._skinShop = 0;

                OnScoreUpdate?.Invoke();
            }

            if (Instance)
            {
                foreach (var item in Instance._completionData)
                {

                    if (item.Stars > 0 || item.ScoreLvl > 0)
                    {
                        item.Stars = 0;
                        item.ScoreLvl = 0;
                        item.MaxScoreLvl = 0;

                        Saver<EpisodeScore[]>.Save(_fileName, Instance._completionData);
                        Debug.Log("ѕроизошел ResetEpisdoeResult");
                    }
                }
                Instance._totalStars = 0;
                Instance._totalScoreLvls = 0;
                Instance._moneyShop = 0;
                Instance._skinShop = 0;

                OnScoreUpdate?.Invoke();
            }
        }

        public int GetLvlStars(string episode)
        {
            foreach (var data in _completionDataUnity)
            {
                if (data.LvlName == episode)
                {
                    return data.Stars;
                }
            }
            return 0;
        }


        public int GetLvlScore(string episodeName)
        {
            foreach (var data in _completionDataUnity)
            {
                if (data.LvlName == episodeName)
                {
                    return data.ScoreLvl;
                }
            }
            return 0;
        }

        public int GetEpisodeStars (int idEpisode)
        {
            var starsEpisode = 0;

            foreach (var data in _completionDataUnity)
            {
                if (data.EpisodeID == idEpisode)
                {
                    starsEpisode += data.Stars;
                }
            }
            return starsEpisode;
        }

        public int GetLvlNumber(string episodeName)
        {
            int i = 0;
            foreach (var data in _completionDataUnity)
            {
                if (data.LvlName == episodeName)
                {
                    return i;
                }
                i++;
            }
            return 0;
        }

        public int GetLvlMaxScore(string episodeName)
        {
            foreach (var data in _completionDataUnity)
            {
                if (data.LvlName == episodeName)
                {
                    Debug.Log("Max Lvl");
                    return data.MaxScoreLvl;
                }
            }
            return 0;
        }

        public int GetSumLvlScore(int episodeID)
        {
            int sum = 0;
            foreach (var data in _completionDataUnity)
            {
                if (data.EpisodeID == episodeID)
                {
                    sum += data.ScoreLvl;
                }
            }
            return sum;
        }

    }
}