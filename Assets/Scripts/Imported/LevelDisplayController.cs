using UnityEngine;
using UnityEngine.SceneManagement;

namespace TowerDefense
{
    public class LevelDisplayController : MonoBehaviour
    {
        [SerializeField] private MapLevel[] _levels;
        [SerializeField] private BranchLevel[] _branchLevels;

        private void Start()
        {
            var drawLevel = 0;
            var score = 1;
            while (score != 0 && drawLevel < _levels.Length)
            {
                score = _levels[drawLevel].Initialize();
                drawLevel += 1;
            }

            for (int i = drawLevel; i < _levels.Length; i++)
            {
                _levels[i].gameObject.SetActive(false);
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

    }
}