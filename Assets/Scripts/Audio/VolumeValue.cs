using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

namespace QuizCinema
{
    public class VolumeValue : MonoBehaviour
    {
        [SerializeField] private AudioMixerGroup _audioMixerGroup;

        [SerializeField] private Toggle _toogleMusic;
        [SerializeField] private Toggle _toogleSFX;
        [SerializeField] private Slider _silderMasterVolume;

        private float minVolumeValue = -80f;
        private float maxVolumeValue = 0f;

        private void Start()
        {
            Debug.Log("Load volume data");
            _toogleMusic.isOn = PlayerPrefs.GetInt("MusicEnabled", 1) == 1;
            _toogleSFX.isOn = PlayerPrefs.GetInt("SFXEnabled", 1) == 1;

            _silderMasterVolume.value = PlayerPrefs.GetFloat("MasterVolumeSave", 1);
        }

        private void OnEnable()
        {
            Time.timeScale = 0;
        }

        private void OnDisable()
        {
            Time.timeScale = 1;
        }

        public void ToogleMusic(bool enabled)
        {
            if (enabled)
            {
                _audioMixerGroup.audioMixer.SetFloat("MusicVolume", maxVolumeValue);
            }
            else
            {
                _audioMixerGroup.audioMixer.SetFloat("MusicVolume", minVolumeValue);
            }

            PlayerPrefs.SetInt("MusicEnabled", enabled ? 1 : 0);
        }

        public void ToogleSFX(bool enabled)
        {
            if (enabled)
            {
                _audioMixerGroup.audioMixer.SetFloat("SFXVolume", maxVolumeValue);
            }
            else
            {
                _audioMixerGroup.audioMixer.SetFloat("SFXVolume", minVolumeValue);
            }

            PlayerPrefs.SetInt("SFXEnabled", enabled ? 1 : 0);
        }

        public void ChangeVolume(float volume)
        {
            _audioMixerGroup.audioMixer.SetFloat("MasterVolume", Mathf.Lerp(-80, 0, volume));

            PlayerPrefs.SetFloat("MasterVolumeSave", volume);
        }

    }
}