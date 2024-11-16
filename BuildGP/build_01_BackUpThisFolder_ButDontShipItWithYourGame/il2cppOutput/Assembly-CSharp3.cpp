#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.List`1<QuizCinema.AnswerData>>
struct Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268;
// System.Action`1<QuizCinema.AnswerData>
struct Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<QuizCinema.Question>
struct Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<QuizCinema.UIManager/ResolutionScreenType,System.Int32>
struct Action_2_t9BA866C0F264FE2FF51E23780DF8885675C195B2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<QuizCinema.Answer>
struct List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F;
// System.Collections.Generic.List`1<QuizCinema.AnswerData>
struct List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// QuizCinema.Answer[]
struct AnswerU5BU5D_t0C8C1D0CA70C782125A0B4A2206C71BBAECE1D99;
// QuizCinema.AnswerData[]
struct AnswerDataU5BU5D_t121B3EFA7B1196881F036E40C32FE55908854C76;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// QuizCinema.Language[]
struct LanguageU5BU5D_t0E3F4A20DF4F268099B5D5161116026FFF0351CD;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// QuizCinema.Sound[]
struct SoundU5BU5D_t6423556FA625EB699D99918163300A00340D0D36;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TowerDefense.MapCompletion/EpisodeScore[]
struct EpisodeScoreU5BU5D_t271CF01E603B7434AD3B5ADA276FC07E975321D0;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// QuizCinema.Answer
struct Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E;
// QuizCinema.AnswerData
struct AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4;
// QuizCinema.AnswersMethods
struct AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D;
// QuizCinema.AudioManager
struct AudioManager_tABAC9F89292153357C0838100E0C00253A6EF2DA;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// QuizCinema.Data
struct Data_t5F2FAD069732FCAFA1295C0A75FA69DE9B4FF9BB;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// SpaceShooter.Episode
struct Episode_t2D3242F029A4D77D474BA43585EAE775E27FCAFF;
// System.Exception
struct Exception_t;
// QuizCinema.GameManager
struct GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// QuizCinema.LanguageChanger
struct LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// QuizCinema.LikeFilm
struct LikeFilm_t02C441C402349758BF3C9730C5EC9BAFA9F12A67;
// TowerDefense.MapCompletion
struct MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// QuizCinema.Question
struct Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3;
// QuizCinema.QuestionMethods
struct QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// QuizCinema.Score
struct Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// QuizCinema.SettingUIManager
struct SettingUIManager_t14697A83D93A23EC6857D464D4B8B264C720A868;
// Spine.Unity.SkeletonGraphic
struct SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1;
// QuizCinema.SpineStarsAnim
struct SpineStarsAnim_tECBD3F5EF852872504A891CEED8E630C86633E5D;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// QuizCinema.TimerInLvl
struct TimerInLvl_t0FFC44524B89D16B1FB9064B62F4F90EEE3F5176;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// QuizCinema.TranslateInfo
struct TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9;
// System.Type
struct Type_t;
// QuizCinema.UIManager
struct UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA;
// QuizCinema.UIResultBetweenQuestion
struct UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D;
// QuizCinema.UIStars
struct UIStars_t9D1A13951C5DDF7A9381259E36774A9B0C9939DE;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// QuizCinema.UIManager/<DisplayTimedResolution>d__38
struct U3CDisplayTimedResolutionU3Ed__38_tE765CB4B31B82406DCDF1656E9821BF75F33A22A;
// QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44
struct U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F45B89D4953702A98AE564906BB6F8C450C6ACF;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5AD4234F172BD410B6C2EF2AE60DF3B2E465CE;
IL2CPP_EXTERN_C String_t* _stringLiteral0FB1D7377700D40DCD65F08A70189B08A606C254;
IL2CPP_EXTERN_C String_t* _stringLiteral15D10C2F899620EC2CC14ACFCE5DE170590B3A72;
IL2CPP_EXTERN_C String_t* _stringLiteral162C9CB85A0E3D0611ACB5AD685F7AF02FD4C0DA;
IL2CPP_EXTERN_C String_t* _stringLiteral1DD5A5BB9F3692289956341ECACEDF66D82419F1;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral24EEDA3DF4AEEE5A4BA37752F41006225C338D45;
IL2CPP_EXTERN_C String_t* _stringLiteral4D877F6CAD0AB5C43E083360FE09F5E7A757BFE3;
IL2CPP_EXTERN_C String_t* _stringLiteral5871CEA4D20E8EEAE5F90720C75A6AC68A312523;
IL2CPP_EXTERN_C String_t* _stringLiteral74C039E1F2A42CE578A8A5F72A7058047403F9EF;
IL2CPP_EXTERN_C String_t* _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAE757BFF64271DF1B8E95317FFC805BA1FF3FA;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECA28F3A5CE0A36D92DBE09A93274061EE7ECC5;
IL2CPP_EXTERN_C String_t* _stringLiteralA0B369294598689122735B6050A7AF7B142B3981;
IL2CPP_EXTERN_C String_t* _stringLiteralCC71793E357F226512B24047321A4DD21F6DE08B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDE1ABC7573AF0214C607A7BD10EEB830759E126;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9;
IL2CPP_EXTERN_C String_t* _stringLiteralFDF9F4EBDDE526E60346AB3D0E3CB099CF034703;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16_m9F105238E53B15FD9F969E6B88359948E3083736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571_m985440DA71E33A3F3281634D7E066CEE731E0368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE343BE3FD1C8B5C0391459912049869035D1CE91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBF4C2071D961560A1F0EF55E53D26B98CBEA4F12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1F6A209EC1BBB5FD53A5D3C64870ED72DBFA9884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7B94243ADA7B76CBE0F3AEA4B027DCABD865A90D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5478ACF7733D98CB1118FF71563B0EE2528B089E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3F8DF07760CFCAE8BFC782AB64A814D658C55490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAAB21604FC33D94DD8BA80DBB7B9A0FD7357B913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEBD7BB34FA77E6EB728C8AF72CCA45B1AD507E61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonBase_1_get_Instance_m088CB96CF5F16CE120336DF7B5DAD939A63D8C5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonBase_1_get_Instance_mC6F46636F67A8B91A92901EC1BE4F9CE08FC8538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayTimedResolutionU3Ed__38_System_Collections_IEnumerator_Reset_m3C5DCB6ACA5778A028572F7565F89FDE1ECA62A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetCorrectQuestionTextU3Ed__44_System_Collections_IEnumerator_Reset_m0D4277EBB938EC29FF13E4DE2806F7636C51F4D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIResultBetweenQuestion_OnChangeLanguage_m3D05D964323177EF93AACB1675109AE7D0582C1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIResultBetweenQuestion_OnCreateAnswers_m3EF8E1C7BC82A934321B8CC4E0F0D70ED4FEB0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIResultBetweenQuestion_UpdateCurrentAnswerList_m965B8BD0EBB83D4B30B1FE2F9B96008104DD1EEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIResultBetweenQuestion_UpdateQuestionAnswer_m5697A89207D071C8F825EC75A2283C6A706434B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIStars_OnShowStars_m0C406C85C821DEBC0ECF9803F1D8A32E8A88CB7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnswerU5BU5D_t0C8C1D0CA70C782125A0B4A2206C71BBAECE1D99;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<QuizCinema.Answer>
struct List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AnswerU5BU5D_t0C8C1D0CA70C782125A0B4A2206C71BBAECE1D99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AnswerU5BU5D_t0C8C1D0CA70C782125A0B4A2206C71BBAECE1D99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QuizCinema.AnswerData>
struct List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AnswerDataU5BU5D_t121B3EFA7B1196881F036E40C32FE55908854C76* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AnswerDataU5BU5D_t121B3EFA7B1196881F036E40C32FE55908854C76* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// QuizCinema.Answer
struct Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> QuizCinema.Answer::InfoList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___InfoList_0;
	// System.String QuizCinema.Answer::Info
	String_t* ___Info_1;
	// System.String QuizCinema.Answer::TranslateInfo
	String_t* ___TranslateInfo_2;
	// System.Boolean QuizCinema.Answer::IsCorrect
	bool ___IsCorrect_3;
};
struct Il2CppArrayBounds;

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};

struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// QuizCinema.Question
struct Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3  : public RuntimeObject
{
	// System.Int32 QuizCinema.Question::IndexPrefab
	int32_t ___IndexPrefab_0;
	// QuizCinema.AnswerType QuizCinema.Question::_answerType
	int32_t ____answerType_1;
	// System.Collections.Generic.List`1<System.String> QuizCinema.Question::ListInfoQuestion
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ListInfoQuestion_2;
	// System.String QuizCinema.Question::Info
	String_t* ___Info_3;
	// System.Collections.Generic.List`1<System.String> QuizCinema.Question::ListNoteFilm
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ListNoteFilm_4;
	// System.String QuizCinema.Question::NoteFilm
	String_t* ___NoteFilm_5;
	// System.Collections.Generic.List`1<System.String> QuizCinema.Question::ListDescriptionFilm
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ListDescriptionFilm_6;
	// System.String QuizCinema.Question::Director
	String_t* ___Director_7;
	// System.String QuizCinema.Question::Poster
	String_t* ___Poster_8;
	// System.String QuizCinema.Question::_cadrCinemaName
	String_t* ____cadrCinemaName_9;
	// System.String QuizCinema.Question::_cadrCinemaNameTranslateRu
	String_t* ____cadrCinemaNameTranslateRu_10;
	// QuizCinema.Answer[] QuizCinema.Question::Answers
	AnswerU5BU5D_t0C8C1D0CA70C782125A0B4A2206C71BBAECE1D99* ___Answers_11;
	// System.Boolean QuizCinema.Question::UseTimer
	bool ___UseTimer_12;
	// System.Int32 QuizCinema.Question::Timer
	int32_t ___Timer_13;
	// System.Int32 QuizCinema.Question::AddScore
	int32_t ___AddScore_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// QuizCinema.UIManager/<DisplayTimedResolution>d__38
struct U3CDisplayTimedResolutionU3Ed__38_tE765CB4B31B82406DCDF1656E9821BF75F33A22A  : public RuntimeObject
{
	// System.Int32 QuizCinema.UIManager/<DisplayTimedResolution>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuizCinema.UIManager/<DisplayTimedResolution>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QuizCinema.UIManager QuizCinema.UIManager/<DisplayTimedResolution>d__38::<>4__this
	UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* ___U3CU3E4__this_2;
};

// QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44
struct U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC  : public RuntimeObject
{
	// System.Int32 QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QuizCinema.UIResultBetweenQuestion QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::<>4__this
	UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* ___U3CU3E4__this_2;
	// QuizCinema.Question QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::question
	Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ___question_3;
};

// System.Collections.Generic.List`1/Enumerator<QuizCinema.AnswerData>
struct Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// QuizCinema.UIElements
struct UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110 
{
	// UnityEngine.RectTransform[] QuizCinema.UIElements::_answersHolder
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ____answersHolder_0;
	// TMPro.TextMeshProUGUI[] QuizCinema.UIElements::_questionInfoTextObject
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____questionInfoTextObject_1;
	// TMPro.TextMeshProUGUI[] QuizCinema.UIElements::_countCorrectAnswer
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____countCorrectAnswer_2;
	// TMPro.TextMeshProUGUI QuizCinema.UIElements::_numberCurrentQuestion
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____numberCurrentQuestion_3;
	// UnityEngine.UI.Image[] QuizCinema.UIElements::_cadrCinema
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ____cadrCinema_4;
	// UnityEngine.Animator QuizCinema.UIElements::_resolutionScreenAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____resolutionScreenAnimator_5;
	// TMPro.TextMeshProUGUI[] QuizCinema.UIElements::_scoreFinalLvl
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____scoreFinalLvl_6;
	// TMPro.TextMeshProUGUI[] QuizCinema.UIElements::_maxScoreFinalLvl
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____maxScoreFinalLvl_7;
	// TMPro.TextMeshProUGUI QuizCinema.UIElements::_countCurrentScore
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____countCurrentScore_8;
	// UnityEngine.RectTransform QuizCinema.UIElements::_finishUIElements
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____finishUIElements_9;
	// UnityEngine.GameObject QuizCinema.UIElements::_buttonFinishNextLvl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____buttonFinishNextLvl_10;
	// UnityEngine.GameObject QuizCinema.UIElements::_buttonFinishReloadLvl
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____buttonFinishReloadLvl_11;
};
// Native definition for P/Invoke marshalling of QuizCinema.UIElements
struct UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110_marshaled_pinvoke
{
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ____answersHolder_0;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____questionInfoTextObject_1;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____countCorrectAnswer_2;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____numberCurrentQuestion_3;
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ____cadrCinema_4;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____resolutionScreenAnimator_5;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____scoreFinalLvl_6;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____maxScoreFinalLvl_7;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____countCurrentScore_8;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____finishUIElements_9;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____buttonFinishNextLvl_10;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____buttonFinishReloadLvl_11;
};
// Native definition for COM marshalling of QuizCinema.UIElements
struct UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110_marshaled_com
{
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ____answersHolder_0;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____questionInfoTextObject_1;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____countCorrectAnswer_2;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____numberCurrentQuestion_3;
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ____cadrCinema_4;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____resolutionScreenAnimator_5;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____scoreFinalLvl_6;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____maxScoreFinalLvl_7;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____countCurrentScore_8;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____finishUIElements_9;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____buttonFinishNextLvl_10;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____buttonFinishReloadLvl_11;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// QuizCinema.UIManagerParameters
struct UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68 
{
	// UnityEngine.Color QuizCinema.UIManagerParameters::_correctBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____correctBackgroundColor_0;
	// UnityEngine.Color QuizCinema.UIManagerParameters::_inCorrectBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____inCorrectBackgroundColor_1;
	// UnityEngine.Color QuizCinema.UIManagerParameters::_finalBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____finalBackgroundColor_2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// QuizCinema.UIManager/<CalculateScore>d__42
struct U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16 
{
	// System.Int32 QuizCinema.UIManager/<CalculateScore>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder QuizCinema.UIManager/<CalculateScore>d__42::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// QuizCinema.UIManager QuizCinema.UIManager/<CalculateScore>d__42::<>4__this
	UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* ___U3CU3E4__this_2;
	// System.Int32 QuizCinema.UIManager/<CalculateScore>d__42::levelCountsStars
	int32_t ___levelCountsStars_3;
	// System.Int32 QuizCinema.UIManager/<CalculateScore>d__42::<scoreValue>5__2
	int32_t ___U3CscoreValueU3E5__2_4;
	// System.Boolean QuizCinema.UIManager/<CalculateScore>d__42::<scoreMoreThanZero>5__3
	bool ___U3CscoreMoreThanZeroU3E5__3_5;
	// System.Boolean QuizCinema.UIManager/<CalculateScore>d__42::<maxScoreMoreThanZero>5__4
	bool ___U3CmaxScoreMoreThanZeroU3E5__4_6;
	// Cysharp.Threading.Tasks.UniTask/Awaiter QuizCinema.UIManager/<CalculateScore>d__42::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_7;
};

// QuizCinema.UIManager/<StartCalculateScore>d__41
struct U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571 
{
	// System.Int32 QuizCinema.UIManager/<StartCalculateScore>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder QuizCinema.UIManager/<StartCalculateScore>d__41::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// QuizCinema.UIManager QuizCinema.UIManager/<StartCalculateScore>d__41::<>4__this
	UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* ___U3CU3E4__this_2;
	// System.Int32 QuizCinema.UIManager/<StartCalculateScore>d__41::levelCountsStars
	int32_t ___levelCountsStars_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter QuizCinema.UIManager/<StartCalculateScore>d__41::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};

// System.Action`1<System.Collections.Generic.List`1<QuizCinema.AnswerData>>
struct Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268  : public MulticastDelegate_t
{
};

// System.Action`1<QuizCinema.AnswerData>
struct Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<QuizCinema.Question>
struct Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// SingletonBase`1<QuizCinema.AnswersMethods>
struct SingletonBase_1_tC9627D006718094E8770E4F06C44A73DCE7E34AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_tC9627D006718094E8770E4F06C44A73DCE7E34AF_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<QuizCinema.AudioManager>
struct SingletonBase_1_tB9FE23F7BC3102EE23B2F32FC536E16A1997166B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_tB9FE23F7BC3102EE23B2F32FC536E16A1997166B_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	AudioManager_tABAC9F89292153357C0838100E0C00253A6EF2DA* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<QuizCinema.GameManager>
struct SingletonBase_1_t3DA577FBB83CEE051BFA0F0E723D1BCA8185628B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_t3DA577FBB83CEE051BFA0F0E723D1BCA8185628B_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<QuizCinema.LanguageChanger>
struct SingletonBase_1_t2A1575874FFA9845E770238D62F820FD7A5F8634  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_t2A1575874FFA9845E770238D62F820FD7A5F8634_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<TowerDefense.MapCompletion>
struct SingletonBase_1_tE07568C36CF111C5917ECC442F2A578D76A502CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_tE07568C36CF111C5917ECC442F2A578D76A502CA_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<System.Object>
struct SingletonBase_1_tBF2BB2ECB4795CB5201820714AFF871DD855FCE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_tBF2BB2ECB4795CB5201820714AFF871DD855FCE3_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<QuizCinema.QuestionMethods>
struct SingletonBase_1_t0CCD534E6D011C4BCF6273BB6721EC88BEAFC9A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_t0CCD534E6D011C4BCF6273BB6721EC88BEAFC9A3_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<QuizCinema.Score>
struct SingletonBase_1_tBE08BB7FA2A688BD40E1CC20879636C9B281E3D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_tBE08BB7FA2A688BD40E1CC20879636C9B281E3D8_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<QuizCinema.TranslateInfo>
struct SingletonBase_1_tFD1CEE767248F82FD84E0D4B1B5873E0CC840166  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_tFD1CEE767248F82FD84E0D4B1B5873E0CC840166_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* ___U3CInstanceU3Ek__BackingField_5;
};

// SingletonBase`1<QuizCinema.UIManager>
struct SingletonBase_1_tA9134DFE895DEC2E69E62F8AE1BE23D1BC0B16FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SingletonBase`1::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
};

struct SingletonBase_1_tA9134DFE895DEC2E69E62F8AE1BE23D1BC0B16FC_StaticFields
{
	// T SingletonBase`1::<Instance>k__BackingField
	UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* ___U3CInstanceU3Ek__BackingField_5;
};

// QuizCinema.AnswerData
struct AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI QuizCinema.AnswerData::_infoText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____infoText_5;
	// UnityEngine.GameObject QuizCinema.AnswerData::_correctAnswer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____correctAnswer_6;
	// UnityEngine.GameObject QuizCinema.AnswerData::_inCorrectAnswer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____inCorrectAnswer_7;
	// UnityEngine.UI.Image QuizCinema.AnswerData::_currentImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____currentImage_8;
	// UnityEngine.RectTransform QuizCinema.AnswerData::_rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____rect_9;
	// System.Int32 QuizCinema.AnswerData::_answerIndex
	int32_t ____answerIndex_10;
	// System.Boolean QuizCinema.AnswerData::_checked
	bool ____checked_11;
	// QuizCinema.Question QuizCinema.AnswerData::_currentQuestion
	Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ____currentQuestion_12;
	// System.Collections.Generic.List`1<System.Int32> QuizCinema.AnswerData::_correctAnswersIndex
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____correctAnswersIndex_13;
};

