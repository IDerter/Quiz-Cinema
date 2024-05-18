using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{


    public class UIResultBetweenQuestion : MonoBehaviour
    {
        [SerializeField] private GameManager _gameManager;

        [Header("Correct and Incorrect")]
        [SerializeField] private Sprite _correctBg;
        [SerializeField] private Sprite _inCorrectBg;
        [SerializeField] private Image _bgResultPanel;
        [SerializeField] private GameObject _textContainerCorrect;
        [SerializeField] private GameObject _textContainerInCorrect;
        [SerializeField] private Button _buttonCorrectNext;
        [SerializeField] private Button _buttonInCorrectGoOn;

        [SerializeField] private GameObject _correctAnswer1;
        [SerializeField] private TextMeshProUGUI _correctAnswer1TextInfo;
        [SerializeField] private GameObject _correctAnswer2;
        [SerializeField] private TextMeshProUGUI _correctAnswer2TextInfo;

        [Header("Panel Add Movie")]
        [SerializeField] private TextMeshProUGUI _textCinemaName;
        [SerializeField] private TextMeshProUGUI _textCinemaInfo;
        [SerializeField] private Image _directorImage;
        private string _directorName;
        private Question _currentQuestion;

        [SerializeField] private Sprite _likeSpritePress;
        [SerializeField] private Sprite _likeSpriteUnPress;
        [SerializeField] private Image _likeImage;

        [SerializeField] private List<AnswerData> _listAnswersPicked;
        [SerializeField] private List<Answer> _listAnswersCorrect;

        [SerializeField] private List<int> _correctAnswersIndex;

        private int _correctIndex;

        private AnswerData _correctAnswerSingle;
        private AnswerData _currentAnswerSingle;

        private bool _flagLike = false;
        private int _limitSymbolInQuestion = 200;

        private void Start()
        {
            _gameManager.OnCorrectAnswer += OnCorrectAnswer;
            _gameManager.OnInCorrectAnswer += OnInCorrectAnswer;

            AnswersMethods.Instance.OnCreateAnswers += OnCreateAnswers;

            QuestionMethods.Instance.CurrentAnswerList += UpdateCurrentAnswerList;
        }


        private void OnDestroy()
        {
            _gameManager.OnCorrectAnswer -= OnCorrectAnswer;
            _gameManager.OnInCorrectAnswer -= OnInCorrectAnswer;

            AnswersMethods.Instance.OnCreateAnswers -= OnCreateAnswers;

            QuestionMethods.Instance.CurrentAnswerList -= UpdateCurrentAnswerList;
        }

        private void OnCorrectAnswer()
        {
            CorrectSetActive(true);
        }

        private void CorrectSetActive(bool correct)
        {
            _bgResultPanel.sprite = correct ? _correctBg : _inCorrectBg;

            _buttonCorrectNext.enabled = correct;
            _buttonCorrectNext.gameObject.SetActive(correct);
            _textContainerCorrect.SetActive(correct);

            _buttonInCorrectGoOn.enabled = !correct;
            _buttonInCorrectGoOn.gameObject.SetActive(!correct);
            _textContainerInCorrect.SetActive(!correct);
            
        }


        private void OnInCorrectAnswer()
        {
            CorrectSetActive(false);
        }

        private void UpdateCurrentAnswerList(List<AnswerData> answers)
        {
            _listAnswersPicked = answers;


            _likeImage.sprite = _likeSpriteUnPress;
            _flagLike = false;

      
           
        }

        private void OnCreateAnswers(Question question)
        {
            _listAnswersCorrect.Clear();
            Debug.Log("OnCreateAnswers");
            _currentQuestion = question;

            _correctAnswersIndex = _currentQuestion.GetCorrectAnswers();
            for (int i = 0; i < _correctAnswersIndex.Count; i++)
            {
                _listAnswersCorrect.Add(question.Answers[_correctAnswersIndex[i]]);
            }

            StartCoroutine(SetCorrectQuestionText(question));
        }

        IEnumerator SetCorrectQuestionText(Question question)
        {

            Debug.Log("SetCorrectQuestionTextDoTimera");
            yield return new WaitForSeconds(GameUtility.ResolutionDelayTime * 2);

            SetAllInfoQuestion(question);


        }

        private void SetAllInfoQuestion(Question question)
        {
            Debug.Log("SetCorrectQuestionText");

            string questionText = question.ListInfoQuestion[PlayerPrefs.GetInt("IndexLanguageSave")];
            string correctText = null;

            var mas = questionText.Split('\n');
            int countChar = 0;

            foreach (var sentence in mas)
            {
                if (countChar + sentence.Length < _limitSymbolInQuestion)
                {
                    countChar += sentence.Length;
                    correctText += sentence;
                }
                else
                {
                    correctText += "...";
                    break;
                }
            }


            if (question.ListDescriptionFilm.Count >=2)
                _textCinemaInfo.text = question.ListDescriptionFilm[PlayerPrefs.GetInt("IndexLanguageSave")];

            Sprite sprite = Resources.Load($"Posters/{question._cadrCinemaName}_poster", typeof(Sprite)) as Sprite;
            Sprite sprite2 = Resources.Load($"Directors/{question.Director}", typeof(Sprite)) as Sprite;

            _directorName = question.Director;
            _directorImage.sprite = sprite;

  

            _textCinemaName.text = _listAnswersCorrect[0].InfoList[PlayerPrefs.GetInt("IndexLanguageSave")];

            _correctAnswer1.SetActive(true);
            _correctAnswer1TextInfo.text = "Answer " +  $"\"{_listAnswersCorrect[0].InfoList[PlayerPrefs.GetInt("IndexLanguageSave")]}\" is correct!";
            
            if (_currentQuestion._answerType == AnswerType.Multiply)
            {
                _textCinemaName.text += "and" + _listAnswersCorrect[1].InfoList[PlayerPrefs.GetInt("IndexLanguageSave")];
                _correctAnswer2.SetActive(true);
                _correctAnswer2TextInfo.text = "Answer " + $"\"{_listAnswersCorrect[1].InfoList[PlayerPrefs.GetInt("IndexLanguageSave")]}\" is correct!";
            }
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