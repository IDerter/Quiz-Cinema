using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace QuizCinema
{
    public class LoadScreen : MonoBehaviour
    {
        [SerializeField] private Image _sliderFill;
        [SerializeField] private Slider _slider;
        [SerializeField] private GameObject _bgLoadScreen;
        [SerializeField] private GameObject _bgBlack;
        [SerializeField] private GameObject _kaeruLogo;
        [SerializeField] private GameObject _particleSystem;

        private const string _sceneMainMenu = "MainMenu";

        private void Start()
        {
            StartCoroutine(BgBlack());
        }

        private IEnumerator BgBlack()
        {
            yield return new WaitForSeconds(1f);

            _kaeruLogo.SetActive(true);

        }

        public void DisableBgBlack()
        {
            _bgBlack.GetComponent<Animator>().enabled = true;
        }

        public void ShowBackgroundLoadScreen()
        {
            //_bgBlack.GetComponent<Animator>().enabled = true;
            _bgLoadScreen.SetActive(true);
        }

        public void StartSlider()
        {
            _slider.gameObject.SetActive(true);
            _particleSystem.SetActive(true);

            StartCoroutine(StartTimer());
        }

        IEnumerator StartTimer()
        {
            Debug.Log("Start Timer - «¿œ”—  “¿…Ã≈–¿!");

            float timeLeft = 0;
            // _timerText.color = _timerDefaultColor;

            while (timeLeft <= 1)
            {
                timeLeft += 0.01f;
                _sliderFill.fillAmount = timeLeft;

                if (_slider.value <= 0.72f)
                    _slider.value += 0.008f;
                //else if (_slider.value <= 0.72f && _slider.value >= 0.32f)
                  //  _slider.value += 0.006f;
                // slider.value = 1
                //  AudioManager.Instance.PlaySound(_countdownSFX);

                // _timerText.text = timeLeft.ToString();
                yield return new WaitForSeconds(0.05f);
            }

            SceneManager.LoadScene(_sceneMainMenu);
            Debug.Log("Start Timer -  ÓÌÂˆ “¿…Ã≈–¿!");
        }
        
    }
}