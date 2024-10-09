using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static QuizCinema.DataLikeCinema;

namespace QuizCinema
{
    public class SpawnLikeCinema : MonoBehaviour
    {
        [SerializeField] private LikeCinemaPanel _prefabLikeCinema;
        [SerializeField] private RectTransform _spawnParent;
        [SerializeField] private CinemaInfo _cinemaInfo;

        private void Start()
        {
            var list = DataLikeCinema.Instance.CompletionDataCinema;

            foreach (var likeCinema in list)
            {
                var spawnObj = Instantiate(_prefabLikeCinema, _spawnParent);

                Debug.Log($"Posters/{ likeCinema.CadrCinemaName}_poster");
                Sprite sprite = Resources.Load($"Posters/{likeCinema.CadrCinemaName}_poster", typeof(Sprite)) as Sprite;
                // Debug.Log(sprite.name);
                foreach (var answer in likeCinema.Question.Answers)
				{
                    if (answer.IsCorrect)
					{
                        spawnObj.GetComponent<LikeCinemaPanel>().TextCinemaName.text = answer.InfoList[PlayerPrefs.GetInt("IndexLanguageSave")];
                    }
				}

                spawnObj.GetComponent<LikeCinemaPanel>().PosterImage.sprite = sprite;
                spawnObj.GetComponent<LikeCinemaPanel>().TextCinemaInfo.text = likeCinema.Question.ListDescriptionFilm[PlayerPrefs.GetInt("IndexLanguageSave")];
                spawnObj.GetComponent<LikeCinemaPanel>().CinemaInfo = likeCinema;
            }
        }
    }
}