using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{

    public class AudioManager : MonoBehaviour
    {
        public static AudioManager Instance;

        [SerializeField] private Sound[] _sounds;
        [SerializeField] private AudioSource _sourcePrefabSFX;
        [SerializeField] private AudioSource _sourcePrefabMusic;

        [SerializeField] private string _startupTrack;

        private void Awake()
        {
            if (Instance != null)
            {
                Destroy(gameObject);
            }
            else
            {
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }

            InitSounds();
        }

        private void Start()
        {
            if (string.IsNullOrEmpty(_startupTrack) != true)
            {
                PlaySound(_startupTrack); 
            }
        }

        private void InitSounds()
        {
            foreach (var sound in _sounds)
            {
                if (sound.TypeMixer == TypeAudioMixer.SFX)
                {
                    AudioSource source = Instantiate(_sourcePrefabSFX, gameObject.transform);
                    source.name = sound.Name;
                    sound.Source = source;
                }

                if (sound.TypeMixer == TypeAudioMixer.Music)
                {
                    AudioSource source = Instantiate(_sourcePrefabMusic, gameObject.transform);
                    source.name = sound.Name;
                    sound.Source = source;
                }
            }
        }

        public void PlaySound(string name)
        {
            var sound = GetSound(name);

            if (sound != null)
            {
                sound.Play();
            }
            else
            {
                Debug.LogWarningFormat("Sound by the name {0} is not found", name);
            }
        }

        public void StopSound(string name)
        {
            var sound = GetSound(name);

            if (sound != null)
            {
                sound.Stop();
            }
            else
            {
                Debug.LogWarningFormat("Sound by the name {0} is not found", name);
            }
        }

        public Sound GetSound(string name)
        {
            foreach (var sound in _sounds)
            {
                if (sound.Name == name)
                {
                    return sound;
                }
            }

            return null;
        }
    }
}