using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public abstract class FillSlider : MonoBehaviour
    {
        [SerializeField] private Image _fiilLoadingBar;
        [SerializeField] private float _step = 0.00001f;
        [SerializeField] private float _delay = 1f;
        [SerializeField] private float _time = 30f;
        [SerializeField] private AudioClip _audioTimer;

        private IEnumerator IE_SliderProgress = null;
        public IEnumerator GetIESliderProgress => IE_SliderProgress;


        public virtual void InitiliazeSlider()
        {
            IE_SliderProgress = FillProgressSlider(_delay, _time);
        }

        public virtual void StartSlider()
        {
            if (IE_SliderProgress != null)
            {
                InitiliazeSlider();
                StartCoroutine(IE_SliderProgress);
                Debug.Log("Again start coroutine");
            }
        }

        public virtual void StopSlider()
        {
            if (IE_SliderProgress != null)
            {
                StopCoroutine(IE_SliderProgress);
                Debug.Log("Stop Coroutine!");
            }
        }
      
        protected virtual IEnumerator FillProgressSlider(float delay, float time)
        {
            var step = delay / time;
            float timeLeft = 0;
            _fiilLoadingBar.fillAmount = 0;
            Debug.Log(_fiilLoadingBar.name + " " +  timeLeft + time);
            // _timerText.color = _timerDefaultColor;

            while (timeLeft <= time)
            {
                timeLeft += step;
                _fiilLoadingBar.fillAmount = timeLeft;
                var sound = AudioManager.Instance.GetSoundAudioClip(_audioTimer);
                sound.Play();
                //  Debug.Log(timeLeft + " " + step);

                yield return new WaitForSeconds(delay);
            }
        }   
    }
}