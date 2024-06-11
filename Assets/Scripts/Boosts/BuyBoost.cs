using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    

    public class BuyBoost : MonoBehaviour
    {
        [SerializeField] private BoostSO _asset;
        public BoostSO BoostSO { get { return _asset; } set { _asset = value ; } }
        [SerializeField] private Image _upgradeIcon;
        [SerializeField] private TextMeshProUGUI _textCount;
        [SerializeField] private TextMeshProUGUI _textCost;
        [SerializeField] private Button _buttonBuy;
        [SerializeField] private InteractableButton _viewButton;
        public Button GetButton => _buttonBuy;
        [SerializeField] private int _numberOfBoosters = 1;

        private int _costNumber; // цена покупки улучшения

        private void Awake()
        {
            Initialize();
        }

        public void Initialize()
        {
            Debug.Log(_asset.name.ToString());
            _upgradeIcon.sprite = _asset.sprite;
            // var savedLevel = BoostsManager.GetUpgradeLevel(_asset);
            if (_textCount != null)
                _textCount.text = BoostsManager.GetCountBoost(_asset).ToString();

            _costNumber = _asset.DictionaryNumberOfBoosts[_numberOfBoosters];
             _textCost.text = _costNumber.ToString();
            Debug.Log("Initiliaze" + " " + _costNumber);
        }

        public void CheckCost(int money)
        {
            if (_numberOfBoosters > 0)
            {
                _buttonBuy.interactable = money >= _costNumber;
                if (_viewButton != null)
                {
                    if (_buttonBuy.interactable)
                        _viewButton.InteractableOn();
                    else
                    {
                        _viewButton.InteractableOff();
                        Debug.Log("CHECKCOST " + _buttonBuy.interactable);
                    }
                }

                
            }
            else
            {
                Debug.LogError("Mistake with numberOfBoosters - less 0 value");
            }
        }

        public void Buy()
        {
            BoostsManager.BuyBoost(_asset, _numberOfBoosters);
            Initialize(); // очень важное действие, иначе не будет обновляться результат покупки апдейтов в игре
        }
    }
}