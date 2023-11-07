using UnityEngine;
using SpaceShooter;
using UnityEngine.UI;
using System;

namespace TowerDefense
{
    public class MapLevel : MonoBehaviour
    {
        [SerializeField] private Episode _episode;
        [SerializeField] private GameObject _resultPanel;
        [SerializeField] private Image[] _resultImages;

        public bool IsComplete => gameObject.activeSelf && _resultPanel.activeSelf;

        public void LoadLevel()
        {
            Debug.Log("LoadLevel");
            LevelSequenceController.Instance.StartEpisode(_episode);
        }

        public int Initialize()
        {
            var score = MapCompletion.Instance.GetEpisodeStars(_episode);
            _resultPanel?.SetActive(score > 0);
            for (int i = 0; i < score; i++)
            {
                _resultImages[i].color = Color.white;
            }

            return score;
        }
    }
}