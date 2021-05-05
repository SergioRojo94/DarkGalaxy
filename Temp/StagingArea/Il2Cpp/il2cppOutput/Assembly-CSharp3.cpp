#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Lovatto.SceneLoader.TheSceneList
struct TheSceneList_tCF6F90FB911D7AA7D9FD325EE106D713BEF2D10A;
// Lovatto.SceneLoader.TheTipList
struct TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// bl_LoadingScreenUI
struct bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B;
// bl_SceneLoader
struct bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710;
// Lovatto.SceneLoader.bl_SceneLoaderInfo
struct bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912;
// Lovatto.SceneLoader.bl_SceneLoaderManager
struct bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// bl_LoadingScreenUI/<FadeInCanvas>d__40
struct U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E;
// bl_LoadingScreenUI/<FadeOutCanvas>d__39
struct U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE;
// bl_LoadingScreenUI/<LoadNextSceneIE>d__38
struct U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052;
// bl_LoadingScreenUI/<TipsLoop>d__35
struct U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362;
// bl_LoadingScreenUI/<WaitNextTip>d__37
struct U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B;
// bl_SceneLoader/<AsynLoadData>d__37
struct U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA;
// bl_SceneLoader/<DoAsyncOperation>d__45
struct U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4;
// bl_SceneLoader/<StartFakeLoading>d__46
struct U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359;
// bl_SceneLoader/OnLoaded
struct OnLoaded_t3F3D7C1797E2379CAFB860659B6E9390D1A8EBBC;
// Lovatto.SceneLoader.bl_SceneLoaderManager/<>c
struct U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D;
// Lovatto.SceneLoader.bl_SceneLoaderManager/<AsyncLoadData>d__6
struct U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Func`2<Lovatto.SceneLoader.bl_SceneLoaderInfo,System.String>
struct Func_2_t9D7F40C54817844F49077D3A168437E0E7080462;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Lovatto.SceneLoader.ReorderableArray`1<System.Object>
struct ReorderableArray_1_tBB3DCC232503D513ACC089C59BF5A055CDD29962;
// Lovatto.SceneLoader.ReorderableArray`1<System.String>
struct ReorderableArray_1_tED8B1D5F969A4D864FE90B1BC3A19CB3F6B9482E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;

IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral925BB8BA64DCDC5F9EDAC68D64BBE2D39BF83D33;
IL2CPP_EXTERN_C const RuntimeMethod* ReorderableArray_1_get_Count_mDC63C96E42EC47386585885B067CA1285AB6DBD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReorderableArray_1_get_Item_m782FE924D7FDDC630C52ED9B98A436FDBA91FC8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAsynLoadDataU3Ed__37_System_Collections_IEnumerator_Reset_m800D46FC7902C89FEBB5B6BBD6DEA4E74B43FCFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAsyncLoadDataU3Ed__6_System_Collections_IEnumerator_Reset_m483C6A48445B88C42C94F788054C704F88556DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoAsyncOperationU3Ed__45_System_Collections_IEnumerator_Reset_m7BA4A5539DB2724C3513D168A9523157928FBB74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInCanvasU3Ed__40_System_Collections_IEnumerator_Reset_m6F27DDFF1C940337549F4519393436B249E00534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutCanvasU3Ed__39_System_Collections_IEnumerator_Reset_m2BE5F2F6D877B6E2ED6C6FAE9B6EA70318B7B9A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadNextSceneIEU3Ed__38_System_Collections_IEnumerator_Reset_mBCA4219AFF4844FB86BE4E1CE964FFE93D9C9B3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartFakeLoadingU3Ed__46_System_Collections_IEnumerator_Reset_mD9FBA956F6112A29EFFFB051BE68F78EB9287FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTipsLoopU3Ed__35_System_Collections_IEnumerator_Reset_m2437E5A914650E60E56D6B9D5683EE07DB18CEA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitNextTipU3Ed__37_System_Collections_IEnumerator_Reset_m5CBCFA850403A6916548061A4125092C2BD7D2C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t U3CAsynLoadDataU3Ed__37_MoveNext_m90A0084065EEC7E3BF36D2294E32A5542434D09B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAsynLoadDataU3Ed__37_System_Collections_IEnumerator_Reset_m800D46FC7902C89FEBB5B6BBD6DEA4E74B43FCFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAsyncLoadDataU3Ed__6_MoveNext_m5EF4C09F26ACD1EF4CB56D23EDE6A0CB600F4B07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAsyncLoadDataU3Ed__6_System_Collections_IEnumerator_Reset_m483C6A48445B88C42C94F788054C704F88556DA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDoAsyncOperationU3Ed__45_System_Collections_IEnumerator_Reset_m7BA4A5539DB2724C3513D168A9523157928FBB74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFadeInCanvasU3Ed__40_MoveNext_m408C7E846B2D03913E4A686626FB5750E0815EBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFadeInCanvasU3Ed__40_System_Collections_IEnumerator_Reset_m6F27DDFF1C940337549F4519393436B249E00534_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFadeOutCanvasU3Ed__39_MoveNext_mDC8370F9D69C9BABAB4B1BF4056859B94AA8A79A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFadeOutCanvasU3Ed__39_System_Collections_IEnumerator_Reset_m2BE5F2F6D877B6E2ED6C6FAE9B6EA70318B7B9A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadNextSceneIEU3Ed__38_System_Collections_IEnumerator_Reset_mBCA4219AFF4844FB86BE4E1CE964FFE93D9C9B3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartFakeLoadingU3Ed__46_MoveNext_mA1CB2F05495368EA828562108C208E4785C27C87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartFakeLoadingU3Ed__46_System_Collections_IEnumerator_Reset_mD9FBA956F6112A29EFFFB051BE68F78EB9287FA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTipsLoopU3Ed__35_MoveNext_m8A95414620924A42B4BBD97758DC794416FCE8E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTipsLoopU3Ed__35_System_Collections_IEnumerator_Reset_m2437E5A914650E60E56D6B9D5683EE07DB18CEA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m8B965E03BBCB2D96568A90EB67D1297D942252F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitNextTipU3Ed__37_MoveNext_m12C9DBF4902826E4D304BC1AD87CE48752BA9486_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitNextTipU3Ed__37_System_Collections_IEnumerator_Reset_m5CBCFA850403A6916548061A4125092C2BD7D2C3_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Lovatto.SceneLoader.ReorderableArray`1<System.String>
struct  ReorderableArray_1_tED8B1D5F969A4D864FE90B1BC3A19CB3F6B9482E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Lovatto.SceneLoader.ReorderableArray`1::array
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ReorderableArray_1_tED8B1D5F969A4D864FE90B1BC3A19CB3F6B9482E, ___array_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_array_0() const { return ___array_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}
};


// Lovatto.SceneLoader.bl_SceneLoaderManager_<>c
struct  U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D_StaticFields
{
public:
	// Lovatto.SceneLoader.bl_SceneLoaderManager_<>c Lovatto.SceneLoader.bl_SceneLoaderManager_<>c::<>9
	U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D * ___U3CU3E9_0;
	// System.Func`2<Lovatto.SceneLoader.bl_SceneLoaderInfo,System.String> Lovatto.SceneLoader.bl_SceneLoaderManager_<>c::<>9__5_0
	Func_2_t9D7F40C54817844F49077D3A168437E0E7080462 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_t9D7F40C54817844F49077D3A168437E0E7080462 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_t9D7F40C54817844F49077D3A168437E0E7080462 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_t9D7F40C54817844F49077D3A168437E0E7080462 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6
struct  U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1  : public RuntimeObject
{
public:
	// System.Int32 Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.ResourceRequest Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::<rr>5__2
	ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * ___U3CrrU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrrU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1, ___U3CrrU3E5__2_2)); }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * get_U3CrrU3E5__2_2() const { return ___U3CrrU3E5__2_2; }
	inline ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD ** get_address_of_U3CrrU3E5__2_2() { return &___U3CrrU3E5__2_2; }
	inline void set_U3CrrU3E5__2_2(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * value)
	{
		___U3CrrU3E5__2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrrU3E5__2_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
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


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// bl_LoadingScreenUI_<FadeInCanvas>d__40
struct  U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E  : public RuntimeObject
{
public:
	// System.Int32 bl_LoadingScreenUI_<FadeInCanvas>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_LoadingScreenUI_<FadeInCanvas>d__40::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single bl_LoadingScreenUI_<FadeInCanvas>d__40::delay
	float ___delay_2;
	// UnityEngine.CanvasGroup bl_LoadingScreenUI_<FadeInCanvas>d__40::alpha
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___alpha_3;
	// bl_LoadingScreenUI bl_LoadingScreenUI_<FadeInCanvas>d__40::<>4__this
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_alpha_3() { return static_cast<int32_t>(offsetof(U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E, ___alpha_3)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_alpha_3() const { return ___alpha_3; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_alpha_3() { return &___alpha_3; }
	inline void set_alpha_3(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___alpha_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alpha_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E, ___U3CU3E4__this_4)); }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// bl_LoadingScreenUI_<FadeOutCanvas>d__39
struct  U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE  : public RuntimeObject
{
public:
	// System.Int32 bl_LoadingScreenUI_<FadeOutCanvas>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_LoadingScreenUI_<FadeOutCanvas>d__39::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single bl_LoadingScreenUI_<FadeOutCanvas>d__39::delay
	float ___delay_2;
	// UnityEngine.CanvasGroup bl_LoadingScreenUI_<FadeOutCanvas>d__39::alpha
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___alpha_3;
	// bl_LoadingScreenUI bl_LoadingScreenUI_<FadeOutCanvas>d__39::<>4__this
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_alpha_3() { return static_cast<int32_t>(offsetof(U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE, ___alpha_3)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_alpha_3() const { return ___alpha_3; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_alpha_3() { return &___alpha_3; }
	inline void set_alpha_3(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___alpha_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alpha_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE, ___U3CU3E4__this_4)); }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// bl_LoadingScreenUI_<LoadNextSceneIE>d__38
struct  U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052  : public RuntimeObject
{
public:
	// System.Int32 bl_LoadingScreenUI_<LoadNextSceneIE>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_LoadingScreenUI_<LoadNextSceneIE>d__38::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// bl_LoadingScreenUI bl_LoadingScreenUI_<LoadNextSceneIE>d__38::<>4__this
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052, ___U3CU3E4__this_2)); }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// bl_LoadingScreenUI_<WaitNextTip>d__37
struct  U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B  : public RuntimeObject
{
public:
	// System.Int32 bl_LoadingScreenUI_<WaitNextTip>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_LoadingScreenUI_<WaitNextTip>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// bl_LoadingScreenUI bl_LoadingScreenUI_<WaitNextTip>d__37::<>4__this
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * ___U3CU3E4__this_2;
	// System.Single bl_LoadingScreenUI_<WaitNextTip>d__37::t
	float ___t_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B, ___U3CU3E4__this_2)); }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_t_3() { return static_cast<int32_t>(offsetof(U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B, ___t_3)); }
	inline float get_t_3() const { return ___t_3; }
	inline float* get_address_of_t_3() { return &___t_3; }
	inline void set_t_3(float value)
	{
		___t_3 = value;
	}
};


// bl_SceneLoader_<AsynLoadData>d__37
struct  U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA  : public RuntimeObject
{
public:
	// System.Int32 bl_SceneLoader_<AsynLoadData>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_SceneLoader_<AsynLoadData>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// bl_SceneLoader bl_SceneLoader_<AsynLoadData>d__37::<>4__this
	bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA, ___U3CU3E4__this_2)); }
	inline bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// bl_SceneLoader_<DoAsyncOperation>d__45
