using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TowerDefense;

namespace QuizCinema
{
    public class BoostAddScore : BoostParent
    {
        [SerializeField] private int _addValue = 1000;

        protected override void OnCreateAnswers(Question question)
        {
            if (_buttonPress == false)
            {
                Debug.Log("ÇÀÕÎÄÈÌ Â ONCREATEANSWERS Â BOOSTInfo!");
                _buttonBoost.SetActive(true);
                SwitchInteractable(true, _buttonBoost);
            }
        }

        public void AddScore()
        {
            _buttonPress = true;
            Debug.Log(MapCompletion.Instance.TotalScoreLvls);
            MapCompletion.Instance.TotalScoreLvls += _addValue;
            Debug.Log(MapCompletion.Instance.TotalScoreLvls);

            SwitchInteractable(false, _buttonBoost);
        }
    }
}