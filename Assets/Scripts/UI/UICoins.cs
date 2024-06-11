using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using TowerDefense;

namespace QuizCinema
{
    public class UICoins : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _textCoins;

        private void Start()
        {
            _textCoins.text = (MapCompletion.Instance.TotalScoreLvls - MapCompletion.Instance.MoneyShop).ToString();
        }

        private void OnEnable()
        {
            MapCompletion.OnScoreUpdate += OnScoreUpdate;
        }

        private void OnDestroy()
        {
            MapCompletion.OnScoreUpdate -= OnScoreUpdate;
        }

        private void OnScoreUpdate()
        {
            _textCoins.text = (MapCompletion.Instance.TotalScoreLvls - MapCompletion.Instance.MoneyShop).ToString();
            Debug.Log("ONSCOREUPDATE!");

            //CollectingCoins.Instance.CollectCoins();
        }
    }
}