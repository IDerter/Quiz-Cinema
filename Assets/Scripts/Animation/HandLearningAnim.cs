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
        [SerializeField] private float _moveValue = 0.25f;
        [SerializeField] private bool _isDelete = false;
        [SerializeField] private FadeImage _fadeImage;

		private void Start()
		{
            if (_isLoop)
                ClickAnim();

			SwipeDetection.OnSwipeInput += OnSwipeInput;
		}

		private void OnDestroy()
		{
            SwipeDetection.OnSwipeInput -= OnSwipeInput;
        }

		private void OnSwipeInput(Vector2 arg0)
		{
            if (_isDelete)
                _fadeImage?.FadeOutStartAnim();
            Destroy(gameObject, 1f);

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
            if (_objAnim != null)
			{
                objTween = _objAnim.DOScale(new Vector3(0.95f, 0.95f, 0.95f), 1f);
                objTween = _directionRight ? _objAnim.DOMove(new Vector3(_objAnim.transform.position.x + _moveValue, _objAnim.transform.position.y, _objAnim.transform.position.z), 1f)
                    : _objAnim.DOMove(new Vector3(_objAnim.transform.position.x - _moveValue, _objAnim.transform.position.y, _objAnim.transform.position.z), 1f);
                await objTween.ToUniTask();

                objTween = _objAnim.DOScale(new Vector3(1f, 1f, 1f), 1f);
                objTween = _directionRight ? _objAnim.DOMove(new Vector3(_objAnim.transform.position.x - _moveValue, _objAnim.transform.position.y, _objAnim.transform.position.z), 1f)
                    : _objAnim.DOMove(new Vector3(_objAnim.transform.position.x + _moveValue, _objAnim.transform.position.y, _objAnim.transform.position.z), 1f);
                await objTween.ToUniTask();
                if (_isLoop)
                    ClickAnim();
            }
        }
    }
}