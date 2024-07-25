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
        [SerializeField] private bool _isSkinBooster = false;
        public bool IsSkinBooster => _isSkinBooster;
        [SerializeField] private GameObject _overlayBooster;
        [SerializeField] private bool _isAllLvlActive = false;

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
                _overlayBooster.SetActive(false);
        }

        public void BoostActivate()
		{
            if (!_isSkinBooster && !_isAllLvlActive)
            {
                Debug.Log(GetComponentInParent<RectTransform>().gameObject.GetComponentInParent<RectTransform>().gameObject);
                Destroy(GetComponentInParent<RectTransform>().gameObject);
            }

            else
            {
                Debug.Log("_overlayBooster is true");
                _overlayBooster.SetActive(true);
            }
        }

        /*
		private void OnEnable()
        {
            if (_boostScript.IsStartActiveBoost)
            {
                Debug.Log("Activate Boost!");
                _buttonBoost.interactable = false;

                _boostScript.ActivateBoost(_everyQuestionActivate);
                if (!_isSkinBooster)
                    Destroy(gameObject);
				else
				{
                    _overlayBooster.SetActive(true);
                }
            }
        }
        */
    }
}
