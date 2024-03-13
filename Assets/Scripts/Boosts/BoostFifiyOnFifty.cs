using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema {
    public class BoostFifiyOnFifty : BoostParent
    {
        [SerializeField] private Question _currentQuestion;

        private const int _countRemoveAnswer = 2;

        protected override void OnCreateAnswers(Question question)
        {
            if (_buttonBoost.TryGetComponent<BoostUICount>(out var boost))
            {
                _boostSO = boost.GetBoostSO;
            }

            _currentQuestion = question;

           // SwitchInteractable(true, _buttonBoost);

            if (_currentQuestion.IndexPrefab == 3 || _currentQuestion.GetAnswerType == AnswerType.Multiply)
            {
                _buttonBoost.SetActive(false);
            }
            else
            {
                _buttonBoost.SetActive(true);
            }
        }

        public override void ActivateBoost()
        {
            base.ActivateBoost();

            var currentAnswer = AnswersMethods.Instance.GetCurrentAnswerList;

            var listIndexCorrectAnswer = _currentQuestion.GetCorrectAnswers();

            int currentAnswerIndex = 0;
            for (int i = 0; i < _currentQuestion.Answers.Length; i++)
            {
                if (_currentQuestion.GetAnswerType == AnswerType.Single)
                {
                    if (listIndexCorrectAnswer[0] != i && currentAnswerIndex < _countRemoveAnswer)
                    {
                        currentAnswer[i].gameObject.SetActive(false);
                        currentAnswerIndex++;
                    }
                }

            }

            SwitchInteractable(false, _buttonBoost);
            BoostsManager.UseBoost(_boostSO);
        }
    }
}