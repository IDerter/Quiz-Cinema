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
        public Image GetCurrentImage => _currentImage;


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

        private void Start()
        {
            _currentImage = GetComponent<Image>();
        }


        public void UpdateData(string info, int index)
        {
            _infoText.text = info;
            _answerIndex = index;
        }

        public void Reset()
        {
            _checked = false;
            UpdateUI();
        }

        public virtual void SwitchCase()
        {
            _checked = !_checked;
            UpdateUI();
            
            UpdateQuestionAnswer?.Invoke(this);
            Debug.Log("Switch case");
        }

        private void UpdateUI()
        {
            _toogle.sprite = (_checked) ? _checkedToggle : _uncheckedToggle;

        }
    }
}