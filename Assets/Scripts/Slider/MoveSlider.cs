using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class MoveSlider : MonoBehaviour
    {
        [SerializeField] private Slider _sliderVolume;
        [SerializeField] private Image _sliderFillVolime;

        [SerializeField] private Slider _sliderMusic;
        [SerializeField] private Image _sliderFillMusic;

        private void Start()
        {
            _sliderMusic.onValueChanged.AddListener(delegate { ValueChangeMusic(); });
            _sliderVolume.onValueChanged.AddListener(delegate { ValueChangeVolume(); });
        }

        private void ValueChangeVolume()
        {
            _sliderFillVolime.fillAmount = _sliderVolume.value;
        }

        private void ValueChangeMusic()
        {
            _sliderFillMusic.fillAmount = _sliderMusic.value;
        }


    }
}