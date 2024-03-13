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
        public BoostSO BoostSO { get { return _asset; } set { value = _asset; } }
        [SerializeField] private Image _upgradeIcon;
        [SerializeField] private TextMeshProUGUI _textCount;
        [SerializeField] private TextMeshProUGUI _textCost;
        [SerializeField] private Button _buttonBuy;
        public Button GetButton => _buttonBuy;

        private int _costNumber; // цена покупки улучшения

        public void Initialize()
        {
            Debug.Log(_asset.name.ToString());
            _upgradeIcon.sprite = _asset.sprite;
            // var savedLevel = BoostsManager.GetUpgradeLevel(_asset);
            _textCount.text = BoostsManager.GetCountBoost(_asset).ToString();
            _costNumber = _asset.cost;
             _textCost.text = _costNumber.ToString();
            Debug.Log("Initiliaze");
        }

        public void CheckCost(int money)
        {
            _buttonBuy.interactable = money >= _costNumber;
        }

        public void Buy()
        {
            BoostsManager.BuyBoost(_asset);
            Initialize(); // очень важное действие, иначе не будет обновляться результат покупки апдейтов в игре
        }
    }
}