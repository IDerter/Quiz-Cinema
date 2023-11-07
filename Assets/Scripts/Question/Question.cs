using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

namespace QuizCinema
{
    public enum AnswerType { Multiply, Single }

    [Serializable()]
    public class Answer
    {
        public string Info;

        public string TranslateInfo;

        public bool IsCorrect;

        public Answer() { }
    }

    [Serializable()]
    public class Question
    {
        /// <summary>
        /// Index 0-2 - text questions
        /// Index = 3 - image questionsd
        /// </summary>
        public int IndexPrefab = 0;

        public string Info = String.Empty;

        public string NoteFilm = String.Empty;

        public string Director = String.Empty;

        public string _cadrCinemaName;

        public Answer[] Answers = null;

        // Parameters
        public bool UseTimer = false;

        public int Timer = 0;

        public AnswerType GetAnswerType = AnswerType.Single;

        public int AddScore = 0;

        public Question() { }

        public List<int> GetCorrectAnswers()
        {
            List<int> correctAnswers = new List<int>();
            for (int i = 0; i < Answers.Length; i++)
            {
                if (Answers[i].IsCorrect)
                {
                    correctAnswers.Add(i);
                }
            }
            return correctAnswers;
        } 
    }
}