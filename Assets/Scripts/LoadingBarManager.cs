using SpaceShooter;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class LoadingBarManager : MonoBehaviour
    {
        [SerializeField] private Sprite[] _bar1LoadingsSprites;
        [SerializeField] private Sprite[] _bar2LoadingsSprites;
        [SerializeField] private Sprite[] _bar3LoadingsSprites;

		[SerializeField] private Image _imageLoadingBar;
		

		private void Awake()
		{
			var skinIndex = SkinManager.GetIndexPutOnSkin();
			switch (LevelSequenceController.Instance.CurrentEpisode.EpisodeID)
			{
				case 1:
					_imageLoadingBar.sprite = _bar1LoadingsSprites[skinIndex];
					break;
				case 2:
					_imageLoadingBar.sprite = _bar2LoadingsSprites[skinIndex];
					break;
				case 3:
					_imageLoadingBar.sprite = _bar3LoadingsSprites[skinIndex];
					break;
				default:
					Debug.Log("Ошибка! Не найден скин или не получилось загрузить Image у LoadingBar");
					break;
			}

		}
	}
}