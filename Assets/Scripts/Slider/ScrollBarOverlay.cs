using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class ScrollBarOverlay : MonoBehaviour
    {
        [SerializeField] private Scrollbar scrollbar;
        [SerializeField] private GameObject _overlayTop;
        [SerializeField] private GameObject _overlayBottom;
        [SerializeField] private float _prevValue;
        [SerializeField] private bool _startLvl = true;

        void Start()
        {
            scrollbar.onValueChanged.AddListener((float val) => {
                ScrollbarCallback(val);
            });

        }

		void ScrollbarCallback(float value)
        {
            if (!_startLvl)
			{
                if (_prevValue - value > 0)
                {
                    _overlayBottom.SetActive(false);
                    _overlayTop.SetActive(true);
                }
                else if (_prevValue - value < 0)
                {
                    _overlayBottom.SetActive(true);
                    _overlayTop.SetActive(false);
                }
                else
                {
                    _overlayBottom.SetActive(false);
                    _overlayTop.SetActive(false);
                }

                _prevValue = value;
            }
            _startLvl = false;
        }

        public void ResetState()
		{
            _overlayBottom.SetActive(true);
            _overlayTop.SetActive(false);
            scrollbar.value = 1;
        }
    }
}