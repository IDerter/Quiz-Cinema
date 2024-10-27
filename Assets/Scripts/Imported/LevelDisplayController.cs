using QuizCinema;
using SpaceShooter;
using Spine.Unity;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace TowerDefense
{
    public enum TypeStarts
    {
        Bar,
        Lvl
    }

    public class LevelDisplayController : MonoBehaviour
    {
        [SerializeField] private MapLevel[] _levels;
        [SerializeField] private BranchLevel[] _branchLevels;

        private void Start()
        {
            var drawLevel = 0;

            var value = 1;


            while (value != 0 && drawLevel < _levels.Length)
            {
                value = _levels[drawLevel].Initialize();

                ActivateBarAndLvl(true, drawLevel);

                drawLevel += 1;
            }

            for (int i = drawLevel; i < _levels.Length; i++)
            {
                // _levels[i].gameObject.SetActive(false);
                ActivateBarAndLvl(false, i);
            }

            for (int i = 0; i < _branchLevels.Length; i++)
            {
                _branchLevels[i].TryActivate();
            }
        }
      
        public void LoadLevel(int index)
        {
            SceneManager.LoadScene(index);
        }

        private void ActivateBarAndLvl(bool activate, int index)
        {
            Debug.Log(_levels[index].name + " " + activate + " " + index);
            _levels[index].Lock = PlayerPrefs.GetInt(_levels[index].name) == 1 ? false : true;
            if (activate)
            {
                if (_levels[index].BarAnim != null && _levels[index].GetType == TypeStarts.Bar)
                {
                    _levels[index].BarAnim.IsOpen = true;
                    _levels[index].StartCoroutine(_levels[index].BarAnim.DelayBarActive());
                    Debug.Log("LevelDisController " + activate);
                }
                if (_levels[index].GetType == TypeStarts.Lvl && _levels[index].Lock)
				{
                    Debug.Log("Стол открывается с названием: " + _levels[index].name);
                    if (_levels[index].LockAnim != null)
                        _levels[index].LockAnim.AnimationState.SetAnimation(1, "unlocking", false);
                    if (_levels[index].OverlayImage.TryGetComponent(out FadeImage fadeOverlay))
                    {
                        fadeOverlay.FadeOutStartAnim();
                        fadeOverlay.GetComponent<Image>().raycastTarget = false;
                    }
                    PlayerPrefs.SetInt(_levels[index].name, 1);
                }
				else
				{
                    if (_levels[index].GetType == TypeStarts.Lvl)
					{
                        _levels[index].LockAnim?.gameObject.SetActive(false);
                        _levels[index].OverlayImage?.gameObject.SetActive(false);
                    }
				}
            }
            else
            {
                if (_levels[index].BarAnim != null && _levels[index].GetType == TypeStarts.Bar)
                {
                  //  _levels[index].BarAnim.IsOpen = false;
                  //  _levels[index].BarAnim.BarInActive();
                }

                if (_levels[index].GetType == TypeStarts.Lvl)
                {
                    _levels[index].GetLockImage?.gameObject.SetActive(true);
                    _levels[index].OverlayImage?.gameObject.SetActive(true);
                }
            }

            
         /*   if (_levels[index].LockAnim != null)
                _levels[index].LockAnim.AnimationState.SetAnimation(1, "unlocking", false);

            else _levels[index].GetLockImage?.gameObject.SetActive(!activate);

            _levels[index].OverlayImage?.gameObject.SetActive(!activate);
         */
        }


        public void SetPressAnimLock(SkeletonGraphic lockObj)
		{
            lockObj.AnimationState.SetAnimation(1, "press", false);

            AudioManager.Instance.PlaySound("Lock");
        }
    }
}