struct  U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4  : public RuntimeObject
{
public:
	// System.Int32 bl_SceneLoader_<DoAsyncOperation>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_SceneLoader_<DoAsyncOperation>d__45::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// bl_SceneLoader bl_SceneLoader_<DoAsyncOperation>d__45::<>4__this
	bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * ___U3CU3E4__this_2;
	// System.String bl_SceneLoader_<DoAsyncOperation>d__45::level
	String_t* ___level_3;
	// System.Single bl_SceneLoader_<DoAsyncOperation>d__45::<d>5__2
	float ___U3CdU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4, ___U3CU3E4__this_2)); }
	inline bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4, ___level_3)); }
	inline String_t* get_level_3() const { return ___level_3; }
	inline String_t** get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(String_t* value)
	{
		___level_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___level_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4, ___U3CdU3E5__2_4)); }
	inline float get_U3CdU3E5__2_4() const { return ___U3CdU3E5__2_4; }
	inline float* get_address_of_U3CdU3E5__2_4() { return &___U3CdU3E5__2_4; }
	inline void set_U3CdU3E5__2_4(float value)
	{
		___U3CdU3E5__2_4 = value;
	}
};


// bl_SceneLoader_<StartFakeLoading>d__46
struct  U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359  : public RuntimeObject
{
public:
	// System.Int32 bl_SceneLoader_<StartFakeLoading>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_SceneLoader_<StartFakeLoading>d__46::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// bl_SceneLoader bl_SceneLoader_<StartFakeLoading>d__46::<>4__this
	bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359, ___U3CU3E4__this_2)); }
	inline bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Lovatto.SceneLoader.TheTipList
struct  TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8  : public ReorderableArray_1_tED8B1D5F969A4D864FE90B1BC3A19CB3F6B9482E
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// Lovatto.SceneLoader.LoadingType
struct  LoadingType_tF3079625C655748C8769090C4AF6620D1A728CEE 
{
public:
	// System.Int32 Lovatto.SceneLoader.LoadingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadingType_tF3079625C655748C8769090C4AF6620D1A728CEE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Lovatto.SceneLoader.SceneSkipType
struct  SceneSkipType_tE38C306FCE244932ED19A2CD1FCA017174E4FAF0 
{
public:
	// System.Int32 Lovatto.SceneLoader.SceneSkipType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneSkipType_tE38C306FCE244932ED19A2CD1FCA017174E4FAF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// Yodo1.MAS.Yodo1JSON_Parser_TOKEN
struct  TOKEN_tE0D98CB56AC0E2A9DE3BD1B492261F1403A2B2CE 
{
public:
	// System.Int32 Yodo1.MAS.Yodo1JSON_Parser_TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tE0D98CB56AC0E2A9DE3BD1B492261F1403A2B2CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// bl_LoadingScreenUI_<TipsLoop>d__35
struct  U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362  : public RuntimeObject
{
public:
	// System.Int32 bl_LoadingScreenUI_<TipsLoop>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object bl_LoadingScreenUI_<TipsLoop>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// bl_LoadingScreenUI bl_LoadingScreenUI_<TipsLoop>d__35::<>4__this
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * ___U3CU3E4__this_2;
	// UnityEngine.Color bl_LoadingScreenUI_<TipsLoop>d__35::<alpha>5__2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CalphaU3E5__2_3;
	// System.Int32 bl_LoadingScreenUI_<TipsLoop>d__35::<lastTip>5__3
	int32_t ___U3ClastTipU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362, ___U3CU3E4__this_2)); }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CalphaU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362, ___U3CalphaU3E5__2_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CalphaU3E5__2_3() const { return ___U3CalphaU3E5__2_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CalphaU3E5__2_3() { return &___U3CalphaU3E5__2_3; }
	inline void set_U3CalphaU3E5__2_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CalphaU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3ClastTipU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362, ___U3ClastTipU3E5__3_4)); }
	inline int32_t get_U3ClastTipU3E5__3_4() const { return ___U3ClastTipU3E5__3_4; }
	inline int32_t* get_address_of_U3ClastTipU3E5__3_4() { return &___U3ClastTipU3E5__3_4; }
	inline void set_U3ClastTipU3E5__3_4(int32_t value)
	{
		___U3ClastTipU3E5__3_4 = value;
	}
};


// bl_SceneLoader_OnLoaded
struct  OnLoaded_t3F3D7C1797E2379CAFB860659B6E9390D1A8EBBC  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// Lovatto.SceneLoader.bl_SceneLoaderInfo
struct  bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912  : public RuntimeObject
{
public:
	// System.String Lovatto.SceneLoader.bl_SceneLoaderInfo::SceneName
	String_t* ___SceneName_0;
	// System.String Lovatto.SceneLoader.bl_SceneLoaderInfo::DisplayName
	String_t* ___DisplayName_1;
	// System.String Lovatto.SceneLoader.bl_SceneLoaderInfo::Description
	String_t* ___Description_2;
	// Lovatto.SceneLoader.SceneSkipType Lovatto.SceneLoader.bl_SceneLoaderInfo::SkipType
	int32_t ___SkipType_3;
	// Lovatto.SceneLoader.LoadingType Lovatto.SceneLoader.bl_SceneLoaderInfo::LoadingType
	int32_t ___LoadingType_4;
	// System.Single Lovatto.SceneLoader.bl_SceneLoaderInfo::FakeLoadingTime
	float ___FakeLoadingTime_5;
	// UnityEngine.Sprite[] Lovatto.SceneLoader.bl_SceneLoaderInfo::Backgrounds
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___Backgrounds_6;

public:
	inline static int32_t get_offset_of_SceneName_0() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912, ___SceneName_0)); }
	inline String_t* get_SceneName_0() const { return ___SceneName_0; }
	inline String_t** get_address_of_SceneName_0() { return &___SceneName_0; }
	inline void set_SceneName_0(String_t* value)
	{
		___SceneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_DisplayName_1() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912, ___DisplayName_1)); }
	inline String_t* get_DisplayName_1() const { return ___DisplayName_1; }
	inline String_t** get_address_of_DisplayName_1() { return &___DisplayName_1; }
	inline void set_DisplayName_1(String_t* value)
	{
		___DisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayName_1), (void*)value);
	}

	inline static int32_t get_offset_of_Description_2() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912, ___Description_2)); }
	inline String_t* get_Description_2() const { return ___Description_2; }
	inline String_t** get_address_of_Description_2() { return &___Description_2; }
	inline void set_Description_2(String_t* value)
	{
		___Description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_2), (void*)value);
	}

	inline static int32_t get_offset_of_SkipType_3() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912, ___SkipType_3)); }
	inline int32_t get_SkipType_3() const { return ___SkipType_3; }
	inline int32_t* get_address_of_SkipType_3() { return &___SkipType_3; }
	inline void set_SkipType_3(int32_t value)
	{
		___SkipType_3 = value;
	}

	inline static int32_t get_offset_of_LoadingType_4() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912, ___LoadingType_4)); }
	inline int32_t get_LoadingType_4() const { return ___LoadingType_4; }
	inline int32_t* get_address_of_LoadingType_4() { return &___LoadingType_4; }
	inline void set_LoadingType_4(int32_t value)
	{
		___LoadingType_4 = value;
	}

	inline static int32_t get_offset_of_FakeLoadingTime_5() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912, ___FakeLoadingTime_5)); }
	inline float get_FakeLoadingTime_5() const { return ___FakeLoadingTime_5; }
	inline float* get_address_of_FakeLoadingTime_5() { return &___FakeLoadingTime_5; }
	inline void set_FakeLoadingTime_5(float value)
	{
		___FakeLoadingTime_5 = value;
	}

	inline static int32_t get_offset_of_Backgrounds_6() { return static_cast<int32_t>(offsetof(bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912, ___Backgrounds_6)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_Backgrounds_6() const { return ___Backgrounds_6; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_Backgrounds_6() { return &___Backgrounds_6; }
	inline void set_Backgrounds_6(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___Backgrounds_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Backgrounds_6), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ResourceRequest
struct  ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// Lovatto.SceneLoader.bl_SceneLoaderManager
struct  bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Lovatto.SceneLoader.TheSceneList Lovatto.SceneLoader.bl_SceneLoaderManager::List
	TheSceneList_tCF6F90FB911D7AA7D9FD325EE106D713BEF2D10A * ___List_4;
	// Lovatto.SceneLoader.TheTipList Lovatto.SceneLoader.bl_SceneLoaderManager::TipList
	TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * ___TipList_5;

public:
	inline static int32_t get_offset_of_List_4() { return static_cast<int32_t>(offsetof(bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA, ___List_4)); }
	inline TheSceneList_tCF6F90FB911D7AA7D9FD325EE106D713BEF2D10A * get_List_4() const { return ___List_4; }
	inline TheSceneList_tCF6F90FB911D7AA7D9FD325EE106D713BEF2D10A ** get_address_of_List_4() { return &___List_4; }
	inline void set_List_4(TheSceneList_tCF6F90FB911D7AA7D9FD325EE106D713BEF2D10A * value)
	{
		___List_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___List_4), (void*)value);
	}

	inline static int32_t get_offset_of_TipList_5() { return static_cast<int32_t>(offsetof(bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA, ___TipList_5)); }
	inline TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * get_TipList_5() const { return ___TipList_5; }
	inline TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 ** get_address_of_TipList_5() { return &___TipList_5; }
	inline void set_TipList_5(TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * value)
	{
		___TipList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TipList_5), (void*)value);
	}
};

