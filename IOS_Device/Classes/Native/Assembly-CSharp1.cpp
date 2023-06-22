#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<InventoryItem>
struct List_1_tA1E3C55F496F4C3948C06B79F3A45AA85F43A3CA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA;
// System.Threading.Tasks.TaskFactory`1<Firebase.DependencyStatus>
struct TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Photon.Realtime.Player[]
struct PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// ShopItem[]
struct ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// BotGameManager
struct BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DG.Tweening.EaseFunction
struct EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameDataManager
struct GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InventoryItem
struct InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3;
// InventoryItemDatabase
struct InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223;
// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// Photon.Realtime.RoomInfo
struct RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// DG.Tweening.Sequence
struct Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E;
// ShopItemDatabase
struct ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7;
// ShopItemUI
struct ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B;
// ShopUI
struct ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// StartingGameController
struct StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB;
// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// BotGameManager/<Pause>d__26
struct U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888;
// BotGameManager/<StartPreparingTimer>d__25
struct U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B;
// BotGameManager/<StartTimer>d__27
struct U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// CheckAndFixDependenciesFireBase/<>c
struct U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB;
// GameManager/<Pause>d__39
struct U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7;
// GameManager/<StartPreparingTimer>d__38
struct U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370;
// GameManager/<StartTimer>d__40
struct U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A;
// GameManager/<WaitigOpponent>d__32
struct U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD;
// ItemSlot/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_tD403CE44724A458A3FD4A1A2DE09BD6C05D299C3;
// ItemSlot/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tE76B5DDD44CAA206B70064FC5412E29FBFF29F35;
// ItemSlot/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tF294C85C1A410D62438561DC5E4B00311460DA95;
// ItemSlot/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t5251486F89B9B5025FBC82EF2D141A1854EFAF13;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// PushNotificationSender/Data
struct Data_tC64F76CF7B45DCB89D9E50A47752AC6F2E962A22;
// PushNotificationSender/Notification
struct Notification_t6C3CF687F5749FE53F658C999A51F21920560C78;
// PushNotificationSender/RequestData
struct RequestData_tB433A538242D2C3882F169039F9BCA8AECCF96AF;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E;
// ShopItemUI/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846;
// ShopItemUI/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E;
// ShopItemUI/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EquipmentType_t3AC4BB0116145EE1C3A9D845C4DB6CBB92F09C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral08C0C43556B331F5469A94500EB9066A5AC774BA;
IL2CPP_EXTERN_C String_t* _stringLiteral0B2651B110D4413DBC985B4515A72B433092B717;
IL2CPP_EXTERN_C String_t* _stringLiteral19104E5F0E2F5C45A515C649ABB35C380DD5CD74;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral23D2F0E060314855A18458D4B6AAB9B638B8641C;
IL2CPP_EXTERN_C String_t* _stringLiteral30FFA319B7E7ACA3B5491388A400E39F0AFA48CF;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral40C694996C2B9EF3ECBE524D244A1B55E269281D;
IL2CPP_EXTERN_C String_t* _stringLiteral456802289A14AE717BD0BC56A7BAEACFF3A44998;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0A46EE4EC13D0890B71027FEED99D64D4DDCA0;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57AEEBB21DF089335B32FBDA2797990A07402A;
IL2CPP_EXTERN_C String_t* _stringLiteral52A5073FC5D8C9B14CE059522441CEFCE1428E6D;
IL2CPP_EXTERN_C String_t* _stringLiteral66459480C77BEDD72788682B0850FC19D2E2AF29;
IL2CPP_EXTERN_C String_t* _stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F;
IL2CPP_EXTERN_C String_t* _stringLiteral6B5F0601E9AB41687D6C065F9FAEF95C9B0FFA89;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral7BC5C42FBA1B70A021C186DD013C7F2B49614C86;
IL2CPP_EXTERN_C String_t* _stringLiteral7E6FFB62BC7EB337CACDF62641F78F571E071BA5;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4D5C427CFA5FCCBD38E02EBC6722093CAA1EDD;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralD7788843796112A3333A86F2131B749DCE62B516;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralECDAA6ECC0A305BAA615654EA40F3596C002E9B6;
IL2CPP_EXTERN_C String_t* _stringLiteralF1720268A1E1450741DE5E6BA3B74B17656398B4;
IL2CPP_EXTERN_C String_t* _stringLiteralF5EFECFAFD0595DAEEC7A8E3CFB83C70D465D6D3;
IL2CPP_EXTERN_C String_t* _stringLiteralFDF2DA21F3A2A557000EB87A709ABA96388C3F54;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_mA32D793C70D2370A48CE18EEFC52ADBEC4177F10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1_get_Default_mF17F3E1366EF6A8458598F76CEFAF5CD50FEBF4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_m464EB42B6910FD8C97DD92361D40FB08B3855CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShopUI_OnItemPurchased_m831E95DFDC55A8525ED1FBA383252D4DF712E982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShopUI_OnItemSelected_m9980DF1275E390D1582CCF14C21584EB3BBEAA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShopUI_U3CAnimateNotEnoughCoinsU3Eb__46_0_m3B2FA958BC6F45B836FC5A659F547ABC92683EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToggleIsOnTransition_OnValueChanged_m2C3DAB9655DD596BFC184D0A5B4F83D36C8B2FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m6BAB25D1003D2F0AE472B5DE2E58766F0CDB873F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPauseU3Ed__26_System_Collections_IEnumerator_Reset_m20FE19C8F8E622716F87AFF9D5B908FEC341D8F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPauseU3Ed__39_System_Collections_IEnumerator_Reset_m17A179A37B638E356AE8829B12D9FE6C51870F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartPreparingTimerU3Ed__25_System_Collections_IEnumerator_Reset_m12F8A636BD5C59E6A7BC0E0678F9B0DDE2377D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartPreparingTimerU3Ed__38_System_Collections_IEnumerator_Reset_m1C9A147B5BE13EDBEC043F16BEA5C2999689E5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartTimerU3Ed__27_System_Collections_IEnumerator_Reset_m09B4973113948FB199FE91F4ACCB2ECF8F5F90DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartTimerU3Ed__40_System_Collections_IEnumerator_Reset_m2A6DA579DA1FD91BE03E86E1CCA80A4F159D60CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3COnShopItemSelectedU3Eb__0_m9647A69158BB4B19A3D004F6B3F3FED3015F3D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3COnShopItemPurchaseU3Eb__0_m9FE850F3C2717A73CBBE401F23A0673F6D1A687D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3COnShopCharPurchaseU3Eb__0_mCBE1F63C6296D22B67AF9111E398FF6260F2A225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitigOpponentU3Ed__32_System_Collections_IEnumerator_Reset_m628B2EBCBAD74FBE0453975F7071819EE174658E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3;
struct ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// GameDataManager
struct GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0  : public RuntimeObject
{
public:

public:
};

struct GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0_StaticFields
{
public:
	// GameDataManager GameDataManager::instance
	GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0_StaticFields, ___instance_0)); }
	inline GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * get_instance_0() const { return ___instance_0; }
	inline GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___customProperties_1)); }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___expectedUsers_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// BotGameManager/<Pause>d__26
struct U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888  : public RuntimeObject
{
public:
	// System.Int32 BotGameManager/<Pause>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BotGameManager/<Pause>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BotGameManager BotGameManager/<Pause>d__26::<>4__this
	BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888, ___U3CU3E4__this_2)); }
	inline BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// BotGameManager/<StartPreparingTimer>d__25
struct U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B  : public RuntimeObject
{
public:
	// System.Int32 BotGameManager/<StartPreparingTimer>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BotGameManager/<StartPreparingTimer>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BotGameManager BotGameManager/<StartPreparingTimer>d__25::<>4__this
	BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B, ___U3CU3E4__this_2)); }
	inline BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// BotGameManager/<StartTimer>d__27
struct U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0  : public RuntimeObject
{
public:
	// System.Int32 BotGameManager/<StartTimer>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BotGameManager/<StartTimer>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BotGameManager BotGameManager/<StartTimer>d__27::<>4__this
	BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0, ___U3CU3E4__this_2)); }
	inline BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// CheckAndFixDependenciesFireBase/<>c
struct U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB_StaticFields
{
public:
	// CheckAndFixDependenciesFireBase/<>c CheckAndFixDependenciesFireBase/<>c::<>9
	U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB * ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> CheckAndFixDependenciesFireBase/<>c::<>9__0_0
	Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// GameManager/<Pause>d__39
struct U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<Pause>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<Pause>d__39::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<Pause>d__39::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<StartPreparingTimer>d__38
struct U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<StartPreparingTimer>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<StartPreparingTimer>d__38::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<StartPreparingTimer>d__38::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<StartTimer>d__40
struct U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<StartTimer>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<StartTimer>d__40::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<StartTimer>d__40::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<WaitigOpponent>d__32
struct U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<WaitigOpponent>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<WaitigOpponent>d__32::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<WaitigOpponent>d__32::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ItemSlot/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_tD403CE44724A458A3FD4A1A2DE09BD6C05D299C3  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<System.Int32> ItemSlot/<>c__DisplayClass26_0::action
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action_0;
	// System.Int32 ItemSlot/<>c__DisplayClass26_0::itemIndex
	int32_t ___itemIndex_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_tD403CE44724A458A3FD4A1A2DE09BD6C05D299C3, ___action_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_action_0() const { return ___action_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_tD403CE44724A458A3FD4A1A2DE09BD6C05D299C3, ___itemIndex_1)); }
	inline int32_t get_itemIndex_1() const { return ___itemIndex_1; }
	inline int32_t* get_address_of_itemIndex_1() { return &___itemIndex_1; }
	inline void set_itemIndex_1(int32_t value)
	{
		___itemIndex_1 = value;
	}
};


// ItemSlot/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tE76B5DDD44CAA206B70064FC5412E29FBFF29F35  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<System.Int32> ItemSlot/<>c__DisplayClass30_0::action
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action_0;
	// System.Int32 ItemSlot/<>c__DisplayClass30_0::itemIndex
	int32_t ___itemIndex_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tE76B5DDD44CAA206B70064FC5412E29FBFF29F35, ___action_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_action_0() const { return ___action_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tE76B5DDD44CAA206B70064FC5412E29FBFF29F35, ___itemIndex_1)); }
	inline int32_t get_itemIndex_1() const { return ___itemIndex_1; }
	inline int32_t* get_address_of_itemIndex_1() { return &___itemIndex_1; }
	inline void set_itemIndex_1(int32_t value)
	{
		___itemIndex_1 = value;
	}
};


// ItemSlot/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tF294C85C1A410D62438561DC5E4B00311460DA95  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<System.Int32> ItemSlot/<>c__DisplayClass35_0::action
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action_0;
	// System.Int32 ItemSlot/<>c__DisplayClass35_0::itemIndex
	int32_t ___itemIndex_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_tF294C85C1A410D62438561DC5E4B00311460DA95, ___action_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_action_0() const { return ___action_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_tF294C85C1A410D62438561DC5E4B00311460DA95, ___itemIndex_1)); }
	inline int32_t get_itemIndex_1() const { return ___itemIndex_1; }
	inline int32_t* get_address_of_itemIndex_1() { return &___itemIndex_1; }
	inline void set_itemIndex_1(int32_t value)
	{
		___itemIndex_1 = value;
	}
};


// ItemSlot/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t5251486F89B9B5025FBC82EF2D141A1854EFAF13  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<System.Int32> ItemSlot/<>c__DisplayClass37_0::action
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action_0;
	// System.Int32 ItemSlot/<>c__DisplayClass37_0::itemIndex
	int32_t ___itemIndex_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t5251486F89B9B5025FBC82EF2D141A1854EFAF13, ___action_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_action_0() const { return ___action_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t5251486F89B9B5025FBC82EF2D141A1854EFAF13, ___itemIndex_1)); }
	inline int32_t get_itemIndex_1() const { return ___itemIndex_1; }
	inline int32_t* get_address_of_itemIndex_1() { return &___itemIndex_1; }
	inline void set_itemIndex_1(int32_t value)
	{
		___itemIndex_1 = value;
	}
};


// PushNotificationSender/Data
struct Data_tC64F76CF7B45DCB89D9E50A47752AC6F2E962A22  : public RuntimeObject
{
public:
	// System.String PushNotificationSender/Data::story_id
	String_t* ___story_id_0;

public:
	inline static int32_t get_offset_of_story_id_0() { return static_cast<int32_t>(offsetof(Data_tC64F76CF7B45DCB89D9E50A47752AC6F2E962A22, ___story_id_0)); }
	inline String_t* get_story_id_0() const { return ___story_id_0; }
	inline String_t** get_address_of_story_id_0() { return &___story_id_0; }
	inline void set_story_id_0(String_t* value)
	{
		___story_id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___story_id_0), (void*)value);
	}
};


// PushNotificationSender/Notification
struct Notification_t6C3CF687F5749FE53F658C999A51F21920560C78  : public RuntimeObject
{
public:
	// System.String PushNotificationSender/Notification::title
	String_t* ___title_0;
	// System.String PushNotificationSender/Notification::body
	String_t* ___body_1;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(Notification_t6C3CF687F5749FE53F658C999A51F21920560C78, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_0), (void*)value);
	}

	inline static int32_t get_offset_of_body_1() { return static_cast<int32_t>(offsetof(Notification_t6C3CF687F5749FE53F658C999A51F21920560C78, ___body_1)); }
	inline String_t* get_body_1() const { return ___body_1; }
	inline String_t** get_address_of_body_1() { return &___body_1; }
	inline void set_body_1(String_t* value)
	{
		___body_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_1), (void*)value);
	}
};


// PushNotificationSender/RequestData
struct RequestData_tB433A538242D2C3882F169039F9BCA8AECCF96AF  : public RuntimeObject
{
public:
	// System.String PushNotificationSender/RequestData::to
	String_t* ___to_0;
	// PushNotificationSender/Notification PushNotificationSender/RequestData::notification
	Notification_t6C3CF687F5749FE53F658C999A51F21920560C78 * ___notification_1;
	// PushNotificationSender/Data PushNotificationSender/RequestData::data
	Data_tC64F76CF7B45DCB89D9E50A47752AC6F2E962A22 * ___data_2;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(RequestData_tB433A538242D2C3882F169039F9BCA8AECCF96AF, ___to_0)); }
	inline String_t* get_to_0() const { return ___to_0; }
	inline String_t** get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(String_t* value)
	{
		___to_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___to_0), (void*)value);
	}

	inline static int32_t get_offset_of_notification_1() { return static_cast<int32_t>(offsetof(RequestData_tB433A538242D2C3882F169039F9BCA8AECCF96AF, ___notification_1)); }
	inline Notification_t6C3CF687F5749FE53F658C999A51F21920560C78 * get_notification_1() const { return ___notification_1; }
	inline Notification_t6C3CF687F5749FE53F658C999A51F21920560C78 ** get_address_of_notification_1() { return &___notification_1; }
	inline void set_notification_1(Notification_t6C3CF687F5749FE53F658C999A51F21920560C78 * value)
	{
		___notification_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notification_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(RequestData_tB433A538242D2C3882F169039F9BCA8AECCF96AF, ___data_2)); }
	inline Data_tC64F76CF7B45DCB89D9E50A47752AC6F2E962A22 * get_data_2() const { return ___data_2; }
	inline Data_tC64F76CF7B45DCB89D9E50A47752AC6F2E962A22 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(Data_tC64F76CF7B45DCB89D9E50A47752AC6F2E962A22 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}
};


// ShopItemUI/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<System.Int32> ShopItemUI/<>c__DisplayClass18_0::action
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action_0;
	// System.Int32 ShopItemUI/<>c__DisplayClass18_0::itemIndex
	int32_t ___itemIndex_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846, ___action_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_action_0() const { return ___action_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846, ___itemIndex_1)); }
	inline int32_t get_itemIndex_1() const { return ___itemIndex_1; }
	inline int32_t* get_address_of_itemIndex_1() { return &___itemIndex_1; }
	inline void set_itemIndex_1(int32_t value)
	{
		___itemIndex_1 = value;
	}
};


// ShopItemUI/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<System.Int32> ShopItemUI/<>c__DisplayClass19_0::action
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action_0;
	// System.Int32 ShopItemUI/<>c__DisplayClass19_0::itemIndex
	int32_t ___itemIndex_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E, ___action_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_action_0() const { return ___action_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E, ___itemIndex_1)); }
	inline int32_t get_itemIndex_1() const { return ___itemIndex_1; }
	inline int32_t* get_address_of_itemIndex_1() { return &___itemIndex_1; }
	inline void set_itemIndex_1(int32_t value)
	{
		___itemIndex_1 = value;
	}
};


// ShopItemUI/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924  : public RuntimeObject
{
public:
	// UnityEngine.Events.UnityAction`1<System.Int32> ShopItemUI/<>c__DisplayClass20_0::action
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action_0;
	// System.Int32 ShopItemUI/<>c__DisplayClass20_0::itemIndex
	int32_t ___itemIndex_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924, ___action_0)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_action_0() const { return ___action_0; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemIndex_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924, ___itemIndex_1)); }
	inline int32_t get_itemIndex_1() const { return ___itemIndex_1; }
	inline int32_t* get_address_of_itemIndex_1() { return &___itemIndex_1; }
	inline void set_itemIndex_1(int32_t value)
	{
		___itemIndex_1 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;

public:
	inline static int32_t get_offset_of_alphaOnly_0() { return static_cast<int32_t>(offsetof(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A, ___alphaOnly_0)); }
	inline bool get_alphaOnly_0() const { return ___alphaOnly_0; }
	inline bool* get_address_of_alphaOnly_0() { return &___alphaOnly_0; }
	inline void set_alphaOnly_0(bool value)
	{
		___alphaOnly_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// ExitGames.Client.Photon.Hashtable
struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF  : public Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D
{
public:

public:
};

struct Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_StaticFields
{
public:
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___boxedByte_14;

public:
	inline static int32_t get_offset_of_boxedByte_14() { return static_cast<int32_t>(offsetof(Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF_StaticFields, ___boxedByte_14)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_boxedByte_14() const { return ___boxedByte_14; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_boxedByte_14() { return &___boxedByte_14; }
	inline void set_boxedByte_14(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___boxedByte_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxedByte_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D  : public RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_tBEEEE3B7EAB2BE4F38AF50B935F7C73C0F8DC86A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___players_15)); }
	inline Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tF0F0945D412C5A3997CF67B4F54FD1B654094D1B * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CSuppressRoomEventsU3Ek__BackingField_17)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_17() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return &___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_17(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CSuppressPlayerInfoU3Ek__BackingField_18)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_18() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_18(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CPublishUserIdU3Ek__BackingField_19)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_19() const { return ___U3CPublishUserIdU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_19() { return &___U3CPublishUserIdU3Ek__BackingField_19; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_19(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D, ___U3CDeleteNullPropertiesU3Ek__BackingField_20)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_20() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_20(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_20 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Firebase.DependencyStatus
struct DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13 
{
public:
	// System.Int32 Firebase.DependencyStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.DisconnectCause
struct DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t68C88FC8A40416BE143C2121B174CD15DCE9ACA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Ease
struct Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tB04D625230DDC5B40D74E825C8A9DBBE37A146B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EquipmentType
struct EquipmentType_t3AC4BB0116145EE1C3A9D845C4DB6CBB92F09C2E 
{
public:
	// System.Int32 EquipmentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EquipmentType_t3AC4BB0116145EE1C3A9D845C4DB6CBB92F09C2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_tF807A5805F6A83F5228BE7D4E633B2572B1B859A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Photon.Pun.OwnershipOption
struct OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771 
{
public:
	// System.Int32 Photon.Pun.OwnershipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Photon.Pun.RpcTarget
struct RpcTarget_t32B58E6C450B442EBD42403B0549DB8B908CD6EF 
{
public:
	// System.Int32 Photon.Pun.RpcTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RpcTarget_t32B58E6C450B442EBD42403B0549DB8B908CD6EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.ShakeRandomnessMode
struct ShakeRandomnessMode_t69F6F89C3D26529C0056A9069AB991415966C4BC 
{
public:
	// System.Int32 DG.Tweening.ShakeRandomnessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShakeRandomnessMode_t69F6F89C3D26529C0056A9069AB991415966C4BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_t0086D2AE798C217210762DD17C8D3572414ACD92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// DG.Tweening.TweenType
struct TweenType_tAB2DEC1268409EA172594368494218E51696EF5D 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_tAB2DEC1268409EA172594368494218E51696EF5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t9D838506DD148F29E6183FB298E41921E51CC5ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ViewSynchronization
struct ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD 
{
public:
	// System.Int32 Photon.Pun.ViewSynchronization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonView/ObservableSearch
struct ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47 
{
public:
	// System.Int32 Photon.Pun.PhotonView/ObservableSearch::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/MovementType
struct MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76, ___onStart_3)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_14;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_14)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_14() const { return ___appPlatform_14; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_14() { return &___appPlatform_14; }
	inline void set_appPlatform_14(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_14), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Boolean Firebase.FirebaseApp::userAgentRegistered
	bool ___userAgentRegistered_11;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_12;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_13;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_userAgentRegistered_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___userAgentRegistered_11)); }
	inline bool get_userAgentRegistered_11() const { return ___userAgentRegistered_11; }
	inline bool* get_address_of_userAgentRegistered_11() { return &___userAgentRegistered_11; }
	inline void set_userAgentRegistered_11(bool value)
	{
		___userAgentRegistered_11 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_12)); }
	inline int32_t get_CheckDependenciesThread_12() const { return ___CheckDependenciesThread_12; }
	inline int32_t* get_address_of_CheckDependenciesThread_12() { return &___CheckDependenciesThread_12; }
	inline void set_CheckDependenciesThread_12(int32_t value)
	{
		___CheckDependenciesThread_12 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_13)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_13() const { return ___CheckDependenciesThreadLock_13; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_13() { return &___CheckDependenciesThreadLock_13; }
	inline void set_CheckDependenciesThreadLock_13(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_13), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// InventoryItem
struct InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3  : public RuntimeObject
{
public:
	// UnityEngine.Sprite InventoryItem::sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_0;
	// System.String InventoryItem::itemName
	String_t* ___itemName_1;
	// System.Int32 InventoryItem::buffEffectPercent
	int32_t ___buffEffectPercent_2;
	// System.Int32 InventoryItem::count
	int32_t ___count_3;
	// System.Int32 InventoryItem::price
	int32_t ___price_4;
	// EquipmentType InventoryItem::equipmentType
	int32_t ___equipmentType_5;

public:
	inline static int32_t get_offset_of_sprite_0() { return static_cast<int32_t>(offsetof(InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3, ___sprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sprite_0() const { return ___sprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sprite_0() { return &___sprite_0; }
	inline void set_sprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemName_1() { return static_cast<int32_t>(offsetof(InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3, ___itemName_1)); }
	inline String_t* get_itemName_1() const { return ___itemName_1; }
	inline String_t** get_address_of_itemName_1() { return &___itemName_1; }
	inline void set_itemName_1(String_t* value)
	{
		___itemName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemName_1), (void*)value);
	}

	inline static int32_t get_offset_of_buffEffectPercent_2() { return static_cast<int32_t>(offsetof(InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3, ___buffEffectPercent_2)); }
	inline int32_t get_buffEffectPercent_2() const { return ___buffEffectPercent_2; }
	inline int32_t* get_address_of_buffEffectPercent_2() { return &___buffEffectPercent_2; }
	inline void set_buffEffectPercent_2(int32_t value)
	{
		___buffEffectPercent_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_price_4() { return static_cast<int32_t>(offsetof(InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3, ___price_4)); }
	inline int32_t get_price_4() const { return ___price_4; }
	inline int32_t* get_address_of_price_4() { return &___price_4; }
	inline void set_price_4(int32_t value)
	{
		___price_4 = value;
	}

	inline static int32_t get_offset_of_equipmentType_5() { return static_cast<int32_t>(offsetof(InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3, ___equipmentType_5)); }
	inline int32_t get_equipmentType_5() const { return ___equipmentType_5; }
	inline int32_t* get_address_of_equipmentType_5() { return &___equipmentType_5; }
	inline void set_equipmentType_5(int32_t value)
	{
		___equipmentType_5 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// ShopItem
struct ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 
{
public:
	// UnityEngine.Sprite ShopItem::spriteBase
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___spriteBase_0;
	// System.String ShopItem::itemName
	String_t* ___itemName_1;
	// System.Int32 ShopItem::buffEffectPercent
	int32_t ___buffEffectPercent_2;
	// System.Int32 ShopItem::price
	int32_t ___price_3;
	// System.Boolean ShopItem::isPurchase
	bool ___isPurchase_4;
	// EquipmentType ShopItem::equipmentType
	int32_t ___equipmentType_5;

public:
	inline static int32_t get_offset_of_spriteBase_0() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___spriteBase_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_spriteBase_0() const { return ___spriteBase_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_spriteBase_0() { return &___spriteBase_0; }
	inline void set_spriteBase_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___spriteBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteBase_0), (void*)value);
	}

	inline static int32_t get_offset_of_itemName_1() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___itemName_1)); }
	inline String_t* get_itemName_1() const { return ___itemName_1; }
	inline String_t** get_address_of_itemName_1() { return &___itemName_1; }
	inline void set_itemName_1(String_t* value)
	{
		___itemName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemName_1), (void*)value);
	}

	inline static int32_t get_offset_of_buffEffectPercent_2() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___buffEffectPercent_2)); }
	inline int32_t get_buffEffectPercent_2() const { return ___buffEffectPercent_2; }
	inline int32_t* get_address_of_buffEffectPercent_2() { return &___buffEffectPercent_2; }
	inline void set_buffEffectPercent_2(int32_t value)
	{
		___buffEffectPercent_2 = value;
	}

	inline static int32_t get_offset_of_price_3() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___price_3)); }
	inline int32_t get_price_3() const { return ___price_3; }
	inline int32_t* get_address_of_price_3() { return &___price_3; }
	inline void set_price_3(int32_t value)
	{
		___price_3 = value;
	}

	inline static int32_t get_offset_of_isPurchase_4() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___isPurchase_4)); }
	inline bool get_isPurchase_4() const { return ___isPurchase_4; }
	inline bool* get_address_of_isPurchase_4() { return &___isPurchase_4; }
	inline void set_isPurchase_4(bool value)
	{
		___isPurchase_4 = value;
	}

	inline static int32_t get_offset_of_equipmentType_5() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___equipmentType_5)); }
	inline int32_t get_equipmentType_5() const { return ___equipmentType_5; }
	inline int32_t* get_address_of_equipmentType_5() { return &___equipmentType_5; }
	inline void set_equipmentType_5(int32_t value)
	{
		___equipmentType_5 = value;
	}
};

