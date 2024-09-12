using UnityEngine;
using UnityEngine.SceneManagement;

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

                ActivateBar(true, drawLevel);

                drawLevel += 1;
            }

            for (int i = drawLevel; i < _levels.Length; i++)
            {
                // _levels[i].gameObject.SetActive(false);
                ActivateBar(false, i);
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

        private void ActivateBar(bool activate, int index)
        {
            Debug.Log(_levels[index].name + " " + activate);
            if (activate)
            {
                if (_levels[index].BarAnim != null)
                {
                    _levels[index].BarAnim.IsOpen = true;
                    _levels[index].StartCoroutine(_levels[index].BarAnim.DelayBarActive());
                    MapCompletion.SaveBarProgress();
                    Debug.Log("LevelDisController " + activate);
                }
            }
            else
            {
                if (_levels[index].BarAnim != null)
                {
                    _levels[index].BarAnim.IsOpen = false;
                    _levels[index].BarAnim.BarInActive();
                }
            }

            if (_levels[index].LockAnim != null)
                _levels[index].LockAnim.AnimationState.SetAnimation(1, "unlocking", false);

            else _levels[index].GetLockImage?.gameObject.SetActive(!activate);

            _levels[index].OverlayImage?.gameObject.SetActive(!activate);
        }

    }
}