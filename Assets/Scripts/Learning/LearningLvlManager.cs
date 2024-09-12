using SpaceShooter;
using System.Collections;
using TowerDefense;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class LearningLvlManager : SingletonBase<LearningLvlManager>
    {
        [SerializeField] private FillSlider _fillSlider;
		[SerializeField] private GameObject _overlayHintsTimer;
		[SerializeField] private GameObject _overlayHintsFinishScreen;
		[SerializeField] private TimerInLvl _timerInLvl;
		[SerializeField] private Button _buttonPlay;
		[SerializeField] private Button _buttonRetry;

		private void Start()
		{
			_fillSlider.OnEndFillSlider += OnEndFillSlider;
			GameManager.Instance.OnFinishGame += OnFinishGame;
		}

		private void OnDestroy()
		{
			_fillSlider.OnEndFillSlider -= OnEndFillSlider;
			GameManager.Instance.OnFinishGame += OnFinishGame;
		}

		private void OnFinishGame()
		{
			if (!MapCompletion.Instance.LearnSteps[1])
			{
				_buttonPlay.enabled = false;
				_buttonRetry.enabled = false;
				StartCoroutine(DelayOverlaySetActive(_overlayHintsFinishScreen, 4f));
				MapCompletion.Instance.LearnSteps[1] = true;
				MapCompletion.SaveLearningProgress();
			}
		}

		private void OnEndFillSlider()
		{
			if(MapCompletion.Instance.LearnSteps[1] == false)
				StartCoroutine(DelayOverlaySetActive(_overlayHintsTimer, 1.5f));
		}

		private IEnumerator DelayOverlaySetActive(GameObject overlayHints, float time)
		{
			yield return new WaitForSeconds(time);

			overlayHints.SetActive(true);
		}

		public void StartTimer()
		{
			_timerInLvl.IsStopTime = false;
			_timerInLvl.StartTimer();
		}
	}
}