struct AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4_StaticFields
{
	// System.Action`1<QuizCinema.AnswerData> QuizCinema.AnswerData::UpdateQuestionAnswer
	Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF* ___UpdateQuestionAnswer_4;
};

// QuizCinema.SpineStarsAnim
struct SpineStarsAnim_tECBD3F5EF852872504A891CEED8E630C86633E5D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Spine.Unity.SkeletonGraphic QuizCinema.SpineStarsAnim::_skeletonStars
	SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* ____skeletonStars_4;
	// Spine.Unity.SkeletonGraphic QuizCinema.SpineStarsAnim::_skeletonRays
	SkeletonGraphic_t16853919DC5368237A1FFFE440DFB70ABAFA2AF1* ____skeletonRays_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// QuizCinema.UIResultBetweenQuestion
struct UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QuizCinema.TranslateInfo QuizCinema.UIResultBetweenQuestion::_translate
	TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* ____translate_4;
	// QuizCinema.GameManager QuizCinema.UIResultBetweenQuestion::_gameManager
	GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* ____gameManager_5;
	// TMPro.TextMeshProUGUI[] QuizCinema.UIResultBetweenQuestion::_textQuestionNumberResult
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____textQuestionNumberResult_6;
	// TMPro.TextMeshProUGUI QuizCinema.UIResultBetweenQuestion::_textQuestionNumberInLvl
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____textQuestionNumberInLvl_7;
	// UnityEngine.Sprite QuizCinema.UIResultBetweenQuestion::_correctBg
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____correctBg_8;
	// UnityEngine.Sprite QuizCinema.UIResultBetweenQuestion::_inCorrectBg
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____inCorrectBg_9;
	// UnityEngine.Sprite QuizCinema.UIResultBetweenQuestion::_almostCorrectBg
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____almostCorrectBg_10;
	// UnityEngine.UI.Image QuizCinema.UIResultBetweenQuestion::_bgResultPanel
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____bgResultPanel_11;
	// UnityEngine.GameObject QuizCinema.UIResultBetweenQuestion::_textContainerCorrect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____textContainerCorrect_12;
	// UnityEngine.GameObject QuizCinema.UIResultBetweenQuestion::_textContainerInCorrect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____textContainerInCorrect_13;
	// UnityEngine.UI.Button[] QuizCinema.UIResultBetweenQuestion::_buttonCorrectNext
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ____buttonCorrectNext_14;
	// TMPro.TextMeshProUGUI QuizCinema.UIResultBetweenQuestion::_correctAnswer1TextInfo
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____correctAnswer1TextInfo_15;
	// TMPro.TextMeshProUGUI QuizCinema.UIResultBetweenQuestion::_inCorrectAnswer1TextInfo
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____inCorrectAnswer1TextInfo_16;
	// TMPro.TextMeshProUGUI QuizCinema.UIResultBetweenQuestion::_textCinemaName
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____textCinemaName_17;
	// TMPro.TextMeshProUGUI QuizCinema.UIResultBetweenQuestion::_textCinemaInfo
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____textCinemaInfo_18;
	// UnityEngine.UI.Image QuizCinema.UIResultBetweenQuestion::_directorImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____directorImage_19;
	// System.String QuizCinema.UIResultBetweenQuestion::_directorName
	String_t* ____directorName_20;
	// QuizCinema.Question QuizCinema.UIResultBetweenQuestion::_currentQuestion
	Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ____currentQuestion_21;
	// QuizCinema.LikeFilm QuizCinema.UIResultBetweenQuestion::_like
	LikeFilm_t02C441C402349758BF3C9730C5EC9BAFA9F12A67* ____like_22;
	// System.Collections.Generic.List`1<QuizCinema.AnswerData> QuizCinema.UIResultBetweenQuestion::_listAnswersPicked
	List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* ____listAnswersPicked_23;
	// System.Collections.Generic.List`1<QuizCinema.Answer> QuizCinema.UIResultBetweenQuestion::_listAnswersCorrect
	List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* ____listAnswersCorrect_24;
	// System.Collections.Generic.List`1<QuizCinema.Answer> QuizCinema.UIResultBetweenQuestion::_listAnswersInCorrect
	List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* ____listAnswersInCorrect_25;
	// System.Collections.Generic.List`1<System.Int32> QuizCinema.UIResultBetweenQuestion::_correctAnswersIndex
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____correctAnswersIndex_26;
	// System.Int32 QuizCinema.UIResultBetweenQuestion::_correctIndex
	int32_t ____correctIndex_27;
	// QuizCinema.AnswerData QuizCinema.UIResultBetweenQuestion::_correctAnswerSingle
	AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* ____correctAnswerSingle_28;
	// QuizCinema.AnswerData QuizCinema.UIResultBetweenQuestion::_currentAnswerSingle
	AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* ____currentAnswerSingle_29;
	// UnityEngine.UI.Image QuizCinema.UIResultBetweenQuestion::_likeImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____likeImage_30;
	// System.Boolean QuizCinema.UIResultBetweenQuestion::_flagLike
	bool ____flagLike_31;
	// System.Int32 QuizCinema.UIResultBetweenQuestion::_limitSymbolInQuestion
	int32_t ____limitSymbolInQuestion_32;
	// System.Boolean QuizCinema.UIResultBetweenQuestion::_flagShowPanelResult
	bool ____flagShowPanelResult_33;
	// System.Int32 QuizCinema.UIResultBetweenQuestion::_indexLang
	int32_t ____indexLang_34;
};

// QuizCinema.UIStars
struct UIStars_t9D1A13951C5DDF7A9381259E36774A9B0C9939DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image[] QuizCinema.UIStars::_imagesStarsInLvl
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ____imagesStarsInLvl_4;
	// UnityEngine.Sprite[] QuizCinema.UIStars::_spritesStars
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____spritesStars_5;
	// QuizCinema.GameManager QuizCinema.UIStars::_gameManager
	GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* ____gameManager_6;
	// QuizCinema.SpineStarsAnim QuizCinema.UIStars::_spineAnim
	SpineStarsAnim_tECBD3F5EF852872504A891CEED8E630C86633E5D* ____spineAnim_7;
};

// QuizCinema.AnswersMethods
struct AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D  : public SingletonBase_1_tC9627D006718094E8770E4F06C44A73DCE7E34AF
{
	// System.Action`1<QuizCinema.Question> QuizCinema.AnswersMethods::OnCreateAnswers
	Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E* ___OnCreateAnswers_6;
	// System.Action`1<System.Collections.Generic.List`1<QuizCinema.AnswerData>> QuizCinema.AnswersMethods::OnCorrectAnswer
	Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268* ___OnCorrectAnswer_7;
	// System.Action`1<QuizCinema.AnswerData> QuizCinema.AnswersMethods::OnCorrectSpriteActivate
	Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF* ___OnCorrectSpriteActivate_8;
	// System.Collections.Generic.List`1<QuizCinema.AnswerData> QuizCinema.AnswersMethods::_currentAnswer
	List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* ____currentAnswer_9;
	// System.Collections.Generic.List`1<QuizCinema.AnswerData> QuizCinema.AnswersMethods::_correctAnswerData
	List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* ____correctAnswerData_10;
	// QuizCinema.AnswerData[] QuizCinema.AnswersMethods::_answerPrefab
	AnswerDataU5BU5D_t121B3EFA7B1196881F036E40C32FE55908854C76* ____answerPrefab_11;
	// UnityEngine.RectTransform[] QuizCinema.AnswersMethods::_answerContentArea
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ____answerContentArea_12;
	// UnityEngine.RectTransform QuizCinema.AnswersMethods::_rectTransformStart
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____rectTransformStart_13;
	// QuizCinema.Question QuizCinema.AnswersMethods::_currentQuestion
	Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ____currentQuestion_14;
};

// QuizCinema.AudioManager
struct AudioManager_tABAC9F89292153357C0838100E0C00253A6EF2DA  : public SingletonBase_1_tB9FE23F7BC3102EE23B2F32FC536E16A1997166B
{
	// QuizCinema.Sound[] QuizCinema.AudioManager::_sounds
	SoundU5BU5D_t6423556FA625EB699D99918163300A00340D0D36* ____sounds_6;
	// UnityEngine.AudioSource QuizCinema.AudioManager::_sourcePrefabSFX
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____sourcePrefabSFX_7;
	// UnityEngine.AudioSource QuizCinema.AudioManager::_sourcePrefabMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____sourcePrefabMusic_8;
	// System.String QuizCinema.AudioManager::_startupTrack
	String_t* ____startupTrack_9;
};