// Native definition for P/Invoke marshalling of ShopItem
struct ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___spriteBase_0;
	char* ___itemName_1;
	int32_t ___buffEffectPercent_2;
	int32_t ___price_3;
	int32_t ___isPurchase_4;
	int32_t ___equipmentType_5;
};
// Native definition for COM marshalling of ShopItem
struct ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___spriteBase_0;
	Il2CppChar* ___itemName_1;
	int32_t ___buffEffectPercent_2;
	int32_t ___price_3;
	int32_t ___isPurchase_4;
	int32_t ___equipmentType_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// InventoryItemDatabase
struct InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<InventoryItem> InventoryItemDatabase::inventoryItems
	List_1_tA1E3C55F496F4C3948C06B79F3A45AA85F43A3CA * ___inventoryItems_4;

public:
	inline static int32_t get_offset_of_inventoryItems_4() { return static_cast<int32_t>(offsetof(InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5, ___inventoryItems_4)); }
	inline List_1_tA1E3C55F496F4C3948C06B79F3A45AA85F43A3CA * get_inventoryItems_4() const { return ___inventoryItems_4; }
	inline List_1_tA1E3C55F496F4C3948C06B79F3A45AA85F43A3CA ** get_address_of_inventoryItems_4() { return &___inventoryItems_4; }
	inline void set_inventoryItems_4(List_1_tA1E3C55F496F4C3948C06B79F3A45AA85F43A3CA * value)
	{
		___inventoryItems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventoryItems_4), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// ShopItemDatabase
struct ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// ShopItem[] ShopItemDatabase::shopItems
	ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* ___shopItems_4;

public:
	inline static int32_t get_offset_of_shopItems_4() { return static_cast<int32_t>(offsetof(ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7, ___shopItems_4)); }
	inline ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* get_shopItems_4() const { return ___shopItems_4; }
	inline ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74** get_address_of_shopItems_4() { return &___shopItems_4; }
	inline void set_shopItems_4(ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* value)
	{
		___shopItems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItems_4), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DG.Tweening.Tween
struct Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941  : public ABSSequentiable_t74F7F9AFFD39EE435A16A3E202A7872B46DA6C76
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPlay_13)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onPause_14)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onRewind_15)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onUpdate_16)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onStepComplete_17)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onComplete_18)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onKill_19)); }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___onWaypointChange_20)); }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t145CD5D30F08B617B445D2B1B79A7BAADC305B9B * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___customEase_32)); }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tC7ECEFDCAE4EC041E6FD7AC7C021E7B7680EFEB9 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___sequenceParent_41)); }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tE01FFFCA34A537CE2FF32EDAF451CDEC55A1399E * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};


// DG.Tweening.TweenCallback
struct TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// DG.Tweening.Tweener
struct Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8  : public Tween_tF17E40B3AD65D4E0C7E78D43A9224C6A1FC4C941
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597  : public Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___startValue_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_startValue_57() const { return ___startValue_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___endValue_58)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_endValue_58() const { return ___endValue_58; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___changeValue_59)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_changeValue_59() const { return ___changeValue_59; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___plugOptions_60)); }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(ColorOptions_t25AF005F398643658A000DBAD00EFF82C944355A  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___getter_61)); }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tCC9DEA9BB7DA5C2570ED2CE9BD13EF5C154B7B10 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___setter_62)); }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_tB62013E4617ECB51822384C8592AAB764E1662BF * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t6A1019F3F26DC4DFAFFA4439E8D04997B8A86E75 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223, ___pvCache_4)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * ___OnControllerChangeCallbacks_31;

public:
	inline static int32_t get_offset_of_Group_4() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Group_4)); }
	inline uint8_t get_Group_4() const { return ___Group_4; }
	inline uint8_t* get_address_of_Group_4() { return &___Group_4; }
	inline void set_Group_4(uint8_t value)
	{
		___Group_4 = value;
	}

	inline static int32_t get_offset_of_prefixField_5() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___prefixField_5)); }
	inline int32_t get_prefixField_5() const { return ___prefixField_5; }
	inline int32_t* get_address_of_prefixField_5() { return &___prefixField_5; }
	inline void set_prefixField_5(int32_t value)
	{
		___prefixField_5 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_6() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___instantiationDataField_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_instantiationDataField_6() const { return ___instantiationDataField_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_instantiationDataField_6() { return &___instantiationDataField_6; }
	inline void set_instantiationDataField_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___instantiationDataField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationDataField_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_7() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataSent_7)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_lastOnSerializeDataSent_7() const { return ___lastOnSerializeDataSent_7; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_lastOnSerializeDataSent_7() { return &___lastOnSerializeDataSent_7; }
	inline void set_lastOnSerializeDataSent_7(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___lastOnSerializeDataSent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataSent_7), (void*)value);
	}

	inline static int32_t get_offset_of_syncValues_8() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___syncValues_8)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_syncValues_8() const { return ___syncValues_8; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_syncValues_8() { return &___syncValues_8; }
	inline void set_syncValues_8(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___syncValues_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncValues_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_9() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataReceived_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_lastOnSerializeDataReceived_9() const { return ___lastOnSerializeDataReceived_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_lastOnSerializeDataReceived_9() { return &___lastOnSerializeDataReceived_9; }
	inline void set_lastOnSerializeDataReceived_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___lastOnSerializeDataReceived_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataReceived_9), (void*)value);
	}

	inline static int32_t get_offset_of_Synchronization_10() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Synchronization_10)); }
	inline int32_t get_Synchronization_10() const { return ___Synchronization_10; }
	inline int32_t* get_address_of_Synchronization_10() { return &___Synchronization_10; }
	inline void set_Synchronization_10(int32_t value)
	{
		___Synchronization_10 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_11() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___mixedModeIsReliable_11)); }
	inline bool get_mixedModeIsReliable_11() const { return ___mixedModeIsReliable_11; }
	inline bool* get_address_of_mixedModeIsReliable_11() { return &___mixedModeIsReliable_11; }
	inline void set_mixedModeIsReliable_11(bool value)
	{
		___mixedModeIsReliable_11 = value;
	}

	inline static int32_t get_offset_of_OwnershipTransfer_12() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OwnershipTransfer_12)); }
	inline int32_t get_OwnershipTransfer_12() const { return ___OwnershipTransfer_12; }
	inline int32_t* get_address_of_OwnershipTransfer_12() { return &___OwnershipTransfer_12; }
	inline void set_OwnershipTransfer_12(int32_t value)
	{
		___OwnershipTransfer_12 = value;
	}

	inline static int32_t get_offset_of_observableSearch_13() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___observableSearch_13)); }
	inline int32_t get_observableSearch_13() const { return ___observableSearch_13; }
	inline int32_t* get_address_of_observableSearch_13() { return &___observableSearch_13; }
	inline void set_observableSearch_13(int32_t value)
	{
		___observableSearch_13 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_14() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ObservedComponents_14)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_ObservedComponents_14() const { return ___ObservedComponents_14; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_ObservedComponents_14() { return &___ObservedComponents_14; }
	inline void set_ObservedComponents_14(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___ObservedComponents_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObservedComponents_14), (void*)value);
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_15() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___RpcMonoBehaviours_15)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get_RpcMonoBehaviours_15() const { return ___RpcMonoBehaviours_15; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of_RpcMonoBehaviours_15() { return &___RpcMonoBehaviours_15; }
	inline void set_RpcMonoBehaviours_15(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		___RpcMonoBehaviours_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcMonoBehaviours_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsMineU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CIsMineU3Ek__BackingField_16)); }
	inline bool get_U3CIsMineU3Ek__BackingField_16() const { return ___U3CIsMineU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsMineU3Ek__BackingField_16() { return &___U3CIsMineU3Ek__BackingField_16; }
	inline void set_U3CIsMineU3Ek__BackingField_16(bool value)
	{
		___U3CIsMineU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CControllerU3Ek__BackingField_17)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CControllerU3Ek__BackingField_17() const { return ___U3CControllerU3Ek__BackingField_17; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CControllerU3Ek__BackingField_17() { return &___U3CControllerU3Ek__BackingField_17; }
	inline void set_U3CControllerU3Ek__BackingField_17(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CControllerU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatorActorNrU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CCreatorActorNrU3Ek__BackingField_18)); }
	inline int32_t get_U3CCreatorActorNrU3Ek__BackingField_18() const { return ___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CCreatorActorNrU3Ek__BackingField_18() { return &___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline void set_U3CCreatorActorNrU3Ek__BackingField_18(int32_t value)
	{
		___U3CCreatorActorNrU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CAmOwnerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CAmOwnerU3Ek__BackingField_19)); }
	inline bool get_U3CAmOwnerU3Ek__BackingField_19() const { return ___U3CAmOwnerU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CAmOwnerU3Ek__BackingField_19() { return &___U3CAmOwnerU3Ek__BackingField_19; }
	inline void set_U3CAmOwnerU3Ek__BackingField_19(bool value)
	{
		___U3CAmOwnerU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3COwnerU3Ek__BackingField_20)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3COwnerU3Ek__BackingField_20() const { return ___U3COwnerU3Ek__BackingField_20; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3COwnerU3Ek__BackingField_20() { return &___U3COwnerU3Ek__BackingField_20; }
	inline void set_U3COwnerU3Ek__BackingField_20(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3COwnerU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COwnerU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_ownerActorNr_21() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ownerActorNr_21)); }
	inline int32_t get_ownerActorNr_21() const { return ___ownerActorNr_21; }
	inline int32_t* get_address_of_ownerActorNr_21() { return &___ownerActorNr_21; }
	inline void set_ownerActorNr_21(int32_t value)
	{
		___ownerActorNr_21 = value;
	}

	inline static int32_t get_offset_of_controllerActorNr_22() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___controllerActorNr_22)); }
	inline int32_t get_controllerActorNr_22() const { return ___controllerActorNr_22; }
	inline int32_t* get_address_of_controllerActorNr_22() { return &___controllerActorNr_22; }
	inline void set_controllerActorNr_22(int32_t value)
	{
		___controllerActorNr_22 = value;
	}

	inline static int32_t get_offset_of_sceneViewId_23() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___sceneViewId_23)); }
	inline int32_t get_sceneViewId_23() const { return ___sceneViewId_23; }
	inline int32_t* get_address_of_sceneViewId_23() { return &___sceneViewId_23; }
	inline void set_sceneViewId_23(int32_t value)
	{
		___sceneViewId_23 = value;
	}

	inline static int32_t get_offset_of_viewIdField_24() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___viewIdField_24)); }
	inline int32_t get_viewIdField_24() const { return ___viewIdField_24; }
	inline int32_t* get_address_of_viewIdField_24() { return &___viewIdField_24; }
	inline void set_viewIdField_24(int32_t value)
	{
		___viewIdField_24 = value;
	}

	inline static int32_t get_offset_of_InstantiationId_25() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___InstantiationId_25)); }
	inline int32_t get_InstantiationId_25() const { return ___InstantiationId_25; }
	inline int32_t* get_address_of_InstantiationId_25() { return &___InstantiationId_25; }
	inline void set_InstantiationId_25(int32_t value)
	{
		___InstantiationId_25 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_26() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___isRuntimeInstantiated_26)); }
	inline bool get_isRuntimeInstantiated_26() const { return ___isRuntimeInstantiated_26; }
	inline bool* get_address_of_isRuntimeInstantiated_26() { return &___isRuntimeInstantiated_26; }
	inline void set_isRuntimeInstantiated_26(bool value)
	{
		___isRuntimeInstantiated_26 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_27() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___removedFromLocalViewList_27)); }
	inline bool get_removedFromLocalViewList_27() const { return ___removedFromLocalViewList_27; }
	inline bool* get_address_of_removedFromLocalViewList_27() { return &___removedFromLocalViewList_27; }
	inline void set_removedFromLocalViewList_27(bool value)
	{
		___removedFromLocalViewList_27 = value;
	}

	inline static int32_t get_offset_of_CallbackChangeQueue_28() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___CallbackChangeQueue_28)); }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * get_CallbackChangeQueue_28() const { return ___CallbackChangeQueue_28; }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA ** get_address_of_CallbackChangeQueue_28() { return &___CallbackChangeQueue_28; }
	inline void set_CallbackChangeQueue_28(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * value)
	{
		___CallbackChangeQueue_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackChangeQueue_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnPreNetDestroyCallbacks_29() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnPreNetDestroyCallbacks_29)); }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * get_OnPreNetDestroyCallbacks_29() const { return ___OnPreNetDestroyCallbacks_29; }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** get_address_of_OnPreNetDestroyCallbacks_29() { return &___OnPreNetDestroyCallbacks_29; }
	inline void set_OnPreNetDestroyCallbacks_29(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * value)
	{
		___OnPreNetDestroyCallbacks_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreNetDestroyCallbacks_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnerChangeCallbacks_30() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnOwnerChangeCallbacks_30)); }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * get_OnOwnerChangeCallbacks_30() const { return ___OnOwnerChangeCallbacks_30; }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** get_address_of_OnOwnerChangeCallbacks_30() { return &___OnOwnerChangeCallbacks_30; }
	inline void set_OnOwnerChangeCallbacks_30(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * value)
	{
		___OnOwnerChangeCallbacks_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnerChangeCallbacks_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerChangeCallbacks_31() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnControllerChangeCallbacks_31)); }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * get_OnControllerChangeCallbacks_31() const { return ___OnControllerChangeCallbacks_31; }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** get_address_of_OnControllerChangeCallbacks_31() { return &___OnControllerChangeCallbacks_31; }
	inline void set_OnControllerChangeCallbacks_31(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * value)
	{
		___OnControllerChangeCallbacks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerChangeCallbacks_31), (void*)value);
	}
};


// ShopItemUI
struct ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color ShopItemUI::itemNotSelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___itemNotSelectedColor_4;
	// UnityEngine.Color ShopItemUI::itemSelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___itemSelectedColor_5;
	// UnityEngine.UI.Image ShopItemUI::shopItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___shopItemImage_6;
	// UnityEngine.UI.Text ShopItemUI::shopItemName
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___shopItemName_7;
	// UnityEngine.UI.Text ShopItemUI::buffValuemPercent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___buffValuemPercent_8;
	// UnityEngine.UI.Text ShopItemUI::shopItemPrice
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___shopItemPrice_9;
	// UnityEngine.GameObject ShopItemUI::price
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___price_10;
	// UnityEngine.UI.Button ShopItemUI::purchaseBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___purchaseBtn_11;
	// UnityEngine.UI.Text ShopItemUI::textPurchaseBtn
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textPurchaseBtn_12;
	// UnityEngine.UI.Button ShopItemUI::shopItemBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___shopItemBtn_13;
	// UnityEngine.UI.Image ShopItemUI::itemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___itemImage_14;

public:
	inline static int32_t get_offset_of_itemNotSelectedColor_4() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___itemNotSelectedColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_itemNotSelectedColor_4() const { return ___itemNotSelectedColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_itemNotSelectedColor_4() { return &___itemNotSelectedColor_4; }
	inline void set_itemNotSelectedColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___itemNotSelectedColor_4 = value;
	}

	inline static int32_t get_offset_of_itemSelectedColor_5() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___itemSelectedColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_itemSelectedColor_5() const { return ___itemSelectedColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_itemSelectedColor_5() { return &___itemSelectedColor_5; }
	inline void set_itemSelectedColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___itemSelectedColor_5 = value;
	}

	inline static int32_t get_offset_of_shopItemImage_6() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___shopItemImage_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_shopItemImage_6() const { return ___shopItemImage_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_shopItemImage_6() { return &___shopItemImage_6; }
	inline void set_shopItemImage_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___shopItemImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItemImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_shopItemName_7() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___shopItemName_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_shopItemName_7() const { return ___shopItemName_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_shopItemName_7() { return &___shopItemName_7; }
	inline void set_shopItemName_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___shopItemName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItemName_7), (void*)value);
	}

	inline static int32_t get_offset_of_buffValuemPercent_8() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___buffValuemPercent_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_buffValuemPercent_8() const { return ___buffValuemPercent_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_buffValuemPercent_8() { return &___buffValuemPercent_8; }
	inline void set_buffValuemPercent_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___buffValuemPercent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffValuemPercent_8), (void*)value);
	}

	inline static int32_t get_offset_of_shopItemPrice_9() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___shopItemPrice_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_shopItemPrice_9() const { return ___shopItemPrice_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_shopItemPrice_9() { return &___shopItemPrice_9; }
	inline void set_shopItemPrice_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___shopItemPrice_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItemPrice_9), (void*)value);
	}

	inline static int32_t get_offset_of_price_10() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___price_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_price_10() const { return ___price_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_price_10() { return &___price_10; }
	inline void set_price_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___price_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___price_10), (void*)value);
	}

	inline static int32_t get_offset_of_purchaseBtn_11() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___purchaseBtn_11)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_purchaseBtn_11() const { return ___purchaseBtn_11; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_purchaseBtn_11() { return &___purchaseBtn_11; }
	inline void set_purchaseBtn_11(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___purchaseBtn_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchaseBtn_11), (void*)value);
	}

	inline static int32_t get_offset_of_textPurchaseBtn_12() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___textPurchaseBtn_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textPurchaseBtn_12() const { return ___textPurchaseBtn_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textPurchaseBtn_12() { return &___textPurchaseBtn_12; }
	inline void set_textPurchaseBtn_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textPurchaseBtn_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textPurchaseBtn_12), (void*)value);
	}

	inline static int32_t get_offset_of_shopItemBtn_13() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___shopItemBtn_13)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_shopItemBtn_13() const { return ___shopItemBtn_13; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_shopItemBtn_13() { return &___shopItemBtn_13; }
	inline void set_shopItemBtn_13(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___shopItemBtn_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItemBtn_13), (void*)value);
	}

	inline static int32_t get_offset_of_itemImage_14() { return static_cast<int32_t>(offsetof(ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B, ___itemImage_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_itemImage_14() const { return ___itemImage_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_itemImage_14() { return &___itemImage_14; }
	inline void set_itemImage_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___itemImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemImage_14), (void*)value);
	}
};


// ShopUI
struct ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ShopUI::itemSpacing
	float ___itemSpacing_4;
	// System.Single ShopUI::itemHeight
	float ___itemHeight_5;
	// UnityEngine.Transform ShopUI::shopMenu
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___shopMenu_6;
	// UnityEngine.Transform ShopUI::shopItemContainer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___shopItemContainer_7;
	// UnityEngine.Transform ShopUI::shopCharContainer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___shopCharContainer_8;
	// UnityEngine.GameObject ShopUI::itemPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemPrefab_9;
	// UnityEngine.GameObject ShopUI::charPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___charPrefab_10;
	// UnityEngine.UI.Text ShopUI::shopCoins
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___shopCoins_11;
	// ShopItemDatabase ShopUI::shopItemDB
	ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * ___shopItemDB_12;
	// ShopItemDatabase ShopUI::shopCharDB
	ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * ___shopCharDB_13;
	// InventoryItemDatabase ShopUI::inventoryList
	InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5 * ___inventoryList_14;
	// UnityEngine.GameObject ShopUI::shopUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopUI_15;
	// UnityEngine.GameObject ShopUI::shopItems
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopItems_16;
	// UnityEngine.GameObject ShopUI::shopChars
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopChars_17;
	// UnityEngine.UI.Button ShopUI::itemsShopBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___itemsShopBtn_18;
	// UnityEngine.UI.Button ShopUI::charsShopBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___charsShopBtn_19;
	// UnityEngine.Color ShopUI::shopSelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shopSelectedColor_20;
	// UnityEngine.Color ShopUI::shopNotSelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shopNotSelectedColor_21;
	// UnityEngine.UI.Text ShopUI::notEnoughCoinsMsg
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___notEnoughCoinsMsg_22;
	// UnityEngine.UI.Button ShopUI::scrollUpButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___scrollUpButton_23;
	// UnityEngine.UI.ScrollRect ShopUI::scrollRectItems
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___scrollRectItems_24;
	// UnityEngine.UI.Button ShopUI::closeBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___closeBtn_25;
	// UnityEngine.UI.Button ShopUI::openShopButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___openShopButton_26;
	// UnityEngine.GameObject ShopUI::bankofCoins
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bankofCoins_27;
	// UnityEngine.UI.Text ShopUI::mainCoins
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___mainCoins_28;
	// UnityEngine.UI.Image ShopUI::currentCharImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___currentCharImage_29;
	// UnityEngine.UI.Text ShopUI::percenOfWin
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___percenOfWin_30;
	// System.Int32 ShopUI::basePercentOfWin
	int32_t ___basePercentOfWin_31;
	// System.Int32 ShopUI::newSelectedItemIndex
	int32_t ___newSelectedItemIndex_32;
	// System.Int32 ShopUI::previousSelectedItemIndex
	int32_t ___previousSelectedItemIndex_33;
	// System.Int32 ShopUI::newSelectedCharIndex
	int32_t ___newSelectedCharIndex_34;
	// System.Int32 ShopUI::previousSelectedCharIndex
	int32_t ___previousSelectedCharIndex_35;
	// System.Byte ShopUI::isCurrentDB
	uint8_t ___isCurrentDB_36;
	// GameDataManager ShopUI::gdm
	GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * ___gdm_37;
	// System.Boolean[] ShopUI::purchasedChars
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___purchasedChars_38;

