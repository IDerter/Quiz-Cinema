using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace QuizCinema
{
    public class BoostInfo : BoostParent
    {
        [SerializeField] private Question _currentQuestion;
        [SerializeField] private GameObject _panelInfoBoost;

        protected override void OnCreateAnswers(Question question)
        {
            _panelInfoBoost.SetActive(false);

            if (_buttonBoost.TryGetComponent<BoostUICount>(out var boost))
            {
                _boostSO = boost.GetBoostSO;
            }

           _currentQuestion = question;
            Debug.Log("������� � ONCREATEANSWERS � BOOSTInfo!");
            _buttonBoost.SetActive(true);
            //SwitchInteractable(true, _buttonBoost);
        }

        public override void ActivateBoost()
        {
            base.ActivateBoost();
            Debug.Log("���������� ���� INFO");


            _panelInfoBoost.SetActive(true);
            var noteFilm = _panelInfoBoost.GetComponentInChildren<TextMeshProUGUI>();
            if (noteFilm.TryGetComponent<TextMeshProUGUI>(out var text))
            {
                noteFilm.text = _currentQuestion.ListNoteFilm[PlayerPrefs.GetInt("IndexLanguageSave")].ToString();
            }
            Debug.Log(_currentQuestion.ListNoteFilm[PlayerPrefs.GetInt("IndexLanguageSave")].ToString());
            SwitchInteractable(false, _buttonBoost);

            BoostsManager.UseBoost(_boostSO);
        }

       

        public void CloseQuestionInfo()
        {
            _panelInfoBoost.SetActive(false);
        }
    }
}