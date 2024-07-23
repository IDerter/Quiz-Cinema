using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class BoostInGame : BoostUICount
    {
        [SerializeField] protected BoostParent _boostScript;
        [SerializeField] protected Button _buttonBoost;
        [SerializeField] private bool _everyQuestionActivate = false;
        public bool GetEveryQuestionActivate => _everyQuestionActivate;

        private void Start()
        {
			GameManager.Instance.OnNextQuestion += OnNextQuestion;
           // if (_boostScript.IsStartActiveBoost)
           //     _boostScript.ActivateBoost();
        }
		private void OnDestroy()
		{
            GameManager.Instance.OnNextQuestion -= OnNextQuestion;
        }

		private void OnNextQuestion()
		{
            if (_everyQuestionActivate)
                _buttonBoost.interactable = true;
        }

		private void OnEnable()
        {
            if (_boostScript.IsStartActiveBoost)
            {
                Debug.Log("Activate Boost!");
                _buttonBoost.interactable = false;

                _boostScript.ActivateBoost(_everyQuestionActivate);
            }
        }


    }
}
