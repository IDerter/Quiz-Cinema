using SpaceShooter;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace QuizCinema
{
    public class UIFinishElements : MonoBehaviour
    {
        [SerializeField] private GameManager _gameManager;
        [SerializeField] private GameObject _nextButton;

        private void Start()
        {
            _gameManager.OnFinishGame += OnFinishGame;
        }

        private void OnDestroy()
        {
            _gameManager.OnFinishGame -= OnFinishGame;
        }

        private void OnFinishGame()
        {
            if (_gameManager.GetLevelCountStars >= 1)
            {
                _nextButton.SetActive(true);
            }
        }

        public void RestartGame()
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }

        public void NextLvl()
        {
            Debug.Log("next lvl");
            LevelSequenceController.Instance.NextLevel();
        }

        public void QuitGame()
        {
            Application.Quit();
        }
    }
}