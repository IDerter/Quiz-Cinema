using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class BoostFreezeTime : BoostParent
    {
        public static event Action OnStopTime;
        public static event Action OnEndStopTime;

        private const float _timeFreeze = 5f;



        protected override void OnCreateAnswers(Question question)
        {
            _buttonBoost.SetActive(true);
            SwitchInteractable(true, _buttonBoost);
            Debug.Log("ÇÀÕÎÄÈÌ Â ONCREATEANSWERS Â BOOSTFREEZE!");
        }

        public void ApplyFreezeTime()
        {
            _gameManager.StopCoroutine(_gameManager.GetStartTimer);

            SwitchInteractable(false, _buttonBoost);

            _buttonPress = true;

            StartCoroutine(StartFreezeTime());
        }

        IEnumerator StartFreezeTime()
        {
            yield return new WaitForSeconds(_timeFreeze);

            _gameManager.StartCoroutine(_gameManager.GetStartTimer);

            _buttonPress = false;
        }
    }
}