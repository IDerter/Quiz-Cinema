using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class ButtonsRewarded : MonoBehaviour
    {
        [SerializeField] private Button _buttonClickRewarded;

        public void Multiplier()
		{
            AdsManager.Instance._rewardedAds.ShowRewardedAd();

            Destroy(_buttonClickRewarded.gameObject, 1f);
		}
    }
}