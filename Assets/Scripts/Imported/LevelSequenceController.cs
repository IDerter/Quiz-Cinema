using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace SpaceShooter
{
    public class LevelSequenceController : SingletonBase<LevelSequenceController>
    {
        public static string _mapMenuSceneNickname = "LevelMap";
        public static string _mainMenuSceneNickname = "MainMenu";

        public Episode CurrentEpisode { get; private set; }

        public int CurrentLevel { get; private set; }

        public bool LastLevelResult { get; private set; }

        public PlayerStatistics LevelStatisics { get; private set; }

        private float _multiplierScore;

        [SerializeField] private int _maxScore = 0;
        public int MaxScore => _maxScore;

        [SerializeField] private int _allKills = 0;

        [SerializeField] private int _bestTime = int.MaxValue;

        private void Start()
        {
            _allKills = PlayerPrefs.GetInt("AllKills");
            _bestTime = PlayerPrefs.GetInt("BestTime");
            _maxScore = PlayerPrefs.GetInt("MaxScore");
        }

        public void StartEpisode(Episode episode, int currentLevelIndex, string episodeName)
        {
            CurrentEpisode = episode;
            // CurrentLevel = 0;
            CurrentLevel = currentLevelIndex;

            LevelStatisics = new PlayerStatistics();
            LevelStatisics.Reset();

            SceneManager.LoadScene(episodeName);
        }

        public void RestartLevel()
        {
            //SceneManager.LoadScene(CurrentEpisode.Levels[CurrentLevel]);
            SceneManager.LoadScene(1);
        }

        public void LoadLevel(int sceneIndex)
        {
            SceneManager.LoadScene(sceneIndex);
        }

        public void NextLevel()
        {
            //LevelStatisics.Reset();
            Debug.Log("NextLevel");
            CurrentLevel++;

            Debug.Log(CurrentEpisode.Levels.Length + " " + CurrentLevel);
            //CalculateLevelStatistics();
            var correctIndex = CurrentLevel - (int.Parse(CurrentEpisode.EpisodeName.Substring(CurrentEpisode.EpisodeName.Length - 1)) - 1) * CurrentEpisode.Levels.Length;
            Debug.Log(correctIndex + " " + int.Parse(CurrentEpisode.EpisodeName.Substring(CurrentEpisode.EpisodeName.Length - 1)));

            if (CurrentEpisode.Levels.Length * int.Parse(CurrentEpisode.EpisodeName.Substring(CurrentEpisode.EpisodeName.Length - 1))  <= CurrentLevel) // ÍÀÄÎ ÐÅØÈÒÜ ÂÎÏÐÎÑ ÓÌÍÎÆÀÒÜ ÍÓÆÍÎ ÍÀ 3
            {
                Debug.Log(CurrentEpisode.Levels.Length * int.Parse(CurrentEpisode.EpisodeName.Substring(CurrentEpisode.EpisodeName.Length - 1)));
                SceneManager.LoadScene(_mapMenuSceneNickname);
            }
            else
            {
                SceneManager.LoadScene(CurrentEpisode.Levels[correctIndex]);
            }
        }

        public void FinishCurrentLevel(bool success)
        {
            Debug.Log("FINISH");

            LastLevelResult = success;

            //CalculateLevelStatistics();

            //ResultPanelController.Instance.ShowResults(success);
        }

        /*private void CalculateLevelStatistics()
        {
            if (LastLevelResult)
                _multiplierScore = LevelController.Instance.StandartTimeToWin / LevelController.Instance.LevelTime;

            if (_multiplierScore <= 1)
                _multiplierScore = 1;

            LevelStatisics.Score = Player.Instance.Score * (int) _multiplierScore;
            LevelStatisics.Multiplier = (int) _multiplierScore;
            LevelStatisics.NumKills = Player.Instance.NumKills;
            LevelStatisics.Time = (int) LevelController.Instance.LevelTime;

            if (_maxScore < LevelStatisics.Score)
            {
                _maxScore = LevelStatisics.Score;
                Save("MaxScore", _maxScore);
                Debug.Log("SaveMaxScore");
            }

            _allKills += LevelStatisics.NumKills;
            Save("AllKills", _allKills);

            if (_bestTime > LevelStatisics.Time)
            {
                _bestTime = LevelStatisics.Time;
                Save("BestTime", _bestTime);
                Debug.Log("SaveBestTime");
            }

        }
        */
        private void Save(string key, int value)
        {
            PlayerPrefs.SetInt(key, value);
        }

        private void Load(string key, int value)
        {
            _maxScore = PlayerPrefs.GetInt(key, value);
        }
    }

}
