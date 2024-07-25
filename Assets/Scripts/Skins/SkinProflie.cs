using Spine;
using Spine.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class SkinProflie : MonoBehaviour
    {
		[SerializeField] private SkeletonGraphic _profileData;

		private void Start()
		{
			SkinManager.Instance.OnPutOn += OnPutOn;
		}

		private void OnDestroy()
		{
			SkinManager.Instance.OnBuySkin -= OnPutOn;
		}

		private void OnPutOn()
		{
			var skin = SkinManager.GetPutOnSkin();
			Debug.Log(skin.SkinName);
			_profileData.Skeleton.SetSkin(skin.SkinName);
		}
	}
}