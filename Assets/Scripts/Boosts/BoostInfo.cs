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

           _currentQuestion = question;
            Debug.Log("ÇÀÕÎÄÈÌ Â ONCREATEANSWERS Â BOOSTInfo!");
            _buttonBoost.SetActive(true);
            SwitchInteractable(true, _buttonBoost);
        }

        public void ShowQuestionInfo()
        {
            _panelInfoBoost.SetActive(true);
            var e = _panelInfoBoost.GetComponentInChildren<TextMeshProUGUI>();
            if (e.TryGetComponent<TextMeshProUGUI>(out var text)) {
                e.text = _currentQuestion.NoteFilm.ToString();
            }
            Debug.Log(_currentQuestion.NoteFilm.ToString());
            SwitchInteractable(false, _buttonBoost);

            //  if( _panelInfoBoost.GetComponentInChildren<TextMeshProUGUI>().TryGetComponent(out TextMeshProUGUI text))
            //   {
            //      text.text = _currentQuestion.NoteFilm.ToString();
            //  }
        }

        public void CloseQuestionInfo()
        {
            _panelInfoBoost.SetActive(false);
        }
    }
}