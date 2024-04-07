using System;
using System.Collections;
using System.Collections.Generic;
using TowerDefense;
using UnityEngine;

namespace QuizCinema
{
    public class BoostInventory : SingletonBase<BoostInventory>
    {
        public event Action OnSaveListBoosts;

        [SerializeField] private BoostUICount[] _listBoosts = new BoostUICount[3];
        public BoostUICount[] ListBoosts {get { return _listBoosts; } set { _listBoosts = value; } }
        [SerializeField] private BoostUICount[] _listInventoryBoosts;

        private int _lenListBoosts = 3;

        protected override void Awake()
        {
            base.Awake();

           // _listBoosts = new BoostUICount[3];
            
        }
        private void Start()
        {
            Debug.Log("In BoostInventory LoadInventory - Start Method");
            ActiveBoostsInLvl.Instance.LoadInventory();

            for (int i = 0; i < _listBoosts.Length; i++)
            {
                if (_listBoosts[i] != null)
                {
                    _listInventoryBoosts[i].TextDesctiption.text = _listBoosts[i].TextDesctiption.text;
                    _listInventoryBoosts[i].GetSetBoostSO = _listBoosts[i].GetSetBoostSO;
                }
            }
        }

        public void FillList(BoostUICount inventoryBoost)
        {
            for (int i = 0; i < _listBoosts.Length; i++)
            {
                if (_listBoosts[i] == null && BoostsManager.GetCountBoost(inventoryBoost.GetSetBoostSO) > 0)
                {
                    _listBoosts[i] = inventoryBoost;

                    BoostsManager.Instance.MainSaveListBoosts._listBoosts[i] = inventoryBoost.GetSetBoostSO.name.ToString();
                    BoostsManager.Instance.SaveListBoosts._listBoosts[i] = inventoryBoost.GetSetBoostSO.name.ToString(); ;
                    //_saveBoosts._listBoosts[i] = inventoryBoost.GetSetBoostSO.name.ToString();
                    _listInventoryBoosts[i].TextDesctiption.text = inventoryBoost.TextDesctiption.text;
                    _listInventoryBoosts[i].GetSetBoostSO = _listBoosts[i].GetSetBoostSO;
                    BoostsManager.TakeFromInventory(_listInventoryBoosts[i].GetSetBoostSO, _listBoosts);
                    OnSaveListBoosts?.Invoke();
                    break;
                }
            }
        }

        public void ResetListSlot(BoostUICount inventoryBoost)
        {

            for (int i = 0; i < _listInventoryBoosts.Length; i++)
            {
                if (_listInventoryBoosts[i] == inventoryBoost && _listBoosts[i] != null)
                {
                    _listBoosts[i] = null;
                    _listInventoryBoosts[i].TextDesctiption.text = "?";
                    BoostsManager.ReturnFromInventory(_listInventoryBoosts[i].GetSetBoostSO, _listBoosts);

                    BoostsManager.Instance.MainSaveListBoosts._listBoosts[i] = null;
                    BoostsManager.Instance.SaveListBoosts._listBoosts[i] = null;

                    OnSaveListBoosts?.Invoke();
                    break;
                }
            }
        }
    }
}