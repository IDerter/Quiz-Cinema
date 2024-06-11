using AYellowpaper.SerializedCollections;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    [CreateAssetMenu]
    [System.Serializable()]
    public sealed class BoostSO : ScriptableObject
    {

        public Sprite sprite;

        public int cost;

        [SerializedDictionary("CountBoostsInOffer", "CostByOffer")]
        public SerializedDictionary<int, int> DictionaryNumberOfBoosts;
        [SerializedDictionary] public Dictionary<int, int> costBuyNumberOfBoosts;

    }
}