public:
	inline static int32_t get_offset_of_itemSpacing_4() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___itemSpacing_4)); }
	inline float get_itemSpacing_4() const { return ___itemSpacing_4; }
	inline float* get_address_of_itemSpacing_4() { return &___itemSpacing_4; }
	inline void set_itemSpacing_4(float value)
	{
		___itemSpacing_4 = value;
	}

	inline static int32_t get_offset_of_itemHeight_5() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___itemHeight_5)); }
	inline float get_itemHeight_5() const { return ___itemHeight_5; }
	inline float* get_address_of_itemHeight_5() { return &___itemHeight_5; }
	inline void set_itemHeight_5(float value)
	{
		___itemHeight_5 = value;
	}

	inline static int32_t get_offset_of_shopMenu_6() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopMenu_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_shopMenu_6() const { return ___shopMenu_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_shopMenu_6() { return &___shopMenu_6; }
	inline void set_shopMenu_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___shopMenu_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopMenu_6), (void*)value);
	}

	inline static int32_t get_offset_of_shopItemContainer_7() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopItemContainer_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_shopItemContainer_7() const { return ___shopItemContainer_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_shopItemContainer_7() { return &___shopItemContainer_7; }
	inline void set_shopItemContainer_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___shopItemContainer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItemContainer_7), (void*)value);
	}

	inline static int32_t get_offset_of_shopCharContainer_8() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopCharContainer_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_shopCharContainer_8() const { return ___shopCharContainer_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_shopCharContainer_8() { return &___shopCharContainer_8; }
	inline void set_shopCharContainer_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___shopCharContainer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopCharContainer_8), (void*)value);
	}

	inline static int32_t get_offset_of_itemPrefab_9() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___itemPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemPrefab_9() const { return ___itemPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemPrefab_9() { return &___itemPrefab_9; }
	inline void set_itemPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_charPrefab_10() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___charPrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_charPrefab_10() const { return ___charPrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_charPrefab_10() { return &___charPrefab_10; }
	inline void set_charPrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___charPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_shopCoins_11() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopCoins_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_shopCoins_11() const { return ___shopCoins_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_shopCoins_11() { return &___shopCoins_11; }
	inline void set_shopCoins_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___shopCoins_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopCoins_11), (void*)value);
	}

	inline static int32_t get_offset_of_shopItemDB_12() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopItemDB_12)); }
	inline ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * get_shopItemDB_12() const { return ___shopItemDB_12; }
	inline ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 ** get_address_of_shopItemDB_12() { return &___shopItemDB_12; }
	inline void set_shopItemDB_12(ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * value)
	{
		___shopItemDB_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItemDB_12), (void*)value);
	}

	inline static int32_t get_offset_of_shopCharDB_13() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopCharDB_13)); }
	inline ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * get_shopCharDB_13() const { return ___shopCharDB_13; }
	inline ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 ** get_address_of_shopCharDB_13() { return &___shopCharDB_13; }
	inline void set_shopCharDB_13(ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * value)
	{
		___shopCharDB_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopCharDB_13), (void*)value);
	}

	inline static int32_t get_offset_of_inventoryList_14() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___inventoryList_14)); }
	inline InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5 * get_inventoryList_14() const { return ___inventoryList_14; }
	inline InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5 ** get_address_of_inventoryList_14() { return &___inventoryList_14; }
	inline void set_inventoryList_14(InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5 * value)
	{
		___inventoryList_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventoryList_14), (void*)value);
	}

	inline static int32_t get_offset_of_shopUI_15() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopUI_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopUI_15() const { return ___shopUI_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopUI_15() { return &___shopUI_15; }
	inline void set_shopUI_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopUI_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopUI_15), (void*)value);
	}

	inline static int32_t get_offset_of_shopItems_16() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopItems_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopItems_16() const { return ___shopItems_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopItems_16() { return &___shopItems_16; }
	inline void set_shopItems_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopItems_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItems_16), (void*)value);
	}

	inline static int32_t get_offset_of_shopChars_17() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopChars_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopChars_17() const { return ___shopChars_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopChars_17() { return &___shopChars_17; }
	inline void set_shopChars_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopChars_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopChars_17), (void*)value);
	}

	inline static int32_t get_offset_of_itemsShopBtn_18() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___itemsShopBtn_18)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_itemsShopBtn_18() const { return ___itemsShopBtn_18; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_itemsShopBtn_18() { return &___itemsShopBtn_18; }
	inline void set_itemsShopBtn_18(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___itemsShopBtn_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemsShopBtn_18), (void*)value);
	}

	inline static int32_t get_offset_of_charsShopBtn_19() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___charsShopBtn_19)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_charsShopBtn_19() const { return ___charsShopBtn_19; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_charsShopBtn_19() { return &___charsShopBtn_19; }
	inline void set_charsShopBtn_19(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___charsShopBtn_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charsShopBtn_19), (void*)value);
	}

	inline static int32_t get_offset_of_shopSelectedColor_20() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopSelectedColor_20)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shopSelectedColor_20() const { return ___shopSelectedColor_20; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shopSelectedColor_20() { return &___shopSelectedColor_20; }
	inline void set_shopSelectedColor_20(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shopSelectedColor_20 = value;
	}

	inline static int32_t get_offset_of_shopNotSelectedColor_21() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___shopNotSelectedColor_21)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shopNotSelectedColor_21() const { return ___shopNotSelectedColor_21; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shopNotSelectedColor_21() { return &___shopNotSelectedColor_21; }
	inline void set_shopNotSelectedColor_21(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shopNotSelectedColor_21 = value;
	}

	inline static int32_t get_offset_of_notEnoughCoinsMsg_22() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___notEnoughCoinsMsg_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_notEnoughCoinsMsg_22() const { return ___notEnoughCoinsMsg_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_notEnoughCoinsMsg_22() { return &___notEnoughCoinsMsg_22; }
	inline void set_notEnoughCoinsMsg_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___notEnoughCoinsMsg_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notEnoughCoinsMsg_22), (void*)value);
	}

	inline static int32_t get_offset_of_scrollUpButton_23() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___scrollUpButton_23)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_scrollUpButton_23() const { return ___scrollUpButton_23; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_scrollUpButton_23() { return &___scrollUpButton_23; }
	inline void set_scrollUpButton_23(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___scrollUpButton_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollUpButton_23), (void*)value);
	}

	inline static int32_t get_offset_of_scrollRectItems_24() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___scrollRectItems_24)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_scrollRectItems_24() const { return ___scrollRectItems_24; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_scrollRectItems_24() { return &___scrollRectItems_24; }
	inline void set_scrollRectItems_24(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___scrollRectItems_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollRectItems_24), (void*)value);
	}

	inline static int32_t get_offset_of_closeBtn_25() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___closeBtn_25)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_closeBtn_25() const { return ___closeBtn_25; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_closeBtn_25() { return &___closeBtn_25; }
	inline void set_closeBtn_25(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___closeBtn_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closeBtn_25), (void*)value);
	}

	inline static int32_t get_offset_of_openShopButton_26() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___openShopButton_26)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_openShopButton_26() const { return ___openShopButton_26; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_openShopButton_26() { return &___openShopButton_26; }
	inline void set_openShopButton_26(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___openShopButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openShopButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_bankofCoins_27() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___bankofCoins_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bankofCoins_27() const { return ___bankofCoins_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bankofCoins_27() { return &___bankofCoins_27; }
	inline void set_bankofCoins_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bankofCoins_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bankofCoins_27), (void*)value);
	}

	inline static int32_t get_offset_of_mainCoins_28() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___mainCoins_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_mainCoins_28() const { return ___mainCoins_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_mainCoins_28() { return &___mainCoins_28; }
	inline void set_mainCoins_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___mainCoins_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCoins_28), (void*)value);
	}

	inline static int32_t get_offset_of_currentCharImage_29() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___currentCharImage_29)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_currentCharImage_29() const { return ___currentCharImage_29; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_currentCharImage_29() { return &___currentCharImage_29; }
	inline void set_currentCharImage_29(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___currentCharImage_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCharImage_29), (void*)value);
	}

	inline static int32_t get_offset_of_percenOfWin_30() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___percenOfWin_30)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_percenOfWin_30() const { return ___percenOfWin_30; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_percenOfWin_30() { return &___percenOfWin_30; }
	inline void set_percenOfWin_30(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___percenOfWin_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percenOfWin_30), (void*)value);
	}

	inline static int32_t get_offset_of_basePercentOfWin_31() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___basePercentOfWin_31)); }
	inline int32_t get_basePercentOfWin_31() const { return ___basePercentOfWin_31; }
	inline int32_t* get_address_of_basePercentOfWin_31() { return &___basePercentOfWin_31; }
	inline void set_basePercentOfWin_31(int32_t value)
	{
		___basePercentOfWin_31 = value;
	}

	inline static int32_t get_offset_of_newSelectedItemIndex_32() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___newSelectedItemIndex_32)); }
	inline int32_t get_newSelectedItemIndex_32() const { return ___newSelectedItemIndex_32; }
	inline int32_t* get_address_of_newSelectedItemIndex_32() { return &___newSelectedItemIndex_32; }
	inline void set_newSelectedItemIndex_32(int32_t value)
	{
		___newSelectedItemIndex_32 = value;
	}

	inline static int32_t get_offset_of_previousSelectedItemIndex_33() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___previousSelectedItemIndex_33)); }
	inline int32_t get_previousSelectedItemIndex_33() const { return ___previousSelectedItemIndex_33; }
	inline int32_t* get_address_of_previousSelectedItemIndex_33() { return &___previousSelectedItemIndex_33; }
	inline void set_previousSelectedItemIndex_33(int32_t value)
	{
		___previousSelectedItemIndex_33 = value;
	}

	inline static int32_t get_offset_of_newSelectedCharIndex_34() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___newSelectedCharIndex_34)); }
	inline int32_t get_newSelectedCharIndex_34() const { return ___newSelectedCharIndex_34; }
	inline int32_t* get_address_of_newSelectedCharIndex_34() { return &___newSelectedCharIndex_34; }
	inline void set_newSelectedCharIndex_34(int32_t value)
	{
		___newSelectedCharIndex_34 = value;
	}

	inline static int32_t get_offset_of_previousSelectedCharIndex_35() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___previousSelectedCharIndex_35)); }
	inline int32_t get_previousSelectedCharIndex_35() const { return ___previousSelectedCharIndex_35; }
	inline int32_t* get_address_of_previousSelectedCharIndex_35() { return &___previousSelectedCharIndex_35; }
	inline void set_previousSelectedCharIndex_35(int32_t value)
	{
		___previousSelectedCharIndex_35 = value;
	}

	inline static int32_t get_offset_of_isCurrentDB_36() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___isCurrentDB_36)); }
	inline uint8_t get_isCurrentDB_36() const { return ___isCurrentDB_36; }
	inline uint8_t* get_address_of_isCurrentDB_36() { return &___isCurrentDB_36; }
	inline void set_isCurrentDB_36(uint8_t value)
	{
		___isCurrentDB_36 = value;
	}

	inline static int32_t get_offset_of_gdm_37() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___gdm_37)); }
	inline GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * get_gdm_37() const { return ___gdm_37; }
	inline GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 ** get_address_of_gdm_37() { return &___gdm_37; }
	inline void set_gdm_37(GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * value)
	{
		___gdm_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdm_37), (void*)value);
	}

	inline static int32_t get_offset_of_purchasedChars_38() { return static_cast<int32_t>(offsetof(ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E, ___purchasedChars_38)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_purchasedChars_38() const { return ___purchasedChars_38; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_purchasedChars_38() { return &___purchasedChars_38; }
	inline void set_purchasedChars_38(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___purchasedChars_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___purchasedChars_38), (void*)value);
	}
};


// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextButtonTransition::_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____text_4;
	// UnityEngine.UI.Selectable Photon.Chat.UtilityScripts.TextButtonTransition::Selectable
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___Selectable_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___NormalColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::HoverColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___HoverColor_7;

public:
	inline static int32_t get_offset_of__text_4() { return static_cast<int32_t>(offsetof(TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F, ____text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__text_4() const { return ____text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__text_4() { return &____text_4; }
	inline void set__text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_4), (void*)value);
	}

	inline static int32_t get_offset_of_Selectable_5() { return static_cast<int32_t>(offsetof(TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F, ___Selectable_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_Selectable_5() const { return ___Selectable_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_Selectable_5() { return &___Selectable_5; }
	inline void set_Selectable_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___Selectable_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Selectable_5), (void*)value);
	}

	inline static int32_t get_offset_of_NormalColor_6() { return static_cast<int32_t>(offsetof(TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F, ___NormalColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_NormalColor_6() const { return ___NormalColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_NormalColor_6() { return &___NormalColor_6; }
	inline void set_NormalColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___NormalColor_6 = value;
	}

	inline static int32_t get_offset_of_HoverColor_7() { return static_cast<int32_t>(offsetof(TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F, ___HoverColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_HoverColor_7() const { return ___HoverColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_HoverColor_7() { return &___HoverColor_7; }
	inline void set_HoverColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___HoverColor_7 = value;
	}
};


// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Toggle Photon.Chat.UtilityScripts.TextToggleIsOnTransition::toggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___toggle_4;
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextToggleIsOnTransition::_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____text_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOnColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___NormalOnColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOffColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___NormalOffColor_7;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOnColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___HoverOnColor_8;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOffColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___HoverOffColor_9;
	// System.Boolean Photon.Chat.UtilityScripts.TextToggleIsOnTransition::isHover
	bool ___isHover_10;

public:
	inline static int32_t get_offset_of_toggle_4() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D, ___toggle_4)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_toggle_4() const { return ___toggle_4; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_toggle_4() { return &___toggle_4; }
	inline void set_toggle_4(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___toggle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggle_4), (void*)value);
	}

	inline static int32_t get_offset_of__text_5() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D, ____text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__text_5() const { return ____text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__text_5() { return &____text_5; }
	inline void set__text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_5), (void*)value);
	}

	inline static int32_t get_offset_of_NormalOnColor_6() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D, ___NormalOnColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_NormalOnColor_6() const { return ___NormalOnColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_NormalOnColor_6() { return &___NormalOnColor_6; }
	inline void set_NormalOnColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___NormalOnColor_6 = value;
	}

	inline static int32_t get_offset_of_NormalOffColor_7() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D, ___NormalOffColor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_NormalOffColor_7() const { return ___NormalOffColor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_NormalOffColor_7() { return &___NormalOffColor_7; }
	inline void set_NormalOffColor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___NormalOffColor_7 = value;
	}

	inline static int32_t get_offset_of_HoverOnColor_8() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D, ___HoverOnColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_HoverOnColor_8() const { return ___HoverOnColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_HoverOnColor_8() { return &___HoverOnColor_8; }
	inline void set_HoverOnColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___HoverOnColor_8 = value;
	}

	inline static int32_t get_offset_of_HoverOffColor_9() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D, ___HoverOffColor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_HoverOffColor_9() const { return ___HoverOffColor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_HoverOffColor_9() { return &___HoverOffColor_9; }
	inline void set_HoverOffColor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___HoverOffColor_9 = value;
	}

	inline static int32_t get_offset_of_isHover_10() { return static_cast<int32_t>(offsetof(TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D, ___isHover_10)); }
	inline bool get_isHover_10() const { return ___isHover_10; }
	inline bool* get_address_of_isHover_10() { return &___isHover_10; }
	inline void set_isHover_10(bool value)
	{
		___isHover_10 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:

public:
};


// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_40;

public:
	inline static int32_t get_offset_of_m_Content_4() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Content_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Content_4() const { return ___m_Content_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Content_4() { return &___m_Content_4; }
	inline void set_m_Content_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Content_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Content_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Horizontal_5() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Horizontal_5)); }
	inline bool get_m_Horizontal_5() const { return ___m_Horizontal_5; }
	inline bool* get_address_of_m_Horizontal_5() { return &___m_Horizontal_5; }
	inline void set_m_Horizontal_5(bool value)
	{
		___m_Horizontal_5 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_6() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Vertical_6)); }
	inline bool get_m_Vertical_6() const { return ___m_Vertical_6; }
	inline bool* get_address_of_m_Vertical_6() { return &___m_Vertical_6; }
	inline void set_m_Vertical_6(bool value)
	{
		___m_Vertical_6 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_7() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_MovementType_7)); }
	inline int32_t get_m_MovementType_7() const { return ___m_MovementType_7; }
	inline int32_t* get_address_of_m_MovementType_7() { return &___m_MovementType_7; }
	inline void set_m_MovementType_7(int32_t value)
	{
		___m_MovementType_7 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_8() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Elasticity_8)); }
	inline float get_m_Elasticity_8() const { return ___m_Elasticity_8; }
	inline float* get_address_of_m_Elasticity_8() { return &___m_Elasticity_8; }
	inline void set_m_Elasticity_8(float value)
	{
		___m_Elasticity_8 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_9() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Inertia_9)); }
	inline bool get_m_Inertia_9() const { return ___m_Inertia_9; }
	inline bool* get_address_of_m_Inertia_9() { return &___m_Inertia_9; }
	inline void set_m_Inertia_9(bool value)
	{
		___m_Inertia_9 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_10() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_DecelerationRate_10)); }
	inline float get_m_DecelerationRate_10() const { return ___m_DecelerationRate_10; }
	inline float* get_address_of_m_DecelerationRate_10() { return &___m_DecelerationRate_10; }
	inline void set_m_DecelerationRate_10(float value)
	{
		___m_DecelerationRate_10 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_11() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ScrollSensitivity_11)); }
	inline float get_m_ScrollSensitivity_11() const { return ___m_ScrollSensitivity_11; }
	inline float* get_address_of_m_ScrollSensitivity_11() { return &___m_ScrollSensitivity_11; }
	inline void set_m_ScrollSensitivity_11(float value)
	{
		___m_ScrollSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_12() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Viewport_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Viewport_12() const { return ___m_Viewport_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Viewport_12() { return &___m_Viewport_12; }
	inline void set_m_Viewport_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Viewport_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Viewport_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_13() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbar_13)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_HorizontalScrollbar_13() const { return ___m_HorizontalScrollbar_13; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_HorizontalScrollbar_13() { return &___m_HorizontalScrollbar_13; }
	inline void set_m_HorizontalScrollbar_13(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_HorizontalScrollbar_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalScrollbar_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_14() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbar_14)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_VerticalScrollbar_14() const { return ___m_VerticalScrollbar_14; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_VerticalScrollbar_14() { return &___m_VerticalScrollbar_14; }
	inline void set_m_VerticalScrollbar_14(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_VerticalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_15() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarVisibility_15)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_15() const { return ___m_HorizontalScrollbarVisibility_15; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_15() { return &___m_HorizontalScrollbarVisibility_15; }
	inline void set_m_HorizontalScrollbarVisibility_15(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_16() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarVisibility_16)); }
	inline int32_t get_m_VerticalScrollbarVisibility_16() const { return ___m_VerticalScrollbarVisibility_16; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_16() { return &___m_VerticalScrollbarVisibility_16; }
	inline void set_m_VerticalScrollbarVisibility_16(int32_t value)
	{
		___m_VerticalScrollbarVisibility_16 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_17() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarSpacing_17)); }
	inline float get_m_HorizontalScrollbarSpacing_17() const { return ___m_HorizontalScrollbarSpacing_17; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_17() { return &___m_HorizontalScrollbarSpacing_17; }
	inline void set_m_HorizontalScrollbarSpacing_17(float value)
	{
		___m_HorizontalScrollbarSpacing_17 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_18() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarSpacing_18)); }
	inline float get_m_VerticalScrollbarSpacing_18() const { return ___m_VerticalScrollbarSpacing_18; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_18() { return &___m_VerticalScrollbarSpacing_18; }
	inline void set_m_VerticalScrollbarSpacing_18(float value)
	{
		___m_VerticalScrollbarSpacing_18 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_19() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_OnValueChanged_19)); }
	inline ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * get_m_OnValueChanged_19() const { return ___m_OnValueChanged_19; }
	inline ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E ** get_address_of_m_OnValueChanged_19() { return &___m_OnValueChanged_19; }
	inline void set_m_OnValueChanged_19(ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * value)
	{
		___m_OnValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_20() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PointerStartLocalCursor_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PointerStartLocalCursor_20() const { return ___m_PointerStartLocalCursor_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PointerStartLocalCursor_20() { return &___m_PointerStartLocalCursor_20; }
	inline void set_m_PointerStartLocalCursor_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PointerStartLocalCursor_20 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_21() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ContentStartPosition_21)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ContentStartPosition_21() const { return ___m_ContentStartPosition_21; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ContentStartPosition_21() { return &___m_ContentStartPosition_21; }
	inline void set_m_ContentStartPosition_21(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ContentStartPosition_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_22() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ViewRect_22)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ViewRect_22() const { return ___m_ViewRect_22; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ViewRect_22() { return &___m_ViewRect_22; }
	inline void set_m_ViewRect_22(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ViewRect_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ViewRect_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_23() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ContentBounds_23)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_ContentBounds_23() const { return ___m_ContentBounds_23; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_ContentBounds_23() { return &___m_ContentBounds_23; }
	inline void set_m_ContentBounds_23(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_ContentBounds_23 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_24() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ViewBounds_24)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_ViewBounds_24() const { return ___m_ViewBounds_24; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_ViewBounds_24() { return &___m_ViewBounds_24; }
	inline void set_m_ViewBounds_24(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_ViewBounds_24 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_25() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Velocity_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Velocity_25() const { return ___m_Velocity_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Velocity_25() { return &___m_Velocity_25; }
	inline void set_m_Velocity_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Velocity_25 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_26() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Dragging_26)); }
	inline bool get_m_Dragging_26() const { return ___m_Dragging_26; }
	inline bool* get_address_of_m_Dragging_26() { return &___m_Dragging_26; }
	inline void set_m_Dragging_26(bool value)
	{
		___m_Dragging_26 = value;
	}

	inline static int32_t get_offset_of_m_Scrolling_27() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Scrolling_27)); }
	inline bool get_m_Scrolling_27() const { return ___m_Scrolling_27; }
	inline bool* get_address_of_m_Scrolling_27() { return &___m_Scrolling_27; }
	inline void set_m_Scrolling_27(bool value)
	{
		___m_Scrolling_27 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_28() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevPosition_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PrevPosition_28() const { return ___m_PrevPosition_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PrevPosition_28() { return &___m_PrevPosition_28; }
	inline void set_m_PrevPosition_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PrevPosition_28 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_29() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevContentBounds_29)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_PrevContentBounds_29() const { return ___m_PrevContentBounds_29; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_PrevContentBounds_29() { return &___m_PrevContentBounds_29; }
	inline void set_m_PrevContentBounds_29(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_PrevContentBounds_29 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_30() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevViewBounds_30)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_PrevViewBounds_30() const { return ___m_PrevViewBounds_30; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_PrevViewBounds_30() { return &___m_PrevViewBounds_30; }
	inline void set_m_PrevViewBounds_30(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_PrevViewBounds_30 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_31() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HasRebuiltLayout_31)); }
	inline bool get_m_HasRebuiltLayout_31() const { return ___m_HasRebuiltLayout_31; }
	inline bool* get_address_of_m_HasRebuiltLayout_31() { return &___m_HasRebuiltLayout_31; }
	inline void set_m_HasRebuiltLayout_31(bool value)
	{
		___m_HasRebuiltLayout_31 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_32() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HSliderExpand_32)); }
	inline bool get_m_HSliderExpand_32() const { return ___m_HSliderExpand_32; }
	inline bool* get_address_of_m_HSliderExpand_32() { return &___m_HSliderExpand_32; }
	inline void set_m_HSliderExpand_32(bool value)
	{
		___m_HSliderExpand_32 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_33() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VSliderExpand_33)); }
	inline bool get_m_VSliderExpand_33() const { return ___m_VSliderExpand_33; }
	inline bool* get_address_of_m_VSliderExpand_33() { return &___m_VSliderExpand_33; }
	inline void set_m_VSliderExpand_33(bool value)
	{
		___m_VSliderExpand_33 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_34() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HSliderHeight_34)); }
	inline float get_m_HSliderHeight_34() const { return ___m_HSliderHeight_34; }
	inline float* get_address_of_m_HSliderHeight_34() { return &___m_HSliderHeight_34; }
	inline void set_m_HSliderHeight_34(float value)
	{
		___m_HSliderHeight_34 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_35() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VSliderWidth_35)); }
	inline float get_m_VSliderWidth_35() const { return ___m_VSliderWidth_35; }
	inline float* get_address_of_m_VSliderWidth_35() { return &___m_VSliderWidth_35; }
	inline void set_m_VSliderWidth_35(float value)
	{
		___m_VSliderWidth_35 = value;
	}

	inline static int32_t get_offset_of_m_Rect_36() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Rect_36)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_36() const { return ___m_Rect_36; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_36() { return &___m_Rect_36; }
	inline void set_m_Rect_36(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_37() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarRect_37)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HorizontalScrollbarRect_37() const { return ___m_HorizontalScrollbarRect_37; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HorizontalScrollbarRect_37() { return &___m_HorizontalScrollbarRect_37; }
	inline void set_m_HorizontalScrollbarRect_37(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HorizontalScrollbarRect_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalScrollbarRect_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_38() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarRect_38)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_VerticalScrollbarRect_38() const { return ___m_VerticalScrollbarRect_38; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_VerticalScrollbarRect_38() { return &___m_VerticalScrollbarRect_38; }
	inline void set_m_VerticalScrollbarRect_38(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_VerticalScrollbarRect_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarRect_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_39() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Tracker_39)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_39() const { return ___m_Tracker_39; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_39() { return &___m_Tracker_39; }
	inline void set_m_Tracker_39(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_39 = value;
	}

	inline static int32_t get_offset_of_m_Corners_40() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Corners_40)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_40() const { return ___m_Corners_40; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_40() { return &___m_Corners_40; }
	inline void set_m_Corners_40(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_40), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// BotGameManager
struct BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853  : public MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C
{
public:
	// UnityEngine.UI.Text BotGameManager::players
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___players_5;
	// UnityEngine.GameObject BotGameManager::choicePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___choicePanel_6;
	// UnityEngine.UI.Text BotGameManager::betValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___betValue_7;
	// UnityEngine.UI.Text BotGameManager::choiceMessage
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___choiceMessage_8;
	// System.String BotGameManager::MASTER_MESSAGE
	String_t* ___MASTER_MESSAGE_9;
	// UnityEngine.UI.Text BotGameManager::timerDisplay
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerDisplay_10;
	// System.Single BotGameManager::timerLeft
	float ___timerLeft_11;
	// System.Single BotGameManager::preTimerLeft
	float ___preTimerLeft_12;
	// UnityEngine.GameObject BotGameManager::result
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___result_13;
	// UnityEngine.GameObject BotGameManager::leaveRoomButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___leaveRoomButton_14;
	// System.Single BotGameManager::timerToStartGame
	float ___timerToStartGame_15;
	// System.Single BotGameManager::timerToPreparing
	float ___timerToPreparing_16;
	// System.Int32 BotGameManager::percentOfWin
	int32_t ___percentOfWin_17;
	// System.Int32 BotGameManager::bet
	int32_t ___bet_18;
	// System.Int32 BotGameManager::coins
	int32_t ___coins_19;
	// System.Int32 BotGameManager::botCoins
	int32_t ___botCoins_20;
	// System.Int32 BotGameManager::percent
	int32_t ___percent_21;
	// GameDataManager BotGameManager::gdm
	GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * ___gdm_22;

public:
	inline static int32_t get_offset_of_players_5() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___players_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_players_5() const { return ___players_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_players_5() { return &___players_5; }
	inline void set_players_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___players_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_5), (void*)value);
	}

	inline static int32_t get_offset_of_choicePanel_6() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___choicePanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_choicePanel_6() const { return ___choicePanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_choicePanel_6() { return &___choicePanel_6; }
	inline void set_choicePanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___choicePanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___choicePanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_betValue_7() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___betValue_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_betValue_7() const { return ___betValue_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_betValue_7() { return &___betValue_7; }
	inline void set_betValue_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___betValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betValue_7), (void*)value);
	}

	inline static int32_t get_offset_of_choiceMessage_8() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___choiceMessage_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_choiceMessage_8() const { return ___choiceMessage_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_choiceMessage_8() { return &___choiceMessage_8; }
	inline void set_choiceMessage_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___choiceMessage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___choiceMessage_8), (void*)value);
	}

	inline static int32_t get_offset_of_MASTER_MESSAGE_9() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___MASTER_MESSAGE_9)); }
	inline String_t* get_MASTER_MESSAGE_9() const { return ___MASTER_MESSAGE_9; }
	inline String_t** get_address_of_MASTER_MESSAGE_9() { return &___MASTER_MESSAGE_9; }
	inline void set_MASTER_MESSAGE_9(String_t* value)
	{
		___MASTER_MESSAGE_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MASTER_MESSAGE_9), (void*)value);
	}

	inline static int32_t get_offset_of_timerDisplay_10() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___timerDisplay_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerDisplay_10() const { return ___timerDisplay_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerDisplay_10() { return &___timerDisplay_10; }
	inline void set_timerDisplay_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerDisplay_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerDisplay_10), (void*)value);
	}

	inline static int32_t get_offset_of_timerLeft_11() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___timerLeft_11)); }
	inline float get_timerLeft_11() const { return ___timerLeft_11; }
	inline float* get_address_of_timerLeft_11() { return &___timerLeft_11; }
	inline void set_timerLeft_11(float value)
	{
		___timerLeft_11 = value;
	}

	inline static int32_t get_offset_of_preTimerLeft_12() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___preTimerLeft_12)); }
	inline float get_preTimerLeft_12() const { return ___preTimerLeft_12; }
	inline float* get_address_of_preTimerLeft_12() { return &___preTimerLeft_12; }
	inline void set_preTimerLeft_12(float value)
	{
		___preTimerLeft_12 = value;
	}

	inline static int32_t get_offset_of_result_13() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___result_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_result_13() const { return ___result_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_result_13() { return &___result_13; }
	inline void set_result_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___result_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_13), (void*)value);
	}

	inline static int32_t get_offset_of_leaveRoomButton_14() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___leaveRoomButton_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_leaveRoomButton_14() const { return ___leaveRoomButton_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_leaveRoomButton_14() { return &___leaveRoomButton_14; }
	inline void set_leaveRoomButton_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___leaveRoomButton_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leaveRoomButton_14), (void*)value);
	}

	inline static int32_t get_offset_of_timerToStartGame_15() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___timerToStartGame_15)); }
	inline float get_timerToStartGame_15() const { return ___timerToStartGame_15; }
	inline float* get_address_of_timerToStartGame_15() { return &___timerToStartGame_15; }
	inline void set_timerToStartGame_15(float value)
	{
		___timerToStartGame_15 = value;
	}

	inline static int32_t get_offset_of_timerToPreparing_16() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___timerToPreparing_16)); }
	inline float get_timerToPreparing_16() const { return ___timerToPreparing_16; }
	inline float* get_address_of_timerToPreparing_16() { return &___timerToPreparing_16; }
	inline void set_timerToPreparing_16(float value)
	{
		___timerToPreparing_16 = value;
	}

	inline static int32_t get_offset_of_percentOfWin_17() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___percentOfWin_17)); }
	inline int32_t get_percentOfWin_17() const { return ___percentOfWin_17; }
	inline int32_t* get_address_of_percentOfWin_17() { return &___percentOfWin_17; }
	inline void set_percentOfWin_17(int32_t value)
	{
		___percentOfWin_17 = value;
	}

	inline static int32_t get_offset_of_bet_18() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___bet_18)); }
	inline int32_t get_bet_18() const { return ___bet_18; }
	inline int32_t* get_address_of_bet_18() { return &___bet_18; }
	inline void set_bet_18(int32_t value)
	{
		___bet_18 = value;
	}

	inline static int32_t get_offset_of_coins_19() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___coins_19)); }
	inline int32_t get_coins_19() const { return ___coins_19; }
	inline int32_t* get_address_of_coins_19() { return &___coins_19; }
	inline void set_coins_19(int32_t value)
	{
		___coins_19 = value;
	}

	inline static int32_t get_offset_of_botCoins_20() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___botCoins_20)); }
	inline int32_t get_botCoins_20() const { return ___botCoins_20; }
	inline int32_t* get_address_of_botCoins_20() { return &___botCoins_20; }
	inline void set_botCoins_20(int32_t value)
	{
		___botCoins_20 = value;
	}

	inline static int32_t get_offset_of_percent_21() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___percent_21)); }
	inline int32_t get_percent_21() const { return ___percent_21; }
	inline int32_t* get_address_of_percent_21() { return &___percent_21; }
	inline void set_percent_21(int32_t value)
	{
		___percent_21 = value;
	}

	inline static int32_t get_offset_of_gdm_22() { return static_cast<int32_t>(offsetof(BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853, ___gdm_22)); }
	inline GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * get_gdm_22() const { return ___gdm_22; }
	inline GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 ** get_address_of_gdm_22() { return &___gdm_22; }
	inline void set_gdm_22(GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * value)
	{
		___gdm_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdm_22), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C
{
public:
	// Photon.Pun.PhotonView GameManager::myPhotonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___myPhotonView_5;
	// UnityEngine.UI.Text GameManager::debug
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___debug_6;
	// UnityEngine.UI.Text GameManager::players
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___players_7;
	// UnityEngine.GameObject GameManager::choicePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___choicePanel_8;
	// UnityEngine.GameObject GameManager::waitingPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___waitingPanel_9;
	// UnityEngine.UI.Text GameManager::waitingTimerDisplay
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___waitingTimerDisplay_10;
	// System.Int32 GameManager::waitingTimer
	int32_t ___waitingTimer_11;
	// UnityEngine.UI.Text GameManager::betValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___betValue_12;
	// UnityEngine.UI.Text GameManager::choiceMessage
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___choiceMessage_13;
	// UnityEngine.UI.Text GameManager::timerDisplay
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerDisplay_16;
	// System.Single GameManager::timerLeft
	float ___timerLeft_17;
	// System.Single GameManager::preTimerLeft
	float ___preTimerLeft_18;
	// UnityEngine.GameObject GameManager::startButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___startButton_19;
	// UnityEngine.GameObject GameManager::leaveRoomButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___leaveRoomButton_20;
	// UnityEngine.GameObject GameManager::result
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___result_21;
	// UnityEngine.GameObject GameManager::messagePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___messagePanel_22;
	// UnityEngine.UI.Text GameManager::messageDisplay
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___messageDisplay_23;
	// System.Int32 GameManager::playerCount
	int32_t ___playerCount_24;
	// System.Int32 GameManager::roomSize
	int32_t ___roomSize_25;
	// System.Single GameManager::timerToStartGame
	float ___timerToStartGame_26;
	// System.Single GameManager::timerToPreparing
	float ___timerToPreparing_27;
	// System.Int32 GameManager::percentOfWin
	int32_t ___percentOfWin_28;
	// System.Int32 GameManager::bet
	int32_t ___bet_29;
	// System.Int32 GameManager::coins
	int32_t ___coins_30;
	// System.Int32 GameManager::percent
	int32_t ___percent_31;
	// GameDataManager GameManager::gdm
	GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * ___gdm_32;
	// System.Boolean GameManager::isFullRoom
	bool ___isFullRoom_33;
	// System.Boolean GameManager::isStarted
	bool ___isStarted_34;

public:
	inline static int32_t get_offset_of_myPhotonView_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___myPhotonView_5)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_myPhotonView_5() const { return ___myPhotonView_5; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_myPhotonView_5() { return &___myPhotonView_5; }
	inline void set_myPhotonView_5(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___myPhotonView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myPhotonView_5), (void*)value);
	}

	inline static int32_t get_offset_of_debug_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___debug_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_debug_6() const { return ___debug_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_debug_6() { return &___debug_6; }
	inline void set_debug_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___debug_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debug_6), (void*)value);
	}

	inline static int32_t get_offset_of_players_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___players_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_players_7() const { return ___players_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_players_7() { return &___players_7; }
	inline void set_players_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___players_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_7), (void*)value);
	}

	inline static int32_t get_offset_of_choicePanel_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___choicePanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_choicePanel_8() const { return ___choicePanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_choicePanel_8() { return &___choicePanel_8; }
	inline void set_choicePanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___choicePanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___choicePanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_waitingPanel_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___waitingPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_waitingPanel_9() const { return ___waitingPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_waitingPanel_9() { return &___waitingPanel_9; }
	inline void set_waitingPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___waitingPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitingPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_waitingTimerDisplay_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___waitingTimerDisplay_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_waitingTimerDisplay_10() const { return ___waitingTimerDisplay_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_waitingTimerDisplay_10() { return &___waitingTimerDisplay_10; }
	inline void set_waitingTimerDisplay_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___waitingTimerDisplay_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitingTimerDisplay_10), (void*)value);
	}

	inline static int32_t get_offset_of_waitingTimer_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___waitingTimer_11)); }
	inline int32_t get_waitingTimer_11() const { return ___waitingTimer_11; }
	inline int32_t* get_address_of_waitingTimer_11() { return &___waitingTimer_11; }
	inline void set_waitingTimer_11(int32_t value)
	{
		___waitingTimer_11 = value;
	}

	inline static int32_t get_offset_of_betValue_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___betValue_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_betValue_12() const { return ___betValue_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_betValue_12() { return &___betValue_12; }
	inline void set_betValue_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___betValue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betValue_12), (void*)value);
	}

	inline static int32_t get_offset_of_choiceMessage_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___choiceMessage_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_choiceMessage_13() const { return ___choiceMessage_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_choiceMessage_13() { return &___choiceMessage_13; }
	inline void set_choiceMessage_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___choiceMessage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___choiceMessage_13), (void*)value);
	}

	inline static int32_t get_offset_of_timerDisplay_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___timerDisplay_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerDisplay_16() const { return ___timerDisplay_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerDisplay_16() { return &___timerDisplay_16; }
	inline void set_timerDisplay_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerDisplay_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerDisplay_16), (void*)value);
	}

	inline static int32_t get_offset_of_timerLeft_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___timerLeft_17)); }
	inline float get_timerLeft_17() const { return ___timerLeft_17; }
	inline float* get_address_of_timerLeft_17() { return &___timerLeft_17; }
	inline void set_timerLeft_17(float value)
	{
		___timerLeft_17 = value;
	}

	inline static int32_t get_offset_of_preTimerLeft_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___preTimerLeft_18)); }
	inline float get_preTimerLeft_18() const { return ___preTimerLeft_18; }
	inline float* get_address_of_preTimerLeft_18() { return &___preTimerLeft_18; }
	inline void set_preTimerLeft_18(float value)
	{
		___preTimerLeft_18 = value;
	}

	inline static int32_t get_offset_of_startButton_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___startButton_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_startButton_19() const { return ___startButton_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_startButton_19() { return &___startButton_19; }
	inline void set_startButton_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___startButton_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startButton_19), (void*)value);
	}

	inline static int32_t get_offset_of_leaveRoomButton_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___leaveRoomButton_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_leaveRoomButton_20() const { return ___leaveRoomButton_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_leaveRoomButton_20() { return &___leaveRoomButton_20; }
	inline void set_leaveRoomButton_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___leaveRoomButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leaveRoomButton_20), (void*)value);
	}

	inline static int32_t get_offset_of_result_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___result_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_result_21() const { return ___result_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_result_21() { return &___result_21; }
	inline void set_result_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___result_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_21), (void*)value);
	}

	inline static int32_t get_offset_of_messagePanel_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___messagePanel_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_messagePanel_22() const { return ___messagePanel_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_messagePanel_22() { return &___messagePanel_22; }
	inline void set_messagePanel_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___messagePanel_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messagePanel_22), (void*)value);
	}

	inline static int32_t get_offset_of_messageDisplay_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___messageDisplay_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_messageDisplay_23() const { return ___messageDisplay_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_messageDisplay_23() { return &___messageDisplay_23; }
	inline void set_messageDisplay_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___messageDisplay_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageDisplay_23), (void*)value);
	}

	inline static int32_t get_offset_of_playerCount_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerCount_24)); }
	inline int32_t get_playerCount_24() const { return ___playerCount_24; }
	inline int32_t* get_address_of_playerCount_24() { return &___playerCount_24; }
	inline void set_playerCount_24(int32_t value)
	{
		___playerCount_24 = value;
	}

	inline static int32_t get_offset_of_roomSize_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___roomSize_25)); }
	inline int32_t get_roomSize_25() const { return ___roomSize_25; }
	inline int32_t* get_address_of_roomSize_25() { return &___roomSize_25; }
	inline void set_roomSize_25(int32_t value)
	{
		___roomSize_25 = value;
	}

	inline static int32_t get_offset_of_timerToStartGame_26() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___timerToStartGame_26)); }
	inline float get_timerToStartGame_26() const { return ___timerToStartGame_26; }
	inline float* get_address_of_timerToStartGame_26() { return &___timerToStartGame_26; }
	inline void set_timerToStartGame_26(float value)
	{
		___timerToStartGame_26 = value;
	}

	inline static int32_t get_offset_of_timerToPreparing_27() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___timerToPreparing_27)); }
	inline float get_timerToPreparing_27() const { return ___timerToPreparing_27; }
	inline float* get_address_of_timerToPreparing_27() { return &___timerToPreparing_27; }
	inline void set_timerToPreparing_27(float value)
	{
		___timerToPreparing_27 = value;
	}

	inline static int32_t get_offset_of_percentOfWin_28() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___percentOfWin_28)); }
	inline int32_t get_percentOfWin_28() const { return ___percentOfWin_28; }
	inline int32_t* get_address_of_percentOfWin_28() { return &___percentOfWin_28; }
	inline void set_percentOfWin_28(int32_t value)
	{
		___percentOfWin_28 = value;
	}

	inline static int32_t get_offset_of_bet_29() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___bet_29)); }
	inline int32_t get_bet_29() const { return ___bet_29; }
	inline int32_t* get_address_of_bet_29() { return &___bet_29; }
	inline void set_bet_29(int32_t value)
	{
		___bet_29 = value;
	}

	inline static int32_t get_offset_of_coins_30() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___coins_30)); }
	inline int32_t get_coins_30() const { return ___coins_30; }
	inline int32_t* get_address_of_coins_30() { return &___coins_30; }
	inline void set_coins_30(int32_t value)
	{
		___coins_30 = value;
	}

	inline static int32_t get_offset_of_percent_31() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___percent_31)); }
	inline int32_t get_percent_31() const { return ___percent_31; }
	inline int32_t* get_address_of_percent_31() { return &___percent_31; }
	inline void set_percent_31(int32_t value)
	{
		___percent_31 = value;
	}

	inline static int32_t get_offset_of_gdm_32() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gdm_32)); }
	inline GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * get_gdm_32() const { return ___gdm_32; }
	inline GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 ** get_address_of_gdm_32() { return &___gdm_32; }
	inline void set_gdm_32(GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * value)
	{
		___gdm_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdm_32), (void*)value);
	}

	inline static int32_t get_offset_of_isFullRoom_33() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isFullRoom_33)); }
	inline bool get_isFullRoom_33() const { return ___isFullRoom_33; }
	inline bool* get_address_of_isFullRoom_33() { return &___isFullRoom_33; }
	inline void set_isFullRoom_33(bool value)
	{
		___isFullRoom_33 = value;
	}

	inline static int32_t get_offset_of_isStarted_34() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isStarted_34)); }
	inline bool get_isStarted_34() const { return ___isStarted_34; }
	inline bool* get_address_of_isStarted_34() { return &___isStarted_34; }
	inline void set_isStarted_34(bool value)
	{
		___isStarted_34 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// StartingGameController
struct StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36  : public MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C
{
public:
	// Photon.Pun.PhotonView StartingGameController::myPhotonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___myPhotonView_5;
	// UnityEngine.UI.Text StartingGameController::roomCountDisplay
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___roomCountDisplay_6;
	// UnityEngine.UI.Text StartingGameController::timerToStartDisplay
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerToStartDisplay_7;
	// UnityEngine.UI.Text StartingGameController::INFA
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___INFA_8;
	// System.Int32 StartingGameController::playerCount
	int32_t ___playerCount_9;
	// System.Int32 StartingGameController::roomSize
	int32_t ___roomSize_10;
	// System.Boolean StartingGameController::readyToCountDown
	bool ___readyToCountDown_11;
	// System.Boolean StartingGameController::readyToStart
	bool ___readyToStart_12;
	// System.Boolean StartingGameController::startingGame
	bool ___startingGame_13;
	// System.Single StartingGameController::timerToStartGame
	float ___timerToStartGame_14;
	// System.Single StartingGameController::notFullGameTimer
	float ___notFullGameTimer_15;
	// System.Single StartingGameController::fullGameTimer
	float ___fullGameTimer_16;
	// System.Single StartingGameController::maxWaitTime
	float ___maxWaitTime_17;
	// System.Single StartingGameController::maxFullGameWaitTime
	float ___maxFullGameWaitTime_18;

public:
	inline static int32_t get_offset_of_myPhotonView_5() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___myPhotonView_5)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_myPhotonView_5() const { return ___myPhotonView_5; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_myPhotonView_5() { return &___myPhotonView_5; }
	inline void set_myPhotonView_5(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___myPhotonView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myPhotonView_5), (void*)value);
	}

	inline static int32_t get_offset_of_roomCountDisplay_6() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___roomCountDisplay_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_roomCountDisplay_6() const { return ___roomCountDisplay_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_roomCountDisplay_6() { return &___roomCountDisplay_6; }
	inline void set_roomCountDisplay_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___roomCountDisplay_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roomCountDisplay_6), (void*)value);
	}

	inline static int32_t get_offset_of_timerToStartDisplay_7() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___timerToStartDisplay_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerToStartDisplay_7() const { return ___timerToStartDisplay_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerToStartDisplay_7() { return &___timerToStartDisplay_7; }
	inline void set_timerToStartDisplay_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerToStartDisplay_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerToStartDisplay_7), (void*)value);
	}

	inline static int32_t get_offset_of_INFA_8() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___INFA_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_INFA_8() const { return ___INFA_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_INFA_8() { return &___INFA_8; }
	inline void set_INFA_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___INFA_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___INFA_8), (void*)value);
	}

	inline static int32_t get_offset_of_playerCount_9() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___playerCount_9)); }
	inline int32_t get_playerCount_9() const { return ___playerCount_9; }
	inline int32_t* get_address_of_playerCount_9() { return &___playerCount_9; }
	inline void set_playerCount_9(int32_t value)
	{
		___playerCount_9 = value;
	}

	inline static int32_t get_offset_of_roomSize_10() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___roomSize_10)); }
	inline int32_t get_roomSize_10() const { return ___roomSize_10; }
	inline int32_t* get_address_of_roomSize_10() { return &___roomSize_10; }
	inline void set_roomSize_10(int32_t value)
	{
		___roomSize_10 = value;
	}

	inline static int32_t get_offset_of_readyToCountDown_11() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___readyToCountDown_11)); }
	inline bool get_readyToCountDown_11() const { return ___readyToCountDown_11; }
	inline bool* get_address_of_readyToCountDown_11() { return &___readyToCountDown_11; }
	inline void set_readyToCountDown_11(bool value)
	{
		___readyToCountDown_11 = value;
	}

	inline static int32_t get_offset_of_readyToStart_12() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___readyToStart_12)); }
	inline bool get_readyToStart_12() const { return ___readyToStart_12; }
	inline bool* get_address_of_readyToStart_12() { return &___readyToStart_12; }
	inline void set_readyToStart_12(bool value)
	{
		___readyToStart_12 = value;
	}

	inline static int32_t get_offset_of_startingGame_13() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___startingGame_13)); }
	inline bool get_startingGame_13() const { return ___startingGame_13; }
	inline bool* get_address_of_startingGame_13() { return &___startingGame_13; }
	inline void set_startingGame_13(bool value)
	{
		___startingGame_13 = value;
	}

	inline static int32_t get_offset_of_timerToStartGame_14() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___timerToStartGame_14)); }
	inline float get_timerToStartGame_14() const { return ___timerToStartGame_14; }
	inline float* get_address_of_timerToStartGame_14() { return &___timerToStartGame_14; }
	inline void set_timerToStartGame_14(float value)
	{
		___timerToStartGame_14 = value;
	}

	inline static int32_t get_offset_of_notFullGameTimer_15() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___notFullGameTimer_15)); }
	inline float get_notFullGameTimer_15() const { return ___notFullGameTimer_15; }
	inline float* get_address_of_notFullGameTimer_15() { return &___notFullGameTimer_15; }
	inline void set_notFullGameTimer_15(float value)
	{
		___notFullGameTimer_15 = value;
	}

	inline static int32_t get_offset_of_fullGameTimer_16() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___fullGameTimer_16)); }
	inline float get_fullGameTimer_16() const { return ___fullGameTimer_16; }
	inline float* get_address_of_fullGameTimer_16() { return &___fullGameTimer_16; }
	inline void set_fullGameTimer_16(float value)
	{
		___fullGameTimer_16 = value;
	}

	inline static int32_t get_offset_of_maxWaitTime_17() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___maxWaitTime_17)); }
	inline float get_maxWaitTime_17() const { return ___maxWaitTime_17; }
	inline float* get_address_of_maxWaitTime_17() { return &___maxWaitTime_17; }
	inline void set_maxWaitTime_17(float value)
	{
		___maxWaitTime_17 = value;
	}

	inline static int32_t get_offset_of_maxFullGameWaitTime_18() { return static_cast<int32_t>(offsetof(StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36, ___maxFullGameWaitTime_18)); }
	inline float get_maxFullGameWaitTime_18() const { return ___maxFullGameWaitTime_18; }
	inline float* get_address_of_maxFullGameWaitTime_18() { return &___maxFullGameWaitTime_18; }
	inline void set_maxFullGameWaitTime_18(float value)
	{
		___maxFullGameWaitTime_18 = value;
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ShopItem[]
struct ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  m_Items[1];

public:
	inline ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteBase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___itemName_1), (void*)NULL);
		#endif
	}
	inline ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteBase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___itemName_1), (void*)NULL);
		#endif
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// Photon.Realtime.Player[]
struct PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * m_Items[1];

