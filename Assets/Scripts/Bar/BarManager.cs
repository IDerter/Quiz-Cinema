using SpaceShooter;
using System.Collections;
using System.Collections.Generic;
using TowerDefense;
using UnityEngine;

namespace QuizCinema
{
	public class BarManager : SingletonBase<BarManager>
	{
		[SerializeField] private MapLevel _level;
		[SerializeField] private GameObject _panelOpenNextBar;
		[SerializeField] private bool _isOpen = false;


		private void Start()
		{
			//ResetProgress();
			Debug.Log(PlayerPrefs.GetInt(_level.Episode.EpisodeName) + " открыт ли следующий бар!");
			if (PlayerPrefs.GetInt(_level.Episode.EpisodeName) == 0)
				OnBarOpenInfoUpdate();
			else if (PlayerPrefs.GetInt(_level.Episode.EpisodeName) == 0)
			{
				Debug.Log("test 0");
			}
		}


		private void OnBarOpenInfoUpdate()
		{

			if (MapCompletion.Instance.GetOpensBar[_level.Episode.EpisodeID - 1])
			{
				StartCoroutine(ActivateNewBarPanel());
				Debug.Log(MapCompletion.Instance.GetOpensBar[_level.Episode.EpisodeID - 1] + " ... " + (_level.Episode.EpisodeID - 1));
			}
		}


		private IEnumerator ActivateNewBarPanel()
		{
			yield return new WaitForSeconds(LevelSequenceController.Instance.TimeAnimClick);
			ShowOpenNewBar();
		}

		public void ShowOpenNewBar()
		{
			_panelOpenNextBar.SetActive(true);
			PlayerPrefs.SetInt(_level.Episode.EpisodeName, 1);
		}


		public void ResetProgress()
		{
			PlayerPrefs.SetInt(_level.Episode.EpisodeName, 0);
		}
	}
}