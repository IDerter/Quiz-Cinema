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
            if (_buttonPress == false)
            {
                _buttonBoost.SetActive(true);
                SwitchInteractable(true, _buttonBoost);
                Debug.Log("ÇÀÕÎÄÈÌ Â ONCREATEANSWERS Â BOOSTFREEZE!");
            }
        }

        public void ApplyInscreaseScore50Percent()
        {
            _buttonPress = true;

            _gameManager.IsActivateBoost50Percent = true;
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