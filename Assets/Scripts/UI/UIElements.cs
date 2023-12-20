using UnityEngine;
using System;
using TMPro;
using UnityEngine.UI;

namespace QuizCinema
{
    [Serializable]
    public struct UIElements
    {
        [SerializeField] private RectTransform[] _answerContentArea;
        public RectTransform[] AnswerContentArea => _answerContentArea;
        [SerializeField] private TextMeshProUGUI[] _questionInfoTextObject;
        public TextMeshProUGUI[] QuestionInfoTextObject => _questionInfoTextObject;

        [SerializeField] private TextMeshProUGUI _countCorrectAnswer;
        public TextMeshProUGUI CountCorrectAnswer { get { return _countCorrectAnswer; } set { _countCorrectAnswer = value; } }

        [SerializeField] private TextMeshProUGUI _countCurrentAnswer;
        public TextMeshProUGUI CountCurrentAnswer { get { return _countCurrentAnswer; } set { _countCurrentAnswer = value; } }

        [SerializeField] private Image[] _cadrCinema;
        public Image[] CadrCinema { get { return _cadrCinema; } set { _cadrCinema = value; } }

        [Space]
        [SerializeField] private Animator _resolutionScreenAnimator;
        public Animator ResolutionScreenAnimator => _resolutionScreenAnimator;

        [SerializeField] private Image _resolutionBG;
        public Image ResolutionBG => _resolutionBG;
        [SerializeField] private TextMeshProUGUI _resolutionStateInfoText;
        public TextMeshProUGUI ResolutionStateInfoText => _resolutionStateInfoText;

        [SerializeField] private TextMeshProUGUI _resolutionScoreText;
        public TextMeshProUGUI ResolutionScoreText => _resolutionScoreText;

        [SerializeField] private TextMeshProUGUI _textFinalLvl;
        public TextMeshProUGUI TextFinalLvl { get { return _textFinalLvl; } set { _textFinalLvl = value; } }

        [SerializeField] private TextMeshProUGUI _textSuccessLvl;
        public TextMeshProUGUI TextSuccessLvl { get { return _textSuccessLvl; } set { _textSuccessLvl = value; } }
        [Space]
        [Header("Score")]
        [SerializeField] private TextMeshProUGUI _scoreFinalLvl;
        public TextMeshProUGUI ScoreFinalLvl => _scoreFinalLvl;

        [SerializeField] private TextMeshProUGUI _scoreCurrentLvl;
        public TextMeshProUGUI ScoreCurrentLvl => _scoreCurrentLvl;

        [SerializeField] private TextMeshProUGUI _highScoreText;
        public TextMeshProUGUI HighScoreText => _highScoreText;

        [SerializeField] private RectTransform _finishUIElements;
        public RectTransform FinishUIElements => _finishUIElements;

        [SerializeField] private GameObject _buttonFinishNextLvl;
        public GameObject EnableButtonFinishNextLvl => _buttonFinishNextLvl;

        [SerializeField] private GameObject _buttonFinishReloadLvl;
        public GameObject EnableButtonFinishReloadLvl => _buttonFinishReloadLvl;
    }
}