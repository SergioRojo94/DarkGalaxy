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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Unity.Notifications.Android.AndroidNotificationIntentData
struct AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521;
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Notifications.Android.NotificationCallback
struct NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Notifications.Android.AndroidNotificationCenter/<>c
struct U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4;
// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>
struct IEnumerable_1_t3B196C34018EC0DF831C14FD0889DA6E12397D9C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Queue`1<UnityEngine.AndroidJavaObject>
struct Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9;
IL2CPP_EXTERN_C String_t* _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC5EB718AAF7DE57228C79372CAF5162EFC006A;
IL2CPP_EXTERN_C String_t* _stringLiteral201E98F8587A94F62371653455535087BFBD7536;
IL2CPP_EXTERN_C String_t* _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B;
IL2CPP_EXTERN_C String_t* _stringLiteral2626460BABE409BAD38FFC1A232AD2AA7BDBC340;
IL2CPP_EXTERN_C String_t* _stringLiteral28E45B65F67DFEF09A216B89076AB46384ECAEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral31FA5B410C0A569E84113F595BEE7D157038D600;
IL2CPP_EXTERN_C String_t* _stringLiteral3507F14C18339414ED66D51C2A54704F4F66BF29;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral54C4766C2697E251E15A2D7C758751F382564A85;
IL2CPP_EXTERN_C String_t* _stringLiteral58571707B624E81F47C5EDE03F30C425B15D4354;
IL2CPP_EXTERN_C String_t* _stringLiteral5A63AE410D81A77766BF6FE65A404882F7D7E6D2;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC7E4A3E1708A6D64EB7722229CBE4D8B9DE0AC;
IL2CPP_EXTERN_C String_t* _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral6D483F62EB9ABA07C02CAC0A3A6ACA429A211998;
IL2CPP_EXTERN_C String_t* _stringLiteral6F41722D595B45F88CB84A6F977E07BA890A8D9B;
IL2CPP_EXTERN_C String_t* _stringLiteral71592C6382B266730CE3AF623E263C98649DBD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral76E20F69F4101AF2D3AC59CB39E29782CE0601E3;
IL2CPP_EXTERN_C String_t* _stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83;
IL2CPP_EXTERN_C String_t* _stringLiteral7964E8C3D9F0F7DDBB6FB8243D3AEF272DF4A12F;
IL2CPP_EXTERN_C String_t* _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741;
IL2CPP_EXTERN_C String_t* _stringLiteral922725AB61ED25FF1638463533D0AC0C99259C50;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA79A01886CDD255DBAF604C7A51EF7370973E814;
IL2CPP_EXTERN_C String_t* _stringLiteralA99DE1279E42E1B58DEE0D9A33BF114FA3DE00FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A;
IL2CPP_EXTERN_C String_t* _stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC13AA591CB84D5AC5E3B71294E869F676B0167FB;
IL2CPP_EXTERN_C String_t* _stringLiteralC15604C7D7794A25B4E7FD4BAD8C9E1A686BC934;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA743314C99A7A945A299B6748725F14C02714B;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralE8E4A350B9A313CDCD73BC6C5B83930A6E7532A7;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7E090F854D66AE15059E3A546EEC6CE6F7ED9F;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4;
IL2CPP_EXTERN_C String_t* _stringLiteralF14739A4843901C4DA2BFDF445F221F53B320153;
IL2CPP_EXTERN_C String_t* _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67;
IL2CPP_EXTERN_C String_t* _stringLiteralF840720856A0CCF610CAA8A9B7B760DA4E85F748;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFD3383995CDE5F774F8735AFBFD5038B75449D82;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB8E8A6C6D7915DA51E5359BA11EC0B886EA7D7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mB61A09C06503DF9D38CAB83B49D32905AD7D624F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m81D3B8557929F594497BB0AF885013586FB23E76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m8B73368DE06CDB85107743CBB10D8483214A59B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__29_0_m11878434192410AEB79062FBB5AAE2ACFBA5F2C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NotificationStyle_t069969DC8CECAD16AF8C5609692F93B6252F6DED_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_CancelAllDisplayedNotifications_mB14985B041B83666E01BB4A625DE130B6AE322A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_CancelAllNotifications_m83C974986CE5272AD0DB24410BBED239565738CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_CancelAllScheduledNotifications_m811A7B616676C0DB45BB0F69D9491A4E34F9371B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_CheckScheduledNotificationStatus_mD3C1807405D4592B5356A5936DE7A79F198F283D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_ParseNotificationIntentData_mF3B3296CBFC0FA297D90855799441D944EED3522_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_ReceivedNotificationCallback_mF925FF2B7DDD6D1EE601205F3CF14A2B6F5318DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_SendNotification_m4D634C911E041AACFD31290C602DDB216630B09D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter_SendNotification_m8AA0ADF07030DDA5E70AB57048A685643AA2286B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationCenter__cctor_m5F22B4F9AA8FCDF901A9EF1D5F1CD7A5F293C537_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_m6BE71EE671DDF13C9333E8D84FA1C8F95A773624_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationExtensions_ToInt_m145923D169D265B0EA179BFDB53703FC8901D276_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationExtensions_ToLong_m17C90BDB52FAC47FAA4AA705CA37D13C1C4FD17A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationExtensions_ToNotificationStyle_m30E2C72FD8233990852D5644A1C1DCB1552DCFB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidReceivedNotificationMainThreadDispatcher_Awake_mE29E5C70BC91344E219FFE45639E03645AA48944_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m91497715038968784C48633AAF410897DA041001_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02Unity_Notifications_Android_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidReceivedNotificationMainThreadDispatcher_OnDestroy_mCB8274F4292C713C8D76D5F3A8016E3FD97069FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidReceivedNotificationMainThreadDispatcher_Update_m73DC78B1913BE91F029C10B5CD39C853424CD09E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AndroidReceivedNotificationMainThreadDispatcher__cctor_mFD6277622F1396F5C83B4DEC3D6C9466DA1D7C26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NotificationCallback__ctor_m0079EEFEA69221760EBC29775A5DF78533B01183_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NotificationCallback_onSentNotification_m312DAAE0557A90CB3BB39F4E55B510F5FEC18E2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mA8D0AFE8E96C91435A7F7078676C2C62ADE79045_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4FD26667E80C828CE56E5E1BC2CE454D255678D1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct  List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____items_1)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__items_1() const { return ____items_1; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_StaticFields, ____emptyArray_5)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.AndroidJavaObject>
struct  Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD, ____array_0)); }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* get__array_0() const { return ____array_0; }
	inline AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
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


// System.Random
struct  Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


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

// Unity.Notifications.Android.AndroidNotificationCenter
struct  AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C  : public RuntimeObject
{
public:

public:
};

struct AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields
{
public:
	// Unity.Notifications.Android.AndroidNotificationCenter_NotificationReceivedCallback Unity.Notifications.Android.AndroidNotificationCenter::OnNotificationReceived
	NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * ___OnNotificationReceived_0;
	// UnityEngine.AndroidJavaClass Unity.Notifications.Android.AndroidNotificationCenter::s_NotificationManagerClass
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___s_NotificationManagerClass_1;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::s_NotificationManager
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___s_NotificationManager_2;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::s_NotificationManagerContext
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___s_NotificationManagerContext_3;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::s_CurrentActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___s_CurrentActivity_4;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::s_Initialized
	bool ___s_Initialized_5;

public:
	inline static int32_t get_offset_of_OnNotificationReceived_0() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___OnNotificationReceived_0)); }
	inline NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * get_OnNotificationReceived_0() const { return ___OnNotificationReceived_0; }
	inline NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 ** get_address_of_OnNotificationReceived_0() { return &___OnNotificationReceived_0; }
	inline void set_OnNotificationReceived_0(NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * value)
	{
		___OnNotificationReceived_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnNotificationReceived_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_NotificationManagerClass_1() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_NotificationManagerClass_1)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_s_NotificationManagerClass_1() const { return ___s_NotificationManagerClass_1; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_s_NotificationManagerClass_1() { return &___s_NotificationManagerClass_1; }
	inline void set_s_NotificationManagerClass_1(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___s_NotificationManagerClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NotificationManagerClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_NotificationManager_2() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_NotificationManager_2)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_s_NotificationManager_2() const { return ___s_NotificationManager_2; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_s_NotificationManager_2() { return &___s_NotificationManager_2; }
	inline void set_s_NotificationManager_2(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___s_NotificationManager_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NotificationManager_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_NotificationManagerContext_3() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_NotificationManagerContext_3)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_s_NotificationManagerContext_3() const { return ___s_NotificationManagerContext_3; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_s_NotificationManagerContext_3() { return &___s_NotificationManagerContext_3; }
	inline void set_s_NotificationManagerContext_3(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___s_NotificationManagerContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NotificationManagerContext_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_CurrentActivity_4() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_CurrentActivity_4)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_s_CurrentActivity_4() const { return ___s_CurrentActivity_4; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_s_CurrentActivity_4() { return &___s_CurrentActivity_4; }
	inline void set_s_CurrentActivity_4(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___s_CurrentActivity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CurrentActivity_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_5() { return static_cast<int32_t>(offsetof(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields, ___s_Initialized_5)); }
	inline bool get_s_Initialized_5() const { return ___s_Initialized_5; }
	inline bool* get_address_of_s_Initialized_5() { return &___s_Initialized_5; }
	inline void set_s_Initialized_5(bool value)
	{
		___s_Initialized_5 = value;
	}
};


// Unity.Notifications.Android.AndroidNotificationCenter_<>c
struct  U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_StaticFields
{
public:
	// Unity.Notifications.Android.AndroidNotificationCenter_<>c Unity.Notifications.Android.AndroidNotificationCenter_<>c::<>9
	U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Unity.Notifications.Android.AndroidNotificationExtensions
struct  AndroidNotificationExtensions_t6570E4D6DD7D5BC6E67AD5C51A2FBFD36370F300  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.AndroidJavaObject>
struct  Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD, ___list_0)); }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * get_list_0() const { return ___list_0; }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD, ___current_3)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_current_3() const { return ___current_3; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

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


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// System.Nullable`1<UnityEngine.Color>
struct  Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Unity.Notifications.Android.GroupAlertBehaviours
struct  GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880 
{
public:
	// System.Int32 Unity.Notifications.Android.GroupAlertBehaviours::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.Android.Importance
struct  Importance_t2E944C849409B739BFC5062780EC9595276B2FA4 
{
public:
	// System.Int32 Unity.Notifications.Android.Importance::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Importance_t2E944C849409B739BFC5062780EC9595276B2FA4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.Android.LockScreenVisibility
struct  LockScreenVisibility_t3B2EB9A0896DA46641A2A0D57A0FDE1957557C42 
{
public:
	// System.Int32 Unity.Notifications.Android.LockScreenVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LockScreenVisibility_t3B2EB9A0896DA46641A2A0D57A0FDE1957557C42, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.Android.NotificationStatus
struct  NotificationStatus_t4FE095D903D722DEA382168FD240DAAF6F276891 
{
public:
	// System.Int32 Unity.Notifications.Android.NotificationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotificationStatus_t4FE095D903D722DEA382168FD240DAAF6F276891, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Notifications.Android.NotificationStyle
struct  NotificationStyle_t069969DC8CECAD16AF8C5609692F93B6252F6DED 
{
public:
	// System.Int32 Unity.Notifications.Android.NotificationStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotificationStyle_t069969DC8CECAD16AF8C5609692F93B6252F6DED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
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

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// Unity.Notifications.Android.AndroidNotification
struct  AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 
{
public:
	// System.String Unity.Notifications.Android.AndroidNotification::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotification::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotification::<SmallIcon>k__BackingField
	String_t* ___U3CSmallIconU3Ek__BackingField_2;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::<FireTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CFireTimeU3Ek__BackingField_3;
	// System.String Unity.Notifications.Android.AndroidNotification::<LargeIcon>k__BackingField
	String_t* ___U3CLargeIconU3Ek__BackingField_4;
	// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::<Style>k__BackingField
	int32_t ___U3CStyleU3Ek__BackingField_5;
	// System.Int32 Unity.Notifications.Android.AndroidNotification::<Number>k__BackingField
	int32_t ___U3CNumberU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShouldAutoCancel>k__BackingField
	bool ___U3CShouldAutoCancelU3Ek__BackingField_7;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<UsesStopwatch>k__BackingField
	bool ___U3CUsesStopwatchU3Ek__BackingField_8;
	// System.String Unity.Notifications.Android.AndroidNotification::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_9;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<GroupSummary>k__BackingField
	bool ___U3CGroupSummaryU3Ek__BackingField_10;
	// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::<GroupAlertBehaviour>k__BackingField
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	// System.String Unity.Notifications.Android.AndroidNotification::<SortKey>k__BackingField
	String_t* ___U3CSortKeyU3Ek__BackingField_12;
	// System.String Unity.Notifications.Android.AndroidNotification::<IntentData>k__BackingField
	String_t* ___U3CIntentDataU3Ek__BackingField_13;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowTimestamp>k__BackingField
	bool ___U3CShowTimestampU3Ek__BackingField_14;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowCustomTimestamp>k__BackingField
	bool ___U3CShowCustomTimestampU3Ek__BackingField_15;
	// UnityEngine.Color Unity.Notifications.Android.AndroidNotification::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_16;
	// System.TimeSpan Unity.Notifications.Android.AndroidNotification::m_RepeatInterval
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_RepeatInterval_17;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::m_CustomTimestamp
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_CustomTimestamp_18;

public:
	inline static int32_t get_offset_of_U3CTitleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CTitleU3Ek__BackingField_0)); }
	inline String_t* get_U3CTitleU3Ek__BackingField_0() const { return ___U3CTitleU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTitleU3Ek__BackingField_0() { return &___U3CTitleU3Ek__BackingField_0; }
	inline void set_U3CTitleU3Ek__BackingField_0(String_t* value)
	{
		___U3CTitleU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CTextU3Ek__BackingField_1() const { return ___U3CTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_1() { return &___U3CTextU3Ek__BackingField_1; }
	inline void set_U3CTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSmallIconU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CSmallIconU3Ek__BackingField_2)); }
	inline String_t* get_U3CSmallIconU3Ek__BackingField_2() const { return ___U3CSmallIconU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CSmallIconU3Ek__BackingField_2() { return &___U3CSmallIconU3Ek__BackingField_2; }
	inline void set_U3CSmallIconU3Ek__BackingField_2(String_t* value)
	{
		___U3CSmallIconU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSmallIconU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFireTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CFireTimeU3Ek__BackingField_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CFireTimeU3Ek__BackingField_3() const { return ___U3CFireTimeU3Ek__BackingField_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CFireTimeU3Ek__BackingField_3() { return &___U3CFireTimeU3Ek__BackingField_3; }
	inline void set_U3CFireTimeU3Ek__BackingField_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CFireTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CLargeIconU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CLargeIconU3Ek__BackingField_4)); }
	inline String_t* get_U3CLargeIconU3Ek__BackingField_4() const { return ___U3CLargeIconU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CLargeIconU3Ek__BackingField_4() { return &___U3CLargeIconU3Ek__BackingField_4; }
	inline void set_U3CLargeIconU3Ek__BackingField_4(String_t* value)
	{
		___U3CLargeIconU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLargeIconU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStyleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CStyleU3Ek__BackingField_5)); }
	inline int32_t get_U3CStyleU3Ek__BackingField_5() const { return ___U3CStyleU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStyleU3Ek__BackingField_5() { return &___U3CStyleU3Ek__BackingField_5; }
	inline void set_U3CStyleU3Ek__BackingField_5(int32_t value)
	{
		___U3CStyleU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CNumberU3Ek__BackingField_6)); }
	inline int32_t get_U3CNumberU3Ek__BackingField_6() const { return ___U3CNumberU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CNumberU3Ek__BackingField_6() { return &___U3CNumberU3Ek__BackingField_6; }
	inline void set_U3CNumberU3Ek__BackingField_6(int32_t value)
	{
		___U3CNumberU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShouldAutoCancelU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CShouldAutoCancelU3Ek__BackingField_7)); }
	inline bool get_U3CShouldAutoCancelU3Ek__BackingField_7() const { return ___U3CShouldAutoCancelU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CShouldAutoCancelU3Ek__BackingField_7() { return &___U3CShouldAutoCancelU3Ek__BackingField_7; }
	inline void set_U3CShouldAutoCancelU3Ek__BackingField_7(bool value)
	{
		___U3CShouldAutoCancelU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUsesStopwatchU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CUsesStopwatchU3Ek__BackingField_8)); }
	inline bool get_U3CUsesStopwatchU3Ek__BackingField_8() const { return ___U3CUsesStopwatchU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CUsesStopwatchU3Ek__BackingField_8() { return &___U3CUsesStopwatchU3Ek__BackingField_8; }
	inline void set_U3CUsesStopwatchU3Ek__BackingField_8(bool value)
	{
		___U3CUsesStopwatchU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CGroupU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CGroupU3Ek__BackingField_9)); }
	inline String_t* get_U3CGroupU3Ek__BackingField_9() const { return ___U3CGroupU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CGroupU3Ek__BackingField_9() { return &___U3CGroupU3Ek__BackingField_9; }
	inline void set_U3CGroupU3Ek__BackingField_9(String_t* value)
	{
		___U3CGroupU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGroupU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGroupSummaryU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CGroupSummaryU3Ek__BackingField_10)); }
	inline bool get_U3CGroupSummaryU3Ek__BackingField_10() const { return ___U3CGroupSummaryU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CGroupSummaryU3Ek__BackingField_10() { return &___U3CGroupSummaryU3Ek__BackingField_10; }
	inline void set_U3CGroupSummaryU3Ek__BackingField_10(bool value)
	{
		___U3CGroupSummaryU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CGroupAlertBehaviourU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CGroupAlertBehaviourU3Ek__BackingField_11)); }
	inline int32_t get_U3CGroupAlertBehaviourU3Ek__BackingField_11() const { return ___U3CGroupAlertBehaviourU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CGroupAlertBehaviourU3Ek__BackingField_11() { return &___U3CGroupAlertBehaviourU3Ek__BackingField_11; }
	inline void set_U3CGroupAlertBehaviourU3Ek__BackingField_11(int32_t value)
	{
		___U3CGroupAlertBehaviourU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CSortKeyU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CSortKeyU3Ek__BackingField_12)); }
	inline String_t* get_U3CSortKeyU3Ek__BackingField_12() const { return ___U3CSortKeyU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CSortKeyU3Ek__BackingField_12() { return &___U3CSortKeyU3Ek__BackingField_12; }
	inline void set_U3CSortKeyU3Ek__BackingField_12(String_t* value)
	{
		___U3CSortKeyU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSortKeyU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIntentDataU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CIntentDataU3Ek__BackingField_13)); }
	inline String_t* get_U3CIntentDataU3Ek__BackingField_13() const { return ___U3CIntentDataU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CIntentDataU3Ek__BackingField_13() { return &___U3CIntentDataU3Ek__BackingField_13; }
	inline void set_U3CIntentDataU3Ek__BackingField_13(String_t* value)
	{
		___U3CIntentDataU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIntentDataU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShowTimestampU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CShowTimestampU3Ek__BackingField_14)); }
	inline bool get_U3CShowTimestampU3Ek__BackingField_14() const { return ___U3CShowTimestampU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CShowTimestampU3Ek__BackingField_14() { return &___U3CShowTimestampU3Ek__BackingField_14; }
	inline void set_U3CShowTimestampU3Ek__BackingField_14(bool value)
	{
		___U3CShowTimestampU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CShowCustomTimestampU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___U3CShowCustomTimestampU3Ek__BackingField_15)); }
	inline bool get_U3CShowCustomTimestampU3Ek__BackingField_15() const { return ___U3CShowCustomTimestampU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CShowCustomTimestampU3Ek__BackingField_15() { return &___U3CShowCustomTimestampU3Ek__BackingField_15; }
	inline void set_U3CShowCustomTimestampU3Ek__BackingField_15(bool value)
	{
		___U3CShowCustomTimestampU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_m_Color_16() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___m_Color_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_16() const { return ___m_Color_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_16() { return &___m_Color_16; }
	inline void set_m_Color_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_16 = value;
	}

	inline static int32_t get_offset_of_m_RepeatInterval_17() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___m_RepeatInterval_17)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_m_RepeatInterval_17() const { return ___m_RepeatInterval_17; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_m_RepeatInterval_17() { return &___m_RepeatInterval_17; }
	inline void set_m_RepeatInterval_17(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___m_RepeatInterval_17 = value;
	}

	inline static int32_t get_offset_of_m_CustomTimestamp_18() { return static_cast<int32_t>(offsetof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89, ___m_CustomTimestamp_18)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_CustomTimestamp_18() const { return ___m_CustomTimestamp_18; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_CustomTimestamp_18() { return &___m_CustomTimestamp_18; }
	inline void set_m_CustomTimestamp_18(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_CustomTimestamp_18 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_pinvoke
{
	char* ___U3CTitleU3Ek__BackingField_0;
	char* ___U3CTextU3Ek__BackingField_1;
	char* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CFireTimeU3Ek__BackingField_3;
	char* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	char* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	char* ___U3CSortKeyU3Ek__BackingField_12;
	char* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_16;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_RepeatInterval_17;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_CustomTimestamp_18;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_com
{
	Il2CppChar* ___U3CTitleU3Ek__BackingField_0;
	Il2CppChar* ___U3CTextU3Ek__BackingField_1;
	Il2CppChar* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CFireTimeU3Ek__BackingField_3;
	Il2CppChar* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	Il2CppChar* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	Il2CppChar* ___U3CSortKeyU3Ek__BackingField_12;
	Il2CppChar* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_16;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_RepeatInterval_17;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_CustomTimestamp_18;
};

// Unity.Notifications.Android.AndroidNotificationChannel
struct  AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 
{
public:
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::<Importance>k__BackingField
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanBypassDnd>k__BackingField
	bool ___U3CCanBypassDndU3Ek__BackingField_4;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanShowBadge>k__BackingField
	bool ___U3CCanShowBadgeU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableLights>k__BackingField
	bool ___U3CEnableLightsU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableVibration>k__BackingField
	bool ___U3CEnableVibrationU3Ek__BackingField_7;
	// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::<VibrationPattern>k__BackingField
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___U3CVibrationPatternU3Ek__BackingField_8;
	// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::<LockScreenVisibility>k__BackingField
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_2() const { return ___U3CDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_2() { return &___U3CDescriptionU3Ek__BackingField_2; }
	inline void set_U3CDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CImportanceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CImportanceU3Ek__BackingField_3)); }
	inline int32_t get_U3CImportanceU3Ek__BackingField_3() const { return ___U3CImportanceU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CImportanceU3Ek__BackingField_3() { return &___U3CImportanceU3Ek__BackingField_3; }
	inline void set_U3CImportanceU3Ek__BackingField_3(int32_t value)
	{
		___U3CImportanceU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCanBypassDndU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CCanBypassDndU3Ek__BackingField_4)); }
	inline bool get_U3CCanBypassDndU3Ek__BackingField_4() const { return ___U3CCanBypassDndU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CCanBypassDndU3Ek__BackingField_4() { return &___U3CCanBypassDndU3Ek__BackingField_4; }
	inline void set_U3CCanBypassDndU3Ek__BackingField_4(bool value)
	{
		___U3CCanBypassDndU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCanShowBadgeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CCanShowBadgeU3Ek__BackingField_5)); }
	inline bool get_U3CCanShowBadgeU3Ek__BackingField_5() const { return ___U3CCanShowBadgeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CCanShowBadgeU3Ek__BackingField_5() { return &___U3CCanShowBadgeU3Ek__BackingField_5; }
	inline void set_U3CCanShowBadgeU3Ek__BackingField_5(bool value)
	{
		___U3CCanShowBadgeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEnableLightsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CEnableLightsU3Ek__BackingField_6)); }
	inline bool get_U3CEnableLightsU3Ek__BackingField_6() const { return ___U3CEnableLightsU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CEnableLightsU3Ek__BackingField_6() { return &___U3CEnableLightsU3Ek__BackingField_6; }
	inline void set_U3CEnableLightsU3Ek__BackingField_6(bool value)
	{
		___U3CEnableLightsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEnableVibrationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CEnableVibrationU3Ek__BackingField_7)); }
	inline bool get_U3CEnableVibrationU3Ek__BackingField_7() const { return ___U3CEnableVibrationU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CEnableVibrationU3Ek__BackingField_7() { return &___U3CEnableVibrationU3Ek__BackingField_7; }
	inline void set_U3CEnableVibrationU3Ek__BackingField_7(bool value)
	{
		___U3CEnableVibrationU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CVibrationPatternU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CVibrationPatternU3Ek__BackingField_8)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get_U3CVibrationPatternU3Ek__BackingField_8() const { return ___U3CVibrationPatternU3Ek__BackingField_8; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of_U3CVibrationPatternU3Ek__BackingField_8() { return &___U3CVibrationPatternU3Ek__BackingField_8; }
	inline void set_U3CVibrationPatternU3Ek__BackingField_8(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		___U3CVibrationPatternU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVibrationPatternU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLockScreenVisibilityU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1, ___U3CLockScreenVisibilityU3Ek__BackingField_9)); }
	inline int32_t get_U3CLockScreenVisibilityU3Ek__BackingField_9() const { return ___U3CLockScreenVisibilityU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CLockScreenVisibilityU3Ek__BackingField_9() { return &___U3CLockScreenVisibilityU3Ek__BackingField_9; }
	inline void set_U3CLockScreenVisibilityU3Ek__BackingField_9(int32_t value)
	{
		___U3CLockScreenVisibilityU3Ek__BackingField_9 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_pinvoke
{
	char* ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
	char* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_com
{
	Il2CppChar* ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};

// Unity.Notifications.Android.NotificationCallback
struct  NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.Android.AndroidNotificationCenter_NotificationReceivedCallback
struct  NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Notifications.Android.AndroidNotificationIntentData
struct  AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521  : public RuntimeObject
{
public:
	// System.Int32 Unity.Notifications.Android.AndroidNotificationIntentData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationIntentData::<Channel>k__BackingField
	String_t* ___U3CChannelU3Ek__BackingField_1;
	// Unity.Notifications.Android.AndroidNotification Unity.Notifications.Android.AndroidNotificationIntentData::<Notification>k__BackingField
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___U3CNotificationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChannelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521, ___U3CChannelU3Ek__BackingField_1)); }
	inline String_t* get_U3CChannelU3Ek__BackingField_1() const { return ___U3CChannelU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CChannelU3Ek__BackingField_1() { return &___U3CChannelU3Ek__BackingField_1; }
	inline void set_U3CChannelU3Ek__BackingField_1(String_t* value)
	{
		___U3CChannelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChannelU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNotificationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521, ___U3CNotificationU3Ek__BackingField_2)); }
	inline AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  get_U3CNotificationU3Ek__BackingField_2() const { return ___U3CNotificationU3Ek__BackingField_2; }
	inline AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * get_address_of_U3CNotificationU3Ek__BackingField_2() { return &___U3CNotificationU3Ek__BackingField_2; }
	inline void set_U3CNotificationU3Ek__BackingField_2(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  value)
	{
		___U3CNotificationU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CTitleU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CTextU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CSmallIconU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CLargeIconU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CGroupU3Ek__BackingField_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CSortKeyU3Ek__BackingField_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNotificationU3Ek__BackingField_2))->___U3CIntentDataU3Ek__BackingField_13), (void*)NULL);
		#endif
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct  AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields
{
public:
	// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::instance
	AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * ___instance_4;
	// System.Collections.Generic.Queue`1<UnityEngine.AndroidJavaObject> Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::s_ReceivedNotificationQueue
	Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * ___s_ReceivedNotificationQueue_5;
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::s_ReceivedNotificationList
	List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * ___s_ReceivedNotificationList_6;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields, ___instance_4)); }
	inline AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * get_instance_4() const { return ___instance_4; }
	inline AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_ReceivedNotificationQueue_5() { return static_cast<int32_t>(offsetof(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields, ___s_ReceivedNotificationQueue_5)); }
	inline Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * get_s_ReceivedNotificationQueue_5() const { return ___s_ReceivedNotificationQueue_5; }
	inline Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD ** get_address_of_s_ReceivedNotificationQueue_5() { return &___s_ReceivedNotificationQueue_5; }
	inline void set_s_ReceivedNotificationQueue_5(Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * value)
	{
		___s_ReceivedNotificationQueue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ReceivedNotificationQueue_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_ReceivedNotificationList_6() { return static_cast<int32_t>(offsetof(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields, ___s_ReceivedNotificationList_6)); }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * get_s_ReceivedNotificationList_6() const { return ___s_ReceivedNotificationList_6; }
	inline List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B ** get_address_of_s_ReceivedNotificationList_6() { return &___s_ReceivedNotificationList_6; }
	inline void set_s_ReceivedNotificationList_6(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * value)
	{
		___s_ReceivedNotificationList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ReceivedNotificationList_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_gshared (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Get_TisRuntimeObject_mF909DF1A8B4C9F8749FC7619CE27DB4BA1CFA586_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.String Unity.Notifications.Android.AndroidNotification::get_Title()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_SmallIcon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_FireTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
inline void Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , const RuntimeMethod*))Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_gshared)(__this, ___value0, method);
}
// System.Nullable`1<System.TimeSpan> Unity.Notifications.Android.AndroidNotification::get_RepeatInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, const RuntimeMethod*))Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline)(__this, method);
}
// System.TimeSpan Unity.Notifications.Android.AndroidNotificationExtensions::ToTimeSpan(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6 (int64_t ___timeSpan0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  (*) (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *, const RuntimeMethod*))Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_RepeatInterval(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_LargeIcon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::get_Style()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Style(Unity.Notifications.Android.NotificationStyle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
inline void Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_gshared)(__this, ___value0, method);
}
// System.Nullable`1<UnityEngine.Color> Unity.Notifications.Android.AndroidNotification::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Color(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.Android.AndroidNotification::get_Number()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Number(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShouldAutoCancel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShouldAutoCancel(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_UsesStopwatch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_UsesStopwatch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_Group()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_Group(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_GroupSummary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupSummary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method);
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::get_GroupAlertBehaviour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupAlertBehaviour(Unity.Notifications.Android.GroupAlertBehaviours)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_SortKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_SortKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotification::get_IntentData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotification::set_IntentData(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_CustomTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowCustomTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method);
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher>()
inline AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Unity.Notifications.Android.NotificationCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback__ctor_m0079EEFEA69221760EBC29775A5DF78533B01183 (NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF909DF1A8B4C9F8749FC7619CE27DB4BA1CFA586_gshared)(__this, ___fieldName0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960 (const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::get_Importance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableLights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableVibration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanBypassDnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanShowBadge()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::get_VibrationPattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::get_LockScreenVisibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(System.Int32,Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_SendNotification_m4D634C911E041AACFD31290C602DDB216630B09D (int32_t ___id0, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification1, String_t* ___channelId2, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllScheduledNotifications_m811A7B616676C0DB45BB0F69D9491A4E34F9371B (const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllDisplayedNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllDisplayedNotifications_mB14985B041B83666E01BB4A625DE130B6AE322A2 (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateTime0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m17C90BDB52FAC47FAA4AA705CA37D13C1C4FD17A (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___timeSpan0, const RuntimeMethod* method);
// System.Int32 Unity.Notifications.Android.AndroidNotificationExtensions::ToInt(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToInt_m145923D169D265B0EA179BFDB53703FC8901D276 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_gshared)(__this, ___methodName0, ___args1, method);
}
// System.DateTime Unity.Notifications.Android.AndroidNotificationExtensions::ToDatetime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotificationExtensions_ToDatetime_m800EBFECFB1908CCAEF03513C58468E7845F0F43 (int64_t ___dateTime0, const RuntimeMethod* method);
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotificationExtensions::ToNotificationStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToNotificationStyle_m30E2C72FD8233990852D5644A1C1DCB1552DCFB6 (int32_t ___notificationStyle0, const RuntimeMethod* method);
// UnityEngine.Color Unity.Notifications.Android.AndroidNotificationExtensions::ToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  AndroidNotificationExtensions_ToColor_m4F0AC1E486292491D63BED6EDD5F27C28D3666E5 (int32_t ___color0, const RuntimeMethod* method);
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotificationExtensions::ToGroupAlertBehaviours(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_m6BE71EE671DDF13C9333E8D84FA1C8F95A773624 (int32_t ___groupAlertBehaviour0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::.ctor(System.Int32,System.String,Unity.Notifications.Android.AndroidNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData__ctor_mFA0B24EADF0B8CCAC424B598B7C75C99CAF0C80B (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * __this, int32_t ___id0, String_t* ___channelId1, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification2, const RuntimeMethod* method);
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::ParseNotificationIntentData(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * AndroidNotificationCenter_ParseNotificationIntentData_mF3B3296CBFC0FA297D90855799441D944EED3522 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notificationIntent0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m3BA17AB01D93A0BD7B529EB155CA9B7930DBA3AB (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * ___data0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m076EC8CB3D125E921A77A3FCDEC8CBBBA95407AC (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_ToLocalTime_mCE92C270822E0C13C7C849BDE5DDC852A4CF0A08 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromMilliseconds_m12D90542B044C450FDFBCEA1CBC32369479483EC (double ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.AndroidJavaObject>::Enqueue(!0)
inline void Queue_1_Enqueue_m81D3B8557929F594497BB0AF885013586FB23E76 (Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD *, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mB8E8A6C6D7915DA51E5359BA11EC0B886EA7D7BE (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.AndroidJavaObject>::Clear()
inline void Queue_1_Clear_mB61A09C06503DF9D38CAB83B49D32905AD7D624F (Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::GetEnumerator()
inline Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD  List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD  (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::get_Current()
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_inline (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD * __this, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::ReceivedNotificationCallback(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_ReceivedNotificationCallback_mF925FF2B7DDD6D1EE601205F3CF14A2B6F5318DF (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___intent0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::MoveNext()
inline bool Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2 (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::Dispose()
inline void Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::Clear()
inline void List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.AndroidJavaObject>::.ctor()
inline void Queue_1__ctor_m8B73368DE06CDB85107743CBB10D8483214A59B4 (Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::.ctor()
inline void List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648 (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::EnqueueReceivedNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m91497715038968784C48633AAF410897DA041001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___intent0, const RuntimeMethod* method);
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5AB26E888AB42C1D212AEE08649D29C56099BE53 (U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_pinvoke(const AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89& unmarshaled, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_pinvoke_back(const AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_pinvoke& marshaled, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89& unmarshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_pinvoke_cleanup(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_com(const AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89& unmarshaled, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_com& marshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_com_back(const AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_com& marshaled, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89& unmarshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshal_com_cleanup(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89_marshaled_com& marshaled)
{
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTitleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_SmallIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = __this->get_U3CSmallIconU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CSmallIconU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_inline(_thisAdjusted, ___value0, method);
}
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_FireTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CFireTimeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CFireTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_AdjustorThunk (RuntimeObject * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.TimeSpan> Unity.Notifications.Android.AndroidNotification::get_RepeatInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_RepeatInterval; }
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = __this->get_m_RepeatInterval_17();
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_RepeatInterval(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B2_0 = NULL;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B1_0 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B3_1 = NULL;
	{
		// set { m_RepeatInterval = value.HasValue ? value.Value : (-1L).ToTimeSpan(); }
		bool L_0 = Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___value0), /*hidden argument*/Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6((((int64_t)((int64_t)(-1)))), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0013:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___value0), /*hidden argument*/Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		G_B3_1->set_m_RepeatInterval_17(G_B3_0);
		// set { m_RepeatInterval = value.HasValue ? value.Value : (-1L).ToTimeSpan(); }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F_AdjustorThunk (RuntimeObject * __this, Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_LargeIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = __this->get_U3CLargeIconU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CLargeIconU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::get_Style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = __this->get_U3CStyleU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Style(Unity.Notifications.Android.NotificationStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStyleU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<UnityEngine.Color> Unity.Notifications.Android.AndroidNotification::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Color; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_Color_16();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Color(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B2_0 = NULL;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * G_B3_1 = NULL;
	{
		// set { m_Color = value.HasValue ? value.Value : new Color(0, 0, 0, 0); }
		bool L_0 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___value0), /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_002c;
	}

IL_0025:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___value0), /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_002c:
	{
		G_B3_1->set_m_Color_16(G_B3_0);
		// set { m_Color = value.HasValue ? value.Value : new Color(0, 0, 0, 0); }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561_AdjustorThunk (RuntimeObject * __this, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561(_thisAdjusted, ___value0, method);
}
// System.Int32 Unity.Notifications.Android.AndroidNotification::get_Number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public int Number { get; set; }
		int32_t L_0 = __this->get_U3CNumberU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Number(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Number { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShouldAutoCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = __this->get_U3CShouldAutoCancelU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShouldAutoCancel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShouldAutoCancelU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_UsesStopwatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = __this->get_U3CUsesStopwatchU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_UsesStopwatch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsesStopwatchU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Group { get; set; }
		String_t* L_0 = __this->get_U3CGroupU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Group(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Group { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CGroupU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_GroupSummary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = __this->get_U3CGroupSummaryU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupSummary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CGroupSummaryU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::get_GroupAlertBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = __this->get_U3CGroupAlertBehaviourU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupAlertBehaviour(Unity.Notifications.Android.GroupAlertBehaviours)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGroupAlertBehaviourU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_SortKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = __this->get_U3CSortKeyU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_SortKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CSortKeyU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_IntentData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = __this->get_U3CIntentDataU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_IntentData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIntentDataU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6 (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = __this->get_U3CShowTimestampU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_inline(_thisAdjusted, method);
}
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_CustomTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CustomTimestamp; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_CustomTimestamp_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_inline(_thisAdjusted, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowCustomTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = __this->get_U3CShowCustomTimestampU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * _thisAdjusted = reinterpret_cast<AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *>(__this + _offset);
	return AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	{
		// if (s_Initialized)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_Initialized_5();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// if (AndroidReceivedNotificationMainThreadDispatcher.GetInstance() == null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_1 = AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// var receivedNotificationDispatcher = new GameObject("AndroidReceivedNotificationMainThreadDispatcher");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_3, _stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9, /*hidden argument*/NULL);
		// receivedNotificationDispatcher.AddComponent<AndroidReceivedNotificationMainThreadDispatcher>();
		NullCheck(L_3);
		GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3(L_3, /*hidden argument*/GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_mA80D655632DF9341FD7ABFC8569B4DC2C280D1A3_RuntimeMethod_var);
	}

IL_0026:
	{
		// var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_4, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		// s_CurrentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_4);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_CurrentActivity_4(L_5);
		// var context = s_CurrentActivity.Call<AndroidJavaObject>("getApplicationContext");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_6 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_CurrentActivity_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_6, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_7, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_8;
		// s_NotificationManagerClass = new AndroidJavaClass("com.unity.androidnotifications.UnityNotificationManager");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_9 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_9, _stringLiteralCAA743314C99A7A945A299B6748725F14C02714B, /*hidden argument*/NULL);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_NotificationManagerClass_1(L_9);
		// s_NotificationManager = s_NotificationManagerClass.CallStatic<AndroidJavaObject>("getNotificationManagerImpl", context, s_CurrentActivity);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_10 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_13 = V_0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_12;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_15 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_CurrentActivity_4();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		NullCheck(L_10);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_10, _stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A, L_14, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_NotificationManager_2(L_16);
		// s_NotificationManager.Call("setNotificationCallback", new NotificationCallback());
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_17 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_18;
		NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 * L_20 = (NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 *)il2cpp_codegen_object_new(NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31_il2cpp_TypeInfo_var);
		NotificationCallback__ctor_m0079EEFEA69221760EBC29775A5DF78533B01183(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		NullCheck(L_17);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_17, _stringLiteralF840720856A0CCF610CAA8A9B7B760DA4E85F748, L_19, /*hidden argument*/NULL);
		// s_NotificationManagerContext = s_NotificationManager.Get<AndroidJavaObject>("mContext");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_21 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		NullCheck(L_21);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_22 = AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12(L_21, _stringLiteral54C4766C2697E251E15A2D7C758751F382564A85, /*hidden argument*/AndroidJavaObject_Get_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mFBBE4027C3B10CC9A3F370241DFC7A997C567B12_RuntimeMethod_var);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_NotificationManagerContext_3(L_22);
		// s_Initialized = true;
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_s_Initialized_5((bool)1);
		// return s_Initialized;
		bool L_23 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_Initialized_5();
		return L_23;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::RegisterNotificationChannel(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1  ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (string.IsNullOrEmpty(channel.Id))
		String_t* L_1 = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new Exception("Cannot register notification channel, the channel ID is not specified.");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, _stringLiteral3507F14C18339414ED66D51C2A54704F4F66BF29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_RuntimeMethod_var);
	}

IL_0021:
	{
		// if (string.IsNullOrEmpty(channel.Name))
		String_t* L_4 = AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// throw new Exception(string.Format("Cannot register notification channel: {0} , the channel Name is not set.", channel.Id));
		String_t* L_6 = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		String_t* L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralA79A01886CDD255DBAF604C7A51EF7370973E814, L_6, /*hidden argument*/NULL);
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_RuntimeMethod_var);
	}

IL_0046:
	{
		// if (string.IsNullOrEmpty(channel.Description))
		String_t* L_9 = AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		// throw new Exception(string.Format("Cannot register notification channel: {0} , the channel Description is not set.", channel.Id));
		String_t* L_11 = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		String_t* L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5A63AE410D81A77766BF6FE65A404882F7D7E6D2, L_11, /*hidden argument*/NULL);
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, AndroidNotificationCenter_RegisterNotificationChannel_mA563D65A93EFC5BCD25F3181C21035E6E62D1B90_RuntimeMethod_var);
	}

IL_006b:
	{
		// s_NotificationManager.Call("registerNotificationChannel",
		//     channel.Id,
		//     channel.Name,
		//     (int)channel.Importance,
		//     channel.Description,
		//     channel.EnableLights,
		//     channel.EnableVibration,
		//     channel.CanBypassDnd,
		//     channel.CanShowBadge,
		//     channel.VibrationPattern,
		//     (int)channel.LockScreenVisibility
		// );
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_14 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		String_t* L_17 = AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		String_t* L_19 = AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_18;
		int32_t L_21 = AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		int32_t L_22 = ((int32_t)L_21);
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		String_t* L_25 = AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_24;
		bool L_27 = AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_28 = L_27;
		RuntimeObject * L_29 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_26;
		bool L_31 = AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_32 = L_31;
		RuntimeObject * L_33 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_33);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
		bool L_35 = AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_36 = L_35;
		RuntimeObject * L_37 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_37);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_34;
		bool L_39 = AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		bool L_40 = L_39;
		RuntimeObject * L_41 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_41);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_38;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_43 = AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_43);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = L_42;
		int32_t L_45 = AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_inline((AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *)(&___channel0), /*hidden argument*/NULL);
		int32_t L_46 = ((int32_t)L_45);
		RuntimeObject * L_47 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_47);
		NullCheck(L_14);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_14, _stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationCenter_SendNotification_m8AA0ADF07030DDA5E70AB57048A685643AA2286B (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification0, String_t* ___channelId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_SendNotification_m8AA0ADF07030DDA5E70AB57048A685643AA2286B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// int id = Math.Abs(DateTime.Now.ToString("yyMMddHHmmssffffff").GetHashCode()) + (new System.Random().Next(10000));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = DateTime_ToString_m19ECEFF7BA22ED4425F7562A82A1C2308E934204((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_4 = il2cpp_codegen_abs(L_3);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32) */, L_5, ((int32_t)10000));
		// SendNotification(id, notification, channelId);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6));
		AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  L_8 = ___notification0;
		String_t* L_9 = ___channelId1;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidNotificationCenter_SendNotification_m4D634C911E041AACFD31290C602DDB216630B09D(L_7, L_8, L_9, /*hidden argument*/NULL);
		// return id;
		return L_7;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllNotifications_m83C974986CE5272AD0DB24410BBED239565738CB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_CancelAllNotifications_m83C974986CE5272AD0DB24410BBED239565738CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// CancelAllScheduledNotifications();
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidNotificationCenter_CancelAllScheduledNotifications_m811A7B616676C0DB45BB0F69D9491A4E34F9371B(/*hidden argument*/NULL);
		// CancelAllDisplayedNotifications();
		AndroidNotificationCenter_CancelAllDisplayedNotifications_mB14985B041B83666E01BB4A625DE130B6AE322A2(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllScheduledNotifications_m811A7B616676C0DB45BB0F69D9491A4E34F9371B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_CancelAllScheduledNotifications_m811A7B616676C0DB45BB0F69D9491A4E34F9371B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// s_NotificationManager.Call("cancelAllPendingNotificationIntents");
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteralF14739A4843901C4DA2BFDF445F221F53B320153, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllDisplayedNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllDisplayedNotifications_mB14985B041B83666E01BB4A625DE130B6AE322A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_CancelAllDisplayedNotifications_mB14985B041B83666E01BB4A625DE130B6AE322A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// s_NotificationManager.Call("cancelAllNotifications");
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_1, _stringLiteral5CC7E4A3E1708A6D64EB7722229CBE4D8B9DE0AC, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// Unity.Notifications.Android.NotificationStatus Unity.Notifications.Android.AndroidNotificationCenter::CheckScheduledNotificationStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationCenter_CheckScheduledNotificationStatus_mD3C1807405D4592B5356A5936DE7A79F198F283D (int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_CheckScheduledNotificationStatus_mD3C1807405D4592B5356A5936DE7A79F198F283D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		bool L_0 = AndroidNotificationCenter_Initialize_m032C4F7B042514FA1E9227073A7FADBCD628E960(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return NotificationStatus.Unavailable;
		return (int32_t)((-1));
	}

IL_0009:
	{
		// var status = s_NotificationManager.Call<int>("checkNotificationStatus", id);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		int32_t L_4 = ___id0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_1);
		int32_t L_7 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_1, _stringLiteral201E98F8587A94F62371653455535087BFBD7536, L_3, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		// return (NotificationStatus)status;
		return (int32_t)(L_7);
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(System.Int32,Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_SendNotification_m4D634C911E041AACFD31290C602DDB216630B09D (int32_t ___id0, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification1, String_t* ___channelId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_SendNotification_m4D634C911E041AACFD31290C602DDB216630B09D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_1 = NULL;
	int64_t V_2 = 0;
	int64_t G_B5_0 = 0;
	{
		// long fireTime = notification.FireTime.ToLong();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int64_t L_1 = AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (fireTime < 0L)
		int64_t L_2 = V_0;
		if ((((int64_t)L_2) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError("Failed to schedule notification, it did not contain a valid FireTime");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral28E45B65F67DFEF09A216B89076AB46384ECAEFD, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// var notificationIntent = new AndroidJavaObject("android.content.Intent", s_NotificationManagerContext, s_NotificationManagerClass);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_5 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerContext_3();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_7 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManagerClass_1();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_8, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, L_6, /*hidden argument*/NULL);
		V_1 = L_8;
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "id", id);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		int32_t L_13 = ___id0;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		NullCheck(L_9);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_9, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_12, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "channelID", channelId);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral6F41722D595B45F88CB84A6F977E07BA890A8D9B);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral6F41722D595B45F88CB84A6F977E07BA890A8D9B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_18;
		String_t* L_20 = ___channelId2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
		NullCheck(L_16);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_16, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_19, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "textTitle", notification.Title);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_21 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral58571707B624E81F47C5EDE03F30C425B15D4354);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral58571707B624E81F47C5EDE03F30C425B15D4354);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_23;
		String_t* L_25 = AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		NullCheck(L_21);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_21, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_24, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "textContent", notification.Text);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_26 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralEB7E090F854D66AE15059E3A546EEC6CE6F7ED9F);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralEB7E090F854D66AE15059E3A546EEC6CE6F7ED9F);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_28;
		String_t* L_30 = AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		NullCheck(L_26);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_26, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_29, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "smallIconStr", notification.SmallIcon);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_31 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral31FA5B410C0A569E84113F595BEE7D157038D600);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral31FA5B410C0A569E84113F595BEE7D157038D600);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_33;
		String_t* L_35 = AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_35);
		NullCheck(L_31);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_31, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_34, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "autoCancel", notification.ShouldAutoCancel);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_36 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral922725AB61ED25FF1638463533D0AC0C99259C50);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral922725AB61ED25FF1638463533D0AC0C99259C50);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = L_38;
		bool L_40 = AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_41 = L_40;
		RuntimeObject * L_42 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_42);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_42);
		NullCheck(L_36);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_36, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_39, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "usesChronometer", notification.UsesStopwatch);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_43 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteralA99DE1279E42E1B58DEE0D9A33BF114FA3DE00FC);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA99DE1279E42E1B58DEE0D9A33BF114FA3DE00FC);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46 = L_45;
		bool L_47 = AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_48 = L_47;
		RuntimeObject * L_49 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_49);
		NullCheck(L_43);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_43, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_46, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "fireTime", fireTime);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_50 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_51 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral0FC5EB718AAF7DE57228C79372CAF5162EFC006A);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral0FC5EB718AAF7DE57228C79372CAF5162EFC006A);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_53 = L_52;
		int64_t L_54 = V_0;
		int64_t L_55 = L_54;
		RuntimeObject * L_56 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_56);
		NullCheck(L_50);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_50, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_53, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "repeatInterval", notification.RepeatInterval.ToLong());
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_57 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_58 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_59 = L_58;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_59;
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_61 = AndroidNotification_get_RepeatInterval_m09D70F0C0E53A601CEFCB774039B32E5578EA59E((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int64_t L_62 = AndroidNotificationExtensions_ToLong_m17C90BDB52FAC47FAA4AA705CA37D13C1C4FD17A(L_61, /*hidden argument*/NULL);
		int64_t L_63 = L_62;
		RuntimeObject * L_64 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_64);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
		NullCheck(L_57);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_57, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_60, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "largeIconStr", notification.LargeIcon);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_65 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = L_66;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteralC15604C7D7794A25B4E7FD4BAD8C9E1A686BC934);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC15604C7D7794A25B4E7FD4BAD8C9E1A686BC934);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = L_67;
		String_t* L_69 = AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_69);
		NullCheck(L_65);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_65, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_68, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "style", (int)notification.Style);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_70 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = L_71;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_73 = L_72;
		int32_t L_74 = AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int32_t L_75 = ((int32_t)L_74);
		RuntimeObject * L_76 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_75);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_76);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_76);
		NullCheck(L_70);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_70, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_73, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "color", notification.Color.ToInt());
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_77 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_78 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = L_78;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_80 = L_79;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_81 = AndroidNotification_get_Color_mBBCAAD5E8A561583A30899B79071DC0E510931FA((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int32_t L_82 = AndroidNotificationExtensions_ToInt_m145923D169D265B0EA179BFDB53703FC8901D276(L_81, /*hidden argument*/NULL);
		int32_t L_83 = L_82;
		RuntimeObject * L_84 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_83);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_84);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_84);
		NullCheck(L_77);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_77, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_80, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "number", notification.Number);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_85 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_87 = L_86;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_88 = L_87;
		int32_t L_89 = AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int32_t L_90 = L_89;
		RuntimeObject * L_91 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_90);
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, L_91);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_91);
		NullCheck(L_85);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_85, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_88, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "data", notification.IntentData);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_92 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_93 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_94 = L_93;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_95 = L_94;
		String_t* L_96 = AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_96);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_96);
		NullCheck(L_92);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_92, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_95, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "group", notification.Group);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_97 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_98 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_99 = L_98;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_100 = L_99;
		String_t* L_101 = AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_101);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_101);
		NullCheck(L_97);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_97, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_100, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "groupSummary", notification.GroupSummary);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_102 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_103 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_104 = L_103;
		NullCheck(L_104);
		ArrayElementTypeCheck (L_104, _stringLiteralC13AA591CB84D5AC5E3B71294E869F676B0167FB);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC13AA591CB84D5AC5E3B71294E869F676B0167FB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_105 = L_104;
		bool L_106 = AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_107 = L_106;
		RuntimeObject * L_108 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_107);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_108);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_108);
		NullCheck(L_102);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_102, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_105, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "sortKey", notification.SortKey);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_109 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_110 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_111 = L_110;
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, _stringLiteral2626460BABE409BAD38FFC1A232AD2AA7BDBC340);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2626460BABE409BAD38FFC1A232AD2AA7BDBC340);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_112 = L_111;
		String_t* L_113 = AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_113);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_113);
		NullCheck(L_109);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_109, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_112, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "groupAlertBehaviour", (int)notification.GroupAlertBehaviour);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_114 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_115 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_116 = L_115;
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, _stringLiteralE8E4A350B9A313CDCD73BC6C5B83930A6E7532A7);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralE8E4A350B9A313CDCD73BC6C5B83930A6E7532A7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_117 = L_116;
		int32_t L_118 = AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int32_t L_119 = ((int32_t)L_118);
		RuntimeObject * L_120 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_119);
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, L_120);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_120);
		NullCheck(L_114);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_114, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_117, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "showTimestamp", notification.ShowTimestamp);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_121 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_122 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_123 = L_122;
		NullCheck(L_123);
		ArrayElementTypeCheck (L_123, _stringLiteral71592C6382B266730CE3AF623E263C98649DBD6C);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral71592C6382B266730CE3AF623E263C98649DBD6C);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_124 = L_123;
		bool L_125 = AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		bool L_126 = L_125;
		RuntimeObject * L_127 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_126);
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_127);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_127);
		NullCheck(L_121);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_121, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_124, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// long timestampValue = notification.ShowCustomTimestamp ? notification.CustomTimestamp.ToLong() : fireTime;
		bool L_128 = AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		if (L_128)
		{
			goto IL_0324;
		}
	}
	{
		int64_t L_129 = V_0;
		G_B5_0 = L_129;
		goto IL_0330;
	}

