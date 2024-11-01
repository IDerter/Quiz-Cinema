using QuizCinema;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class RewardedAds : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
	public static event Action RewardOn;

	[SerializeField] private string _androidAdUnityId = "Rewarded_Android";
    [SerializeField] private string _iosAdUnityId = "Rewarded_iOS";

	private string _adUnitId = null;

    private void Awake()
    {
        #if UNITY_IOS
            _adUnitId = _iosAdUnityId;
        #elif UNITY_ANDROID
            _adUnitId = _androidAdUnityId;
		#endif
	}


	public void LoadRewardedAd()
	{
		Advertisement.Load(_adUnitId, this);
		Debug.Log("Ad Loaded: " + _adUnitId);
	}

	public void ShowRewardedAd()
	{
		LoadRewardedAd();
		Advertisement.Show(_adUnitId, this);

	}

	#region LoadCallback
	public void OnUnityAdsAdLoaded(string placementId)
	{
		Debug.Log("Ad Loaded: ONUNITYADSLOADED " + _adUnitId);

		if (_adUnitId == placementId)
		{
			Debug.Log("Равны!!!");
		}
	}

	public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
	{
		Debug.Log("Ad dont Loaded: " + _adUnitId);

	}
	#endregion
	public void ShowAd()
	{
		Advertisement.Show(_adUnitId, this);
	}

	#region ShowCallback


	public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message) { }

	public void OnUnityAdsShowStart(string placementId) { }

	public void OnUnityAdsShowClick(string placementId) { }

	public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
	{
		if (placementId == _adUnitId && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
		{
			Debug.Log("Ads Fully Watched .....");

			RewardOn?.Invoke();
		}
	}
	#endregion


}
