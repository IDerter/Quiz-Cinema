using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class TranslateInfo : SingletonBase<TranslateInfo>
    {
        [SerializeField] private List<string> _textCorrect = new List<string> { "is correct", "����������"};
        public List<string> TextCorrect => _textCorrect;

        [SerializeField] private List<string> _textInCorrect = new List<string> { "is wrong", "������������" };
        public List<string> TextInCorrect => _textInCorrect;

        [SerializeField] private List<string> _textAnswer = new List<string> { "Answer", "�����" };
        public List<string> TextAnswer => _textAnswer;
    }
}