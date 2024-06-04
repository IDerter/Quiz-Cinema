using Cysharp.Threading.Tasks;
using DG.Tweening;
using NaughtyAttributes;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class ClickAsyncAnim : MonoBehaviour
    {
        [SerializeField] private RectTransform _objAnim;
        private Tween objTween;

        private void Start()
        {
            _objAnim = GetComponent<RectTransform>();
        }

        [Button()]
        public async void ClickAnim()
        {
            //objTween = _objAnim.DOPunchScale(new Vector3(0.2f, 0.2f, 0.2f), 1f).SetEase(Ease.InOutElastic);
            objTween = _objAnim.DOScale(new Vector3(0.95f, 0.95f, 0.95f), 0.25f);
            await objTween.ToUniTask();

            objTween = _objAnim.DOScale(new Vector3(1f, 1f, 1f), 0.25f);
            await objTween.ToUniTask();
        }
    }
}
