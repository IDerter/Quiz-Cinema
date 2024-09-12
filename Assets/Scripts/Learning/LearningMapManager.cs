using System.Collections;
using TowerDefense;
using UnityEngine;

namespace QuizCinema
{
    public class LearningMapManager : MonoBehaviour
    {
		[SerializeField] private GameObject _overlayFirstMapOpenHint;
		[SerializeField] private GameObject _bar1;

		private void Start()
		{
			Debug.Log(MapCompletion.Instance.LearnSteps[0]);
			if (MapCompletion.Instance.LearnSteps[0] == true)
			{
				StartCoroutine(DelayHintActive(false));
			}
			else
			{
				StartCoroutine(DelayHintActive(true));
			}
		}

		public IEnumerator DelayHintActive(bool isActivate)
		{
			yield return new WaitForSeconds(1f);
			_overlayFirstMapOpenHint.SetActive(isActivate);
			_bar1.SetActive(!isActivate);
			MapCompletion.Instance.LearnSteps[0] = true;
			MapCompletion.SaveLearningProgress();
		}
	}
}