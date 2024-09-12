using Spine.Unity;
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

		private void Start()
		{
			Debug.Log("StartLearning");
			if (MapCompletion.Instance.LearnSteps[0] == true && MapCompletion.Instance.LearnSteps[1] == true && MapCompletion.Instance.LearnSteps[2] == false)
			{
				_overlaySecondOpenHint.SetActive(true);
				_overlayFirstOpenHint.SetActive(false);
				_lvl_1Bar1.SetActive(true);
				_lvl_2Bar1.SetActive(false);
			}
			else if (MapCompletion.Instance.LearnSteps[0] == true && MapCompletion.Instance.LearnSteps[1] == false)
			{
				_overlayFirstOpenHint.SetActive(true);
				_overlaySecondOpenHint.SetActive(false);
				_lvl_2Bar1.SetActive(true);
				Debug.Log("first hint");
			}
			else
			{
				_lvl_1Bar1.SetActive(true);
				_lvl_2Bar1.SetActive(true);
			}
		}

		public void ShowSecondLvl()
		{
			_lockLvl2.freeze = false;
			_lvl_2_Overlay.SetActive(false);
			_lvl_2Button.gameObject.SetActive(true);
		}
	}
}