using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using TowerDefense;
using Cysharp.Threading.Tasks;
using System;
using DG.Tweening;
using System.Threading.Tasks;

namespace QuizCinema
{
    public class UICoins : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _textCoins;
        [SerializeField] private int _coins;
        [SerializeField] private GameObject _coinImage;

        private int _coinsEnd;

        private Tween coinReactionTween;

        private const string _coinSFX = "Coins";

        private void Start()
        {
            Debug.Log(MapCompletion.Instance.TotalScoreLvls + " " + MapCompletion.Instance.TotalAdsMoney + " " + MapCompletion.Instance.MoneyShop + MapCompletion.Instance.SkinShop);
            _coins = (MapCompletion.Instance.TotalScoreLvls + MapCompletion.Instance.TotalAdsMoney) - MapCompletion.Instance.MoneyShop - MapCompletion.Instance.SkinShop;
            _coinsEnd = _coins;
            _textCoins.text = _coins.ToString();
        }

        private void OnEnable()
        {
            MapCompletion.OnScoreUpdate += OnScoreUpdate;
			UIManager.Instance.OnFinishScoreCalculating += OnFinishScoreCalculating;
        }

		private void OnDestroy()
        {
            MapCompletion.OnScoreUpdate -= OnScoreUpdate;
            UIManager.Instance.OnFinishScoreCalculating -= OnFinishScoreCalculating;
        }

        private async void OnFinishScoreCalculating()
        {
            await CalculateCoins();
        }

        private async void OnScoreUpdate()
        {
            _coinsEnd = (MapCompletion.Instance.TotalScoreLvls + MapCompletion.Instance.TotalAdsMoney) - MapCompletion.Instance.MoneyShop - MapCompletion.Instance.SkinShop;

            await CalculateScore();

            Debug.Log("ONSCOREUPDATE! " + _coinsEnd + " " + _coins);
        }



        private async UniTask CalculateScore()
		{
            if (UIManager.Instance == null)
			{
				await CalculateCoins();
			}

		}

		private async Task CalculateCoins()
		{
			var scoreMoreThanZero = _coinsEnd - _coins > 0;

			AudioManager.Instance.PlaySound(_coinSFX);

			var taskReact = ReactCoins();
			Debug.Log("CalculateScore");
			while (scoreMoreThanZero ? _coins < _coinsEnd : _coins > _coinsEnd)
			{
				Debug.Log("CalculateScore" + _coins + " " + _coinsEnd + " " + scoreMoreThanZero);
				await UniTask.Delay(TimeSpan.FromSeconds(0.0001f));
				_coins += scoreMoreThanZero ? 1 : -1;
				_textCoins.text = _coins.ToString();
			}
			Debug.Log("CalculateScore" + _coins + " " + _coinsEnd + " after while");
			await UniTask.WhenAll(taskReact);
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

        public void AddCoins(int coins)
		{

            MapCompletion.Instance.TotalAdsMoney += coins;
            OnScoreUpdate();
            MapCompletion.SaveAds();
		}
    }
}