using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class BoostCompletelyStopTime : BoostParent
    {
        [SerializeField] private GameObject _buttonFreeze;
        [SerializeField] private BoostFreezeTime _boostFreezeTime;

        protected override void OnCreateAnswers(Question question)
        {
            if (_buttonBoost.TryGetComponent<BoostUICount>(out var boost))
            {
                _boostSO = boost.GetSetBoostSO;
            }

            Debug.Log("ÇÀÕÎÄÈÌ Â ONCREATEANSWERS Â BOOSTCOMPLETELY!");
          //  _buttonBoost.SetActive(true);
           // SwitchInteractable(true, _buttonBoost);
        }

        public override void ActivateBoost()
        {
            base.ActivateBoost();

            if (_boostFreezeTime.ButtonPress)
            {
                SwitchInteractable(false, _buttonFreeze);

            }

            if (_boostFreezeTime.ButtonPress == false)
            {
                _gameManager.StopCoroutine(_gameManager.GetStartTimer);

                _gameManager.TimerAnimator.SetInteger(_gameManager.GetTimerStateParaHash, 2);

                SwitchInteractable(false, _buttonBoost);
                SwitchInteractable(false, _buttonFreeze);
                BoostsManager.UseBoost(_boostSO);
            }
        }
    }
}