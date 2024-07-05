using Spine.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace QuizCinema
{
    public class DownPanelAnim : MonoBehaviour
    {
        [SerializeField] private SkeletonGraphic _graphicAnimButton;
        public SkeletonGraphic GetGraphicButton => _graphicAnimButton;

        [SerializeField] private string _nameAnimDeselect;
        [SerializeField] private string _nameAnimSelect;

        [SerializeField] private bool _isSelect = false;
        public bool IsSelect => _isSelect;

        private void Start()
        {
            var animSpineArray = _graphicAnimButton.Skeleton.Data.Animations.ToArray();
            _nameAnimDeselect = animSpineArray[0].ToString();
            _nameAnimSelect = animSpineArray[1].ToString();
        }


        public void ActivateAnim(SkeletonGraphic graphic)
        {
            _isSelect = true;
            graphic.AnimationState.SetAnimation(1, _nameAnimSelect, false);
        }

        public void DisableAnim(SkeletonGraphic graphic)
        {
            _isSelect = false;
            graphic.AnimationState.SetAnimation(1, _nameAnimDeselect, false);
        }
    }
}