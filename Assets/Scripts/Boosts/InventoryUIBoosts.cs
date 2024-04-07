using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class InventoryUIBoosts : BoostUICount
    {
        [SerializeField] private ZeroBoosts _zeroBoosts;

        private void Start()
        {
            _buttonBoost = GetComponent<Button>();

            CheckButtonInteractable();
        }

        protected override void CheckButtonInteractable()
        {
            int countBoost = BoostsManager.GetCountBoost(_boostSO) - BoostsManager.GetCountInInventoryBoost(_boostSO);
            _textCountBoost.text = countBoost.ToString();

            if (countBoost <= 0)
            {
                _zeroBoosts?.gameObject.SetActive(true);
                _buttonBoost.enabled = false;
                _textCountBoost.enabled = false;
            }
            else
            {
                _zeroBoosts?.gameObject.SetActive(false);
                _buttonBoost.enabled = true;
                _textCountBoost.enabled = true;
            }

            if (countBoost >= 0)
            {
                if (_buttonBoost != null) _buttonBoost.interactable = true;
            }
            else if (_buttonBoost != null) _buttonBoost.interactable = false;
        }

        protected override void OnPressButtonBoost()
        {
            _textCountBoost.text = (BoostsManager.GetCountBoost(_boostSO) - BoostsManager.GetCountInInventoryBoost(_boostSO)).ToString();

            CheckButtonInteractable();
        }
    }
}