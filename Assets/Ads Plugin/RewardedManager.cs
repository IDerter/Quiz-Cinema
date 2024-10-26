using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
	public class RewardedManager : MonoBehaviour
	{
		[SerializeField] private UICoins _score;

		[SerializeField] private bool _isRewarded;
		public bool IsRewarded { get { return _isRewarded; } set { _isRewarded = value; } }


		private void Start()
		{
			RewardedAds.RewardOn += RewardOn;
		}

		private void OnDestroy()
		{
			RewardedAds.RewardOn -= RewardOn;
		}

		private void RewardOn()
		{
			_score.AddCoins(50);
			Debug.Log($"UPDATE SCORE : {50}");
			_isRewarded = false;
		}
	}
}