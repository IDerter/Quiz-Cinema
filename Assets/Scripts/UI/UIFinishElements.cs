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
        [SerializeField] private GameObject _retryButton;

        private void Start()
        {
            _gameManager.OnFinishGame += OnFinishGame;
			UIManager.Instance.OnFinishScoreCalculating += OnFinishScoreCalculating;
        }

		private void OnFinishScoreCalculating()
		{
            _retryButton.SetActive(true);

            if (_gameManager.GetLevelCountStars >= 1)
            {
                _nextButton.SetActive(true);
            }
            else
            {
                _nextButton.SetActive(false);
            }
        }

		private void OnDestroy()
        {
            _gameManager.OnFinishGame -= OnFinishGame;
            UIManager.Instance.OnFinishScoreCalculating -= OnFinishScoreCalculating;
        }

        private void OnFinishGame()
        {
            Debug.Log(_gameManager.GetLevelCountStars + " ���-�� ����� �� �������");
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
                StartCoroutine(LoadExitBarWithDelay());
            }
        }

        private IEnumerator LoadExitBarWithDelay()
        {
            yield return new WaitForSeconds(LevelSequenceController.Instance.TimeAnimClick);
            LevelSequenceController.Instance.ExitToBar();
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