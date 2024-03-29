using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{

    public class LanguageChanger : MonoBehaviour
    {
        [SerializeField] private Language[] _buttonsLanguage;

        [SerializeField] private int _index = 0;
        public int GetLanguageIndex => _index;

        private void Start()
        {
            _index = PlayerPrefs.GetInt("IndexLanguageSave", 0);
            _buttonsLanguage[_index].gameObject.SetActive(true);
        }

        public void ChooseNextLanguage()
        {
            Debug.Log("Test!");
            _buttonsLanguage[_index].gameObject.SetActive(false);
            if (_index < _buttonsLanguage.Length - 1)
            {
                _index++;
            }
            else _index = 0;

            _buttonsLanguage[_index].gameObject.SetActive(true);

            PlayerPrefs.SetInt("IndexLanguageSave", _index);
        }

        public void ChoosePreviousLanguage()
        {
            Debug.Log("Previous!");
            _buttonsLanguage[_index].gameObject.SetActive(false);
            if (_index > 0)
            {
                _index--;
            }
            else _index = _buttonsLanguage.Length - 1;

            _buttonsLanguage[_index].gameObject.SetActive(true);

            PlayerPrefs.SetInt("IndexLanguageSave", _index);
        }
    }
}