struct bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_StaticFields
{
public:
	// Lovatto.SceneLoader.bl_SceneLoaderManager Lovatto.SceneLoader.bl_SceneLoaderManager::_instance
	bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * ____instance_6;

public:
	inline static int32_t get_offset_of__instance_6() { return static_cast<int32_t>(offsetof(bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_StaticFields, ____instance_6)); }
	inline bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * get__instance_6() const { return ____instance_6; }
	inline bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA ** get_address_of__instance_6() { return &____instance_6; }
	inline void set__instance_6(bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * value)
	{
		____instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_6), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.CanvasGroup
struct  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// bl_LoadingScreenUI
struct  bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text bl_LoadingScreenUI::SceneNameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___SceneNameText_4;
	// UnityEngine.UI.Text bl_LoadingScreenUI::DescriptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DescriptionText_5;
	// UnityEngine.UI.Text bl_LoadingScreenUI::ProgressText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ProgressText_6;
	// UnityEngine.UI.Text bl_LoadingScreenUI::TipText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TipText_7;
	// UnityEngine.UI.Image bl_LoadingScreenUI::BackgroundImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___BackgroundImage_8;
	// UnityEngine.UI.Image bl_LoadingScreenUI::FilledImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___FilledImage_9;
	// UnityEngine.UI.Slider bl_LoadingScreenUI::LoadBarSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___LoadBarSlider_10;
	// UnityEngine.GameObject bl_LoadingScreenUI::ContinueUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ContinueUI_11;
	// UnityEngine.GameObject bl_LoadingScreenUI::RootUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RootUI_12;
	// UnityEngine.GameObject bl_LoadingScreenUI::FlashImage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___FlashImage_13;
	// UnityEngine.GameObject bl_LoadingScreenUI::SkipKeyText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SkipKeyText_14;
	// UnityEngine.RectTransform bl_LoadingScreenUI::LoadingCircle
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___LoadingCircle_15;
	// UnityEngine.CanvasGroup bl_LoadingScreenUI::LoadingCircleCanvas
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___LoadingCircleCanvas_16;
	// UnityEngine.CanvasGroup bl_LoadingScreenUI::FadeImageCanvas
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___FadeImageCanvas_17;
	// UnityEngine.CanvasGroup bl_LoadingScreenUI::<RootAlpha>k__BackingField
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___U3CRootAlphaU3Ek__BackingField_18;
	// UnityEngine.CanvasGroup bl_LoadingScreenUI::BackgroundAlpha
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___BackgroundAlpha_19;
	// UnityEngine.CanvasGroup bl_LoadingScreenUI::LoadingBarAlpha
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___LoadingBarAlpha_20;
	// Lovatto.SceneLoader.bl_SceneLoaderManager bl_LoadingScreenUI::Manager
	bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * ___Manager_21;
	// bl_SceneLoader bl_LoadingScreenUI::m_SceneLoader
	bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * ___m_SceneLoader_22;
	// Lovatto.SceneLoader.TheTipList bl_LoadingScreenUI::cacheTips
	TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * ___cacheTips_23;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> bl_LoadingScreenUI::cacheBackgrounds
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___cacheBackgrounds_24;
	// System.Boolean bl_LoadingScreenUI::isTipFadeOut
	bool ___isTipFadeOut_25;
	// System.Int32 bl_LoadingScreenUI::CurrentTip
	int32_t ___CurrentTip_26;
	// System.Int32 bl_LoadingScreenUI::CurrentBackground
	int32_t ___CurrentBackground_27;
	// UnityEngine.AudioSource bl_LoadingScreenUI::m_aSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_aSource_28;

public:
	inline static int32_t get_offset_of_SceneNameText_4() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___SceneNameText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_SceneNameText_4() const { return ___SceneNameText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_SceneNameText_4() { return &___SceneNameText_4; }
	inline void set_SceneNameText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___SceneNameText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneNameText_4), (void*)value);
	}

	inline static int32_t get_offset_of_DescriptionText_5() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___DescriptionText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DescriptionText_5() const { return ___DescriptionText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DescriptionText_5() { return &___DescriptionText_5; }
	inline void set_DescriptionText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DescriptionText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DescriptionText_5), (void*)value);
	}

	inline static int32_t get_offset_of_ProgressText_6() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___ProgressText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ProgressText_6() const { return ___ProgressText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ProgressText_6() { return &___ProgressText_6; }
	inline void set_ProgressText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ProgressText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProgressText_6), (void*)value);
	}

	inline static int32_t get_offset_of_TipText_7() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___TipText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TipText_7() const { return ___TipText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TipText_7() { return &___TipText_7; }
	inline void set_TipText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TipText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TipText_7), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundImage_8() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___BackgroundImage_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_BackgroundImage_8() const { return ___BackgroundImage_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_BackgroundImage_8() { return &___BackgroundImage_8; }
	inline void set_BackgroundImage_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___BackgroundImage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundImage_8), (void*)value);
	}

	inline static int32_t get_offset_of_FilledImage_9() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___FilledImage_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_FilledImage_9() const { return ___FilledImage_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_FilledImage_9() { return &___FilledImage_9; }
	inline void set_FilledImage_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___FilledImage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilledImage_9), (void*)value);
	}

	inline static int32_t get_offset_of_LoadBarSlider_10() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___LoadBarSlider_10)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_LoadBarSlider_10() const { return ___LoadBarSlider_10; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_LoadBarSlider_10() { return &___LoadBarSlider_10; }
	inline void set_LoadBarSlider_10(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___LoadBarSlider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadBarSlider_10), (void*)value);
	}

	inline static int32_t get_offset_of_ContinueUI_11() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___ContinueUI_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ContinueUI_11() const { return ___ContinueUI_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ContinueUI_11() { return &___ContinueUI_11; }
	inline void set_ContinueUI_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ContinueUI_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContinueUI_11), (void*)value);
	}

	inline static int32_t get_offset_of_RootUI_12() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___RootUI_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RootUI_12() const { return ___RootUI_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RootUI_12() { return &___RootUI_12; }
	inline void set_RootUI_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RootUI_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RootUI_12), (void*)value);
	}

	inline static int32_t get_offset_of_FlashImage_13() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___FlashImage_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_FlashImage_13() const { return ___FlashImage_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_FlashImage_13() { return &___FlashImage_13; }
	inline void set_FlashImage_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___FlashImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FlashImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_SkipKeyText_14() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___SkipKeyText_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SkipKeyText_14() const { return ___SkipKeyText_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SkipKeyText_14() { return &___SkipKeyText_14; }
	inline void set_SkipKeyText_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SkipKeyText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkipKeyText_14), (void*)value);
	}

	inline static int32_t get_offset_of_LoadingCircle_15() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___LoadingCircle_15)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_LoadingCircle_15() const { return ___LoadingCircle_15; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_LoadingCircle_15() { return &___LoadingCircle_15; }
	inline void set_LoadingCircle_15(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___LoadingCircle_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadingCircle_15), (void*)value);
	}

	inline static int32_t get_offset_of_LoadingCircleCanvas_16() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___LoadingCircleCanvas_16)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_LoadingCircleCanvas_16() const { return ___LoadingCircleCanvas_16; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_LoadingCircleCanvas_16() { return &___LoadingCircleCanvas_16; }
	inline void set_LoadingCircleCanvas_16(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___LoadingCircleCanvas_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadingCircleCanvas_16), (void*)value);
	}

	inline static int32_t get_offset_of_FadeImageCanvas_17() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___FadeImageCanvas_17)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_FadeImageCanvas_17() const { return ___FadeImageCanvas_17; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_FadeImageCanvas_17() { return &___FadeImageCanvas_17; }
	inline void set_FadeImageCanvas_17(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___FadeImageCanvas_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FadeImageCanvas_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRootAlphaU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___U3CRootAlphaU3Ek__BackingField_18)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_U3CRootAlphaU3Ek__BackingField_18() const { return ___U3CRootAlphaU3Ek__BackingField_18; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_U3CRootAlphaU3Ek__BackingField_18() { return &___U3CRootAlphaU3Ek__BackingField_18; }
	inline void set_U3CRootAlphaU3Ek__BackingField_18(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___U3CRootAlphaU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRootAlphaU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundAlpha_19() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___BackgroundAlpha_19)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_BackgroundAlpha_19() const { return ___BackgroundAlpha_19; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_BackgroundAlpha_19() { return &___BackgroundAlpha_19; }
	inline void set_BackgroundAlpha_19(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___BackgroundAlpha_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundAlpha_19), (void*)value);
	}

	inline static int32_t get_offset_of_LoadingBarAlpha_20() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___LoadingBarAlpha_20)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_LoadingBarAlpha_20() const { return ___LoadingBarAlpha_20; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_LoadingBarAlpha_20() { return &___LoadingBarAlpha_20; }
	inline void set_LoadingBarAlpha_20(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___LoadingBarAlpha_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadingBarAlpha_20), (void*)value);
	}

	inline static int32_t get_offset_of_Manager_21() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___Manager_21)); }
	inline bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * get_Manager_21() const { return ___Manager_21; }
	inline bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA ** get_address_of_Manager_21() { return &___Manager_21; }
	inline void set_Manager_21(bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * value)
	{
		___Manager_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Manager_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneLoader_22() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___m_SceneLoader_22)); }
	inline bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * get_m_SceneLoader_22() const { return ___m_SceneLoader_22; }
	inline bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 ** get_address_of_m_SceneLoader_22() { return &___m_SceneLoader_22; }
	inline void set_m_SceneLoader_22(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * value)
	{
		___m_SceneLoader_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneLoader_22), (void*)value);
	}

	inline static int32_t get_offset_of_cacheTips_23() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___cacheTips_23)); }
	inline TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * get_cacheTips_23() const { return ___cacheTips_23; }
	inline TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 ** get_address_of_cacheTips_23() { return &___cacheTips_23; }
	inline void set_cacheTips_23(TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * value)
	{
		___cacheTips_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cacheTips_23), (void*)value);
	}

	inline static int32_t get_offset_of_cacheBackgrounds_24() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___cacheBackgrounds_24)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_cacheBackgrounds_24() const { return ___cacheBackgrounds_24; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_cacheBackgrounds_24() { return &___cacheBackgrounds_24; }
	inline void set_cacheBackgrounds_24(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___cacheBackgrounds_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cacheBackgrounds_24), (void*)value);
	}

	inline static int32_t get_offset_of_isTipFadeOut_25() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___isTipFadeOut_25)); }
	inline bool get_isTipFadeOut_25() const { return ___isTipFadeOut_25; }
	inline bool* get_address_of_isTipFadeOut_25() { return &___isTipFadeOut_25; }
	inline void set_isTipFadeOut_25(bool value)
	{
		___isTipFadeOut_25 = value;
	}

	inline static int32_t get_offset_of_CurrentTip_26() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___CurrentTip_26)); }
	inline int32_t get_CurrentTip_26() const { return ___CurrentTip_26; }
	inline int32_t* get_address_of_CurrentTip_26() { return &___CurrentTip_26; }
	inline void set_CurrentTip_26(int32_t value)
	{
		___CurrentTip_26 = value;
	}

	inline static int32_t get_offset_of_CurrentBackground_27() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___CurrentBackground_27)); }
	inline int32_t get_CurrentBackground_27() const { return ___CurrentBackground_27; }
	inline int32_t* get_address_of_CurrentBackground_27() { return &___CurrentBackground_27; }
	inline void set_CurrentBackground_27(int32_t value)
	{
		___CurrentBackground_27 = value;
	}

	inline static int32_t get_offset_of_m_aSource_28() { return static_cast<int32_t>(offsetof(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B, ___m_aSource_28)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_aSource_28() const { return ___m_aSource_28; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_aSource_28() { return &___m_aSource_28; }
	inline void set_m_aSource_28(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_aSource_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_aSource_28), (void*)value);
	}
};


// bl_SceneLoader
struct  bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Lovatto.SceneLoader.SceneSkipType bl_SceneLoader::SkipType
	int32_t ___SkipType_4;
	// System.Single bl_SceneLoader::SceneSmoothLoad
	float ___SceneSmoothLoad_5;
	// System.Single bl_SceneLoader::FadeInSpeed
	float ___FadeInSpeed_6;
	// System.Single bl_SceneLoader::FadeOutSpeed
	float ___FadeOutSpeed_7;
	// System.Boolean bl_SceneLoader::useTimeScale
	bool ___useTimeScale_8;
	// System.Boolean bl_SceneLoader::useBackgrounds
	bool ___useBackgrounds_9;
	// System.Boolean bl_SceneLoader::ShowDescription
	bool ___ShowDescription_10;
	// System.Single bl_SceneLoader::TimePerBackground
	float ___TimePerBackground_11;
	// System.Single bl_SceneLoader::FadeBackgroundSpeed
	float ___FadeBackgroundSpeed_12;
	// System.Single bl_SceneLoader::TimeBetweenBackground
	float ___TimeBetweenBackground_13;
	// UnityEngine.AnimationCurve bl_SceneLoader::StartFadeInCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___StartFadeInCurve_14;
	// System.Boolean bl_SceneLoader::RandomTips
	bool ___RandomTips_15;
	// System.Single bl_SceneLoader::TimePerTip
	float ___TimePerTip_16;
	// System.Single bl_SceneLoader::FadeTipsSpeed
	float ___FadeTipsSpeed_17;
	// System.Boolean bl_SceneLoader::FadeLoadingBarOnFinish
	bool ___FadeLoadingBarOnFinish_18;
	// System.Single bl_SceneLoader::RoundBarProgress
	float ___RoundBarProgress_19;
	// System.Single bl_SceneLoader::LoadingCircleSpeed
	float ___LoadingCircleSpeed_20;
	// System.String bl_SceneLoader::LoadingTextFormat
	String_t* ___LoadingTextFormat_21;
	// System.Single bl_SceneLoader::AudioVolume
	float ___AudioVolume_22;
	// System.Single bl_SceneLoader::FadeAudioSpeed
	float ___FadeAudioSpeed_23;
	// System.Single bl_SceneLoader::FinishSoundVolume
	float ___FinishSoundVolume_24;
	// UnityEngine.AudioClip bl_SceneLoader::FinishSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___FinishSound_25;
	// UnityEngine.AudioClip bl_SceneLoader::BackgroundAudio
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___BackgroundAudio_26;
	// bl_SceneLoader_OnLoaded bl_SceneLoader::onLoaded
	OnLoaded_t3F3D7C1797E2379CAFB860659B6E9390D1A8EBBC * ___onLoaded_27;
	// bl_LoadingScreenUI bl_SceneLoader::ScreenUI
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * ___ScreenUI_28;
	// UnityEngine.AsyncOperation bl_SceneLoader::<sceneAsyncOp>k__BackingField
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CsceneAsyncOpU3Ek__BackingField_29;
	// Lovatto.SceneLoader.bl_SceneLoaderManager bl_SceneLoader::Manager
	bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * ___Manager_30;
	// System.Boolean bl_SceneLoader::isOperationStarted
	bool ___isOperationStarted_31;
	// System.Boolean bl_SceneLoader::FinishLoad
	bool ___FinishLoad_32;
	// System.Single bl_SceneLoader::smoothValue
	float ___smoothValue_33;
	// System.Boolean bl_SceneLoader::canSkipWithKey
	bool ___canSkipWithKey_34;
	// Lovatto.SceneLoader.bl_SceneLoaderInfo bl_SceneLoader::CurrentLoadLevel
	bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912 * ___CurrentLoadLevel_35;

