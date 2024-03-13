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

        private const string _fileName = "savelvls.dat";
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
        private Episode _currentEpisode;
        //[SerializeField] private StorageEpisode _storageEpisode;
        [SerializeField] private int _totalStars;
        public int TotalStars => _totalStars;
        [SerializeField] private int _totalScoreLvls;
        public int TotalScoreLvls { get { return _totalScoreLvls; } set { _totalScoreLvls = value; } }

        [SerializeField] private int _moneyShop;
        public int MoneyShop { get { return _moneyShop; } set { _moneyShop = value; } }


        private new void Awake()
        {
            base.Awake();
            LoadData();
        }


        public virtual void LoadData()
        {
            bool flag =  Saver<EpisodeScore[]>.TryLoad(_fileName, ref _completionData);
            Debug.Log(flag + " произошло сохранение!");

            if (flag)
            {
                foreach (var episodeScore in _completionData)
                {
                    _totalStars += episodeScore.Stars;
                    _totalScoreLvls += episodeScore.ScoreLvl;
                }
            }
            else
            {
                ResetEpisodeResult();
            }

            _totalScoreLvls -= _moneyShop;
            Debug.Log(_totalStars);
        }

        public static void SaveEpisodeResult(int levelStars, int levelScore)
        {
            Debug.Log("StartSave");
            string currentSceneName = SceneManager.GetActiveScene().name;

            if (Instance)
            {
                int i = 0;
                
                foreach (var item in Instance._completionData)
                {
                    Debug.Log(i + " index of levels");
                    Episode episode = StorageEpisode.Instance.GetEpisodes[item.EpisodeID - 1];
                    Debug.Log(episode.Levels.Length);
                    if (i >= 5)
                        i = 0;

                    if (episode == LevelSequenceController.Instance.CurrentEpisode && episode.Levels[i] == currentSceneName)
                    {
                        if (episode.Levels.Length > i)
                            item.LvlName = currentSceneName;

                        SaveStarsAndScoreLvls(item, levelStars, levelScore);

                        var score = item.ScoreLvl;
                        item.MaxScoreLvl = score > item.MaxScoreLvl ? score : item.MaxScoreLvl;
                        Debug.Log($"Current score {score} MaxScore {item.MaxScoreLvl}");
                    }
                    i++;
                 
                }
            }
        }

        private static void SaveStarsAndScoreLvls(EpisodeScore item, int levelStars, int levelScore)
        {
            if (item.Stars < levelStars)
            {
                Instance._totalStars += levelStars - item.Stars; // к примеру было 2 звезды. станет _totalStars += 3 - 2
                item.Stars = levelStars;

                Saver<EpisodeScore[]>.Save(_fileName, Instance._completionData);
                Debug.Log("Произошел сейв" + levelStars);
            }

            if (item.ScoreLvl < levelScore)
            {
                Instance._totalScoreLvls += levelScore - item.ScoreLvl; // к примеру было 2 очка. станет _totalScore += 3 - 2
                item.ScoreLvl = levelScore;

                Saver<EpisodeScore[]>.Save(_fileName, Instance._completionData);
                Debug.Log("Произошел сейв" + levelScore);
            }

            Instance._totalScoreLvls -= Instance._moneyShop;
            OnScoreUpdate?.Invoke();
        }

        public static void ResetEpisodeResult()
        {
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
                        Debug.Log("Произошел ResetEpisdoeResult");
                    }
                }
                Instance._totalStars = 0;
                Instance._totalScoreLvls = 0;
                Instance._moneyShop = 0;

                OnScoreUpdate?.Invoke();
            }
        }

        public int GetLvlStars(string episode)
        {
            foreach (var data in _completionData)
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
            foreach (var data in _completionData)
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

            foreach (var data in _completionData)
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
            foreach (var data in _completionData)
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
            foreach (var data in _completionData)
            {
                if (data.LvlName == episodeName)
                {
                    return data.MaxScoreLvl;
                }
            }
            return 0;
        }
    }
}