// QuizCinema.GameManager
struct GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087  : public SingletonBase_1_t3DA577FBB83CEE051BFA0F0E723D1BCA8185628B
{
	// System.Action`2<QuizCinema.UIManager/ResolutionScreenType,System.Int32> QuizCinema.GameManager::UpdateDisplayScreenResolution
	Action_2_t9BA866C0F264FE2FF51E23780DF8885675C195B2* ___UpdateDisplayScreenResolution_6;
	// System.Action QuizCinema.GameManager::OnFinishGame
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnFinishGame_7;
	// System.Action QuizCinema.GameManager::OnDownloadedQuestions
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDownloadedQuestions_8;
	// System.Action QuizCinema.GameManager::OnCorrectAnswer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnCorrectAnswer_9;
	// System.Action QuizCinema.GameManager::OnInCorrectAnswer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnInCorrectAnswer_10;
	// System.Action QuizCinema.GameManager::OnNextQuestion
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnNextQuestion_11;
	// QuizCinema.TimerInLvl QuizCinema.GameManager::_timerInLvl
	TimerInLvl_t0FFC44524B89D16B1FB9064B62F4F90EEE3F5176* ____timerInLvl_12;
	// QuizCinema.QuestionMethods QuizCinema.GameManager::_questionMethods
	QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* ____questionMethods_13;
	// QuizCinema.Score QuizCinema.GameManager::_score
	Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* ____score_14;
	// UnityEngine.Animator QuizCinema.GameManager::_timerAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____timerAnimator_15;
	// UnityEngine.GameObject QuizCinema.GameManager::_numberQuestionContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____numberQuestionContainer_16;
	// UnityEngine.GameObject QuizCinema.GameManager::_panelInfoQuiz
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____panelInfoQuiz_17;
	// UnityEngine.Animator QuizCinema.GameManager::_loadLvlBgAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____loadLvlBgAnimator_18;
	// System.Single QuizCinema.GameManager::_timeLoadLvl
	float ____timeLoadLvl_19;
	// System.Boolean QuizCinema.GameManager::_isCorrectAnswer
	bool ____isCorrectAnswer_20;
	// System.Int32 QuizCinema.GameManager::_levelCountStars
	int32_t ____levelCountStars_21;
	// System.Int32 QuizCinema.GameManager::_loadingScreenStateParaHash
	int32_t ____loadingScreenStateParaHash_26;
	// System.Collections.IEnumerator QuizCinema.GameManager::IE_WaitTillNextRound
	RuntimeObject* ___IE_WaitTillNextRound_27;
	// UnityEngine.WWW QuizCinema.GameManager::www
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___www_28;
	// System.Boolean QuizCinema.GameManager::_pressButtonAnswer
	bool ____pressButtonAnswer_29;
	// System.Int32 QuizCinema.GameManager::_countCorrectAnswer
	int32_t ____countCorrectAnswer_30;
	// System.Int32 QuizCinema.GameManager::_countCurrentAnswer
	int32_t ____countCurrentAnswer_31;
	// System.Boolean QuizCinema.GameManager::_isActivateBoost50Percent
	bool ____isActivateBoost50Percent_32;
	// System.Boolean QuizCinema.GameManager::_isRewarded
	bool ____isRewarded_33;
	// System.Int32 QuizCinema.GameManager::_countAnswers
	int32_t ____countAnswers_34;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// QuizCinema.LanguageChanger
struct LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1  : public SingletonBase_1_t2A1575874FFA9845E770238D62F820FD7A5F8634
{
	// System.Action QuizCinema.LanguageChanger::OnChangeLanguage
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnChangeLanguage_6;
	// QuizCinema.Language[] QuizCinema.LanguageChanger::_buttonsLanguage
	LanguageU5BU5D_t0E3F4A20DF4F268099B5D5161116026FFF0351CD* ____buttonsLanguage_7;
	// System.Int32 QuizCinema.LanguageChanger::_index
	int32_t ____index_8;
};

// TowerDefense.MapCompletion
struct MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A  : public SingletonBase_1_tE07568C36CF111C5917ECC442F2A578D76A502CA
{
	// TowerDefense.MapCompletion/EpisodeScore[] TowerDefense.MapCompletion::_completionData
	EpisodeScoreU5BU5D_t271CF01E603B7434AD3B5ADA276FC07E975321D0* ____completionData_14;
	// TowerDefense.MapCompletion/EpisodeScore[] TowerDefense.MapCompletion::_completionDataUnity
	EpisodeScoreU5BU5D_t271CF01E603B7434AD3B5ADA276FC07E975321D0* ____completionDataUnity_15;
	// SpaceShooter.Episode TowerDefense.MapCompletion::_currentEpisode
	Episode_t2D3242F029A4D77D474BA43585EAE775E27FCAFF* ____currentEpisode_16;
	// System.Int32 TowerDefense.MapCompletion::_totalStars
	int32_t ____totalStars_17;
	// System.Int32 TowerDefense.MapCompletion::_totalScoreLvls
	int32_t ____totalScoreLvls_18;
	// System.Int32 TowerDefense.MapCompletion::_totalAdsMoney
	int32_t ____totalAdsMoney_19;
	// System.Int32 TowerDefense.MapCompletion::_moneyShop
	int32_t ____moneyShop_20;
	// System.Int32 TowerDefense.MapCompletion::_countLvlFinished
	int32_t ____countLvlFinished_21;
	// System.Int32 TowerDefense.MapCompletion::_skinShop
	int32_t ____skinShop_22;
	// System.Boolean[] TowerDefense.MapCompletion::_isOpenBar
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____isOpenBar_23;
	// System.Boolean TowerDefense.MapCompletion::_completeLearning
	bool ____completeLearning_24;
	// System.Boolean[] TowerDefense.MapCompletion::_learnSteps
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____learnSteps_25;
};

struct MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A_StaticFields
{
	// System.Action TowerDefense.MapCompletion::OnScoreUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnScoreUpdate_6;
	// System.Action TowerDefense.MapCompletion::OnBarOpenInfoUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnBarOpenInfoUpdate_7;
	// System.Action TowerDefense.MapCompletion::OnLearningSave
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnLearningSave_8;
};

// QuizCinema.QuestionMethods
struct QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE  : public SingletonBase_1_t0CCD534E6D011C4BCF6273BB6721EC88BEAFC9A3
{
	// System.Action`1<QuizCinema.Question> QuizCinema.QuestionMethods::OnUpdateQuestionUI
	Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E* ___OnUpdateQuestionUI_6;
	// System.Action`1<System.Collections.Generic.List`1<QuizCinema.AnswerData>> QuizCinema.QuestionMethods::CurrentAnswerList
	Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268* ___CurrentAnswerList_7;
	// QuizCinema.GameManager QuizCinema.QuestionMethods::_gameManager
	GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* ____gameManager_8;
	// QuizCinema.Data QuizCinema.QuestionMethods::_data
	Data_t5F2FAD069732FCAFA1295C0A75FA69DE9B4FF9BB* ____data_9;
	// System.Collections.Generic.List`1<QuizCinema.AnswerData> QuizCinema.QuestionMethods::_pickedAnswers
	List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* ____pickedAnswers_10;
	// System.Collections.Generic.List`1<System.Int32> QuizCinema.QuestionMethods::_finishedQuestions
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____finishedQuestions_11;
	// System.Int32 QuizCinema.QuestionMethods::_currentIndexQuestion
	int32_t ____currentIndexQuestion_12;
	// System.Int32 QuizCinema.QuestionMethods::_currentIndexNotRandom
	int32_t ____currentIndexNotRandom_13;
};

// QuizCinema.Score
struct Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E  : public SingletonBase_1_tBE08BB7FA2A688BD40E1CC20879636C9B281E3D8
{
	// System.Action QuizCinema.Score::UpdateScore
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateScore_6;
	// QuizCinema.GameManager QuizCinema.Score::_gameManager
	GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* ____gameManager_7;
	// System.Int32 QuizCinema.Score::_currentLvlScore
	int32_t ____currentLvlScore_8;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// QuizCinema.TranslateInfo
struct TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9  : public SingletonBase_1_tFD1CEE767248F82FD84E0D4B1B5873E0CC840166
{
	// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::_textCorrect
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____textCorrect_6;
	// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::_textInCorrect
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____textInCorrect_7;
	// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::_textAnswer
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____textAnswer_8;
	// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::_textProfile
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____textProfile_9;
	// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::_textMap
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____textMap_10;
	// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::_textBattle
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____textBattle_11;
	// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::_textShop
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____textShop_12;
};

// QuizCinema.UIManager
struct UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA  : public SingletonBase_1_tA9134DFE895DEC2E69E62F8AE1BE23D1BC0B16FC
{
	// System.Action QuizCinema.UIManager::OnFinishScoreCalculating
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnFinishScoreCalculating_6;
	// QuizCinema.GameManager QuizCinema.UIManager::_gameManager
	GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* ____gameManager_7;
	// QuizCinema.QuestionMethods QuizCinema.UIManager::_questionMethods
	QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* ____questionMethods_8;
	// QuizCinema.Score QuizCinema.UIManager::_score
	Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* ____score_9;
	// QuizCinema.SettingUIManager QuizCinema.UIManager::_settingUIManager
	SettingUIManager_t14697A83D93A23EC6857D464D4B8B264C720A868* ____settingUIManager_10;
	// QuizCinema.AnswerData[] QuizCinema.UIManager::_answerPrefab
	AnswerDataU5BU5D_t121B3EFA7B1196881F036E40C32FE55908854C76* ____answerPrefab_11;
	// UnityEngine.RectTransform QuizCinema.UIManager::_panelInfoQuiz
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____panelInfoQuiz_12;
	// QuizCinema.UIElements QuizCinema.UIManager::_uIElements
	UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110 ____uIElements_13;
	// System.Boolean QuizCinema.UIManager::_isCalculating
	bool ____isCalculating_14;
	// System.Collections.Generic.List`1<System.Int32> QuizCinema.UIManager::_finishedAnswers
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____finishedAnswers_15;
	// System.Collections.Generic.List`1<QuizCinema.AnswerData> QuizCinema.UIManager::_currentAnswer
	List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* ____currentAnswer_16;
	// System.Collections.Generic.List`1<QuizCinema.AnswerData> QuizCinema.UIManager::_correctAnswer
	List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* ____correctAnswer_17;
	// System.Int32 QuizCinema.UIManager::_resStateParaHash
	int32_t ____resStateParaHash_18;
	// System.Collections.IEnumerator QuizCinema.UIManager::IE_DisplayTimedResolution
	RuntimeObject* ___IE_DisplayTimedResolution_19;
	// QuizCinema.UIManager/ResolutionScreenType QuizCinema.UIManager::_typeAnswer
	int32_t ____typeAnswer_20;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* m_Items[1];

	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// QuizCinema.Answer[]
struct AnswerU5BU5D_t0C8C1D0CA70C782125A0B4A2206C71BBAECE1D99  : public RuntimeArray
{
	ALIGN_FIELD (8) Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* m_Items[1];