public:
	inline static int32_t get_offset_of_SkipType_4() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___SkipType_4)); }
	inline int32_t get_SkipType_4() const { return ___SkipType_4; }
	inline int32_t* get_address_of_SkipType_4() { return &___SkipType_4; }
	inline void set_SkipType_4(int32_t value)
	{
		___SkipType_4 = value;
	}

	inline static int32_t get_offset_of_SceneSmoothLoad_5() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___SceneSmoothLoad_5)); }
	inline float get_SceneSmoothLoad_5() const { return ___SceneSmoothLoad_5; }
	inline float* get_address_of_SceneSmoothLoad_5() { return &___SceneSmoothLoad_5; }
	inline void set_SceneSmoothLoad_5(float value)
	{
		___SceneSmoothLoad_5 = value;
	}

	inline static int32_t get_offset_of_FadeInSpeed_6() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FadeInSpeed_6)); }
	inline float get_FadeInSpeed_6() const { return ___FadeInSpeed_6; }
	inline float* get_address_of_FadeInSpeed_6() { return &___FadeInSpeed_6; }
	inline void set_FadeInSpeed_6(float value)
	{
		___FadeInSpeed_6 = value;
	}

	inline static int32_t get_offset_of_FadeOutSpeed_7() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FadeOutSpeed_7)); }
	inline float get_FadeOutSpeed_7() const { return ___FadeOutSpeed_7; }
	inline float* get_address_of_FadeOutSpeed_7() { return &___FadeOutSpeed_7; }
	inline void set_FadeOutSpeed_7(float value)
	{
		___FadeOutSpeed_7 = value;
	}

	inline static int32_t get_offset_of_useTimeScale_8() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___useTimeScale_8)); }
	inline bool get_useTimeScale_8() const { return ___useTimeScale_8; }
	inline bool* get_address_of_useTimeScale_8() { return &___useTimeScale_8; }
	inline void set_useTimeScale_8(bool value)
	{
		___useTimeScale_8 = value;
	}

	inline static int32_t get_offset_of_useBackgrounds_9() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___useBackgrounds_9)); }
	inline bool get_useBackgrounds_9() const { return ___useBackgrounds_9; }
	inline bool* get_address_of_useBackgrounds_9() { return &___useBackgrounds_9; }
	inline void set_useBackgrounds_9(bool value)
	{
		___useBackgrounds_9 = value;
	}

	inline static int32_t get_offset_of_ShowDescription_10() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___ShowDescription_10)); }
	inline bool get_ShowDescription_10() const { return ___ShowDescription_10; }
	inline bool* get_address_of_ShowDescription_10() { return &___ShowDescription_10; }
	inline void set_ShowDescription_10(bool value)
	{
		___ShowDescription_10 = value;
	}

	inline static int32_t get_offset_of_TimePerBackground_11() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___TimePerBackground_11)); }
	inline float get_TimePerBackground_11() const { return ___TimePerBackground_11; }
	inline float* get_address_of_TimePerBackground_11() { return &___TimePerBackground_11; }
	inline void set_TimePerBackground_11(float value)
	{
		___TimePerBackground_11 = value;
	}

	inline static int32_t get_offset_of_FadeBackgroundSpeed_12() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FadeBackgroundSpeed_12)); }
	inline float get_FadeBackgroundSpeed_12() const { return ___FadeBackgroundSpeed_12; }
	inline float* get_address_of_FadeBackgroundSpeed_12() { return &___FadeBackgroundSpeed_12; }
	inline void set_FadeBackgroundSpeed_12(float value)
	{
		___FadeBackgroundSpeed_12 = value;
	}

	inline static int32_t get_offset_of_TimeBetweenBackground_13() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___TimeBetweenBackground_13)); }
	inline float get_TimeBetweenBackground_13() const { return ___TimeBetweenBackground_13; }
	inline float* get_address_of_TimeBetweenBackground_13() { return &___TimeBetweenBackground_13; }
	inline void set_TimeBetweenBackground_13(float value)
	{
		___TimeBetweenBackground_13 = value;
	}

	inline static int32_t get_offset_of_StartFadeInCurve_14() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___StartFadeInCurve_14)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_StartFadeInCurve_14() const { return ___StartFadeInCurve_14; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_StartFadeInCurve_14() { return &___StartFadeInCurve_14; }
	inline void set_StartFadeInCurve_14(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___StartFadeInCurve_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartFadeInCurve_14), (void*)value);
	}

	inline static int32_t get_offset_of_RandomTips_15() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___RandomTips_15)); }
	inline bool get_RandomTips_15() const { return ___RandomTips_15; }
	inline bool* get_address_of_RandomTips_15() { return &___RandomTips_15; }
	inline void set_RandomTips_15(bool value)
	{
		___RandomTips_15 = value;
	}

	inline static int32_t get_offset_of_TimePerTip_16() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___TimePerTip_16)); }
	inline float get_TimePerTip_16() const { return ___TimePerTip_16; }
	inline float* get_address_of_TimePerTip_16() { return &___TimePerTip_16; }
	inline void set_TimePerTip_16(float value)
	{
		___TimePerTip_16 = value;
	}

	inline static int32_t get_offset_of_FadeTipsSpeed_17() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FadeTipsSpeed_17)); }
	inline float get_FadeTipsSpeed_17() const { return ___FadeTipsSpeed_17; }
	inline float* get_address_of_FadeTipsSpeed_17() { return &___FadeTipsSpeed_17; }
	inline void set_FadeTipsSpeed_17(float value)
	{
		___FadeTipsSpeed_17 = value;
	}

	inline static int32_t get_offset_of_FadeLoadingBarOnFinish_18() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FadeLoadingBarOnFinish_18)); }
	inline bool get_FadeLoadingBarOnFinish_18() const { return ___FadeLoadingBarOnFinish_18; }
	inline bool* get_address_of_FadeLoadingBarOnFinish_18() { return &___FadeLoadingBarOnFinish_18; }
	inline void set_FadeLoadingBarOnFinish_18(bool value)
	{
		___FadeLoadingBarOnFinish_18 = value;
	}

	inline static int32_t get_offset_of_RoundBarProgress_19() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___RoundBarProgress_19)); }
	inline float get_RoundBarProgress_19() const { return ___RoundBarProgress_19; }
	inline float* get_address_of_RoundBarProgress_19() { return &___RoundBarProgress_19; }
	inline void set_RoundBarProgress_19(float value)
	{
		___RoundBarProgress_19 = value;
	}

	inline static int32_t get_offset_of_LoadingCircleSpeed_20() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___LoadingCircleSpeed_20)); }
	inline float get_LoadingCircleSpeed_20() const { return ___LoadingCircleSpeed_20; }
	inline float* get_address_of_LoadingCircleSpeed_20() { return &___LoadingCircleSpeed_20; }
	inline void set_LoadingCircleSpeed_20(float value)
	{
		___LoadingCircleSpeed_20 = value;
	}

	inline static int32_t get_offset_of_LoadingTextFormat_21() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___LoadingTextFormat_21)); }
	inline String_t* get_LoadingTextFormat_21() const { return ___LoadingTextFormat_21; }
	inline String_t** get_address_of_LoadingTextFormat_21() { return &___LoadingTextFormat_21; }
	inline void set_LoadingTextFormat_21(String_t* value)
	{
		___LoadingTextFormat_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadingTextFormat_21), (void*)value);
	}

	inline static int32_t get_offset_of_AudioVolume_22() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___AudioVolume_22)); }
	inline float get_AudioVolume_22() const { return ___AudioVolume_22; }
	inline float* get_address_of_AudioVolume_22() { return &___AudioVolume_22; }
	inline void set_AudioVolume_22(float value)
	{
		___AudioVolume_22 = value;
	}

	inline static int32_t get_offset_of_FadeAudioSpeed_23() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FadeAudioSpeed_23)); }
	inline float get_FadeAudioSpeed_23() const { return ___FadeAudioSpeed_23; }
	inline float* get_address_of_FadeAudioSpeed_23() { return &___FadeAudioSpeed_23; }
	inline void set_FadeAudioSpeed_23(float value)
	{
		___FadeAudioSpeed_23 = value;
	}

	inline static int32_t get_offset_of_FinishSoundVolume_24() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FinishSoundVolume_24)); }
	inline float get_FinishSoundVolume_24() const { return ___FinishSoundVolume_24; }
	inline float* get_address_of_FinishSoundVolume_24() { return &___FinishSoundVolume_24; }
	inline void set_FinishSoundVolume_24(float value)
	{
		___FinishSoundVolume_24 = value;
	}

	inline static int32_t get_offset_of_FinishSound_25() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FinishSound_25)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_FinishSound_25() const { return ___FinishSound_25; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_FinishSound_25() { return &___FinishSound_25; }
	inline void set_FinishSound_25(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___FinishSound_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FinishSound_25), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundAudio_26() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___BackgroundAudio_26)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_BackgroundAudio_26() const { return ___BackgroundAudio_26; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_BackgroundAudio_26() { return &___BackgroundAudio_26; }
	inline void set_BackgroundAudio_26(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___BackgroundAudio_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundAudio_26), (void*)value);
	}

	inline static int32_t get_offset_of_onLoaded_27() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___onLoaded_27)); }
	inline OnLoaded_t3F3D7C1797E2379CAFB860659B6E9390D1A8EBBC * get_onLoaded_27() const { return ___onLoaded_27; }
	inline OnLoaded_t3F3D7C1797E2379CAFB860659B6E9390D1A8EBBC ** get_address_of_onLoaded_27() { return &___onLoaded_27; }
	inline void set_onLoaded_27(OnLoaded_t3F3D7C1797E2379CAFB860659B6E9390D1A8EBBC * value)
	{
		___onLoaded_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onLoaded_27), (void*)value);
	}

	inline static int32_t get_offset_of_ScreenUI_28() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___ScreenUI_28)); }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * get_ScreenUI_28() const { return ___ScreenUI_28; }
	inline bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B ** get_address_of_ScreenUI_28() { return &___ScreenUI_28; }
	inline void set_ScreenUI_28(bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * value)
	{
		___ScreenUI_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScreenUI_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsceneAsyncOpU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___U3CsceneAsyncOpU3Ek__BackingField_29)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CsceneAsyncOpU3Ek__BackingField_29() const { return ___U3CsceneAsyncOpU3Ek__BackingField_29; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CsceneAsyncOpU3Ek__BackingField_29() { return &___U3CsceneAsyncOpU3Ek__BackingField_29; }
	inline void set_U3CsceneAsyncOpU3Ek__BackingField_29(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CsceneAsyncOpU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsceneAsyncOpU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_Manager_30() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___Manager_30)); }
	inline bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * get_Manager_30() const { return ___Manager_30; }
	inline bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA ** get_address_of_Manager_30() { return &___Manager_30; }
	inline void set_Manager_30(bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * value)
	{
		___Manager_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Manager_30), (void*)value);
	}

	inline static int32_t get_offset_of_isOperationStarted_31() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___isOperationStarted_31)); }
	inline bool get_isOperationStarted_31() const { return ___isOperationStarted_31; }
	inline bool* get_address_of_isOperationStarted_31() { return &___isOperationStarted_31; }
	inline void set_isOperationStarted_31(bool value)
	{
		___isOperationStarted_31 = value;
	}

	inline static int32_t get_offset_of_FinishLoad_32() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___FinishLoad_32)); }
	inline bool get_FinishLoad_32() const { return ___FinishLoad_32; }
	inline bool* get_address_of_FinishLoad_32() { return &___FinishLoad_32; }
	inline void set_FinishLoad_32(bool value)
	{
		___FinishLoad_32 = value;
	}

	inline static int32_t get_offset_of_smoothValue_33() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___smoothValue_33)); }
	inline float get_smoothValue_33() const { return ___smoothValue_33; }
	inline float* get_address_of_smoothValue_33() { return &___smoothValue_33; }
	inline void set_smoothValue_33(float value)
	{
		___smoothValue_33 = value;
	}

	inline static int32_t get_offset_of_canSkipWithKey_34() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___canSkipWithKey_34)); }
	inline bool get_canSkipWithKey_34() const { return ___canSkipWithKey_34; }
	inline bool* get_address_of_canSkipWithKey_34() { return &___canSkipWithKey_34; }
	inline void set_canSkipWithKey_34(bool value)
	{
		___canSkipWithKey_34 = value;
	}

	inline static int32_t get_offset_of_CurrentLoadLevel_35() { return static_cast<int32_t>(offsetof(bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710, ___CurrentLoadLevel_35)); }
	inline bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912 * get_CurrentLoadLevel_35() const { return ___CurrentLoadLevel_35; }
	inline bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912 ** get_address_of_CurrentLoadLevel_35() { return &___CurrentLoadLevel_35; }
	inline void set_CurrentLoadLevel_35(bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912 * value)
	{
		___CurrentLoadLevel_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentLoadLevel_35), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
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


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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


