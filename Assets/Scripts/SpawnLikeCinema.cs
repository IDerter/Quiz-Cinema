using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class SpawnLikeCinema : MonoBehaviour
    {
        [SerializeField] private GameObject _prefabLikeCinema;
        [SerializeField] private RectTransform _spawnParent;

        private void Start()
        {
            var list = DataLikeCinema.Instance.CompletionDataCinema;

            foreach (var likeCinema in list)
            {
                var spawnObj = Instantiate(_prefabLikeCinema, _spawnParent);

                Debug.Log($"Posters/{ likeCinema.CadrCinemaName}_poster");
                Sprite sprite = Resources.Load($"Posters/{likeCinema.CadrCinemaName}_poster", typeof(Sprite)) as Sprite;
               // Debug.Log(sprite.name);
                spawnObj.GetComponent<Image>().sprite = sprite;
            }
        }
    }
}