using System.Collections;
using System.Collections.Generic;
using System.Linq;
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
    public class TextQuestionMultiply
    {
        [SerializeField] private Sprite _correctAnswer;
        public Sprite CorrectAnswer => _correctAnswer;

        [SerializeField] private AnswerData[] _answerPrefabsCorrect;
        public AnswerData[] AnswerPrefabsCorrect => _answerPrefabsCorrect;

        [SerializeField] private AnswerData[] _answerPrefabsUnCorrect;
        public AnswerData[] AnswerPrefabsUnCorrect => _answerPrefabsUnCorrect;

        [SerializeField] private TextMeshProUGUI[] _copyTextUncorrectAnswer;
        public TextMeshProUGUI[] CopyTextUncorrectAnswer => _copyTextUncorrectAnswer;

        [SerializeField] private TextMeshProUGUI[] _copyTextCorrectAnswer;
        public TextMeshProUGUI[] CopyTextCorrectAnswer => _copyTextCorrectAnswer;
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

        [SerializeField] private TextQuestionMultiply _textQuestionUnCorrectPanelMultiply;
        [SerializeField] private TextQuestionMultiply _textQuestionCorrectPanelMultiply;

        [SerializeField] private ImageQuestion _imageQuestionUnCorrect;
        [SerializeField] private ImageQuestion _imageQuestionCorrect;

        [SerializeField] private UIManager _uiManager;

        [SerializeField] private GameObject _panelMultiplyMainTextQuestion;
        [SerializeField] private GameObject _panelMainTextQuestion;
        [SerializeField] private GameObject _panelMainImageQuestion;

        [SerializeField] private GameObject _panelTextQuestionsUncorrect;
        [SerializeField] private GameObject _panelTextQuestionsCorrect;

        [SerializeField] private GameObject _panelImageQuestionsUnCorrect;
        [SerializeField] private GameObject _panelImageQuestionsCorrect;

        [SerializeField] private GameObject _panelTextMultiplyQuestionsUncorrect;
        [SerializeField] private GameObject _panelTextMultiplyQuestionsCorrect;

        [Header("Panel Add Movie")]
        [SerializeField] private TextMeshProUGUI _textCinemaName;
        [SerializeField] private TextMeshProUGUI _textCinemaInfo;
        [SerializeField] private Image _directorImage;
        private string _directorName;
        private Question _currentQuestion;

        [SerializeField] private Button _answerButtonNextQuestion;

        [SerializeField] private Sprite _likeSpritePress;
        [SerializeField] private Sprite _likeSpriteUnPress;
        [SerializeField] private Image _likeImage;


        private int _correctIndex;

        private AnswerData _correctAnswerSingle;
        private AnswerData _currentAnswerSingle;

        [SerializeField] private List<AnswerData> _correctAnswerMultiple;
        [SerializeField] private List<AnswerData> _currentAnswerMultiple;

        private bool _flagLike = false;
        private int _limitSymbolInQuestion = 200;

        private void Start()
        {
            _uiManager.OnCreateAnswers += OnCreateAnswers;
            _uiManager.OnCorrectAnswer += OnCorrectAnswer;

            AnswerData.UpdateQuestionAnswer += UpdateQuestionAnswer;
            QuestionMethods.Instance.CurrentAnswerList += UpdateCurrentAnswerList;
            Score.Instance.UpdateScore += UpdateButtonNext;
        }

        private void UpdateButtonNext()
        {
            _answerButtonNextQuestion.enabled = true;
        }

        private void OnDestroy()
        {
            _uiManager.OnCreateAnswers -= OnCreateAnswers;
            _uiManager.OnCorrectAnswer -= OnCorrectAnswer;

            AnswerData.UpdateQuestionAnswer -= UpdateQuestionAnswer;
            QuestionMethods.Instance.CurrentAnswerList -= UpdateCurrentAnswerList;
            Score.Instance.UpdateScore -= UpdateButtonNext;
        }

        private void UpdateCurrentAnswerList(List<AnswerData> answers)
        {
            _currentAnswerMultiple = answers;

            _likeImage.sprite = _likeSpriteUnPress;
            _flagLike = false;

            if (_currentQuestion.GetAnswerType == AnswerType.Single)
            {
                Debug.Log("Single Question UpdQuestAnswer");

                _currentAnswerSingle = answers[0];
                _answerButtonNextQuestion.enabled = true;

                if (_currentAnswerSingle != _correctAnswerSingle)
                {
                    Debug.Log("Неправ ответ!");
                    EnablePanelSingle(_panelTextQuestionsUncorrect, _panelImageQuestionsUnCorrect);

                }
                else
                {
                    Debug.Log("Прав ответ!");
                    EnablePanelSingle(_panelTextQuestionsCorrect, _panelImageQuestionsCorrect);
                }

                _textQuestionUnCorrectPanel.CopyTextUncorrectAnswer.text = answers[0].InfoText.text;

                _imageQuestionUnCorrect.UnCorrectImage.sprite = answers[0].GetCurrentImage.sprite;
            }
            else
            {
                Debug.Log("Multiply Question UpdQuestAnswer");
                _answerButtonNextQuestion.enabled = true;
                if (_currentAnswerMultiple.Count == _correctAnswerMultiple.Count)
                {
                    Debug.Log("Длины списков равны");
                    List<int> pickedAnswersList = _currentAnswerMultiple.Select(x => x.AnswerIndex).ToList();
                    List<int> correctAnswersList = _correctAnswerMultiple.Select(x => x.AnswerIndex).ToList();

                    var firstList = pickedAnswersList.Except(correctAnswersList).ToList();
                    var secondList = correctAnswersList.Except(pickedAnswersList).ToList();

                    var concatList = secondList.Concat(firstList).ToList();

                    var check = !concatList.Any();
                    _panelMultiplyMainTextQuestion.SetActive(true);
                    if (check)
                    {
                        Debug.Log("Прав ответ!");
                        EnablePanelMultiply(_panelTextMultiplyQuestionsCorrect, _panelTextMultiplyQuestionsUncorrect, true);
                    }
                    else
                    {
                        EnablePanelMultiply(_panelTextMultiplyQuestionsCorrect, _panelTextMultiplyQuestionsUncorrect, false);

                        for (int i = 0; i < _currentAnswerMultiple.Count; i++)
                        {
                            _textQuestionUnCorrectPanelMultiply.CopyTextUncorrectAnswer[i].text = _currentAnswerMultiple[i].InfoText.text;
                        }

                        SetCorrectSpriteToMultipleQuestion();
                    }
                }
            }
        }


        private void UpdateQuestionAnswer(AnswerData answer)
        {
            Debug.Log("UpdateQuestionAnswer");
            
        }

        private void EnablePanelSingle(GameObject textPanel, GameObject imagePanel)
        {
            textPanel.SetActive(true);
            imagePanel.SetActive(true);
        }

        private void EnablePanelMultiply(GameObject correct, GameObject unCorrect, bool enable)
        {
            correct.SetActive(enable);
            unCorrect.SetActive(!enable);
        }

        private void SetCorrectSpriteToMultipleQuestion()
        {
            for (int i = 0; i < _textQuestionUnCorrectPanelMultiply.AnswerPrefabsCorrect.Length; i++)
            {
                for (int j = 0; j < _textQuestionUnCorrectPanelMultiply.AnswerPrefabsUnCorrect.Length; j++)
                {
                    if (_textQuestionUnCorrectPanelMultiply.AnswerPrefabsUnCorrect[i].InfoText.text == _textQuestionUnCorrectPanelMultiply.AnswerPrefabsCorrect[j].InfoText.text)
                    {
                        _textQuestionUnCorrectPanelMultiply.AnswerPrefabsUnCorrect[i].GetComponent<Image>().sprite = _textQuestionUnCorrectPanelMultiply.CorrectAnswer;
                    }
                }
            }
        }

        private void OnCorrectAnswer(List<AnswerData> answer)
        {
            Debug.Log("OnCorrectAnswer");

            _correctAnswerSingle = answer[0];
            _correctAnswerMultiple = answer;
            StartCoroutine(SetCorrectText(answer));
        }

        IEnumerator SetCorrectText(List<AnswerData> listCorrectAnswers)
        {
            yield return new WaitForSeconds(GameUtility.ResolutionDelayTime * 2);
            if (listCorrectAnswers.Count == 1)
            {
                _correctAnswerSingle = listCorrectAnswers[0];

                _textQuestionUnCorrectPanel.CopyTextCorrectAnswer.text = _correctAnswerSingle.InfoText.text;
                _textQuestionCorrectPanel.CopyTextCorrectAnswer.text = _correctAnswerSingle.InfoText.text;

                _imageQuestionUnCorrect.CorrectImage.sprite = _correctAnswerSingle.GetCurrentImage.sprite;
                _imageQuestionCorrect.CorrectImage.sprite = _correctAnswerSingle.GetCurrentImage.sprite;

                _textCinemaName.text = _correctAnswerSingle.InfoText.text;
            }
            else
            {
                if (listCorrectAnswers.Count == 2)
                {
                    for (int i = 0; i < listCorrectAnswers.Count; i++)
                    {
                        _textQuestionUnCorrectPanelMultiply.CopyTextCorrectAnswer[i].text = listCorrectAnswers[i].InfoText.text;
                        _textQuestionCorrectPanelMultiply.CopyTextCorrectAnswer[i].text = listCorrectAnswers[i].InfoText.text;
                    }
                    _textCinemaName.text = _currentQuestion._cadrCinemaName;
                }
            }
        }


        private void OnCreateAnswers(Question question)
        {
            Debug.Log("OnCreateAnswers");
            _currentQuestion = question;
            StartCoroutine(SetCorrectQuestionText(question));
        }

        IEnumerator SetCorrectQuestionText(Question question)
        {
            CloseAllPanels();

            Debug.Log("SetCorrectQuestionTextDoTimera");
            yield return new WaitForSeconds(GameUtility.ResolutionDelayTime * 2);

            SetAllInfoQuestion(question);

            if (question.IndexPrefab == 3)
            {
                _panelMainImageQuestion.SetActive(true);
            }
            else
            {
                if (question.GetAnswerType == AnswerType.Single)
                    _panelMainTextQuestion.SetActive(true);
                else
                    _panelMultiplyMainTextQuestion.SetActive(true);
            }
        }

        private void SetAllInfoQuestion(Question question)
        {
            Debug.Log("SetCorrectQuestionText");

            string questionText = question.Info;
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


            _copyTextQuestion.text = correctText;

            _textCinemaInfo.text = question.NoteFilm;
            Sprite sprite = Resources.Load($"Directors/{question.Director}", typeof(Sprite)) as Sprite;

            _directorName = question.Director;
            _directorImage.sprite = sprite;
        }

       public void CloseAllPanels()
        {
            _panelMultiplyMainTextQuestion.SetActive(false);

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