using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class TimerInLvl : FillSlider
    {
        [SerializeField] private QuestionMethods _questionMethods;
        [SerializeField] private bool _isStopTime = false;
        public bool IsStopTime { get { return _isStopTime; } set { _isStopTime = value; } }

        private void Start()
        {
            Debug.Log(_isStopTime);
            if (!_isStopTime)
                StartTimer();
        }

        public void StartTimer()
		{
            InitiliazeSlider();
            StartSlider();
        }
    }
}