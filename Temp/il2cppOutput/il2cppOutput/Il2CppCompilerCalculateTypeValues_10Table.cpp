#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.ArrayList
struct ArrayList_t882804619;
// System.Collections.Hashtable
struct Hashtable_t3998940726;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t2090479640;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t2339243696;
// System.EventHandler
struct EventHandler_t3403973515;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t3457065225;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t641663272;
// System.Collections.IComparer
struct IComparer_t3486206248;
// System.Collections.ICollection
struct ICollection_t3026655238;
// System.Type
struct Type_t;
// System.WeakReference
struct WeakReference_t3037092117;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t632871921;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t142727698;
// System.Net.Security.SslStream
struct SslStream_t3789043458;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2143290881;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3364698794;
// System.ComponentModel.ISite
struct ISite_t835779767;
// System.ComponentModel.ListEntry
struct ListEntry_t4154937100;
// System.Delegate
struct Delegate_t4015944365;
// System.IntPtr[]
struct IntPtrU5BU5D_t1064407897;
// System.Collections.IDictionary
struct IDictionary_t3534030620;
// System.Char[]
struct CharU5BU5D_t2775925042;
// System.ComponentModel.IComponent
struct IComponent_t1647261114;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t488558822;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3071280065;
// System.IO.Compression.DeflateStream
struct DeflateStream_t3368912189;
// System.IO.Stream
struct Stream_t2140123728;
// System.ComponentModel.TypeConverter
struct TypeConverter_t1102714454;
// System.Void
struct Void_t97265340;
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t1992502468;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2177389735;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t4020417944;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1041011760;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Net.Sockets.Socket
struct Socket_t3176573211;
// System.AsyncCallback
struct AsyncCallback_t2696712479;
// System.Threading.WaitHandle
struct WaitHandle_t3425466655;
// System.Exception
struct Exception_t166026107;
// System.Net.EndPoint
struct EndPoint_t3178271735;
// System.Byte[]
struct ByteU5BU5D_t855963486;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2406213980;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t3652979057;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t4147997574;
// System.Collections.Queue
struct Queue_t1415418741;
// System.Threading.Thread
struct Thread_t3825782586;
// System.IAsyncResult
struct IAsyncResult_t2521632562;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef TYPEDESCRIPTOR_T2420543769_H
#define TYPEDESCRIPTOR_T2420543769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t2420543769  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t2420543769_StaticFields
{
public:
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	RuntimeObject * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t882804619 * ___defaultConverters_1;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t3998940726 * ___componentTable_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t3998940726 * ___typeTable_3;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	RuntimeObject * ___typeDescriptionProvidersLock_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t2090479640 * ___typeDescriptionProviders_5;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	RuntimeObject * ___componentDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t2339243696 * ___componentDescriptionProviders_7;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t3403973515 * ___onDispose_8;

public:
	inline static int32_t get_offset_of_creatingDefaultConverters_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___creatingDefaultConverters_0)); }
	inline RuntimeObject * get_creatingDefaultConverters_0() const { return ___creatingDefaultConverters_0; }
	inline RuntimeObject ** get_address_of_creatingDefaultConverters_0() { return &___creatingDefaultConverters_0; }
	inline void set_creatingDefaultConverters_0(RuntimeObject * value)
	{
		___creatingDefaultConverters_0 = value;
		Il2CppCodeGenWriteBarrier((&___creatingDefaultConverters_0), value);
	}

	inline static int32_t get_offset_of_defaultConverters_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___defaultConverters_1)); }
	inline ArrayList_t882804619 * get_defaultConverters_1() const { return ___defaultConverters_1; }
	inline ArrayList_t882804619 ** get_address_of_defaultConverters_1() { return &___defaultConverters_1; }
	inline void set_defaultConverters_1(ArrayList_t882804619 * value)
	{
		___defaultConverters_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultConverters_1), value);
	}

	inline static int32_t get_offset_of_componentTable_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___componentTable_2)); }
	inline Hashtable_t3998940726 * get_componentTable_2() const { return ___componentTable_2; }
	inline Hashtable_t3998940726 ** get_address_of_componentTable_2() { return &___componentTable_2; }
	inline void set_componentTable_2(Hashtable_t3998940726 * value)
	{
		___componentTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___componentTable_2), value);
	}

	inline static int32_t get_offset_of_typeTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___typeTable_3)); }
	inline Hashtable_t3998940726 * get_typeTable_3() const { return ___typeTable_3; }
	inline Hashtable_t3998940726 ** get_address_of_typeTable_3() { return &___typeTable_3; }
	inline void set_typeTable_3(Hashtable_t3998940726 * value)
	{
		___typeTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeTable_3), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___typeDescriptionProvidersLock_4)); }
	inline RuntimeObject * get_typeDescriptionProvidersLock_4() const { return ___typeDescriptionProvidersLock_4; }
	inline RuntimeObject ** get_address_of_typeDescriptionProvidersLock_4() { return &___typeDescriptionProvidersLock_4; }
	inline void set_typeDescriptionProvidersLock_4(RuntimeObject * value)
	{
		___typeDescriptionProvidersLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProvidersLock_4), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___typeDescriptionProviders_5)); }
	inline Dictionary_2_t2090479640 * get_typeDescriptionProviders_5() const { return ___typeDescriptionProviders_5; }
	inline Dictionary_2_t2090479640 ** get_address_of_typeDescriptionProviders_5() { return &___typeDescriptionProviders_5; }
	inline void set_typeDescriptionProviders_5(Dictionary_2_t2090479640 * value)
	{
		___typeDescriptionProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProviders_5), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___componentDescriptionProvidersLock_6)); }
	inline RuntimeObject * get_componentDescriptionProvidersLock_6() const { return ___componentDescriptionProvidersLock_6; }
	inline RuntimeObject ** get_address_of_componentDescriptionProvidersLock_6() { return &___componentDescriptionProvidersLock_6; }
	inline void set_componentDescriptionProvidersLock_6(RuntimeObject * value)
	{
		___componentDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProvidersLock_6), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___componentDescriptionProviders_7)); }
	inline Dictionary_2_t2339243696 * get_componentDescriptionProviders_7() const { return ___componentDescriptionProviders_7; }
	inline Dictionary_2_t2339243696 ** get_address_of_componentDescriptionProviders_7() { return &___componentDescriptionProviders_7; }
	inline void set_componentDescriptionProviders_7(Dictionary_2_t2339243696 * value)
	{
		___componentDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProviders_7), value);
	}

	inline static int32_t get_offset_of_onDispose_8() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2420543769_StaticFields, ___onDispose_8)); }
	inline EventHandler_t3403973515 * get_onDispose_8() const { return ___onDispose_8; }
	inline EventHandler_t3403973515 ** get_address_of_onDispose_8() { return &___onDispose_8; }
	inline void set_onDispose_8(EventHandler_t3403973515 * value)
	{
		___onDispose_8 = value;
		Il2CppCodeGenWriteBarrier((&___onDispose_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T2420543769_H
#ifndef MEMBERDESCRIPTOR_T2624545998_H
#define MEMBERDESCRIPTOR_T2624545998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t2624545998  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t3457065225* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t641663272 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2624545998, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2624545998, ___attrs_1)); }
	inline AttributeU5BU5D_t3457065225* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t3457065225** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t3457065225* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2624545998, ___attrCollection_2)); }
	inline AttributeCollection_t641663272 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t641663272 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t641663272 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t2624545998_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2624545998_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T2624545998_H
#ifndef MEMBERDESCRIPTORCOMPARER_T1420179906_H
#define MEMBERDESCRIPTORCOMPARER_T1420179906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t1420179906  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T1420179906_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T488558822_H
#define PROPERTYDESCRIPTORCOLLECTION_T488558822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t488558822  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t882804619 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t488558822, ___properties_1)); }
	inline ArrayList_t882804619 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t882804619 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t882804619 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t488558822, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t488558822_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t488558822 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t488558822_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t488558822 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t488558822 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t488558822 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T488558822_H
#ifndef TYPECONVERTER_T1102714454_H
#define TYPECONVERTER_T1102714454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t1102714454  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T1102714454_H
#ifndef STANDARDVALUESCOLLECTION_T3071280065_H
#define STANDARDVALUESCOLLECTION_T3071280065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_t3071280065  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t3071280065, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDVALUESCOLLECTION_T3071280065_H
#ifndef TYPEDESCRIPTIONPROVIDER_T4165141297_H
#define TYPEDESCRIPTIONPROVIDER_T4165141297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t4165141297  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T4165141297_H
#ifndef INFO_T4240555528_H
#define INFO_T4240555528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Info
struct  Info_t4240555528  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.Info::_infoType
	Type_t * ____infoType_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t641663272 * ____attributes_1;

