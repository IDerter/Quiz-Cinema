using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class Score : MonoBehaviour
    {
        public event Action UpdateScore;
        [SerializeField] private GameManager _gameManager;

        [Header("Score")]

        [SerializeField] private int _currentLvlScore;
        public int CurrentLvlScore { get { return _currentLvlScore; } set { _currentLvlScore = value; }}


        private void Awake()
        {
            _currentLvlScore = 0;
        }



        public void UpdateScoreGame(int add)
        {
            _currentLvlScore += add;
            Debug.Log(add + " Сколько добавили к счету!");

            UpdateScore?.Invoke();
        }

    }
}