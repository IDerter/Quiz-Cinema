using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class BoostIncreaseOn50PersentScore : BoostParent
    {
        private void Start()
        {
            _gameManager.OnFinishGame += OnFinishGame;
        }

        private void OnDestroy()
        {
            _gameManager.OnFinishGame -= OnFinishGame;
        }

        private void OnFinishGame()
        {
            if (_buttonPress)
            {
                var score = Score.Instance.CurrentLvlScore;
                score =  Convert.ToInt32(score * 1.5f);
                Score.Instance.CurrentLvlScore = score;
            }
        }

        protected override void OnCreateAnswers(Question question)
        {
            if (_buttonBoost.TryGetComponent<BoostUICount>(out var boost))
            {
                _boostSO = boost.GetBoostSO;
            }

            if (_buttonPress == false)
            {
                _buttonBoost.SetActive(true);
              //  SwitchInteractable(true, _buttonBoost);
                Debug.Log("ÇÀÕÎÄÈÌ Â ONCREATEANSWERS Â BOOSTFREEZE!");
            }
        }

        public override void ActivateBoost()
        {
            base.ActivateBoost();

            _buttonPress = true;

            _gameManager.IsActivateBoost50Percent = true;
            SwitchInteractable(false, _buttonBoost);
            BoostsManager.UseBoost(_boostSO);
        }
    }
}