public:
	inline static int32_t get_offset_of__infoType_0() { return static_cast<int32_t>(offsetof(Info_t4240555528, ____infoType_0)); }
	inline Type_t * get__infoType_0() const { return ____infoType_0; }
	inline Type_t ** get_address_of__infoType_0() { return &____infoType_0; }
	inline void set__infoType_0(Type_t * value)
	{
		____infoType_0 = value;
		Il2CppCodeGenWriteBarrier((&____infoType_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(Info_t4240555528, ____attributes_1)); }
	inline AttributeCollection_t641663272 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t641663272 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t641663272 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFO_T4240555528_H
#ifndef WEAKOBJECTWRAPPER_T1356999333_H
#define WEAKOBJECTWRAPPER_T1356999333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapper
struct  WeakObjectWrapper_t1356999333  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.WeakObjectWrapper::<TargetHashCode>k__BackingField
	int32_t ___U3CTargetHashCodeU3Ek__BackingField_0;
	// System.WeakReference System.ComponentModel.WeakObjectWrapper::<Weak>k__BackingField
	WeakReference_t3037092117 * ___U3CWeakU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t1356999333, ___U3CTargetHashCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTargetHashCodeU3Ek__BackingField_0() const { return ___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTargetHashCodeU3Ek__BackingField_0() { return &___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline void set_U3CTargetHashCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTargetHashCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CWeakU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t1356999333, ___U3CWeakU3Ek__BackingField_1)); }
	inline WeakReference_t3037092117 * get_U3CWeakU3Ek__BackingField_1() const { return ___U3CWeakU3Ek__BackingField_1; }
	inline WeakReference_t3037092117 ** get_address_of_U3CWeakU3Ek__BackingField_1() { return &___U3CWeakU3Ek__BackingField_1; }
	inline void set_U3CWeakU3Ek__BackingField_1(WeakReference_t3037092117 * value)
	{
		___U3CWeakU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWeakU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPER_T1356999333_H
#ifndef DEBUG_T3429274548_H
#define DEBUG_T3429274548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Debug
struct  Debug_t3429274548  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T3429274548_H
#ifndef STOPWATCH_T3034135424_H
#define STOPWATCH_T3034135424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Stopwatch
struct  Stopwatch_t3034135424  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t3034135424, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t3034135424, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t3034135424, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t3034135424_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t3034135424_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t3034135424_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STOPWATCH_T3034135424_H
#ifndef SWITCH_T3380380090_H
#define SWITCH_T3380380090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Switch
struct  Switch_t3380380090  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.Switch::name
	String_t* ___name_0;
	// System.String System.Diagnostics.Switch::description
	String_t* ___description_1;
	// System.Int32 System.Diagnostics.Switch::switchSetting
	int32_t ___switchSetting_2;
	// System.String System.Diagnostics.Switch::value
	String_t* ___value_3;
	// System.String System.Diagnostics.Switch::defaultSwitchValue
	String_t* ___defaultSwitchValue_4;
	// System.Boolean System.Diagnostics.Switch::initialized
	bool ___initialized_5;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.Switch::attributes
	StringDictionary_t632871921 * ___attributes_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Switch_t3380380090, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Switch_t3380380090, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}

	inline static int32_t get_offset_of_switchSetting_2() { return static_cast<int32_t>(offsetof(Switch_t3380380090, ___switchSetting_2)); }
	inline int32_t get_switchSetting_2() const { return ___switchSetting_2; }
	inline int32_t* get_address_of_switchSetting_2() { return &___switchSetting_2; }
	inline void set_switchSetting_2(int32_t value)
	{
		___switchSetting_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Switch_t3380380090, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((&___value_3), value);
	}

	inline static int32_t get_offset_of_defaultSwitchValue_4() { return static_cast<int32_t>(offsetof(Switch_t3380380090, ___defaultSwitchValue_4)); }
	inline String_t* get_defaultSwitchValue_4() const { return ___defaultSwitchValue_4; }
	inline String_t** get_address_of_defaultSwitchValue_4() { return &___defaultSwitchValue_4; }
	inline void set_defaultSwitchValue_4(String_t* value)
	{
		___defaultSwitchValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSwitchValue_4), value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(Switch_t3380380090, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}

	inline static int32_t get_offset_of_attributes_6() { return static_cast<int32_t>(offsetof(Switch_t3380380090, ___attributes_6)); }
	inline StringDictionary_t632871921 * get_attributes_6() const { return ___attributes_6; }
	inline StringDictionary_t632871921 ** get_address_of_attributes_6() { return &___attributes_6; }
	inline void set_attributes_6(StringDictionary_t632871921 * value)
	{
		___attributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCH_T3380380090_H
#ifndef U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T762123931_H
#define U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T762123931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7
struct  U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t762123931  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7::clientCertificates
	X509CertificateCollection_t142727698 * ___clientCertificates_0;
	// System.Net.Security.SslStream System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7::<>f__this
	SslStream_t3789043458 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_clientCertificates_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t762123931, ___clientCertificates_0)); }
	inline X509CertificateCollection_t142727698 * get_clientCertificates_0() const { return ___clientCertificates_0; }
	inline X509CertificateCollection_t142727698 ** get_address_of_clientCertificates_0() { return &___clientCertificates_0; }
	inline void set_clientCertificates_0(X509CertificateCollection_t142727698 * value)
	{
		___clientCertificates_0 = value;
		Il2CppCodeGenWriteBarrier((&___clientCertificates_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t762123931, ___U3CU3Ef__this_1)); }
	inline SslStream_t3789043458 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline SslStream_t3789043458 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(SslStream_t3789043458 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T762123931_H
#ifndef LINGEROPTION_T3640734382_H
#define LINGEROPTION_T3640734382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.LingerOption
struct  LingerOption_t3640734382  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::seconds
	int32_t ___seconds_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LingerOption_t3640734382, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_seconds_1() { return static_cast<int32_t>(offsetof(LingerOption_t3640734382, ___seconds_1)); }
	inline int32_t get_seconds_1() const { return ___seconds_1; }
	inline int32_t* get_address_of_seconds_1() { return &___seconds_1; }
	inline void set_seconds_1(int32_t value)
	{
		___seconds_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINGEROPTION_T3640734382_H
#ifndef MULTICASTOPTION_T3467962985_H
#define MULTICASTOPTION_T3467962985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t3467962985  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTOPTION_T3467962985_H
#ifndef EVENTARGS_T3333764384_H
#define EVENTARGS_T3333764384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3333764384  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3333764384_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3333764384 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3333764384_StaticFields, ___Empty_0)); }
	inline EventArgs_t3333764384 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3333764384 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3333764384 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3333764384_H
#ifndef MARSHALBYREFOBJECT_T880972202_H
#define MARSHALBYREFOBJECT_T880972202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t880972202  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2143290881 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t880972202, ____identity_0)); }
	inline ServerIdentity_t2143290881 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2143290881 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2143290881 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T880972202_H
#ifndef READONLYCOLLECTIONBASE_T1397248762_H
#define READONLYCOLLECTIONBASE_T1397248762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t1397248762  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t882804619 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t1397248762, ___list_0)); }
	inline ArrayList_t882804619 * get_list_0() const { return ___list_0; }
	inline ArrayList_t882804619 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t882804619 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T1397248762_H
#ifndef ATTRIBUTE_T301694360_H
#define ATTRIBUTE_T301694360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t301694360  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T301694360_H
#ifndef EQUALITYCOMPARER_1_T1498665788_H
#define EQUALITYCOMPARER_1_T1498665788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
struct  EqualityComparer_1_t1498665788  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t1498665788_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t1498665788 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t1498665788_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t1498665788 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t1498665788 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t1498665788 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T1498665788_H
#ifndef STREAM_T2140123728_H
#define STREAM_T2140123728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t2140123728  : public RuntimeObject
{
public:

public:
};

struct Stream_t2140123728_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t2140123728 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t2140123728_StaticFields, ___Null_0)); }
	inline Stream_t2140123728 * get_Null_0() const { return ___Null_0; }
	inline Stream_t2140123728 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t2140123728 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T2140123728_H
#ifndef VALUETYPE_T1666163699_H
#define VALUETYPE_T1666163699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1666163699  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1666163699_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1666163699_marshaled_com
{
};
#endif // VALUETYPE_T1666163699_H
#ifndef MARSHALBYVALUECOMPONENT_T3290817515_H
#define MARSHALBYVALUECOMPONENT_T3290817515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t3290817515  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t3364698794 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3290817515, ___eventList_0)); }
	inline EventHandlerList_t3364698794 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t3364698794 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t3364698794 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3290817515, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3290817515, ___disposedEvent_2)); }
	inline RuntimeObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline RuntimeObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(RuntimeObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T3290817515_H
#ifndef EVENTHANDLERLIST_T3364698794_H
#define EVENTHANDLERLIST_T3364698794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t3364698794  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t4154937100 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t4015944365 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t3364698794, ___entries_0)); }
	inline ListEntry_t4154937100 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t4154937100 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t4154937100 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t3364698794, ___null_entry_1)); }
	inline Delegate_t4015944365 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t4015944365 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t4015944365 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T3364698794_H
#ifndef EXCEPTION_T166026107_H
#define EXCEPTION_T166026107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t166026107  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1064407897* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t166026107 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1064407897* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1064407897** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1064407897* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___inner_exception_1)); }
	inline Exception_t166026107 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t166026107 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t166026107 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t166026107, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t166026107, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t166026107, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T166026107_H
#ifndef ENUMCOMPARER_T929522421_H
#define ENUMCOMPARER_T929522421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t929522421  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T929522421_H
#ifndef LISTENTRY_T4154937100_H
#define LISTENTRY_T4154937100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t4154937100  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t4015944365 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t4154937100 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t4154937100, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t4154937100, ___value_1)); }
	inline Delegate_t4015944365 * get_value_1() const { return ___value_1; }
	inline Delegate_t4015944365 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t4015944365 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t4154937100, ___next_2)); }
	inline ListEntry_t4154937100 * get_next_2() const { return ___next_2; }
	inline ListEntry_t4154937100 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t4154937100 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T4154937100_H
#ifndef CULTUREINFOCOMPARER_T1331892432_H
#define CULTUREINFOCOMPARER_T1331892432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t1331892432  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T1331892432_H
#ifndef TOOLBOXITEMATTRIBUTE_T3844884318_H
#define TOOLBOXITEMATTRIBUTE_T3844884318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t3844884318  : public Attribute_t301694360
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::itemType
	Type_t * ___itemType_2;
	// System.String System.ComponentModel.ToolboxItemAttribute::itemTypeName
	String_t* ___itemTypeName_3;

public:
	inline static int32_t get_offset_of_itemType_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3844884318, ___itemType_2)); }
	inline Type_t * get_itemType_2() const { return ___itemType_2; }
	inline Type_t ** get_address_of_itemType_2() { return &___itemType_2; }
	inline void set_itemType_2(Type_t * value)
	{
		___itemType_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_2), value);
	}

	inline static int32_t get_offset_of_itemTypeName_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3844884318, ___itemTypeName_3)); }
	inline String_t* get_itemTypeName_3() const { return ___itemTypeName_3; }
	inline String_t** get_address_of_itemTypeName_3() { return &___itemTypeName_3; }
	inline void set_itemTypeName_3(String_t* value)
	{
		___itemTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___itemTypeName_3), value);
	}
};