// System.Int32 Lovatto.SceneLoader.ReorderableArray`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReorderableArray_1_get_Count_m65218693ED75CB0FD2C91C88522BF34FE6BA4AEA_gshared (ReorderableArray_1_tBB3DCC232503D513ACC089C59BF5A055CDD29962 * __this, const RuntimeMethod* method);
// T Lovatto.SceneLoader.ReorderableArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReorderableArray_1_get_Item_m157911E645F4AE6BD84A7C5C7C90080CA8C297D1_gshared (ReorderableArray_1_tBB3DCC232503D513ACC089C59BF5A055CDD29962 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, const RuntimeMethod* method);
// System.Single bl_LoadingScreenUI::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_LoadingScreenUI_get_DeltaTime_m2C8A9128FA40751235856DEF82B950CEACA26978 (bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation bl_SceneLoader::get_sceneAsyncOp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * bl_SceneLoader_get_sceneAsyncOp_m418B3D0E93537197EA8AFDFBD8754186C96A9119_inline (bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.IEnumerator bl_LoadingScreenUI::WaitNextTip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bl_LoadingScreenUI_WaitNextTip_mEC4A7A5AB55D2301EBE5F7BB46988A2DE251EC77 (bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * __this, float ___t0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Int32 Lovatto.SceneLoader.ReorderableArray`1<System.String>::get_Count()
inline int32_t ReorderableArray_1_get_Count_mDC63C96E42EC47386585885B067CA1285AB6DBD9 (ReorderableArray_1_tED8B1D5F969A4D864FE90B1BC3A19CB3F6B9482E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReorderableArray_1_tED8B1D5F969A4D864FE90B1BC3A19CB3F6B9482E *, const RuntimeMethod*))ReorderableArray_1_get_Count_m65218693ED75CB0FD2C91C88522BF34FE6BA4AEA_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// T Lovatto.SceneLoader.ReorderableArray`1<System.String>::get_Item(System.Int32)
inline String_t* ReorderableArray_1_get_Item_m782FE924D7FDDC630C52ED9B98A436FDBA91FC8D (ReorderableArray_1_tED8B1D5F969A4D864FE90B1BC3A19CB3F6B9482E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReorderableArray_1_tED8B1D5F969A4D864FE90B1BC3A19CB3F6B9482E *, int32_t, const RuntimeMethod*))ReorderableArray_1_get_Item_m157911E645F4AE6BD84A7C5C7C90080CA8C297D1_gshared)(__this, ___index0, method);
}
// System.Collections.IEnumerator bl_LoadingScreenUI::TipsLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bl_LoadingScreenUI_TipsLoop_m175104298174F259BE9CB3C68184D113E1A67780 (bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Lovatto.SceneLoader.bl_SceneLoaderManager::AsyncLoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bl_SceneLoaderManager_AsyncLoadData_mE5C37ECB98D126DDCB23306C98196BFD035D4D4D (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// Lovatto.SceneLoader.bl_SceneLoaderManager Lovatto.SceneLoader.bl_SceneLoaderManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * bl_SceneLoaderManager_get_Instance_m4914090F64BF36E099B62199E443E6D36B6F4F84 (const RuntimeMethod* method);
// System.Void bl_SceneLoader::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bl_SceneLoader_Init_mB006CF671EB293B7DB832619B00072FCD89293FE (bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * __this, const RuntimeMethod* method);
// System.Single bl_SceneLoader::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float bl_SceneLoader_get_DeltaTime_m4824461A30C7533CDF5356184A85C069591A8872 (bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.CanvasGroup bl_LoadingScreenUI::get_RootAlpha()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * bl_LoadingScreenUI_get_RootAlpha_mB3F1951467665F025F6193AABB89DB6C2E32221F_inline (bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation bl_SceneLoaderUtils::LoadLevelAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * bl_SceneLoaderUtils_LoadLevelAsync_m03CE8CF39EC3832BC9A3846D6CA873AB1BA4CD90 (String_t* ___scene0, const RuntimeMethod* method);
// System.Void bl_SceneLoader::set_sceneAsyncOp(UnityEngine.AsyncOperation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void bl_SceneLoader_set_sceneAsyncOp_m08F27B3D62FFACFEC9EFE21039E25012CCC16571_inline (bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___value0, const RuntimeMethod* method);
// Lovatto.SceneLoader.SceneSkipType bl_SceneLoader::get_GetSkipType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bl_SceneLoader_get_GetSkipType_m417E7C8995561985D9AD99ECC6105DAD123A1828 (bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void Lovatto.SceneLoader.bl_SceneLoaderManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63A316CFC969F091993CDB3957F26CA17910442B (U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.ResourceRequest UnityEngine.Resources::LoadAsync(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * Resources_LoadAsync_m37D45F0C403C6CF66A7BE25596B9B57C989F1E70 (String_t* ___path0, Type_t * ___type1, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.ResourceRequest::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ResourceRequest_get_asset_m2930BE33A19198B82461486BF40A9E00963A1CD0 (ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bl_LoadingScreenUI_<FadeInCanvas>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCanvasU3Ed__40__ctor_m4BB2336F4E3C60E15ADB4708A2F12FD869008E48 (U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void bl_LoadingScreenUI_<FadeInCanvas>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCanvasU3Ed__40_System_IDisposable_Dispose_m1986190A9D332F6CD7E3D2E7C8FEBE34DDE5877C (U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean bl_LoadingScreenUI_<FadeInCanvas>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInCanvasU3Ed__40_MoveNext_m408C7E846B2D03913E4A686626FB5750E0815EBB (U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeInCanvasU3Ed__40_MoveNext_m408C7E846B2D03913E4A686626FB5750E0815EBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0080;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0087;
	}

IL_004c:
	{
		// alpha.alpha += DeltaTime * m_SceneLoader.FadeInSpeed;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_5 = __this->get_alpha_3();
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_6 = L_5;
		NullCheck(L_6);
		float L_7 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_6, /*hidden argument*/NULL);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = bl_LoadingScreenUI_get_DeltaTime_m2C8A9128FA40751235856DEF82B950CEACA26978(L_8, /*hidden argument*/NULL);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_10 = V_1;
		NullCheck(L_10);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_11 = L_10->get_m_SceneLoader_22();
		NullCheck(L_11);
		float L_12 = L_11->get_FadeInSpeed_6();
		NullCheck(L_6);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_6, ((float)il2cpp_codegen_add((float)L_7, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_12)))), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0080:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0087:
	{
		// while (alpha.alpha < 1)
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_13 = __this->get_alpha_3();
		NullCheck(L_13);
		float L_14 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_13, /*hidden argument*/NULL);
		if ((((float)L_14) < ((float)(1.0f))))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object bl_LoadingScreenUI_<FadeInCanvas>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInCanvasU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D9C6A509E2F5491D426345076D12AF1533C9829 (U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void bl_LoadingScreenUI_<FadeInCanvas>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCanvasU3Ed__40_System_Collections_IEnumerator_Reset_m6F27DDFF1C940337549F4519393436B249E00534 (U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeInCanvasU3Ed__40_System_Collections_IEnumerator_Reset_m6F27DDFF1C940337549F4519393436B249E00534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CFadeInCanvasU3Ed__40_System_Collections_IEnumerator_Reset_m6F27DDFF1C940337549F4519393436B249E00534_RuntimeMethod_var);
	}
}
// System.Object bl_LoadingScreenUI_<FadeInCanvas>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeInCanvasU3Ed__40_System_Collections_IEnumerator_get_Current_m8F317593DE0A3C6BF01B82BED56A169284A0014C (U3CFadeInCanvasU3Ed__40_t0553276C3CE49B89FBA37ADB2D805E80C716CD6E * __this, const RuntimeMethod* method)
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
// System.Void bl_LoadingScreenUI_<FadeOutCanvas>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCanvasU3Ed__39__ctor_m6617B36FEC4701B2406D494B287FBCF91E1FA3A1 (U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void bl_LoadingScreenUI_<FadeOutCanvas>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCanvasU3Ed__39_System_IDisposable_Dispose_m24BAC0CFD300464EEB026271CD223E8D4CFCB596 (U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean bl_LoadingScreenUI_<FadeOutCanvas>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutCanvasU3Ed__39_MoveNext_mDC8370F9D69C9BABAB4B1BF4056859B94AA8A79A (U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeOutCanvasU3Ed__39_MoveNext_mDC8370F9D69C9BABAB4B1BF4056859B94AA8A79A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_0080;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0087;
	}

