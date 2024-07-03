using TowerDefense;
using UnityEngine;
using Zenject;

namespace QuizCinema
{

    public class GlobalInstaller : MonoInstaller
    {
        [SerializeField] private MapCompletion _mapCompletion;
        public override void InstallBindings()
        {
            MapCompletion mapCompletion = Container.InstantiatePrefabForComponent<MapCompletion>(_mapCompletion);

            Container.Bind<MapCompletion>().AsSingle().NonLazy();
        }
    }
}