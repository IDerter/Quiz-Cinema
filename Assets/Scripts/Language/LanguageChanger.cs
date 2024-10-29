using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{

    public class LanguageChanger : SingletonBase<LanguageChanger>
    {
        public event Action OnChangeLanguage;
        [SerializeField] private Language[] _buttonsLanguage;

        [SerializeField] private int _index = 0;
        public int GetLanguageIndex => _index;

        private const string _clickSFX = "ClickSFX";

        private void Start()
        {
            _index = PlayerPrefs.GetInt("IndexLanguageSave", 0);
            _buttonsLanguage[_index].gameObject.SetActive(true);
            LocaleSelector.Instance.ChangeLocale(_index);
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

            LocaleSelector.Instance.ChangeLocale(_index);

            _buttonsLanguage[_index].gameObject.SetActive(true);
            AudioManager.Instance.PlaySound(_clickSFX);

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

            LocaleSelector.Instance.ChangeLocale(_index);

            _buttonsLanguage[_index].gameObject.SetActive(true);
            AudioManager.Instance.PlaySound(_clickSFX);

            PlayerPrefs.SetInt("IndexLanguageSave", _index);
        }
    }
}