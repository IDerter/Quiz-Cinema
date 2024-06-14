using Spine.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace QuizCinema
{
    public class DownPanelAnim : SingletonBase<DownPanelAnim>
    {
        [SerializeField] private string _sceneLastAnim;
        public string GetSceneLastAnim => _sceneLastAnim;


        public void ActivateAnim(SkeletonGraphic graphic, Image _overlay)
        {
            graphic.AnimationState.SetAnimation(1, "profile_select", false);
            graphic.freeze = false;
            _overlay.gameObject.SetActive(true);

            _sceneLastAnim = SceneManager.GetActiveScene().name;
        }

        public void DisableAnim(SkeletonGraphic graphic, Image _overlay)
        {
            graphic.AnimationState.SetAnimation(1, "profile_deselect", false);
            graphic.freeze = false;
            _overlay.gameObject.SetActive(false);
        }
    }
}