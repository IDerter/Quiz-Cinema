using System.Collections;
using System.Collections.Generic;
using TMPro;
using TowerDefense;
using UnityEngine;

namespace QuizCinema
{
    public class BoostShop : MonoBehaviour
    {
        [SerializeField] private int _money;
        [SerializeField] private TextMeshProUGUI _textMoney;
        [SerializeField] private BuyBoost[] _sales;

        private void Start()
        {
            foreach (var slot in _sales)
            {
                slot.Initialize();
                slot.GetButton.onClick.AddListener(UpdateMoney);
            }
            UpdateMoney();
        }

        private void OnDestroy()
        {
            foreach (var slot in _sales)
            {
                slot.GetButton.onClick.RemoveListener(UpdateMoney);
            }
        }

        public void UpdateMoney()
        {
            print("Update");
            _money = MapCompletion.Instance.TotalScoreLvls - MapCompletion.Instance.MoneyShop;


            _textMoney.text = _money.ToString();
            foreach (var slot in _sales)
            {
                slot.CheckCost(_money);
            }
        }

        public void Buy(BoostSO boostAsset)
        {
            //BoostsManager.BuyBoost(boostAsset, _sales);
        }
    }
}