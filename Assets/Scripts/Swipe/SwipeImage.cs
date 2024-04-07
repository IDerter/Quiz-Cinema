using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    [RequireComponent(typeof(Image))]
    public class SwipeImage : MonoBehaviour
    {
        [SerializeField] private UIManager _uiManager;
        [SerializeField] private Image[] _cadrs;
        [SerializeField] private Image[] _visulationCadrIndex;

        [SerializeField] private int _currentIndex = 0;

        private float _alphaTranslucent = 0.5f;
        private float _alphaNotTransparent = 1f;

        private void Awake()
        {
            AnswersMethods.Instance.OnCreateAnswers += OnCreateAnswers;

            SwipeDetection.OnSwipeInput += OnSwipeInput;
        }


        private void OnCreateAnswers(Question question)
        {

            for (int i = 0; i < _cadrs.Length; i++)
            {
                _cadrs[i] = null;
            }

            if (gameObject.activeInHierarchy)
                StartCoroutine(Wait1Second(question));

            
        }

        IEnumerator Wait1Second(Question question)
        {
            yield return new WaitForSeconds(0.01f);

            var images = GetComponentsInChildren<AnswerData>();

            for (int i = 0; i < images.Length; i++)
            {
                _cadrs[i] = images[i].GetComponent<Image>();
            }


            for (int i = 0; i < _cadrs.Length; i++)
            {
                if (_cadrs[i] != null)
                {
                    Sprite sprite = Resources.Load($"{question.Answers[i].InfoList[0]}", typeof(Sprite)) as Sprite; // картинки в 3 типе вопросов всегда подгружаем на английском

                    _cadrs[i].GetComponent<CadrsAnswers>().CurrentImage.sprite = sprite;
                   // _cadrs[i].sprite = sprite;
                    _cadrs[i].gameObject.SetActive(false);
                }
            }
            SetAlphaTranslucent();

            

            _currentIndex = 0;
            _cadrs[_currentIndex].gameObject.SetActive(true);

            SetAlphaNotTransparent();
        }

        private void OnDestroy()
        {
            SwipeDetection.OnSwipeInput -= OnSwipeInput;
            AnswersMethods.Instance.OnCreateAnswers -= OnCreateAnswers;
        }

        private void OnSwipeInput(Vector2 direction)
        {
            _cadrs[_currentIndex]?.gameObject.SetActive(false);

            SetAlphaTranslucent();

            if (direction == Vector2.left)
            {
                _currentIndex++;
                if (_currentIndex == _cadrs.Length)
                {
                    _currentIndex = 0;
                }

                SetAlphaNotTransparent();
                _cadrs[_currentIndex]?.gameObject.SetActive(true);
            }

            else if (direction == Vector2.right)
            {
                _currentIndex--;
                if (_currentIndex < 0)
                {
                    _currentIndex = _cadrs.Length - 1;
                }

                SetAlphaNotTransparent();

                _cadrs[_currentIndex]?.gameObject.SetActive(true);
            }
            
        }

        public void ShowCadr(int index)
        {
            _cadrs[_currentIndex]?.gameObject.SetActive(false);
            SetAlphaTranslucent();
            StartCoroutine(DelayShowCadr(index));
        }

        private IEnumerator DelayShowCadr(int index)
        {
            yield return new WaitForSeconds(0.1f);
            _currentIndex = index;
            SetAlphaNotTransparent();
            _cadrs[index]?.gameObject.SetActive(true);
        }

        private void SetAlphaNotTransparent()
        {
            Color alpha = _visulationCadrIndex[_currentIndex].GetComponent<Image>().color;

            alpha.a = _alphaNotTransparent;
            _visulationCadrIndex[_currentIndex].color = alpha;
        }

        private void SetAlphaTranslucent()
        {
            Color alpha = _visulationCadrIndex[_currentIndex].GetComponent<Image>().color;

            alpha.a = _alphaTranslucent;
            _visulationCadrIndex[_currentIndex].color = alpha;
        }
    }
}