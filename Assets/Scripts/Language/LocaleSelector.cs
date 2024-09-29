using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace QuizCinema
{
    public class LocaleSelector : SingletonBase<LocaleSelector>
    {
        [SerializeField] private bool _active;
        [SerializeField] private int _localeId;
        [SerializeField] private string tableName = "SkinPanel";
        [SerializeField] private string key = "Simple Guy";

        private void Start()
        {
            _localeId = PlayerPrefs.GetInt("IndexLanguageSave", 0);
            ChangeLocale(_localeId);
        }

        public void ChangeLocale(int localeID)
        {
            // if (_active)
            //    return;
            Debug.Log(localeID);
            SetLocale(localeID);
        }

        public void SetLocale(int localeID)
        {
            _active = true;

            LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[localeID];
            PlayerPrefs.SetInt("IndexLanguageSave", localeID);
            Debug.Log(localeID);

            _localeId = localeID;
            _active = false;
           // var test = LoadLocalizedString(tableName, key);
        }

        public async Task<string> LoadLocalizedString(string tableName, string key)
        {
            var stringTable = LocalizationSettings.StringDatabase.GetTableAsync(tableName);
            var handle = await stringTable.Task;

            if (handle != null)
            {
                var entry = handle.GetEntry(key);
                if (entry != null)
                {
                    Debug.Log(entry.GetLocalizedString());

                    return entry.GetLocalizedString();
                }
                else
                {
                    Debug.LogWarning("Key not found: " + key);
                    return string.Empty;
                }
            }
            else
            {
                Debug.LogError("Failed to load the table: " + tableName);
                return string.Empty;
            }
        }
    }
}