struct ToolboxItemAttribute_t3844884318_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t3844884318 * ___Default_0;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t3844884318 * ___None_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3844884318_StaticFields, ___Default_0)); }
	inline ToolboxItemAttribute_t3844884318 * get_Default_0() const { return ___Default_0; }
	inline ToolboxItemAttribute_t3844884318 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ToolboxItemAttribute_t3844884318 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3844884318_StaticFields, ___None_1)); }
	inline ToolboxItemAttribute_t3844884318 * get_None_1() const { return ___None_1; }
	inline ToolboxItemAttribute_t3844884318 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(ToolboxItemAttribute_t3844884318 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T3844884318_H
#ifndef ENUM_T1471893459_H
#define ENUM_T1471893459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1471893459  : public ValueType_t1666163699
{
public:

public:
};

struct Enum_t1471893459_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2775925042* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1471893459_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2775925042* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2775925042** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2775925042* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1471893459_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1471893459_marshaled_com
{
};
#endif // ENUM_T1471893459_H
#ifndef TYPECONVERTERATTRIBUTE_T3422343704_H
#define TYPECONVERTERATTRIBUTE_T3422343704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3422343704  : public Attribute_t301694360
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3422343704, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t3422343704_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3422343704 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3422343704_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t3422343704 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t3422343704 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t3422343704 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3422343704_H
#ifndef BASENUMBERCONVERTER_T1165719209_H
#define BASENUMBERCONVERTER_T1165719209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t1165719209  : public TypeConverter_t1102714454
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t1165719209, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T1165719209_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T1293239234_H
#define DESIGNERCATEGORYATTRIBUTE_T1293239234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t1293239234  : public Attribute_t301694360
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1293239234, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t1293239234_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t1293239234 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t1293239234 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t1293239234 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t1293239234 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1293239234_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t1293239234 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t1293239234 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t1293239234 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1293239234_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t1293239234 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t1293239234 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t1293239234 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1293239234_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t1293239234 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t1293239234 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t1293239234 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1293239234_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t1293239234 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t1293239234 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t1293239234 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T1293239234_H
#ifndef COMPONENTINFO_T3766629128_H
#define COMPONENTINFO_T3766629128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentInfo
struct  ComponentInfo_t3766629128  : public Info_t4240555528
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.ComponentInfo::_component
	RuntimeObject* ____component_2;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::_properties
	PropertyDescriptorCollection_t488558822 * ____properties_3;

public:
	inline static int32_t get_offset_of__component_2() { return static_cast<int32_t>(offsetof(ComponentInfo_t3766629128, ____component_2)); }
	inline RuntimeObject* get__component_2() const { return ____component_2; }
	inline RuntimeObject** get_address_of__component_2() { return &____component_2; }
	inline void set__component_2(RuntimeObject* value)
	{
		____component_2 = value;
		Il2CppCodeGenWriteBarrier((&____component_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(ComponentInfo_t3766629128, ____properties_3)); }
	inline PropertyDescriptorCollection_t488558822 * get__properties_3() const { return ____properties_3; }
	inline PropertyDescriptorCollection_t488558822 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyDescriptorCollection_t488558822 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTINFO_T3766629128_H
#ifndef TYPEINFO_T889122298_H
#define TYPEINFO_T889122298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeInfo
struct  TypeInfo_t889122298  : public Info_t4240555528
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::_properties
	PropertyDescriptorCollection_t488558822 * ____properties_2;

public:
	inline static int32_t get_offset_of__properties_2() { return static_cast<int32_t>(offsetof(TypeInfo_t889122298, ____properties_2)); }
	inline PropertyDescriptorCollection_t488558822 * get__properties_2() const { return ____properties_2; }
	inline PropertyDescriptorCollection_t488558822 ** get_address_of__properties_2() { return &____properties_2; }
	inline void set__properties_2(PropertyDescriptorCollection_t488558822 * value)
	{
		____properties_2 = value;
		Il2CppCodeGenWriteBarrier((&____properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T889122298_H
#ifndef CULTUREINFOCONVERTER_T2766545361_H
#define CULTUREINFOCONVERTER_T2766545361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t2766545361  : public TypeConverter_t1102714454
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t3071280065 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t2766545361, ____standardValues_0)); }
	inline StandardValuesCollection_t3071280065 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t3071280065 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t3071280065 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T2766545361_H
#ifndef DATETIMECONVERTER_T3457795813_H
#define DATETIMECONVERTER_T3457795813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t3457795813  : public TypeConverter_t1102714454
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T3457795813_H
#ifndef DESIGNERATTRIBUTE_T3702747175_H
#define DESIGNERATTRIBUTE_T3702747175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t3702747175  : public Attribute_t301694360
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t3702747175, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t3702747175, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T3702747175_H
#ifndef WEAKOBJECTWRAPPERCOMPARER_T3829954178_H
#define WEAKOBJECTWRAPPERCOMPARER_T3829954178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapperComparer
struct  WeakObjectWrapperComparer_t3829954178  : public EqualityComparer_1_t1498665788
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPERCOMPARER_T3829954178_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T591411902_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T591411902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t591411902  : public Attribute_t301694360
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t591411902, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t591411902_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t591411902 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t591411902 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t591411902 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t591411902_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t591411902 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t591411902 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t591411902 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t591411902_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t591411902 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t591411902 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t591411902 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t591411902_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t591411902 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t591411902 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t591411902 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T591411902_H
#ifndef DESIGNONLYATTRIBUTE_T2800626246_H
#define DESIGNONLYATTRIBUTE_T2800626246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t2800626246  : public Attribute_t301694360
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2800626246, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t2800626246_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t2800626246 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t2800626246 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t2800626246 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2800626246_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t2800626246 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t2800626246 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t2800626246 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2800626246_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t2800626246 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t2800626246 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t2800626246 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t2800626246_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t2800626246 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t2800626246 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t2800626246 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T2800626246_H
#ifndef DESCRIPTIONATTRIBUTE_T2040880064_H
#define DESCRIPTIONATTRIBUTE_T2040880064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t2040880064  : public Attribute_t301694360
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2040880064, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t2040880064_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2040880064 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2040880064_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t2040880064 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t2040880064 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t2040880064 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T2040880064_H
#ifndef DEFAULTEVENTATTRIBUTE_T3185863892_H
#define DEFAULTEVENTATTRIBUTE_T3185863892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3185863892  : public Attribute_t301694360
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3185863892, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t3185863892_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3185863892 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3185863892_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3185863892 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3185863892 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3185863892 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3185863892_H
#ifndef GZIPSTREAM_T3344461274_H
#define GZIPSTREAM_T3344461274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.GZipStream
struct  GZipStream_t3344461274  : public Stream_t2140123728
{
public:
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t3368912189 * ___deflateStream_1;

public:
	inline static int32_t get_offset_of_deflateStream_1() { return static_cast<int32_t>(offsetof(GZipStream_t3344461274, ___deflateStream_1)); }
	inline DeflateStream_t3368912189 * get_deflateStream_1() const { return ___deflateStream_1; }
	inline DeflateStream_t3368912189 ** get_address_of_deflateStream_1() { return &___deflateStream_1; }
	inline void set_deflateStream_1(DeflateStream_t3368912189 * value)
	{
		___deflateStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___deflateStream_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPSTREAM_T3344461274_H
#ifndef AUTHENTICATEDSTREAM_T2293242014_H
#define AUTHENTICATEDSTREAM_T2293242014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t2293242014  : public Stream_t2140123728
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t2140123728 * ___innerStream_1;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t2293242014, ___innerStream_1)); }
	inline Stream_t2140123728 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t2140123728 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t2140123728 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_1), value);
	}

	inline static int32_t get_offset_of_leaveStreamOpen_2() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t2293242014, ___leaveStreamOpen_2)); }
	inline bool get_leaveStreamOpen_2() const { return ___leaveStreamOpen_2; }
	inline bool* get_address_of_leaveStreamOpen_2() { return &___leaveStreamOpen_2; }
	inline void set_leaveStreamOpen_2(bool value)
	{
		___leaveStreamOpen_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATEDSTREAM_T2293242014_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T4256973531_H
#define DEFAULTPROPERTYATTRIBUTE_T4256973531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t4256973531  : public Attribute_t301694360
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t4256973531, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t4256973531_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t4256973531 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t4256973531_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t4256973531 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t4256973531 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t4256973531 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T4256973531_H
#ifndef TIMESPANCONVERTER_T1624124422_H
#define TIMESPANCONVERTER_T1624124422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t1624124422  : public TypeConverter_t1102714454
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T1624124422_H
#ifndef STRINGCONVERTER_T2305072174_H
#define STRINGCONVERTER_T2305072174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t2305072174  : public TypeConverter_t1102714454
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T2305072174_H
#ifndef DEFAULTVALUEATTRIBUTE_T3104833843_H
#define DEFAULTVALUEATTRIBUTE_T3104833843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t3104833843  : public Attribute_t301694360
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t3104833843, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T3104833843_H
#ifndef ENUMCONVERTER_T1266157910_H
#define ENUMCONVERTER_T1266157910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1266157910  : public TypeConverter_t1102714454
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t3071280065 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t1266157910, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t1266157910, ___stdValues_1)); }
	inline StandardValuesCollection_t3071280065 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t3071280065 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t3071280065 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1266157910_H
#ifndef LISTBINDABLEATTRIBUTE_T3603580507_H
#define LISTBINDABLEATTRIBUTE_T3603580507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t3603580507  : public Attribute_t301694360
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t3603580507, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t3603580507_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t3603580507 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t3603580507 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t3603580507 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t3603580507_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t3603580507 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t3603580507 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t3603580507 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t3603580507_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t3603580507 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t3603580507 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t3603580507 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t3603580507_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t3603580507 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t3603580507 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t3603580507 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T3603580507_H
#ifndef COLLECTIONCONVERTER_T1900045398_H
#define COLLECTIONCONVERTER_T1900045398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t1900045398  : public TypeConverter_t1102714454
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T1900045398_H
#ifndef SYSTEMEXCEPTION_T4168264303_H
#define SYSTEMEXCEPTION_T4168264303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t4168264303  : public Exception_t166026107
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T4168264303_H
#ifndef COMPONENTCOLLECTION_T2281387633_H
#define COMPONENTCOLLECTION_T2281387633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t2281387633  : public ReadOnlyCollectionBase_t1397248762
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T2281387633_H
#ifndef VOID_T97265340_H
#define VOID_T97265340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t97265340 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T97265340_H
#ifndef INT32_T1175791592_H
#define INT32_T1175791592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1175791592 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1175791592, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T1175791592_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T1454355449_H
#define MERGABLEPROPERTYATTRIBUTE_T1454355449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t1454355449  : public Attribute_t301694360
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1454355449, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t1454355449_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t1454355449 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t1454355449 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t1454355449 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1454355449_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t1454355449 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t1454355449 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t1454355449 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1454355449_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t1454355449 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t1454355449 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t1454355449 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1454355449_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t1454355449 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t1454355449 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t1454355449 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T1454355449_H
#ifndef NULLABLECONVERTER_T3373227628_H
#define NULLABLECONVERTER_T3373227628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t3373227628  : public TypeConverter_t1102714454
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t1102714454 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t3373227628, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t3373227628, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t3373227628, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t1102714454 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t1102714454 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t1102714454 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T3373227628_H
#ifndef PROPERTYCHANGEDEVENTARGS_T3444840163_H
#define PROPERTYCHANGEDEVENTARGS_T3444840163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t3444840163  : public EventArgs_t3333764384
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t3444840163, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T3444840163_H
#ifndef EDITORATTRIBUTE_T3851382892_H
#define EDITORATTRIBUTE_T3851382892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t3851382892  : public Attribute_t301694360
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t3851382892, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t3851382892, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T3851382892_H
#ifndef READONLYATTRIBUTE_T1291449068_H
#define READONLYATTRIBUTE_T1291449068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1291449068  : public Attribute_t301694360
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1291449068, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t1291449068_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t1291449068 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t1291449068 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t1291449068 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1291449068_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t1291449068 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t1291449068 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t1291449068 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1291449068_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t1291449068 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t1291449068 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t1291449068 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1291449068_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t1291449068 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t1291449068 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t1291449068 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1291449068_H
#ifndef GUIDCONVERTER_T1362336688_H
#define GUIDCONVERTER_T1362336688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1362336688  : public TypeConverter_t1102714454
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1362336688_H
#ifndef REFERENCECONVERTER_T442906170_H
#define REFERENCECONVERTER_T442906170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t442906170  : public TypeConverter_t1102714454
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t442906170, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T442906170_H
#ifndef GCHANDLE_T2738148759_H
#define GCHANDLE_T2738148759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t2738148759 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t2738148759, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T2738148759_H
#ifndef EXPANDABLEOBJECTCONVERTER_T648434210_H
#define EXPANDABLEOBJECTCONVERTER_T648434210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t648434210  : public TypeConverter_t1102714454
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T648434210_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COMPONENT_T315878165_H
#define COMPONENT_T315878165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t315878165  : public MarshalByRefObject_t880972202
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t3364698794 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t315878165, ___event_handlers_1)); }
	inline EventHandlerList_t3364698794 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t3364698794 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t3364698794 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t315878165, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t315878165, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T315878165_H
