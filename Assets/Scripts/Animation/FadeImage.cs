using DG.Tweening;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using SpaceShooter;

namespace QuizCinema
{
    public class FadeImage : MonoBehaviour
    {
        [SerializeField] private Image _targetImage; // Ссылка на Image компонент, который нужно анимировать

		private void Start()
		{
            _targetImage = GetComponent<Image>();
		}

		public async void FadeStartAnim()
		{
            await FadeOutAsync();
        }

        private async UniTask FadeOutAsync()
        {
            if (_targetImage == null)
            {
                Debug.LogError("Target Image is not assigned.");
                return;
            }

            // Использование DoTween для анимации альфа-канала изображения
            await _targetImage.DOFade(0f, LevelSequenceController.Instance.TimeAnimClick).SetEase(Ease.Linear).ToUniTask();

        }
    }
}