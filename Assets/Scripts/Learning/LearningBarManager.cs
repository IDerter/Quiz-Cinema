using Spine.Unity;
using System.Collections;
using TowerDefense;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class LearningBarManager : MonoBehaviour
    {
        [SerializeField] private GameObject _overlayFirstOpenHint;
        [SerializeField] private GameObject _overlaySecondOpenHint;
		[SerializeField] private GameObject _lvl_1Bar1;
		[SerializeField] private GameObject _lvl_2Bar1;
		[SerializeField] private GameObject _lvl_2_Overlay;
		[SerializeField] private SkeletonGraphic _lockLvl2;
		[SerializeField] private Button _lvl_2Button;

		[SerializeField] private GameObject _imageOverlayBooster1;
		[SerializeField] private GameObject _imageOverlayBooster2;
		[SerializeField] private GameObject _imageAnimProfile2;

		[SerializeField] private GameObject _imageAnimProfile4;
		[SerializeField] private BoostSO _boost50Percent;
		[SerializeField] private BoostSO _boostCorrectAnswer;
		[SerializeField] private GameObject _overlay50Percent;
		[SerializeField] private GameObject _overlayTimeStop;

		private void Start()
		{
			Debug.Log("StartLearning");
			if (MapCompletion.Instance.LearnSteps[0] == true && MapCompletion.Instance.LearnSteps[1] == true && MapCompletion.Instance.LearnSteps[2] == false)
			{
				StartCoroutine(DelayOverlaySetActive(_overlaySecondOpenHint, 3.5f, true));
				_overlayFirstOpenHint.SetActive(false);
			}
			else if (MapCompletion.Instance.LearnSteps[0] == true && MapCompletion.Instance.LearnSteps[1] == false)
			{
				StartCoroutine(DelayOverlaySetActive(_overlayFirstOpenHint, 1.5f, false));
				_overlaySecondOpenHint.SetActive(false);
				Debug.Log("first hint");
			}
			else
			{
				_lvl_1Bar1.SetActive(true);
				_lvl_2Bar1.SetActive(true);
			}
		}

		private IEnumerator DelayOverlaySetActive(GameObject overlayHints, float time, bool isActive1Bar)
		{
			yield return new WaitForSeconds(time);
			_lvl_1Bar1.SetActive(isActive1Bar);
			_lvl_2Bar1.SetActive(false);

			overlayHints.SetActive(true);
		}

		public void ShowSecondLvl()
		{
			_lockLvl2.freeze = false;
			_lvl_2_Overlay.SetActive(false);
			_lvl_2Button.gameObject.SetActive(true);
		}

		public void GiftCorrectAnswerFirstActive()
		{
			if (!MapCompletion.Instance.LearnSteps[2])
			{
				MapCompletion.Instance.LearnSteps[2] = true;
				MapCompletion.SaveLearningProgress();
				BoostsManager.SetBoostLearningInInventory(_boostCorrectAnswer);
				_imageOverlayBooster1.SetActive(false);
				_imageOverlayBooster2.SetActive(true);
				_imageAnimProfile2.SetActive(true);
			}
			else if(!MapCompletion.Instance.LearnSteps[3])
			{
				_imageOverlayBooster1.SetActive(false);
				_imageOverlayBooster2.SetActive(false);
				_imageAnimProfile4.SetActive(true);
				BoostsManager.SetBoostLearningInInventory(_boost50Percent);
				//_overlay50Percent.SetActive(true);
				_overlayTimeStop.SetActive(true);
			}
		}

		public void SaveBoostersGiftLearning()
		{
			MapCompletion.Instance.LearnSteps[3] = true;
			MapCompletion.SaveLearningProgress();
		}
	}
}