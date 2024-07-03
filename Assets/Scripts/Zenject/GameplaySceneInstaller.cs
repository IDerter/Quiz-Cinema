using TowerDefense;
using Zenject;
using UnityEngine;

namespace QuizCinema
{
    public class GameplaySceneInstaller : MonoInstaller
    {
        public override void InstallBindings()
        {
            Container.Bind<MapCompletion>().AsSingle().NonLazy();
        }
    }
}