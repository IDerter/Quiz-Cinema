using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class InventoryUIBoosts : BoostUICount
    {
        [SerializeField] protected TextMeshProUGUI _textDesriptionBoost;
        public TextMeshProUGUI TextDesctiption { get { return _textDesriptionBoost; } set { _textDesriptionBoost = value; } }

        [SerializeField] private ZeroBoosts _zeroBoosts;
        [SerializeField] protected TextMeshProUGUI _textCountBoost;
        public TextMeshProUGUI TextCountBoost { get { return _textCountBoost; } set { _textCountBoost = value; } }
        [SerializeField] protected Button _buttonBoost;

        private void Start()
        {
            //_buttonBoost = GetComponent<Button>();
            //BoostsManager.Instance.OnAddInInventoryBoost += OnAddInInventoryBoost;
            CheckButtonInteractable();
        }


        private void OnEnable()
        {
            BoostsManager.OnPressButtonBoost += OnPressButtonBoost;

            if (BoostInventory.Instance != null)
                BoostInventory.Instance.OnPressButtonBoostInventory += OnPressButtonBoostInventory;
        }

        private void OnPressButtonBoostInventory(BoostUICount obj)
        {
            TextDescription.Instance.ActivateTextDescription(obj);
        }

        private void OnDestroy()
        {
             BoostsManager.OnPressButtonBoost -= OnPressButtonBoost;

            if (BoostInventory.Instance != null)
                BoostInventory.Instance.OnPressButtonBoostInventory -= OnPressButtonBoostInventory;
            //BoostsManager.Instance.OnAddInInventoryBoost -= OnAddInInventoryBoost;
        }

        private void OnAddInInventoryBoost()
        {
          //  _textDesriptionBoost.gameObject.SetActive(true);
        }

        protected override void CheckButtonInteractable()
        {
           // _textDesriptionBoost.gameObject.SetActive(false);
            Debug.Log(gameObject.name);
            int countBoost = Mathf.Clamp(BoostsManager.GetCountBoost(_boostSO) - BoostsManager.GetCountInInventoryBoost(_boostSO), 0, 1000); // think about maxvalues
            _textCountBoost.text = countBoost.ToString();
            //  _boostImage = 
            Debug.Log(countBoost + _boostSO.name);
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

            //TextDescription.Instance.ActivateTextDescription(this);
        }

        public void ShowTextDesription()
        {
            _textDesriptionBoost.gameObject.SetActive(true);
        }

        public void CloseTextDescription()
        {
            _textDesriptionBoost.gameObject.SetActive(false);
        }
    }
}