using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using NaughtyAttributes;
using DG.Tweening;

using TMPro;
using UnityEngine;
using Random = UnityEngine.Random;
using TowerDefense;

namespace QuizCinema
{
    public class CollectingCoins : SingletonBase<CollectingCoins>
    {
        [SerializeField] private GameObject coinPrefab;

        [SerializeField] private Transform coinParent;

        [SerializeField] private Transform spawnLocation;

        [SerializeField] private Transform endPosition;
        [SerializeField] private Transform endPositionToPunch;
        [SerializeField] private Transform _cointUpper;

        [SerializeField] private TextMeshProUGUI _coinText;
        [SerializeField] private float duration;
        [SerializeField] private int coinAmount;

        [SerializeField] private float minX;

        [SerializeField] private float maxX;

        [SerializeField] private float minY;

        [SerializeField] private float maxY;

        List<GameObject> coins = new List<GameObject>();

        private Tween coinReactionTween;

        [SerializeField] private int coinStart;
        [SerializeField] private int coinEnd;
        [SerializeField] private int needToSum;

        private void Start()
        {
            
            MapCompletion.OnScoreUpdate += OnScoreUpdate;
            coinStart = MapCompletion.Instance.TotalScoreLvls - MapCompletion.Instance.MoneyShop - MapCompletion.Instance.SkinShop;

            Debug.Log(MapCompletion.Instance.TotalScoreLvls);

            _coinText.text = coinStart.ToString();
        }

        private void OnDestroy()
        {
            MapCompletion.OnScoreUpdate -= OnScoreUpdate;
        }

        private void OnScoreUpdate()
        {
            Debug.Log("StartCollectingCoins");
            coinEnd = MapCompletion.Instance.TotalScoreLvls;
            needToSum = coinEnd - coinStart;
           // _coinText.text = (coinEnd - coinStart).ToString();
            if (needToSum > 0)
                CollectCoins();

        }

        [Button()]
        public async void CollectCoins()
        {
            Debug.Log("StartCollectCoins");
            // Reset
            
            for (int i = 0; i < coins.Count; i++)
            {
                Destroy(coins[i]);
            }
            coins.Clear();
            // Spawn the coin to a specific location with random value

            List<UniTask> spawnCoinTaskList = new List<UniTask>();
            for (int i = 0; i < coinAmount; i++)
            {
                GameObject coinInstance = Instantiate(coinPrefab, coinParent);
                float xPosition = spawnLocation.position.x + Random.Range(minX, maxX);
                float yPosition = spawnLocation.position.y + Random.Range(minY, maxY);

                coinInstance.transform.position = new Vector3(xPosition, yPosition);
                spawnCoinTaskList.Add(coinInstance.transform.DOPunchPosition(new Vector3(0, 30, 0), Random.Range(0, 1f)).SetEase(Ease.InOutElastic)
                    .ToUniTask());
                coins.Add(coinInstance);
                await UniTask.Delay(TimeSpan.FromSeconds(0.01f));
            }

            await UniTask.WhenAll(spawnCoinTaskList);
            // Move all the coins to the coin label
            await MoveCoinsTask();
            // Animation the reaction when collecting coin
        }

        private void SetCoin(int value)
        {
            Debug.Log("SETCOIN! " + coinStart);
            coinStart += value;
            _coinText.text = coinStart.ToString();
        }
        private async UniTask MoveCoinsTask()
        {
            List<UniTask> moveCoinTask = new List<UniTask>();
            for (int i = coins.Count - 1; i >= 0; i--)
            {
                moveCoinTask.Add(MoveCoinTask(coins[i]));
                await UniTask.Delay(TimeSpan.FromSeconds(0.05f));
            }
        }

        private async UniTask MoveCoinTask(GameObject coinInstance)
        {
            await coinInstance.transform.DOMove(endPosition.position, duration).SetEase(Ease.InBack).ToUniTask();

            GameObject temp = coinInstance;
            coins.Remove(coinInstance);
            Destroy(temp);

            Debug.Log("MoveCoinTask");
            if (coinStart + (needToSum / coinAmount) <= coinEnd) //TODO
                SetCoin(needToSum / coinAmount);
            await ReactToCollectionCoin();

           // Debug.Log("SETCOINMOVECOINTASK!" + needToSum / coinAmount);

        }

        private async UniTask ReactToCollectionCoin()
        {
            if (coinReactionTween == null)
            {
                coinReactionTween = endPositionToPunch.DOPunchScale(new Vector3(0.2f, 0.2f, 0.2f), 0.1f).SetEase(Ease.InOutElastic);
                await coinReactionTween.ToUniTask();
                coinReactionTween = null;
            }

        }
    }
}