	inline Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T SingletonBase`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SingletonBase_1_get_Instance_m1ED3EAF4A35C8BFC70B5B846B241BBC1936FFB18_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,QuizCinema.UIManager/<StartCalculateScore>d__41>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571_m985440DA71E33A3F3281634D7E066CEE731E0368_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,QuizCinema.UIManager/<CalculateScore>d__42>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16_m9F105238E53B15FD9F969E6B88359948E3083736_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single QuizCinema.GameUtility::get_ResolutionDelayTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameUtility_get_ResolutionDelayTime_mACAFBD1075CCCD6BDC07A59753AB0B28217A955C (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Animator QuizCinema.UIElements::get_ResolutionScreenAnimator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* UIElements_get_ResolutionScreenAnimator_m708F4D5A1683F9D433580D6B55B8DA0DE81FC8D5_inline (UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T SingletonBase`1<TowerDefense.MapCompletion>::get_Instance()
inline MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A* SingletonBase_1_get_Instance_m088CB96CF5F16CE120336DF7B5DAD939A63D8C5A_inline (const RuntimeMethod* method)
{
	return ((  MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A* (*) (const RuntimeMethod*))SingletonBase_1_get_Instance_m1ED3EAF4A35C8BFC70B5B846B241BBC1936FFB18_gshared_inline)(method);
}
// System.Boolean[] TowerDefense.MapCompletion::get_LearnSteps()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* MapCompletion_get_LearnSteps_m18FB97210F51345921FEE7A10634BB7060BBFA47_inline (MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask QuizCinema.UIManager::CalculateScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UIManager_CalculateScore_mCFEE4AFFD84EFAA8D741433D48485B930A1808D8 (UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* __this, int32_t ___levelCountsStars0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,QuizCinema.UIManager/<StartCalculateScore>d__41>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571_m985440DA71E33A3F3281634D7E066CEE731E0368 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571_m985440DA71E33A3F3281634D7E066CEE731E0368_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIManager/<StartCalculateScore>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCalculateScoreU3Ed__41_MoveNext_m209A178AA23FE13788EFD1CD1F5A68B56B3CD4D9 (U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIManager/<StartCalculateScore>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCalculateScoreU3Ed__41_SetStateMachine_m149C5FD87F0AD8D7B69CBBB8A1B78EF547E3A969 (U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Int32 QuizCinema.Score::get_CurrentLvlScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Score_get_CurrentLvlScore_m99AC33C103D3D790C0D25B0DA38E9D0D5F0FEB6A_inline (Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* __this, const RuntimeMethod* method) ;
// TMPro.TextMeshProUGUI[] QuizCinema.UIElements::get_ScoreFinalLvl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* UIElements_get_ScoreFinalLvl_mE065BA9E13ACA61553122710D4B936114718E485_inline (UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void TowerDefense.MapCompletion::SaveEpisodeResult(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapCompletion_SaveEpisodeResult_m94C4F8026B46435C9BB5EDB281459519847736A4 (int32_t ___levelStars0, int32_t ___levelScore1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 TowerDefense.MapCompletion::GetLvlMaxScore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapCompletion_GetLvlMaxScore_m841A56350BEC0F9EEA428401B38AE5D2F54467BD (MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A* __this, String_t* ___episodeName0, const RuntimeMethod* method) ;
// TMPro.TextMeshProUGUI[] QuizCinema.UIElements::get_MaxScoreFinalLvl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* UIElements_get_MaxScoreFinalLvl_mB8B2F963AC61C9D1190D5C846A4BEAF8B73FFA90_inline (UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___value0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::Delay(System.TimeSpan,System.Boolean,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_Delay_m446244C96F6C971AA44C9F458176F25FCA708F2F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___delayTimeSpan0, bool ___ignoreTimeScale1, int32_t ___delayTiming2, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken3, bool ___cancelImmediately4, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,QuizCinema.UIManager/<CalculateScore>d__42>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16_m9F105238E53B15FD9F969E6B88359948E3083736_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16_m9F105238E53B15FD9F969E6B88359948E3083736_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIManager/<CalculateScore>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalculateScoreU3Ed__42_MoveNext_mE3AF5599DFA8B0A651157754AD40678B8BE2A1F4 (U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIManager/<CalculateScore>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalculateScoreU3Ed__42_SetStateMachine_m8D616596667DCD79AB74BFC88BF10AF8321F40FE (U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// UnityEngine.Color QuizCinema.UIManagerParameters::get_CorrectBGColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_CorrectBGColor_m4ED8F19C9062CBC622D16474AA58B40A9C8C4C73_inline (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) ;
// UnityEngine.Color QuizCinema.UIManagerParameters::get_InCorrectBGColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_InCorrectBGColor_mC491D62BBF75593736CEF96195BEC909DD7B96B1_inline (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) ;
// UnityEngine.Color QuizCinema.UIManagerParameters::get_FinalBGColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_FinalBGColor_m04DF8E6F4E27B17AA842E52694A303AAD8631A76_inline (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void System.Action`1<QuizCinema.AnswerData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC8B1635B2C9CFD175F035D7F75E9C38A3D05C511 (Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QuizCinema.AnswerData::add_UpdateQuestionAnswer(System.Action`1<QuizCinema.AnswerData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerData_add_UpdateQuestionAnswer_mBB084C7F9071F7552E95C954E74B0CB32848827F (Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF* ___value0, const RuntimeMethod* method) ;
// T SingletonBase`1<QuizCinema.AnswersMethods>::get_Instance()
inline AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_inline (const RuntimeMethod* method)
{
	return ((  AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* (*) (const RuntimeMethod*))SingletonBase_1_get_Instance_m1ED3EAF4A35C8BFC70B5B846B241BBC1936FFB18_gshared_inline)(method);
}
// System.Void System.Action`1<QuizCinema.Question>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB00C42A8E0C93FD62B267E502BD46EFADC2F0724 (Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QuizCinema.AnswersMethods::add_OnCreateAnswers(System.Action`1<QuizCinema.Question>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswersMethods_add_OnCreateAnswers_m8E3B593EAEDFC1C3D8DF226775A9A97731A80927 (AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* __this, Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E* ___value0, const RuntimeMethod* method) ;
// T SingletonBase`1<QuizCinema.QuestionMethods>::get_Instance()
inline QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_inline (const RuntimeMethod* method)
{
	return ((  QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* (*) (const RuntimeMethod*))SingletonBase_1_get_Instance_m1ED3EAF4A35C8BFC70B5B846B241BBC1936FFB18_gshared_inline)(method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<QuizCinema.AnswerData>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m29740803FC0F0FE849C272CD791E9B2FFB63C35B (Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void QuizCinema.QuestionMethods::add_CurrentAnswerList(System.Action`1<System.Collections.Generic.List`1<QuizCinema.AnswerData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestionMethods_add_CurrentAnswerList_mFEF928FF314E7242D17B4E9FD82A0FECEC1C4C9B (QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* __this, Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268* ___value0, const RuntimeMethod* method) ;
// T SingletonBase`1<QuizCinema.LanguageChanger>::get_Instance()
inline LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_inline (const RuntimeMethod* method)
{
	return ((  LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* (*) (const RuntimeMethod*))SingletonBase_1_get_Instance_m1ED3EAF4A35C8BFC70B5B846B241BBC1936FFB18_gshared_inline)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void QuizCinema.LanguageChanger::add_OnChangeLanguage(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageChanger_add_OnChangeLanguage_mC0C105F259806F931EE32B753C1BF5192B13C499 (LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void QuizCinema.AnswerData::remove_UpdateQuestionAnswer(System.Action`1<QuizCinema.AnswerData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswerData_remove_UpdateQuestionAnswer_m942E7856DF18D39A402BBBEEF3A13D1539B23D6B (Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF* ___value0, const RuntimeMethod* method) ;
// System.Void QuizCinema.AnswersMethods::remove_OnCreateAnswers(System.Action`1<QuizCinema.Question>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnswersMethods_remove_OnCreateAnswers_m8153875A29F5002D4656687943FEDFDCE40AAE39 (AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* __this, Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E* ___value0, const RuntimeMethod* method) ;
// System.Void QuizCinema.QuestionMethods::remove_CurrentAnswerList(System.Action`1<System.Collections.Generic.List`1<QuizCinema.AnswerData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestionMethods_remove_CurrentAnswerList_mA478A7B9CC430266860E99CD8C06839F77231DFB (QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* __this, Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268* ___value0, const RuntimeMethod* method) ;
// System.Void QuizCinema.LanguageChanger::remove_OnChangeLanguage(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LanguageChanger_remove_OnChangeLanguage_mD374673C8A2408825825C8E1BEFE136D148A5C89 (LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIResultBetweenQuestion::CorrectSetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_CorrectSetActive_m3CBFF1AB22EE902FC7D52D3A4476722A134D5921 (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, bool ___correct0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::get_TextAnswer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* TranslateInfo_get_TextAnswer_m8BA870CB6868BFF256BE70CD896327240667FA67_inline (TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<QuizCinema.Answer>::get_Item(System.Int32)
inline Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* List_1_get_Item_mAAB21604FC33D94DD8BA80DBB7B9A0FD7357B913 (List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* (*) (List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::get_TextCorrect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* TranslateInfo_get_TextCorrect_mAB773E07E6EC746F0611BA7419CEC973C6AA9AB1_inline (TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<QuizCinema.AnswerData>::GetEnumerator()
inline Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D List_1_GetEnumerator_m3F8DF07760CFCAE8BFC782AB64A814D658C55490 (List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D (*) (List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<QuizCinema.AnswerData>::Dispose()
inline void Enumerator_Dispose_mE343BE3FD1C8B5C0391459912049869035D1CE91 (Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<QuizCinema.AnswerData>::get_Current()
inline AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* Enumerator_get_Current_m1F6A209EC1BBB5FD53A5D3C64870ED72DBFA9884_inline (Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D* __this, const RuntimeMethod* method)
{
	return ((  AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* (*) (Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 QuizCinema.AnswerData::get_AnswerIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnswerData_get_AnswerIndex_mAC0837128E53EB1B19381F8CFEDDEB33A1517CF9_inline (AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<QuizCinema.AnswerData>::MoveNext()
inline bool Enumerator_MoveNext_mBF4C2071D961560A1F0EF55E53D26B98CBEA4F12 (Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<QuizCinema.AnswerData>::get_Item(System.Int32)
inline AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* List_1_get_Item_mEBD7BB34FA77E6EB728C8AF72CCA45B1AD507E61 (List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* (*) (List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// TMPro.TextMeshProUGUI QuizCinema.AnswerData::get_InfoText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AnswerData_get_InfoText_mBFB344640BDB41A66ED842EEF407907BB25E0A20_inline (AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> QuizCinema.TranslateInfo::get_TextInCorrect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* TranslateInfo_get_TextInCorrect_m670F59EB429C23267B09D752E21AA3B4D5F2EA72_inline (TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* __this, const RuntimeMethod* method) ;
// System.Boolean QuizCinema.QuestionMethods::CheckAnswers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuestionMethods_CheckAnswers_m79E648C97294BC686421B3F758E6D4D8E2F0D636 (QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* __this, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIResultBetweenQuestion::OnCorrectAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_OnCorrectAnswer_mCF0AD07AB0F8C5513C8DAEE0CE9C4291E019984C (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIResultBetweenQuestion::OnInCorrectAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_OnInCorrectAnswer_m65C065157E0807A2BE04FB9AF6829CED0ABECEEB (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<QuizCinema.Answer>::Clear()
inline void List_1_Clear_m5478ACF7733D98CB1118FF71563B0EE2528B089E_inline (List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<System.Int32> QuizCinema.Question::GetCorrectAnswers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Question_GetCorrectAnswers_m458DDA420F0F9ECB715B910BE5ADF58E8484B206 (Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<QuizCinema.Answer>::Add(T)
inline void List_1_Add_m7B94243ADA7B76CBE0F3AEA4B027DCABD865A90D_inline (List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* __this, Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F*, Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<QuizCinema.Answer> QuizCinema.AnswersMethods::GetInCorrectAnswers(QuizCinema.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* AnswersMethods_GetInCorrectAnswers_m201DDD8AEA5653F7A2BF74F8B6CB0F79974B5ED2 (AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* __this, Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ___question0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator QuizCinema.UIResultBetweenQuestion::SetCorrectQuestionText(QuizCinema.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIResultBetweenQuestion_SetCorrectQuestionText_mC345606F7A7CF3376117D99B14C1EB30AF980326 (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ___question0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetCorrectQuestionTextU3Ed__44__ctor_mCC3CD162FF98ED708CED18DB3A92792122FDC8CF (U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33 (String_t* ___path0, Type_t* ___systemTypeInstance1, const RuntimeMethod* method) ;
// T SingletonBase`1<QuizCinema.AudioManager>::get_Instance()
inline AudioManager_tABAC9F89292153357C0838100E0C00253A6EF2DA* SingletonBase_1_get_Instance_mC6F46636F67A8B91A92901EC1BE4F9CE08FC8538_inline (const RuntimeMethod* method)
{
	return ((  AudioManager_tABAC9F89292153357C0838100E0C00253A6EF2DA* (*) (const RuntimeMethod*))SingletonBase_1_get_Instance_m1ED3EAF4A35C8BFC70B5B846B241BBC1936FFB18_gshared_inline)(method);
}
// System.Void QuizCinema.AudioManager::PlaySound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySound_mCC2BF137FEDB40129B437546379C9757A5569E80 (AudioManager_tABAC9F89292153357C0838100E0C00253A6EF2DA* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void QuizCinema.LikeFilm::PressButtonLike(UnityEngine.UI.Image,QuizCinema.Question,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LikeFilm_PressButtonLike_m7AA69ACFBCB2ECC70FAF9B1F5734AA934AA77659 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___likeImage0, Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ____currentQuestion1, bool ___flagLike2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void QuizCinema.LikeFilm::SetDefaultValue(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LikeFilm_SetDefaultValue_m6BD64C95479EDDEB3413BBC13CFF56A1FEC62C1A (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___likeImage0, const RuntimeMethod* method) ;
// System.Void QuizCinema.UIResultBetweenQuestion::SetAllInfoQuestion(QuizCinema.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_SetAllInfoQuestion_m592C59E8F331A0E541DBA10C78A3C8766AC7C774 (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ___question0, const RuntimeMethod* method) ;
// System.Void QuizCinema.GameManager::add_OnFinishGame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnFinishGame_mCB716B025C28B9B34F0A6CD283B8B2144073DD2F (GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Int32 QuizCinema.GameManager::CalculateLevelStars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_CalculateLevelStars_m3140B5CACDB85736A72A809B4DCD238CD4412D71 (GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void QuizCinema.SpineStarsAnim::ChangeSkinAnim(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpineStarsAnim_ChangeSkinAnim_mC3AAE5A961F83C8A55356ABA1A3E4D2440A4DC10 (SpineStarsAnim_tECBD3F5EF852872504A891CEED8E630C86633E5D* __this, int32_t ___countStars0, const RuntimeMethod* method) ;
// System.Void QuizCinema.GameManager::remove_OnFinishGame(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnFinishGame_m1DF671B2F8D241CCE13AAED2A247CADDC3228EB8 (GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuizCinema.UIManager/<DisplayTimedResolution>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTimedResolutionU3Ed__38__ctor_m9DC09EBC909118D2905373CEED18D7225A385D50 (U3CDisplayTimedResolutionU3Ed__38_tE765CB4B31B82406DCDF1656E9821BF75F33A22A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QuizCinema.UIManager/<DisplayTimedResolution>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTimedResolutionU3Ed__38_System_IDisposable_Dispose_m64627D41CE4BCD4A6B8F5429129DCA6D38F4D63F (U3CDisplayTimedResolutionU3Ed__38_tE765CB4B31B82406DCDF1656E9821BF75F33A22A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QuizCinema.UIManager/<DisplayTimedResolution>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayTimedResolutionU3Ed__38_MoveNext_m8AFDF249D5A42FE18D3EC4D62FD6F694B5282BE0 (U3CDisplayTimedResolutionU3Ed__38_tE765CB4B31B82406DCDF1656E9821BF75F33A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D877F6CAD0AB5C43E083360FE09F5E7A757BFE3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(GameUtility.ResolutionDelayTime);
		float L_4;
		L_4 = GameUtility_get_ResolutionDelayTime_mACAFBD1075CCCD6BDC07A59753AB0B28217A955C(NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("DisplayTimedResolution");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4D877F6CAD0AB5C43E083360FE09F5E7A757BFE3, NULL);
		// _uIElements.ResolutionScreenAnimator.SetInteger(_resStateParaHash, 1);
		UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_6 = V_1;
		NullCheck(L_6);
		UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_7 = (&L_6->____uIElements_13);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8;
		L_8 = UIElements_get_ResolutionScreenAnimator_m708F4D5A1683F9D433580D6B55B8DA0DE81FC8D5_inline(L_7, NULL);
		UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->____resStateParaHash_18;
		NullCheck(L_8);
		Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8(L_8, L_10, 1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object QuizCinema.UIManager/<DisplayTimedResolution>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayTimedResolutionU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m291B113965952C98A03E50354FD08926208D9F9C (U3CDisplayTimedResolutionU3Ed__38_tE765CB4B31B82406DCDF1656E9821BF75F33A22A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QuizCinema.UIManager/<DisplayTimedResolution>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayTimedResolutionU3Ed__38_System_Collections_IEnumerator_Reset_m3C5DCB6ACA5778A028572F7565F89FDE1ECA62A0 (U3CDisplayTimedResolutionU3Ed__38_tE765CB4B31B82406DCDF1656E9821BF75F33A22A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayTimedResolutionU3Ed__38_System_Collections_IEnumerator_Reset_m3C5DCB6ACA5778A028572F7565F89FDE1ECA62A0_RuntimeMethod_var)));
	}
}
// System.Object QuizCinema.UIManager/<DisplayTimedResolution>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayTimedResolutionU3Ed__38_System_Collections_IEnumerator_get_Current_m6E68B5FD6601FA388BC174AF85E673C994DE1A40 (U3CDisplayTimedResolutionU3Ed__38_tE765CB4B31B82406DCDF1656E9821BF75F33A22A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuizCinema.UIManager/<StartCalculateScore>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCalculateScoreU3Ed__41_MoveNext_m209A178AA23FE13788EFD1CD1F5A68B56B3CD4D9 (U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571_m985440DA71E33A3F3281634D7E066CEE731E0368_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_m088CB96CF5F16CE120336DF7B5DAD939A63D8C5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAE757BFF64271DF1B8E95317FFC805BA1FF3FA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0073_1;
			}
		}
		{
			// Debug.Log("StartCalculateScore " + MapCompletion.Instance.LearnSteps[1]);
			MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A* L_3;
			L_3 = SingletonBase_1_get_Instance_m088CB96CF5F16CE120336DF7B5DAD939A63D8C5A_inline(SingletonBase_1_get_Instance_m088CB96CF5F16CE120336DF7B5DAD939A63D8C5A_RuntimeMethod_var);
			NullCheck(L_3);
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4;
			L_4 = MapCompletion_get_LearnSteps_m18FB97210F51345921FEE7A10634BB7060BBFA47_inline(L_3, NULL);
			NullCheck(L_4);
			String_t* L_5;
			L_5 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
			String_t* L_6;
			L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7EAE757BFF64271DF1B8E95317FFC805BA1FF3FA, L_5, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
			// await CalculateScore(levelCountsStars);
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_7 = V_1;
			int32_t L_8 = __this->___levelCountsStars_3;
			NullCheck(L_7);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9;
			L_9 = UIManager_CalculateScore_mCFEE4AFFD84EFAA8D741433D48485B930A1808D8(L_7, L_8, NULL);
			V_3 = L_9;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_10;
			L_10 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_11)
			{
				goto IL_008f_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = V_2;
			__this->___U3CU3Eu__1_4 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571_m985440DA71E33A3F3281634D7E066CEE731E0368(L_14, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571_m985440DA71E33A3F3281634D7E066CEE731E0368_RuntimeMethod_var);
			goto IL_00c4;
		}

IL_0073_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15 = __this->___U3CU3Eu__1_4;
			V_2 = L_15;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_16 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_16, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_008f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			goto IL_00b1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0098;
		}
		throw e;
	}

CATCH_0098:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_18, L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c4;
	}// end catch (depth: 1)

IL_00b1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_20, NULL);
	}

IL_00c4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartCalculateScoreU3Ed__41_MoveNext_m209A178AA23FE13788EFD1CD1F5A68B56B3CD4D9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571*>(__this + _offset);
	U3CStartCalculateScoreU3Ed__41_MoveNext_m209A178AA23FE13788EFD1CD1F5A68B56B3CD4D9(_thisAdjusted, method);
}
// System.Void QuizCinema.UIManager/<StartCalculateScore>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCalculateScoreU3Ed__41_SetStateMachine_m149C5FD87F0AD8D7B69CBBB8A1B78EF547E3A969 (U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartCalculateScoreU3Ed__41_SetStateMachine_m149C5FD87F0AD8D7B69CBBB8A1B78EF547E3A969_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartCalculateScoreU3Ed__41_t4F5120BCECEE84AC49DC0EC81549B72F61BC7571*>(__this + _offset);
	U3CStartCalculateScoreU3Ed__41_SetStateMachine_m149C5FD87F0AD8D7B69CBBB8A1B78EF547E3A969(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuizCinema.UIManager/<CalculateScore>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalculateScoreU3Ed__42_MoveNext_mE3AF5599DFA8B0A651157754AD40678B8BE2A1F4 (U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16_m9F105238E53B15FD9F969E6B88359948E3083736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_m088CB96CF5F16CE120336DF7B5DAD939A63D8C5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FB1D7377700D40DCD65F08A70189B08A606C254);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE1ABC7573AF0214C607A7BD10EEB830759E126);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_5;
	memset((&V_5), 0, sizeof(V_5));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B13_0 = 0;
	U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* G_B14_2 = NULL;
	int32_t G_B22_0 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B25_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B24_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0187_1;
			}
		}
		{
			// Debug.Log("StartCalculate");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0FB1D7377700D40DCD65F08A70189B08A606C254, NULL);
			// if (_score.CurrentLvlScore == 0)
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_3 = V_1;
			NullCheck(L_3);
			Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* L_4 = L_3->____score_9;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = Score_get_CurrentLvlScore_m99AC33C103D3D790C0D25B0DA38E9D0D5F0FEB6A_inline(L_4, NULL);
			if (L_5)
			{
				goto IL_0071_1;
			}
		}
		{
			// if (_uIElements.ScoreFinalLvl.Length == 2)
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_6 = V_1;
			NullCheck(L_6);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_7 = (&L_6->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_8;
			L_8 = UIElements_get_ScoreFinalLvl_mE065BA9E13ACA61553122710D4B936114718E485_inline(L_7, NULL);
			NullCheck(L_8);
			if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((uint32_t)2))))
			{
				goto IL_0071_1;
			}
		}
		{
			// _uIElements.ScoreFinalLvl[0].text = 0.ToString();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_9 = V_1;
			NullCheck(L_9);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_10 = (&L_9->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_11;
			L_11 = UIElements_get_ScoreFinalLvl_mE065BA9E13ACA61553122710D4B936114718E485_inline(L_10, NULL);
			NullCheck(L_11);
			int32_t L_12 = 0;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			V_3 = 0;
			String_t* L_14;
			L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
			NullCheck(L_13);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_14);
			// _uIElements.ScoreFinalLvl[1].text = 0.ToString();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_15 = V_1;
			NullCheck(L_15);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_16 = (&L_15->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_17;
			L_17 = UIElements_get_ScoreFinalLvl_mE065BA9E13ACA61553122710D4B936114718E485_inline(L_16, NULL);
			NullCheck(L_17);
			int32_t L_18 = 1;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			V_3 = 0;
			String_t* L_20;
			L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
			NullCheck(L_19);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_19, L_20);
		}

IL_0071_1:
		{
			// MapCompletion.SaveEpisodeResult(levelCountsStars, _score.CurrentLvlScore);
			int32_t L_21 = __this->___levelCountsStars_3;
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_22 = V_1;
			NullCheck(L_22);
			Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* L_23 = L_22->____score_9;
			NullCheck(L_23);
			int32_t L_24;
			L_24 = Score_get_CurrentLvlScore_m99AC33C103D3D790C0D25B0DA38E9D0D5F0FEB6A_inline(L_23, NULL);
			MapCompletion_SaveEpisodeResult_m94C4F8026B46435C9BB5EDB281459519847736A4(L_21, L_24, NULL);
			// var scoreValue = 0;
			__this->___U3CscoreValueU3E5__2_4 = 0;
			// var scoreMoreThanZero = _score.CurrentLvlScore > 0;
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_25 = V_1;
			NullCheck(L_25);
			Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* L_26 = L_25->____score_9;
			NullCheck(L_26);
			int32_t L_27;
			L_27 = Score_get_CurrentLvlScore_m99AC33C103D3D790C0D25B0DA38E9D0D5F0FEB6A_inline(L_26, NULL);
			__this->___U3CscoreMoreThanZeroU3E5__3_5 = (bool)((((int32_t)L_27) > ((int32_t)0))? 1 : 0);
			// var maxScoreCurrentLvl = MapCompletion.Instance.GetLvlMaxScore(SceneManager.GetActiveScene().name);
			MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A* L_28;
			L_28 = SingletonBase_1_get_Instance_m088CB96CF5F16CE120336DF7B5DAD939A63D8C5A_inline(SingletonBase_1_get_Instance_m088CB96CF5F16CE120336DF7B5DAD939A63D8C5A_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
			Scene_tA1DC762B79745EB5140F054C884855B922318356 L_29;
			L_29 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
			V_4 = L_29;
			String_t* L_30;
			L_30 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_4), NULL);
			NullCheck(L_28);
			int32_t L_31;
			L_31 = MapCompletion_GetLvlMaxScore_m841A56350BEC0F9EEA428401B38AE5D2F54467BD(L_28, L_30, NULL);
			V_2 = L_31;
			// var maxScoreMoreThanZero = maxScoreCurrentLvl > _score.CurrentLvlScore;
			int32_t L_32 = V_2;
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_33 = V_1;
			NullCheck(L_33);
			Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* L_34 = L_33->____score_9;
			NullCheck(L_34);
			int32_t L_35;
			L_35 = Score_get_CurrentLvlScore_m99AC33C103D3D790C0D25B0DA38E9D0D5F0FEB6A_inline(L_34, NULL);
			__this->___U3CmaxScoreMoreThanZeroU3E5__4_6 = (bool)((((int32_t)L_32) > ((int32_t)L_35))? 1 : 0);
			// if (maxScoreMoreThanZero)
			bool L_36 = __this->___U3CmaxScoreMoreThanZeroU3E5__4_6;
			if (!L_36)
			{
				goto IL_0109_1;
			}
		}
		{
			// _uIElements.MaxScoreFinalLvl[0].text = maxScoreCurrentLvl.ToString();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_37 = V_1;
			NullCheck(L_37);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_38 = (&L_37->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_39;
			L_39 = UIElements_get_MaxScoreFinalLvl_mB8B2F963AC61C9D1190D5C846A4BEAF8B73FFA90_inline(L_38, NULL);
			NullCheck(L_39);
			int32_t L_40 = 0;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
			String_t* L_42;
			L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
			NullCheck(L_41);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, L_42);
			// _uIElements.MaxScoreFinalLvl[1].text = maxScoreCurrentLvl.ToString();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_43 = V_1;
			NullCheck(L_43);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_44 = (&L_43->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_45;
			L_45 = UIElements_get_MaxScoreFinalLvl_mB8B2F963AC61C9D1190D5C846A4BEAF8B73FFA90_inline(L_44, NULL);
			NullCheck(L_45);
			int32_t L_46 = 1;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			String_t* L_48;
			L_48 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
			NullCheck(L_47);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_47, L_48);
		}

IL_0109_1:
		{
			// _isCalculating = true;
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_49 = V_1;
			NullCheck(L_49);
			L_49->____isCalculating_14 = (bool)1;
			// Debug.Log("scoreMoreThanZero" + scoreMoreThanZero);
			bool* L_50 = (&__this->___U3CscoreMoreThanZeroU3E5__3_5);
			String_t* L_51;
			L_51 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_50, NULL);
			String_t* L_52;
			L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCDE1ABC7573AF0214C607A7BD10EEB830759E126, L_51, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_52, NULL);
			goto IL_0260_1;
		}

IL_012f_1:
		{
			// await UniTask.Delay(TimeSpan.FromSeconds(0.0000001f));
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_53;
			L_53 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F((1.0000000116860974E-07), NULL);
			il2cpp_codegen_initobj((&V_6), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_54 = V_6;
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_55;
			L_55 = UniTask_Delay_m446244C96F6C971AA44C9F458176F25FCA708F2F(L_53, (bool)0, 8, L_54, (bool)0, NULL);
			V_7 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56;
			L_56 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_7), NULL);
			V_5 = L_56;
			bool L_57;
			L_57 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_57)
			{
				goto IL_01a4_1;
			}
		}
		{
			int32_t L_58 = 0;
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59 = V_5;
			__this->___U3CU3Eu__1_7 = L_59;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_7))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_60 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16_m9F105238E53B15FD9F969E6B88359948E3083736_inline(L_60, (&V_5), __this, AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16_m9F105238E53B15FD9F969E6B88359948E3083736_RuntimeMethod_var);
			goto IL_02db;
		}

IL_0187_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_61 = __this->___U3CU3Eu__1_7;
			V_5 = L_61;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_62 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_62, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->___U3CU3E1__state_0 = L_63;
		}

IL_01a4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
			// scoreValue += scoreMoreThanZero ? 1 : -1;
			int32_t L_64 = __this->___U3CscoreValueU3E5__2_4;
			bool L_65 = __this->___U3CscoreMoreThanZeroU3E5__3_5;
			G_B12_0 = L_64;
			G_B12_1 = __this;
			if (L_65)
			{
				G_B13_0 = L_64;
				G_B13_1 = __this;
				goto IL_01bd_1;
			}
		}
		{
			G_B14_0 = (-1);
			G_B14_1 = G_B12_0;
			G_B14_2 = G_B12_1;
			goto IL_01be_1;
		}

IL_01bd_1:
		{
			G_B14_0 = 1;
			G_B14_1 = G_B13_0;
			G_B14_2 = G_B13_1;
		}

IL_01be_1:
		{
			G_B14_2->___U3CscoreValueU3E5__2_4 = ((int32_t)il2cpp_codegen_add(G_B14_1, G_B14_0));
			// if (_uIElements.ScoreFinalLvl.Length == 2)
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_66 = V_1;
			NullCheck(L_66);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_67 = (&L_66->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_68;
			L_68 = UIElements_get_ScoreFinalLvl_mE065BA9E13ACA61553122710D4B936114718E485_inline(L_67, NULL);
			NullCheck(L_68);
			if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))) == ((uint32_t)2))))
			{
				goto IL_020e_1;
			}
		}
		{
			// _uIElements.ScoreFinalLvl[0].text = scoreValue.ToString();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_69 = V_1;
			NullCheck(L_69);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_70 = (&L_69->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_71;
			L_71 = UIElements_get_ScoreFinalLvl_mE065BA9E13ACA61553122710D4B936114718E485_inline(L_70, NULL);
			NullCheck(L_71);
			int32_t L_72 = 0;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
			int32_t* L_74 = (&__this->___U3CscoreValueU3E5__2_4);
			String_t* L_75;
			L_75 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_74, NULL);
			NullCheck(L_73);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_73, L_75);
			// _uIElements.ScoreFinalLvl[1].text = scoreValue.ToString();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_76 = V_1;
			NullCheck(L_76);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_77 = (&L_76->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_78;
			L_78 = UIElements_get_ScoreFinalLvl_mE065BA9E13ACA61553122710D4B936114718E485_inline(L_77, NULL);
			NullCheck(L_78);
			int32_t L_79 = 1;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
			int32_t* L_81 = (&__this->___U3CscoreValueU3E5__2_4);
			String_t* L_82;
			L_82 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_81, NULL);
			NullCheck(L_80);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_80, L_82);
		}

IL_020e_1:
		{
			// if (_uIElements.MaxScoreFinalLvl.Length == 2 && !maxScoreMoreThanZero)
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_83 = V_1;
			NullCheck(L_83);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_84 = (&L_83->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_85;
			L_85 = UIElements_get_MaxScoreFinalLvl_mB8B2F963AC61C9D1190D5C846A4BEAF8B73FFA90_inline(L_84, NULL);
			NullCheck(L_85);
			if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_85)->max_length))) == ((uint32_t)2))))
			{
				goto IL_0260_1;
			}
		}
		{
			bool L_86 = __this->___U3CmaxScoreMoreThanZeroU3E5__4_6;
			if (L_86)
			{
				goto IL_0260_1;
			}
		}
		{
			// _uIElements.MaxScoreFinalLvl[0].text = scoreValue.ToString();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_87 = V_1;
			NullCheck(L_87);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_88 = (&L_87->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_89;
			L_89 = UIElements_get_MaxScoreFinalLvl_mB8B2F963AC61C9D1190D5C846A4BEAF8B73FFA90_inline(L_88, NULL);
			NullCheck(L_89);
			int32_t L_90 = 0;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
			int32_t* L_92 = (&__this->___U3CscoreValueU3E5__2_4);
			String_t* L_93;
			L_93 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_92, NULL);
			NullCheck(L_91);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_91, L_93);
			// _uIElements.MaxScoreFinalLvl[1].text = scoreValue.ToString();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_94 = V_1;
			NullCheck(L_94);
			UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* L_95 = (&L_94->____uIElements_13);
			TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_96;
			L_96 = UIElements_get_MaxScoreFinalLvl_mB8B2F963AC61C9D1190D5C846A4BEAF8B73FFA90_inline(L_95, NULL);
			NullCheck(L_96);
			int32_t L_97 = 1;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
			int32_t* L_99 = (&__this->___U3CscoreValueU3E5__2_4);
			String_t* L_100;
			L_100 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_99, NULL);
			NullCheck(L_98);
			VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_98, L_100);
		}

