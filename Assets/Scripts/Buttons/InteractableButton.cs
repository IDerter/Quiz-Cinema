using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class InteractableButton : MonoBehaviour
    {
        [SerializeField] private Image[] _imagesButton;

        private void Start()
        {
            _imagesButton = GetComponentsInChildren<Image>();
        }

        public void InteractableOn()
        {
            for (int i = 0; i < _imagesButton.Length; i++)
            {
                _imagesButton[i].color = new Color(1f, 1f, 1f, 1f);
            }
        }

        public void InteractableOff()
        {
            for (int i = 0; i < _imagesButton.Length; i++)
            {
                //_imagesButton[i].color = Color.black;
                _imagesButton[i].color = new Color(0f, 0f, 0f, 0.5f);
            }
        }
    }
}