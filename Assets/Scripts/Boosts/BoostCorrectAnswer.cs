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
            _currentQuestion = question;

            _buttonBoost.SetActive(true);
            SwitchInteractable(true, _buttonBoost);
        }

        public void ShowCorrectAnswer()
        {
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
                    if ((listIndexCorrectAnswer[0] == i  || listIndexCorrectAnswer[1] == i) && _currentQuestion.IndexPrefab != 3)
                    {
                        currentAnswer[i].UpdateUI(true);
                        Debug.Log("Multiply");
                    }
                }
            }

            SwitchInteractable(false, _buttonBoost);
        }

        protected override void SwitchInteractable(bool value, GameObject buttonGameobject)
        {
            if (buttonGameobject.TryGetComponent<Button>(out Button button))
            {
                button.interactable = value;
            }
        }
    }
}