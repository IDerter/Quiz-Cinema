using QuizCinema;
using System.Collections;
using System.Collections.Generic;
using TowerDefense;
using UnityEngine;
using UnityEngine.Advertisements;

public class InterstitialAds : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField] private string _androidAdUnityId;
    [SerializeField] private string _iosAdUnityId;

    private string _adUnitId;

	private void Awake()
	{
        #if UNITY_IOS
            _adUnitId = _iosAdUnityId;
        #elif UNITY_ANDROID
            _adUnitId = _androidAdUnityId;
        #endif
    }

    public void LoadInterstitialAd()
	{
        Advertisement.Load(_adUnitId, this);
	}

	public void ShowInterstitialAd()
	{
		LoadInterstitialAd();

		StartCoroutine(InterstitialDelayShow());

	}

	public void ShowAd()
	{
		Advertisement.Show(_adUnitId, this);
	}

	#region LoadCallback
	public void OnUnityAdsAdLoaded(string placementId)
	{
		Debug.Log("Interstitial Ad Loaded");
	}

	public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
	{
	}
	#endregion


	#region ShowCallback
	public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message) {}

	public void OnUnityAdsShowStart(string placementId) {}

	public void OnUnityAdsShowClick(string placementId) {}

	public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
	{
		if (placementId == _adUnitId && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
		{
			Debug.Log("Interstitial Ad Ñompleted");
			MapCompletion.Instance.CountLvlFinished++;
			MapCompletion.SaveLvlFinished();
		}
	}
	#endregion

	public IEnumerator InterstitialDelayShow()
	{
		yield return new WaitForSeconds(1f);
		ShowAd();
	}
}
