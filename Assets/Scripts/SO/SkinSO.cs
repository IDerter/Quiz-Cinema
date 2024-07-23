using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    [CreateAssetMenu]
    public sealed class SkinSO : BuySO
    {
        [SerializeField] private BoostSO _boost;
        public string GetBoostName => _boost.name;
    }
}