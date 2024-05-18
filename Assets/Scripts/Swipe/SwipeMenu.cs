using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class SwipeMenu : SingletonBase<SwipeMenu>
    {
        [SerializeField] private GameObject _scrollBar;
        [SerializeField] private SwipeDetection swipeDetection;
        [SerializeField] private float _scrollPos = 0;
        [SerializeField] private float[] _pos;
        [SerializeField] private float _distance;
        [SerializeField] private float _minDistance;
        [SerializeField] private int _currentPosIndex = 0;
        [SerializeField] private int _nearestPosIndex = 0;

        private void OnEnable()
        {
            SwipeDetection.OnSwipeInput += OnSwipeInput;
            AnswersMethods.Instance.OnCreateAnswers += OnCreateAnswers;
        }

        private void OnCreateAnswers(Question obj)
        {
            Debug.Log("SWIPE MENU CREATE ANSWERS");

            _pos = new float[obj.Answers.Length];
            _distance = 1f / (_pos.Length - 1f);
            for (int i = 0; i < _pos.Length; i++)
            {
                _pos[i] = _distance * i;
            }
        }

        private void OnDisable()
        {
            SwipeDetection.OnSwipeInput -= OnSwipeInput;
            AnswersMethods.Instance.OnCreateAnswers -= OnCreateAnswers;
        }

        public void ResetAllSwipeArguments()
        {
            _scrollPos = 0f;
            _currentPosIndex = 0;
            _nearestPosIndex = 0;
        }

        public void SetNearestPoint(int index)
        {
            if (index >= 0 && index < _pos.Length)
            {
                _nearestPosIndex = index;
            }
        }

        private void OnSwipeInput(Vector2 direction)
        {

            Debug.Log("ON SWIPE INPUT!");
            if ((direction == Vector2.left && _currentPosIndex == (_pos.Length - 1)))
            {
                _nearestPosIndex = _currentPosIndex;
            }
            else if ((direction == Vector2.right && _currentPosIndex == 0))
            {
                _nearestPosIndex = _currentPosIndex;
            }
            else
            {
                _nearestPosIndex = NearestPoint();
                Debug.Log(_nearestPosIndex + "NEAREST POINT!");
            }
        }

        //TODO//
        private int NearestPoint()
        {
            _minDistance = 100f;
           
            var minIndex = 0;

            for (int i = 0; i < _pos.Length; i++)
            {
                if (Mathf.Abs(_pos[i] - _scrollPos) <= _minDistance && _currentPosIndex != i)
                {
                   
                    _minDistance = Mathf.Abs(_pos[i] - _scrollPos);
                    minIndex = i;
                    Debug.Log(_pos[i] + " " + _scrollPos + " " + _minDistance + " " + _currentPosIndex + " " + i);
                }
            }

            return minIndex;
        }

        private void Update()
        {
            _scrollPos = _scrollBar.GetComponent<Scrollbar>().value;



            if (Input.GetMouseButton(0))
            {
                _scrollPos = _scrollBar.GetComponent<Scrollbar>().value;    
            }
            else
            {
                for (int i = 0; i <_pos.Length; i++)
                {
                    if ((_scrollPos < _pos[i] + (_distance / 2f) && _scrollPos > _pos[i] - (_distance / 2f)) || (_currentPosIndex != _nearestPosIndex))
                    {
                        _currentPosIndex = i;
                        _scrollBar.GetComponent<Scrollbar>().value = Mathf.Lerp(_scrollBar.GetComponent<Scrollbar>().value, _pos[_nearestPosIndex], 0.5f);
                    }
                }
            }

           /* for (int i = 0; i < _pos.Length; i++)
            {
                if (_scrollPos < _pos[i] + (distance / 2) && _scrollPos > _pos[i] - (distance / 2))
                {
                    transform.GetChild(i).localScale = Vector2.Lerp(transform.GetChild(i).localScale, new Vector2(1f, 1f), 0.1f);
                    for (int a = 0; a < _pos.Length; a++)
                    {
                        if (a != i)
                        {
                            transform.GetChild(a).localScale = Vector2.Lerp(transform.GetChild(a).localScale, new Vector2(1f, 1f), 0.1f);
                        }
                    }
                }
           */
        }
           
    }
}
