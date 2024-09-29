
using System;
using System.Collections;
using TowerDefense;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace QuizCinema
{
    public class SceneLoader : MonoBehaviour
    {
        public static event Action UpdateDataEpisodes;

        [SerializeField] private Button _buttonContinue;
        [SerializeField] private GameObject _panelSettings;

        private const string _sceneLevelMap = "LevelMap";
        private const string _sceneMainMenu = "MainMenu";
        private const string _sceneShop = "Shop";
        [SerializeField] private string[] _lvls;
        [SerializeField] private string[] _stars;

        [SerializeField] private AudioClip _audioClipButtonClick;

        private void Start()
        {
            if (_buttonContinue != null)
               _buttonContinue.interactable = (FileHandler.HasFile(MapCompletion.Instance.FileName) || FileHandler.HasFile(MapCompletion.Instance.FileLearning));
        }


        public void NewGame()
        {
            FileHandler.Reset(MapCompletion.Instance.FileName);

            BoostsManager.Instance.ResetBoostSave();
            BoostsManager.Instance.ResetListSaveBoosts();

            SkinManager.Instance.ResetSkinSave();

            MapCompletion.ResetEpisodeResult();
            MapCompletion.ResetLearningAndBarProgress();

            SceneManager.LoadScene(_sceneLevelMap);

            foreach (var lvl in _lvls)
			{
                PlayerPrefs.SetInt(lvl, 0);
                foreach (var star in _stars)
                    PlayerPrefs.SetInt(lvl + star, 0);
            }
            //FileHandler.Reset(Upgrades.fileName);
        }

        IEnumerator WaitResetPath()
        {
            yield return new WaitForSeconds(1f);
            UpdateDataEpisodes?.Invoke();
            SceneManager.LoadScene(_sceneLevelMap);
        }

        public void OpenLevelMap()
        {
            AudioManager.Instance.PlaySoundAudioClip(_audioClipButtonClick);

            SceneManager.LoadScene(_sceneLevelMap);
        }

        public void OpenSceneShop()
        {
            AudioManager.Instance.PlaySoundAudioClip(_audioClipButtonClick);
            SceneManager.LoadScene(_sceneShop);
        }

        public void OpenMainMenu()
        {
            AudioManager.Instance.PlaySoundAudioClip(_audioClipButtonClick);
            SceneManager.LoadScene(_sceneMainMenu);
        }

        public void OpenSettings()
        {
            AudioManager.Instance.PlaySoundAudioClip(_audioClipButtonClick);
            _panelSettings.SetActive(true);
        }

        public void CloseSettings()
        {
            AudioManager.Instance.PlaySoundAudioClip(_audioClipButtonClick);
            _panelSettings.SetActive(false);
        }

        public void Quit()
        {
            AudioManager.Instance.PlaySoundAudioClip(_audioClipButtonClick);
            Application.Quit();
        }
    }
}