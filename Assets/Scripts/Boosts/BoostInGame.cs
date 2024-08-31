using SpaceShooter;
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
        public bool IsAllLvlActive => _isAllLvlActive;
        [SerializeField] private FadeImage _fadeImage;

        private void Start()
        {
			GameManager.Instance.OnNextQuestion += OnNextQuestion;
            _fadeImage = GetComponent<FadeImage>();
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
                Transform firstParent = transform.parent;
                if (firstParent != null)
                {
                    // Получаем второго родителя
                    Debug.Log("Компонент найден 1: " + firstParent.name);
                    var myComponent = firstParent.GetComponent<RectTransform>();

                    if (myComponent != null)
                    {
                        _fadeImage.FadeStartAnim();
                        Destroy(myComponent.gameObject, LevelSequenceController.Instance.TimeAnimClick * 2);
                        Debug.Log("Компонент найден: " + myComponent.ToString());
                    }
                    else
                    {
                        Debug.Log("Компонент не найден на втором родителе.");
                    }
                }

                else
                {
                    Debug.Log("_overlayBooster is true");
                    _overlayBooster.SetActive(true);
                }
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
