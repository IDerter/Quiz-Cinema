using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace QuizCinema
{
    [RequireComponent(typeof(Button))]
    public class BoostUICount : MonoBehaviour
    {
        [SerializeField] protected AnswersMethods _answersMethods;
        [SerializeField] protected BoostSO _boostSO;
        public BoostSO GetSetBoostSO { get { return _boostSO; } set { _boostSO = value; } }

        [SerializeField] protected TextMeshProUGUI _textCountBoost;
        public TextMeshProUGUI TextCountBoost { get { return _textCountBoost; } set { _textCountBoost = value; } }

        [SerializeField] protected Text _textDesriptionBoost;
        public Text TextDesctiption { get { return _textDesriptionBoost; } set {  _textDesriptionBoost = value; } }

        protected Button _buttonBoost;

        protected const string _shopSceneName = "Shop";
        private Question _question;


        private void OnEnable()
        {
            BoostsManager.OnPressButtonBoost += OnPressButtonBoost;
            _answersMethods.OnCreateAnswers += OnCreateAnswers;
        }

        private void OnCreateAnswers(Question obj)
        {
            CheckButtonInteractable();
            _question = obj;
        }

        protected virtual void OnPressButtonBoost()
        {
            _textCountBoost.text = BoostsManager.GetCountInInventoryBoost(_boostSO).ToString();

            CheckButtonInteractable();
            Debug.Log("OnPressButtonBoost");
        }

        private void OnDestroy()
        {
            BoostsManager.OnPressButtonBoost -= OnPressButtonBoost;
            _answersMethods.OnCreateAnswers -= OnCreateAnswers;
        }

     

        private void Start()
        {
            _buttonBoost = GetComponent<Button>();

            CheckButtonInteractable();
        }

        protected virtual void CheckButtonInteractable()
        {
            int countBoost = BoostsManager.GetCountInInventoryBoost(_boostSO);
            _textCountBoost.text = countBoost.ToString();

            if (countBoost > 0)
            {
                if (_buttonBoost != null) _buttonBoost.interactable = true;
            }
            else if (_buttonBoost != null) _buttonBoost.interactable = false;
          
        }

    }
}