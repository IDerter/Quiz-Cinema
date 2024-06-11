using SpaceShooter;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace QuizCinema
{
    public class LevelMapButtonController : MonoBehaviour
    {
        public event Action OnDropInventory;

        private const string _sceneLevelMap = "LevelMap";
        private const string _sceneMainMenu = "MainMenu";

        public void ReturnToMainMenu()
        {
            SceneManager.LoadScene(_sceneMainMenu);
        }

        public void LoadLevelMap()
        {
            SceneManager.LoadScene(_sceneLevelMap);
        }

        public void LoadSceneByName(string scene)
        {
            StartCoroutine(StartScene(scene));
        }

        public void LoadSceneBar()
        {
            LevelSequenceController.Instance.ExitToBar();
        }

        IEnumerator StartScene(string scene)
        {
            yield return new WaitForSeconds(0.5f);
            SceneManager.LoadScene(scene);
        }

        public void Quit()
        {
            Application.Quit();
        }
    }
}