IL_0260_1:
		{
			// while (scoreMoreThanZero ?  scoreValue < _score.CurrentLvlScore : scoreValue > _score.CurrentLvlScore)
			bool L_101 = __this->___U3CscoreMoreThanZeroU3E5__3_5;
			if (L_101)
			{
				goto IL_027d_1;
			}
		}
		{
			int32_t L_102 = __this->___U3CscoreValueU3E5__2_4;
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_103 = V_1;
			NullCheck(L_103);
			Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* L_104 = L_103->____score_9;
			NullCheck(L_104);
			int32_t L_105;
			L_105 = Score_get_CurrentLvlScore_m99AC33C103D3D790C0D25B0DA38E9D0D5F0FEB6A_inline(L_104, NULL);
			G_B22_0 = ((((int32_t)L_102) > ((int32_t)L_105))? 1 : 0);
			goto IL_0290_1;
		}

IL_027d_1:
		{
			int32_t L_106 = __this->___U3CscoreValueU3E5__2_4;
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_107 = V_1;
			NullCheck(L_107);
			Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* L_108 = L_107->____score_9;
			NullCheck(L_108);
			int32_t L_109;
			L_109 = Score_get_CurrentLvlScore_m99AC33C103D3D790C0D25B0DA38E9D0D5F0FEB6A_inline(L_108, NULL);
			G_B22_0 = ((((int32_t)L_106) < ((int32_t)L_109))? 1 : 0);
		}

IL_0290_1:
		{
			if (G_B22_0)
			{
				goto IL_012f_1;
			}
		}
		{
			// OnFinishScoreCalculating?.Invoke();
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_110 = V_1;
			NullCheck(L_110);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_111 = L_110->___OnFinishScoreCalculating_6;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_112 = L_111;
			G_B24_0 = L_112;
			if (L_112)
			{
				G_B25_0 = L_112;
				goto IL_02a1_1;
			}
		}
		{
			goto IL_02a6_1;
		}

IL_02a1_1:
		{
			NullCheck(G_B25_0);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B25_0, NULL);
		}

IL_02a6_1:
		{
			// _isCalculating = false;
			UIManager_tAE67F7597D2C1CAF208B11139E93B905056E88DA* L_113 = V_1;
			NullCheck(L_113);
			L_113->____isCalculating_14 = (bool)0;
			goto IL_02c8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02af;
		}
		throw e;
	}

CATCH_02af:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_114 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_115 = V_8;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_114, L_115, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02db;
	}// end catch (depth: 1)

IL_02c8:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_116 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_116, NULL);
	}

