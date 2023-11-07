using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TowerDefense;
using System;
using SpaceShooter;

namespace QuizCinema
{
    public class DataLikeCinema : SingletonBase<DataLikeCinema>
    {
        private const string _fileName = "saveLikeCinema.dat";
        public string FileName => _fileName;

        [Serializable]
        public class CinemaInfo
        {
            [SerializeField] private Question question;

            public CinemaInfo (Question question)
            {
                this.question = question;
            }

            public Question Question { get => question; set => question = value; }
        }

        [SerializeField] private List<CinemaInfo> _completionDataCinema;
        public List<CinemaInfo> CompletionDataCinema { get { return _completionDataCinema; } set { _completionDataCinema = value; } }

        protected override void Awake()
        {
            base.Awake();
            LoadData();
        }

        public void LoadData()
        {
            Saver<List<CinemaInfo>>.TryLoad(_fileName, ref _completionDataCinema);
        }

        public static void SaveCinema(Question question)
        {
            Debug.Log("StartSave");
            CinemaInfo cinema = new CinemaInfo(question);
            bool uniqueCinema = true;

            foreach (var i in Instance._completionDataCinema)
            {
                if (i.Question._cadrCinemaName == question._cadrCinemaName)
                {
                    Debug.Log("Есть совпадение!");
                    Debug.Log(Instance._completionDataCinema.Contains(cinema));
                    uniqueCinema = false;
                }
            }

            if (uniqueCinema)
            {
                Instance._completionDataCinema.Add(cinema);
                Saver<List<CinemaInfo>>.Save(_fileName, Instance._completionDataCinema);
            }
            else
            {
                Debug.LogWarning("This cinema already in List!");
            }
        }

        public static void ResetCurrentCinema(Question question)
        {
            foreach (var i in Instance._completionDataCinema)
            {
                if (i.Question == question)
                {
                    Instance._completionDataCinema.Remove(i);
                    break;
                }
            }
        }

        public static void ResetDataCinema()
        {
            Instance._completionDataCinema.Clear();
        }
    }
}