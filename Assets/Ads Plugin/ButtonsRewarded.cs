using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class ButtonsRewarded : MonoBehaviour
    {
        public void Multiplier()
		{
            AdsManager.Instance._rewardedAds.ShowRewardedAd();
		}
    }
}