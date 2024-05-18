using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
    public class BoostInGame : BoostUICount
    {
        [SerializeField] protected BoostParent _boostScript;
        [SerializeField] protected Button _buttonBoost;

        private void Start()
        {
            
           // if (_boostScript.IsStartActiveBoost)
           //     _boostScript.ActivateBoost();
        }

        private void OnEnable()
        {
            if (_boostScript.IsStartActiveBoost)
            {
                Debug.Log("Activate Boost!");
                _buttonBoost.interactable = false;
                _boostScript.ActivateBoost();
            }
        }
    }
}
