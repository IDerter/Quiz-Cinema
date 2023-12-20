using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class CadrsAnswers : AnswerData
    {
        public static event Action<AnswerData, bool> UpdateButtonCadr;

        [SerializeField] private Image _imageOutline;

        [SerializeField] private bool _pressButtonCheck = false;

        private void Start()
        {
            _imageOutline.gameObject.SetActive(false);
        }

        private void OnEnable()
        {
            _pressButtonCheck = false;
        }

        private void OnDisable()
        {
            _imageOutline.gameObject.SetActive(false);
        }

        public void FirstTouch()
        {
            _pressButtonCheck = !_pressButtonCheck;
            UpdateButtonCadr?.Invoke(this, _pressButtonCheck);
            Debug.Log(_pressButtonCheck);
            _imageOutline.gameObject.SetActive(_pressButtonCheck);
        }

        public override void SwitchCase()
        {
            base.SwitchCase();
        }

    }
}