using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class BoostCorrectAnswer : BoostParent
    {
        [SerializeField] private Question _currentQuestion;
        [SerializeField] private SwipeImage _swipeImage;

        protected override void OnCreateAnswers(Question question)
        {
            if (_buttonBoost.TryGetComponent<BoostUICount>(out var boost))
            {
                _boostSO = boost.GetBoostSO;
            }

            _currentQuestion = question;

            _buttonBoost.SetActive(true);
           // SwitchInteractable(true, _buttonBoost);
        }

        public override void ActivateBoost()
        {
            base.ActivateBoost();

            var currentAnswer = AnswersMethods.Instance.GetCurrentAnswerList;

            var listIndexCorrectAnswer = _currentQuestion.GetCorrectAnswers();

            for (int i = 0; i < _currentQuestion.Answers.Length; i++)
            {
                if (_currentQuestion.GetAnswerType == AnswerType.Single)
                {
                    if (listIndexCorrectAnswer[0] == i && _currentQuestion.IndexPrefab != 3)
                    {
                        currentAnswer[i].UpdateUI(true);
                    }
                    else if (listIndexCorrectAnswer[0] == i)
                    {
                        _swipeImage.ShowCadr(i);
                        Debug.Log(i + " текущий правильный индекс!");
                        //currentAnswer[i].
                    }
                }

                if (_currentQuestion.GetAnswerType == AnswerType.Multiply)
                {
                    if ((listIndexCorrectAnswer[0] == i || listIndexCorrectAnswer[1] == i) && _currentQuestion.IndexPrefab != 3)
                    {
                        currentAnswer[i].UpdateUI(true);
                        Debug.Log("Multiply");
                    }
                }
            }

            SwitchInteractable(false, _buttonBoost);
            BoostsManager.UseBoost(_boostSO);
        }
    }
}