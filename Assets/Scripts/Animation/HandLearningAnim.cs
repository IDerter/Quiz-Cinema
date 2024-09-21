using Cysharp.Threading.Tasks;
using DG.Tweening;
using NaughtyAttributes;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class HandLearningAnim : MonoBehaviour
    {
        [SerializeField] private RectTransform _objAnim;
        private Tween objTween;
        [SerializeField] private bool _directionRight = true;
        [SerializeField] private bool _isLoop = true;

		private void Start()
		{
            if (_isLoop)
                ClickAnim();
		}

		[Button()]
        public virtual async void ClickAnim()
        {
            if (_objAnim != null)
			{
                Vector3 rotate = _objAnim.transform.eulerAngles;
                rotate.z = _directionRight ? -90 : 90;
                _objAnim.transform.rotation = Quaternion.Euler(rotate);
            }
            objTween = _objAnim.DOScale(new Vector3(0.95f, 0.95f, 0.95f), 1f);
            objTween = _directionRight ? _objAnim.DOMoveX(0.25f, 1f) : _objAnim.DOMoveX(-0.25f, 1f);
            await objTween.ToUniTask();

            objTween = _objAnim.DOScale(new Vector3(1f, 1f, 1f), 1f);
            objTween = _directionRight ? _objAnim.DOMoveX(-0.25f, 1f) : _objAnim.DOMoveX(0.25f, 1f);
            await objTween.ToUniTask();
            if (_isLoop)
                ClickAnim();
        }
    }
}