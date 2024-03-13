using System;
using System.Collections;
using System.Collections.Generic;
using TowerDefense;
using UnityEngine;

namespace QuizCinema
{
    public class BoostsManager : SingletonBase<BoostsManager>
    {
        public static event Action OnPressButtonBoost;

        public const string fileName = "boost.dat";

        [Serializable]
        private class BoostSave
        {
            public string boostCorrectAnswerName;
            public int countBoost = 0;
            public int costAllBost = 0;
        }
        [SerializeField] private BoostSave[] save;


       
        private new void Awake()
        {
            base.Awake();
            Saver<BoostSave[]>.TryLoad(fileName, ref save);
        }

        public static void BuyBoost(BoostSO asset)
        {
            foreach (var boost in Instance.save)
            {
                if (asset.name.ToString() == boost.boostCorrectAnswerName)
                {
                    boost.countBoost += 1;
                    boost.costAllBost = boost.countBoost * asset.cost;
                    Saver<BoostSave[]>.Save(fileName, Instance.save);
                }
            }
        }

        public static void UseBoost(BoostSO asset)
        {
            foreach (var boost in Instance.save)
            {
                if (asset.name.ToString() == boost.boostCorrectAnswerName)
                {
                    boost.countBoost -= 1;
                    boost.costAllBost = boost.countBoost * asset.cost;
                    Saver<BoostSave[]>.Save(fileName, Instance.save);

                    OnPressButtonBoost?.Invoke();
                }
            }
        }

        public static int GetCostBoost(BoostSO asset)
        {
            int result = 0;
            foreach (var boost in Instance.save)
            {
                if (asset.name.ToString() == boost.boostCorrectAnswerName)
                {
                    result += boost.countBoost * asset.cost;
                    //Saver<BoostSave[]>.Save(fileName, Instance.save);
                }
            }
            return result;
        }

        public static int GetCountBoost(BoostSO asset)
        {
            foreach (var boost in Instance.save)
            {
                if (boost.boostCorrectAnswerName == asset.name.ToString())
                {
                    return boost.countBoost;
                }
            }
            return 0;
        }
        /*
        public static int GetUpgradeLevel(UpgradeAsset asset)
        {
            foreach (var upgrade in Instance.save)
            {
                if (upgrade.asset == asset)
                {
                    Debug.Log(asset.name);
                    return upgrade.level;
                }
            }
            Debug.Log("!!!!");
            return 0;
        }

       
        */
    }
}