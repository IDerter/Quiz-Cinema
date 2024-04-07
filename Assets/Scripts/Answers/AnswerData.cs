using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class AnswerData : MonoBehaviour
    {
        public static event Action<AnswerData> UpdateQuestionAnswer;

        [Header("UI Elements")]
        [SerializeField] private TextMeshProUGUI _infoText;
        public TextMeshProUGUI InfoText => _infoText;

        [SerializeField] private Image _toogle;
        public Image Toogle { get { return _toogle; } set { _toogle = value; } }

        [Header("Textures")]
        [SerializeField] private Sprite _uncheckedToggle;
        [SerializeField] private Sprite _checkedToggle;
        [SerializeField] private Image _currentImage;
        public Image CurrentImage { get { return _currentImage; } set { _currentImage = value; } }

        [Header("DisplayCorrect")]
        [SerializeField] private Sprite _unCorrectAnswer;
        [SerializeField] private Sprite _CorrectAnswer;


        private RectTransform _rect;
        public RectTransform Rect
        {
            get
            {
                if (_rect == null)
                {
                    _rect = GetComponent<RectTransform>() ?? gameObject.AddComponent<RectTransform>();
                }

                return _rect;
            }
        }

        private int _answerIndex = -1;
        public int AnswerIndex => _answerIndex;

        private bool _checked = false;
        public bool Checked => _checked;


        public void UpdateData(string info, int index)
        {
            _infoText.text = info;
            _answerIndex = index;
        }

        public void Reset()
        {
            _checked = false;
            UpdateUI(_checked);
        }

        public virtual void SwitchCase()
        {
            _checked = !_checked;
            UpdateUI(_checked);
            
            UpdateQuestionAnswer?.Invoke(this);
            Debug.Log("Switch case");
        }

        public void UpdateUI(bool _checked)
        {
            _toogle.gameObject.SetActive(true);
            _toogle.sprite = (_checked) ? _checkedToggle : _uncheckedToggle;

        }
    }
}