using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Settings;

namespace QuizCinema
{
    public class LocaleSelector : SingletonBase<LocaleSelector>
    {
        private bool _active;

        private void Start()
        {
            int ID = PlayerPrefs.GetInt("LocaleKey", 0);
            ChangeLocale(ID);
        }

        public void ChangeLocale(int localeID)
        {
            if (_active)
                return;

            StartCoroutine(SetLocale(localeID));
        }

        IEnumerator SetLocale(int localeID)
        {
            _active = true;
            yield return LocalizationSettings.InitializationOperation;
            LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[localeID];
            PlayerPrefs.SetInt("LocaleKey", localeID);
            _active = false;
        }
    }
}