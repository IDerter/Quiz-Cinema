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
            Debug.Log("ЗАХОДИМ В ONCREATEANSWERS В BOOSTInfo!");
            _buttonBoost.SetActive(true);
            //SwitchInteractable(true, _buttonBoost);
        }

        public override void ActivateBoost()
        {
            base.ActivateBoost();
            Debug.Log("Активируем буст INFO");


            _panelInfoBoost.SetActive(true);
            var e = _panelInfoBoost.GetComponentInChildren<TextMeshProUGUI>();
            if (e.TryGetComponent<TextMeshProUGUI>(out var text))
            {
                e.text = _currentQuestion.NoteFilm.ToString();
            }
            Debug.Log(_currentQuestion.NoteFilm.ToString());
            SwitchInteractable(false, _buttonBoost);

            BoostsManager.UseBoost(_boostSO);
        }

       

        public void CloseQuestionInfo()
        {
            _panelInfoBoost.SetActive(false);
        }
    }
}