IL_004c:
	{
		// alpha.alpha -= DeltaTime * m_SceneLoader.FadeOutSpeed;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_5 = __this->get_alpha_3();
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_6 = L_5;
		NullCheck(L_6);
		float L_7 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_6, /*hidden argument*/NULL);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = bl_LoadingScreenUI_get_DeltaTime_m2C8A9128FA40751235856DEF82B950CEACA26978(L_8, /*hidden argument*/NULL);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_10 = V_1;
		NullCheck(L_10);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_11 = L_10->get_m_SceneLoader_22();
		NullCheck(L_11);
		float L_12 = L_11->get_FadeOutSpeed_7();
		NullCheck(L_6);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_6, ((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_12)))), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0080:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0087:
	{
		// while (alpha.alpha > 0)
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_13 = __this->get_alpha_3();
		NullCheck(L_13);
		float L_14 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_13, /*hidden argument*/NULL);
		if ((((float)L_14) > ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object bl_LoadingScreenUI_<FadeOutCanvas>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutCanvasU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m760D82E7D1CE0695095F093DDE59E8C676CE2974 (U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void bl_LoadingScreenUI_<FadeOutCanvas>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCanvasU3Ed__39_System_Collections_IEnumerator_Reset_m2BE5F2F6D877B6E2ED6C6FAE9B6EA70318B7B9A3 (U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeOutCanvasU3Ed__39_System_Collections_IEnumerator_Reset_m2BE5F2F6D877B6E2ED6C6FAE9B6EA70318B7B9A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CFadeOutCanvasU3Ed__39_System_Collections_IEnumerator_Reset_m2BE5F2F6D877B6E2ED6C6FAE9B6EA70318B7B9A3_RuntimeMethod_var);
	}
}
// System.Object bl_LoadingScreenUI_<FadeOutCanvas>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutCanvasU3Ed__39_System_Collections_IEnumerator_get_Current_mA82615D5F6D07C76A7B0F2E66D08A1CE9B01F72F (U3CFadeOutCanvasU3Ed__39_tDB53439105733F65436AC5CAAB5BA7D541B626CE * __this, const RuntimeMethod* method)
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
// System.Void bl_LoadingScreenUI_<LoadNextSceneIE>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNextSceneIEU3Ed__38__ctor_mEF182C86DF50F4ED103C28F7CDBD72F692F8BE2E (U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void bl_LoadingScreenUI_<LoadNextSceneIE>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNextSceneIEU3Ed__38_System_IDisposable_Dispose_m173659D24B052AC7AEE627B431AA7F8051D80DA9 (U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean bl_LoadingScreenUI_<LoadNextSceneIE>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadNextSceneIEU3Ed__38_MoveNext_m9DBA53649D1C75BA0AE932D81C063E14E5F625B6 (U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// FadeImageCanvas.alpha = 0;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_4 = V_1;
		NullCheck(L_4);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_5 = L_4->get_FadeImageCanvas_17();
		NullCheck(L_5);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_5, (0.0f), /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0030:
	{
		// FadeImageCanvas.alpha += DeltaTime * m_SceneLoader.FadeInSpeed;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_6 = V_1;
		NullCheck(L_6);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_7 = L_6->get_FadeImageCanvas_17();
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_8 = L_7;
		NullCheck(L_8);
		float L_9 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_8, /*hidden argument*/NULL);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = bl_LoadingScreenUI_get_DeltaTime_m2C8A9128FA40751235856DEF82B950CEACA26978(L_10, /*hidden argument*/NULL);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_12 = V_1;
		NullCheck(L_12);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_13 = L_12->get_m_SceneLoader_22();
		NullCheck(L_13);
		float L_14 = L_13->get_FadeInSpeed_6();
		NullCheck(L_8);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_8, ((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_14)))), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0064:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006b:
	{
		// while (FadeImageCanvas.alpha < 1)
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_15 = V_1;
		NullCheck(L_15);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_16 = L_15->get_FadeImageCanvas_17();
		NullCheck(L_16);
		float L_17 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_16, /*hidden argument*/NULL);
		if ((((float)L_17) < ((float)(1.0f))))
		{
			goto IL_0030;
		}
	}
	{
		// m_SceneLoader.sceneAsyncOp.allowSceneActivation = true;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_18 = V_1;
		NullCheck(L_18);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_19 = L_18->get_m_SceneLoader_22();
		NullCheck(L_19);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_20 = bl_SceneLoader_get_sceneAsyncOp_m418B3D0E93537197EA8AFDFBD8754186C96A9119_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33(L_20, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object bl_LoadingScreenUI_<LoadNextSceneIE>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadNextSceneIEU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m17E47819E00616EB428E8AFB4A8D70815D9B36D1 (U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void bl_LoadingScreenUI_<LoadNextSceneIE>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNextSceneIEU3Ed__38_System_Collections_IEnumerator_Reset_mBCA4219AFF4844FB86BE4E1CE964FFE93D9C9B3A (U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadNextSceneIEU3Ed__38_System_Collections_IEnumerator_Reset_mBCA4219AFF4844FB86BE4E1CE964FFE93D9C9B3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CLoadNextSceneIEU3Ed__38_System_Collections_IEnumerator_Reset_mBCA4219AFF4844FB86BE4E1CE964FFE93D9C9B3A_RuntimeMethod_var);
	}
}
// System.Object bl_LoadingScreenUI_<LoadNextSceneIE>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadNextSceneIEU3Ed__38_System_Collections_IEnumerator_get_Current_m8D976EAE9B75DF4FA0869CA8F302599A8BFEA3FD (U3CLoadNextSceneIEU3Ed__38_t7917C389A67946340E6A6D7151931799392B0052 * __this, const RuntimeMethod* method)
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
// System.Void bl_LoadingScreenUI_<TipsLoop>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTipsLoopU3Ed__35__ctor_mEDFE2809BE6342982605CF619AF1E40B7CAB03DD (U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void bl_LoadingScreenUI_<TipsLoop>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTipsLoopU3Ed__35_System_IDisposable_Dispose_mFB5E9D0AC477D3A466C9FF278CA707C785998759 (U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean bl_LoadingScreenUI_<TipsLoop>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTipsLoopU3Ed__35_MoveNext_m8A95414620924A42B4BBD97758DC794416FCE8E6 (U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTipsLoopU3Ed__35_MoveNext_m8A95414620924A42B4BBD97758DC794416FCE8E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_0112;
			}
			case 3:
			{
				goto IL_01a1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (TipText == null)
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_3 = V_1;
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_TipText_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_003d:
	{
		// Color alpha = TipText.color;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_6 = V_1;
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_TipText_7();
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		__this->set_U3CalphaU3E5__2_3(L_8);
		// if (isTipFadeOut)
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->get_isTipFadeOut_25();
		if (!L_10)
		{
			goto IL_0119;
		}
	}
	{
		goto IL_00a4;
	}

IL_005b:
	{
		// alpha.a += DeltaTime * m_SceneLoader.FadeTipsSpeed;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_11 = __this->get_address_of_U3CalphaU3E5__2_3();
		float* L_12 = L_11->get_address_of_a_3();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = bl_LoadingScreenUI_get_DeltaTime_m2C8A9128FA40751235856DEF82B950CEACA26978(L_15, /*hidden argument*/NULL);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_17 = V_1;
		NullCheck(L_17);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_18 = L_17->get_m_SceneLoader_22();
		NullCheck(L_18);
		float L_19 = L_18->get_FadeTipsSpeed_17();
		*((float*)L_13) = (float)((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_19))));
		// TipText.color = alpha;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_20 = V_1;
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_TipText_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = __this->get_U3CalphaU3E5__2_3();
		NullCheck(L_21);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00a4:
	{
		// while (alpha.a < 1)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_23 = __this->get_address_of_U3CalphaU3E5__2_3();
		float L_24 = L_23->get_a_3();
		if ((((float)L_24) < ((float)(1.0f))))
		{
			goto IL_005b;
		}
	}
	{
		// StartCoroutine(WaitNextTip(m_SceneLoader.TimePerTip));
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_25 = V_1;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_26 = V_1;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_27 = V_1;
		NullCheck(L_27);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_28 = L_27->get_m_SceneLoader_22();
		NullCheck(L_28);
		float L_29 = L_28->get_TimePerTip_16();
		NullCheck(L_26);
		RuntimeObject* L_30 = bl_LoadingScreenUI_WaitNextTip_mEC4A7A5AB55D2301EBE5F7BB46988A2DE251EC77(L_26, L_29, /*hidden argument*/NULL);
		NullCheck(L_25);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_25, L_30, /*hidden argument*/NULL);
		// }
		goto IL_013d;
	}

IL_00d0:
	{
		// alpha.a -= DeltaTime * m_SceneLoader.FadeTipsSpeed;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_31 = __this->get_address_of_U3CalphaU3E5__2_3();
		float* L_32 = L_31->get_address_of_a_3();
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_35 = V_1;
		NullCheck(L_35);
		float L_36 = bl_LoadingScreenUI_get_DeltaTime_m2C8A9128FA40751235856DEF82B950CEACA26978(L_35, /*hidden argument*/NULL);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_37 = V_1;
		NullCheck(L_37);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_38 = L_37->get_m_SceneLoader_22();
		NullCheck(L_38);
		float L_39 = L_38->get_FadeTipsSpeed_17();
		*((float*)L_33) = (float)((float)il2cpp_codegen_subtract((float)L_34, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)L_39))));
		// TipText.color = alpha;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_40 = V_1;
		NullCheck(L_40);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_41 = L_40->get_TipText_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = __this->get_U3CalphaU3E5__2_3();
		NullCheck(L_41);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_42);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0112:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0119:
	{
		// while (alpha.a > 0)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_43 = __this->get_address_of_U3CalphaU3E5__2_3();
		float L_44 = L_43->get_a_3();
		if ((((float)L_44) > ((float)(0.0f))))
		{
			goto IL_00d0;
		}
	}
	{
		// StartCoroutine(WaitNextTip(0.75f));
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_45 = V_1;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_46 = V_1;
		NullCheck(L_46);
		RuntimeObject* L_47 = bl_LoadingScreenUI_WaitNextTip_mEC4A7A5AB55D2301EBE5F7BB46988A2DE251EC77(L_46, (0.75f), /*hidden argument*/NULL);
		NullCheck(L_45);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_45, L_47, /*hidden argument*/NULL);
	}

IL_013d:
	{
		// if (isTipFadeOut)
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_48 = V_1;
		NullCheck(L_48);
		bool L_49 = L_48->get_isTipFadeOut_25();
		if (!L_49)
		{
			goto IL_020a;
		}
	}
	{
		// if (m_SceneLoader.RandomTips)
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_50 = V_1;
		NullCheck(L_50);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_51 = L_50->get_m_SceneLoader_22();
		NullCheck(L_51);
		bool L_52 = L_51->get_RandomTips_15();
		if (!L_52)
		{
			goto IL_01d4;
		}
	}
	{
		// int lastTip = CurrentTip;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_CurrentTip_26();
		__this->set_U3ClastTipU3E5__3_4(L_54);
		// CurrentTip = Random.Range(0, cacheTips.Count);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_55 = V_1;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_56 = V_1;
		NullCheck(L_56);
		TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * L_57 = L_56->get_cacheTips_23();
		NullCheck(L_57);
		int32_t L_58 = ReorderableArray_1_get_Count_mDC63C96E42EC47386585885B067CA1285AB6DBD9(L_57, /*hidden argument*/ReorderableArray_1_get_Count_mDC63C96E42EC47386585885B067CA1285AB6DBD9_RuntimeMethod_var);
		int32_t L_59 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_58, /*hidden argument*/NULL);
		NullCheck(L_55);
		L_55->set_CurrentTip_26(L_59);
		goto IL_01a8;
	}

