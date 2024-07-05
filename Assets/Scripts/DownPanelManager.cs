using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace QuizCinema
{
    public class DownPanelManager : MonoBehaviour
    {
        [SerializeField] private Button _buttonProfile;
        [SerializeField] private Button _buttonMap;
        [SerializeField] private Button _buttonShop;
        [SerializeField] private Button _buttonBattle;

        [SerializeField] private DownPanelAnim _currentAnimButton;
        private const string _levelMap = "LevelMap";

        private void Start()
        {
            _buttonProfile.onClick.AddListener(() => AnimButton(_buttonProfile.GetComponent<DownPanelAnim>()));
            _buttonMap.onClick.AddListener(() => AnimButton(_buttonMap.GetComponent<DownPanelAnim>()));
            _buttonShop.onClick.AddListener(() => AnimButton(_buttonShop.GetComponent<DownPanelAnim>()));

            if (SceneManager.GetActiveScene().name == _levelMap)
                AnimButton(_buttonMap.GetComponent<DownPanelAnim>());
            //_buttonBattle.onClick.AddListener(() => MoveAndScaleButton(_buttonBoosters));
        }

        public void AnimButton(DownPanelAnim button)
        {
            if (!button.IsSelect)
            {
                DisableAnim();

                button.ActivateAnim(button.GetGraphicButton);
                _currentAnimButton = button;
            }
        }

        public void DisableAnim()
        {
            if (_currentAnimButton != null)
                _currentAnimButton.DisableAnim(_currentAnimButton.GetGraphicButton);
        }
    }
}