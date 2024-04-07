using QuizCinema;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace TowerDefense
{
    public class MainMenu : MonoBehaviour
    {
        public static event Action UpdateDataEpisodes;

        [SerializeField] private Button _buttonContinue;

        private const string _sceneLevelMap = "LevelMap";
        private const string _sceneMainMenu = "MainMenu";
        private const string _sceneShop = "Shop";

        private void Start()
        {
            if (_buttonContinue != null)
               _buttonContinue.interactable = FileHandler.HasFile(MapCompletion.Instance.FileName);
        }


        public void NewGame()
        {
            FileHandler.Reset(MapCompletion.Instance.FileName);

            BoostsManager.Instance.ResetBoostSave();
            BoostsManager.Instance.ResetListSaveBoosts();

            MapCompletion.ResetEpisodeResult();
            SceneManager.LoadScene(_sceneLevelMap);
            //FileHandler.Reset(Upgrades.fileName);
        }

        IEnumerator WaitResetPath()
        {
            yield return new WaitForSeconds(1f);
            UpdateDataEpisodes?.Invoke();
            SceneManager.LoadScene(_sceneLevelMap);
        }

        public void Continue()
        {
            SceneManager.LoadScene(_sceneLevelMap);
        }

        public void OpenSceneMagazine()
        {
            SceneManager.LoadScene(_sceneShop);
        }

        public void OpenMainMenu()
        {
            SceneManager.LoadScene(_sceneMainMenu);
        }

        public void Quit()
        {
            Application.Quit();
        }
    }
}