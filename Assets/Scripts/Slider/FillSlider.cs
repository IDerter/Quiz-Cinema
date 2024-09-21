using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public abstract class FillSlider : MonoBehaviour
    {
        public event Action OnEndFillSlider;

        [SerializeField] private Image _fiilLoadingBar;
        [SerializeField] private float _step = 0.00001f;
        [SerializeField] protected float _delay = 1f;
        [SerializeField] protected float _time = 10f;
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
            //Debug.Log(_fiilLoadingBar.name + " " +  timeLeft + time);

            while (timeLeft <= time)
            {
                //Debug.Log(timeLeft + " CurrentTime" + " " + timeLeft / time + " current percent");
                timeLeft += Time.deltaTime;
                _fiilLoadingBar.fillAmount = timeLeft / time;

                 var sound = AudioManager.Instance.GetSoundAudioClip(_audioTimer);
                if (sound != null)
                    sound.Play();
               // Debug.Log(timeLeft);
                yield return null;
            }
            Debug.Log("EndFillSlider");
            OnEndFillSlider?.Invoke();
        }   
    }
}