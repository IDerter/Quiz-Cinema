using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace QuizCinema
{
	public class BuySkin : BuyParent
	{
		[SerializeField] private SkinSO _asset;
		public SkinSO SkinSO { get { return _asset; } set { _asset = value; } }
		[SerializeField] private Image _upgradeIcon;
		[SerializeField] private TextMeshProUGUI _textCount;
		[SerializeField] private TextMeshProUGUI _textCost;

		[SerializeField] private GameObject _overlayButton;
		[SerializeField] private GameObject _overlayCardSkin;

		[SerializeField] private Button _buttonBuySkin;
		[SerializeField] private GameObject _viewSelect;

		private int _costSkin; // ���� ������� ���������

		private void Awake()
		{
			Initialize();
			ButtonBuy = _buttonBuySkin;
		}

		public override void Initialize()
		{
			//Debug.Log(_asset.name.ToString());
			if (_upgradeIcon != null)
				_upgradeIcon.sprite = _asset.sprite;
	
			_costSkin = _asset.cost;

			if (_textCost != null)
			{
				_textCost.text = _asset.cost.ToString();
				Debug.Log("Initiliaze" + " " + _textCost);
			}
		}

		public override void CheckCost(int money)
		{
			ButtonBuy.interactable = money >= _costSkin;

			if (_overlayButton != null && _overlayCardSkin != null)
			{
				if (ButtonBuy.interactable)
				{
					_overlayButton.SetActive(false);
					_overlayCardSkin.SetActive(false);
				}
						
				else
				{
					_overlayButton.SetActive(true);
					_overlayCardSkin.SetActive(true);
					Debug.Log("CHECKCOST " + ButtonBuy.interactable);
				}
			}
		}

		public override void Buy()
		{
			Debug.Log("BuySkin");
			SkinManager.BuySkin(_asset);
			Initialize(); // ����� ������ ��������, ����� �� ����� ����������� ��������� ������� �������� � ����
		}

		public void PutOn()
		{
			SkinManager.PutOnSkin(_asset);
			if (_viewSelect != null)
				_viewSelect.SetActive(true);
		}

		public void TakeOff()
		{
			SkinManager.TakeOffSkin(_asset);
		}
	}
}