public:
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<!0> System.Collections.Generic.EqualityComparer`1<System.Object>::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * EqualityComparer_1_get_Default_mBF7BCF1F2EA5EC8E0470D376856509EF9D61FCF2_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(!!0,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_SetEase_TisRuntimeObject_m17D546F0CC41676B108187269B5BB10959EFA2A4_gshared (RuntimeObject * ___t0, int32_t ___ease1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(!!0,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TweenSettingsExtensions_OnComplete_TisRuntimeObject_m23E1F90FEE2A0CA4D04C244B7A7A83A541855DC0_gshared (RuntimeObject * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Int32Enum>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_Result_m337A232CED326558FB5C160D4F12229547772F6E_gshared (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method);

// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean ShopItem::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShopItem_Equals_mA3B240322636B42DC001B6A61038126CF9717040 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.EqualityComparer`1<!0> System.Collections.Generic.EqualityComparer`1<System.String>::get_Default()
inline EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E * EqualityComparer_1_get_Default_mF17F3E1366EF6A8458598F76CEFAF5CD50FEBF4C (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E * (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBF7BCF1F2EA5EC8E0470D376856509EF9D61FCF2_gshared)(method);
}
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 ShopItem::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShopItem_GetHashCode_mCC809A3D08CA6506923A833DB0B01A52DCF2CB15 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ShopItemUI/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m4C17EC9CE3DDAE51E0DF002492118B3F643958D3 (U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4 (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void ShopItemUI/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mEAF95E3A52CEB727E0F183F08CDB2A6BBE831F62 (U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E * __this, const RuntimeMethod* method);
// System.Void ShopItemUI/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mB11C70B87F3D95A3C5A73E09027D1374CE5BE6C9 (U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 * __this, const RuntimeMethod* method);
// System.Void ShopItemUI::SetPurchaseBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetPurchaseBtn_mAEEFE5771D4F71702BEE0D190BED645E304B51D4 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 DG.Tweening.ShortcutExtensions::DOComplete(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShortcutExtensions_DOComplete_m1939237DDDE3FA508E979D2AE3DC21523918EE40 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___target0, bool ___withCallbacks1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakePosition(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean,System.Boolean,DG.Tweening.ShakeRandomnessMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ShortcutExtensions_DOShakePosition_mCC169349BF0889172A50B92A7685268CFB0C1BC9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, float ___duration1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, bool ___fadeOut6, int32_t ___randomnessMode7, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tweener>(!!0,DG.Tweening.Ease)
inline Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * TweenSettingsExtensions_SetEase_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m6BAB25D1003D2F0AE472B5DE2E58766F0CDB873F (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * (*) (Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 *, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m17D546F0CC41676B108187269B5BB10959EFA2A4_gshared)(___t0, ___ease1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 GameDataManager::get_GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameDataManager_get_GetChar_m8E999AF477B7B0547005964AAE06718BC7BFA670 (GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * __this, const RuntimeMethod* method);
// ShopItem ShopItemDatabase::getShopItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089 (ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Void ShopUI::GenerateShopItemUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_GenerateShopItemUI_mB42C460546CD4FCA839C7CC4417EA31E926C39B0 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method);
// System.Void ShopUI::GenerateShopCharUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_GenerateShopCharUI_mE923F15DC06237D6537D7E77A33A4D8FA0655F75 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method);
// System.Void ShopUI::AutoScrollShopList(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_AutoScrollShopList_m314DE45BB73B06BC015B63F6F35FFEA7B8D550AD (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___itemIndex0, const RuntimeMethod* method);
// System.Int32 ShopItemDatabase::get_ShopItemsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7 (ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m18393A7B91359B013466A984325F233535A6941D (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<ShopItemUI>()
inline ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * GameObject_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_m464EB42B6910FD8C97DD92361D40FB08B3855CA1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void ShopItemUI::SetItemPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetItemPosition_m009251EA257EEEB03F61FE03E7A0965FAA71C416 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ShopItemUI::SetShopItemName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetShopItemName_mA498860B8C3EAE585FB4F4DCC629B239BFAA9CC0 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void ShopItemUI::SetShopItemImage(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetShopItemImage_m2CF3C61FEB5059FF35904186D23EEC33F25705E5 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite0, const RuntimeMethod* method);
// System.Void ShopItemUI::SetShopItemPrice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetShopItemPrice_m43F5AC3C58483AF9B7D16DA2DBF7B9A983D4777B (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___price0, const RuntimeMethod* method);
// System.Void ShopItemUI::SetBuffValuemPercent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetBuffValuemPercent_m6A8D796FE65C02F7A7D984A1470F631C6B6CEB91 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___buffPercent0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ShopItemUI::OnShopItemSelected(System.Int32,UnityEngine.Events.UnityAction`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_OnShopItemSelected_m91BF271F25FF769F6096C00D1BDD0A3A755B1A1B (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___itemIndex0, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action1, const RuntimeMethod* method);
// System.Void ShopItemUI::OnShopItemPurchase(System.Int32,UnityEngine.Events.UnityAction`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_OnShopItemPurchase_m5CFFC75410899F3F6DBAB4C26284DE08F5E1B58A (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___itemIndex0, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Boolean[] GameDataManager::GetPurchaseChars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* GameDataManager_GetPurchaseChars_mC400B6984F3B5CEC107ADC2808EE683FF3020BD7 (GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * __this, int32_t ___lengthArray0, const RuntimeMethod* method);
// System.Void ShopItemUI::SetShopItemAsPurchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetShopItemAsPurchase_m5ED5529533F3A5A3E0233635F37343E17A097040 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method);
// System.Void ShopItemUI::SelectItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SelectItem_mD64D24AACE6EE22AE9503F4528121E637645877C (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method);
// System.Int32 GameDataManager::get_GetItemsBuffPercent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameDataManager_get_GetItemsBuffPercent_mECCBABFE6E8C9162518FCBDDB8A473B116836F4C (GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GameDataManager::SetCharBuffPercent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataManager_SetCharBuffPercent_mFC768B84C675B7353A293F5A44B7E477735FFC85 (GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * __this, int32_t ___charBuffPercent0, const RuntimeMethod* method);
// System.Void ShopItemUI::OnShopCharPurchase(System.Int32,UnityEngine.Events.UnityAction`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_OnShopCharPurchase_m95BB0BBD3C56D1F3F1696045E68034AC9B8165FC (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___itemIndex0, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action1, const RuntimeMethod* method);
// System.Void ShopUI::SelectItemUI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_SelectItemUI_mFB62DCC67D7A46726AEE9454E51EF569376AFA80 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___itemIndex0, const RuntimeMethod* method);
// ShopItemUI ShopUI::GetItemUI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * ShopUI_GetItemUI_m6FCD5E179836617182E7A622EB35076B4E257B3D (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void ShopItemUI::DeselectItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_DeselectItem_mE50FE4633BBB82F9EA33A59B6B24CAF410591BA9 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method);
// System.Void GameDataManager::SetChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataManager_SetChar_m58A0903E0BF369C6A7FA4A1C3D3147026DA03F0E (GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void ShopUI::ChangeCharSkin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_ChangeCharSkin_m87A1CDDF6EA72F9086C709DD2A562A0BB903143A (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ShopItemUI>()
inline ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * Component_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_mA32D793C70D2370A48CE18EEFC52ADBEC4177F10 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void ShopUI::AnimateNotEnoughCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_AnimateNotEnoughCoins_m1367E13B1160E29C50432100D72EF4F1F4EC85FB (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method);
// System.Void ShopItemUI::AnimateShakeItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_AnimateShakeItem_m65DEBA9CC04E0EBD8FD6893BD5EFA633DF85F0D4 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method);
// System.Void GameDataManager::SetCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataManager_SetCoins_m4658F12B2A571F630EC3742A19CB0AF65E31E1F5 (GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * __this, int32_t ___coins0, const RuntimeMethod* method);
// System.Void ShopItemDatabase::PurchaseItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemDatabase_PurchaseItem_m4FF967FBE0ADE761C17B6576A3BE97386D7446BE (ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void GameDataManager::SetPurchasedChar(System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameDataManager_SetPurchasedChar_m60B121F6F17130AFD371594969C0B843E7C37D5F (GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * __this, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___purchasedChars0, const RuntimeMethod* method);
// System.Void ShopUI::addToInventory(ShopItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_addToInventory_m84D02E867C2D47E633FCC3B626E3378EC4FB2B54 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  ___shopItem0, const RuntimeMethod* method);
// System.Void InventoryItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItem__ctor_mDA2BEAE4ED6F565E6B7762D8A33C6D12BB7FD133 (InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * __this, const RuntimeMethod* method);
// System.Void InventoryItemDatabase::addItem(InventoryItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventoryItemDatabase_addItem_m5179D43E1B83C47B5DE0D481424C6D1349A102C2 (InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5 * __this, InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * ___item0, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * DOTweenModuleUI_DOFade_m8486AF190AF2A12A2447B9F151B26A6DFA15D712 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.TweenSettingsExtensions::From(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * TweenSettingsExtensions_From_mA1870ECE2541C4B0BF61942EDC132F0AE9C36090 (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ___t0, float ___fromAlphaValue1, bool ___setImmediately2, bool ___isRelative3, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662 (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>>(!!0,DG.Tweening.TweenCallback)
inline TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05 (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * ___t0, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * (*) (TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 *, TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_m23E1F90FEE2A0CA4D04C244B7A7A83A541855DC0_gshared)(___t0, ___action1, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// GameDataManager GameDataManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * GameDataManager_get_Instance_m1FE0093ED84247042DFF177BE1837BD39EB682EE (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void StartingGameController::playerCountUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_playerCountUpdate_m25D7DE59A2E4469C605D30CF2725DD631B784568 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853 (const RuntimeMethod* method);
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743 (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA (RoomInfo_t7069F437E8D00842881716F7573A4ED7EA119889 * __this, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Hashtable_get_Item_m176CF45DF3E75C0D72A9C9D60524D948DD086FD1 (Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// Photon.Realtime.Player[] Photon.Pun.PhotonNetwork::get_PlayerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3* PhotonNetwork_get_PlayerList_m58666A21470BC619A3B134B9C0E303070A9BCCBB (const RuntimeMethod* method);
// System.Byte Photon.Realtime.Room::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Room_get_MaxPlayers_m993971760C8EFD49F8B2DC7A897E58550C5A616A (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::get_IsMasterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_IsMasterClient_mA5BDB19FF947552372B29C590298127E0B1B7F9C (const RuntimeMethod* method);
// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C (MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Pun.RpcTarget,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_m97CDF5E617695D4656A00DBD7015B05D2DC9E8C6 (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean Photon.Pun.PhotonNetwork::LeaveRoom(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_LeaveRoom_mA97BD6121DBB4BC43140024C405D7C2EDCCCABF1 (bool ___becomeInactive0, const RuntimeMethod* method);
// System.Void StartingGameController::prepareStartingGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_prepareStartingGame_m59BDC555731CEFFA60E7A3CAD4108964C64038C6 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void StartingGameController::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_StartGame_mD87A6D4F56B28C4E900B83137878B72F889367A1 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.Room::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsOpen_mE080FA9EF98A4CC9619FF11D1BC34EBC58934DBE (Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.PhotonNetwork::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_LoadLevel_m29648C8F5442DF11D84E6B4C8E7A505081C1B893 (String_t* ___levelName0, const RuntimeMethod* method);
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks__ctor_m62F4C1105FC1D237DEBE4BE76535F8152A8FF553 (MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m2C3DAB9655DD596BFC184D0A5B4F83D36C8B2FFB (TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D * __this, bool ___isOn0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D_gshared)(__this, ___call0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void BotGameManager::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BotGameManager_PauseGame_m86AA36821A307C3D937BE941E6D908B7E78DBA40 (BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void BotGameManager::SendPreparingTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BotGameManager_SendPreparingTimer_m3CB557FDAFBD0191304598FE01B4B785EB53EC81 (BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * __this, const RuntimeMethod* method);
// System.Void BotGameManager::SendTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BotGameManager_SendTimer_mE00AB3516D467CAE854BA9C6B8737B8EAE652C48 (BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * __this, const RuntimeMethod* method);
// System.Void CheckAndFixDependenciesFireBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m972D5606AF8BE0132B82AB7A64DD144A758F81B8 (U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::get_Result()
inline int32_t Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA *, const RuntimeMethod*))Task_1_get_Result_m337A232CED326558FB5C160D4F12229547772F6E_gshared)(__this, method);
}
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void GameManager::WaitingOpponentTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_WaitingOpponentTimer_m42A51EBF1BF4961A6E613044FB7FC47C93AF9659 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(!0)
inline void UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, int32_t, const RuntimeMethod*))UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ShopItem
IL2CPP_EXTERN_C void ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshal_pinvoke(const ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101& unmarshaled, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshaled_pinvoke& marshaled)
{
	Exception_t* ___spriteBase_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'spriteBase' of type 'ShopItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___spriteBase_0Exception, NULL);
}
IL2CPP_EXTERN_C void ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshal_pinvoke_back(const ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshaled_pinvoke& marshaled, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101& unmarshaled)
{
	Exception_t* ___spriteBase_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'spriteBase' of type 'ShopItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___spriteBase_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ShopItem
IL2CPP_EXTERN_C void ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshal_pinvoke_cleanup(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ShopItem
IL2CPP_EXTERN_C void ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshal_com(const ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101& unmarshaled, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshaled_com& marshaled)
{
	Exception_t* ___spriteBase_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'spriteBase' of type 'ShopItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___spriteBase_0Exception, NULL);
}
IL2CPP_EXTERN_C void ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshal_com_back(const ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshaled_com& marshaled, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101& unmarshaled)
{
	Exception_t* ___spriteBase_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'spriteBase' of type 'ShopItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___spriteBase_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ShopItem
IL2CPP_EXTERN_C void ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshal_com_cleanup(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_marshaled_com& marshaled)
{
}
// System.Boolean ShopItem::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShopItem_Equals_mA3B240322636B42DC001B6A61038126CF9717040 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// return obj is ShopItem item &&
		//        itemName == item.itemName &&
		//        equipmentType == item.equipmentType;
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 *)((ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 *)UnBox(L_1, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_il2cpp_TypeInfo_var))));
		String_t* L_2 = __this->get_itemName_1();
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_3 = V_0;
		String_t* L_4 = L_3.get_itemName_1();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = __this->get_equipmentType_5();
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_7 = V_0;
		int32_t L_8 = L_7.get_equipmentType_5();
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool ShopItem_Equals_mA3B240322636B42DC001B6A61038126CF9717040_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * _thisAdjusted = reinterpret_cast<ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ShopItem_Equals_mA3B240322636B42DC001B6A61038126CF9717040(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 ShopItem::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShopItem_GetHashCode_mCC809A3D08CA6506923A833DB0B01A52DCF2CB15 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mF17F3E1366EF6A8458598F76CEFAF5CD50FEBF4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hashCode = 186130428;
		V_0 = ((int32_t)186130428);
		// hashCode = hashCode * -1521134295 + EqualityComparer<string>.Default.GetHashCode(itemName);
		int32_t L_0 = V_0;
		EqualityComparer_1_tDC2082D4D5947A0F76D6FA7870E09811B1A8B69E * L_1;
		L_1 = EqualityComparer_1_get_Default_mF17F3E1366EF6A8458598F76CEFAF5CD50FEBF4C(/*hidden argument*/EqualityComparer_1_get_Default_mF17F3E1366EF6A8458598F76CEFAF5CD50FEBF4C_RuntimeMethod_var);
		String_t* L_2 = __this->get_itemName_1();
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(9 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.String>::GetHashCode(!0) */, L_1, L_2);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)-1521134295))), (int32_t)L_3));
		// hashCode = hashCode * -1521134295 + equipmentType.GetHashCode();
		int32_t L_4 = V_0;
		int32_t* L_5 = __this->get_address_of_equipmentType_5();
		int32_t L_6;
		L_6 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_5, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)-1521134295))), (int32_t)L_6));
		// return hashCode;
		int32_t L_7 = V_0;
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t ShopItem_GetHashCode_mCC809A3D08CA6506923A833DB0B01A52DCF2CB15_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * _thisAdjusted = reinterpret_cast<ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ShopItem_GetHashCode_mCC809A3D08CA6506923A833DB0B01A52DCF2CB15(_thisAdjusted, method);
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
// System.Int32 ShopItemDatabase::get_ShopItemsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7 (ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return shopItems.Length; }
		ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* L_0 = __this->get_shopItems_4();
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		goto IL_000c;
	}