IL_0324:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_130 = AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&___notification1), /*hidden argument*/NULL);
		int64_t L_131 = AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70(L_130, /*hidden argument*/NULL);
		G_B5_0 = L_131;
	}

IL_0330:
	{
		V_2 = G_B5_0;
		// notificationIntent.Call<AndroidJavaObject>("putExtra", "timestamp", timestampValue);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_132 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_133 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_134 = L_133;
		NullCheck(L_134);
		ArrayElementTypeCheck (L_134, _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_135 = L_134;
		int64_t L_136 = V_2;
		int64_t L_137 = L_136;
		RuntimeObject * L_138 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_137);
		NullCheck(L_135);
		ArrayElementTypeCheck (L_135, L_138);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_138);
		NullCheck(L_132);
		AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_132, _stringLiteralF0DFD88B71BA2D095018DE492D01EDE1C32D4BD4, L_135, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		// s_NotificationManager.Call("scheduleNotificationIntent", notificationIntent);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_139 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_s_NotificationManager_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_140 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_141 = L_140;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_142 = V_1;
		NullCheck(L_141);
		ArrayElementTypeCheck (L_141, L_142);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_142);
		NullCheck(L_139);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_139, _stringLiteral6D483F62EB9ABA07C02CAC0A3A6ACA429A211998, L_141, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::ParseNotificationIntentData(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * AndroidNotificationCenter_ParseNotificationIntentData_mF3B3296CBFC0FA297D90855799441D944EED3522 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notificationIntent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_ParseNotificationIntentData_mF3B3296CBFC0FA297D90855799441D944EED3522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var id = notificationIntent.Call<int>("getIntExtra", "id", -1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		int32_t L_4 = (-1);
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		int32_t L_6 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_0, _stringLiteral7964E8C3D9F0F7DDBB6FB8243D3AEF272DF4A12F, L_3, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		V_0 = L_6;
		// if (id == -1)
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		// return null;
		return (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *)NULL;
	}

IL_0029:
	{
		// var channelId = notificationIntent.Call<string>("getStringExtra", "channelID");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral6F41722D595B45F88CB84A6F977E07BA890A8D9B);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral6F41722D595B45F88CB84A6F977E07BA890A8D9B);
		NullCheck(L_8);
		String_t* L_11 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_8, _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD, L_10, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		V_1 = L_11;
		// var notification = new AndroidNotification();
		il2cpp_codegen_initobj((&V_2), sizeof(AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 ));
		// notification.Title = notificationIntent.Call<string>("getStringExtra", "textTitle");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_12 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral58571707B624E81F47C5EDE03F30C425B15D4354);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral58571707B624E81F47C5EDE03F30C425B15D4354);
		NullCheck(L_12);
		String_t* L_15 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_12, _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD, L_14, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_15, /*hidden argument*/NULL);
		// notification.Text = notificationIntent.Call<string>("getStringExtra", "textContent");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_16 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralEB7E090F854D66AE15059E3A546EEC6CE6F7ED9F);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralEB7E090F854D66AE15059E3A546EEC6CE6F7ED9F);
		NullCheck(L_16);
		String_t* L_19 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_16, _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD, L_18, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_19, /*hidden argument*/NULL);
		// notification.ShouldAutoCancel = notificationIntent.Call<bool>("getBooleanExtra", "autoCancel", false);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_20 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral922725AB61ED25FF1638463533D0AC0C99259C50);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral922725AB61ED25FF1638463533D0AC0C99259C50);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_22;
		bool L_24 = ((bool)0);
		RuntimeObject * L_25 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		NullCheck(L_20);
		bool L_26 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_20, _stringLiteralFD3383995CDE5F774F8735AFBFD5038B75449D82, L_23, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_26, /*hidden argument*/NULL);
		// notification.UsesStopwatch = notificationIntent.Call<bool>("getBooleanExtra", "usesChronometer", false);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_27 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralA99DE1279E42E1B58DEE0D9A33BF114FA3DE00FC);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA99DE1279E42E1B58DEE0D9A33BF114FA3DE00FC);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_29;
		bool L_31 = ((bool)0);
		RuntimeObject * L_32 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_32);
		NullCheck(L_27);
		bool L_33 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_27, _stringLiteralFD3383995CDE5F774F8735AFBFD5038B75449D82, L_30, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_33, /*hidden argument*/NULL);
		// notification.FireTime = notificationIntent.Call<long>("getLongExtra", "fireTime", -1L).ToDatetime();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_34 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral0FC5EB718AAF7DE57228C79372CAF5162EFC006A);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral0FC5EB718AAF7DE57228C79372CAF5162EFC006A);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = L_36;
		int64_t L_38 = (((int64_t)((int64_t)(-1))));
		RuntimeObject * L_39 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_39);
		NullCheck(L_34);
		int64_t L_40 = AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787(L_34, _stringLiteral76E20F69F4101AF2D3AC59CB39E29782CE0601E3, L_37, /*hidden argument*/AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_41 = AndroidNotificationExtensions_ToDatetime_m800EBFECFB1908CCAEF03513C58468E7845F0F43(L_40, /*hidden argument*/NULL);
		AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_41, /*hidden argument*/NULL);
		// notification.RepeatInterval = notificationIntent.Call<long>("getLongExtra", "repeatInterval", -1L).ToTimeSpan();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_42 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralEFA505452FE4BB2CE49EF1450AD597A05A908CC7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = L_44;
		int64_t L_46 = (((int64_t)((int64_t)(-1))));
		RuntimeObject * L_47 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_47);
		NullCheck(L_42);
		int64_t L_48 = AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787(L_42, _stringLiteral76E20F69F4101AF2D3AC59CB39E29782CE0601E3, L_45, /*hidden argument*/AndroidJavaObject_Call_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m2E2FBAE10897A748859DD7EB19EBB1DB9BD02787_RuntimeMethod_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_49 = AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6(L_48, /*hidden argument*/NULL);
		Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D((&L_50), L_49, /*hidden argument*/Nullable_1__ctor_m9CF59B4AE8E66F6926A090868B14EB9C407D992D_RuntimeMethod_var);
		AndroidNotification_set_RepeatInterval_m0FDA4870F0D148570B6D24034475E19965BD9E1F((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_50, /*hidden argument*/NULL);
		// notification.Style = notificationIntent.Call<int>("getIntExtra", "style", 0).ToNotificationStyle();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_51 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_53 = L_52;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF29DF9C4CDC06C543A886799FF9B797DDB41FA67);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_54 = L_53;
		int32_t L_55 = 0;
		RuntimeObject * L_56 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_56);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_56);
		NullCheck(L_51);
		int32_t L_57 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_51, _stringLiteral7964E8C3D9F0F7DDBB6FB8243D3AEF272DF4A12F, L_54, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		int32_t L_58 = AndroidNotificationExtensions_ToNotificationStyle_m30E2C72FD8233990852D5644A1C1DCB1552DCFB6(L_57, /*hidden argument*/NULL);
		AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_58, /*hidden argument*/NULL);
		// notification.Color = notificationIntent.Call<int>("getIntExtra", "color", 0).ToColor();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_59 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_62 = L_61;
		int32_t L_63 = 0;
		RuntimeObject * L_64 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
		NullCheck(L_59);
		int32_t L_65 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_59, _stringLiteral7964E8C3D9F0F7DDBB6FB8243D3AEF272DF4A12F, L_62, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_66 = AndroidNotificationExtensions_ToColor_m4F0AC1E486292491D63BED6EDD5F27C28D3666E5(L_65, /*hidden argument*/NULL);
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_67), L_66, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		AndroidNotification_set_Color_mACFEDF1A3E4EEDFBD972DAFFF28B323807431561((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_67, /*hidden argument*/NULL);
		// notification.Number = notificationIntent.Call<int>("getIntExtra", "number", -1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_68 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = L_69;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_70;
		int32_t L_72 = (-1);
		RuntimeObject * L_73 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_73);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_73);
		NullCheck(L_68);
		int32_t L_74 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_68, _stringLiteral7964E8C3D9F0F7DDBB6FB8243D3AEF272DF4A12F, L_71, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_74, /*hidden argument*/NULL);
		// notification.IntentData = notificationIntent.Call<string>("getStringExtra", "data");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_75 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_76 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_77 = L_76;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		NullCheck(L_75);
		String_t* L_78 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_75, _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD, L_77, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_78, /*hidden argument*/NULL);
		// notification.Group = notificationIntent.Call<string>("getStringExtra", "group");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_79 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_80 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_81 = L_80;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		NullCheck(L_79);
		String_t* L_82 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_79, _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD, L_81, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_82, /*hidden argument*/NULL);
		// notification.GroupSummary = notificationIntent.Call<bool>("getBooleanExtra", "groupSummary", false);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_83 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_84 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_85 = L_84;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, _stringLiteralC13AA591CB84D5AC5E3B71294E869F676B0167FB);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC13AA591CB84D5AC5E3B71294E869F676B0167FB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = L_85;
		bool L_87 = ((bool)0);
		RuntimeObject * L_88 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_87);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_88);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_88);
		NullCheck(L_83);
		bool L_89 = AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A(L_83, _stringLiteralFD3383995CDE5F774F8735AFBFD5038B75449D82, L_86, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m705BF7B215A83B7851B19591CE37DA93250C7A8A_RuntimeMethod_var);
		AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_89, /*hidden argument*/NULL);
		// notification.SortKey = notificationIntent.Call<string>("getStringExtra", "sortKey");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_90 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_91 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_92 = L_91;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, _stringLiteral2626460BABE409BAD38FFC1A232AD2AA7BDBC340);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2626460BABE409BAD38FFC1A232AD2AA7BDBC340);
		NullCheck(L_90);
		String_t* L_93 = AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE(L_90, _stringLiteral0BD9A59E985466A4B27A18775B00267AA5CF36BD, L_92, /*hidden argument*/AndroidJavaObject_Call_TisString_t_mB2E722C64FC7BD9F98B983053A6D3F9D94D355AE_RuntimeMethod_var);
		AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_93, /*hidden argument*/NULL);
		// notification.GroupAlertBehaviour = notificationIntent.Call<int>("getIntExtra", "groupAlertBehaviour", 0).ToGroupAlertBehaviours();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_94 = ___notificationIntent0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_95 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_96 = L_95;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, _stringLiteralE8E4A350B9A313CDCD73BC6C5B83930A6E7532A7);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralE8E4A350B9A313CDCD73BC6C5B83930A6E7532A7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_97 = L_96;
		int32_t L_98 = 0;
		RuntimeObject * L_99 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_98);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_99);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_99);
		NullCheck(L_94);
		int32_t L_100 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_94, _stringLiteral7964E8C3D9F0F7DDBB6FB8243D3AEF272DF4A12F, L_97, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		int32_t L_101 = AndroidNotificationExtensions_ToGroupAlertBehaviours_m6BE71EE671DDF13C9333E8D84FA1C8F95A773624(L_100, /*hidden argument*/NULL);
		AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_inline((AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 *)(&V_2), L_101, /*hidden argument*/NULL);
		// return new AndroidNotificationIntentData(id, channelId, notification);
		int32_t L_102 = V_0;
		String_t* L_103 = V_1;
		AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  L_104 = V_2;
		AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * L_105 = (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *)il2cpp_codegen_object_new(AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521_il2cpp_TypeInfo_var);
		AndroidNotificationIntentData__ctor_mFA0B24EADF0B8CCAC424B598B7C75C99CAF0C80B(L_105, L_102, L_103, L_104, /*hidden argument*/NULL);
		return L_105;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::ReceivedNotificationCallback(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_ReceivedNotificationCallback_mF925FF2B7DDD6D1EE601205F3CF14A2B6F5318DF (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___intent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter_ReceivedNotificationCallback_mF925FF2B7DDD6D1EE601205F3CF14A2B6F5318DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * V_0 = NULL;
	{
		// var data = ParseNotificationIntentData(intent);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___intent0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
		AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * L_1 = AndroidNotificationCenter_ParseNotificationIntentData_mF3B3296CBFC0FA297D90855799441D944EED3522(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// OnNotificationReceived(data);
		NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * L_2 = ((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->get_OnNotificationReceived_0();
		AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_m3BA17AB01D93A0BD7B529EB155CA9B7930DBA3AB(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter__cctor_m5F22B4F9AA8FCDF901A9EF1D5F1CD7A5F293C537 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationCenter__cctor_m5F22B4F9AA8FCDF901A9EF1D5F1CD7A5F293C537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static event NotificationReceivedCallback OnNotificationReceived = delegate {};
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var);
		U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * L_0 = ((U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * L_1 = (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 *)il2cpp_codegen_object_new(NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9_il2cpp_TypeInfo_var);
		NotificationReceivedCallback__ctor_m076EC8CB3D125E921A77A3FCDEC8CBBBA95407AC(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__29_0_m11878434192410AEB79062FBB5AAE2ACFBA5F2C9_RuntimeMethod_var), /*hidden argument*/NULL);
		((AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var))->set_OnNotificationReceived_0(L_1);
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
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_pinvoke(const AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1& unmarshaled, AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CIdU3Ek__BackingField_0());
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CNameU3Ek__BackingField_1());
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CDescriptionU3Ek__BackingField_2());
	marshaled.___U3CImportanceU3Ek__BackingField_3 = unmarshaled.get_U3CImportanceU3Ek__BackingField_3();
	marshaled.___U3CCanBypassDndU3Ek__BackingField_4 = static_cast<int32_t>(unmarshaled.get_U3CCanBypassDndU3Ek__BackingField_4());
	marshaled.___U3CCanShowBadgeU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.get_U3CCanShowBadgeU3Ek__BackingField_5());
	marshaled.___U3CEnableLightsU3Ek__BackingField_6 = static_cast<int32_t>(unmarshaled.get_U3CEnableLightsU3Ek__BackingField_6());
	marshaled.___U3CEnableVibrationU3Ek__BackingField_7 = static_cast<int32_t>(unmarshaled.get_U3CEnableVibrationU3Ek__BackingField_7());
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.get_U3CVibrationPatternU3Ek__BackingField_8());
	marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9 = unmarshaled.get_U3CLockScreenVisibilityU3Ek__BackingField_9();
}
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_pinvoke_back(const AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_pinvoke& marshaled, AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_U3CIdU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.set_U3CNameU3Ek__BackingField_1(il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1));
	unmarshaled.set_U3CDescriptionU3Ek__BackingField_2(il2cpp_codegen_marshal_string_result(marshaled.___U3CDescriptionU3Ek__BackingField_2));
	int32_t unmarshaled_U3CImportanceU3Ek__BackingField_temp_3 = 0;
	unmarshaled_U3CImportanceU3Ek__BackingField_temp_3 = marshaled.___U3CImportanceU3Ek__BackingField_3;
	unmarshaled.set_U3CImportanceU3Ek__BackingField_3(unmarshaled_U3CImportanceU3Ek__BackingField_temp_3);
	bool unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4 = false;
	unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4 = static_cast<bool>(marshaled.___U3CCanBypassDndU3Ek__BackingField_4);
	unmarshaled.set_U3CCanBypassDndU3Ek__BackingField_4(unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4);
	bool unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5 = false;
	unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CCanShowBadgeU3Ek__BackingField_5);
	unmarshaled.set_U3CCanShowBadgeU3Ek__BackingField_5(unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5);
	bool unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6 = false;
	unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6 = static_cast<bool>(marshaled.___U3CEnableLightsU3Ek__BackingField_6);
	unmarshaled.set_U3CEnableLightsU3Ek__BackingField_6(unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6);
	bool unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7 = false;
	unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7 = static_cast<bool>(marshaled.___U3CEnableVibrationU3Ek__BackingField_7);
	unmarshaled.set_U3CEnableVibrationU3Ek__BackingField_7(unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7);
	unmarshaled.set_U3CVibrationPatternU3Ek__BackingField_8((Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_8));
	int32_t unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9 = 0;
	unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9 = marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9;
	unmarshaled.set_U3CLockScreenVisibilityU3Ek__BackingField_9(unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_pinvoke_cleanup(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_com(const AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1& unmarshaled, AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CIdU3Ek__BackingField_0());
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CNameU3Ek__BackingField_1());
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CDescriptionU3Ek__BackingField_2());
	marshaled.___U3CImportanceU3Ek__BackingField_3 = unmarshaled.get_U3CImportanceU3Ek__BackingField_3();
	marshaled.___U3CCanBypassDndU3Ek__BackingField_4 = static_cast<int32_t>(unmarshaled.get_U3CCanBypassDndU3Ek__BackingField_4());
	marshaled.___U3CCanShowBadgeU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.get_U3CCanShowBadgeU3Ek__BackingField_5());
	marshaled.___U3CEnableLightsU3Ek__BackingField_6 = static_cast<int32_t>(unmarshaled.get_U3CEnableLightsU3Ek__BackingField_6());
	marshaled.___U3CEnableVibrationU3Ek__BackingField_7 = static_cast<int32_t>(unmarshaled.get_U3CEnableVibrationU3Ek__BackingField_7());
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.get_U3CVibrationPatternU3Ek__BackingField_8());
	marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9 = unmarshaled.get_U3CLockScreenVisibilityU3Ek__BackingField_9();
}
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_com_back(const AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_com& marshaled, AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_U3CIdU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.set_U3CNameU3Ek__BackingField_1(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1));
	unmarshaled.set_U3CDescriptionU3Ek__BackingField_2(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CDescriptionU3Ek__BackingField_2));
	int32_t unmarshaled_U3CImportanceU3Ek__BackingField_temp_3 = 0;
	unmarshaled_U3CImportanceU3Ek__BackingField_temp_3 = marshaled.___U3CImportanceU3Ek__BackingField_3;
	unmarshaled.set_U3CImportanceU3Ek__BackingField_3(unmarshaled_U3CImportanceU3Ek__BackingField_temp_3);
	bool unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4 = false;
	unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4 = static_cast<bool>(marshaled.___U3CCanBypassDndU3Ek__BackingField_4);
	unmarshaled.set_U3CCanBypassDndU3Ek__BackingField_4(unmarshaled_U3CCanBypassDndU3Ek__BackingField_temp_4);
	bool unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5 = false;
	unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CCanShowBadgeU3Ek__BackingField_5);
	unmarshaled.set_U3CCanShowBadgeU3Ek__BackingField_5(unmarshaled_U3CCanShowBadgeU3Ek__BackingField_temp_5);
	bool unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6 = false;
	unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6 = static_cast<bool>(marshaled.___U3CEnableLightsU3Ek__BackingField_6);
	unmarshaled.set_U3CEnableLightsU3Ek__BackingField_6(unmarshaled_U3CEnableLightsU3Ek__BackingField_temp_6);
	bool unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7 = false;
	unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7 = static_cast<bool>(marshaled.___U3CEnableVibrationU3Ek__BackingField_7);
	unmarshaled.set_U3CEnableVibrationU3Ek__BackingField_7(unmarshaled_U3CEnableVibrationU3Ek__BackingField_temp_7);
	unmarshaled.set_U3CVibrationPatternU3Ek__BackingField_8((Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_8));
	int32_t unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9 = 0;
	unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9 = marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9;
	unmarshaled.set_U3CLockScreenVisibilityU3Ek__BackingField_9(unmarshaled_U3CLockScreenVisibilityU3Ek__BackingField_temp_9);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshal_com_cleanup(AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = NULL;
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::get_Importance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = __this->get_U3CImportanceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_inline(_thisAdjusted, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CImportanceU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanBypassDnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = __this->get_U3CCanBypassDndU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_inline(_thisAdjusted, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanShowBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = __this->get_U3CCanShowBadgeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_inline(_thisAdjusted, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = __this->get_U3CEnableLightsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_inline(_thisAdjusted, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableVibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = __this->get_U3CEnableVibrationU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_inline(_thisAdjusted, method);
}
// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::get_VibrationPattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7 (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = __this->get_U3CVibrationPatternU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_inline(_thisAdjusted, method);
}
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::get_LockScreenVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = __this->get_U3CLockScreenVisibilityU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * _thisAdjusted = reinterpret_cast<AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 *>(__this + _offset);
	return AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotificationExtensions::ToNotificationStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToNotificationStyle_m30E2C72FD8233990852D5644A1C1DCB1552DCFB6 (int32_t ___notificationStyle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationExtensions_ToNotificationStyle_m30E2C72FD8233990852D5644A1C1DCB1552DCFB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enum.IsDefined(typeof(NotificationStyle), notificationStyle))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NotificationStyle_t069969DC8CECAD16AF8C5609692F93B6252F6DED_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___notificationStyle0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_5 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (NotificationStyle)notificationStyle;
		int32_t L_6 = ___notificationStyle0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return NotificationStyle.None;
		return (int32_t)(0);
	}
}
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotificationExtensions::ToGroupAlertBehaviours(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_m6BE71EE671DDF13C9333E8D84FA1C8F95A773624 (int32_t ___groupAlertBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationExtensions_ToGroupAlertBehaviours_m6BE71EE671DDF13C9333E8D84FA1C8F95A773624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enum.IsDefined(typeof(GroupAlertBehaviours), groupAlertBehaviour))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (GroupAlertBehaviours_tBC5175985945B0E631AD81184B12A38D4EA43880_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___groupAlertBehaviour0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_5 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (GroupAlertBehaviours)groupAlertBehaviour;
		int32_t L_6 = ___groupAlertBehaviour0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return GroupAlertBehaviours.GroupAlertAll;
		return (int32_t)(0);
	}
}
// UnityEngine.Color Unity.Notifications.Android.AndroidNotificationExtensions::ToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  AndroidNotificationExtensions_ToColor_m4F0AC1E486292491D63BED6EDD5F27C28D3666E5 (int32_t ___color0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int a = (color >> 24) & 0xff;
		int32_t L_0 = ___color0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)));
		// int r = (color >> 16) & 0xff;
		int32_t L_1 = ___color0;
		// int g = (color >> 8) & 0xff;
		int32_t L_2 = ___color0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)8))&(int32_t)((int32_t)255)));
		// int b = (color) & 0xff;
		int32_t L_3 = ___color0;
		V_2 = ((int32_t)((int32_t)L_3&(int32_t)((int32_t)255)));
		// return new Color32((byte)r, (byte)g, (byte)b, (byte)a);
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_0;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_7), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))))), (uint8_t)(((int32_t)((uint8_t)L_4))), (uint8_t)(((int32_t)((uint8_t)L_5))), (uint8_t)(((int32_t)((uint8_t)L_6))), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 Unity.Notifications.Android.AndroidNotificationExtensions::ToInt(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToInt_m145923D169D265B0EA179BFDB53703FC8901D276 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationExtensions_ToInt_m145923D169D265B0EA179BFDB53703FC8901D276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!color.HasValue)
		bool L_0 = Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_inline((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color0), /*hidden argument*/Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000b:
	{
		// var color32 = (Color32)color.Value;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)(&___color0), /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return (color32.a & 0xff) << 24 | (color32.r & 0xff) << 16 | (color32.g & 0xff) << 8 | (color32.b & 0xff);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_3 = V_0;
		uint8_t L_4 = L_3.get_a_4();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_5 = V_0;
		uint8_t L_6 = L_5.get_r_1();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_7 = V_0;
		uint8_t L_8 = L_7.get_g_2();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_9 = V_0;
		uint8_t L_10 = L_9.get_b_3();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)255)))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
	}
}
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationExtensions_ToLong_m8B2B0DE759417E42C3FC322EC1BC67EB0E551F70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime origin = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		// TimeSpan diff = dateTime.ToUniversalTime() - origin;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = DateTime_ToUniversalTime_mB5FB50E0AD0D9A2A917893A1655F51B174C7A6B3((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateTime0), /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// return (long)Math.Floor(diff.TotalMilliseconds);
		double L_3 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4 = floor(L_3);
		return (((int64_t)((int64_t)L_4)));
	}
}
// System.DateTime Unity.Notifications.Android.AndroidNotificationExtensions::ToDatetime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotificationExtensions_ToDatetime_m800EBFECFB1908CCAEF03513C58468E7845F0F43 (int64_t ___dateTime0, const RuntimeMethod* method)
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime origin = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_mCB99E35879988A22842FDDA9BBC3ACA74F1BEE38((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		// return origin.AddMilliseconds(dateTime).ToLocalTime();
		int64_t L_0 = ___dateTime0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), (((double)((double)L_0))), /*hidden argument*/NULL);
		V_1 = L_1;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2 = DateTime_ToLocalTime_mCE92C270822E0C13C7C849BDE5DDC852A4CF0A08((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m17C90BDB52FAC47FAA4AA705CA37D13C1C4FD17A (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ___timeSpan0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationExtensions_ToLong_m17C90BDB52FAC47FAA4AA705CA37D13C1C4FD17A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return timeSpan.HasValue ? (long)timeSpan.Value.TotalMilliseconds : -1L;
		bool L_0 = Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_inline((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___timeSpan0), /*hidden argument*/Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (((int64_t)((int64_t)(-1))));
	}

IL_000c:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE((Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F *)(&___timeSpan0), /*hidden argument*/Nullable_1_get_Value_mC0E650976B573161370AC933495E6B242D9DC6EE_RuntimeMethod_var);
		V_0 = L_1;
		double L_2 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_0), /*hidden argument*/NULL);
		return (((int64_t)((int64_t)L_2)));
	}
}
// System.TimeSpan Unity.Notifications.Android.AndroidNotificationExtensions::ToTimeSpan(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6 (int64_t ___timeSpan0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidNotificationExtensions_ToTimeSpan_m82F05A65D739796F7E94F26566170DBCC56D1DD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeSpan.FromMilliseconds(timeSpan);
		int64_t L_0 = ___timeSpan0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = TimeSpan_FromMilliseconds_m12D90542B044C450FDFBCEA1CBC32369479483EC((((double)((double)L_0))), /*hidden argument*/NULL);
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
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::.ctor(System.Int32,System.String,Unity.Notifications.Android.AndroidNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData__ctor_mFA0B24EADF0B8CCAC424B598B7C75C99CAF0C80B (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * __this, int32_t ___id0, String_t* ___channelId1, AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  ___notification2, const RuntimeMethod* method)
{
	{
		// public AndroidNotificationIntentData(int id, string channelId, AndroidNotification notification)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Id = id;
		int32_t L_0 = ___id0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		// Channel = channelId;
		String_t* L_1 = ___channelId1;
		__this->set_U3CChannelU3Ek__BackingField_1(L_1);
		// Notification = notification;
		AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89  L_2 = ___notification2;
		__this->set_U3CNotificationU3Ek__BackingField_2(L_2);
		// }
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
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::EnqueueReceivedNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m91497715038968784C48633AAF410897DA041001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___intent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m91497715038968784C48633AAF410897DA041001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (s_ReceivedNotificationQueue)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_s_ReceivedNotificationQueue_5();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// s_ReceivedNotificationQueue.Enqueue(intent);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_2 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_s_ReceivedNotificationQueue_5();
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3 = ___intent0;
		NullCheck(L_2);
		Queue_1_Enqueue_m81D3B8557929F594497BB0AF885013586FB23E76(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m81D3B8557929F594497BB0AF885013586FB23E76_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x27, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0026;
			}
		}

IL_0020:
		{
			Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_0026:
		{
			IL2CPP_END_FINALLY(29)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x27, IL_0027)
	}

IL_0027:
	{
		// }
		return;
	}
}
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_Update_m73DC78B1913BE91F029C10B5CD39C853424CD09E (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidReceivedNotificationMainThreadDispatcher_Update_m73DC78B1913BE91F029C10B5CD39C853424CD09E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * V_0 = NULL;
	bool V_1 = false;
	Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (s_ReceivedNotificationQueue)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_s_ReceivedNotificationQueue_5();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// s_ReceivedNotificationList.AddRange(s_ReceivedNotificationQueue);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_2 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_s_ReceivedNotificationList_6();
		Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_3 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_s_ReceivedNotificationQueue_5();
		NullCheck(L_2);
		List_1_AddRange_mB8E8A6C6D7915DA51E5359BA11EC0B886EA7D7BE(L_2, L_3, /*hidden argument*/List_1_AddRange_mB8E8A6C6D7915DA51E5359BA11EC0B886EA7D7BE_RuntimeMethod_var);
		// s_ReceivedNotificationQueue.Clear();
		Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_4 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_s_ReceivedNotificationQueue_5();
		NullCheck(L_4);
		Queue_1_Clear_mB61A09C06503DF9D38CAB83B49D32905AD7D624F(L_4, /*hidden argument*/Queue_1_Clear_mB61A09C06503DF9D38CAB83B49D32905AD7D624F_RuntimeMethod_var);
		// }
		IL2CPP_LEAVE(0x35, FINALLY_002b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x35, IL_0035)
	}

IL_0035:
	{
		// foreach (var notification in s_ReceivedNotificationList)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_7 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_s_ReceivedNotificationList_6();
		NullCheck(L_7);
		Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD  L_8 = List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7(L_7, /*hidden argument*/List_1_GetEnumerator_m88B8BAD9E34605DD37DB23EF437F9B1FF869DFF7_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0042:
		{
			// foreach (var notification in s_ReceivedNotificationList)
			AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_9 = Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_inline((Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1579633F9660B899A35B3DE93473AA792BD85A2A_RuntimeMethod_var);
			// AndroidNotificationCenter.ReceivedNotificationCallback(notification);
			IL2CPP_RUNTIME_CLASS_INIT(AndroidNotificationCenter_t1C7DA37118360A746261D68DDCF380AF22522C5C_il2cpp_TypeInfo_var);
			AndroidNotificationCenter_ReceivedNotificationCallback_mF925FF2B7DDD6D1EE601205F3CF14A2B6F5318DF(L_9, /*hidden argument*/NULL);
		}

IL_004e:
		{
			// foreach (var notification in s_ReceivedNotificationList)
			bool L_10 = Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2((Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mB15CB0B4CA5AA42DD4FF2CB445C8AE96ED8FF2B2_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0042;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D((Enumerator_tBBEE70C6443D466192C567924CCD791E797A7FDD *)(&V_2), /*hidden argument*/Enumerator_Dispose_m22C2979B02507C0C33B02383587FB3D60E9C7D8D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
	}

IL_0067:
	{
		// s_ReceivedNotificationList.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_11 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_s_ReceivedNotificationList_6();
		NullCheck(L_11);
		List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581(L_11, /*hidden argument*/List_1_Clear_m74A870D3B22C8AA0A6F45AA4CB0EFBBB8D344581_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_Awake_mE29E5C70BC91344E219FFE45639E03645AA48944 (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidReceivedNotificationMainThreadDispatcher_Awake_mE29E5C70BC91344E219FFE45639E03645AA48944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_OnDestroy_mCB8274F4292C713C8D76D5F3A8016E3FD97069FE (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidReceivedNotificationMainThreadDispatcher_OnDestroy_mCB8274F4292C713C8D76D5F3A8016E3FD97069FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = null;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->set_instance_4((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 *)NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher__ctor_m03FB58388F00FC3D554A889F7C3D79FFD3F8A1F6 (AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher__cctor_mFD6277622F1396F5C83B4DEC3D6C9466DA1D7C26 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidReceivedNotificationMainThreadDispatcher__cctor_mFD6277622F1396F5C83B4DEC3D6C9466DA1D7C26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AndroidReceivedNotificationMainThreadDispatcher instance = null;
		((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->set_instance_4((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 *)NULL);
		// private static readonly Queue<AndroidJavaObject> s_ReceivedNotificationQueue = new Queue<AndroidJavaObject>();
		Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD * L_0 = (Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD *)il2cpp_codegen_object_new(Queue_1_tB89A9A698E7CF67AA8CEBCBBFB713253CDB76BFD_il2cpp_TypeInfo_var);
		Queue_1__ctor_m8B73368DE06CDB85107743CBB10D8483214A59B4(L_0, /*hidden argument*/Queue_1__ctor_m8B73368DE06CDB85107743CBB10D8483214A59B4_RuntimeMethod_var);
		((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->set_s_ReceivedNotificationQueue_5(L_0);
		// private static readonly List<AndroidJavaObject> s_ReceivedNotificationList = new List<AndroidJavaObject>();
		List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B * L_1 = (List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B *)il2cpp_codegen_object_new(List_1_t911FB7A3288EAACB1E70E61FB84793A19DDB716B_il2cpp_TypeInfo_var);
		List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648(L_1, /*hidden argument*/List_1__ctor_m5F9D82170C2774D7F4048F3C0D571BA570C40648_RuntimeMethod_var);
		((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->set_s_ReceivedNotificationList_6(L_1);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.Android.NotificationCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback__ctor_m0079EEFEA69221760EBC29775A5DF78533B01183 (NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationCallback__ctor_m0079EEFEA69221760EBC29775A5DF78533B01183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NotificationCallback() : base("com.unity.androidnotifications.NotificationCallback")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.NotificationCallback::onSentNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback_onSentNotification_m312DAAE0557A90CB3BB39F4E55B510F5FEC18E2A (NotificationCallback_t81DD74C1A774090ECE4A8E2C1F572E307D6E0D31 * __this, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___notificationIntent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NotificationCallback_onSentNotification_m312DAAE0557A90CB3BB39F4E55B510F5FEC18E2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidReceivedNotificationMainThreadDispatcher.EnqueueReceivedNotification(notificationIntent);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = ___notificationIntent0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m91497715038968784C48633AAF410897DA041001(L_0, /*hidden argument*/NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.Android.AndroidNotificationCenter_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA8D0AFE8E96C91435A7F7078676C2C62ADE79045 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mA8D0AFE8E96C91435A7F7078676C2C62ADE79045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * L_0 = (U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 *)il2cpp_codegen_object_new(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5AB26E888AB42C1D212AEE08649D29C56099BE53(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5AB26E888AB42C1D212AEE08649D29C56099BE53 (U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter_<>c::<.cctor>b__29_0(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__29_0_m11878434192410AEB79062FBB5AAE2ACFBA5F2C9 (U3CU3Ec_tD3D40E6D425FDC994D8DD84B817A70482F14D2C4 * __this, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// public static event NotificationReceivedCallback OnNotificationReceived = delegate {};
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
// System.Void Unity.Notifications.Android.AndroidNotificationCenter_NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m076EC8CB3D125E921A77A3FCDEC8CBBBA95407AC (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter_NotificationReceivedCallback::Invoke(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m3BA17AB01D93A0BD7B529EB155CA9B7930DBA3AB (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___data0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Notifications.Android.AndroidNotificationCenter_NotificationReceivedCallback::BeginInvoke(Unity.Notifications.Android.AndroidNotificationIntentData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_mC6B9D77CDAC40141C3E1D096B0C16184A9DA5B29 (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, AndroidNotificationIntentData_tF4696D5D399BBB905A2F0C71F332EB2E91589521 * ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter_NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_mF9C345485E086AFE95CBEB115BC9DC5318D2C923 (NotificationReceivedCallback_tB18A45295C591BC51A3781A4EBD9AE07240500C9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_mB3DABEE0F0991F9EEBDE33BF7972FD2FE8A1F4F9_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->get_U3CTitleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m8F3CD2493CE4E1146CCF0FB5A22693A83189B2BF_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTitleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m77E9CFB1D553D57D0FEF220DE7B28088DD356D6C_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mBFBF1951A5506A2442A519F044F5D6657B04F04B_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m92B697D0D89530167902FC5897DD168266B81DD0_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = __this->get_U3CSmallIconU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_m8994CFB6F9F7CD57B11F0C9B85032538CC1F7CA9_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CSmallIconU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_FireTime_mF810AF8344094C697EFD40194CD1739CD02A662A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CFireTimeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mB28FFB7F25BA44F896EB8C6289DCCF6603224C78_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CFireTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mC26FD32D630C8467C043CC4A2B4E841892A1E6C0_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = __this->get_U3CLargeIconU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m451EF5AA763036228687978F544A988DD5B521C5_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CLargeIconU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m97C174CB75421EFDD1C2E75C3FCDE4CCAEAD2F54_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = __this->get_U3CStyleU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m98FB64EF2F07E24EB0B7328F685E2597AA8E8202_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStyleU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_mA5DEDC608DC439A4A491EEB7FA4BBECCD34CA2A4_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public int Number { get; set; }
		int32_t L_0 = __this->get_U3CNumberU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m8C6ADBFE6516F90F69096FBD9862480969128142_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Number { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CNumberU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m0F7E321BA510637F3C9D8F553C0A77565E952C36_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = __this->get_U3CShouldAutoCancelU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_mC5CDEF3BD3D064831BE0B70C65EDD17B3157111A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShouldAutoCancelU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m2DC6B59CB2E8A12A104C5A5E9EB91B1AA2F62080_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = __this->get_U3CUsesStopwatchU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_m55FC26AC094CC99D22432104A6C7AC3C629A1CA1_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsesStopwatchU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_m77A3E8F0A809D435B7FC889C6B9C163DD80E7BB1_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string Group { get; set; }
		String_t* L_0 = __this->get_U3CGroupU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_m76EC700DCF7554BE82F92EC7A7E2513B1FF9E959_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Group { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CGroupU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m1BC2AC6F3DE40B306602D5DABFEA1CAFBED76EA2_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = __this->get_U3CGroupSummaryU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_m906CAB0D3329BC8F6DF1582E66A55F98372B9B56_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CGroupSummaryU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m0DE3415FFE52E7DED47D2AAB021A772ED72633D5_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = __this->get_U3CGroupAlertBehaviourU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_m0F6F30DF3CC18235A42B05ADE3293368FDA9265C_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGroupAlertBehaviourU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_m2F51A80A8D61A86E05DBA8BC55F941B4DAAE25C8_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = __this->get_U3CSortKeyU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m20919DC31CFF55EB4CC3C4FE2C7CC5DA24EC8EBB_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CSortKeyU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mF6A7FC46547F023CA9DE369AE45958D1563E6206_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = __this->get_U3CIntentDataU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m5F25F77921D71A8CE4177FEC32784518A7DA251A_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIntentDataU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m4974F4442200DC1311A95ED3173B8EFEB07E10C6_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = __this->get_U3CShowTimestampU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AndroidNotification_get_CustomTimestamp_m36E2E3570D2197AFB00C40E46B0E3665900CD42E_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CustomTimestamp; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_CustomTimestamp_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_m4D6097B1975D351245D2E0F929E4A4B11379FADE_inline (AndroidNotification_tDB5201A4CAFD8F63162D4FA9ECC4DA7E7B305A89 * __this, const RuntimeMethod* method)
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = __this->get_U3CShowCustomTimestampU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m0ECBDF3489F97FA7771BBA299D2CB3A8E233CD02Unity_Notifications_Android_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var);
		AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8 * L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t79CFB6D6F1D2175D584FE70FD0FDF03862573BC8_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m8414CCF73AAE88237B22CEC99C72246ECFB476B7_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_m0AA10F1025091D228921E87AADD2047E7411091A_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_m4628FD745E0AB56D1CA3736561A3AE392134F3D8_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->get_U3CDescriptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_m9CCC8F1DAEC8EDA86D4651F5B5E77DADDEBCA124_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = __this->get_U3CImportanceU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m940E7B2298ABA231695828C6ECE983230AE85997_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = __this->get_U3CEnableLightsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_mB2D0633D3475651540736DD2685498E159622ECD_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = __this->get_U3CEnableVibrationU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_mF5039966BD760C9431BCEF955301B65037ECAF84_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = __this->get_U3CCanBypassDndU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mADC2608F5FA0EE2DA01CE2C48DE746C013629484_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = __this->get_U3CCanShowBadgeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidNotificationChannel_get_VibrationPattern_m4E735D10633F66025E9387CC4B811565892148F7_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_0 = __this->get_U3CVibrationPatternU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_mD57C1C54E1E7BDFFDC7B676887730E72A742F09F_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, const RuntimeMethod* method)
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = __this->get_U3CLockScreenVisibilityU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mBA4BD4BBEDEC34758C2135CA09EB2F229D7799BA_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m9C30D7E82CEC2028A0FA2E21127767027CBC5BC8_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m895FC16334428373C8D15D893611F32077599CD1_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mED3F8A45E4DE2B1085753FC57CAF56CF0DD56DEB_inline (AndroidNotificationChannel_t65E017763547EC13342CC68BDE000AE45EA935A1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CImportanceU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m98A4DD26461182A80D8FB3B9C180C9C83BD8AC88_gshared_inline (Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC1150247A0CCE79C41E75B52D0F802B40FF1AEC7_gshared_inline (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
