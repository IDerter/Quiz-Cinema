using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class ActiveBoostsInLvl : SingletonBase<ActiveBoostsInLvl>
    {
        [SerializeField] private BoostUICount[] _boostsActive;
        [SerializeField] private Transform[] _sceneBoosts;

        [SerializeField] private AnswersMethods _answersMethods;

        private const int _maxBoostInLvl = 3;
        public int GetMaxBoostInLvl => _maxBoostInLvl;

        private bool _isCreateBoost = false;

        private void OnEnable()
        {
            _answersMethods.OnCreateAnswers += OnCreateAnswers;
        }

        private void Start()
        {
            
        }

        private void OnCreateAnswers(Question obj)
        {
            if (_isCreateBoost == false)
            {
                var boostsList = BoostsManager.Instance.MainSaveListBoosts._listBoosts;

                for (int i = 0; i < _boostsActive.Length; i++)
                {
                    for (int j = 0; j < boostsList.Length; j++)
                    {
                        if (_boostsActive[i].GetSetBoostSO.name == boostsList[j])
                        {
                            // var test = Instantiate(_boostsActive[j], _sceneBoosts[j]);
                            var boost = Instantiate(_boostsActive[i], _sceneBoosts[j]);


                             boost.gameObject.SetActive(true);
                            // _boostsActive[i].gameObject.SetActive(true);
                        }
                    }
                }
            }
             _isCreateBoost = true;
        }

        public void LoadInventory()
        {
            // ��� �� ������� _ ����� ������ ��������� ������� BREAK � �����������
            var boostsList = BoostsManager.Instance.MainSaveListBoosts._listBoosts;

            for (int i = 0; i < _boostsActive.Length; i++)
            {
                for (int j = 0; j < _maxBoostInLvl; j++)
                {
                    if (_boostsActive[i].GetSetBoostSO.name == boostsList[j])
                    {
                        BoostInventory.Instance.ListBoosts[j] = _boostsActive[i];
                        Debug.Log(BoostInventory.Instance.ListBoosts[j].GetSetBoostSO.ToString());
                    }
                }
            }
        }

        private void OnDestroy()
        {
            _answersMethods.OnCreateAnswers -= OnCreateAnswers;
        }
    }
}