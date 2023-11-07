using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace QuizCinema
{
    public class CopyTextToMovieAddPanel : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _textCinemaName;
        [SerializeField] private TextMeshProUGUI _textCinemaInfo;

        [SerializeField] private UIManager _uIManager;


        private void Start()
        {
            _uIManager.OnCreateAnswers += OnCreateAnswers;
            _uIManager.OnCorrectAnswer += OnCorrectAnswers;
        }

        private void OnDestroy()
        {
            _uIManager.OnCreateAnswers -= OnCreateAnswers;
            _uIManager.OnCorrectAnswer -= OnCorrectAnswers;
        }

        private void OnCorrectAnswers(AnswerData answer)
        {
            _textCinemaName.text = answer.InfoText.text;
        }

        private void OnCreateAnswers(Question question)
        {
            _textCinemaInfo.text = question.NoteFilm;
        }
    }
}