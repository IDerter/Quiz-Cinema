using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using TowerDefense;
using Cysharp.Threading.Tasks;
using System;
using DG.Tweening;

namespace QuizCinema
{
    public class UICoins : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _textCoins;
        [SerializeField] private int _coins;
        [SerializeField] private GameObject _coinImage;

        private int _coinsEnd;

        private Tween coinReactionTween;

        private void Start()
        {
            _coins = MapCompletion.Instance.TotalScoreLvls - MapCompletion.Instance.MoneyShop - MapCompletion.Instance.SkinShop;
            _coinsEnd = _coins;
            _textCoins.text = _coins.ToString();
        }

        private void OnEnable()
        {
            MapCompletion.OnScoreUpdate += OnScoreUpdate;
        }

        private void OnDestroy()
        {
            MapCompletion.OnScoreUpdate -= OnScoreUpdate;
        }

        private async void OnScoreUpdate()
        {
            _coinsEnd = MapCompletion.Instance.TotalScoreLvls - MapCompletion.Instance.MoneyShop - MapCompletion.Instance.SkinShop;

            await CalculateScore();

            Debug.Log("ONSCOREUPDATE!");
        }

        private async UniTask CalculateScore()
		{
            if (_coins > _coinsEnd)
			{
                var taskReact = ReactCoins();
                Debug.Log("CalculateScore");
                while (_coins > _coinsEnd)
                {
                    Debug.Log("CalculateScore" + _coins);
                    await UniTask.Delay(TimeSpan.FromSeconds(0.0001f));
                    _coins--;
                    _textCoins.text = _coins.ToString();
                }
                await UniTask.WhenAll(taskReact);
            }
        }

        private async UniTask ReactCoins()
        {
            if (coinReactionTween == null)
            {
                coinReactionTween = _coinImage.transform.DOPunchScale(new Vector3(0.1f, 0.1f, 0.1f), 1).SetEase(Ease.InOutElastic);
                await coinReactionTween.ToUniTask();
                coinReactionTween = null;
            }
            //coinStart = coinEnd;
        }
    }
}