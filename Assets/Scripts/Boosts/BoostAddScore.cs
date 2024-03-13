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
            if (_buttonBoost.TryGetComponent<BoostUICount>(out var boost))
            {
                _boostSO = boost.GetBoostSO;
            }

            if (_buttonPress == false)
            {
                Debug.Log("ЗАХОДИМ В ONCREATEANSWERS В BOOSTInfo!");
                _buttonBoost.SetActive(true);
                Debug.Log("Включаем кнопку!");
               // SwitchInteractable(true, _buttonBoost);
            }
        }

        public override void ActivateBoost()
        {
            base.ActivateBoost();

            _buttonPress = true;
            Debug.Log(MapCompletion.Instance.TotalScoreLvls);
            MapCompletion.Instance.TotalScoreLvls += _addValue;
            Debug.Log(MapCompletion.Instance.TotalScoreLvls);

            SwitchInteractable(false, _buttonBoost);
            BoostsManager.UseBoost(_boostSO);
        }
    }
}