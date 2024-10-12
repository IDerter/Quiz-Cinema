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
        [SerializeField] private RectTransform _contentScroll;
        [SerializeField] private int _countScrollBarCallback = 0;

        void Start()
        {
            if (_contentScroll != null)
                _contentScroll.transform.position = new Vector3(_contentScroll.transform.position.x, -680, _contentScroll.transform.position.z);

            scrollbar.onValueChanged.AddListener((float val) => {
                ScrollbarCallback(val);
            });
            _startLvl = true;
        }

		private void OnEnable()
		{
            _countScrollBarCallback = 0;
            if (_contentScroll != null)
			    _contentScroll.transform.position = new Vector3(_contentScroll.transform.position.x, -680, _contentScroll.transform.position.z);
            _startLvl = true;
        }

		void ScrollbarCallback(float value)
        {
            if (!_startLvl && _countScrollBarCallback > 1)
			{
                Debug.Log(_startLvl + " scrollbarOverlay");
                if (_prevValue - value > 0)
                {
                    //_overlayBottom.SetActive(false);
                    //_overlayTop.SetActive(true);
                    if (_overlayTop.TryGetComponent(out FadeImage fadeOverlayTopImage))
                        fadeOverlayTopImage.FadeInStartAnim();
                    if (_overlayBottom.TryGetComponent(out FadeImage fadeOverlayBottomImage))
                        fadeOverlayBottomImage.FadeOutStartAnim();
                }
                else if (_prevValue - value < 0)
                {
                    // _overlayBottom.SetActive(true);
                    // _overlayTop.SetActive(false);
                    if (_overlayTop.TryGetComponent(out FadeImage fadeOverlayTopImage))
                        fadeOverlayTopImage.FadeOutStartAnim();
                    if (_overlayBottom.TryGetComponent(out FadeImage fadeOverlayBottomImage))
                        fadeOverlayBottomImage.FadeInStartAnim();

                }
                else
                {
                    // _overlayBottom.SetActive(false);
                    // _overlayTop.SetActive(false);
                    if (_overlayTop.TryGetComponent(out FadeImage fadeOverlayTopImage))
                        fadeOverlayTopImage.FadeOutStartAnim();
                    if (_overlayBottom.TryGetComponent(out FadeImage fadeOverlayBottomImage))
                        fadeOverlayBottomImage.FadeOutStartAnim();
                }

                _prevValue = value;
            }
            _countScrollBarCallback++;
            Debug.Log(_countScrollBarCallback);
            _startLvl = false;
        }

        public void ResetState()
		{
            Debug.Log("RESETSTATE SCROLLBAR");
            if (_overlayTop.TryGetComponent(out FadeImage fadeOverlayTopImage))
                fadeOverlayTopImage.FadeOutStartAnim();
            if (_overlayBottom.TryGetComponent(out FadeImage fadeOverlayBottomImage))
                fadeOverlayBottomImage.FadeInStartAnim();
            scrollbar.value = 1;
        }
    }
}