IL_000c:
	{
		// get { return shopItems.Length; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// ShopItem ShopItemDatabase::getShopItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089 (ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return shopItems[index];
		ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* L_0 = __this->get_shopItems_4();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ShopItemDatabase::getItemIndex(InventoryItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShopItemDatabase_getItemIndex_mC01C7E12F28808CACF78940DC01089168CFED8C3 (ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * __this, InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EquipmentType_t3AC4BB0116145EE1C3A9D845C4DB6CBB92F09C2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// for (int i = 0; i < shopItems.Length; i++)
		V_0 = 0;
		goto IL_005c;
	}

IL_0005:
	{
		// if (shopItems[i].itemName.Equals(item.itemName) && shopItems[i].equipmentType.Equals(item.equipmentType))
		ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* L_0 = __this->get_shopItems_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_itemName_1();
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_3 = ___item0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_itemName_1();
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* L_6 = __this->get_shopItems_4();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->get_address_of_equipmentType_5();
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_9 = ___item0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_equipmentType_5();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(EquipmentType_t3AC4BB0116145EE1C3A9D845C4DB6CBB92F09C2E_il2cpp_TypeInfo_var, &L_11);
		RuntimeObject * L_13 = Box(EquipmentType_t3AC4BB0116145EE1C3A9D845C4DB6CBB92F09C2E_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_13, L_12);
		*L_8 = *(int32_t*)UnBox(L_13);
		G_B4_0 = ((int32_t)(L_14));
		goto IL_004e;
	}

IL_004d:
	{
		G_B4_0 = 0;
	}

IL_004e:
	{
		V_1 = (bool)G_B4_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		// return i;
		int32_t L_16 = V_0;
		V_2 = L_16;
		goto IL_006f;
	}

IL_0057:
	{
		// for (int i = 0; i < shopItems.Length; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005c:
	{
		// for (int i = 0; i < shopItems.Length; i++)
		int32_t L_18 = V_0;
		ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* L_19 = __this->get_shopItems_4();
		NullCheck(L_19);
		V_3 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_0005;
		}
	}
	{
		// return -1;
		V_2 = (-1);
		goto IL_006f;
	}

IL_006f:
	{
		// }
		int32_t L_21 = V_2;
		return L_21;
	}
}
// System.Void ShopItemDatabase::PurchaseItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemDatabase_PurchaseItem_m4FF967FBE0ADE761C17B6576A3BE97386D7446BE (ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// shopItems[index].isPurchase = true;
		ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* L_0 = __this->get_shopItems_4();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->set_isPurchase_4((bool)1);
		// }
		return;
	}
}
// System.Void ShopItemDatabase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemDatabase__ctor_m83E9ECDA9A3441C4F758E2A6784A452A29B3B34D (ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void ShopItemUI::SetItemPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetItemPosition_m009251EA257EEEB03F61FE03E7A0965FAA71C416 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<RectTransform>().anchoredPosition += pos;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = L_0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___pos0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::SetShopItemImage(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetShopItemImage_m2CF3C61FEB5059FF35904186D23EEC33F25705E5 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite0, const RuntimeMethod* method)
{
	{
		// shopItemImage.sprite = sprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_shopItemImage_6();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = ___sprite0;
		NullCheck(L_0);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::SetShopItemName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetShopItemName_mA498860B8C3EAE585FB4F4DCC629B239BFAA9CC0 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		// shopItemName.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_shopItemName_7();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void ShopItemUI::SetBuffValuemPercent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetBuffValuemPercent_m6A8D796FE65C02F7A7D984A1470F631C6B6CEB91 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___buffPercent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffValuemPercent.text = "+"+buffPercent+"%";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_buffValuemPercent_8();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___buffPercent0), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_1, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void ShopItemUI::SetShopItemPrice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetShopItemPrice_m43F5AC3C58483AF9B7D16DA2DBF7B9A983D4777B (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___price0, const RuntimeMethod* method)
{
	{
		// shopItemPrice.text = price.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_shopItemPrice_9();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___price0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void ShopItemUI::SetPurchaseBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetPurchaseBtn_mAEEFE5771D4F71702BEE0D190BED645E304B51D4 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method)
{
	{
		// purchaseBtn.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_purchaseBtn_11();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::SetShopItemAsPurchase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SetShopItemAsPurchase_m5ED5529533F3A5A3E0233635F37343E17A097040 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F4D5C427CFA5FCCBD38E02EBC6722093CAA1EDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// purchaseBtn.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_purchaseBtn_11();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// purchaseBtn.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_purchaseBtn_11();
		NullCheck(L_2);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_2, (bool)0, /*hidden argument*/NULL);
		// textPurchaseBtn.text = "Active";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_textPurchaseBtn_12();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral8F4D5C427CFA5FCCBD38E02EBC6722093CAA1EDD);
		// price.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_price_10();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// shopItemBtn.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = __this->get_shopItemBtn_13();
		NullCheck(L_5);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::OnShopItemSelected(System.Int32,UnityEngine.Events.UnityAction`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_OnShopItemSelected_m91BF271F25FF769F6096C00D1BDD0A3A755B1A1B (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___itemIndex0, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3COnShopItemSelectedU3Eb__0_m9647A69158BB4B19A3D004F6B3F3FED3015F3D56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 * L_0 = (U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass18_0__ctor_m4C17EC9CE3DDAE51E0DF002492118B3F643958D3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 * L_1 = V_0;
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_2 = ___action1;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 * L_3 = V_0;
		int32_t L_4 = ___itemIndex0;
		NullCheck(L_3);
		L_3->set_itemIndex_1(L_4);
		// shopItemBtn.onClick.RemoveAllListeners();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = __this->get_shopItemBtn_13();
		NullCheck(L_5);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_6;
		L_6 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_6, /*hidden argument*/NULL);
		// shopItemBtn.onClick.AddListener(() => action.Invoke(itemIndex));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = __this->get_shopItemBtn_13();
		NullCheck(L_7);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_8;
		L_8 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_7, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 * L_9 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass18_0_U3COnShopItemSelectedU3Eb__0_m9647A69158BB4B19A3D004F6B3F3FED3015F3D56_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_8, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::OnShopItemPurchase(System.Int32,UnityEngine.Events.UnityAction`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_OnShopItemPurchase_m5CFFC75410899F3F6DBAB4C26284DE08F5E1B58A (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___itemIndex0, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3COnShopItemPurchaseU3Eb__0_m9FE850F3C2717A73CBBE401F23A0673F6D1A687D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E * L_0 = (U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass19_0__ctor_mEAF95E3A52CEB727E0F183F08CDB2A6BBE831F62(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E * L_1 = V_0;
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_2 = ___action1;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E * L_3 = V_0;
		int32_t L_4 = ___itemIndex0;
		NullCheck(L_3);
		L_3->set_itemIndex_1(L_4);
		// purchaseBtn.onClick.RemoveAllListeners();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = __this->get_purchaseBtn_11();
		NullCheck(L_5);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_6;
		L_6 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_6, /*hidden argument*/NULL);
		// purchaseBtn.onClick.AddListener(() => action.Invoke(itemIndex));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = __this->get_purchaseBtn_11();
		NullCheck(L_7);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_8;
		L_8 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_7, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E * L_9 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_0_U3COnShopItemPurchaseU3Eb__0_m9FE850F3C2717A73CBBE401F23A0673F6D1A687D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_8, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::OnShopCharPurchase(System.Int32,UnityEngine.Events.UnityAction`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_OnShopCharPurchase_m95BB0BBD3C56D1F3F1696045E68034AC9B8165FC (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, int32_t ___itemIndex0, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3COnShopCharPurchaseU3Eb__0_mCBE1F63C6296D22B67AF9111E398FF6260F2A225_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 * L_0 = (U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass20_0__ctor_mB11C70B87F3D95A3C5A73E09027D1374CE5BE6C9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 * L_1 = V_0;
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_2 = ___action1;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 * L_3 = V_0;
		int32_t L_4 = ___itemIndex0;
		NullCheck(L_3);
		L_3->set_itemIndex_1(L_4);
		// SetPurchaseBtn();
		ShopItemUI_SetPurchaseBtn_mAEEFE5771D4F71702BEE0D190BED645E304B51D4(__this, /*hidden argument*/NULL);
		// shopItemBtn.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = __this->get_shopItemBtn_13();
		NullCheck(L_5);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_5, (bool)0, /*hidden argument*/NULL);
		// purchaseBtn.onClick.RemoveAllListeners();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_purchaseBtn_11();
		NullCheck(L_6);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_7, /*hidden argument*/NULL);
		// purchaseBtn.onClick.AddListener(() => action.Invoke(itemIndex));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_purchaseBtn_11();
		NullCheck(L_8);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_9;
		L_9 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4(L_8, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 * L_10 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass20_0_U3COnShopCharPurchaseU3Eb__0_mCBE1F63C6296D22B67AF9111E398FF6260F2A225_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::SelectItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_SelectItem_mD64D24AACE6EE22AE9503F4528121E637645877C (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method)
{
	{
		// itemImage.color = itemSelectedColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_itemImage_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_itemSelectedColor_5();
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// purchaseBtn.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_purchaseBtn_11();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::DeselectItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_DeselectItem_mE50FE4633BBB82F9EA33A59B6B24CAF410591BA9 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method)
{
	{
		// itemImage.color = itemNotSelectedColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_itemImage_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_itemNotSelectedColor_4();
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// purchaseBtn.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_purchaseBtn_11();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItemUI::AnimateShakeItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI_AnimateShakeItem_m65DEBA9CC04E0EBD8FD6893BD5EFA633DF85F0D4 (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m6BAB25D1003D2F0AE472B5DE2E58766F0CDB873F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.DOComplete();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = ShortcutExtensions_DOComplete_m1939237DDDE3FA508E979D2AE3DC21523918EE40(L_0, (bool)0, /*hidden argument*/NULL);
		// transform.DOShakePosition(1f, new Vector3(8f, 0, 0), 10, 0).SetEase(Ease.Linear);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (8.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_4;
		L_4 = ShortcutExtensions_DOShakePosition_mCC169349BF0889172A50B92A7685268CFB0C1BC9(L_2, (1.0f), L_3, ((int32_t)10), (0.0f), (bool)0, (bool)1, 0, /*hidden argument*/NULL);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_5;
		L_5 = TweenSettingsExtensions_SetEase_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m6BAB25D1003D2F0AE472B5DE2E58766F0CDB873F(L_4, 1, /*hidden argument*/TweenSettingsExtensions_SetEase_TisTweener_tFC8507DF103792DB165B74C4179B772F3B637CA8_m6BAB25D1003D2F0AE472B5DE2E58766F0CDB873F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShopItemUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItemUI__ctor_m302A062EEF68B9E5CB7CDA50CD9CB6CF026CC1BC (ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShopUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_Start_mDC3CA06BF11EE6E1CE82E5E7828EA991FC15FA84 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	{
		// currentCharImage.sprite = shopCharDB.getShopItem(gdm.GetChar).spriteBase;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_currentCharImage_29();
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_1 = __this->get_shopCharDB_13();
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_2 = __this->get_gdm_37();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = GameDataManager_get_GetChar_m8E999AF477B7B0547005964AAE06718BC7BFA670(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_4;
		L_4 = ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089(L_1, L_3, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = L_4.get_spriteBase_0();
		NullCheck(L_0);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_0, L_5, /*hidden argument*/NULL);
		// itemsShopBtn.image.color = shopSelectedColor;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_itemsShopBtn_18();
		NullCheck(L_6);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7;
		L_7 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_6, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = __this->get_shopSelectedColor_20();
		NullCheck(L_7);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// GenerateShopItemUI();
		ShopUI_GenerateShopItemUI_mB42C460546CD4FCA839C7CC4417EA31E926C39B0(__this, /*hidden argument*/NULL);
		// GenerateShopCharUI();
		ShopUI_GenerateShopCharUI_mE923F15DC06237D6537D7E77A33A4D8FA0655F75(__this, /*hidden argument*/NULL);
		// AutoScrollShopList(gdm.GetChar); // need to check when will be more items
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_9 = __this->get_gdm_37();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameDataManager_get_GetChar_m8E999AF477B7B0547005964AAE06718BC7BFA670(L_9, /*hidden argument*/NULL);
		ShopUI_AutoScrollShopList_m314DE45BB73B06BC015B63F6F35FFEA7B8D550AD(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopUI::AutoScrollShopList(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_AutoScrollShopList_m314DE45BB73B06BC015B63F6F35FFEA7B8D550AD (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___itemIndex0, const RuntimeMethod* method)
{
	{
		// scrollRectItems.verticalNormalizedPosition = Mathf.Clamp01(1f - (itemIndex / (float)(shopItemDB.ShopItemsCount - 1)));
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_scrollRectItems_24();
		int32_t L_1 = ___itemIndex0;
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_2 = __this->get_shopItemDB_12();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)((float)((float)L_1))/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		ScrollRect_set_verticalNormalizedPosition_m18393A7B91359B013466A984325F233535A6941D(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopUI::ToUpScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_ToUpScroll_m77357AD203E7007D7A4DB754A4BA7C3EE6AEC52E (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	{
		// scrollRectItems.verticalNormalizedPosition = 1;
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_0 = __this->get_scrollRectItems_24();
		NullCheck(L_0);
		ScrollRect_set_verticalNormalizedPosition_m18393A7B91359B013466A984325F233535A6941D(L_0, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopUI::GenerateShopItemUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_GenerateShopItemUI_mB42C460546CD4FCA839C7CC4417EA31E926C39B0 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_m464EB42B6910FD8C97DD92361D40FB08B3855CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopUI_OnItemPurchased_m831E95DFDC55A8525ED1FBA383252D4DF712E982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopUI_OnItemSelected_m9980DF1275E390D1582CCF14C21584EB3BBEAA18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * V_2 = NULL;
	bool V_3 = false;
	{
		// itemHeight = shopItemContainer.GetChild(0).GetComponent<RectTransform>().sizeDelta.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_shopItemContainer_7();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_1, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_1();
		__this->set_itemHeight_5(L_4);
		// Destroy(shopItemContainer.GetChild(0).gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_shopItemContainer_7();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// shopItemContainer.DetachChildren();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_shopItemContainer_7();
		NullCheck(L_8);
		Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2(L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < shopItemDB.ShopItemsCount; i++)
		V_0 = 0;
		goto IL_015b;
	}

IL_004c:
	{
		// ShopItem shopItem = shopItemDB.getShopItem(i);
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_9 = __this->get_shopItemDB_12();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_11;
		L_11 = ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// ShopItemUI uiItem = Instantiate(itemPrefab, shopItemContainer).GetComponent<ShopItemUI>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_itemPrefab_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_shopItemContainer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_14);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_15;
		L_15 = GameObject_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_m464EB42B6910FD8C97DD92361D40FB08B3855CA1(L_14, /*hidden argument*/GameObject_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_m464EB42B6910FD8C97DD92361D40FB08B3855CA1_RuntimeMethod_var);
		V_2 = L_15;
		// uiItem.SetItemPosition(Vector2.down *i*(itemHeight+itemSpacing));
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_16 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		int32_t L_18 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_17, ((float)((float)L_18)), /*hidden argument*/NULL);
		float L_20 = __this->get_itemHeight_5();
		float L_21 = __this->get_itemSpacing_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_19, ((float)il2cpp_codegen_add((float)L_20, (float)L_21)), /*hidden argument*/NULL);
		NullCheck(L_16);
		ShopItemUI_SetItemPosition_m009251EA257EEEB03F61FE03E7A0965FAA71C416(L_16, L_22, /*hidden argument*/NULL);
		// uiItem.gameObject.name = "Item" + i + "-" + shopItem.itemName;
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_23 = V_2;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_26 = V_1;
		String_t* L_27 = L_26.get_itemName_1();
		String_t* L_28;
		L_28 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, L_25, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_24, L_28, /*hidden argument*/NULL);
		// uiItem.SetShopItemName(shopItem.itemName);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_29 = V_2;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_30 = V_1;
		String_t* L_31 = L_30.get_itemName_1();
		NullCheck(L_29);
		ShopItemUI_SetShopItemName_mA498860B8C3EAE585FB4F4DCC629B239BFAA9CC0(L_29, L_31, /*hidden argument*/NULL);
		// uiItem.SetShopItemImage(shopItem.spriteBase);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_32 = V_2;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_33 = V_1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_34 = L_33.get_spriteBase_0();
		NullCheck(L_32);
		ShopItemUI_SetShopItemImage_m2CF3C61FEB5059FF35904186D23EEC33F25705E5(L_32, L_34, /*hidden argument*/NULL);
		// uiItem.SetShopItemPrice(shopItem.price);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_35 = V_2;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_36 = V_1;
		int32_t L_37 = L_36.get_price_3();
		NullCheck(L_35);
		ShopItemUI_SetShopItemPrice_m43F5AC3C58483AF9B7D16DA2DBF7B9A983D4777B(L_35, L_37, /*hidden argument*/NULL);
		// uiItem.SetBuffValuemPercent(shopItem.buffEffectPercent);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_38 = V_2;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_39 = V_1;
		int32_t L_40 = L_39.get_buffEffectPercent_2();
		NullCheck(L_38);
		ShopItemUI_SetBuffValuemPercent_m6A8D796FE65C02F7A7D984A1470F631C6B6CEB91(L_38, L_40, /*hidden argument*/NULL);
		// uiItem.OnShopItemSelected(i, OnItemSelected);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_41 = V_2;
		int32_t L_42 = V_0;
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_43 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_43, __this, (intptr_t)((intptr_t)ShopUI_OnItemSelected_m9980DF1275E390D1582CCF14C21584EB3BBEAA18_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		NullCheck(L_41);
		ShopItemUI_OnShopItemSelected_m91BF271F25FF769F6096C00D1BDD0A3A755B1A1B(L_41, L_42, L_43, /*hidden argument*/NULL);
		// uiItem.OnShopItemPurchase(i, OnItemPurchased);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_44 = V_2;
		int32_t L_45 = V_0;
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_46 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_46, __this, (intptr_t)((intptr_t)ShopUI_OnItemPurchased_m831E95DFDC55A8525ED1FBA383252D4DF712E982_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		NullCheck(L_44);
		ShopItemUI_OnShopItemPurchase_m5CFFC75410899F3F6DBAB4C26284DE08F5E1B58A(L_44, L_45, L_46, /*hidden argument*/NULL);
		// shopItemContainer.GetComponent<RectTransform>().sizeDelta =
		//         Vector2.up * ((itemHeight + itemSpacing) * shopItemDB.ShopItemsCount+itemSpacing);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = __this->get_shopItemContainer_7();
		NullCheck(L_47);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_48;
		L_48 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_47, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_50 = __this->get_itemHeight_5();
		float L_51 = __this->get_itemSpacing_4();
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_52 = __this->get_shopItemDB_12();
		NullCheck(L_52);
		int32_t L_53;
		L_53 = ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7(L_52, /*hidden argument*/NULL);
		float L_54 = __this->get_itemSpacing_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55;
		L_55 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_49, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_50, (float)L_51)), (float)((float)((float)L_53)))), (float)L_54)), /*hidden argument*/NULL);
		NullCheck(L_48);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_48, L_55, /*hidden argument*/NULL);
		// for (int i = 0; i < shopItemDB.ShopItemsCount; i++)
		int32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_015b:
	{
		// for (int i = 0; i < shopItemDB.ShopItemsCount; i++)
		int32_t L_57 = V_0;
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_58 = __this->get_shopItemDB_12();
		NullCheck(L_58);
		int32_t L_59;
		L_59 = ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7(L_58, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_57) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_3;
		if (L_60)
		{
			goto IL_004c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ShopUI::GenerateShopCharUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_GenerateShopCharUI_mE923F15DC06237D6537D7E77A33A4D8FA0655F75 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_m464EB42B6910FD8C97DD92361D40FB08B3855CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopUI_OnItemPurchased_m831E95DFDC55A8525ED1FBA383252D4DF712E982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopUI_OnItemSelected_m9980DF1275E390D1582CCF14C21584EB3BBEAA18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// purchasedChars = gdm.GetPurchaseChars(shopCharDB.ShopItemsCount);
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_0 = __this->get_gdm_37();
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_1 = __this->get_shopCharDB_13();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_3;
		L_3 = GameDataManager_GetPurchaseChars_mC400B6984F3B5CEC107ADC2808EE683FF3020BD7(L_0, L_2, /*hidden argument*/NULL);
		__this->set_purchasedChars_38(L_3);
		// purchasedChars[0] = true;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = __this->get_purchasedChars_38();
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		// for (int i=0; i < shopCharDB.ShopItemsCount; i++)
		V_0 = 0;
		goto IL_004e;
	}

IL_002a:
	{
		// shopCharDB.shopItems[i].isPurchase = purchasedChars[i];
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_5 = __this->get_shopCharDB_13();
		NullCheck(L_5);
		ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* L_6 = L_5->get_shopItems_4();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_8 = __this->get_purchasedChars_38();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->set_isPurchase_4((bool)L_11);
		// for (int i=0; i < shopCharDB.ShopItemsCount; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004e:
	{
		// for (int i=0; i < shopCharDB.ShopItemsCount; i++)
		int32_t L_13 = V_0;
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_14 = __this->get_shopCharDB_13();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7(L_14, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_002a;
		}
	}
	{
		// itemHeight = shopCharContainer.GetChild(0).GetComponent<RectTransform>().sizeDelta.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = __this->get_shopCharContainer_8();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_17, 0, /*hidden argument*/NULL);
		NullCheck(L_18);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_19;
		L_19 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_18, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_19);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_y_1();
		__this->set_itemHeight_5(L_21);
		// Destroy(shopCharContainer.GetChild(0).gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_shopCharContainer_8();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_22, 0, /*hidden argument*/NULL);
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_24, /*hidden argument*/NULL);
		// shopCharContainer.DetachChildren();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = __this->get_shopCharContainer_8();
		NullCheck(L_25);
		Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2(L_25, /*hidden argument*/NULL);
		// for (int i = 0; i < shopCharDB.ShopItemsCount; i++)
		V_2 = 0;
		goto IL_0264;
	}

IL_00ab:
	{
		// ShopItem shopChar = shopCharDB.getShopItem(i);
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_26 = __this->get_shopCharDB_13();
		int32_t L_27 = V_2;
		NullCheck(L_26);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_28;
		L_28 = ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089(L_26, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		// ShopItemUI uiItem = Instantiate(charPrefab, shopCharContainer).GetComponent<ShopItemUI>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_charPrefab_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = __this->get_shopCharContainer_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_29, L_30, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_31);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_32;
		L_32 = GameObject_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_m464EB42B6910FD8C97DD92361D40FB08B3855CA1(L_31, /*hidden argument*/GameObject_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_m464EB42B6910FD8C97DD92361D40FB08B3855CA1_RuntimeMethod_var);
		V_4 = L_32;
		// uiItem.SetItemPosition(Vector2.down * i * (itemHeight + itemSpacing));
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_33 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		int32_t L_35 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_34, ((float)((float)L_35)), /*hidden argument*/NULL);
		float L_37 = __this->get_itemHeight_5();
		float L_38 = __this->get_itemSpacing_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_36, ((float)il2cpp_codegen_add((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		NullCheck(L_33);
		ShopItemUI_SetItemPosition_m009251EA257EEEB03F61FE03E7A0965FAA71C416(L_33, L_39, /*hidden argument*/NULL);
		// uiItem.gameObject.name = "Item" + i + "-" + shopChar.itemName;
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_40 = V_4;
		NullCheck(L_40);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_40, /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_43 = V_3;
		String_t* L_44 = L_43.get_itemName_1();
		String_t* L_45;
		L_45 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralB6F02FE6CD732AB22BD11BE4254D9546F3BEEE58, L_42, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_44, /*hidden argument*/NULL);
		NullCheck(L_41);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_41, L_45, /*hidden argument*/NULL);
		// uiItem.SetShopItemName(shopChar.itemName);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_46 = V_4;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_47 = V_3;
		String_t* L_48 = L_47.get_itemName_1();
		NullCheck(L_46);
		ShopItemUI_SetShopItemName_mA498860B8C3EAE585FB4F4DCC629B239BFAA9CC0(L_46, L_48, /*hidden argument*/NULL);
		// uiItem.SetShopItemImage(shopChar.spriteBase);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_49 = V_4;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_50 = V_3;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_51 = L_50.get_spriteBase_0();
		NullCheck(L_49);
		ShopItemUI_SetShopItemImage_m2CF3C61FEB5059FF35904186D23EEC33F25705E5(L_49, L_51, /*hidden argument*/NULL);
		// uiItem.SetShopItemPrice(shopChar.price);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_52 = V_4;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_53 = V_3;
		int32_t L_54 = L_53.get_price_3();
		NullCheck(L_52);
		ShopItemUI_SetShopItemPrice_m43F5AC3C58483AF9B7D16DA2DBF7B9A983D4777B(L_52, L_54, /*hidden argument*/NULL);
		// uiItem.SetBuffValuemPercent(shopChar.buffEffectPercent);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_55 = V_4;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_56 = V_3;
		int32_t L_57 = L_56.get_buffEffectPercent_2();
		NullCheck(L_55);
		ShopItemUI_SetBuffValuemPercent_m6A8D796FE65C02F7A7D984A1470F631C6B6CEB91(L_55, L_57, /*hidden argument*/NULL);
		// if (shopChar.isPurchase) //for character
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_58 = V_3;
		bool L_59 = L_58.get_isPurchase_4();
		V_5 = L_59;
		bool L_60 = V_5;
		if (!L_60)
		{
			goto IL_01fe;
		}
	}
	{
		// uiItem.SetShopItemAsPurchase();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_61 = V_4;
		NullCheck(L_61);
		ShopItemUI_SetShopItemAsPurchase_m5ED5529533F3A5A3E0233635F37343E17A097040(L_61, /*hidden argument*/NULL);
		// uiItem.OnShopItemSelected(i, OnItemSelected);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_62 = V_4;
		int32_t L_63 = V_2;
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_64 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_64, __this, (intptr_t)((intptr_t)ShopUI_OnItemSelected_m9980DF1275E390D1582CCF14C21584EB3BBEAA18_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		NullCheck(L_62);
		ShopItemUI_OnShopItemSelected_m91BF271F25FF769F6096C00D1BDD0A3A755B1A1B(L_62, L_63, L_64, /*hidden argument*/NULL);
		// if (gdm.GetChar == i)
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_65 = __this->get_gdm_37();
		NullCheck(L_65);
		int32_t L_66;
		L_66 = GameDataManager_get_GetChar_m8E999AF477B7B0547005964AAE06718BC7BFA670(L_65, /*hidden argument*/NULL);
		int32_t L_67 = V_2;
		V_6 = (bool)((((int32_t)L_66) == ((int32_t)L_67))? 1 : 0);
		bool L_68 = V_6;
		if (!L_68)
		{
			goto IL_01fb;
		}
	}
	{
		// uiItem.SelectItem();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_69 = V_4;
		NullCheck(L_69);
		ShopItemUI_SelectItem_mD64D24AACE6EE22AE9503F4528121E637645877C(L_69, /*hidden argument*/NULL);
		// newSelectedCharIndex = i;
		int32_t L_70 = V_2;
		__this->set_newSelectedCharIndex_34(L_70);
		// previousSelectedCharIndex = i;
		int32_t L_71 = V_2;
		__this->set_previousSelectedCharIndex_35(L_71);
		// percenOfWin.text = basePercentOfWin+shopChar.buffEffectPercent + gdm.GetItemsBuffPercent + "%";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_72 = __this->get_percenOfWin_30();
		int32_t L_73 = __this->get_basePercentOfWin_31();
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_74 = V_3;
		int32_t L_75 = L_74.get_buffEffectPercent_2();
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_76 = __this->get_gdm_37();
		NullCheck(L_76);
		int32_t L_77;
		L_77 = GameDataManager_get_GetItemsBuffPercent_mECCBABFE6E8C9162518FCBDDB8A473B116836F4C(L_76, /*hidden argument*/NULL);
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_75)), (int32_t)L_77));
		String_t* L_78;
		L_78 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_7), /*hidden argument*/NULL);
		String_t* L_79;
		L_79 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_78, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		NullCheck(L_72);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_72, L_79);
		// gdm.SetCharBuffPercent(shopChar.buffEffectPercent);
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_80 = __this->get_gdm_37();
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_81 = V_3;
		int32_t L_82 = L_81.get_buffEffectPercent_2();
		NullCheck(L_80);
		GameDataManager_SetCharBuffPercent_mFC768B84C675B7353A293F5A44B7E477735FFC85(L_80, L_82, /*hidden argument*/NULL);
	}

IL_01fb:
	{
		goto IL_0223;
	}

IL_01fe:
	{
		// uiItem.SetShopItemPrice(shopChar.price);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_83 = V_4;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_84 = V_3;
		int32_t L_85 = L_84.get_price_3();
		NullCheck(L_83);
		ShopItemUI_SetShopItemPrice_m43F5AC3C58483AF9B7D16DA2DBF7B9A983D4777B(L_83, L_85, /*hidden argument*/NULL);
		// uiItem.OnShopCharPurchase(i, OnItemPurchased);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_86 = V_4;
		int32_t L_87 = V_2;
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_88 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_88, __this, (intptr_t)((intptr_t)ShopUI_OnItemPurchased_m831E95DFDC55A8525ED1FBA383252D4DF712E982_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		NullCheck(L_86);
		ShopItemUI_OnShopCharPurchase_m95BB0BBD3C56D1F3F1696045E68034AC9B8165FC(L_86, L_87, L_88, /*hidden argument*/NULL);
	}

IL_0223:
	{
		// shopItemContainer.GetComponent<RectTransform>().sizeDelta =
		//         Vector2.up * ((itemHeight + itemSpacing) * shopItemDB.ShopItemsCount + itemSpacing);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89 = __this->get_shopItemContainer_7();
		NullCheck(L_89);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_90;
		L_90 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_89, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_91;
		L_91 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_92 = __this->get_itemHeight_5();
		float L_93 = __this->get_itemSpacing_4();
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_94 = __this->get_shopItemDB_12();
		NullCheck(L_94);
		int32_t L_95;
		L_95 = ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7(L_94, /*hidden argument*/NULL);
		float L_96 = __this->get_itemSpacing_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_97;
		L_97 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_91, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_92, (float)L_93)), (float)((float)((float)L_95)))), (float)L_96)), /*hidden argument*/NULL);
		NullCheck(L_90);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_90, L_97, /*hidden argument*/NULL);
		// for (int i = 0; i < shopCharDB.ShopItemsCount; i++)
		int32_t L_98 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
	}

IL_0264:
	{
		// for (int i = 0; i < shopCharDB.ShopItemsCount; i++)
		int32_t L_99 = V_2;
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_100 = __this->get_shopCharDB_13();
		NullCheck(L_100);
		int32_t L_101;
		L_101 = ShopItemDatabase_get_ShopItemsCount_m0CA57F13C9001FF9F1F1F31897487D0B374AD2B7(L_100, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_99) < ((int32_t)L_101))? 1 : 0);
		bool L_102 = V_8;
		if (L_102)
		{
			goto IL_00ab;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ShopUI::OnItemSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_OnItemSelected_m9980DF1275E390D1582CCF14C21584EB3BBEAA18 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SelectItemUI(index);
		int32_t L_0 = ___index0;
		ShopUI_SelectItemUI_mFB62DCC67D7A46726AEE9454E51EF569376AFA80(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopUI::ChangeCharSkin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_ChangeCharSkin_m87A1CDDF6EA72F9086C709DD2A562A0BB903143A (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// currentCharImage.sprite = shopCharDB.getShopItem(index).spriteBase;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_currentCharImage_29();
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_1 = __this->get_shopCharDB_13();
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_3;
		L_3 = ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089(L_1, L_2, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = L_3.get_spriteBase_0();
		NullCheck(L_0);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopUI::SelectItemUI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_SelectItemUI_mFB62DCC67D7A46726AEE9454E51EF569376AFA80 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___itemIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * V_1 = NULL;
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * V_2 = NULL;
	bool V_3 = false;
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * V_4 = NULL;
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * V_5 = NULL;
	int32_t V_6 = 0;
	{
		// if (isCurrentDB == 1)
		uint8_t L_0 = __this->get_isCurrentDB_36();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// previousSelectedItemIndex = newSelectedItemIndex;
		int32_t L_2 = __this->get_newSelectedItemIndex_32();
		__this->set_previousSelectedItemIndex_33(L_2);
		// newSelectedItemIndex = itemIndex;
		int32_t L_3 = ___itemIndex0;
		__this->set_newSelectedItemIndex_32(L_3);
		// ShopItemUI previousUiItem = GetItemUI(previousSelectedItemIndex);
		int32_t L_4 = __this->get_previousSelectedItemIndex_33();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_5;
		L_5 = ShopUI_GetItemUI_m6FCD5E179836617182E7A622EB35076B4E257B3D(__this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// ShopItemUI newUiItem = GetItemUI(newSelectedItemIndex);
		int32_t L_6 = __this->get_newSelectedItemIndex_32();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_7;
		L_7 = ShopUI_GetItemUI_m6FCD5E179836617182E7A622EB35076B4E257B3D(__this, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// previousUiItem.DeselectItem();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_8 = V_1;
		NullCheck(L_8);
		ShopItemUI_DeselectItem_mE50FE4633BBB82F9EA33A59B6B24CAF410591BA9(L_8, /*hidden argument*/NULL);
		// newUiItem.SelectItem();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_9 = V_2;
		NullCheck(L_9);
		ShopItemUI_SelectItem_mD64D24AACE6EE22AE9503F4528121E637645877C(L_9, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// if (isCurrentDB == 2)
		uint8_t L_10 = __this->get_isCurrentDB_36();
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_011b;
		}
	}
	{
		// previousSelectedCharIndex = newSelectedCharIndex;
		int32_t L_12 = __this->get_newSelectedCharIndex_34();
		__this->set_previousSelectedCharIndex_35(L_12);
		// newSelectedCharIndex=itemIndex;
		int32_t L_13 = ___itemIndex0;
		__this->set_newSelectedCharIndex_34(L_13);
		// ShopItemUI previousUiItem = GetItemUI(previousSelectedCharIndex);
		int32_t L_14 = __this->get_previousSelectedCharIndex_35();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_15;
		L_15 = ShopUI_GetItemUI_m6FCD5E179836617182E7A622EB35076B4E257B3D(__this, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		// ShopItemUI newUiItem = GetItemUI(newSelectedCharIndex);
		int32_t L_16 = __this->get_newSelectedCharIndex_34();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_17;
		L_17 = ShopUI_GetItemUI_m6FCD5E179836617182E7A622EB35076B4E257B3D(__this, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// previousUiItem.DeselectItem();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_18 = V_4;
		NullCheck(L_18);
		ShopItemUI_DeselectItem_mE50FE4633BBB82F9EA33A59B6B24CAF410591BA9(L_18, /*hidden argument*/NULL);
		// newUiItem.SelectItem();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_19 = V_5;
		NullCheck(L_19);
		ShopItemUI_SelectItem_mD64D24AACE6EE22AE9503F4528121E637645877C(L_19, /*hidden argument*/NULL);
		// percenOfWin.text = basePercentOfWin+shopCharDB.getShopItem(newSelectedCharIndex).buffEffectPercent + gdm.GetItemsBuffPercent + "%";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_percenOfWin_30();
		int32_t L_21 = __this->get_basePercentOfWin_31();
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_22 = __this->get_shopCharDB_13();
		int32_t L_23 = __this->get_newSelectedCharIndex_34();
		NullCheck(L_22);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_24;
		L_24 = ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089(L_22, L_23, /*hidden argument*/NULL);
		int32_t L_25 = L_24.get_buffEffectPercent_2();
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_26 = __this->get_gdm_37();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = GameDataManager_get_GetItemsBuffPercent_mECCBABFE6E8C9162518FCBDDB8A473B116836F4C(L_26, /*hidden argument*/NULL);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_25)), (int32_t)L_27));
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_28, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_29);
		// gdm.SetCharBuffPercent(shopCharDB.getShopItem(newSelectedCharIndex).buffEffectPercent);
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_30 = __this->get_gdm_37();
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_31 = __this->get_shopCharDB_13();
		int32_t L_32 = __this->get_newSelectedCharIndex_34();
		NullCheck(L_31);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_33;
		L_33 = ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089(L_31, L_32, /*hidden argument*/NULL);
		int32_t L_34 = L_33.get_buffEffectPercent_2();
		NullCheck(L_30);
		GameDataManager_SetCharBuffPercent_mFC768B84C675B7353A293F5A44B7E477735FFC85(L_30, L_34, /*hidden argument*/NULL);
		// gdm.SetChar(itemIndex);
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_35 = __this->get_gdm_37();
		int32_t L_36 = ___itemIndex0;
		NullCheck(L_35);
		GameDataManager_SetChar_m58A0903E0BF369C6A7FA4A1C3D3147026DA03F0E(L_35, L_36, /*hidden argument*/NULL);
		// ChangeCharSkin(itemIndex);
		int32_t L_37 = ___itemIndex0;
		ShopUI_ChangeCharSkin_m87A1CDDF6EA72F9086C709DD2A562A0BB903143A(__this, L_37, /*hidden argument*/NULL);
	}

IL_011b:
	{
		// }
		return;
	}
}
// ShopItemUI ShopUI::GetItemUI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * ShopUI_GetItemUI_m6FCD5E179836617182E7A622EB35076B4E257B3D (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_mA32D793C70D2370A48CE18EEFC52ADBEC4177F10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * V_0 = NULL;
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * G_B3_0 = NULL;
	{
		// return (isCurrentDB==1)? shopItemContainer.GetChild(index).GetComponent<ShopItemUI>()
		//     : shopCharContainer.GetChild(index).GetComponent<ShopItemUI>();
		uint8_t L_0 = __this->get_isCurrentDB_36();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_shopCharContainer_8();
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_4;
		L_4 = Component_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_mA32D793C70D2370A48CE18EEFC52ADBEC4177F10(L_3, /*hidden argument*/Component_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_mA32D793C70D2370A48CE18EEFC52ADBEC4177F10_RuntimeMethod_var);
		G_B3_0 = L_4;
		goto IL_002e;
	}

IL_001d:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_shopItemContainer_7();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_8;
		L_8 = Component_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_mA32D793C70D2370A48CE18EEFC52ADBEC4177F10(L_7, /*hidden argument*/Component_GetComponent_TisShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B_mA32D793C70D2370A48CE18EEFC52ADBEC4177F10_RuntimeMethod_var);
		G_B3_0 = L_8;
	}

IL_002e:
	{
		V_0 = G_B3_0;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_9 = V_0;
		return L_9;
	}
}
// System.Void ShopUI::OnItemPurchased(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_OnItemPurchased_m831E95DFDC55A8525ED1FBA383252D4DF712E982 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopUI_OnItemSelected_m9980DF1275E390D1582CCF14C21584EB3BBEAA18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	String_t* G_B7_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B6_1 = NULL;
	{
		// if (isCurrentDB == 1)
		uint8_t L_0 = __this->get_isCurrentDB_36();
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// shopItem = shopItemDB.getShopItem(index);
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_2 = __this->get_shopItemDB_12();
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_4;
		L_4 = ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002e;
	}

IL_001f:
	{
		// shopItem = shopCharDB.getShopItem(index);
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_5 = __this->get_shopCharDB_13();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_7;
		L_7 = ShopItemDatabase_getShopItem_m956C0A103CE4E2D8E9861BE1DA9509C5F8913089(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002e:
	{
		// ShopItemUI uiItem = GetItemUI(index);
		int32_t L_8 = ___index0;
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_9;
		L_9 = ShopUI_GetItemUI_m6FCD5E179836617182E7A622EB35076B4E257B3D(__this, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// int countCoins = int.Parse(shopCoins.GetComponent<Text>().text.ToString());
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_shopCoins_11();
		NullCheck(L_10);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11;
		L_11 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_10, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		int32_t L_14;
		L_14 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// if (countCoins < shopItem.price)
		int32_t L_15 = V_2;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_16 = V_0;
		int32_t L_17 = L_16.get_price_3();
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		// AnimateNotEnoughCoins();
		ShopUI_AnimateNotEnoughCoins_m1367E13B1160E29C50432100D72EF4F1F4EC85FB(__this, /*hidden argument*/NULL);
		// uiItem.AnimateShakeItem();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_19 = V_1;
		NullCheck(L_19);
		ShopItemUI_AnimateShakeItem_m65DEBA9CC04E0EBD8FD6893BD5EFA633DF85F0D4(L_19, /*hidden argument*/NULL);
		goto IL_011e;
	}

IL_0075:
	{
		// countCoins -= shopItem.price;
		int32_t L_20 = V_2;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_21 = V_0;
		int32_t L_22 = L_21.get_price_3();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_22));
		// shopCoins.text = "" + countCoins;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_shopCoins_11();
		String_t* L_24;
		L_24 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_25 = L_24;
		G_B6_0 = L_25;
		G_B6_1 = L_23;
		if (L_25)
		{
			G_B7_0 = L_25;
			G_B7_1 = L_23;
			goto IL_0095;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B7_1 = G_B6_1;
	}

IL_0095:
	{
		NullCheck(G_B7_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B7_1, G_B7_0);
		// gdm.SetCoins(countCoins);
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_26 = __this->get_gdm_37();
		int32_t L_27 = V_2;
		NullCheck(L_26);
		GameDataManager_SetCoins_m4658F12B2A571F630EC3742A19CB0AF65E31E1F5(L_26, L_27, /*hidden argument*/NULL);
		// if (isCurrentDB == 2)
		uint8_t L_28 = __this->get_isCurrentDB_36();
		V_5 = (bool)((((int32_t)L_28) == ((int32_t)2))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0113;
		}
	}
	{
		// gdm.SetChar(index);
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_30 = __this->get_gdm_37();
		int32_t L_31 = ___index0;
		NullCheck(L_30);
		GameDataManager_SetChar_m58A0903E0BF369C6A7FA4A1C3D3147026DA03F0E(L_30, L_31, /*hidden argument*/NULL);
		// shopCharDB.PurchaseItem(index);
		ShopItemDatabase_t75BA82C26392A6BE8F0EE389E81F6CDB1A499AF7 * L_32 = __this->get_shopCharDB_13();
		int32_t L_33 = ___index0;
		NullCheck(L_32);
		ShopItemDatabase_PurchaseItem_m4FF967FBE0ADE761C17B6576A3BE97386D7446BE(L_32, L_33, /*hidden argument*/NULL);
		// purchasedChars[index] = true;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_34 = __this->get_purchasedChars_38();
		int32_t L_35 = ___index0;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (bool)1);
		// gdm.SetPurchasedChar(purchasedChars);
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_36 = __this->get_gdm_37();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_37 = __this->get_purchasedChars_38();
		NullCheck(L_36);
		GameDataManager_SetPurchasedChar_m60B121F6F17130AFD371594969C0B843E7C37D5F(L_36, L_37, /*hidden argument*/NULL);
		// uiItem.SetShopItemAsPurchase();
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_38 = V_1;
		NullCheck(L_38);
		ShopItemUI_SetShopItemAsPurchase_m5ED5529533F3A5A3E0233635F37343E17A097040(L_38, /*hidden argument*/NULL);
		// uiItem.OnShopItemSelected(index, OnItemSelected);
		ShopItemUI_t2C413F77BB2371E0F45061A6F6446D9DFDF6B42B * L_39 = V_1;
		int32_t L_40 = ___index0;
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_41 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_41, __this, (intptr_t)((intptr_t)ShopUI_OnItemSelected_m9980DF1275E390D1582CCF14C21584EB3BBEAA18_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		NullCheck(L_39);
		ShopItemUI_OnShopItemSelected_m91BF271F25FF769F6096C00D1BDD0A3A755B1A1B(L_39, L_40, L_41, /*hidden argument*/NULL);
		// SelectItemUI(index);
		int32_t L_42 = ___index0;
		ShopUI_SelectItemUI_mFB62DCC67D7A46726AEE9454E51EF569376AFA80(__this, L_42, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_0113:
	{
		// addToInventory(shopItem);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_43 = V_0;
		ShopUI_addToInventory_m84D02E867C2D47E633FCC3B626E3378EC4FB2B54(__this, L_43, /*hidden argument*/NULL);
	}

IL_011d:
	{
	}

IL_011e:
	{
		// }
		return;
	}
}
// System.Void ShopUI::addToInventory(ShopItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_addToInventory_m84D02E867C2D47E633FCC3B626E3378EC4FB2B54 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  ___shopItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * V_0 = NULL;
	{
		// InventoryItem item = new InventoryItem();
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_0 = (InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 *)il2cpp_codegen_object_new(InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3_il2cpp_TypeInfo_var);
		InventoryItem__ctor_mDA2BEAE4ED6F565E6B7762D8A33C6D12BB7FD133(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// item.sprite = shopItem.spriteBase;
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_1 = V_0;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_2 = ___shopItem0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = L_2.get_spriteBase_0();
		NullCheck(L_1);
		L_1->set_sprite_0(L_3);
		// item.itemName = shopItem.itemName;
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_4 = V_0;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_5 = ___shopItem0;
		String_t* L_6 = L_5.get_itemName_1();
		NullCheck(L_4);
		L_4->set_itemName_1(L_6);
		// item.buffEffectPercent = shopItem.buffEffectPercent;
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_7 = V_0;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_8 = ___shopItem0;
		int32_t L_9 = L_8.get_buffEffectPercent_2();
		NullCheck(L_7);
		L_7->set_buffEffectPercent_2(L_9);
		// item.price = shopItem.price;
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_10 = V_0;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_11 = ___shopItem0;
		int32_t L_12 = L_11.get_price_3();
		NullCheck(L_10);
		L_10->set_price_4(L_12);
		// item.equipmentType = shopItem.equipmentType;
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_13 = V_0;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  L_14 = ___shopItem0;
		int32_t L_15 = L_14.get_equipmentType_5();
		NullCheck(L_13);
		L_13->set_equipmentType_5(L_15);
		// inventoryList.addItem(item);
		InventoryItemDatabase_t92D2B23898C51CEE272BA1DDE75D4B033E6E30B5 * L_16 = __this->get_inventoryList_14();
		InventoryItem_tB22B9629D39BEBFB67295E76B28F6EE94796FAF3 * L_17 = V_0;
		NullCheck(L_16);
		InventoryItemDatabase_addItem_m5179D43E1B83C47B5DE0D481424C6D1349A102C2(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopUI::AnimateNotEnoughCoins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_AnimateNotEnoughCoins_m1367E13B1160E29C50432100D72EF4F1F4EC85FB (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShopUI_U3CAnimateNotEnoughCoinsU3Eb__46_0_m3B2FA958BC6F45B836FC5A659F547ABC92683EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// notEnoughCoinsMsg.transform.DOComplete();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_notEnoughCoinsMsg_22();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = ShortcutExtensions_DOComplete_m1939237DDDE3FA508E979D2AE3DC21523918EE40(L_1, (bool)0, /*hidden argument*/NULL);
		// notEnoughCoinsMsg.DOComplete();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_notEnoughCoinsMsg_22();
		int32_t L_4;
		L_4 = ShortcutExtensions_DOComplete_m1939237DDDE3FA508E979D2AE3DC21523918EE40(L_3, (bool)0, /*hidden argument*/NULL);
		// notEnoughCoinsMsg.transform.DOShakePosition(3f, new Vector3(5f, 0f, 0f), 10, 0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_notEnoughCoinsMsg_22();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (5.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Tweener_tFC8507DF103792DB165B74C4179B772F3B637CA8 * L_8;
		L_8 = ShortcutExtensions_DOShakePosition_mCC169349BF0889172A50B92A7685268CFB0C1BC9(L_6, (3.0f), L_7, ((int32_t)10), (0.0f), (bool)0, (bool)1, 0, /*hidden argument*/NULL);
		// notEnoughCoinsMsg.DOFade(1f, 3f).From(0f).OnComplete(() =>
		// {
		//     notEnoughCoinsMsg.DOFade(0f, 1f);
		// });
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_notEnoughCoinsMsg_22();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_10;
		L_10 = DOTweenModuleUI_DOFade_m8486AF190AF2A12A2447B9F151B26A6DFA15D712(L_9, (1.0f), (3.0f), /*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_11;
		L_11 = TweenSettingsExtensions_From_mA1870ECE2541C4B0BF61942EDC132F0AE9C36090(L_10, (0.0f), (bool)1, (bool)0, /*hidden argument*/NULL);
		TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB * L_12 = (TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB *)il2cpp_codegen_object_new(TweenCallback_tCAA7F86252EC47FCDD15C81B4AEE6EEA72DC15CB_il2cpp_TypeInfo_var);
		TweenCallback__ctor_m595231CFB0B8CD35F6377EA2A88CB98A8E905662(L_12, __this, (intptr_t)((intptr_t)ShopUI_U3CAnimateNotEnoughCoinsU3Eb__46_0_m3B2FA958BC6F45B836FC5A659F547ABC92683EDA_RuntimeMethod_var), /*hidden argument*/NULL);
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_13;
		L_13 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05(L_11, L_12, /*hidden argument*/TweenSettingsExtensions_OnComplete_TisTweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597_mE428E361A9E75CE1F787F072E526F0C9B900FB05_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShopUI::setItemsShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_setItemsShop_mABAEE27406D66E444BBD1FDEC61FC5E8EE03FB50 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	{
		// itemsShopBtn.image.color = shopSelectedColor;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_itemsShopBtn_18();
		NullCheck(L_0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_shopSelectedColor_20();
		NullCheck(L_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// charsShopBtn.image.color = shopNotSelectedColor;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_charsShopBtn_19();
		NullCheck(L_3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_shopNotSelectedColor_21();
		NullCheck(L_4);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// shopItems.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_shopItems_16();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// shopChars.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_shopChars_17();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// isCurrentDB = 1;
		__this->set_isCurrentDB_36((uint8_t)1);
		// }
		return;
	}
}
// System.Void ShopUI::setCharsShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_setCharsShop_m5ADD20ADAE99682F5FAE398633D6C1FB1E36F507 (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	{
		// charsShopBtn.image.color = shopSelectedColor;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_charsShopBtn_19();
		NullCheck(L_0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_0, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_shopSelectedColor_20();
		NullCheck(L_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// itemsShopBtn.image.color = shopNotSelectedColor;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_itemsShopBtn_18();
		NullCheck(L_3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_shopNotSelectedColor_21();
		NullCheck(L_4);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// shopItems.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_shopItems_16();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// shopChars.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_shopChars_17();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// isCurrentDB = 2;
		__this->set_isCurrentDB_36((uint8_t)2);
		// }
		return;
	}
}
// System.Void ShopUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI__ctor_mC1E462240D1846F12A57D4437A01EC35F829384D (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	{
		// float itemSpacing = .5f;
		__this->set_itemSpacing_4((0.5f));
		// int basePercentOfWin = 50;
		__this->set_basePercentOfWin_31(((int32_t)50));
		// int newSelectedItemIndex = 0;
		__this->set_newSelectedItemIndex_32(0);
		// int previousSelectedItemIndex = 0;
		__this->set_previousSelectedItemIndex_33(0);
		// int newSelectedCharIndex = 0;
		__this->set_newSelectedCharIndex_34(0);
		// int previousSelectedCharIndex = 0;
		__this->set_previousSelectedCharIndex_35(0);
		// byte isCurrentDB=1;
		__this->set_isCurrentDB_36((uint8_t)1);
		// GameDataManager gdm = GameDataManager.Instance;
		GameDataManager_tC37B1B706E5DB574ED24BE988CB8A9BAF25607E0 * L_0;
		L_0 = GameDataManager_get_Instance_m1FE0093ED84247042DFF177BE1837BD39EB682EE(/*hidden argument*/NULL);
		__this->set_gdm_37(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShopUI::<AnimateNotEnoughCoins>b__46_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopUI_U3CAnimateNotEnoughCoinsU3Eb__46_0_m3B2FA958BC6F45B836FC5A659F547ABC92683EDA (ShopUI_t5A7E39FEBB271934066F2EB2B09E9F16DDF06D7E * __this, const RuntimeMethod* method)
{
	{
		// notEnoughCoinsMsg.DOFade(0f, 1f);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_notEnoughCoinsMsg_22();
		TweenerCore_3_t551A69CD4FF610AE9DF07C97A86B6FE12EBEB597 * L_1;
		L_1 = DOTweenModuleUI_DOFade_m8486AF190AF2A12A2447B9F151B26A6DFA15D712(L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		// });
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
// System.Void StartingGameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_Start_mC832C6E8077EC8EB877A132DE1C296ECC36A557D (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08C0C43556B331F5469A94500EB9066A5AC774BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B2651B110D4413DBC985B4515A72B433092B717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19104E5F0E2F5C45A515C649ABB35C380DD5CD74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D2F0E060314855A18458D4B6AAB9B638B8641C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C694996C2B9EF3ECBE524D244A1B55E269281D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0A46EE4EC13D0890B71027FEED99D64D4DDCA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52A5073FC5D8C9B14CE059522441CEFCE1428E6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B5F0601E9AB41687D6C065F9FAEF95C9B0FFA89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC5C42FBA1B70A021C186DD013C7F2B49614C86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E6FFB62BC7EB337CACDF62641F78F571E071BA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7788843796112A3333A86F2131B749DCE62B516);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_4 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_4 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B5_4 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B6_4 = NULL;
	RuntimeObject * G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B8_4 = NULL;
	RuntimeObject * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B7_4 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B9_4 = NULL;
	RuntimeObject * G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B11_4 = NULL;
	RuntimeObject * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B10_4 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B12_4 = NULL;
	RuntimeObject * G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B14_4 = NULL;
	RuntimeObject * G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B13_4 = NULL;
	String_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B15_4 = NULL;
	{
		// myPhotonView = GetComponent<PhotonView>();
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_0;
		L_0 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(__this, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		__this->set_myPhotonView_5(L_0);
		// fullGameTimer = maxFullGameWaitTime;
		float L_1 = __this->get_maxFullGameWaitTime_18();
		__this->set_fullGameTimer_16(L_1);
		// notFullGameTimer = maxWaitTime;
		float L_2 = __this->get_maxWaitTime_17();
		__this->set_notFullGameTimer_15(L_2);
		// timerToStartGame = maxWaitTime;
		float L_3 = __this->get_maxWaitTime_17();
		__this->set_timerToStartGame_14(L_3);
		// playerCountUpdate();
		StartingGameController_playerCountUpdate_m25D7DE59A2E4469C605D30CF2725DD631B784568(__this, /*hidden argument*/NULL);
		// INFA.text = "Room name - " + PhotonNetwork.CurrentRoom.Name + " with bet " + PhotonNetwork.CurrentRoom.CustomProperties["C0"]
		//     + "Bet from - " + PhotonNetwork.CurrentRoom.CustomProperties["C1"]
		//     + "Bet to - " + PhotonNetwork.CurrentRoom.CustomProperties["C2"]
		//     + "Buffs - " + PhotonNetwork.CurrentRoom.CustomProperties["C3"]
		//     + "Mode - " + PhotonNetwork.CurrentRoom.CustomProperties["C4"];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_INFA_8();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral19104E5F0E2F5C45A515C649ABB35C380DD5CD74);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral19104E5F0E2F5C45A515C649ABB35C380DD5CD74);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_8;
		L_8 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Room_get_Name_m9EE3395DABAA77129F548CA4DA04D955A15E5743(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral52A5073FC5D8C9B14CE059522441CEFCE1428E6D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral52A5073FC5D8C9B14CE059522441CEFCE1428E6D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_12;
		L_12 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		NullCheck(L_12);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_13;
		L_13 = RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		RuntimeObject * L_14;
		L_14 = Hashtable_get_Item_m176CF45DF3E75C0D72A9C9D60524D948DD086FD1(L_13, _stringLiteral7BC5C42FBA1B70A021C186DD013C7F2B49614C86, /*hidden argument*/NULL);
		RuntimeObject * L_15 = L_14;
		G_B1_0 = L_15;
		G_B1_1 = 3;
		G_B1_2 = L_11;
		G_B1_3 = L_11;
		G_B1_4 = L_4;
		if (L_15)
		{
			G_B2_0 = L_15;
			G_B2_1 = 3;
			G_B2_2 = L_11;
			G_B2_3 = L_11;
			G_B2_4 = L_4;
			goto IL_007f;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_0084;
	}

IL_007f:
	{
		NullCheck(G_B2_0);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_16;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_0084:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = G_B3_3;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral23D2F0E060314855A18458D4B6AAB9B638B8641C);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral23D2F0E060314855A18458D4B6AAB9B638B8641C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_19;
		L_19 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		NullCheck(L_19);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_20;
		L_20 = RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		RuntimeObject * L_21;
		L_21 = Hashtable_get_Item_m176CF45DF3E75C0D72A9C9D60524D948DD086FD1(L_20, _stringLiteral40C694996C2B9EF3ECBE524D244A1B55E269281D, /*hidden argument*/NULL);
		RuntimeObject * L_22 = L_21;
		G_B4_0 = L_22;
		G_B4_1 = 5;
		G_B4_2 = L_18;
		G_B4_3 = L_18;
		G_B4_4 = G_B3_4;
		if (L_22)
		{
			G_B5_0 = L_22;
			G_B5_1 = 5;
			G_B5_2 = L_18;
			G_B5_3 = L_18;
			G_B5_4 = G_B3_4;
			goto IL_00aa;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		G_B6_4 = G_B4_4;
		goto IL_00af;
	}

IL_00aa:
	{
		NullCheck(G_B5_0);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
	}

IL_00af:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = G_B6_3;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral08C0C43556B331F5469A94500EB9066A5AC774BA);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral08C0C43556B331F5469A94500EB9066A5AC774BA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_26;
		L_26 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		NullCheck(L_26);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_27;
		L_27 = RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		RuntimeObject * L_28;
		L_28 = Hashtable_get_Item_m176CF45DF3E75C0D72A9C9D60524D948DD086FD1(L_27, _stringLiteral6B5F0601E9AB41687D6C065F9FAEF95C9B0FFA89, /*hidden argument*/NULL);
		RuntimeObject * L_29 = L_28;
		G_B7_0 = L_29;
		G_B7_1 = 7;
		G_B7_2 = L_25;
		G_B7_3 = L_25;
		G_B7_4 = G_B6_4;
		if (L_29)
		{
			G_B8_0 = L_29;
			G_B8_1 = 7;
			G_B8_2 = L_25;
			G_B8_3 = L_25;
			G_B8_4 = G_B6_4;
			goto IL_00d5;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		G_B9_4 = G_B7_4;
		goto IL_00da;
	}

IL_00d5:
	{
		NullCheck(G_B8_0);
		String_t* L_30;
		L_30 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_30;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
		G_B9_4 = G_B8_4;
	}

IL_00da:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = G_B9_3;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral7E6FFB62BC7EB337CACDF62641F78F571E071BA5);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral7E6FFB62BC7EB337CACDF62641F78F571E071BA5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_33;
		L_33 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		NullCheck(L_33);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_34;
		L_34 = RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		RuntimeObject * L_35;
		L_35 = Hashtable_get_Item_m176CF45DF3E75C0D72A9C9D60524D948DD086FD1(L_34, _stringLiteralD7788843796112A3333A86F2131B749DCE62B516, /*hidden argument*/NULL);
		RuntimeObject * L_36 = L_35;
		G_B10_0 = L_36;
		G_B10_1 = ((int32_t)9);
		G_B10_2 = L_32;
		G_B10_3 = L_32;
		G_B10_4 = G_B9_4;
		if (L_36)
		{
			G_B11_0 = L_36;
			G_B11_1 = ((int32_t)9);
			G_B11_2 = L_32;
			G_B11_3 = L_32;
			G_B11_4 = G_B9_4;
			goto IL_0101;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		G_B12_4 = G_B10_4;
		goto IL_0106;
	}

IL_0101:
	{
		NullCheck(G_B11_0);
		String_t* L_37;
		L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
		G_B12_0 = L_37;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
		G_B12_4 = G_B11_4;
	}

IL_0106:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = G_B12_3;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral0B2651B110D4413DBC985B4515A72B433092B717);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral0B2651B110D4413DBC985B4515A72B433092B717);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_40;
		L_40 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		NullCheck(L_40);
		Hashtable_tF9FB2AD290D8AE4BB771ABA40F2C8EFBA58EEDFF * L_41;
		L_41 = RoomInfo_get_CustomProperties_m135CB7B383DE202A6B1539E5364F3F670C37F1BA(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		RuntimeObject * L_42;
		L_42 = Hashtable_get_Item_m176CF45DF3E75C0D72A9C9D60524D948DD086FD1(L_41, _stringLiteral4D0A46EE4EC13D0890B71027FEED99D64D4DDCA0, /*hidden argument*/NULL);
		RuntimeObject * L_43 = L_42;
		G_B13_0 = L_43;
		G_B13_1 = ((int32_t)11);
		G_B13_2 = L_39;
		G_B13_3 = L_39;
		G_B13_4 = G_B12_4;
		if (L_43)
		{
			G_B14_0 = L_43;
			G_B14_1 = ((int32_t)11);
			G_B14_2 = L_39;
			G_B14_3 = L_39;
			G_B14_4 = G_B12_4;
			goto IL_012e;
		}
	}
	{
		G_B15_0 = ((String_t*)(NULL));
		G_B15_1 = G_B13_1;
		G_B15_2 = G_B13_2;
		G_B15_3 = G_B13_3;
		G_B15_4 = G_B13_4;
		goto IL_0133;
	}

IL_012e:
	{
		NullCheck(G_B14_0);
		String_t* L_44;
		L_44 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B14_0);
		G_B15_0 = L_44;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
		G_B15_4 = G_B14_4;
	}

IL_0133:
	{
		NullCheck(G_B15_2);
		ArrayElementTypeCheck (G_B15_2, G_B15_0);
		(G_B15_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B15_1), (String_t*)G_B15_0);
		String_t* L_45;
		L_45 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B15_3, /*hidden argument*/NULL);
		NullCheck(G_B15_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B15_4, L_45);
		// }
		return;
	}
}
// System.Void StartingGameController::playerCountUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_playerCountUpdate_m25D7DE59A2E4469C605D30CF2725DD631B784568 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// playerCount = PhotonNetwork.PlayerList.Length;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3* L_0;
		L_0 = PhotonNetwork_get_PlayerList_m58666A21470BC619A3B134B9C0E303070A9BCCBB(/*hidden argument*/NULL);
		NullCheck(L_0);
		__this->set_playerCount_9(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		// roomSize = PhotonNetwork.CurrentRoom.MaxPlayers;
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_1;
		L_1 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = Room_get_MaxPlayers_m993971760C8EFD49F8B2DC7A897E58550C5A616A(L_1, /*hidden argument*/NULL);
		__this->set_roomSize_10(L_2);
		// roomCountDisplay.text = playerCount + ":" + roomSize;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_roomCountDisplay_6();
		int32_t* L_4 = __this->get_address_of_playerCount_9();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		int32_t* L_6 = __this->get_address_of_roomSize_10();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_8);
		// if (playerCount == roomSize)
		int32_t L_9 = __this->get_playerCount_9();
		int32_t L_10 = __this->get_roomSize_10();
		V_0 = (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		// readyToStart = true;
		__this->set_readyToStart_12((bool)1);
		// readyToCountDown = true;
		__this->set_readyToCountDown_11((bool)1);
		goto IL_007e;
	}

IL_006e:
	{
		// readyToCountDown = false;
		__this->set_readyToCountDown_11((bool)0);
		// readyToStart = false;
		__this->set_readyToStart_12((bool)0);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void StartingGameController::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_OnPlayerEnteredRoom_m9DB36C684521729537A76CB995AA850E9F991FD8 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___newPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66459480C77BEDD72788682B0850FC19D2E2AF29);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// playerCountUpdate();
		StartingGameController_playerCountUpdate_m25D7DE59A2E4469C605D30CF2725DD631B784568(__this, /*hidden argument*/NULL);
		// if (PhotonNetwork.IsMasterClient)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_IsMasterClient_mA5BDB19FF947552372B29C590298127E0B1B7F9C(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// photonView.RPC("RPCSendTimer", RpcTarget.Others, timerToStartGame);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_2;
		L_2 = MonoBehaviourPun_get_photonView_m3F63E6D42FDD54B75EF0EC0D2DC07C5A6CDBFC0C(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		float L_5 = __this->get_timerToStartGame_14();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_2);
		PhotonView_RPC_m97CDF5E617695D4656A00DBD7015B05D2DC9E8C6(L_2, _stringLiteral66459480C77BEDD72788682B0850FC19D2E2AF29, 1, L_4, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void StartingGameController::RPCSendTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_RPCSendTimer_m03A1031B6B2CA7A0965C2BE5956BF40BB3307F9B (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, float ___timeIn0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// timerToStartGame = timeIn;
		float L_0 = ___timeIn0;
		__this->set_timerToStartGame_14(L_0);
		// notFullGameTimer = timeIn;
		float L_1 = ___timeIn0;
		__this->set_notFullGameTimer_15(L_1);
		// if (timeIn < fullGameTimer)
		float L_2 = ___timeIn0;
		float L_3 = __this->get_fullGameTimer_16();
		V_0 = (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// fullGameTimer = timeIn;
		float L_5 = ___timeIn0;
		__this->set_fullGameTimer_16(L_5);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void StartingGameController::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_OnPlayerLeftRoom_m6E2DDDCBD825A310EFD6C286F1706894B406F8D5 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___otherPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5EFECFAFD0595DAEEC7A8E3CFB83C70D465D6D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDF2DA21F3A2A557000EB87A709ABA96388C3F54);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerCountUpdate();
		StartingGameController_playerCountUpdate_m25D7DE59A2E4469C605D30CF2725DD631B784568(__this, /*hidden argument*/NULL);
		// Debug.Log("Starting game controller - OnPlayerLeftRoom");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFDF2DA21F3A2A557000EB87A709ABA96388C3F54, /*hidden argument*/NULL);
		// SceneManager.LoadScene("BuffMode");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralF5EFECFAFD0595DAEEC7A8E3CFB83C70D465D6D3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartingGameController::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_OnLeftRoom_mC052F5DACBEE755B8FBD720CE89C2C77C3FD92C1 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30FFA319B7E7ACA3B5491388A400E39F0AFA48CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5EFECFAFD0595DAEEC7A8E3CFB83C70D465D6D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Starting game controller - OnLeftRoom");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral30FFA319B7E7ACA3B5491388A400E39F0AFA48CF, /*hidden argument*/NULL);
		// SceneManager.LoadScene("BuffMode");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralF5EFECFAFD0595DAEEC7A8E3CFB83C70D465D6D3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartingGameController::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_OnDisconnected_m24FBFFA739A225E87F2E6F28E0234970376DEAAB (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral456802289A14AE717BD0BC56A7BAEACFF3A44998);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5EFECFAFD0595DAEEC7A8E3CFB83C70D465D6D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerCountUpdate();
		StartingGameController_playerCountUpdate_m25D7DE59A2E4469C605D30CF2725DD631B784568(__this, /*hidden argument*/NULL);
		// Debug.Log("Starting game controller - OnDisconnected");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral456802289A14AE717BD0BC56A7BAEACFF3A44998, /*hidden argument*/NULL);
		// PhotonNetwork.LeaveRoom();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_LeaveRoom_mA97BD6121DBB4BC43140024C405D7C2EDCCCABF1((bool)1, /*hidden argument*/NULL);
		// SceneManager.LoadScene("BuffMode");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralF5EFECFAFD0595DAEEC7A8E3CFB83C70D465D6D3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartingGameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_Update_mE564A6A605940C8E58CF9054B7624E66D123CE44 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method)
{
	{
		// prepareStartingGame();
		StartingGameController_prepareStartingGame_m59BDC555731CEFFA60E7A3CAD4108964C64038C6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartingGameController::prepareStartingGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_prepareStartingGame_m59BDC555731CEFFA60E7A3CAD4108964C64038C6 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (readyToStart)
		bool L_0 = __this->get_readyToStart_12();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// fullGameTimer -= Time.deltaTime;
		float L_2 = __this->get_fullGameTimer_16();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_fullGameTimer_16(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// timerToStartGame = fullGameTimer;
		float L_4 = __this->get_fullGameTimer_16();
		__this->set_timerToStartGame_14(L_4);
	}

IL_002b:
	{
		// string tempTimer = string.Format("{0:00}", timerToStartGame);
		float L_5 = __this->get_timerToStartGame_14();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral77387B78748B05E25D49DF7E83E0FC37687A3FF3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// timerToStartDisplay.text = tempTimer;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_timerToStartDisplay_7();
		String_t* L_10 = V_0;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
		// if (timerToStartGame <= 0f)
		float L_11 = __this->get_timerToStartGame_14();
		V_2 = (bool)((((int32_t)((!(((float)L_11) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// if (startingGame)
		bool L_13 = __this->get_startingGame_13();
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// return;
		goto IL_0078;
	}

IL_0070:
	{
		// StartGame();
		StartingGameController_StartGame_mD87A6D4F56B28C4E900B83137878B72F889367A1(__this, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void StartingGameController::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_StartGame_mD87A6D4F56B28C4E900B83137878B72F889367A1 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// startingGame = true;
		__this->set_startingGame_13((bool)1);
		// if (!PhotonNetwork.IsMasterClient)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_IsMasterClient_mA5BDB19FF947552372B29C590298127E0B1B7F9C(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		goto IL_002e;
	}

IL_0017:
	{
		// PhotonNetwork.CurrentRoom.IsOpen = false;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * L_2;
		L_2 = PhotonNetwork_get_CurrentRoom_m30C7F8A5B1F9F39063CC4A083F3AC9017B1E4853(/*hidden argument*/NULL);
		NullCheck(L_2);
		Room_set_IsOpen_mE080FA9EF98A4CC9619FF11D1BC34EBC58934DBE(L_2, (bool)0, /*hidden argument*/NULL);
		// PhotonNetwork.LoadLevel("Game");
		PhotonNetwork_LoadLevel_m29648C8F5442DF11D84E6B4C8E7A505081C1B893(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void StartingGameController::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController_Cancel_mBBDC64C28624FA79FEED52DB0092ABCDEF60C124 (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.LeaveRoom();
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_LeaveRoom_mA97BD6121DBB4BC43140024C405D7C2EDCCCABF1((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartingGameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartingGameController__ctor_mDC580C53F1A8281A983EDC83AC47ABE1968393FF (StartingGameController_t3291A7B99C3DF24E9C9BC40725995CC568A1EF36 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviourPunCallbacks__ctor_m62F4C1105FC1D237DEBE4BE76535F8152A8FF553(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_Awake_m5402B2656DCEF5F78D8BA1D3D7D77EBD7F07AC9E (TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set__text_4(L_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnEnable_mD3229078DB78111EDC0B823872D1E381F3C15A5F (TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F * __this, const RuntimeMethod* method)
{
	{
		// _text.color = NormalColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__text_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_NormalColor_6();
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnDisable_mAB2CCC24F8B8F1D664154DC1D0D7E47A925A3B72 (TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F * __this, const RuntimeMethod* method)
{
	{
		// _text.color = NormalColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__text_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = __this->get_NormalColor_6();
		NullCheck(L_0);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerEnter_m28E7599E058554E4C13D7EA152521BCF4C104B07 (TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * L_0 = __this->get_Selectable_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * L_2 = __this->get_Selectable_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// _text.color = HoverColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get__text_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_HoverColor_7();
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerExit_m25F271B30D439D9AD93483E1CC08FC198A3E9A02 (TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * L_0 = __this->get_Selectable_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * L_2 = __this->get_Selectable_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// _text.color = NormalColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get__text_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_NormalColor_6();
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition__ctor_m9E3AFEA1BEFD79F8F0D16DA749243B7D43B78570 (TextButtonTransition_t51491A0543434FBDA97FB36A7A95C483FB6EE16F * __this, const RuntimeMethod* method)
{
	{
		// public Color NormalColor= Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_NormalColor_6(L_0);
		// public Color HoverColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_HoverColor_7(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnEnable_mA240AFB3178800D5275FB5BD05D54449EC49BAF2 (TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m2C3DAB9655DD596BFC184D0A5B4F83D36C8B2FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set__text_5(L_0);
		// OnValueChanged (toggle.isOn);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_1 = __this->get_toggle_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C(L_1, /*hidden argument*/NULL);
		TextToggleIsOnTransition_OnValueChanged_m2C3DAB9655DD596BFC184D0A5B4F83D36C8B2FFB(__this, L_2, /*hidden argument*/NULL);
		// toggle.onValueChanged.AddListener(OnValueChanged);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_3 = __this->get_toggle_4();
		NullCheck(L_3);
		ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * L_4 = L_3->get_onValueChanged_23();
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_5 = (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)il2cpp_codegen_object_new(UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD(L_5, __this, (intptr_t)((intptr_t)TextToggleIsOnTransition_OnValueChanged_m2C3DAB9655DD596BFC184D0A5B4F83D36C8B2FFB_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72(L_4, L_5, /*hidden argument*/UnityEvent_1_AddListener_m85ADA80CA03B5922F5B656382495EFED45465B72_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnDisable_m824A3816D8873B0A5F86F4F401FF080163560404 (TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m2C3DAB9655DD596BFC184D0A5B4F83D36C8B2FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.onValueChanged.RemoveListener(OnValueChanged);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = __this->get_toggle_4();
		NullCheck(L_0);
		ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * L_1 = L_0->get_onValueChanged_23();
		UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF * L_2 = (UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF *)il2cpp_codegen_object_new(UnityAction_1_t11E0F272F18CD83EDF205B4A43689B005D10B7BF_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD(L_2, __this, (intptr_t)((intptr_t)TextToggleIsOnTransition_OnValueChanged_m2C3DAB9655DD596BFC184D0A5B4F83D36C8B2FFB_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m7610B8631ECBD7E88D42E0FB686AC406253452BD_RuntimeMethod_var);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D(L_1, L_2, /*hidden argument*/UnityEvent_1_RemoveListener_m8FD377ED71674BFC261CF0244A416C5C89AFF93D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m2C3DAB9655DD596BFC184D0A5B4F83D36C8B2FFB (TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D * __this, bool ___isOn0, const RuntimeMethod* method)
{
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B5_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_1 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B8_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B7_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B6_0 = NULL;
	{
		// _text.color = isOn? (isHover?HoverOnColor:HoverOnColor) : (isHover?NormalOffColor:NormalOffColor) ;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__text_5();
		bool L_1 = ___isOn0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B5_0 = L_0;
			goto IL_0022;
		}
	}
	{
		bool L_2 = __this->get_isHover_10();
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_NormalOffColor_7();
		G_B4_0 = L_3;
		G_B4_1 = G_B2_0;
		goto IL_0020;
	}

IL_001a:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get_NormalOffColor_7();
		G_B4_0 = L_4;
		G_B4_1 = G_B3_0;
	}

IL_0020:
	{
		G_B8_0 = G_B4_0;
		G_B8_1 = G_B4_1;
		goto IL_0038;
	}

IL_0022:
	{
		bool L_5 = __this->get_isHover_10();
		G_B6_0 = G_B5_0;
		if (L_5)
		{
			G_B7_0 = G_B5_0;
			goto IL_0032;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_HoverOnColor_8();
		G_B8_0 = L_6;
		G_B8_1 = G_B6_0;
		goto IL_0038;
	}

IL_0032:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = __this->get_HoverOnColor_8();
		G_B8_0 = L_7;
		G_B8_1 = G_B7_0;
	}

IL_0038:
	{
		NullCheck(G_B8_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B8_1, G_B8_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerEnter_m01E7951E3FE9C9C9A1FC1D5E26EFF4041799E0E5 (TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// isHover = true;
		__this->set_isHover_10((bool)1);
		// _text.color = toggle.isOn?HoverOnColor:HoverOffColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__text_5();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_1 = __this->get_toggle_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0023;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_HoverOffColor_9();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0023:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get_HoverOnColor_8();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerExit_mBF6DDD1410475F0C6118F9C85F572E669FBB4C20 (TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// isHover = false;
		__this->set_isHover_10((bool)0);
		// _text.color = toggle.isOn?NormalOnColor:NormalOffColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get__text_5();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_1 = __this->get_toggle_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0023;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_NormalOffColor_7();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0023:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get_NormalOnColor_6();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition__ctor_mA401C98E0CC8F9B8728B46138CCF941C6E471F04 (TextToggleIsOnTransition_t138BBDEFB7B6957F27ED0A5E0B4776503FA1436D * __this, const RuntimeMethod* method)
{
	{
		// public Color NormalOnColor= Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_NormalOnColor_6(L_0);
		// public Color NormalOffColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_NormalOffColor_7(L_1);
		// public Color HoverOnColor= Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_HoverOnColor_8(L_2);
		// public Color HoverOffColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_HoverOffColor_9(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BotGameManager/<Pause>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseU3Ed__26__ctor_mC01855C44E6DBBBA51E9262DA73C59C48F9B178A (U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BotGameManager/<Pause>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseU3Ed__26_System_IDisposable_Dispose_mFD78AEA5416A5B43FD1F253F78FA9D27FD372C86 (U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BotGameManager/<Pause>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPauseU3Ed__26_MoveNext_m0C16994E670CA2FAC4C012F4AEEEE0521B9D0DB1 (U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0050;
	}

IL_0022:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PauseGame();
		BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		BotGameManager_PauseGame_m86AA36821A307C3D937BE941E6D908B7E78DBA40(L_4, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0022;
	}
}
// System.Object BotGameManager/<Pause>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C5F7A047DC6D4C7BDAAEA356D0BAF23B911E751 (U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BotGameManager/<Pause>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseU3Ed__26_System_Collections_IEnumerator_Reset_m20FE19C8F8E622716F87AFF9D5B908FEC341D8F1 (U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPauseU3Ed__26_System_Collections_IEnumerator_Reset_m20FE19C8F8E622716F87AFF9D5B908FEC341D8F1_RuntimeMethod_var)));
	}
}
// System.Object BotGameManager/<Pause>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseU3Ed__26_System_Collections_IEnumerator_get_Current_m49B00408FDF6E69219302945A902BDE15AD5F94C (U3CPauseU3Ed__26_tBD3F13D702C9B41E6FD1391A0307637EB121C888 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void BotGameManager/<StartPreparingTimer>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPreparingTimerU3Ed__25__ctor_mB935AB26DE8B183099C1D17F07A5EA8F736BFF50 (U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BotGameManager/<StartPreparingTimer>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPreparingTimerU3Ed__25_System_IDisposable_Dispose_m111C93854706E059B3B2F37AFB470E1F7AAF63C3 (U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BotGameManager/<StartPreparingTimer>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartPreparingTimerU3Ed__25_MoveNext_m0B6FB3CA47F707BD7719AED0BF3BE8081A772103 (U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1720268A1E1450741DE5E6BA3B74B17656398B4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_005b;
	}

IL_0022:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("StartPreparingTimer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF1720268A1E1450741DE5E6BA3B74B17656398B4, /*hidden argument*/NULL);
		// SendPreparingTimer();
		BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		BotGameManager_SendPreparingTimer_m3CB557FDAFBD0191304598FE01B4B785EB53EC81(L_4, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0022;
	}
}
// System.Object BotGameManager/<StartPreparingTimer>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartPreparingTimerU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m271905319397ABDB8534C1822A8E390D99A2B7D6 (U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BotGameManager/<StartPreparingTimer>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPreparingTimerU3Ed__25_System_Collections_IEnumerator_Reset_m12F8A636BD5C59E6A7BC0E0678F9B0DDE2377D78 (U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartPreparingTimerU3Ed__25_System_Collections_IEnumerator_Reset_m12F8A636BD5C59E6A7BC0E0678F9B0DDE2377D78_RuntimeMethod_var)));
	}
}
// System.Object BotGameManager/<StartPreparingTimer>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartPreparingTimerU3Ed__25_System_Collections_IEnumerator_get_Current_m41FB53003D728193DFF7A3B311A23127413609C6 (U3CStartPreparingTimerU3Ed__25_tBA4C0EE4B74DEFD562651835DF6DDA8CC93B090B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void BotGameManager/<StartTimer>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTimerU3Ed__27__ctor_m7EF4B4A68109A4494E05EB72965F155C107CD805 (U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BotGameManager/<StartTimer>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTimerU3Ed__27_System_IDisposable_Dispose_mD74DC8EF17ECD54948CC11733BE6ECFA49206356 (U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BotGameManager/<StartTimer>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartTimerU3Ed__27_MoveNext_m8FA915259756A033D2FF5DFA12D6A74E17F4CE3E (U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0050;
	}

IL_0022:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SendTimer();
		BotGameManager_tDEEC772E211923207F5728FF2C74423C72B7E853 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		BotGameManager_SendTimer_mE00AB3516D467CAE854BA9C6B8737B8EAE652C48(L_4, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0022;
	}
}
// System.Object BotGameManager/<StartTimer>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartTimerU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m15F99592632E98AF7614BBC4D04C267244CD62CD (U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BotGameManager/<StartTimer>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTimerU3Ed__27_System_Collections_IEnumerator_Reset_m09B4973113948FB199FE91F4ACCB2ECF8F5F90DD (U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartTimerU3Ed__27_System_Collections_IEnumerator_Reset_m09B4973113948FB199FE91F4ACCB2ECF8F5F90DD_RuntimeMethod_var)));
	}
}
// System.Object BotGameManager/<StartTimer>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartTimerU3Ed__27_System_Collections_IEnumerator_get_Current_mA034CDDD1B797A150EEB12B7972A24E5D60B43C8 (U3CStartTimerU3Ed__27_tFC79B3236B11CA6C04FAC25F0E87B80460EAC4D0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void CheckAndFixDependenciesFireBase/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3D41DE997EE3AD51E7B0A3400E9363C693B8D4B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB * L_0 = (U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB *)il2cpp_codegen_object_new(U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m972D5606AF8BE0132B82AB7A64DD144A758F81B8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void CheckAndFixDependenciesFireBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m972D5606AF8BE0132B82AB7A64DD144A758F81B8 (U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CheckAndFixDependenciesFireBase/<>c::<Start>b__0_0(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_m0F7C15C650F980D6658F8D5DDE198E5B43C46551 (U3CU3Ec_t5065A18A617D39B3E8CEA9FE593BD900FF7B0CCB * __this, Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_2 = NULL;
	{
		// var dependencyStatus = task.Result;
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_0 = ___task0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E(L_0, /*hidden argument*/Task_1_get_Result_m48918EB897FE15E0322D82EB94C8E4463251852E_RuntimeMethod_var);
		V_0 = L_1;
		// if (dependencyStatus == Firebase.DependencyStatus.Available)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// var app = Firebase.FirebaseApp.DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4;
		L_4 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0032;
	}

IL_001a:
	{
		// UnityEngine.Debug.LogError(System.String.Format(
		//   "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral674EF683D8B400F1F0F590BCCA13A350C3C1A25F, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// });
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
// System.Void GameManager/<Pause>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseU3Ed__39__ctor_mD58E7D773F038BF16B4B3B831644AFA58C90A9B3 (U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<Pause>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseU3Ed__39_System_IDisposable_Dispose_mA4E7C5C795C0963C948EA2B50F2984FB15CB30AC (U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<Pause>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPauseU3Ed__39_MoveNext_mEEED2CE7288274343C72F2043E621CE082179919 (U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECDAA6ECC0A305BAA615654EA40F3596C002E9B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0060;
	}

IL_0022:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// myPhotonView.RPC("RPCPause", RpcTarget.All);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_5 = L_4->get_myPhotonView_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_5);
		PhotonView_RPC_m97CDF5E617695D4656A00DBD7015B05D2DC9E8C6(L_5, _stringLiteralECDAA6ECC0A305BAA615654EA40F3596C002E9B6, 0, L_6, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0022;
	}
}
// System.Object GameManager/<Pause>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m76FD23019D8F9BBF579E3249799B298CE9F4A983 (U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<Pause>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPauseU3Ed__39_System_Collections_IEnumerator_Reset_m17A179A37B638E356AE8829B12D9FE6C51870F5D (U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPauseU3Ed__39_System_Collections_IEnumerator_Reset_m17A179A37B638E356AE8829B12D9FE6C51870F5D_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<Pause>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPauseU3Ed__39_System_Collections_IEnumerator_get_Current_m3FEAE60119C46E1DCAE753F58B67D5CB18BBAF05 (U3CPauseU3Ed__39_t4C56D7C0BAB387C3E6FC11DED234CA562FE17AB7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GameManager/<StartPreparingTimer>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPreparingTimerU3Ed__38__ctor_m7CACFC0A4B8CE857320B0F6AE2FB35C1CAE6D01B (U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<StartPreparingTimer>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPreparingTimerU3Ed__38_System_IDisposable_Dispose_m2427C973804480AED2B50A008C67F4792C7C1A1E (U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<StartPreparingTimer>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartPreparingTimerU3Ed__38_MoveNext_m412EE6C4DFE5688BC840E435C0FE18CC435F4B17 (U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F57AEEBB21DF089335B32FBDA2797990A07402A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1720268A1E1450741DE5E6BA3B74B17656398B4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_006b;
	}

IL_0022:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("StartPreparingTimer");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF1720268A1E1450741DE5E6BA3B74B17656398B4, /*hidden argument*/NULL);
		// myPhotonView.RPC("RPCSendPreparingTimer", RpcTarget.All);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_5 = L_4->get_myPhotonView_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_5);
		PhotonView_RPC_m97CDF5E617695D4656A00DBD7015B05D2DC9E8C6(L_5, _stringLiteral4F57AEEBB21DF089335B32FBDA2797990A07402A, 0, L_6, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0022;
	}
}
// System.Object GameManager/<StartPreparingTimer>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartPreparingTimerU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCEE99B3B2328472884780B8A6DB9AF01319A138A (U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<StartPreparingTimer>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartPreparingTimerU3Ed__38_System_Collections_IEnumerator_Reset_m1C9A147B5BE13EDBEC043F16BEA5C2999689E5D2 (U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartPreparingTimerU3Ed__38_System_Collections_IEnumerator_Reset_m1C9A147B5BE13EDBEC043F16BEA5C2999689E5D2_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<StartPreparingTimer>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartPreparingTimerU3Ed__38_System_Collections_IEnumerator_get_Current_mE7A7B499DF8A3D82D261AAA4FA702D1223830927 (U3CStartPreparingTimerU3Ed__38_t99935DA40CF7255FAB535B5D64B21B30D6CD7370 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GameManager/<StartTimer>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTimerU3Ed__40__ctor_m6524C0CE1C90DEDB8039FA7FCF397A0DF37A8CA5 (U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<StartTimer>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTimerU3Ed__40_System_IDisposable_Dispose_mA74CB56A10E3A163F75699C2537CB4B37E05DDBE (U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<StartTimer>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartTimerU3Ed__40_MoveNext_m58093505C5BCBD44842863C077848ED827B49242 (U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66459480C77BEDD72788682B0850FC19D2E2AF29);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0060;
	}

IL_0022:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// myPhotonView.RPC("RPCSendTimer", RpcTarget.All);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_5 = L_4->get_myPhotonView_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_5);
		PhotonView_RPC_m97CDF5E617695D4656A00DBD7015B05D2DC9E8C6(L_5, _stringLiteral66459480C77BEDD72788682B0850FC19D2E2AF29, 0, L_6, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0022;
	}
}
// System.Object GameManager/<StartTimer>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartTimerU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2DBFBEC69FA8EFC0E6CB66E27584FEF1ACD687BC (U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<StartTimer>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTimerU3Ed__40_System_Collections_IEnumerator_Reset_m2A6DA579DA1FD91BE03E86E1CCA80A4F159D60CA (U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartTimerU3Ed__40_System_Collections_IEnumerator_Reset_m2A6DA579DA1FD91BE03E86E1CCA80A4F159D60CA_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<StartTimer>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartTimerU3Ed__40_System_Collections_IEnumerator_get_Current_m99C2CD9F29EF51691465C64E47B41897FBD64179 (U3CStartTimerU3Ed__40_tB4EA70F70EC807A85990B9D19D31E3B3BFDDB66A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GameManager/<WaitigOpponent>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitigOpponentU3Ed__32__ctor_m77F702ADA8E82B470D30B499AFCC25F601429AFC (U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<WaitigOpponent>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitigOpponentU3Ed__32_System_IDisposable_Dispose_mE3295D990369EE92F96333B5E1EB6D447F5B10C4 (U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<WaitigOpponent>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitigOpponentU3Ed__32_MoveNext_mED8C79FE285B80399E000C39E63D86A12E939FF3 (U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0050;
	}

IL_0022:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WaitingOpponentTimer();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		GameManager_WaitingOpponentTimer_m42A51EBF1BF4961A6E613044FB7FC47C93AF9659(L_4, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// while (true)
		V_1 = (bool)1;
		goto IL_0022;
	}
}
// System.Object GameManager/<WaitigOpponent>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitigOpponentU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m94398A23895F35F36BA240E380877FFA27650968 (U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<WaitigOpponent>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitigOpponentU3Ed__32_System_Collections_IEnumerator_Reset_m628B2EBCBAD74FBE0453975F7071819EE174658E (U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitigOpponentU3Ed__32_System_Collections_IEnumerator_Reset_m628B2EBCBAD74FBE0453975F7071819EE174658E_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<WaitigOpponent>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitigOpponentU3Ed__32_System_Collections_IEnumerator_get_Current_mC5A112A069478989169D5A4F57F5B0000E30ED1E (U3CWaitigOpponentU3Ed__32_t48D3ED4353671CA6E3F65E8D7B2B9162D3F077FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void ItemSlot/<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_m567B2F2AF4C180000DA9AEF84A35178F4A6374C8 (U3CU3Ec__DisplayClass26_0_tD403CE44724A458A3FD4A1A2DE09BD6C05D299C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ItemSlot/<>c__DisplayClass26_0::<OnItemSelected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3COnItemSelectedU3Eb__0_mE66E79DB38CB2AED86BDCA4D9EAACE827A1E4A04 (U3CU3Ec__DisplayClass26_0_tD403CE44724A458A3FD4A1A2DE09BD6C05D299C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainPanel.GetComponent<Button>().onClick.AddListener(() => action.Invoke(itemIndex));
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = __this->get_action_0();
		int32_t L_1 = __this->get_itemIndex_1();
		NullCheck(L_0);
		UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D(L_0, L_1, /*hidden argument*/UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
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
// System.Void ItemSlot/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m1F837832D77E115A4F80CA7DDAA939D56BFCEA8C (U3CU3Ec__DisplayClass30_0_tE76B5DDD44CAA206B70064FC5412E29FBFF29F35 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ItemSlot/<>c__DisplayClass30_0::<OnPickItem>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3COnPickItemU3Eb__0_m05B5DCBC9551F8167511985B839DF378A38FB0CD (U3CU3Ec__DisplayClass30_0_tE76B5DDD44CAA206B70064FC5412E29FBFF29F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pickBtn.onClick.AddListener(() => action.Invoke(itemIndex));
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = __this->get_action_0();
		int32_t L_1 = __this->get_itemIndex_1();
		NullCheck(L_0);
		UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D(L_0, L_1, /*hidden argument*/UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
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
// System.Void ItemSlot/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_mFAFD37C99F936E5FDB99EF07294D6A4F4E5894F4 (U3CU3Ec__DisplayClass35_0_tF294C85C1A410D62438561DC5E4B00311460DA95 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ItemSlot/<>c__DisplayClass35_0::<OnSellItem>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3COnSellItemU3Eb__0_mA3690C816D5230A802FB9476607207540A2C58A3 (U3CU3Ec__DisplayClass35_0_tF294C85C1A410D62438561DC5E4B00311460DA95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sellItemBtn.onClick.AddListener(() => action.Invoke(itemIndex));
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = __this->get_action_0();
		int32_t L_1 = __this->get_itemIndex_1();
		NullCheck(L_0);
		UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D(L_0, L_1, /*hidden argument*/UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
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
// System.Void ItemSlot/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m07B2C9E90FF801924211C7A3072993CFBAE7FE75 (U3CU3Ec__DisplayClass37_0_t5251486F89B9B5025FBC82EF2D141A1854EFAF13 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ItemSlot/<>c__DisplayClass37_0::<OnUpgradeItem>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0_U3COnUpgradeItemU3Eb__0_m67DC169AE01A4816D0A43034D4779FD9D582469E (U3CU3Ec__DisplayClass37_0_t5251486F89B9B5025FBC82EF2D141A1854EFAF13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// upgradeBtn.GetComponent<Button>().onClick.AddListener(() => action.Invoke(itemIndex));
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = __this->get_action_0();
		int32_t L_1 = __this->get_itemIndex_1();
		NullCheck(L_0);
		UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D(L_0, L_1, /*hidden argument*/UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
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
// System.Void PushNotificationSender/Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_m0F983168D1AD444C8D48E337A45DDA84353114F9 (Data_tC64F76CF7B45DCB89D9E50A47752AC6F2E962A22 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void PushNotificationSender/Notification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notification__ctor_mC015E22EBD43AA28D8BE5FFBDB375BE561C56C48 (Notification_t6C3CF687F5749FE53F658C999A51F21920560C78 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void PushNotificationSender/RequestData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestData__ctor_m2BFF5E25E6DD70DDD92C65A02D9070215DB88653 (RequestData_tB433A538242D2C3882F169039F9BCA8AECCF96AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ShopItemUI/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m4C17EC9CE3DDAE51E0DF002492118B3F643958D3 (U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShopItemUI/<>c__DisplayClass18_0::<OnShopItemSelected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3COnShopItemSelectedU3Eb__0_m9647A69158BB4B19A3D004F6B3F3FED3015F3D56 (U3CU3Ec__DisplayClass18_0_tA02BC54517CDAE336D1F5B11B448888E34E43846 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shopItemBtn.onClick.AddListener(() => action.Invoke(itemIndex));
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = __this->get_action_0();
		int32_t L_1 = __this->get_itemIndex_1();
		NullCheck(L_0);
		UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D(L_0, L_1, /*hidden argument*/UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
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
// System.Void ShopItemUI/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mEAF95E3A52CEB727E0F183F08CDB2A6BBE831F62 (U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShopItemUI/<>c__DisplayClass19_0::<OnShopItemPurchase>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3COnShopItemPurchaseU3Eb__0_m9FE850F3C2717A73CBBE401F23A0673F6D1A687D (U3CU3Ec__DisplayClass19_0_t17EC73E75554B788FAD4FE4E704927B22541566E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// purchaseBtn.onClick.AddListener(() => action.Invoke(itemIndex));
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = __this->get_action_0();
		int32_t L_1 = __this->get_itemIndex_1();
		NullCheck(L_0);
		UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D(L_0, L_1, /*hidden argument*/UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
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
// System.Void ShopItemUI/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mB11C70B87F3D95A3C5A73E09027D1374CE5BE6C9 (U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShopItemUI/<>c__DisplayClass20_0::<OnShopCharPurchase>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3COnShopCharPurchaseU3Eb__0_mCBE1F63C6296D22B67AF9111E398FF6260F2A225 (U3CU3Ec__DisplayClass20_0_tE32D0245237A9ECA6C0D6011AC8EBD28A2E63924 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// purchaseBtn.onClick.AddListener(() => action.Invoke(itemIndex));
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_0 = __this->get_action_0();
		int32_t L_1 = __this->get_itemIndex_1();
		NullCheck(L_0);
		UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D(L_0, L_1, /*hidden argument*/UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
