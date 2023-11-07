using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class CadrsAnswers : AnswerData
    {
        public static event Action<AnswerData> UpdateButtonCadr;

        [SerializeField] private Mask _imageOutlineMask;

        private bool _checked = false;

        public void FirstTouch()
        {
            UpdateButtonCadr?.Invoke(this);

            _checked = !_checked;
            Debug.Log(_checked);
            if (Toogle.TryGetComponent<Mask>(out var mask))
            {
                mask.showMaskGraphic = _checked;
            }
        }

        public override void SwitchCase()
        {
            base.SwitchCase();
        }

    }
}