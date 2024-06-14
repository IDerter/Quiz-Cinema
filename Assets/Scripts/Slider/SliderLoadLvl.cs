using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class SliderLoadLvl : FillSlider
    {
        private IEnumerator IE_SliderLvl = null;
        public IEnumerator GetIESliderLvl => IE_SliderLvl;

        private void Start()
        {
            _time = GameManager.Instance.GetTimeLoadLvl - 0.5f;
            _delay = 0.05f;

            InitiliazeSlider();
            StartSlider();
        }


    }
}