IL_02db:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCalculateScoreU3Ed__42_MoveNext_mE3AF5599DFA8B0A651157754AD40678B8BE2A1F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16*>(__this + _offset);
	U3CCalculateScoreU3Ed__42_MoveNext_mE3AF5599DFA8B0A651157754AD40678B8BE2A1F4(_thisAdjusted, method);
}
// System.Void QuizCinema.UIManager/<CalculateScore>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalculateScoreU3Ed__42_SetStateMachine_m8D616596667DCD79AB74BFC88BF10AF8321F40FE (U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskMethodBuilder_SetStateMachine_m466E6779CB9DEC814C0A59E7766D95EC2C3268CF(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCalculateScoreU3Ed__42_SetStateMachine_m8D616596667DCD79AB74BFC88BF10AF8321F40FE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16*>(__this + _offset);
	U3CCalculateScoreU3Ed__42_SetStateMachine_m8D616596667DCD79AB74BFC88BF10AF8321F40FE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color QuizCinema.UIManagerParameters::get_CorrectBGColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_CorrectBGColor_m4ED8F19C9062CBC622D16474AA58B40A9C8C4C73 (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) 
{
	{
		// public Color CorrectBGColor => _correctBackgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____correctBackgroundColor_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_CorrectBGColor_m4ED8F19C9062CBC622D16474AA58B40A9C8C4C73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = UIManagerParameters_get_CorrectBGColor_m4ED8F19C9062CBC622D16474AA58B40A9C8C4C73_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Color QuizCinema.UIManagerParameters::get_InCorrectBGColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_InCorrectBGColor_mC491D62BBF75593736CEF96195BEC909DD7B96B1 (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) 
{
	{
		// public Color InCorrectBGColor => _inCorrectBackgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____inCorrectBackgroundColor_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_InCorrectBGColor_mC491D62BBF75593736CEF96195BEC909DD7B96B1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = UIManagerParameters_get_InCorrectBGColor_mC491D62BBF75593736CEF96195BEC909DD7B96B1_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Color QuizCinema.UIManagerParameters::get_FinalBGColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_FinalBGColor_m04DF8E6F4E27B17AA842E52694A303AAD8631A76 (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) 
{
	{
		// public Color FinalBGColor => _finalBackgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____finalBackgroundColor_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_FinalBGColor_m04DF8E6F4E27B17AA842E52694A303AAD8631A76_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = UIManagerParameters_get_FinalBGColor_m04DF8E6F4E27B17AA842E52694A303AAD8631A76_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UI.Image QuizCinema.UIResultBetweenQuestion::get_LikeImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* UIResultBetweenQuestion_get_LikeImage_m8C9F27FE01AF59D020B3577D3DD3AC264883381A (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) 
{
	{
		// public Image LikeImage { get { return _likeImage; } set { _likeImage = value; } }
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____likeImage_30;
		return L_0;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::set_LikeImage(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_set_LikeImage_mB6BDC23583C56427010488A81BBFFCD914C2FCCB (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___value0, const RuntimeMethod* method) 
{
	{
		// public Image LikeImage { get { return _likeImage; } set { _likeImage = value; } }
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___value0;
		__this->____likeImage_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____likeImage_30), (void*)L_0);
		// public Image LikeImage { get { return _likeImage; } set { _likeImage = value; } }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_Start_m57E2260D61276F31499C1E72D13BF47A8C95ACFD (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResultBetweenQuestion_OnChangeLanguage_m3D05D964323177EF93AACB1675109AE7D0582C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResultBetweenQuestion_OnCreateAnswers_m3EF8E1C7BC82A934321B8CC4E0F0D70ED4FEB0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResultBetweenQuestion_UpdateCurrentAnswerList_m965B8BD0EBB83D4B30B1FE2F9B96008104DD1EEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResultBetweenQuestion_UpdateQuestionAnswer_m5697A89207D071C8F825EC75A2283C6A706434B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DD5A5BB9F3692289956341ECACEDF66D82419F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _indexLang = PlayerPrefs.GetInt("IndexLanguageSave");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1DD5A5BB9F3692289956341ECACEDF66D82419F1, NULL);
		__this->____indexLang_34 = L_0;
		// AnswerData.UpdateQuestionAnswer += UpdateQuestionAnswer;
		Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF* L_1 = (Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF*)il2cpp_codegen_object_new(Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mC8B1635B2C9CFD175F035D7F75E9C38A3D05C511(L_1, __this, (intptr_t)((void*)UIResultBetweenQuestion_UpdateQuestionAnswer_m5697A89207D071C8F825EC75A2283C6A706434B9_RuntimeMethod_var), NULL);
		AnswerData_add_UpdateQuestionAnswer_mBB084C7F9071F7552E95C954E74B0CB32848827F(L_1, NULL);
		// AnswersMethods.Instance.OnCreateAnswers += OnCreateAnswers;
		AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* L_2;
		L_2 = SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_inline(SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_RuntimeMethod_var);
		Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E* L_3 = (Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E*)il2cpp_codegen_object_new(Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mB00C42A8E0C93FD62B267E502BD46EFADC2F0724(L_3, __this, (intptr_t)((void*)UIResultBetweenQuestion_OnCreateAnswers_m3EF8E1C7BC82A934321B8CC4E0F0D70ED4FEB0C1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AnswersMethods_add_OnCreateAnswers_m8E3B593EAEDFC1C3D8DF226775A9A97731A80927(L_2, L_3, NULL);
		// QuestionMethods.Instance.CurrentAnswerList += UpdateCurrentAnswerList;
		QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* L_4;
		L_4 = SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_inline(SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_RuntimeMethod_var);
		Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268* L_5 = (Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268*)il2cpp_codegen_object_new(Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m29740803FC0F0FE849C272CD791E9B2FFB63C35B(L_5, __this, (intptr_t)((void*)UIResultBetweenQuestion_UpdateCurrentAnswerList_m965B8BD0EBB83D4B30B1FE2F9B96008104DD1EEA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		QuestionMethods_add_CurrentAnswerList_mFEF928FF314E7242D17B4E9FD82A0FECEC1C4C9B(L_4, L_5, NULL);
		// if (LanguageChanger.Instance != null)
		LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* L_6;
		L_6 = SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_inline(SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// LanguageChanger.Instance.OnChangeLanguage += OnChangeLanguage;
		LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* L_8;
		L_8 = SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_inline(SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, __this, (intptr_t)((void*)UIResultBetweenQuestion_OnChangeLanguage_m3D05D964323177EF93AACB1675109AE7D0582C1C_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		LanguageChanger_add_OnChangeLanguage_mC0C105F259806F931EE32B753C1BF5192B13C499(L_8, L_9, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::OnChangeLanguage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_OnChangeLanguage_m3D05D964323177EF93AACB1675109AE7D0582C1C (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_OnDestroy_m12D65623EBF80F57CD09624DB7E38FC4DDECC2DD (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResultBetweenQuestion_OnChangeLanguage_m3D05D964323177EF93AACB1675109AE7D0582C1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResultBetweenQuestion_OnCreateAnswers_m3EF8E1C7BC82A934321B8CC4E0F0D70ED4FEB0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResultBetweenQuestion_UpdateCurrentAnswerList_m965B8BD0EBB83D4B30B1FE2F9B96008104DD1EEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIResultBetweenQuestion_UpdateQuestionAnswer_m5697A89207D071C8F825EC75A2283C6A706434B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnswerData.UpdateQuestionAnswer -= UpdateQuestionAnswer;
		Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF* L_0 = (Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF*)il2cpp_codegen_object_new(Action_1_t3D87F1A7142DC467883661DD0AC7328E7AA790FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mC8B1635B2C9CFD175F035D7F75E9C38A3D05C511(L_0, __this, (intptr_t)((void*)UIResultBetweenQuestion_UpdateQuestionAnswer_m5697A89207D071C8F825EC75A2283C6A706434B9_RuntimeMethod_var), NULL);
		AnswerData_remove_UpdateQuestionAnswer_m942E7856DF18D39A402BBBEEF3A13D1539B23D6B(L_0, NULL);
		// AnswersMethods.Instance.OnCreateAnswers -= OnCreateAnswers;
		AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* L_1;
		L_1 = SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_inline(SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_RuntimeMethod_var);
		Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E* L_2 = (Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E*)il2cpp_codegen_object_new(Action_1_t08C2EA1E8684AE49711B6B57CE3E8C9C14032F8E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mB00C42A8E0C93FD62B267E502BD46EFADC2F0724(L_2, __this, (intptr_t)((void*)UIResultBetweenQuestion_OnCreateAnswers_m3EF8E1C7BC82A934321B8CC4E0F0D70ED4FEB0C1_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AnswersMethods_remove_OnCreateAnswers_m8153875A29F5002D4656687943FEDFDCE40AAE39(L_1, L_2, NULL);
		// QuestionMethods.Instance.CurrentAnswerList -= UpdateCurrentAnswerList;
		QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* L_3;
		L_3 = SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_inline(SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_RuntimeMethod_var);
		Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268* L_4 = (Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268*)il2cpp_codegen_object_new(Action_1_t015E8EBD9D981A34B279746C8F50B802E0052268_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m29740803FC0F0FE849C272CD791E9B2FFB63C35B(L_4, __this, (intptr_t)((void*)UIResultBetweenQuestion_UpdateCurrentAnswerList_m965B8BD0EBB83D4B30B1FE2F9B96008104DD1EEA_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		QuestionMethods_remove_CurrentAnswerList_mA478A7B9CC430266860E99CD8C06839F77231DFB(L_3, L_4, NULL);
		// if (LanguageChanger.Instance != null)
		LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* L_5;
		L_5 = SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_inline(SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// LanguageChanger.Instance.OnChangeLanguage -= OnChangeLanguage;
		LanguageChanger_tAF75091DE9CC88C61375CDED301D604992D866A1* L_7;
		L_7 = SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_inline(SingletonBase_1_get_Instance_m5E5EE10119829B513926F5A8B17B9F77E1CA758B_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)UIResultBetweenQuestion_OnChangeLanguage_m3D05D964323177EF93AACB1675109AE7D0582C1C_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		LanguageChanger_remove_OnChangeLanguage_mD374673C8A2408825825C8E1BEFE136D148A5C89(L_7, L_8, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::UpdateQuestionAnswer(QuizCinema.AnswerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_UpdateQuestionAnswer_m5697A89207D071C8F825EC75A2283C6A706434B9 (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* ___answerData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::OnCorrectAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_OnCorrectAnswer_mCF0AD07AB0F8C5513C8DAEE0CE9C4291E019984C (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAAB21604FC33D94DD8BA80DBB7B9A0FD7357B913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DD5A5BB9F3692289956341ECACEDF66D82419F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC71793E357F226512B24047321A4DD21F6DE08B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _indexLang = PlayerPrefs.GetInt("IndexLanguageSave");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1DD5A5BB9F3692289956341ECACEDF66D82419F1, NULL);
		__this->____indexLang_34 = L_0;
		// CorrectSetActive(true);
		UIResultBetweenQuestion_CorrectSetActive_m3CBFF1AB22EE902FC7D52D3A4476722A134D5921(__this, (bool)1, NULL);
		// Debug.Log("ONCORRECTANSWERS");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCC71793E357F226512B24047321A4DD21F6DE08B, NULL);
		// if (_currentQuestion._answerType == AnswerType.Single && _currentQuestion.IndexPrefab != 3)
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_1 = __this->____currentQuestion_21;
		NullCheck(L_1);
		int32_t L_2 = L_1->____answerType_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_00b7;
		}
	}
	{
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_3 = __this->____currentQuestion_21;
		NullCheck(L_3);
		int32_t L_4 = L_3->___IndexPrefab_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		// _correctAnswer1TextInfo.text = _translate.TextAnswer[_indexLang] + $" \"{_listAnswersCorrect[0].InfoList[_indexLang]}\" " + _translate.TextCorrect[_indexLang];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->____correctAnswer1TextInfo_15;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* L_8 = __this->____translate_4;
		NullCheck(L_8);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9;
		L_9 = TranslateInfo_get_TextAnswer_m8BA870CB6868BFF256BE70CD896327240667FA67_inline(L_8, NULL);
		int32_t L_10 = __this->____indexLang_34;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_9, L_10, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_7;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* L_14 = __this->____listAnswersCorrect_24;
		NullCheck(L_14);
		Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* L_15;
		L_15 = List_1_get_Item_mAAB21604FC33D94DD8BA80DBB7B9A0FD7357B913(L_14, 0, List_1_get_Item_mAAB21604FC33D94DD8BA80DBB7B9A0FD7357B913_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = L_15->___InfoList_0;
		int32_t L_17 = __this->____indexLang_34;
		NullCheck(L_16);
		String_t* L_18;
		L_18 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_16, L_17, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_18);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_13;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* L_21 = __this->____translate_4;
		NullCheck(L_21);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22;
		L_22 = TranslateInfo_get_TextCorrect_mAB773E07E6EC746F0611BA7419CEC973C6AA9AB1_inline(L_21, NULL);
		int32_t L_23 = __this->____indexLang_34;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_22, L_23, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_24);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_24);
		String_t* L_25;
		L_25 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_25);
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::CorrectSetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_CorrectSetActive_m3CBFF1AB22EE902FC7D52D3A4476722A134D5921 (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, bool ___correct0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE343BE3FD1C8B5C0391459912049869035D1CE91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF4C2071D961560A1F0EF55E53D26B98CBEA4F12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1F6A209EC1BBB5FD53A5D3C64870ED72DBFA9884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3F8DF07760CFCAE8BFC782AB64A814D658C55490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D V_1;
	memset((&V_1), 0, sizeof(V_1));
	AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* V_2 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B11_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B10_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B12_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B12_1 = NULL;
	{
		// var countCorrectAnswer = 0;
		V_0 = 0;
		// if (_currentQuestion._answerType == AnswerType.Multiply)
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_0 = __this->____currentQuestion_21;
		NullCheck(L_0);
		int32_t L_1 = L_0->____answerType_1;
		if (L_1)
		{
			goto IL_006a;
		}
	}
	{
		// foreach (var answer in _listAnswersPicked)
		List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* L_2 = __this->____listAnswersPicked_23;
		NullCheck(L_2);
		Enumerator_t21A38549336E6CB32FEFABC79BB8C27DFC23DD7D L_3;
		L_3 = List_1_GetEnumerator_m3F8DF07760CFCAE8BFC782AB64A814D658C55490(L_2, List_1_GetEnumerator_m3F8DF07760CFCAE8BFC782AB64A814D658C55490_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE343BE3FD1C8B5C0391459912049869035D1CE91((&V_1), Enumerator_Dispose_mE343BE3FD1C8B5C0391459912049869035D1CE91_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_001d_1:
			{
				// foreach (var answer in _listAnswersPicked)
				AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* L_4;
				L_4 = Enumerator_get_Current_m1F6A209EC1BBB5FD53A5D3C64870ED72DBFA9884_inline((&V_1), Enumerator_get_Current_m1F6A209EC1BBB5FD53A5D3C64870ED72DBFA9884_RuntimeMethod_var);
				V_2 = L_4;
				// if (answer.AnswerIndex == _correctAnswersIndex[0] || answer.AnswerIndex == _correctAnswersIndex[1])
				AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* L_5 = V_2;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = AnswerData_get_AnswerIndex_mAC0837128E53EB1B19381F8CFEDDEB33A1517CF9_inline(L_5, NULL);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = __this->____correctAnswersIndex_26;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_7, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				if ((((int32_t)L_6) == ((int32_t)L_8)))
				{
					goto IL_004d_1;
				}
			}
			{
				AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* L_9 = V_2;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = AnswerData_get_AnswerIndex_mAC0837128E53EB1B19381F8CFEDDEB33A1517CF9_inline(L_9, NULL);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = __this->____correctAnswersIndex_26;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_11, 1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
				{
					goto IL_0051_1;
				}
			}

IL_004d_1:
			{
				// countCorrectAnswer++;
				int32_t L_13 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0051_1:
			{
				// foreach (var answer in _listAnswersPicked)
				bool L_14;
				L_14 = Enumerator_MoveNext_mBF4C2071D961560A1F0EF55E53D26B98CBEA4F12((&V_1), Enumerator_MoveNext_mBF4C2071D961560A1F0EF55E53D26B98CBEA4F12_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// _bgResultPanel.sprite = correct ? _correctBg : _inCorrectBg;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->____bgResultPanel_11;
		bool L_16 = ___correct0;
		G_B10_0 = L_15;
		if (L_16)
		{
			G_B11_0 = L_15;
			goto IL_007b;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->____inCorrectBg_9;
		G_B12_0 = L_17;
		G_B12_1 = G_B10_0;
		goto IL_0081;
	}

IL_007b:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = __this->____correctBg_8;
		G_B12_0 = L_18;
		G_B12_1 = G_B11_0;
	}

IL_0081:
	{
		NullCheck(G_B12_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B12_1, G_B12_0, NULL);
		// if (_currentQuestion._answerType == AnswerType.Multiply && !correct && countCorrectAnswer == 1)
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_19 = __this->____currentQuestion_21;
		NullCheck(L_19);
		int32_t L_20 = L_19->____answerType_1;
		if (L_20)
		{
			goto IL_00ab;
		}
	}
	{
		bool L_21 = ___correct0;
		if (L_21)
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_00ab;
		}
	}
	{
		// _bgResultPanel.sprite = _almostCorrectBg;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = __this->____bgResultPanel_11;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24 = __this->____almostCorrectBg_10;
		NullCheck(L_23);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_23, L_24, NULL);
	}

IL_00ab:
	{
		// _buttonCorrectNext[0].enabled = true;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_25 = __this->____buttonCorrectNext_14;
		NullCheck(L_25);
		int32_t L_26 = 0;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)1, NULL);
		// _buttonCorrectNext[0].gameObject.SetActive(true);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_28 = __this->____buttonCorrectNext_14;
		NullCheck(L_28);
		int32_t L_29 = 0;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
		// _buttonCorrectNext[1].enabled = true;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_32 = __this->____buttonCorrectNext_14;
		NullCheck(L_32);
		int32_t L_33 = 1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_34, (bool)1, NULL);
		// _buttonCorrectNext[1].gameObject.SetActive(true);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_35 = __this->____buttonCorrectNext_14;
		NullCheck(L_35);
		int32_t L_36 = 1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
		// _textContainerCorrect.SetActive(correct);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->____textContainerCorrect_12;
		bool L_40 = ___correct0;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, L_40, NULL);
		// _textContainerInCorrect.SetActive(!correct);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->____textContainerInCorrect_13;
		bool L_42 = ___correct0;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::OnInCorrectAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_OnInCorrectAnswer_m65C065157E0807A2BE04FB9AF6829CED0ABECEEB (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEBD7BB34FA77E6EB728C8AF72CCA45B1AD507E61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DD5A5BB9F3692289956341ECACEDF66D82419F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ECA28F3A5CE0A36D92DBE09A93274061EE7ECC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _indexLang = PlayerPrefs.GetInt("IndexLanguageSave");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1DD5A5BB9F3692289956341ECACEDF66D82419F1, NULL);
		__this->____indexLang_34 = L_0;
		// Debug.Log("STARTONINCORRECTANSWER! " + _currentQuestion.IndexPrefab);
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_1 = __this->____currentQuestion_21;
		NullCheck(L_1);
		int32_t* L_2 = (&L_1->___IndexPrefab_0);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7ECA28F3A5CE0A36D92DBE09A93274061EE7ECC5, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// CorrectSetActive(false);
		UIResultBetweenQuestion_CorrectSetActive_m3CBFF1AB22EE902FC7D52D3A4476722A134D5921(__this, (bool)0, NULL);
		// if (_currentQuestion.IndexPrefab < 3 && _currentQuestion._answerType == AnswerType.Single)
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_5 = __this->____currentQuestion_21;
		NullCheck(L_5);
		int32_t L_6 = L_5->___IndexPrefab_0;
		if ((((int32_t)L_6) >= ((int32_t)3)))
		{
			goto IL_00c3;
		}
	}
	{
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_7 = __this->____currentQuestion_21;
		NullCheck(L_7);
		int32_t L_8 = L_7->____answerType_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_00c3;
		}
	}
	{
		// _inCorrectAnswer1TextInfo.text = _translate.TextAnswer[_indexLang] + $" \"{_listAnswersPicked[0].InfoText.text}\" " + _translate.TextInCorrect[_indexLang];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->____inCorrectAnswer1TextInfo_16;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* L_12 = __this->____translate_4;
		NullCheck(L_12);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13;
		L_13 = TranslateInfo_get_TextAnswer_m8BA870CB6868BFF256BE70CD896327240667FA67_inline(L_12, NULL);
		int32_t L_14 = __this->____indexLang_34;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_13, L_14, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_11;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* L_18 = __this->____listAnswersPicked_23;
		NullCheck(L_18);
		AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* L_19;
		L_19 = List_1_get_Item_mEBD7BB34FA77E6EB728C8AF72CCA45B1AD507E61(L_18, 0, List_1_get_Item_mEBD7BB34FA77E6EB728C8AF72CCA45B1AD507E61_RuntimeMethod_var);
		NullCheck(L_19);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20;
		L_20 = AnswerData_get_InfoText_mBFB344640BDB41A66ED842EEF407907BB25E0A20_inline(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_17;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* L_24 = __this->____translate_4;
		NullCheck(L_24);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25;
		L_25 = TranslateInfo_get_TextInCorrect_m670F59EB429C23267B09D752E21AA3B4D5F2EA72_inline(L_24, NULL);
		int32_t L_26 = __this->____indexLang_34;
		NullCheck(L_25);
		String_t* L_27;
		L_27 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_25, L_26, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_27);
		String_t* L_28;
		L_28 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_23, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_28);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::UpdateCurrentAnswerList(System.Collections.Generic.List`1<QuizCinema.AnswerData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_UpdateCurrentAnswerList_m965B8BD0EBB83D4B30B1FE2F9B96008104DD1EEA (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* ___answers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F5AD4234F172BD410B6C2EF2AE60DF3B2E465CE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// _listAnswersPicked = answers;
		List_1_tE4A1844AAB27F5394BA6FEC588F2F7DC49F46139* L_0 = ___answers0;
		__this->____listAnswersPicked_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listAnswersPicked_23), (void*)L_0);
		// if (_flagShowPanelResult == false)
		bool L_1 = __this->____flagShowPanelResult_33;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// var _isCorrectAnswer = QuestionMethods.Instance.CheckAnswers();
		QuestionMethods_tB8D162049B7881FD1D4598ADCE4BD7C500D43EBE* L_2;
		L_2 = SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_inline(SingletonBase_1_get_Instance_mE3F35B0A3211184EBFD810852D1E18FF319AE0A1_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = QuestionMethods_CheckAnswers_m79E648C97294BC686421B3F758E6D4D8E2F0D636(L_2, NULL);
		V_0 = L_3;
		// Debug.Log("ISCORRECTANSWER  " + _isCorrectAnswer);
		String_t* L_4;
		L_4 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0F5AD4234F172BD410B6C2EF2AE60DF3B2E465CE, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// if (_isCorrectAnswer)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// OnCorrectAnswer();
		UIResultBetweenQuestion_OnCorrectAnswer_mCF0AD07AB0F8C5513C8DAEE0CE9C4291E019984C(__this, NULL);
		goto IL_0041;
	}

IL_003b:
	{
		// OnInCorrectAnswer();
		UIResultBetweenQuestion_OnInCorrectAnswer_m65C065157E0807A2BE04FB9AF6829CED0ABECEEB(__this, NULL);
	}

IL_0041:
	{
		// _flagShowPanelResult = true;
		__this->____flagShowPanelResult_33 = (bool)1;
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::OnCreateAnswers(QuizCinema.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_OnCreateAnswers_m3EF8E1C7BC82A934321B8CC4E0F0D70ED4FEB0C1 (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ___question0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7B94243ADA7B76CBE0F3AEA4B027DCABD865A90D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5478ACF7733D98CB1118FF71563B0EE2528B089E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDF9F4EBDDE526E60346AB3D0E3CB099CF034703);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _flagShowPanelResult = false;
		__this->____flagShowPanelResult_33 = (bool)0;
		// _listAnswersCorrect.Clear();
		List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* L_0 = __this->____listAnswersCorrect_24;
		NullCheck(L_0);
		List_1_Clear_m5478ACF7733D98CB1118FF71563B0EE2528B089E_inline(L_0, List_1_Clear_m5478ACF7733D98CB1118FF71563B0EE2528B089E_RuntimeMethod_var);
		// Debug.Log("OnCreateAnswers");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFDF9F4EBDDE526E60346AB3D0E3CB099CF034703, NULL);
		// _currentQuestion = question;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_1 = ___question0;
		__this->____currentQuestion_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentQuestion_21), (void*)L_1);
		// _correctAnswersIndex = _currentQuestion.GetCorrectAnswers();
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_2 = __this->____currentQuestion_21;
		NullCheck(L_2);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3;
		L_3 = Question_GetCorrectAnswers_m458DDA420F0F9ECB715B910BE5ADF58E8484B206(L_2, NULL);
		__this->____correctAnswersIndex_26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____correctAnswersIndex_26), (void*)L_3);
		// for (int i = 0; i < _correctAnswersIndex.Count; i++)
		V_0 = 0;
		goto IL_005a;
	}

IL_0038:
	{
		// _listAnswersCorrect.Add(question.Answers[_correctAnswersIndex[i]]);
		List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* L_4 = __this->____listAnswersCorrect_24;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_5 = ___question0;
		NullCheck(L_5);
		AnswerU5BU5D_t0C8C1D0CA70C782125A0B4A2206C71BBAECE1D99* L_6 = L_5->___Answers_11;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = __this->____correctAnswersIndex_26;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_7, L_8, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_10 = L_9;
		Answer_t31F741E2F523E7DF4C3025512FD0DCF7F810350E* L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		List_1_Add_m7B94243ADA7B76CBE0F3AEA4B027DCABD865A90D_inline(L_4, L_11, List_1_Add_m7B94243ADA7B76CBE0F3AEA4B027DCABD865A90D_RuntimeMethod_var);
		// for (int i = 0; i < _correctAnswersIndex.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < _correctAnswersIndex.Count; i++)
		int32_t L_13 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = __this->____correctAnswersIndex_26;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_14, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0038;
		}
	}
	{
		// _listAnswersInCorrect = AnswersMethods.Instance.GetInCorrectAnswers(_currentQuestion);
		AnswersMethods_t6246E549DF4302149ADC784DE8C96EFFCB89F11D* L_16;
		L_16 = SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_inline(SingletonBase_1_get_Instance_m309FC0431D0561C22A3A998C9D60F5A39164B7C3_RuntimeMethod_var);
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_17 = __this->____currentQuestion_21;
		NullCheck(L_16);
		List_1_tD5E3DB49E4D539087D4BC46D8BE31045ACA3F17F* L_18;
		L_18 = AnswersMethods_GetInCorrectAnswers_m201DDD8AEA5653F7A2BF74F8B6CB0F79974B5ED2(L_16, L_17, NULL);
		__this->____listAnswersInCorrect_25 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listAnswersInCorrect_25), (void*)L_18);
		// StartCoroutine(SetCorrectQuestionText(question));
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_19 = ___question0;
		RuntimeObject* L_20;
		L_20 = UIResultBetweenQuestion_SetCorrectQuestionText_mC345606F7A7CF3376117D99B14C1EB30AF980326(__this, L_19, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_21;
		L_21 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_20, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator QuizCinema.UIResultBetweenQuestion::SetCorrectQuestionText(QuizCinema.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIResultBetweenQuestion_SetCorrectQuestionText_mC345606F7A7CF3376117D99B14C1EB30AF980326 (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ___question0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* L_0 = (U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC*)il2cpp_codegen_object_new(U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSetCorrectQuestionTextU3Ed__44__ctor_mCC3CD162FF98ED708CED18DB3A92792122FDC8CF(L_0, 0, NULL);
		U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* L_2 = L_1;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_3 = ___question0;
		NullCheck(L_2);
		L_2->___question_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___question_3), (void*)L_3);
		return L_2;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::SetAllInfoQuestion(QuizCinema.Question)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_SetAllInfoQuestion_m592C59E8F331A0E541DBA10C78A3C8766AC7C774 (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* ___question0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F45B89D4953702A98AE564906BB6F8C450C6ACF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral162C9CB85A0E3D0611ACB5AD685F7AF02FD4C0DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5871CEA4D20E8EEAE5F90720C75A6AC68A312523);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0B369294598689122735B6050A7AF7B142B3981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		// Debug.Log("SetCorrectQuestionText");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA0B369294598689122735B6050A7AF7B142B3981, NULL);
		// _flagLike = false;
		__this->____flagLike_31 = (bool)0;
		// string questionText = question.ListInfoQuestion[_indexLang];
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_0 = ___question0;
		NullCheck(L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0->___ListInfoQuestion_2;
		int32_t L_2 = __this->____indexLang_34;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_1, L_2, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		// string correctText = null;
		V_0 = (String_t*)NULL;
		// var mas = questionText.Split('\n');
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_3, ((int32_t)10), 0, NULL);
		// int countChar = 0;
		V_1 = 0;
		// foreach (var sentence in mas)
		V_3 = L_4;
		V_4 = 0;
		goto IL_0074;
	}

IL_0034:
	{
		// foreach (var sentence in mas)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = L_8;
		// if (countChar + sentence.Length < _limitSymbolInQuestion)
		int32_t L_9 = V_1;
		String_t* L_10 = V_5;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		int32_t L_12 = __this->____limitSymbolInQuestion_32;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_9, L_11))) >= ((int32_t)L_12)))
		{
			goto IL_0060;
		}
	}
	{
		// countChar += sentence.Length;
		int32_t L_13 = V_1;
		String_t* L_14 = V_5;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, L_15));
		// correctText += sentence;
		String_t* L_16 = V_0;
		String_t* L_17 = V_5;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, L_17, NULL);
		V_0 = L_18;
		goto IL_006e;
	}

IL_0060:
	{
		// correctText += "...";
		String_t* L_19 = V_0;
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		V_0 = L_20;
		// break;
		goto IL_007b;
	}

IL_006e:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0074:
	{
		// foreach (var sentence in mas)
		int32_t L_22 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0034;
		}
	}

IL_007b:
	{
		// if (question.ListDescriptionFilm.Count >=2)
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_24 = ___question0;
		NullCheck(L_24);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = L_24->___ListDescriptionFilm_6;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_25, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)2)))
		{
			goto IL_00a5;
		}
	}
	{
		// _textCinemaInfo.text = question.ListDescriptionFilm[_indexLang];
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_27 = __this->____textCinemaInfo_18;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_28 = ___question0;
		NullCheck(L_28);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29 = L_28->___ListDescriptionFilm_6;
		int32_t L_30 = __this->____indexLang_34;
		NullCheck(L_29);
		String_t* L_31;
		L_31 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_29, L_30, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_27, L_31);
	}

IL_00a5:
	{
		// Sprite sprite = Resources.Load($"Posters/{question._cadrCinemaName}_poster", typeof(Sprite)) as Sprite;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_32 = ___question0;
		NullCheck(L_32);
		String_t* L_33 = L_32->____cadrCinemaName_9;
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral162C9CB85A0E3D0611ACB5AD685F7AF02FD4C0DA, L_33, _stringLiteral0F45B89D4953702A98AE564906BB6F8C450C6ACF, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_37;
		L_37 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(L_34, L_36, NULL);
		V_2 = ((Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)IsInstSealed((RuntimeObject*)L_37, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_il2cpp_TypeInfo_var));
		// Sprite sprite2 = Resources.Load($"Directors/{question.Director}", typeof(Sprite)) as Sprite;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_38 = ___question0;
		NullCheck(L_38);
		String_t* L_39 = L_38->___Director_7;
		String_t* L_40;
		L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5871CEA4D20E8EEAE5F90720C75A6AC68A312523, L_39, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_0_0_0_var) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_43;
		L_43 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(L_40, L_42, NULL);
		// _directorName = question.Director;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_44 = ___question0;
		NullCheck(L_44);
		String_t* L_45 = L_44->___Director_7;
		__this->____directorName_20 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____directorName_20), (void*)L_45);
		// _directorImage.sprite = sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = __this->____directorImage_19;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_47 = V_2;
		NullCheck(L_46);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_46, L_47, NULL);
		// if (_indexLang == 0)
		int32_t L_48 = __this->____indexLang_34;
		if (L_48)
		{
			goto IL_0121;
		}
	}
	{
		// _textCinemaName.text = question._cadrCinemaName;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = __this->____textCinemaName_17;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_50 = ___question0;
		NullCheck(L_50);
		String_t* L_51 = L_50->____cadrCinemaName_9;
		NullCheck(L_49);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_49, L_51);
		return;
	}

IL_0121:
	{
		// _textCinemaName.text = question._cadrCinemaNameTranslateRu;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_52 = __this->____textCinemaName_17;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_53 = ___question0;
		NullCheck(L_53);
		String_t* L_54 = L_53->____cadrCinemaNameTranslateRu_10;
		NullCheck(L_52);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_52, L_54);
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::PressLikeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion_PressLikeButton_mC677D832B16FE48833981F1E232F57572C7DD97D (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonBase_1_get_Instance_mC6F46636F67A8B91A92901EC1BE4F9CE08FC8538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74C039E1F2A42CE578A8A5F72A7058047403F9EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioManager.Instance.PlaySound(_clickSFX);
		AudioManager_tABAC9F89292153357C0838100E0C00253A6EF2DA* L_0;
		L_0 = SingletonBase_1_get_Instance_mC6F46636F67A8B91A92901EC1BE4F9CE08FC8538_inline(SingletonBase_1_get_Instance_mC6F46636F67A8B91A92901EC1BE4F9CE08FC8538_RuntimeMethod_var);
		NullCheck(L_0);
		AudioManager_PlaySound_mCC2BF137FEDB40129B437546379C9757A5569E80(L_0, _stringLiteral74C039E1F2A42CE578A8A5F72A7058047403F9EF, NULL);
		// _flagLike = !_flagLike;
		bool L_1 = __this->____flagLike_31;
		__this->____flagLike_31 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// LikeFilm.PressButtonLike(_likeImage, _currentQuestion, _flagLike);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->____likeImage_30;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_3 = __this->____currentQuestion_21;
		bool L_4 = __this->____flagLike_31;
		LikeFilm_PressButtonLike_m7AA69ACFBCB2ECC70FAF9B1F5734AA934AA77659(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIResultBetweenQuestion__ctor_mB28D0069107C373B580A22A41CA6B7BCA891A41C (UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* __this, const RuntimeMethod* method) 
{
	{
		// private int _limitSymbolInQuestion = 200;
		__this->____limitSymbolInQuestion_32 = ((int32_t)200);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetCorrectQuestionTextU3Ed__44__ctor_mCC3CD162FF98ED708CED18DB3A92792122FDC8CF (U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetCorrectQuestionTextU3Ed__44_System_IDisposable_Dispose_mE788645AF3719DF7F7D3D5FA91B95A3630D79E49 (U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetCorrectQuestionTextU3Ed__44_MoveNext_m7013CE47B7B6DDE95BA45254C27C1C14A03A6E2F (U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24EEDA3DF4AEEE5A4BA37752F41006225C338D45);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("SetCorrectQuestionTextDoTimera");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral24EEDA3DF4AEEE5A4BA37752F41006225C338D45, NULL);
		// yield return new WaitForSeconds(GameUtility.ResolutionDelayTime);
		float L_4;
		L_4 = GameUtility_get_ResolutionDelayTime_mACAFBD1075CCCD6BDC07A59753AB0B28217A955C(NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0041:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _textQuestionNumberResult[0].text = _textQuestionNumberInLvl.text;
		UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* L_6 = V_1;
		NullCheck(L_6);
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_7 = L_6->____textQuestionNumberResult_6;
		NullCheck(L_7);
		int32_t L_8 = 0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* L_10 = V_1;
		NullCheck(L_10);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = L_10->____textQuestionNumberInLvl_7;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_11);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_12);
		// _textQuestionNumberResult[1].text = _textQuestionNumberInLvl.text;
		UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* L_13 = V_1;
		NullCheck(L_13);
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_14 = L_13->____textQuestionNumberResult_6;
		NullCheck(L_14);
		int32_t L_15 = 1;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* L_17 = V_1;
		NullCheck(L_17);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = L_17->____textQuestionNumberInLvl_7;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_18);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_19);
		// LikeFilm.SetDefaultValue(_likeImage);
		UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* L_20 = V_1;
		NullCheck(L_20);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = L_20->____likeImage_30;
		LikeFilm_SetDefaultValue_m6BD64C95479EDDEB3413BBC13CFF56A1FEC62C1A(L_21, NULL);
		// SetAllInfoQuestion(question);
		UIResultBetweenQuestion_t5DF49770944C27BB57E7A93BE40B148BD97B1E4D* L_22 = V_1;
		Question_tB07AB7A16A0F5F0188A56070515A3740ABF569F3* L_23 = __this->___question_3;
		NullCheck(L_22);
		UIResultBetweenQuestion_SetAllInfoQuestion_m592C59E8F331A0E541DBA10C78A3C8766AC7C774(L_22, L_23, NULL);
		// }
		return (bool)0;
	}
}
// System.Object QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetCorrectQuestionTextU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8C60A8185DF48691A039244EDA1046D11C44158E (U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetCorrectQuestionTextU3Ed__44_System_Collections_IEnumerator_Reset_m0D4277EBB938EC29FF13E4DE2806F7636C51F4D4 (U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetCorrectQuestionTextU3Ed__44_System_Collections_IEnumerator_Reset_m0D4277EBB938EC29FF13E4DE2806F7636C51F4D4_RuntimeMethod_var)));
	}
}
// System.Object QuizCinema.UIResultBetweenQuestion/<SetCorrectQuestionText>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetCorrectQuestionTextU3Ed__44_System_Collections_IEnumerator_get_Current_m5D8A93C32C22541C14634E5FB0A0D4D523571007 (U3CSetCorrectQuestionTextU3Ed__44_tD6673DE47B099B4663DE7408A8E16F19EBF8ECEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuizCinema.UIStars::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStars_OnEnable_mF93C2FB73B2B4EE52FA108DE4EE4DEE89724F439 (UIStars_t9D1A13951C5DDF7A9381259E36774A9B0C9939DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIStars_OnShowStars_m0C406C85C821DEBC0ECF9803F1D8A32E8A88CB7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameManager.OnFinishGame += OnShowStars;
		GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* L_0 = __this->____gameManager_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)UIStars_OnShowStars_m0C406C85C821DEBC0ECF9803F1D8A32E8A88CB7F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		GameManager_add_OnFinishGame_mCB716B025C28B9B34F0A6CD283B8B2144073DD2F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QuizCinema.UIStars::OnShowStars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStars_OnShowStars_m0C406C85C821DEBC0ECF9803F1D8A32E8A88CB7F (UIStars_t9D1A13951C5DDF7A9381259E36774A9B0C9939DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15D10C2F899620EC2CC14ACFCE5DE170590B3A72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int stars = _gameManager.CalculateLevelStars();
		GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* L_0 = __this->____gameManager_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameManager_CalculateLevelStars_m3140B5CACDB85736A72A809B4DCD238CD4412D71(L_0, NULL);
		V_0 = L_1;
		// Debug.Log("stars UISTARS " + $"{stars}");
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral15D10C2F899620EC2CC14ACFCE5DE170590B3A72, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// _spineAnim.ChangeSkinAnim(stars);
		SpineStarsAnim_tECBD3F5EF852872504A891CEED8E630C86633E5D* L_7 = __this->____spineAnim_7;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		SpineStarsAnim_ChangeSkinAnim_mC3AAE5A961F83C8A55356ABA1A3E4D2440A4DC10(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void QuizCinema.UIStars::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStars_OnDisable_m593B106A6472463DC44D8FB1DF33DA1E4E240DA4 (UIStars_t9D1A13951C5DDF7A9381259E36774A9B0C9939DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIStars_OnShowStars_m0C406C85C821DEBC0ECF9803F1D8A32E8A88CB7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameManager.OnFinishGame -= OnShowStars;
		GameManager_tF68333246DE2F2C63278C918A72E73825A8B7087* L_0 = __this->____gameManager_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)UIStars_OnShowStars_m0C406C85C821DEBC0ECF9803F1D8A32E8A88CB7F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		GameManager_remove_OnFinishGame_m1DF671B2F8D241CCE13AAED2A247CADDC3228EB8(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void QuizCinema.UIStars::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIStars__ctor_mBE376339C9874625990BEECC882D10B709B5FF9B (UIStars_t9D1A13951C5DDF7A9381259E36774A9B0C9939DE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* UIElements_get_ResolutionScreenAnimator_m708F4D5A1683F9D433580D6B55B8DA0DE81FC8D5_inline (UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* __this, const RuntimeMethod* method) 
{
	{
		// public Animator ResolutionScreenAnimator => _resolutionScreenAnimator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____resolutionScreenAnimator_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* MapCompletion_get_LearnSteps_m18FB97210F51345921FEE7A10634BB7060BBFA47_inline (MapCompletion_tA7089843A8C961A6E94A375CA534E43B0F4C2D9A* __this, const RuntimeMethod* method) 
{
	{
		// public bool[] LearnSteps { get { return _learnSteps; } set { _learnSteps = value; } }
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->____learnSteps_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Score_get_CurrentLvlScore_m99AC33C103D3D790C0D25B0DA38E9D0D5F0FEB6A_inline (Score_t61801AF3A1CCD5E9D9954DD5DB4831137E53C96E* __this, const RuntimeMethod* method) 
{
	{
		// public int CurrentLvlScore { get { return _currentLvlScore; } set { _currentLvlScore = value; }}
		int32_t L_0 = __this->____currentLvlScore_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* UIElements_get_ScoreFinalLvl_mE065BA9E13ACA61553122710D4B936114718E485_inline (UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* __this, const RuntimeMethod* method) 
{
	{
		// public TextMeshProUGUI[] ScoreFinalLvl => _scoreFinalLvl;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_0 = __this->____scoreFinalLvl_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* UIElements_get_MaxScoreFinalLvl_mB8B2F963AC61C9D1190D5C846A4BEAF8B73FFA90_inline (UIElements_t5E25D783A2A909DAA397B06057F6022EA2233110* __this, const RuntimeMethod* method) 
{
	{
		// public TextMeshProUGUI[] MaxScoreFinalLvl => _maxScoreFinalLvl;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_0 = __this->____maxScoreFinalLvl_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ex = exception;
		Exception_t* L_1 = ___exception0;
		__this->___ex_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		Exception_t* L_3 = ___exception0;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetException(System.Exception) */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// runnerPromise.SetResult();
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::SetResult() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_CorrectBGColor_m4ED8F19C9062CBC622D16474AA58B40A9C8C4C73_inline (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) 
{
	{
		// public Color CorrectBGColor => _correctBackgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____correctBackgroundColor_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_InCorrectBGColor_mC491D62BBF75593736CEF96195BEC909DD7B96B1_inline (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) 
{
	{
		// public Color InCorrectBGColor => _inCorrectBackgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____inCorrectBackgroundColor_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UIManagerParameters_get_FinalBGColor_m04DF8E6F4E27B17AA842E52694A303AAD8631A76_inline (UIManagerParameters_t0AAC869FA29A140E1504F80BC9503681C3824A68* __this, const RuntimeMethod* method) 
{
	{
		// public Color FinalBGColor => _finalBackgroundColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____finalBackgroundColor_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* TranslateInfo_get_TextAnswer_m8BA870CB6868BFF256BE70CD896327240667FA67_inline (TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> TextAnswer => _textAnswer;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____textAnswer_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* TranslateInfo_get_TextCorrect_mAB773E07E6EC746F0611BA7419CEC973C6AA9AB1_inline (TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> TextCorrect => _textCorrect;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____textCorrect_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnswerData_get_AnswerIndex_mAC0837128E53EB1B19381F8CFEDDEB33A1517CF9_inline (AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* __this, const RuntimeMethod* method) 
{
	{
		// public int AnswerIndex => _answerIndex;
		int32_t L_0 = __this->____answerIndex_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* AnswerData_get_InfoText_mBFB344640BDB41A66ED842EEF407907BB25E0A20_inline (AnswerData_tDE1D5DA26FF0DEB32B0B04218EFDF8AE4D443AA4* __this, const RuntimeMethod* method) 
{
	{
		// public TextMeshProUGUI InfoText => _infoText;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->____infoText_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* TranslateInfo_get_TextInCorrect_m670F59EB429C23267B09D752E21AA3B4D5F2EA72_inline (TranslateInfo_t8DF1C298942878B48C852181762BB3E0CA8B9AD9* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> TextInCorrect => _textInCorrect;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____textInCorrect_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SingletonBase_1_get_Instance_m1ED3EAF4A35C8BFC70B5B846B241BBC1936FFB18_gshared_inline (const RuntimeMethod* method) 
{
	{
		// public static T Instance { get; private set; }
		RuntimeObject* L_0 = ((SingletonBase_1_tBF2BB2ECB4795CB5201820714AFF871DD855FCE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16_m9F105238E53B15FD9F969E6B88359948E3083736_gshared_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CCalculateScoreU3Ed__42_t4C08F1EB3494CF2883D78A67161BFBE2559E3F16*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_MoveNext() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___task0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null)
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}

IL_0014:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (&__this->___task_0);
		RuntimeObject* L_4 = L_3->___source_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_7 = (&__this->___task_0);
		int16_t L_8 = L_7->___token_1;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_8);
		// }
		return;
	}
}