#ifndef PROPERTYDESCRIPTOR_T1994766035_H
#define PROPERTYDESCRIPTOR_T1994766035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t1994766035  : public MemberDescriptor_t2624545998
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T1994766035_H
#ifndef SELECTMODE_T3062601626_H
#define SELECTMODE_T3062601626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SelectMode
struct  SelectMode_t3062601626 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectMode_t3062601626, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTMODE_T3062601626_H
#ifndef PROTOCOLTYPE_T3905753336_H
#define PROTOCOLTYPE_T3905753336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t3905753336 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtocolType_t3905753336, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTOCOLTYPE_T3905753336_H
#ifndef SOCKETOPERATION_T1784895527_H
#define SOCKETOPERATION_T1784895527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SocketOperation
struct  SocketOperation_t1784895527 
{
public:
	// System.Int32 System.Net.Sockets.Socket/SocketOperation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketOperation_t1784895527, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETOPERATION_T1784895527_H
#ifndef EXTERNALEXCEPTION_T2294823540_H
#define EXTERNALEXCEPTION_T2294823540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t2294823540  : public SystemException_t4168264303
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T2294823540_H
#ifndef SOCKETFLAGS_T3273100752_H
#define SOCKETFLAGS_T3273100752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t3273100752 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketFlags_t3273100752, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETFLAGS_T3273100752_H
#ifndef SOCKETTYPE_T2959400137_H
#define SOCKETTYPE_T2959400137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2959400137 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketType_t2959400137, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETTYPE_T2959400137_H
#ifndef FILEACCESS_T3884619235_H
#define FILEACCESS_T3884619235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t3884619235 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t3884619235, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T3884619235_H
#ifndef COLLECTIONCHANGEACTION_T242718276_H
#define COLLECTIONCHANGEACTION_T242718276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t242718276 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t242718276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEACTION_T242718276_H
#ifndef COMPONENTCONVERTER_T1260968859_H
#define COMPONENTCONVERTER_T1260968859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t1260968859  : public ReferenceConverter_t442906170
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T1260968859_H
#ifndef ADDRESSFAMILY_T3854608786_H
#define ADDRESSFAMILY_T3854608786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t3854608786 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t3854608786, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_T3854608786_H
#ifndef DECIMALCONVERTER_T1390137621_H
#define DECIMALCONVERTER_T1390137621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t1390137621  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T1390137621_H
#ifndef ARGUMENTEXCEPTION_T3621997599_H
#define ARGUMENTEXCEPTION_T3621997599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3621997599  : public SystemException_t4168264303
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3621997599, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3621997599_H
#ifndef TRACELEVEL_T2589472082_H
#define TRACELEVEL_T2589472082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceLevel
struct  TraceLevel_t2589472082 
{
public:
	// System.Int32 System.Diagnostics.TraceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TraceLevel_t2589472082, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACELEVEL_T2589472082_H
#ifndef SSLPOLICYERRORS_T2195110773_H
#define SSLPOLICYERRORS_T2195110773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2195110773 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2195110773, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLPOLICYERRORS_T2195110773_H
#ifndef SBYTECONVERTER_T3737151575_H
#define SBYTECONVERTER_T3737151575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t3737151575  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T3737151575_H
#ifndef SINGLECONVERTER_T1417543671_H
#define SINGLECONVERTER_T1417543671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t1417543671  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T1417543671_H
#ifndef DOUBLECONVERTER_T1694655334_H
#define DOUBLECONVERTER_T1694655334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t1694655334  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T1694655334_H
#ifndef SSLSTREAM_T3789043458_H
#define SSLSTREAM_T3789043458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t3789043458  : public AuthenticatedStream_t2293242014
{
public:
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t1992502468 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t2177389735 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t4020417944 * ___selection_callback_5;

public:
	inline static int32_t get_offset_of_ssl_stream_3() { return static_cast<int32_t>(offsetof(SslStream_t3789043458, ___ssl_stream_3)); }
	inline SslStreamBase_t1992502468 * get_ssl_stream_3() const { return ___ssl_stream_3; }
	inline SslStreamBase_t1992502468 ** get_address_of_ssl_stream_3() { return &___ssl_stream_3; }
	inline void set_ssl_stream_3(SslStreamBase_t1992502468 * value)
	{
		___ssl_stream_3 = value;
		Il2CppCodeGenWriteBarrier((&___ssl_stream_3), value);
	}

	inline static int32_t get_offset_of_validation_callback_4() { return static_cast<int32_t>(offsetof(SslStream_t3789043458, ___validation_callback_4)); }
	inline RemoteCertificateValidationCallback_t2177389735 * get_validation_callback_4() const { return ___validation_callback_4; }
	inline RemoteCertificateValidationCallback_t2177389735 ** get_address_of_validation_callback_4() { return &___validation_callback_4; }
	inline void set_validation_callback_4(RemoteCertificateValidationCallback_t2177389735 * value)
	{
		___validation_callback_4 = value;
		Il2CppCodeGenWriteBarrier((&___validation_callback_4), value);
	}

	inline static int32_t get_offset_of_selection_callback_5() { return static_cast<int32_t>(offsetof(SslStream_t3789043458, ___selection_callback_5)); }
	inline LocalCertificateSelectionCallback_t4020417944 * get_selection_callback_5() const { return ___selection_callback_5; }
	inline LocalCertificateSelectionCallback_t4020417944 ** get_address_of_selection_callback_5() { return &___selection_callback_5; }
	inline void set_selection_callback_5(LocalCertificateSelectionCallback_t4020417944 * value)
	{
		___selection_callback_5 = value;
		Il2CppCodeGenWriteBarrier((&___selection_callback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAM_T3789043458_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3661654040_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3661654040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3661654040 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3661654040, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3661654040_H
#ifndef DELEGATE_T4015944365_H
#define DELEGATE_T4015944365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t4015944365  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1041011760 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t4015944365, ___data_8)); }
	inline DelegateData_t1041011760 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1041011760 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1041011760 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T4015944365_H
#ifndef UINT16CONVERTER_T1224024233_H
#define UINT16CONVERTER_T1224024233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t1224024233  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T1224024233_H
#ifndef UINT32CONVERTER_T738086638_H
#define UINT32CONVERTER_T738086638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t738086638  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T738086638_H
#ifndef UINT64CONVERTER_T2438865358_H
#define UINT64CONVERTER_T2438865358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t2438865358  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T2438865358_H
#ifndef REFRESHPROPERTIES_T227442767_H
#define REFRESHPROPERTIES_T227442767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t227442767 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t227442767, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIES_T227442767_H
#ifndef COMPRESSIONMODE_T2741598500_H
#define COMPRESSIONMODE_T2741598500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.CompressionMode
struct  CompressionMode_t2741598500 
{
public:
	// System.Int32 System.IO.Compression.CompressionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionMode_t2741598500, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONMODE_T2741598500_H
#ifndef EDITORBROWSABLESTATE_T2466114925_H
#define EDITORBROWSABLESTATE_T2466114925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t2466114925 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t2466114925, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T2466114925_H
#ifndef LISTSORTDIRECTION_T1771077199_H
#define LISTSORTDIRECTION_T1771077199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t1771077199 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t1771077199, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDIRECTION_T1771077199_H
#ifndef INT64CONVERTER_T412478668_H
#define INT64CONVERTER_T412478668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t412478668  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T412478668_H
#ifndef INT32CONVERTER_T4029312160_H
#define INT32CONVERTER_T4029312160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t4029312160  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T4029312160_H
#ifndef INT16CONVERTER_T3554798118_H
#define INT16CONVERTER_T3554798118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t3554798118  : public BaseNumberConverter_t1165719209
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T3554798118_H
#ifndef AUTHENTICATIONLEVEL_T431016147_H
#define AUTHENTICATIONLEVEL_T431016147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t431016147 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t431016147, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONLEVEL_T431016147_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T3385696956_H
#define REFLECTIONPROPERTYDESCRIPTOR_T3385696956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t3385696956  : public PropertyDescriptor_t1994766035
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_6;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3385696956, ____member_4)); }
	inline PropertyInfo_t * get__member_4() const { return ____member_4; }
	inline PropertyInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(PropertyInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3385696956, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t3385696956, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((&____propertyType_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROPERTYDESCRIPTOR_T3385696956_H
#ifndef EDITORBROWSABLEATTRIBUTE_T453753501_H
#define EDITORBROWSABLEATTRIBUTE_T453753501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t453753501  : public Attribute_t301694360
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t453753501, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T453753501_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T1546575609_H
#define INVALIDENUMARGUMENTEXCEPTION_T1546575609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t1546575609  : public ArgumentException_t3621997599
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T1546575609_H
#ifndef MULTICASTDELEGATE_T2400541826_H
#define MULTICASTDELEGATE_T2400541826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2400541826  : public Delegate_t4015944365
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2400541826 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2400541826 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2400541826, ___prev_9)); }
	inline MulticastDelegate_t2400541826 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2400541826 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2400541826 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2400541826, ___kpm_next_10)); }
	inline MulticastDelegate_t2400541826 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2400541826 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2400541826 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2400541826_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3728394066_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3728394066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t3728394066  : public Attribute_t301694360
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3728394066, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t3728394066_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t3728394066 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t3728394066 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t3728394066 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t3728394066 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3728394066_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t3728394066 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t3728394066 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t3728394066 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3728394066_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t3728394066 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t3728394066 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t3728394066 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3728394066_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t3728394066 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t3728394066 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t3728394066 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3728394066_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t3728394066 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t3728394066 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t3728394066 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3728394066_H
#ifndef WIN32EXCEPTION_T661683275_H
#define WIN32EXCEPTION_T661683275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t661683275  : public ExternalException_t2294823540
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::native_error_code
	int32_t ___native_error_code_11;

public:
	inline static int32_t get_offset_of_native_error_code_11() { return static_cast<int32_t>(offsetof(Win32Exception_t661683275, ___native_error_code_11)); }
	inline int32_t get_native_error_code_11() const { return ___native_error_code_11; }
	inline int32_t* get_address_of_native_error_code_11() { return &___native_error_code_11; }
	inline void set_native_error_code_11(int32_t value)
	{
		___native_error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T661683275_H
#ifndef SOCKETASYNCRESULT_T1812324036_H
#define SOCKETASYNCRESULT_T1812324036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SocketAsyncResult
struct  SocketAsyncResult_t1812324036  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::Sock
	Socket_t3176573211 * ___Sock_0;
	// System.IntPtr System.Net.Sockets.Socket/SocketAsyncResult::handle
	IntPtr_t ___handle_1;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::state
	RuntimeObject * ___state_2;
	// System.AsyncCallback System.Net.Sockets.Socket/SocketAsyncResult::callback
	AsyncCallback_t2696712479 * ___callback_3;
	// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::waithandle
	WaitHandle_t3425466655 * ___waithandle_4;
	// System.Exception System.Net.Sockets.Socket/SocketAsyncResult::delayedException
	Exception_t166026107 * ___delayedException_5;
	// System.Net.EndPoint System.Net.Sockets.Socket/SocketAsyncResult::EndPoint
	EndPoint_t3178271735 * ___EndPoint_6;
	// System.Byte[] System.Net.Sockets.Socket/SocketAsyncResult::Buffer
	ByteU5BU5D_t855963486* ___Buffer_7;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Offset
	int32_t ___Offset_8;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Size
	int32_t ___Size_9;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.Socket/SocketAsyncResult::SockFlags
	int32_t ___SockFlags_10;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::AcceptSocket
	Socket_t3176573211 * ___AcceptSocket_11;
	// System.Net.IPAddress[] System.Net.Sockets.Socket/SocketAsyncResult::Addresses
	IPAddressU5BU5D_t2406213980* ___Addresses_12;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Port
	int32_t ___Port_13;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.Socket/SocketAsyncResult::Buffers
	RuntimeObject* ___Buffers_14;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_15;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::acc_socket
	Socket_t3176573211 * ___acc_socket_16;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::total
	int32_t ___total_17;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed_sync
	bool ___completed_sync_18;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::completed
	bool ___completed_19;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::blocking
	bool ___blocking_20;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::error
	int32_t ___error_21;
	// System.Net.Sockets.Socket/SocketOperation System.Net.Sockets.Socket/SocketAsyncResult::operation
	int32_t ___operation_22;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::ares
	RuntimeObject * ___ares_23;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::EndCalled
	int32_t ___EndCalled_24;

public:
	inline static int32_t get_offset_of_Sock_0() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___Sock_0)); }
	inline Socket_t3176573211 * get_Sock_0() const { return ___Sock_0; }
	inline Socket_t3176573211 ** get_address_of_Sock_0() { return &___Sock_0; }
	inline void set_Sock_0(Socket_t3176573211 * value)
	{
		___Sock_0 = value;
		Il2CppCodeGenWriteBarrier((&___Sock_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___handle_1)); }
	inline IntPtr_t get_handle_1() const { return ___handle_1; }
	inline IntPtr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(IntPtr_t value)
	{
		___handle_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___state_2)); }
	inline RuntimeObject * get_state_2() const { return ___state_2; }
	inline RuntimeObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RuntimeObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((&___state_2), value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___callback_3)); }
	inline AsyncCallback_t2696712479 * get_callback_3() const { return ___callback_3; }
	inline AsyncCallback_t2696712479 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(AsyncCallback_t2696712479 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___callback_3), value);
	}

	inline static int32_t get_offset_of_waithandle_4() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___waithandle_4)); }
	inline WaitHandle_t3425466655 * get_waithandle_4() const { return ___waithandle_4; }
	inline WaitHandle_t3425466655 ** get_address_of_waithandle_4() { return &___waithandle_4; }
	inline void set_waithandle_4(WaitHandle_t3425466655 * value)
	{
		___waithandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___waithandle_4), value);
	}

	inline static int32_t get_offset_of_delayedException_5() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___delayedException_5)); }
	inline Exception_t166026107 * get_delayedException_5() const { return ___delayedException_5; }
	inline Exception_t166026107 ** get_address_of_delayedException_5() { return &___delayedException_5; }
	inline void set_delayedException_5(Exception_t166026107 * value)
	{
		___delayedException_5 = value;
		Il2CppCodeGenWriteBarrier((&___delayedException_5), value);
	}

	inline static int32_t get_offset_of_EndPoint_6() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___EndPoint_6)); }
	inline EndPoint_t3178271735 * get_EndPoint_6() const { return ___EndPoint_6; }
	inline EndPoint_t3178271735 ** get_address_of_EndPoint_6() { return &___EndPoint_6; }
	inline void set_EndPoint_6(EndPoint_t3178271735 * value)
	{
		___EndPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___EndPoint_6), value);
	}

	inline static int32_t get_offset_of_Buffer_7() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___Buffer_7)); }
	inline ByteU5BU5D_t855963486* get_Buffer_7() const { return ___Buffer_7; }
	inline ByteU5BU5D_t855963486** get_address_of_Buffer_7() { return &___Buffer_7; }
	inline void set_Buffer_7(ByteU5BU5D_t855963486* value)
	{
		___Buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_7), value);
	}

	inline static int32_t get_offset_of_Offset_8() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___Offset_8)); }
	inline int32_t get_Offset_8() const { return ___Offset_8; }
	inline int32_t* get_address_of_Offset_8() { return &___Offset_8; }
	inline void set_Offset_8(int32_t value)
	{
		___Offset_8 = value;
	}

	inline static int32_t get_offset_of_Size_9() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___Size_9)); }
	inline int32_t get_Size_9() const { return ___Size_9; }
	inline int32_t* get_address_of_Size_9() { return &___Size_9; }
	inline void set_Size_9(int32_t value)
	{
		___Size_9 = value;
	}

	inline static int32_t get_offset_of_SockFlags_10() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___SockFlags_10)); }
	inline int32_t get_SockFlags_10() const { return ___SockFlags_10; }
	inline int32_t* get_address_of_SockFlags_10() { return &___SockFlags_10; }
	inline void set_SockFlags_10(int32_t value)
	{
		___SockFlags_10 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_11() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___AcceptSocket_11)); }
	inline Socket_t3176573211 * get_AcceptSocket_11() const { return ___AcceptSocket_11; }
	inline Socket_t3176573211 ** get_address_of_AcceptSocket_11() { return &___AcceptSocket_11; }
	inline void set_AcceptSocket_11(Socket_t3176573211 * value)
	{
		___AcceptSocket_11 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptSocket_11), value);
	}

	inline static int32_t get_offset_of_Addresses_12() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___Addresses_12)); }
	inline IPAddressU5BU5D_t2406213980* get_Addresses_12() const { return ___Addresses_12; }
	inline IPAddressU5BU5D_t2406213980** get_address_of_Addresses_12() { return &___Addresses_12; }
	inline void set_Addresses_12(IPAddressU5BU5D_t2406213980* value)
	{
		___Addresses_12 = value;
		Il2CppCodeGenWriteBarrier((&___Addresses_12), value);
	}

	inline static int32_t get_offset_of_Port_13() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___Port_13)); }
	inline int32_t get_Port_13() const { return ___Port_13; }
	inline int32_t* get_address_of_Port_13() { return &___Port_13; }
	inline void set_Port_13(int32_t value)
	{
		___Port_13 = value;
	}

	inline static int32_t get_offset_of_Buffers_14() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___Buffers_14)); }
	inline RuntimeObject* get_Buffers_14() const { return ___Buffers_14; }
	inline RuntimeObject** get_address_of_Buffers_14() { return &___Buffers_14; }
	inline void set_Buffers_14(RuntimeObject* value)
	{
		___Buffers_14 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_14), value);
	}

	inline static int32_t get_offset_of_ReuseSocket_15() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___ReuseSocket_15)); }
	inline bool get_ReuseSocket_15() const { return ___ReuseSocket_15; }
	inline bool* get_address_of_ReuseSocket_15() { return &___ReuseSocket_15; }
	inline void set_ReuseSocket_15(bool value)
	{
		___ReuseSocket_15 = value;
	}

	inline static int32_t get_offset_of_acc_socket_16() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___acc_socket_16)); }
	inline Socket_t3176573211 * get_acc_socket_16() const { return ___acc_socket_16; }
	inline Socket_t3176573211 ** get_address_of_acc_socket_16() { return &___acc_socket_16; }
	inline void set_acc_socket_16(Socket_t3176573211 * value)
	{
		___acc_socket_16 = value;
		Il2CppCodeGenWriteBarrier((&___acc_socket_16), value);
	}

	inline static int32_t get_offset_of_total_17() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___total_17)); }
	inline int32_t get_total_17() const { return ___total_17; }
	inline int32_t* get_address_of_total_17() { return &___total_17; }
	inline void set_total_17(int32_t value)
	{
		___total_17 = value;
	}

	inline static int32_t get_offset_of_completed_sync_18() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___completed_sync_18)); }
	inline bool get_completed_sync_18() const { return ___completed_sync_18; }
	inline bool* get_address_of_completed_sync_18() { return &___completed_sync_18; }
	inline void set_completed_sync_18(bool value)
	{
		___completed_sync_18 = value;
	}

	inline static int32_t get_offset_of_completed_19() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___completed_19)); }
	inline bool get_completed_19() const { return ___completed_19; }
	inline bool* get_address_of_completed_19() { return &___completed_19; }
	inline void set_completed_19(bool value)
	{
		___completed_19 = value;
	}

	inline static int32_t get_offset_of_blocking_20() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___blocking_20)); }
	inline bool get_blocking_20() const { return ___blocking_20; }
	inline bool* get_address_of_blocking_20() { return &___blocking_20; }
	inline void set_blocking_20(bool value)
	{
		___blocking_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_operation_22() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___operation_22)); }
	inline int32_t get_operation_22() const { return ___operation_22; }
	inline int32_t* get_address_of_operation_22() { return &___operation_22; }
	inline void set_operation_22(int32_t value)
	{
		___operation_22 = value;
	}

	inline static int32_t get_offset_of_ares_23() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___ares_23)); }
	inline RuntimeObject * get_ares_23() const { return ___ares_23; }
	inline RuntimeObject ** get_address_of_ares_23() { return &___ares_23; }
	inline void set_ares_23(RuntimeObject * value)
	{
		___ares_23 = value;
		Il2CppCodeGenWriteBarrier((&___ares_23), value);
	}

	inline static int32_t get_offset_of_EndCalled_24() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t1812324036, ___EndCalled_24)); }
	inline int32_t get_EndCalled_24() const { return ___EndCalled_24; }
	inline int32_t* get_address_of_EndCalled_24() { return &___EndCalled_24; }
	inline void set_EndCalled_24(int32_t value)
	{
		___EndCalled_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t1812324036_marshaled_pinvoke
{
	Socket_t3176573211 * ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	WaitHandle_t3425466655 * ___waithandle_4;
	Exception_t166026107 * ___delayedException_5;
	EndPoint_t3178271735 * ___EndPoint_6;
	uint8_t* ___Buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Socket_t3176573211 * ___AcceptSocket_11;
	IPAddressU5BU5D_t2406213980* ___Addresses_12;
	int32_t ___Port_13;
	RuntimeObject* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Socket_t3176573211 * ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___blocking_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
};
// Native definition for COM marshalling of System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t1812324036_marshaled_com
{
	Socket_t3176573211 * ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	WaitHandle_t3425466655 * ___waithandle_4;
	Exception_t166026107 * ___delayedException_5;
	EndPoint_t3178271735 * ___EndPoint_6;
	uint8_t* ___Buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Socket_t3176573211 * ___AcceptSocket_11;
	IPAddressU5BU5D_t2406213980* ___Addresses_12;
	int32_t ___Port_13;
	RuntimeObject* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Socket_t3176573211 * ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___blocking_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
};
#endif // SOCKETASYNCRESULT_T1812324036_H
#ifndef DEFLATESTREAM_T3368912189_H
#define DEFLATESTREAM_T3368912189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream
struct  DeflateStream_t3368912189  : public Stream_t2140123728
{
public:
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t2140123728 * ___base_stream_1;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_2;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_3;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_4;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t4147997574 * ___feeder_5;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t ___z_stream_6;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t855963486* ___io_buffer_7;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t2738148759  ___data_8;

public:
	inline static int32_t get_offset_of_base_stream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t3368912189, ___base_stream_1)); }
	inline Stream_t2140123728 * get_base_stream_1() const { return ___base_stream_1; }
	inline Stream_t2140123728 ** get_address_of_base_stream_1() { return &___base_stream_1; }
	inline void set_base_stream_1(Stream_t2140123728 * value)
	{
		___base_stream_1 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_1), value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(DeflateStream_t3368912189, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_leaveOpen_3() { return static_cast<int32_t>(offsetof(DeflateStream_t3368912189, ___leaveOpen_3)); }
	inline bool get_leaveOpen_3() const { return ___leaveOpen_3; }
	inline bool* get_address_of_leaveOpen_3() { return &___leaveOpen_3; }
	inline void set_leaveOpen_3(bool value)
	{
		___leaveOpen_3 = value;
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(DeflateStream_t3368912189, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_feeder_5() { return static_cast<int32_t>(offsetof(DeflateStream_t3368912189, ___feeder_5)); }
	inline UnmanagedReadOrWrite_t4147997574 * get_feeder_5() const { return ___feeder_5; }
	inline UnmanagedReadOrWrite_t4147997574 ** get_address_of_feeder_5() { return &___feeder_5; }
	inline void set_feeder_5(UnmanagedReadOrWrite_t4147997574 * value)
	{
		___feeder_5 = value;
		Il2CppCodeGenWriteBarrier((&___feeder_5), value);
	}

	inline static int32_t get_offset_of_z_stream_6() { return static_cast<int32_t>(offsetof(DeflateStream_t3368912189, ___z_stream_6)); }
	inline IntPtr_t get_z_stream_6() const { return ___z_stream_6; }
	inline IntPtr_t* get_address_of_z_stream_6() { return &___z_stream_6; }
	inline void set_z_stream_6(IntPtr_t value)
	{
		___z_stream_6 = value;
	}

	inline static int32_t get_offset_of_io_buffer_7() { return static_cast<int32_t>(offsetof(DeflateStream_t3368912189, ___io_buffer_7)); }
	inline ByteU5BU5D_t855963486* get_io_buffer_7() const { return ___io_buffer_7; }
	inline ByteU5BU5D_t855963486** get_address_of_io_buffer_7() { return &___io_buffer_7; }
	inline void set_io_buffer_7(ByteU5BU5D_t855963486* value)
	{
		___io_buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___io_buffer_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(DeflateStream_t3368912189, ___data_8)); }
	inline GCHandle_t2738148759  get_data_8() const { return ___data_8; }
	inline GCHandle_t2738148759 * get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(GCHandle_t2738148759  value)
	{
		___data_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAM_T3368912189_H
#ifndef SOCKET_T3176573211_H
#define SOCKET_T3176573211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t3176573211  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t1415418741 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t1415418741 * ___writeQ_1;
	// System.Boolean System.Net.Sockets.Socket::islistening
	bool ___islistening_2;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort_3;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort_4;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_7;
	// System.IntPtr System.Net.Sockets.Socket::socket
	IntPtr_t ___socket_8;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family_9;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type_10;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type_11;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking_12;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t3825782586 * ___blocking_thread_13;
	// System.Boolean System.Net.Sockets.Socket::isbound
	bool ___isbound_14;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count_16;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected_17;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed_18;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed_19;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t3178271735 * ___seed_endpoint_20;

public:
	inline static int32_t get_offset_of_readQ_0() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___readQ_0)); }
	inline Queue_t1415418741 * get_readQ_0() const { return ___readQ_0; }
	inline Queue_t1415418741 ** get_address_of_readQ_0() { return &___readQ_0; }
	inline void set_readQ_0(Queue_t1415418741 * value)
	{
		___readQ_0 = value;
		Il2CppCodeGenWriteBarrier((&___readQ_0), value);
	}

	inline static int32_t get_offset_of_writeQ_1() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___writeQ_1)); }
	inline Queue_t1415418741 * get_writeQ_1() const { return ___writeQ_1; }
	inline Queue_t1415418741 ** get_address_of_writeQ_1() { return &___writeQ_1; }
	inline void set_writeQ_1(Queue_t1415418741 * value)
	{
		___writeQ_1 = value;
		Il2CppCodeGenWriteBarrier((&___writeQ_1), value);
	}

	inline static int32_t get_offset_of_islistening_2() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___islistening_2)); }
	inline bool get_islistening_2() const { return ___islistening_2; }
	inline bool* get_address_of_islistening_2() { return &___islistening_2; }
	inline void set_islistening_2(bool value)
	{
		___islistening_2 = value;
	}

	inline static int32_t get_offset_of_MinListenPort_3() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___MinListenPort_3)); }
	inline int32_t get_MinListenPort_3() const { return ___MinListenPort_3; }
	inline int32_t* get_address_of_MinListenPort_3() { return &___MinListenPort_3; }
	inline void set_MinListenPort_3(int32_t value)
	{
		___MinListenPort_3 = value;
	}

	inline static int32_t get_offset_of_MaxListenPort_4() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___MaxListenPort_4)); }
	inline int32_t get_MaxListenPort_4() const { return ___MaxListenPort_4; }
	inline int32_t* get_address_of_MaxListenPort_4() { return &___MaxListenPort_4; }
	inline void set_MaxListenPort_4(int32_t value)
	{
		___MaxListenPort_4 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_7() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___linger_timeout_7)); }
	inline int32_t get_linger_timeout_7() const { return ___linger_timeout_7; }
	inline int32_t* get_address_of_linger_timeout_7() { return &___linger_timeout_7; }
	inline void set_linger_timeout_7(int32_t value)
	{
		___linger_timeout_7 = value;
	}

	inline static int32_t get_offset_of_socket_8() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___socket_8)); }
	inline IntPtr_t get_socket_8() const { return ___socket_8; }
	inline IntPtr_t* get_address_of_socket_8() { return &___socket_8; }
	inline void set_socket_8(IntPtr_t value)
	{
		___socket_8 = value;
	}

	inline static int32_t get_offset_of_address_family_9() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___address_family_9)); }
	inline int32_t get_address_family_9() const { return ___address_family_9; }
	inline int32_t* get_address_of_address_family_9() { return &___address_family_9; }
	inline void set_address_family_9(int32_t value)
	{
		___address_family_9 = value;
	}

	inline static int32_t get_offset_of_socket_type_10() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___socket_type_10)); }
	inline int32_t get_socket_type_10() const { return ___socket_type_10; }
	inline int32_t* get_address_of_socket_type_10() { return &___socket_type_10; }
	inline void set_socket_type_10(int32_t value)
	{
		___socket_type_10 = value;
	}

	inline static int32_t get_offset_of_protocol_type_11() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___protocol_type_11)); }
	inline int32_t get_protocol_type_11() const { return ___protocol_type_11; }
	inline int32_t* get_address_of_protocol_type_11() { return &___protocol_type_11; }
	inline void set_protocol_type_11(int32_t value)
	{
		___protocol_type_11 = value;
	}

	inline static int32_t get_offset_of_blocking_12() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___blocking_12)); }
	inline bool get_blocking_12() const { return ___blocking_12; }
	inline bool* get_address_of_blocking_12() { return &___blocking_12; }
	inline void set_blocking_12(bool value)
	{
		___blocking_12 = value;
	}

	inline static int32_t get_offset_of_blocking_thread_13() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___blocking_thread_13)); }
	inline Thread_t3825782586 * get_blocking_thread_13() const { return ___blocking_thread_13; }
	inline Thread_t3825782586 ** get_address_of_blocking_thread_13() { return &___blocking_thread_13; }
	inline void set_blocking_thread_13(Thread_t3825782586 * value)
	{
		___blocking_thread_13 = value;
		Il2CppCodeGenWriteBarrier((&___blocking_thread_13), value);
	}

	inline static int32_t get_offset_of_isbound_14() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___isbound_14)); }
	inline bool get_isbound_14() const { return ___isbound_14; }
	inline bool* get_address_of_isbound_14() { return &___isbound_14; }
	inline void set_isbound_14(bool value)
	{
		___isbound_14 = value;
	}

	inline static int32_t get_offset_of_max_bind_count_16() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___max_bind_count_16)); }
	inline int32_t get_max_bind_count_16() const { return ___max_bind_count_16; }
	inline int32_t* get_address_of_max_bind_count_16() { return &___max_bind_count_16; }
	inline void set_max_bind_count_16(int32_t value)
	{
		___max_bind_count_16 = value;
	}

	inline static int32_t get_offset_of_connected_17() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___connected_17)); }
	inline bool get_connected_17() const { return ___connected_17; }
	inline bool* get_address_of_connected_17() { return &___connected_17; }
	inline void set_connected_17(bool value)
	{
		___connected_17 = value;
	}

	inline static int32_t get_offset_of_closed_18() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___closed_18)); }
	inline bool get_closed_18() const { return ___closed_18; }
	inline bool* get_address_of_closed_18() { return &___closed_18; }
	inline void set_closed_18(bool value)
	{
		___closed_18 = value;
	}

	inline static int32_t get_offset_of_disposed_19() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___disposed_19)); }
	inline bool get_disposed_19() const { return ___disposed_19; }
	inline bool* get_address_of_disposed_19() { return &___disposed_19; }
	inline void set_disposed_19(bool value)
	{
		___disposed_19 = value;
	}

	inline static int32_t get_offset_of_seed_endpoint_20() { return static_cast<int32_t>(offsetof(Socket_t3176573211, ___seed_endpoint_20)); }
	inline EndPoint_t3178271735 * get_seed_endpoint_20() const { return ___seed_endpoint_20; }
	inline EndPoint_t3178271735 ** get_address_of_seed_endpoint_20() { return &___seed_endpoint_20; }
	inline void set_seed_endpoint_20(EndPoint_t3178271735 * value)
	{
		___seed_endpoint_20 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_20), value);
	}
};

