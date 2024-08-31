using UnityEngine;
using SpaceShooter;
using UnityEngine.UI;
using System;
using UnityEngine.SceneManagement;
using QuizCinema;
using System.Collections;

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
        [SerializeField] private Sprite[] _spritesStarsYellow;
        public Sprite[] SpritesStarts { get { return _spritesStarsYellow; } set { _spritesStarsYellow = value; } }

        public bool IsComplete => gameObject.activeSelf && _resultPanel.activeSelf;

        [SerializeField] private TypeStarts type;
        [SerializeField] private Image _lockImage;
        public Image GetLockImage => _lockImage;

        [SerializeField] private Image _overlayImage;
        public Image OverlayImage => _overlayImage;
        [SerializeField] private BarAnim _barAnim;
        public BarAnim BarAnim => _barAnim;
        [SerializeField] private bool _locked = true;
        public bool Lock { get { return _locked; } set { _locked = value; } }


        public virtual void LoadLevel()
        {
            Debug.Log("LoadLevel" + gameObject.name);

            StartCoroutine(LoadSceneWithDelay());
        }

        private IEnumerator LoadSceneWithDelay()
        {
            yield return new WaitForSeconds(LevelSequenceController.Instance.TimeAnimClick);
            LevelSequenceController.Instance.StartEpisode(_episode, MapCompletion.Instance.GetLvlNumber(gameObject.name), gameObject.name);
        }

        public virtual int Initialize()
        {
            var indexEpisode = _episode.EpisodeID;
            var starsEpisode = MapCompletion.Instance.GetEpisodeStars(indexEpisode);

            var sumLvlScore = MapCompletion.Instance.GetSumLvlScore(indexEpisode);
            var needSumToOpenBar = StorageBarsInfo.Instance.InfoBars[indexEpisode - 1].NeedSumScore;
            int score = Convert.ToInt32(Math.Round((double)(starsEpisode / _episode.Levels.Length)));

            var check = sumLvlScore > needSumToOpenBar ? score : 0;
            Debug.Log(check + " Можно ли открыть бар! " + gameObject.name + $"SumLvlScore : {sumLvlScore} needSumToOpenBar: {needSumToOpenBar} " + indexEpisode);
            Debug.Log(starsEpisode + "Кол-во звезд!");

            int stars = MapCompletion.Instance.GetLvlStars(gameObject.name);

            if (type == TypeStarts.Lvl)
            {
               return ShowStarsResult(stars);
            }

            else if (type == TypeStarts.Bar)
            {
               return ShowStarsResult(check);
            }

            return 0;
        }

        private int ShowStarsResult(int value)
        {
            _resultPanel?.SetActive(value > 0);

            if (ResultImages.Length >= value)
            {
                for (int i = 0; i < value; i++)
                {
                    _resultImages[i].sprite = _spritesStarsYellow[i];
                }
            }
            else
            {
                Debug.LogWarning("Error with stars. To much value");
                Debug.Log(value);
            }

            return value;
        }
    }
}