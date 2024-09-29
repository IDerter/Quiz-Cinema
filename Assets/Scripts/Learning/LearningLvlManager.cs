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
		[SerializeField] private GameObject _overlayHintsBoosterDescription;
		[SerializeField] private GameObject _overlayHintsBoosterAfterClick;
		[SerializeField] private TimerInLvl _timerInLvl;
		[SerializeField] private Button _buttonPlay;
		[SerializeField] private Button _buttonRetry;

		private void Start()
		{
			if (_fillSlider != null)
				_fillSlider.OnEndFillSlider += OnEndFillSlider;
			GameManager.Instance.OnFinishGame += OnFinishGame;
			GameManager.Instance.OnDownloadedQuestions += OnDownloadedQuestions;
		}

		private void OnDestroy()
		{
			if (_fillSlider != null)
				_fillSlider.OnEndFillSlider -= OnEndFillSlider;
			GameManager.Instance.OnFinishGame -= OnFinishGame;
			GameManager.Instance.OnDownloadedQuestions -= OnDownloadedQuestions;
		}


		private void OnDownloadedQuestions()
		{
			Debug.Log("OnDownloaded");
			if (MapCompletion.Instance.LearnSteps[3] && !MapCompletion.Instance.LearnSteps[4])
			{
				if (_overlayHintsBoosterDescription != null)
					StartCoroutine(DelayOverlaySetActive(_overlayHintsBoosterDescription, 1f));
			}
		}

		private void OnFinishGame()
		{
			if (!MapCompletion.Instance.LearnSteps[1])
			{
				_buttonPlay.enabled = false;
				_buttonRetry.enabled = false;
				if (_overlayHintsFinishScreen != null)
					StartCoroutine(DelayOverlaySetActive(_overlayHintsFinishScreen, 4f));
				MapCompletion.Instance.LearnSteps[1] = true;
				MapCompletion.SaveLearningProgress();
			}
		}

		private void OnEndFillSlider()
		{
			if(MapCompletion.Instance.LearnSteps[1] == false)
				if (_overlayHintsTimer != null)
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

		public void ShowGoodJobAfterClickBooster()
		{
			_overlayHintsBoosterDescription.SetActive(false);
			_overlayHintsBoosterAfterClick.SetActive(true);
			MapCompletion.Instance.LearnSteps[4] = true;
			MapCompletion.SaveLearningProgress();
			MapCompletion.SaveFinishLearining();
		}
	}
}