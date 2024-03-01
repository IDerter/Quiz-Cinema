using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public abstract class BoostParent : MonoBehaviour
    {
        [SerializeField] protected GameManager _gameManager;
        [SerializeField] protected AnswersMethods _answersMethods;

        [SerializeField] protected GameObject _buttonBoost;

        protected bool _buttonPress = false;
        public bool ButtonPress { get { return _buttonPress; } set { _buttonPress = value; } }

        private void OnEnable()
        {
            _answersMethods.OnCreateAnswers += OnCreateAnswers;
        }

        private void OnDestroy()
        {
            _answersMethods.OnCreateAnswers -= OnCreateAnswers;
        }

        protected virtual void OnCreateAnswers(Question obj) { }


        protected virtual void SwitchInteractable(bool value, GameObject buttonGameobject) { }
    }
}