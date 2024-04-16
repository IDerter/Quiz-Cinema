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

        [SerializeField] private Text _countCorrectAnswer;
        public Text CountCorrectAnswer { get { return _countCorrectAnswer; } set { _countCorrectAnswer = value; } }

        [SerializeField] private TextMeshProUGUI _numberCurrentQuestion;
        public TextMeshProUGUI NumberCurrentQuestion { get { return _numberCurrentQuestion; } set { _numberCurrentQuestion = value; } }

        [SerializeField] private Image[] _cadrCinema;
        public Image[] CadrCinema { get { return _cadrCinema; } set { _cadrCinema = value; } }

        [Space]
        [SerializeField] private Animator _resolutionScreenAnimator;
        public Animator ResolutionScreenAnimator => _resolutionScreenAnimator;


        [SerializeField] private TextMeshProUGUI _textFinalLvl;
        public TextMeshProUGUI TextFinalLvl { get { return _textFinalLvl; } set { _textFinalLvl = value; } }

        [Space]
        [Header("Score")]
        [SerializeField] private Text _scoreFinalLvl;
        public Text ScoreFinalLvl => _scoreFinalLvl;

        [SerializeField] private TextMeshProUGUI _countCurrentScore;
        public TextMeshProUGUI CountCurrentScore => _countCurrentScore;

        [SerializeField] private RectTransform _finishUIElements;
        public RectTransform FinishUIElements => _finishUIElements;

        [SerializeField] private GameObject _buttonFinishNextLvl;
        public GameObject EnableButtonFinishNextLvl => _buttonFinishNextLvl;

        [SerializeField] private GameObject _buttonFinishReloadLvl;
        public GameObject EnableButtonFinishReloadLvl => _buttonFinishReloadLvl;
    }
}