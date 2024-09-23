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
using UnityEngine.UI;

namespace QuizCinema
{
    public class StarsTableAnim : MonoBehaviour
    {
        [SerializeField] private GameObject starPrefab;

        [SerializeField] private Transform starParent;

        [SerializeField] private Transform spawnLocation;

        [SerializeField] private Transform endPosition;
        [SerializeField] private Transform endPositionToPunch;

        [SerializeField] private float duration;

        [SerializeField] private float minX;

        [SerializeField] private float maxX;

        [SerializeField] private float minY;

        [SerializeField] private float maxY;

        private GameObject key;

        private Tween fillSliderReactionTween;
        [SerializeField] private bool _isActiveYellowStar;


        private void Awake()
        {
            starPrefab = gameObject;
            starParent = GetComponent<RectTransform>();
            spawnLocation = GetComponent<RectTransform>();
            ResetSaveUIStars();
        }

        private void OnDestroy()
        {
        }

        private string GetParentName()
		{
            Transform parentTransform = transform.parent;

            if (parentTransform != null)
            {
                Debug.Log("Родительский объект: " + parentTransform.name);
                Transform grandParentTransform = parentTransform.parent;

                if (grandParentTransform != null)
                {

                    return grandParentTransform.name + transform.name;

                }
                else
                {
                    Debug.Log("У родительского объекта нет родителя.");
                }
            }
            else
            {
                Debug.Log("У данного объекта нет родительского объекта.");
            }
            return "";
        }

        public bool IsSaveUIStarProgress()
		{
            var nameStar = GetParentName();
            if (nameStar.Length == 0)
			{
                return false;
			}

            if (PlayerPrefs.GetInt(nameStar) == 1)
            {
                return false;
            }
            PlayerPrefs.SetInt(nameStar, 1);
            Debug.Log(nameStar + " testStarsTable");

            return true;
        }

        public void ResetSaveUIStars()
		{
            var nameStar = GetParentName();
            PlayerPrefs.SetInt(nameStar, 0);
        }


        [Button()]
        public async void StarAnimStart()
        {
            Debug.Log("StartKeyAnim");
            GameObject keyInstance = Instantiate(starPrefab, starParent);
            float xPosition = spawnLocation.position.x + Random.Range(minX, maxX);
            float yPosition = spawnLocation.position.y + Random.Range(minY, maxY);

            keyInstance.transform.position = new Vector3(xPosition, yPosition);
            // await keyInstance.transform.DOPunchPosition(new Vector3(0, 30, 0), Random.Range(0, 1f)).SetEase(Ease.InOutElastic)
            //    .ToUniTask();
            key = keyInstance;

            if (IsSaveUIStarProgress())
			{
                await key.transform.GetComponent<Image>().DOFade(1, duration / 2);
                await UniTask.Delay(TimeSpan.FromSeconds(0.01f));

                MoveStarTask();
            }
        }


        private void MoveStarTask()
        {
            UniTask moveKeyTask = new UniTask();
            moveKeyTask = MoveStarTask(key);

        }

        private async UniTask MoveStarTask(GameObject keyInstance)
        {
            Debug.Log("MoveKeyTask");
            await keyInstance.transform.DOMove(endPosition.position, duration * 2).SetEase(Ease.InBack).ToUniTask();
            Destroy(keyInstance);
            await ReactToCollectionStar();

            // Debug.Log("SETCOINMOVECOINTASK!" + needToSum / coinAmount);

        }

        private async UniTask ReactToCollectionStar()
        {
            if (fillSliderReactionTween == null)
            {
                fillSliderReactionTween = endPositionToPunch.DOPunchScale(new Vector3(0.1f, 0.1f, 0.1f), duration / 4).SetEase(Ease.InOutElastic);
                await fillSliderReactionTween.ToUniTask();
                fillSliderReactionTween = null;
            }
            //coinStart = coinEnd;
        }
    }
}