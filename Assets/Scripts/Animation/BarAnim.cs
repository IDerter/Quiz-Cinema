using Spine.Unity;
using System;
using System.Collections;
using System.Collections.Generic;
using TowerDefense;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class BarAnim : MonoBehaviour
    {
        [SerializeField] private SkeletonGraphic _bar;
        [SerializeField] private SkeletonGraphic _lock;
        [SerializeField] private LockAnim _lockAnim;

        [SerializeField] private bool _isOpen;
        public bool IsOpen { get { return _isOpen; } set { _isOpen = value; } }

        [SerializeField] private string _nameIdle;
        [SerializeField] private string _namePress;

        [SerializeField] private Button _buttonActivLvl;

        [SerializeField] private float _timeDelay = 1f;

        private const string _clickSFX = "ClickSFX";

        private void Start()
        {
            // ResetProgress();
            var numberBar = int.Parse(gameObject.name.Substring(gameObject.name.Length - 1));
            _isOpen = MapCompletion.Instance.GetOpensBar[numberBar - 1];
            Debug.Log(numberBar + " " + _isOpen);
            if (_isOpen)
                BarActive(numberBar);

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

        public void BarActive(int numberBar)
        {
            Debug.Log("BarActivate" + " " + gameObject.name + " BarAnimScript");
            if (numberBar != 1)
			{
                if (_bar.Skeleton.Data.FindSkin("unlocked") != null)
                    _bar.Skeleton.SetSkin("unlocked");
                Debug.Log(_bar.Skeleton.Data.FindSkin("unlocked"));
                _bar.Skeleton.SetSlotsToSetupPose();
                _bar.LateUpdate();

                _bar.Update(0);
                if (_bar.Skeleton.Data.FindAnimation(_nameIdle) != null)
                    _bar.AnimationState.SetAnimation(1, _nameIdle, true);
                _bar.Skeleton.SetSlotsToSetupPose();
                _bar.LateUpdate();

                _lock.AnimationState.SetAnimation(1, "none", false);

                _buttonActivLvl.gameObject.SetActive(true);
            }
        }

        public void BarPress()
        {
            AudioManager.Instance.PlaySound(_clickSFX);

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
            var numberBar = int.Parse(gameObject.name.Substring(gameObject.name.Length - 1));
            Debug.Log(numberBar + " baropen");
            if (!MapCompletion.Instance.GetOpensBar[numberBar - 1])
            {
                Debug.Log("Bar Open " + numberBar);
                BarActive(numberBar);
                Debug.Log("BarOpen");
                _lock.AnimationState.SetAnimation(1, "unlocking", false);
                _isOpen = MapCompletion.Instance.GetOpensBar[numberBar - 1];
                MapCompletion.Instance.GetOpensBar[numberBar - 1] = true;
                MapCompletion.SaveBarProgress();

                //if (_lockAnim != null)
                 //   _lockAnim.LockBar();
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