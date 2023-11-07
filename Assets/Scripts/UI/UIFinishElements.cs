using SpaceShooter;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace QuizCinema
{
    public class UIFinishElements : MonoBehaviour
    {
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