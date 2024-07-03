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


        void Start()
        {
            scrollbar.onValueChanged.AddListener((float val) => ScrollbarCallback(val));
        }

        void ScrollbarCallback(float value)
        {
            if (value > 0.8f)
            {
                _overlayBottom.SetActive(true);
            }
            else if (value < 0.2f)
            {
                _overlayTop.SetActive(true);
            }
            else
            {
                _overlayBottom.SetActive(false);
                _overlayTop.SetActive(false);
            }
        }
    }
}