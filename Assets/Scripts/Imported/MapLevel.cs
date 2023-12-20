using UnityEngine;
using SpaceShooter;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;

namespace TowerDefense
{
    public class MapLevel : MonoBehaviour
    {
        [SerializeField] private Episode _episode;
        public Episode Episode { get { return _episode; } set { _episode = value; } }
        [SerializeField] private GameObject _resultPanel;
        public GameObject ResultPanel { get {return _resultPanel; } set { _resultPanel = value; } }
        [SerializeField] private Image[] _resultImages;
        public Image[] ResultImages { get {return _resultImages; } set {_resultImages = value; } }

        public bool IsComplete => gameObject.activeSelf && _resultPanel.activeSelf;

        public virtual void LoadLevel()
        {
            Debug.Log("LoadLevel" + gameObject.name);
            
            LevelSequenceController.Instance.StartEpisode(_episode, MapCompletion.Instance.GetLvlNumber(gameObject.name), gameObject.name);
        }

        public virtual int Initialize()
        {
            
            int score = Convert.ToInt32(Math.Round((double)(MapCompletion.Instance.TotalStars / _episode.Levels.Length)));

            _resultPanel?.SetActive(score > 1);

            if (_resultImages.Length >= score)
            {
                for (int i = 0; i < score; i++)
                {
                    _resultImages[i].color = Color.white;
                }
            }
            else
            {
                Debug.LogWarning("Error with score. To much value");
            }
            return score;
        }
    }
}