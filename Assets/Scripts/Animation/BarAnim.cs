using Spine.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class BarAnim : MonoBehaviour
    {
        [SerializeField] private SkeletonGraphic _bar;
        [SerializeField] private SkeletonGraphic _lock;
        [SerializeField] private int _isOpen = 0;

        private void Start()
        {
            _isOpen = PlayerPrefs.GetInt(gameObject.name);
            if (_isOpen == 1)
                BarActive();
        }

        public void BarInActive()
        {
            Debug.Log("BarInActivate");
            if (_bar.Skeleton.Data.FindSkin("locked") != null)
                _bar.Skeleton.SetSkin("locked");

            _bar.AnimationState.SetAnimation(1, "locked", false);

            if (_bar.Skeleton.Data.FindAnimation("idle") != null)
                _lock.AnimationState.SetAnimation(1, "idle", false);
        }

        public void BarActive()
        {
            Debug.Log("BarActivate");
            if (_bar.Skeleton.Data.FindSkin("unlocked") != null)
                _bar.Skeleton.SetSkin("unlocked");

            if (_bar.Skeleton.Data.FindAnimation("idle") != null)
                _bar.AnimationState.SetAnimation(1, "idle", true);
            _lock.AnimationState.SetAnimation(1, "none", false);
        }

        public void BarPress()
        {
            _bar.AnimationState.SetAnimation(1, "press", false);
        }

        public IEnumerator TestIenum()
        {
            yield return new WaitForSeconds(1f);
            BarOpen();
            Debug.Log("END TEST!");
        }

        public void BarOpen()
        {
            _isOpen = PlayerPrefs.GetInt(gameObject.name);
            
            if (_isOpen == 0)
            {
                BarActive();
                Debug.Log("BarOpen");
                _lock.AnimationState.SetAnimation(1, "unlocking", false);
                 PlayerPrefs.SetInt(gameObject.name, 1);
            }
            
        }
    }
}