using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    [System.Serializable]
    public class TextQuestion
    {
        [SerializeField] private TextMeshProUGUI _copyTextUncorrectAnswer;
        public TextMeshProUGUI CopyTextUncorrectAnswer => _copyTextUncorrectAnswer;

        [SerializeField] private TextMeshProUGUI _copyTextCorrectAnswer;
        public TextMeshProUGUI CopyTextCorrectAnswer => _copyTextCorrectAnswer;
    }

    [System.Serializable]
    public class ImageQuestion : TextQuestion
    {
        [SerializeField] private Image _correctImage;
        public Image CorrectImage { get { return _correctImage; } set { _correctImage = value; } }

        [SerializeField] private Image _unCorrectImage;
        public Image UnCorrectImage { get { return _unCorrectImage; } set { _unCorrectImage = value; } }

        
    }

    public class UIResultBetweenQuestion : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _copyTextQuestion;
        [SerializeField] private TextQuestion _textQuestionUnCorrectPanel;
        [SerializeField] private TextQuestion _textQuestionCorrectPanel;

        [SerializeField] private ImageQuestion _imageQuestionUnCorrect;
        [SerializeField] private ImageQuestion _imageQuestionCorrect;

        [SerializeField] private UIManager _uiManager;

        [SerializeField] private GameObject _panelMainTextQuestion;
        [SerializeField] private GameObject _panelMainImageQuestion;

        [SerializeField] private GameObject _panelTextQuestionsUncorrect;
        [SerializeField] private GameObject _panelTextQuestionsCorrect;

        [SerializeField] private GameObject _panelImageQuestionsUnCorrect;
        [SerializeField] private GameObject _panelImageQuestionsCorrect;

        [Header("Panel Add Movie")]
        [SerializeField] private TextMeshProUGUI _textCinemaName;
        [SerializeField] private TextMeshProUGUI _textCinemaInfo;
        [SerializeField] private Image _directorImage;
        private string _directorName;
        private Question _currentQuestion;

        [SerializeField] private Button _answerNextQuestion;

        [SerializeField] private Sprite _likeSpritePress;
        [SerializeField] private Sprite _likeSpriteUnPress;
        [SerializeField] private Image _likeImage;


        private int _correctIndex;
        private AnswerData _correctAnswer;
        private AnswerData _currentAnswer;

        private bool _flagLike = false;

        private void Start()
        {
            _uiManager.OnCreateAnswers += OnCreateAnswers;
            _uiManager.OnCorrectAnswer += OnCorrectAnswer;

            AnswerData.UpdateQuestionAnswer += UpdateQuestionAnswer;
        }

        private void OnDestroy()
        {
            _uiManager.OnCreateAnswers -= OnCreateAnswers;
            _uiManager.OnCorrectAnswer -= OnCorrectAnswer;

            AnswerData.UpdateQuestionAnswer -= UpdateQuestionAnswer;

        }


        private void UpdateQuestionAnswer(AnswerData answer)
        {
            Debug.Log("UpdateQuestionAnswer");
            _likeImage.sprite = _likeSpriteUnPress;
            _flagLike = false;

            _currentAnswer = answer;
            _answerNextQuestion.enabled = true;

            if (_currentAnswer != _correctAnswer)
            {
                Debug.Log("Неправ ответ!");
                _panelTextQuestionsUncorrect.SetActive(true);
                _panelImageQuestionsUnCorrect.SetActive(true);
                _panelTextQuestionsUncorrect.SetActive(true);

            }
            else
            {
                Debug.Log("Прав ответ!");
                _panelTextQuestionsCorrect.SetActive(true);
                _panelImageQuestionsCorrect.SetActive(true);
                _panelTextQuestionsCorrect.SetActive(true);
            }

            _textQuestionUnCorrectPanel.CopyTextUncorrectAnswer.text = answer.InfoText.text;

            _imageQuestionUnCorrect.UnCorrectImage.sprite = answer.GetCurrentImage.sprite;
        }

        private void OnCorrectAnswer(AnswerData answer)
        {
            StartCoroutine(SetCorrectText(answer));
        }

        IEnumerator SetCorrectText(AnswerData answer)
        {
            _correctAnswer = answer;
            yield return new WaitForSeconds(GameUtility.ResolutionDelayTime * 2);
           
            _textQuestionUnCorrectPanel.CopyTextCorrectAnswer.text = answer.InfoText.text;
            _textQuestionCorrectPanel.CopyTextCorrectAnswer.text = answer.InfoText.text;

            _imageQuestionUnCorrect.CorrectImage.sprite = answer.GetCurrentImage.sprite;
            _imageQuestionCorrect.CorrectImage.sprite = answer.GetCurrentImage.sprite;

            _textCinemaName.text = answer.InfoText.text;
        }

        private void OnCreateAnswers(Question question)
        {
            _currentQuestion = question;
            StartCoroutine(SetCorrectQuestionText(question));
        }

        IEnumerator SetCorrectQuestionText(Question question)
        {
            CloseAllPanels();

            Debug.Log("SetCorrectQuestionTextDoTimera");
            yield return new WaitForSeconds(GameUtility.ResolutionDelayTime * 2);
            Debug.Log("SetCorrectQuestionText");

            _copyTextQuestion.text = question.Info;

            _textCinemaInfo.text = question.NoteFilm;
            Sprite sprite = Resources.Load($"Directors/{question.Director}", typeof(Sprite)) as Sprite;

            _directorName = question.Director;
            _directorImage.sprite = sprite;
            // _panelImageQuestions.SetActive(false);
            // _panelTextQuestionsUncorrect.SetActive(false);

            if (question.IndexPrefab == 3)
            {
                _panelMainImageQuestion.SetActive(true);
                //_panelImageQuestions.SetActive(true);
            }
            else
            {
                _panelMainTextQuestion.SetActive(true);
                //_panelTextQuestionsUncorrect.SetActive(true);
            }
        }

       public void CloseAllPanels()
        {
            _panelMainImageQuestion.SetActive(false);
            _panelMainTextQuestion.SetActive(false);

            _panelImageQuestionsCorrect.SetActive(false);
            _panelImageQuestionsUnCorrect.SetActive(false);

            _panelTextQuestionsCorrect.SetActive(false);
            _panelTextQuestionsUncorrect.SetActive(false);
        }

        public void PressButtonLike()
        {
            _flagLike = !_flagLike;

            if (_flagLike)
            {
                _likeImage.sprite = _likeSpritePress;
                DataLikeCinema.SaveCinema(_currentQuestion);
            }
            else
            {
                _likeImage.sprite = _likeSpriteUnPress;
                DataLikeCinema.ResetCurrentCinema(_currentQuestion);
            }
        }

    }
}