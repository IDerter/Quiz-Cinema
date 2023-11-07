using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SpaceShooter;
using System;

namespace TowerDefense
{
    public class MapCompletion : SingletonBase<MapCompletion>
    {
        private const string _fileName = "save.dat";
        public string FileName => _fileName;

        [Serializable]
        private class EpisodeScore 
        {
            [SerializeField] private Episode _episode;
            [SerializeField] private int _stars;
            [SerializeField] private int _scoreLvl;

            public Episode Episode { get => _episode; set => _episode = value; }
            public int Stars { get => _stars; set => _stars = value; }

            public int ScoreLvl { get => _scoreLvl; set => _scoreLvl = value; }

        }

        [SerializeField] private EpisodeScore[] _completionData;
        [SerializeField] private int _totalStars;
        public int TotalStars => _totalStars;
        [SerializeField] private int _totalScoreLvls;
        public int TotalScoreLvls => _totalScoreLvls;

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
            Debug.Log(_totalStars);
        }

        public static void SaveEpisodeResult(int levelStars, int levelScore)
        {
            Debug.Log("StartSave");
            if (Instance)
            {
                foreach (var item in Instance._completionData)
                {
                    if (item.Episode == LevelSequenceController.Instance.CurrentEpisode)
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
                    }
                }
            }
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

                        Saver<EpisodeScore[]>.Save(_fileName, Instance._completionData);
                        Debug.Log("Произошел ResetEpisdoeResult");
                    }
                }
                Instance._totalStars = 0;
                Instance._totalScoreLvls = 0;
            }
        }

        public int GetEpisodeStars(Episode episode)
        {
            foreach (var data in _completionData)
            {
                if (data.Episode == episode)
                {
                    return data.Stars;
                }
            }
            return 0;
        }


        public int GetEpisodeScore(Episode episode)
        {
            foreach (var data in _completionData)
            {
                if (data.Episode == episode)
                {
                    return data.ScoreLvl;
                }
            }
            return 0;
        }

        public int GetEpisodeNumber(Episode episode)
        {
            int i = 0;
            foreach (var data in _completionData)
            {
                i++;
                if (data.Episode == episode)
                {
                    return i;
                }
            }
            return 0;
        }
    }
}