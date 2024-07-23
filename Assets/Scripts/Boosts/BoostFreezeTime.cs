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
        [SerializeField] private TimerInLvl _timerInLvl;

        private const float _timeFreeze = 5f;



        protected override void OnCreateAnswers(Question question)
        {
            if (_buttonBoost.TryGetComponent<BoostUICount>(out var boost))
            {
                _boostSO = boost.GetSetBoostSO;
            }
            _timerInLvl.IsStopTime = false;
           // _buttonBoost.SetActive(true);
            //SwitchInteractable(true, _buttonBoost);
            Debug.Log("«¿’Œƒ»Ã ¬ ONCREATEANSWERS ¬ BOOSTFREEZE!");
        }

        public override void ActivateBoost(bool everyQuestionActivate)
        {
            //base.ActivateBoost();
            Debug.Log("Activate boost freeze");
            if (!_buttonPress)
            {
                Debug.Log("Stop coroutine boost freeze");
                _timerInLvl.StopCoroutine(_timerInLvl.GetIESliderProgress);
               // _timer.StopCoroutine(_timer.GetStartTimer);
                _buttonPress = true;

                StartCoroutine(StartFreezeTime());

                if (!everyQuestionActivate)
                    BoostsManager.UseBoost(_boostSO);
            }
        }

        IEnumerator StartFreezeTime()
        {
            yield return new WaitForSeconds(_timeFreeze);

            if (!_timerInLvl.IsStopTime)
            {
                Debug.Log(_timerInLvl.IsStopTime + "«¿œ”—“»À» «¿ÕŒ¬Œ —◊≈“◊» !");
                _timerInLvl.StartCoroutine(_timerInLvl.GetIESliderProgress);
            }

            _buttonPress = false;
        }
    }
}