using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace QuizCinema
{
    public class TextDescription : SingletonBase<TextDescription>
    {
        [SerializeField] private InventoryUIBoosts[] _inventoryUIBoosts;

        public void ActivateTextDescription(BoostUICount inventoryUIBoosts)
        {
            Debug.Log(inventoryUIBoosts.gameObject.name);

            for (int i = 0; i < _inventoryUIBoosts.Length; i++)
            {
                if (_inventoryUIBoosts[i].name == inventoryUIBoosts.name)
                {
                    _inventoryUIBoosts[i].ShowTextDesription();
                }
                else
                {
                    _inventoryUIBoosts[i].CloseTextDescription();
                }
            }
        }
    }
}