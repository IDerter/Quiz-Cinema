using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    [RequireComponent(typeof(Button))]
    public class BoostUICount : MonoBehaviour
    {
        [SerializeField] protected AnswersMethods _answersMethods;
        [SerializeField] private BoostSO _boostSO;
        public BoostSO GetBoostSO => _boostSO;

        [SerializeField] private TextMeshProUGUI _textCountBoost;
        private Button _buttonBoost;

        private void OnEnable()
        {
            BoostsManager.OnPressButtonBoost += OnPressButtonBoost;
            _answersMethods.OnCreateAnswers += OnCreateAnswers;
        }

        private void OnCreateAnswers(Question obj)
        {
            CheckButtonInteractable();
        }

        private void OnPressButtonBoost()
        {
            _textCountBoost.text = BoostsManager.GetCountBoost(_boostSO).ToString();
        }

        private void OnDestroy()
        {
            BoostsManager.OnPressButtonBoost -= OnPressButtonBoost;
            _answersMethods.OnCreateAnswers -= OnCreateAnswers;
        }

     

        private void Start()
        {
            _buttonBoost = GetComponent<Button>();

            CheckButtonInteractable();
        }

        private void CheckButtonInteractable()
        {
            _textCountBoost.text = BoostsManager.GetCountBoost(_boostSO).ToString();

            Debug.Log(BoostsManager.GetCountBoost(_boostSO).ToString());

            if (BoostsManager.GetCountBoost(_boostSO) > 0)
            {
                if (_buttonBoost != null) _buttonBoost.interactable = true;
            }
            else if (_buttonBoost != null) _buttonBoost.interactable = false;
        }

    }
}