IL_017a:
	{
		// CurrentTip = Random.Range(0, cacheTips.Count);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_60 = V_1;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_61 = V_1;
		NullCheck(L_61);
		TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * L_62 = L_61->get_cacheTips_23();
		NullCheck(L_62);
		int32_t L_63 = ReorderableArray_1_get_Count_mDC63C96E42EC47386585885B067CA1285AB6DBD9(L_62, /*hidden argument*/ReorderableArray_1_get_Count_mDC63C96E42EC47386585885B067CA1285AB6DBD9_RuntimeMethod_var);
		int32_t L_64 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_63, /*hidden argument*/NULL);
		NullCheck(L_60);
		L_60->set_CurrentTip_26(L_64);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_01a1:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01a8:
	{
		// while (CurrentTip == lastTip)
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_65 = V_1;
		NullCheck(L_65);
		int32_t L_66 = L_65->get_CurrentTip_26();
		int32_t L_67 = __this->get_U3ClastTipU3E5__3_4();
		if ((((int32_t)L_66) == ((int32_t)L_67)))
		{
			goto IL_017a;
		}
	}
	{
		// TipText.text = cacheTips[CurrentTip];
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_68 = V_1;
		NullCheck(L_68);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_69 = L_68->get_TipText_7();
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_70 = V_1;
		NullCheck(L_70);
		TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * L_71 = L_70->get_cacheTips_23();
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_72 = V_1;
		NullCheck(L_72);
		int32_t L_73 = L_72->get_CurrentTip_26();
		NullCheck(L_71);
		String_t* L_74 = ReorderableArray_1_get_Item_m782FE924D7FDDC630C52ED9B98A436FDBA91FC8D(L_71, L_73, /*hidden argument*/ReorderableArray_1_get_Item_m782FE924D7FDDC630C52ED9B98A436FDBA91FC8D_RuntimeMethod_var);
		NullCheck(L_69);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_69, L_74);
		// }
		goto IL_020a;
	}

IL_01d4:
	{
		// CurrentTip = (CurrentTip + 1) % cacheTips.Count;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_75 = V_1;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_76 = V_1;
		NullCheck(L_76);
		int32_t L_77 = L_76->get_CurrentTip_26();
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_78 = V_1;
		NullCheck(L_78);
		TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * L_79 = L_78->get_cacheTips_23();
		NullCheck(L_79);
		int32_t L_80 = ReorderableArray_1_get_Count_mDC63C96E42EC47386585885B067CA1285AB6DBD9(L_79, /*hidden argument*/ReorderableArray_1_get_Count_mDC63C96E42EC47386585885B067CA1285AB6DBD9_RuntimeMethod_var);
		NullCheck(L_75);
		L_75->set_CurrentTip_26(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1))%(int32_t)L_80)));
		// TipText.text = cacheTips[CurrentTip];
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_81 = V_1;
		NullCheck(L_81);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_82 = L_81->get_TipText_7();
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_83 = V_1;
		NullCheck(L_83);
		TheTipList_tCA984898A510BFD0EF4A69ACB47FCA56C695E5F8 * L_84 = L_83->get_cacheTips_23();
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_85 = V_1;
		NullCheck(L_85);
		int32_t L_86 = L_85->get_CurrentTip_26();
		NullCheck(L_84);
		String_t* L_87 = ReorderableArray_1_get_Item_m782FE924D7FDDC630C52ED9B98A436FDBA91FC8D(L_84, L_86, /*hidden argument*/ReorderableArray_1_get_Item_m782FE924D7FDDC630C52ED9B98A436FDBA91FC8D_RuntimeMethod_var);
		NullCheck(L_82);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_82, L_87);
	}

IL_020a:
	{
		// }
		return (bool)0;
	}
}
// System.Object bl_LoadingScreenUI_<TipsLoop>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTipsLoopU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m971109D81C45C4A22226DFC76E5B3D02C1D8599C (U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void bl_LoadingScreenUI_<TipsLoop>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTipsLoopU3Ed__35_System_Collections_IEnumerator_Reset_m2437E5A914650E60E56D6B9D5683EE07DB18CEA4 (U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTipsLoopU3Ed__35_System_Collections_IEnumerator_Reset_m2437E5A914650E60E56D6B9D5683EE07DB18CEA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CTipsLoopU3Ed__35_System_Collections_IEnumerator_Reset_m2437E5A914650E60E56D6B9D5683EE07DB18CEA4_RuntimeMethod_var);
	}
}
// System.Object bl_LoadingScreenUI_<TipsLoop>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTipsLoopU3Ed__35_System_Collections_IEnumerator_get_Current_mF23BE67498F68E7749729BA9E9FF83467D4CEAA0 (U3CTipsLoopU3Ed__35_t57A57AFC862EC1B1235D7640291CA0A17045E362 * __this, const RuntimeMethod* method)
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
// System.Void bl_LoadingScreenUI_<WaitNextTip>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitNextTipU3Ed__37__ctor_m362B35D84D182305C5A2F05C3A1ADA428F0133DC (U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void bl_LoadingScreenUI_<WaitNextTip>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitNextTipU3Ed__37_System_IDisposable_Dispose_m34B44BF9E8A2736631A62BB96499A5D88897895E (U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean bl_LoadingScreenUI_<WaitNextTip>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitNextTipU3Ed__37_MoveNext_m12C9DBF4902826E4D304BC1AD87CE48752BA9486 (U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitNextTipU3Ed__37_MoveNext_m12C9DBF4902826E4D304BC1AD87CE48752BA9486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isTipFadeOut = !isTipFadeOut;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_4 = V_1;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_isTipFadeOut_25();
		NullCheck(L_4);
		L_4->set_isTipFadeOut_25((bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0));
		// yield return new WaitForSeconds(t);
		float L_7 = __this->get_t_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(TipsLoop());
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_9 = V_1;
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11 = bl_LoadingScreenUI_TipsLoop_m175104298174F259BE9CB3C68184D113E1A67780(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_9, L_11, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object bl_LoadingScreenUI_<WaitNextTip>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitNextTipU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m65C1D2AF74DD572F5B5AB9EB60F3B4C6239E16D1 (U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void bl_LoadingScreenUI_<WaitNextTip>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitNextTipU3Ed__37_System_Collections_IEnumerator_Reset_m5CBCFA850403A6916548061A4125092C2BD7D2C3 (U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitNextTipU3Ed__37_System_Collections_IEnumerator_Reset_m5CBCFA850403A6916548061A4125092C2BD7D2C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWaitNextTipU3Ed__37_System_Collections_IEnumerator_Reset_m5CBCFA850403A6916548061A4125092C2BD7D2C3_RuntimeMethod_var);
	}
}
// System.Object bl_LoadingScreenUI_<WaitNextTip>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitNextTipU3Ed__37_System_Collections_IEnumerator_get_Current_m564A5FCB4CD625A97A08C8A9F4F981055DD20AB9 (U3CWaitNextTipU3Ed__37_t2BEED9F79C8D1ACC16FC9823F11A878036EB911B * __this, const RuntimeMethod* method)
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
// System.Void bl_SceneLoader_<AsynLoadData>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsynLoadDataU3Ed__37__ctor_m9DE538F9BEB0FE6C22073B816747D0FCA5FD54F4 (U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void bl_SceneLoader_<AsynLoadData>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsynLoadDataU3Ed__37_System_IDisposable_Dispose_m375E6829829A181ACFB934B6A26040320F071659 (U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean bl_SceneLoader_<AsynLoadData>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAsynLoadDataU3Ed__37_MoveNext_m90A0084065EEC7E3BF36D2294E32A5542434D09B (U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAsynLoadDataU3Ed__37_MoveNext_m90A0084065EEC7E3BF36D2294E32A5542434D09B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0058;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return bl_SceneLoaderManager.AsyncLoadData();
		RuntimeObject* L_3 = bl_SceneLoaderManager_AsyncLoadData_mE5C37ECB98D126DDCB23306C98196BFD035D4D4D(/*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0058:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Manager = bl_SceneLoaderManager.Instance;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_5 = V_1;
		bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * L_6 = bl_SceneLoaderManager_get_Instance_m4914090F64BF36E099B62199E443E6D36B6F4F84(/*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_Manager_30(L_6);
		// Init();
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_7 = V_1;
		NullCheck(L_7);
		bl_SceneLoader_Init_mB006CF671EB293B7DB832619B00072FCD89293FE(L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object bl_SceneLoader_<AsynLoadData>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsynLoadDataU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD62A114D372FD9CF85B1FF55D4EB06BE43A01C2A (U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void bl_SceneLoader_<AsynLoadData>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsynLoadDataU3Ed__37_System_Collections_IEnumerator_Reset_m800D46FC7902C89FEBB5B6BBD6DEA4E74B43FCFF (U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAsynLoadDataU3Ed__37_System_Collections_IEnumerator_Reset_m800D46FC7902C89FEBB5B6BBD6DEA4E74B43FCFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAsynLoadDataU3Ed__37_System_Collections_IEnumerator_Reset_m800D46FC7902C89FEBB5B6BBD6DEA4E74B43FCFF_RuntimeMethod_var);
	}
}
// System.Object bl_SceneLoader_<AsynLoadData>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsynLoadDataU3Ed__37_System_Collections_IEnumerator_get_Current_mC4CF6DFB4F735DE332543309C3E9DA79B9864D24 (U3CAsynLoadDataU3Ed__37_tE0F0F6A19180FCC1A26DCEE63E220943B35920BA * __this, const RuntimeMethod* method)
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
// System.Void bl_SceneLoader_<DoAsyncOperation>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoAsyncOperationU3Ed__45__ctor_m0A7EB9D8309ABA7197A6E702F765712DF9431D6C (U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void bl_SceneLoader_<DoAsyncOperation>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoAsyncOperationU3Ed__45_System_IDisposable_Dispose_m9FE38D107A551625B94B44FF5316CC926BBE1A2F (U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean bl_SceneLoader_<DoAsyncOperation>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoAsyncOperationU3Ed__45_MoveNext_m82C32B14B92C3B1D602A2D02C7F9935ED80D1245 (U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_00fb;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float t = 0;
		V_2 = (0.0f);
		// float d = 0;
		__this->set_U3CdU3E5__2_4((0.0f));
		goto IL_0090;
	}

IL_003c:
	{
		// d += DeltaTime * FadeInSpeed;
		float L_3 = __this->get_U3CdU3E5__2_4();
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = bl_SceneLoader_get_DeltaTime_m4824461A30C7533CDF5356184A85C069591A8872(L_4, /*hidden argument*/NULL);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_FadeInSpeed_6();
		__this->set_U3CdU3E5__2_4(((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))));
		// t = StartFadeInCurve.Evaluate(d);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_8 = V_1;
		NullCheck(L_8);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_9 = L_8->get_StartFadeInCurve_14();
		float L_10 = __this->get_U3CdU3E5__2_4();
		NullCheck(L_9);
		float L_11 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// ScreenUI.RootAlpha.alpha = t;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_12 = V_1;
		NullCheck(L_12);
		bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * L_13 = L_12->get_ScreenUI_28();
		NullCheck(L_13);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_14 = bl_LoadingScreenUI_get_RootAlpha_mB3F1951467665F025F6193AABB89DB6C2E32221F_inline(L_13, /*hidden argument*/NULL);
		float L_15 = V_2;
		NullCheck(L_14);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_14, L_15, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0089:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0090:
	{
		// while (d < 1)
		float L_16 = __this->get_U3CdU3E5__2_4();
		if ((((float)L_16) < ((float)(1.0f))))
		{
			goto IL_003c;
		}
	}
	{
		// sceneAsyncOp = bl_SceneLoaderUtils.LoadLevelAsync(level);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_17 = V_1;
		String_t* L_18 = __this->get_level_3();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_19 = bl_SceneLoaderUtils_LoadLevelAsync_m03CE8CF39EC3832BC9A3846D6CA873AB1BA4CD90(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		bl_SceneLoader_set_sceneAsyncOp_m08F27B3D62FFACFEC9EFE21039E25012CCC16571_inline(L_17, L_19, /*hidden argument*/NULL);
		// if (GetSkipType != SceneSkipType.InstantComplete || CurrentLoadLevel.LoadingType == LoadingType.Fake)
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = bl_SceneLoader_get_GetSkipType_m417E7C8995561985D9AD99ECC6105DAD123A1828(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)3))))
		{
			goto IL_00c5;
		}
	}
	{
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_22 = V_1;
		NullCheck(L_22);
		bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912 * L_23 = L_22->get_CurrentLoadLevel_35();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_LoadingType_4();
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_00d3;
		}
	}

