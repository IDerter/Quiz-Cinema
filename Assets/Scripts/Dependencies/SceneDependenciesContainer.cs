using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace QuizCinema
{
    public class SceneDependenciesContainer : Dependency
    {
        [SerializeField] private GameManager _gameManager;
        [SerializeField] private Score _score;
        [SerializeField] private LvlData _lvl;


        protected override void BindAll(MonoBehaviour monoBehaviourInScene)
        {
            Bind<GameManager>(_gameManager, monoBehaviourInScene);
            Bind<Score>(_score, monoBehaviourInScene);
            Bind<LvlData>(_lvl, monoBehaviourInScene);

        }



        private void Awake()
        {
            FindAllObjectToBind();
        }
    }
}