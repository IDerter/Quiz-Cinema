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
        [SerializeField] private LockAnim _lockAnim;

        [SerializeField] private int _isOpen = 0;
        public int IsOpen { get { return _isOpen; } set { _isOpen = value; } }

        [SerializeField] private string _nameIdle;
        [SerializeField] private string _namePress;

        [SerializeField] private Button _buttonActivLvl;

        [SerializeField] private float _timeDelay = 1f;

        private void Start()
        {
            // ResetProgress();
            _isOpen = PlayerPrefs.GetInt(gameObject.name);
            if (_isOpen == 1)
                BarActive();

            var animSpineArray = _bar.Skeleton.Data.Animations.ToArray();
            foreach (var anim in animSpineArray)
			{
                if (anim.ToString().Contains("idle"))
				{
                    _nameIdle = anim.ToString();
				}
                if (anim.ToString().Contains("press"))
                {
                    _namePress = anim.ToString();
                }
            }
        }

        public void BarInActive()
        {
            Debug.Log("BarInActivate" + " " + gameObject.name);
            if (_bar.Skeleton.Data.FindSkin("locked") != null)
                _bar.Skeleton.SetSkin("locked");

            _bar.AnimationState.SetAnimation(1, "locked", false);

            if (_bar.Skeleton.Data.FindAnimation(_nameIdle) != null)
                _lock.AnimationState.SetAnimation(1, _nameIdle, false);

            _buttonActivLvl.gameObject.SetActive(false);
        }

        public void BarActive()
        {
            Debug.Log("BarActivate" + " " + gameObject.name);
            if (_bar.Skeleton.Data.FindSkin("unlocked") != null)
                _bar.Skeleton.SetSkin("unlocked");

            if (_bar.Skeleton.Data.FindAnimation(_nameIdle) != null)
                _bar.AnimationState.SetAnimation(1, _nameIdle, true);
            _lock.AnimationState.SetAnimation(1, "none", false);

            _buttonActivLvl.gameObject.SetActive(true);
        }

        public void BarPress()
        {
            _bar.AnimationState.SetAnimation(1, _namePress, false);
            Debug.Log("Bar Press!");
        }

        public IEnumerator DelayBarActive()
        {
            yield return new WaitForSeconds(_timeDelay);
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
                _isOpen = PlayerPrefs.GetInt(gameObject.name);

                if (_lockAnim != null)
                    _lockAnim.LockBar();
            }
			else
			{
                _bar.AnimationState.SetAnimation(1, _nameIdle, true);
            }
        }

        public void ResetProgress()
        {
            PlayerPrefs.SetInt(gameObject.name, 0);
        }
    }
}