IL_00c5:
	{
		// sceneAsyncOp.allowSceneActivation = false;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_25 = V_1;
		NullCheck(L_25);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_26 = bl_SceneLoader_get_sceneAsyncOp_m418B3D0E93537197EA8AFDFBD8754186C96A9119_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33(L_26, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00df;
	}

IL_00d3:
	{
		// sceneAsyncOp.allowSceneActivation = true;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_27 = V_1;
		NullCheck(L_27);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_28 = bl_SceneLoader_get_sceneAsyncOp_m418B3D0E93537197EA8AFDFBD8754186C96A9119_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33(L_28, (bool)1, /*hidden argument*/NULL);
	}

IL_00df:
	{
		// isOperationStarted = true;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_29 = V_1;
		NullCheck(L_29);
		L_29->set_isOperationStarted_31((bool)1);
		// yield return sceneAsyncOp;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_30 = V_1;
		NullCheck(L_30);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_31 = bl_SceneLoader_get_sceneAsyncOp_m418B3D0E93537197EA8AFDFBD8754186C96A9119_inline(L_30, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_31);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00fb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object bl_SceneLoader_<DoAsyncOperation>d__45::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoAsyncOperationU3Ed__45_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2A0522B78B9674EF48C0E7AA1D649CDE7BA19E1F (U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void bl_SceneLoader_<DoAsyncOperation>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoAsyncOperationU3Ed__45_System_Collections_IEnumerator_Reset_m7BA4A5539DB2724C3513D168A9523157928FBB74 (U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoAsyncOperationU3Ed__45_System_Collections_IEnumerator_Reset_m7BA4A5539DB2724C3513D168A9523157928FBB74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDoAsyncOperationU3Ed__45_System_Collections_IEnumerator_Reset_m7BA4A5539DB2724C3513D168A9523157928FBB74_RuntimeMethod_var);
	}
}
// System.Object bl_SceneLoader_<DoAsyncOperation>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoAsyncOperationU3Ed__45_System_Collections_IEnumerator_get_Current_m6E571245022754798645FA673715D81F9685607E (U3CDoAsyncOperationU3Ed__45_t64CF52E3C929B2F3C38FB9CACC5F7B9AD9B8F2F4 * __this, const RuntimeMethod* method)
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
// System.Void bl_SceneLoader_<StartFakeLoading>d__46::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartFakeLoadingU3Ed__46__ctor_mBC71C44866DD1538A777DFF59C00B1AE5E55414D (U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void bl_SceneLoader_<StartFakeLoading>d__46::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartFakeLoadingU3Ed__46_System_IDisposable_Dispose_m992595F2113144F62E8AF4C2C41877E1E477CEA1 (U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean bl_SceneLoader_<StartFakeLoading>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartFakeLoadingU3Ed__46_MoveNext_mA1CB2F05495368EA828562108C208E4785C27C87 (U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartFakeLoadingU3Ed__46_MoveNext_mA1CB2F05495368EA828562108C208E4785C27C87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// smoothValue = 0;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_smoothValue_33((0.0f));
		goto IL_0064;
	}

IL_002b:
	{
		// smoothValue += Time.deltaTime / CurrentLoadLevel.FakeLoadingTime;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_5 = V_1;
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_smoothValue_33();
		float L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_9 = V_1;
		NullCheck(L_9);
		bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912 * L_10 = L_9->get_CurrentLoadLevel_35();
		NullCheck(L_10);
		float L_11 = L_10->get_FakeLoadingTime_5();
		NullCheck(L_5);
		L_5->set_smoothValue_33(((float)il2cpp_codegen_add((float)L_7, (float)((float)((float)L_8/(float)L_11)))));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_12 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0064:
	{
		// while (smoothValue < 1)
		bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get_smoothValue_33();
		if ((((float)L_14) < ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object bl_SceneLoader_<StartFakeLoading>d__46::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartFakeLoadingU3Ed__46_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7E63A0B35D572BD8EF8F480A06EDB67A71FF4D24 (U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void bl_SceneLoader_<StartFakeLoading>d__46::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartFakeLoadingU3Ed__46_System_Collections_IEnumerator_Reset_mD9FBA956F6112A29EFFFB051BE68F78EB9287FA7 (U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartFakeLoadingU3Ed__46_System_Collections_IEnumerator_Reset_mD9FBA956F6112A29EFFFB051BE68F78EB9287FA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartFakeLoadingU3Ed__46_System_Collections_IEnumerator_Reset_mD9FBA956F6112A29EFFFB051BE68F78EB9287FA7_RuntimeMethod_var);
	}
}
// System.Object bl_SceneLoader_<StartFakeLoading>d__46::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartFakeLoadingU3Ed__46_System_Collections_IEnumerator_get_Current_m5F728A89ED4F9CFA5C66FB988693F9C00F58AD93 (U3CStartFakeLoadingU3Ed__46_tCAE6E3CD90C21E69E2F3A58778D0579D8BDDB359 * __this, const RuntimeMethod* method)
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
// System.Void bl_SceneLoader_OnLoaded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoaded__ctor_m06C979B9F61EDF2451FC6432719241C95C2C52D1 (OnLoaded_t3F3D7C1797E2379CAFB860659B6E9390D1A8EBBC * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
// System.Void Lovatto.SceneLoader.bl_SceneLoaderManager_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8B965E03BBCB2D96568A90EB67D1297D942252F6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m8B965E03BBCB2D96568A90EB67D1297D942252F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D * L_0 = (U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D *)il2cpp_codegen_object_new(U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m63A316CFC969F091993CDB3957F26CA17910442B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Lovatto.SceneLoader.bl_SceneLoaderManager_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63A316CFC969F091993CDB3957F26CA17910442B (U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Lovatto.SceneLoader.bl_SceneLoaderManager_<>c::<GetSceneNames>b__5_0(Lovatto.SceneLoader.bl_SceneLoaderInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetSceneNamesU3Eb__5_0_mE36D4241AA2F0A238D02CDBF03A8398049C351CF (U3CU3Ec_t2DCC0BBA44DEB28A794D631E8BAD71E6F9CB4A8D * __this, bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912 * ___x0, const RuntimeMethod* method)
{
	{
		// return List.Select(x => x.SceneName).ToArray();
		bl_SceneLoaderInfo_tE89AE30A00534FE3E0ADAEA84A6F8E65DE8F8912 * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_SceneName_0();
		return L_1;
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
// System.Void Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncLoadDataU3Ed__6__ctor_m38BF2EB3BB0A752CA152DE069EDE47F5426940FF (U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncLoadDataU3Ed__6_System_IDisposable_Dispose_mE04A3F54EB8DF67150B9CA6037DE1B1DE208F8BD (U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAsyncLoadDataU3Ed__6_MoveNext_m5EF4C09F26ACD1EF4CB56D23EDE6A0CB600F4B07 (U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAsyncLoadDataU3Ed__6_MoveNext_m5EF4C09F26ACD1EF4CB56D23EDE6A0CB600F4B07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_instance == null)
		bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA * L_3 = ((bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_StaticFields*)il2cpp_codegen_static_fields_for(bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_il2cpp_TypeInfo_var))->get__instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0080;
		}
	}
	{
		// ResourceRequest rr = Resources.LoadAsync("SceneLoaderManager", typeof(bl_SceneLoaderManager));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_7 = Resources_LoadAsync_m37D45F0C403C6CF66A7BE25596B9B57C989F1E70(_stringLiteral925BB8BA64DCDC5F9EDAC68D64BBE2D39BF83D33, L_6, /*hidden argument*/NULL);
		__this->set_U3CrrU3E5__2_2(L_7);
		goto IL_0057;
	}

IL_0040:
	{
		// while (!rr.isDone) { yield return null; }
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0057:
	{
		// while (!rr.isDone) { yield return null; }
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_8 = __this->get_U3CrrU3E5__2_2();
		NullCheck(L_8);
		bool L_9 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		// _instance = rr.asset as bl_SceneLoaderManager;
		ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD * L_10 = __this->get_U3CrrU3E5__2_2();
		NullCheck(L_10);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_11 = ResourceRequest_get_asset_m2930BE33A19198B82461486BF40A9E00963A1CD0(L_10, /*hidden argument*/NULL);
		((bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_StaticFields*)il2cpp_codegen_static_fields_for(bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_il2cpp_TypeInfo_var))->set__instance_6(((bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA *)IsInstClass((RuntimeObject*)L_11, bl_SceneLoaderManager_tCF1F49966CB2B0C8AC059EBFE4BBFCFC2EAA17BA_il2cpp_TypeInfo_var)));
		// }
		__this->set_U3CrrU3E5__2_2((ResourceRequest_tD2D09E98C844087E6AB0F04532B7AA139558CBAD *)NULL);
	}

IL_0080:
	{
		// }
		return (bool)0;
	}
}
// System.Object Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsyncLoadDataU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m04BC3291DE4B1EE2FE09CDF331651CDB49BD4CCB (U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncLoadDataU3Ed__6_System_Collections_IEnumerator_Reset_m483C6A48445B88C42C94F788054C704F88556DA4 (U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAsyncLoadDataU3Ed__6_System_Collections_IEnumerator_Reset_m483C6A48445B88C42C94F788054C704F88556DA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAsyncLoadDataU3Ed__6_System_Collections_IEnumerator_Reset_m483C6A48445B88C42C94F788054C704F88556DA4_RuntimeMethod_var);
	}
}
// System.Object Lovatto.SceneLoader.bl_SceneLoaderManager_<AsyncLoadData>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsyncLoadDataU3Ed__6_System_Collections_IEnumerator_get_Current_mF7C4195C77379907DBA339C2CA26C14249717941 (U3CAsyncLoadDataU3Ed__6_t8198A10921296F93D830B08EA8E8D133402854C1 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * bl_SceneLoader_get_sceneAsyncOp_m418B3D0E93537197EA8AFDFBD8754186C96A9119_inline (bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * __this, const RuntimeMethod* method)
{
	{
		// public AsyncOperation sceneAsyncOp { get; set; }
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = __this->get_U3CsceneAsyncOpU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * bl_LoadingScreenUI_get_RootAlpha_mB3F1951467665F025F6193AABB89DB6C2E32221F_inline (bl_LoadingScreenUI_tE1469D7F510A60F9583B963FB76CC08303C8ED5B * __this, const RuntimeMethod* method)
{
	{
		// public CanvasGroup RootAlpha { get; set; }
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_0 = __this->get_U3CRootAlphaU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void bl_SceneLoader_set_sceneAsyncOp_m08F27B3D62FFACFEC9EFE21039E25012CCC16571_inline (bl_SceneLoader_tE702833B48BC5E5A21E6D24C354056E0EF8BF710 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___value0, const RuntimeMethod* method)
{
	{
		// public AsyncOperation sceneAsyncOp { get; set; }
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = ___value0;
		__this->set_U3CsceneAsyncOpU3Ek__BackingField_29(L_0);
		return;
	}
}
