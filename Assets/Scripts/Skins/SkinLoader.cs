using AYellowpaper.SerializedCollections;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QuizCinema
{
    public class SkinLoader : SingletonBase<SkinLoader>
    {
        [SerializeField] private GameObject[][] _buttons; // index 0 - unbuy, 1 - put on, 2 - take off
        [SerializedDictionary("Name skin", "Button")]
        public SerializedDictionary<SkinSO, GameObject[]> DictionarySkinButtons;
        [SerializedDictionary] public Dictionary<SkinSO, GameObject[]> skinButtons; // index 0 - unbuy, 1 - put on, 2 - take off


		private void Start()
		{
            LoadSkinsSave();
            Debug.Log(DictionarySkinButtons.Count);
		}

		public void LoadSkinsSave()
        {
            var skinList = SkinManager.Instance.MainSave;

            for (int i = 0; i < skinList.Length; i++)
            {
                foreach (var elem in DictionarySkinButtons.Keys)
				{
                    if (skinList[i].SkinName == elem.name.ToString())
					{
                        var buttonGreen = DictionarySkinButtons[elem].GetValue(0) as GameObject;
                        var buttonPutOn = DictionarySkinButtons[elem].GetValue(1) as GameObject;
                        var buttonTakeOff = DictionarySkinButtons[elem].GetValue(2) as GameObject;

                        if (skinList[i].Buy && skinList[i].PutOn == false)
						{
                            Debug.Log(buttonPutOn.ToString() + " " + skinList[i].SkinName);

							buttonPutOn.SetActive(true);
							buttonGreen.SetActive(false);
							buttonTakeOff.SetActive(false);
						}
                        if (!skinList[i].Buy)
                        {
                            Debug.Log(buttonGreen.ToString() + " " + skinList[i].SkinName);

							buttonPutOn.SetActive(false);
							buttonGreen.SetActive(true);
							buttonTakeOff.SetActive(false);
						}
                        if (skinList[i].Buy && skinList[i].PutOn == true)
                        {
                            Debug.Log(buttonTakeOff.ToString() + " " + skinList[i].SkinName);

							buttonPutOn.SetActive(false);
							buttonGreen.SetActive(false);
							buttonTakeOff.SetActive(true);
						}
                    }
				}
             }
        }

        public void UpdateSkinSave(SkinManager.SkinSave skinSave)
        {
            foreach (var elem in DictionarySkinButtons.Keys)
            {
                if (skinSave.SkinName == elem.name.ToString())
                {
                    var buttonGreen = DictionarySkinButtons[elem].GetValue(0) as GameObject;
                    var buttonPutOn = DictionarySkinButtons[elem].GetValue(1) as GameObject;
                    var buttonTakeOff = DictionarySkinButtons[elem].GetValue(2) as GameObject;

                    if (skinSave.Buy && skinSave.PutOn == false && buttonGreen.activeSelf)
                    {
                        Debug.Log(buttonPutOn.ToString() + " " + skinSave.SkinName);
                        buttonGreen.GetComponent<ClickAsyncAnim>().ClickAnimBuy(false);

                    }
                    else if (!skinSave.Buy)
                    {
                        Debug.Log(buttonGreen.ToString() + " " + skinSave.SkinName);
                        //buttonGreen.GetComponent<ClickAsyncAnim>().ClickAnim(false);

                    }
                    else if (skinSave.Buy && skinSave.PutOn == true)
                    {
                        Debug.Log(buttonPutOn.ToString() + " " + skinSave.SkinName);
                        buttonTakeOff.GetComponent<ClickAsyncAnim>().ClickAnimBuy(true);

                    }

                    else if (skinSave.Buy && skinSave.PutOn == false && buttonGreen.activeSelf == false)
                    {
                        Debug.Log(buttonPutOn.ToString() + " " + skinSave.SkinName);
                        buttonPutOn.GetComponent<ClickAsyncAnim>().ClickAnimBuy(false);

                    }
                }
            }
            
        }
    }
}