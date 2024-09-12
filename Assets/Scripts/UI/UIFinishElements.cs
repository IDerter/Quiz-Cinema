using SpaceShooter;
using System.Collections;
using System.Collections.Generic;
using TowerDefense;
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
            if (MapCompletion.Instance.CompleteLearning)
                StartCoroutine(LoadSceneWithDelay());
			else
			{
                LevelSequenceController.Instance.ExitToBar();
			}
        }

        private IEnumerator LoadSceneWithDelay()
        {
            yield return new WaitForSeconds(LevelSequenceController.Instance.TimeAnimClick);
            LevelSequenceController.Instance.NextLevel();
        }

        public void QuitGame()
        {
            Application.Quit();
        }
    }
}