struct Socket_t3176573211_StaticFields
{
public:
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported_5;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported_6;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count_15;
	// System.Reflection.MethodInfo System.Net.Sockets.Socket::check_socket_policy
	MethodInfo_t * ___check_socket_policy_21;

public:
	inline static int32_t get_offset_of_ipv4Supported_5() { return static_cast<int32_t>(offsetof(Socket_t3176573211_StaticFields, ___ipv4Supported_5)); }
	inline int32_t get_ipv4Supported_5() const { return ___ipv4Supported_5; }
	inline int32_t* get_address_of_ipv4Supported_5() { return &___ipv4Supported_5; }
	inline void set_ipv4Supported_5(int32_t value)
	{
		___ipv4Supported_5 = value;
	}

	inline static int32_t get_offset_of_ipv6Supported_6() { return static_cast<int32_t>(offsetof(Socket_t3176573211_StaticFields, ___ipv6Supported_6)); }
	inline int32_t get_ipv6Supported_6() const { return ___ipv6Supported_6; }
	inline int32_t* get_address_of_ipv6Supported_6() { return &___ipv6Supported_6; }
	inline void set_ipv6Supported_6(int32_t value)
	{
		___ipv6Supported_6 = value;
	}

	inline static int32_t get_offset_of_current_bind_count_15() { return static_cast<int32_t>(offsetof(Socket_t3176573211_StaticFields, ___current_bind_count_15)); }
	inline int32_t get_current_bind_count_15() const { return ___current_bind_count_15; }
	inline int32_t* get_address_of_current_bind_count_15() { return &___current_bind_count_15; }
	inline void set_current_bind_count_15(int32_t value)
	{
		___current_bind_count_15 = value;
	}

