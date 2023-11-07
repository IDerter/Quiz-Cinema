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

                Sprite sprite = Resources.Load($"{likeCinema.Question._cadrCinemaName}", typeof(Sprite)) as Sprite;
                spawnObj.GetComponent<Image>().sprite = sprite;
            }
        }
    }
}