	inline static int32_t get_offset_of_check_socket_policy_21() { return static_cast<int32_t>(offsetof(Socket_t3176573211_StaticFields, ___check_socket_policy_21)); }
	inline MethodInfo_t * get_check_socket_policy_21() const { return ___check_socket_policy_21; }
	inline MethodInfo_t ** get_address_of_check_socket_policy_21() { return &___check_socket_policy_21; }
	inline void set_check_socket_policy_21(MethodInfo_t * value)
	{
		___check_socket_policy_21 = value;
		Il2CppCodeGenWriteBarrier((&___check_socket_policy_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T3176573211_H
#ifndef NETWORKSTREAM_T3946482681_H
#define NETWORKSTREAM_T3946482681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t3946482681  : public Stream_t2140123728
{
public:
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_1;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t3176573211 * ___socket_2;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_4;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(NetworkStream_t3946482681, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(NetworkStream_t3946482681, ___socket_2)); }
	inline Socket_t3176573211 * get_socket_2() const { return ___socket_2; }
	inline Socket_t3176573211 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t3176573211 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((&___socket_2), value);
	}

	inline static int32_t get_offset_of_owns_socket_3() { return static_cast<int32_t>(offsetof(NetworkStream_t3946482681, ___owns_socket_3)); }
	inline bool get_owns_socket_3() const { return ___owns_socket_3; }
	inline bool* get_address_of_owns_socket_3() { return &___owns_socket_3; }
	inline void set_owns_socket_3(bool value)
	{
		___owns_socket_3 = value;
	}

	inline static int32_t get_offset_of_readable_4() { return static_cast<int32_t>(offsetof(NetworkStream_t3946482681, ___readable_4)); }
	inline bool get_readable_4() const { return ___readable_4; }
	inline bool* get_address_of_readable_4() { return &___readable_4; }
	inline void set_readable_4(bool value)
	{
		___readable_4 = value;
	}

	inline static int32_t get_offset_of_writeable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t3946482681, ___writeable_5)); }
	inline bool get_writeable_5() const { return ___writeable_5; }
	inline bool* get_address_of_writeable_5() { return &___writeable_5; }
	inline void set_writeable_5(bool value)
	{
		___writeable_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(NetworkStream_t3946482681, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T3946482681_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T2207704718_H
#define REFRESHPROPERTIESATTRIBUTE_T2207704718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t2207704718  : public Attribute_t301694360
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2207704718, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t2207704718_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t2207704718 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t2207704718 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t2207704718 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2207704718_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t2207704718 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t2207704718 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t2207704718 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2207704718_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t2207704718 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t2207704718 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t2207704718 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t2207704718_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t2207704718 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t2207704718 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t2207704718 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T2207704718_H
#ifndef COLLECTIONCHANGEEVENTARGS_T396747188_H
#define COLLECTIONCHANGEEVENTARGS_T396747188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t396747188  : public EventArgs_t3333764384
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t396747188, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t396747188, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T396747188_H
#ifndef UNMANAGEDREADORWRITE_T4147997574_H
#define UNMANAGEDREADORWRITE_T4147997574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct  UnmanagedReadOrWrite_t4147997574  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDREADORWRITE_T4147997574_H
#ifndef READMETHOD_T833835386_H
#define READMETHOD_T833835386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/ReadMethod
struct  ReadMethod_t833835386  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READMETHOD_T833835386_H
#ifndef WRITEMETHOD_T2881286690_H
#define WRITEMETHOD_T2881286690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/WriteMethod
struct  WriteMethod_t2881286690  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEMETHOD_T2881286690_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (CollectionChangeEventArgs_t396747188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1000[2] = 
{
	CollectionChangeEventArgs_t396747188::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t396747188::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (CollectionConverter_t1900045398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (Component_t315878165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1002[3] = 
{
	Component_t315878165::get_offset_of_event_handlers_1(),
	Component_t315878165::get_offset_of_mySite_2(),
	Component_t315878165::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (ComponentCollection_t2281387633), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (ComponentConverter_t1260968859), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (CultureInfoConverter_t2766545361), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1005[1] = 
{
	CultureInfoConverter_t2766545361::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (CultureInfoComparer_t1331892432), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (DateTimeConverter_t3457795813), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (DecimalConverter_t1390137621), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (DefaultEventAttribute_t3185863892), -1, sizeof(DefaultEventAttribute_t3185863892_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1009[2] = 
{
	DefaultEventAttribute_t3185863892::get_offset_of_eventName_0(),
	DefaultEventAttribute_t3185863892_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (DefaultPropertyAttribute_t4256973531), -1, sizeof(DefaultPropertyAttribute_t4256973531_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1010[2] = 
{
	DefaultPropertyAttribute_t4256973531::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t4256973531_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (DefaultValueAttribute_t3104833843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1011[1] = 
{
	DefaultValueAttribute_t3104833843::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (DescriptionAttribute_t2040880064), -1, sizeof(DescriptionAttribute_t2040880064_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1012[2] = 
{
	DescriptionAttribute_t2040880064::get_offset_of_desc_0(),
	DescriptionAttribute_t2040880064_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (DesignOnlyAttribute_t2800626246), -1, sizeof(DesignOnlyAttribute_t2800626246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1013[4] = 
{
	DesignOnlyAttribute_t2800626246::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t2800626246_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t2800626246_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t2800626246_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (DesignTimeVisibleAttribute_t591411902), -1, sizeof(DesignTimeVisibleAttribute_t591411902_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1014[4] = 
{
	DesignTimeVisibleAttribute_t591411902::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t591411902_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t591411902_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t591411902_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (DesignerAttribute_t3702747175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1015[2] = 
{
	DesignerAttribute_t3702747175::get_offset_of_name_0(),
	DesignerAttribute_t3702747175::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (DesignerCategoryAttribute_t1293239234), -1, sizeof(DesignerCategoryAttribute_t1293239234_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1016[5] = 
{
	DesignerCategoryAttribute_t1293239234::get_offset_of_category_0(),
	DesignerCategoryAttribute_t1293239234_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t1293239234_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t1293239234_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t1293239234_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (DesignerSerializationVisibility_t3661654040)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1017[4] = 
{
	DesignerSerializationVisibility_t3661654040::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (DesignerSerializationVisibilityAttribute_t3728394066), -1, sizeof(DesignerSerializationVisibilityAttribute_t3728394066_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1018[5] = 
{
	DesignerSerializationVisibilityAttribute_t3728394066::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t3728394066_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t3728394066_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t3728394066_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t3728394066_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (DoubleConverter_t1694655334), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (EditorAttribute_t3851382892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1020[2] = 
{
	EditorAttribute_t3851382892::get_offset_of_name_0(),
	EditorAttribute_t3851382892::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (EditorBrowsableAttribute_t453753501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1021[1] = 
{
	EditorBrowsableAttribute_t453753501::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (EditorBrowsableState_t2466114925)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1022[4] = 
{
	EditorBrowsableState_t2466114925::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (EnumConverter_t1266157910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1023[2] = 
{
	EnumConverter_t1266157910::get_offset_of_type_0(),
	EnumConverter_t1266157910::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (EnumComparer_t929522421), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (ListEntry_t4154937100), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1025[3] = 
{
	ListEntry_t4154937100::get_offset_of_key_0(),
	ListEntry_t4154937100::get_offset_of_value_1(),
	ListEntry_t4154937100::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (EventHandlerList_t3364698794), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1026[2] = 
{
	EventHandlerList_t3364698794::get_offset_of_entries_0(),
	EventHandlerList_t3364698794::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (ExpandableObjectConverter_t648434210), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (GuidConverter_t1362336688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (Int16Converter_t3554798118), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (Int32Converter_t4029312160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (Int64Converter_t412478668), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (InvalidEnumArgumentException_t1546575609), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (ListBindableAttribute_t3603580507), -1, sizeof(ListBindableAttribute_t3603580507_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1042[4] = 
{
	ListBindableAttribute_t3603580507_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t3603580507_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t3603580507_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t3603580507::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (ListSortDirection_t1771077199)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1043[3] = 
{
	ListSortDirection_t1771077199::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (MarshalByValueComponent_t3290817515), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1044[3] = 
{
	MarshalByValueComponent_t3290817515::get_offset_of_eventList_0(),
	MarshalByValueComponent_t3290817515::get_offset_of_mySite_1(),
	MarshalByValueComponent_t3290817515::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (MemberDescriptor_t2624545998), -1, sizeof(MemberDescriptor_t2624545998_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1045[4] = 
{
	MemberDescriptor_t2624545998::get_offset_of_name_0(),
	MemberDescriptor_t2624545998::get_offset_of_attrs_1(),
	MemberDescriptor_t2624545998::get_offset_of_attrCollection_2(),
	MemberDescriptor_t2624545998_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (MemberDescriptorComparer_t1420179906), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (MergablePropertyAttribute_t1454355449), -1, sizeof(MergablePropertyAttribute_t1454355449_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1047[4] = 
{
	MergablePropertyAttribute_t1454355449::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t1454355449_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t1454355449_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t1454355449_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (NullableConverter_t3373227628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1048[3] = 
{
	NullableConverter_t3373227628::get_offset_of_nullableType_0(),
	NullableConverter_t3373227628::get_offset_of_underlyingType_1(),
	NullableConverter_t3373227628::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (PropertyChangedEventArgs_t3444840163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1049[1] = 
{
	PropertyChangedEventArgs_t3444840163::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (PropertyDescriptor_t1994766035), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (PropertyDescriptorCollection_t488558822), -1, sizeof(PropertyDescriptorCollection_t488558822_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1051[3] = 
{
	PropertyDescriptorCollection_t488558822_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t488558822::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t488558822::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (ReadOnlyAttribute_t1291449068), -1, sizeof(ReadOnlyAttribute_t1291449068_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1052[4] = 
{
	ReadOnlyAttribute_t1291449068::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t1291449068_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t1291449068_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t1291449068_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (ReferenceConverter_t442906170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1053[1] = 
{
	ReferenceConverter_t442906170::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (ReflectionPropertyDescriptor_t3385696956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1054[3] = 
{
	ReflectionPropertyDescriptor_t3385696956::get_offset_of__member_4(),
	ReflectionPropertyDescriptor_t3385696956::get_offset_of__componentType_5(),
	ReflectionPropertyDescriptor_t3385696956::get_offset_of__propertyType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (RefreshProperties_t227442767)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1055[4] = 
{
	RefreshProperties_t227442767::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (RefreshPropertiesAttribute_t2207704718), -1, sizeof(RefreshPropertiesAttribute_t2207704718_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1056[4] = 
{
	RefreshPropertiesAttribute_t2207704718::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t2207704718_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t2207704718_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t2207704718_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (SByteConverter_t3737151575), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (SingleConverter_t1417543671), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (StringConverter_t2305072174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (TimeSpanConverter_t1624124422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (ToolboxItemAttribute_t3844884318), -1, sizeof(ToolboxItemAttribute_t3844884318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1061[4] = 
{
	ToolboxItemAttribute_t3844884318_StaticFields::get_offset_of_Default_0(),
	ToolboxItemAttribute_t3844884318_StaticFields::get_offset_of_None_1(),
	ToolboxItemAttribute_t3844884318::get_offset_of_itemType_2(),
	ToolboxItemAttribute_t3844884318::get_offset_of_itemTypeName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (TypeConverter_t1102714454), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (StandardValuesCollection_t3071280065), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1063[1] = 
{
	StandardValuesCollection_t3071280065::get_offset_of_values_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (TypeConverterAttribute_t3422343704), -1, sizeof(TypeConverterAttribute_t3422343704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1064[2] = 
{
	TypeConverterAttribute_t3422343704_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t3422343704::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (TypeDescriptionProvider_t4165141297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (TypeDescriptor_t2420543769), -1, sizeof(TypeDescriptor_t2420543769_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1066[9] = 
{
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_creatingDefaultConverters_0(),
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_defaultConverters_1(),
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_componentTable_2(),
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_typeTable_3(),
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_typeDescriptionProvidersLock_4(),
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_typeDescriptionProviders_5(),
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_componentDescriptionProvidersLock_6(),
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_componentDescriptionProviders_7(),
	TypeDescriptor_t2420543769_StaticFields::get_offset_of_onDispose_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (Info_t4240555528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1067[2] = 
{
	Info_t4240555528::get_offset_of__infoType_0(),
	Info_t4240555528::get_offset_of__attributes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (ComponentInfo_t3766629128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1068[2] = 
{
	ComponentInfo_t3766629128::get_offset_of__component_2(),
	ComponentInfo_t3766629128::get_offset_of__properties_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (TypeInfo_t889122298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1069[1] = 
{
	TypeInfo_t889122298::get_offset_of__properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (UInt16Converter_t1224024233), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (UInt32Converter_t738086638), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (UInt64Converter_t2438865358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (WeakObjectWrapper_t1356999333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1073[2] = 
{
	WeakObjectWrapper_t1356999333::get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0(),
	WeakObjectWrapper_t1356999333::get_offset_of_U3CWeakU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (WeakObjectWrapperComparer_t3829954178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (Win32Exception_t661683275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1075[1] = 
{
	Win32Exception_t661683275::get_offset_of_native_error_code_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (Debug_t3429274548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (Stopwatch_t3034135424), -1, sizeof(Stopwatch_t3034135424_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1077[5] = 
{
	Stopwatch_t3034135424_StaticFields::get_offset_of_Frequency_0(),
	Stopwatch_t3034135424_StaticFields::get_offset_of_IsHighResolution_1(),
	Stopwatch_t3034135424::get_offset_of_elapsed_2(),
	Stopwatch_t3034135424::get_offset_of_started_3(),
	Stopwatch_t3034135424::get_offset_of_is_running_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (Switch_t3380380090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1078[7] = 
{
	Switch_t3380380090::get_offset_of_name_0(),
	Switch_t3380380090::get_offset_of_description_1(),
	Switch_t3380380090::get_offset_of_switchSetting_2(),
	Switch_t3380380090::get_offset_of_value_3(),
	Switch_t3380380090::get_offset_of_defaultSwitchValue_4(),
	Switch_t3380380090::get_offset_of_initialized_5(),
	Switch_t3380380090::get_offset_of_attributes_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (TraceLevel_t2589472082)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1079[6] = 
{
	TraceLevel_t2589472082::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (CompressionMode_t2741598500)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1080[3] = 
{
	CompressionMode_t2741598500::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (DeflateStream_t3368912189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1081[8] = 
{
	DeflateStream_t3368912189::get_offset_of_base_stream_1(),
	DeflateStream_t3368912189::get_offset_of_mode_2(),
	DeflateStream_t3368912189::get_offset_of_leaveOpen_3(),
	DeflateStream_t3368912189::get_offset_of_disposed_4(),
	DeflateStream_t3368912189::get_offset_of_feeder_5(),
	DeflateStream_t3368912189::get_offset_of_z_stream_6(),
	DeflateStream_t3368912189::get_offset_of_io_buffer_7(),
	DeflateStream_t3368912189::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (UnmanagedReadOrWrite_t4147997574), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (ReadMethod_t833835386), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (WriteMethod_t2881286690), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (GZipStream_t3344461274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1085[1] = 
{
	GZipStream_t3344461274::get_offset_of_deflateStream_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (AuthenticatedStream_t2293242014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1086[2] = 
{
	AuthenticatedStream_t2293242014::get_offset_of_innerStream_1(),
	AuthenticatedStream_t2293242014::get_offset_of_leaveStreamOpen_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (AuthenticationLevel_t431016147)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1087[4] = 
{
	AuthenticationLevel_t431016147::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (SslPolicyErrors_t2195110773)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1088[5] = 
{
	SslPolicyErrors_t2195110773::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (SslStream_t3789043458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1089[3] = 
{
	SslStream_t3789043458::get_offset_of_ssl_stream_3(),
	SslStream_t3789043458::get_offset_of_validation_callback_4(),
	SslStream_t3789043458::get_offset_of_selection_callback_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t762123931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1090[2] = 
{
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t762123931::get_offset_of_clientCertificates_0(),
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t762123931::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (AddressFamily_t3854608786)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1091[32] = 
{
	AddressFamily_t3854608786::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (LingerOption_t3640734382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1092[2] = 
{
	LingerOption_t3640734382::get_offset_of_enabled_0(),
	LingerOption_t3640734382::get_offset_of_seconds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (MulticastOption_t3467962985), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (NetworkStream_t3946482681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1094[6] = 
{
	NetworkStream_t3946482681::get_offset_of_access_1(),
	NetworkStream_t3946482681::get_offset_of_socket_2(),
	NetworkStream_t3946482681::get_offset_of_owns_socket_3(),
	NetworkStream_t3946482681::get_offset_of_readable_4(),
	NetworkStream_t3946482681::get_offset_of_writeable_5(),
	NetworkStream_t3946482681::get_offset_of_disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (ProtocolType_t3905753336)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1095[26] = 
{
	ProtocolType_t3905753336::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (SelectMode_t3062601626)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1096[4] = 
{
	SelectMode_t3062601626::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (Socket_t3176573211), -1, sizeof(Socket_t3176573211_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1097[22] = 
{
	Socket_t3176573211::get_offset_of_readQ_0(),
	Socket_t3176573211::get_offset_of_writeQ_1(),
	Socket_t3176573211::get_offset_of_islistening_2(),
	Socket_t3176573211::get_offset_of_MinListenPort_3(),
	Socket_t3176573211::get_offset_of_MaxListenPort_4(),
	Socket_t3176573211_StaticFields::get_offset_of_ipv4Supported_5(),
	Socket_t3176573211_StaticFields::get_offset_of_ipv6Supported_6(),
	Socket_t3176573211::get_offset_of_linger_timeout_7(),
	Socket_t3176573211::get_offset_of_socket_8(),
	Socket_t3176573211::get_offset_of_address_family_9(),
	Socket_t3176573211::get_offset_of_socket_type_10(),
	Socket_t3176573211::get_offset_of_protocol_type_11(),
	Socket_t3176573211::get_offset_of_blocking_12(),
	Socket_t3176573211::get_offset_of_blocking_thread_13(),
	Socket_t3176573211::get_offset_of_isbound_14(),
	Socket_t3176573211_StaticFields::get_offset_of_current_bind_count_15(),
	Socket_t3176573211::get_offset_of_max_bind_count_16(),
	Socket_t3176573211::get_offset_of_connected_17(),
	Socket_t3176573211::get_offset_of_closed_18(),
	Socket_t3176573211::get_offset_of_disposed_19(),
	Socket_t3176573211::get_offset_of_seed_endpoint_20(),
	Socket_t3176573211_StaticFields::get_offset_of_check_socket_policy_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (SocketOperation_t1784895527)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1098[15] = 
{
	SocketOperation_t1784895527::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (SocketAsyncResult_t1812324036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1099[25] = 
{
	SocketAsyncResult_t1812324036::get_offset_of_Sock_0(),
	SocketAsyncResult_t1812324036::get_offset_of_handle_1(),
	SocketAsyncResult_t1812324036::get_offset_of_state_2(),
	SocketAsyncResult_t1812324036::get_offset_of_callback_3(),
	SocketAsyncResult_t1812324036::get_offset_of_waithandle_4(),
	SocketAsyncResult_t1812324036::get_offset_of_delayedException_5(),
	SocketAsyncResult_t1812324036::get_offset_of_EndPoint_6(),
	SocketAsyncResult_t1812324036::get_offset_of_Buffer_7(),
	SocketAsyncResult_t1812324036::get_offset_of_Offset_8(),
	SocketAsyncResult_t1812324036::get_offset_of_Size_9(),
	SocketAsyncResult_t1812324036::get_offset_of_SockFlags_10(),
	SocketAsyncResult_t1812324036::get_offset_of_AcceptSocket_11(),
	SocketAsyncResult_t1812324036::get_offset_of_Addresses_12(),
	SocketAsyncResult_t1812324036::get_offset_of_Port_13(),
	SocketAsyncResult_t1812324036::get_offset_of_Buffers_14(),
	SocketAsyncResult_t1812324036::get_offset_of_ReuseSocket_15(),
	SocketAsyncResult_t1812324036::get_offset_of_acc_socket_16(),
	SocketAsyncResult_t1812324036::get_offset_of_total_17(),
	SocketAsyncResult_t1812324036::get_offset_of_completed_sync_18(),
	SocketAsyncResult_t1812324036::get_offset_of_completed_19(),
	SocketAsyncResult_t1812324036::get_offset_of_blocking_20(),
	SocketAsyncResult_t1812324036::get_offset_of_error_21(),
	SocketAsyncResult_t1812324036::get_offset_of_operation_22(),
	SocketAsyncResult_t1812324036::get_offset_of_ares_23(),
	SocketAsyncResult_t1812324036::get_offset_of_EndCalled_24(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
