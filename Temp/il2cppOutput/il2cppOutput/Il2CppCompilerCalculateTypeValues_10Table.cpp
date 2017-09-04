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
struct ArrayList_t643664964;
// System.Collections.Hashtable
struct Hashtable_t3449901320;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t2963945302;
// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct Dictionary_2_t3376460423;
// System.EventHandler
struct EventHandler_t1428298045;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1980382618;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4079186642;
// System.Collections.IComparer
struct IComparer_t132121804;
// System.Collections.ICollection
struct ICollection_t332228771;
// System.Type
struct Type_t;
// System.WeakReference
struct WeakReference_t3861860762;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t3517525882;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t4063821556;
// System.Net.Security.SslStream
struct SslStream_t708166407;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2177312628;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t798779019;
// System.ComponentModel.ISite
struct ISite_t1046013362;
// System.ComponentModel.ListEntry
struct ListEntry_t134436266;
// System.Delegate
struct Delegate_t1993281983;
// System.IntPtr[]
struct IntPtrU5BU5D_t1965776668;
// System.Collections.IDictionary
struct IDictionary_t3710533427;
// System.Char[]
struct CharU5BU5D_t3126673759;
// System.ComponentModel.IComponent
struct IComponent_t1110801738;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2804378102;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t3765642228;
// System.IO.Compression.DeflateStream
struct DeflateStream_t2203633858;
// System.IO.Stream
struct Stream_t632710838;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3462193360;
// System.Void
struct Void_t2784251464;
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t1490895759;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2020503044;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3075698885;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1247082884;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Net.Sockets.Socket
struct Socket_t2982395729;
// System.AsyncCallback
struct AsyncCallback_t739029555;
// System.Threading.WaitHandle
struct WaitHandle_t1699413065;
// System.Exception
struct Exception_t3352569137;
// System.Net.EndPoint
struct EndPoint_t2491867935;
// System.Byte[]
struct ByteU5BU5D_t138760304;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t1719097003;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t112651274;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3411330116;
// System.Collections.Queue
struct Queue_t2982222490;
// System.Threading.Thread
struct Thread_t3250554416;
// System.IAsyncResult
struct IAsyncResult_t840617180;




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
#ifndef TYPEDESCRIPTOR_T2220785819_H
#define TYPEDESCRIPTOR_T2220785819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t2220785819  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t2220785819_StaticFields
{
public:
	// System.Object System.ComponentModel.TypeDescriptor::creatingDefaultConverters
	RuntimeObject * ___creatingDefaultConverters_0;
	// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::defaultConverters
	ArrayList_t643664964 * ___defaultConverters_1;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::componentTable
	Hashtable_t3449901320 * ___componentTable_2;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::typeTable
	Hashtable_t3449901320 * ___typeTable_3;
	// System.Object System.ComponentModel.TypeDescriptor::typeDescriptionProvidersLock
	RuntimeObject * ___typeDescriptionProvidersLock_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::typeDescriptionProviders
	Dictionary_2_t2963945302 * ___typeDescriptionProviders_5;
	// System.Object System.ComponentModel.TypeDescriptor::componentDescriptionProvidersLock
	RuntimeObject * ___componentDescriptionProvidersLock_6;
	// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>> System.ComponentModel.TypeDescriptor::componentDescriptionProviders
	Dictionary_2_t3376460423 * ___componentDescriptionProviders_7;
	// System.EventHandler System.ComponentModel.TypeDescriptor::onDispose
	EventHandler_t1428298045 * ___onDispose_8;

public:
	inline static int32_t get_offset_of_creatingDefaultConverters_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___creatingDefaultConverters_0)); }
	inline RuntimeObject * get_creatingDefaultConverters_0() const { return ___creatingDefaultConverters_0; }
	inline RuntimeObject ** get_address_of_creatingDefaultConverters_0() { return &___creatingDefaultConverters_0; }
	inline void set_creatingDefaultConverters_0(RuntimeObject * value)
	{
		___creatingDefaultConverters_0 = value;
		Il2CppCodeGenWriteBarrier((&___creatingDefaultConverters_0), value);
	}

	inline static int32_t get_offset_of_defaultConverters_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___defaultConverters_1)); }
	inline ArrayList_t643664964 * get_defaultConverters_1() const { return ___defaultConverters_1; }
	inline ArrayList_t643664964 ** get_address_of_defaultConverters_1() { return &___defaultConverters_1; }
	inline void set_defaultConverters_1(ArrayList_t643664964 * value)
	{
		___defaultConverters_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultConverters_1), value);
	}

	inline static int32_t get_offset_of_componentTable_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___componentTable_2)); }
	inline Hashtable_t3449901320 * get_componentTable_2() const { return ___componentTable_2; }
	inline Hashtable_t3449901320 ** get_address_of_componentTable_2() { return &___componentTable_2; }
	inline void set_componentTable_2(Hashtable_t3449901320 * value)
	{
		___componentTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___componentTable_2), value);
	}

	inline static int32_t get_offset_of_typeTable_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___typeTable_3)); }
	inline Hashtable_t3449901320 * get_typeTable_3() const { return ___typeTable_3; }
	inline Hashtable_t3449901320 ** get_address_of_typeTable_3() { return &___typeTable_3; }
	inline void set_typeTable_3(Hashtable_t3449901320 * value)
	{
		___typeTable_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeTable_3), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProvidersLock_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___typeDescriptionProvidersLock_4)); }
	inline RuntimeObject * get_typeDescriptionProvidersLock_4() const { return ___typeDescriptionProvidersLock_4; }
	inline RuntimeObject ** get_address_of_typeDescriptionProvidersLock_4() { return &___typeDescriptionProvidersLock_4; }
	inline void set_typeDescriptionProvidersLock_4(RuntimeObject * value)
	{
		___typeDescriptionProvidersLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProvidersLock_4), value);
	}

	inline static int32_t get_offset_of_typeDescriptionProviders_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___typeDescriptionProviders_5)); }
	inline Dictionary_2_t2963945302 * get_typeDescriptionProviders_5() const { return ___typeDescriptionProviders_5; }
	inline Dictionary_2_t2963945302 ** get_address_of_typeDescriptionProviders_5() { return &___typeDescriptionProviders_5; }
	inline void set_typeDescriptionProviders_5(Dictionary_2_t2963945302 * value)
	{
		___typeDescriptionProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeDescriptionProviders_5), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProvidersLock_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___componentDescriptionProvidersLock_6)); }
	inline RuntimeObject * get_componentDescriptionProvidersLock_6() const { return ___componentDescriptionProvidersLock_6; }
	inline RuntimeObject ** get_address_of_componentDescriptionProvidersLock_6() { return &___componentDescriptionProvidersLock_6; }
	inline void set_componentDescriptionProvidersLock_6(RuntimeObject * value)
	{
		___componentDescriptionProvidersLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProvidersLock_6), value);
	}

	inline static int32_t get_offset_of_componentDescriptionProviders_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___componentDescriptionProviders_7)); }
	inline Dictionary_2_t3376460423 * get_componentDescriptionProviders_7() const { return ___componentDescriptionProviders_7; }
	inline Dictionary_2_t3376460423 ** get_address_of_componentDescriptionProviders_7() { return &___componentDescriptionProviders_7; }
	inline void set_componentDescriptionProviders_7(Dictionary_2_t3376460423 * value)
	{
		___componentDescriptionProviders_7 = value;
		Il2CppCodeGenWriteBarrier((&___componentDescriptionProviders_7), value);
	}

	inline static int32_t get_offset_of_onDispose_8() { return static_cast<int32_t>(offsetof(TypeDescriptor_t2220785819_StaticFields, ___onDispose_8)); }
	inline EventHandler_t1428298045 * get_onDispose_8() const { return ___onDispose_8; }
	inline EventHandler_t1428298045 ** get_address_of_onDispose_8() { return &___onDispose_8; }
	inline void set_onDispose_8(EventHandler_t1428298045 * value)
	{
		___onDispose_8 = value;
		Il2CppCodeGenWriteBarrier((&___onDispose_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T2220785819_H
#ifndef MEMBERDESCRIPTOR_T3300650721_H
#define MEMBERDESCRIPTOR_T3300650721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3300650721  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t1980382618* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t4079186642 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3300650721, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3300650721, ___attrs_1)); }
	inline AttributeU5BU5D_t1980382618* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t1980382618** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t1980382618* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3300650721, ___attrCollection_2)); }
	inline AttributeCollection_t4079186642 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t4079186642 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t4079186642 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3300650721_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3300650721_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T3300650721_H
#ifndef MEMBERDESCRIPTORCOMPARER_T3941108658_H
#define MEMBERDESCRIPTORCOMPARER_T3941108658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t3941108658  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T3941108658_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T2804378102_H
#define PROPERTYDESCRIPTORCOLLECTION_T2804378102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t2804378102  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t643664964 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t2804378102, ___properties_1)); }
	inline ArrayList_t643664964 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t643664964 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t643664964 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t2804378102, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t2804378102_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t2804378102 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t2804378102_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t2804378102 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t2804378102 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t2804378102 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T2804378102_H
#ifndef TYPECONVERTER_T3462193360_H
#define TYPECONVERTER_T3462193360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t3462193360  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T3462193360_H
#ifndef STANDARDVALUESCOLLECTION_T3765642228_H
#define STANDARDVALUESCOLLECTION_T3765642228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_t3765642228  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t3765642228, ___values_0)); }
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
#endif // STANDARDVALUESCOLLECTION_T3765642228_H
#ifndef TYPEDESCRIPTIONPROVIDER_T2592436426_H
#define TYPEDESCRIPTIONPROVIDER_T2592436426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t2592436426  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T2592436426_H
#ifndef INFO_T2848225613_H
#define INFO_T2848225613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Info
struct  Info_t2848225613  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.Info::_infoType
	Type_t * ____infoType_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.Info::_attributes
	AttributeCollection_t4079186642 * ____attributes_1;

public:
	inline static int32_t get_offset_of__infoType_0() { return static_cast<int32_t>(offsetof(Info_t2848225613, ____infoType_0)); }
	inline Type_t * get__infoType_0() const { return ____infoType_0; }
	inline Type_t ** get_address_of__infoType_0() { return &____infoType_0; }
	inline void set__infoType_0(Type_t * value)
	{
		____infoType_0 = value;
		Il2CppCodeGenWriteBarrier((&____infoType_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(Info_t2848225613, ____attributes_1)); }
	inline AttributeCollection_t4079186642 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t4079186642 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t4079186642 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFO_T2848225613_H
#ifndef WEAKOBJECTWRAPPER_T3002415697_H
#define WEAKOBJECTWRAPPER_T3002415697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapper
struct  WeakObjectWrapper_t3002415697  : public RuntimeObject
{
public:
	// System.Int32 System.ComponentModel.WeakObjectWrapper::<TargetHashCode>k__BackingField
	int32_t ___U3CTargetHashCodeU3Ek__BackingField_0;
	// System.WeakReference System.ComponentModel.WeakObjectWrapper::<Weak>k__BackingField
	WeakReference_t3861860762 * ___U3CWeakU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t3002415697, ___U3CTargetHashCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTargetHashCodeU3Ek__BackingField_0() const { return ___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTargetHashCodeU3Ek__BackingField_0() { return &___U3CTargetHashCodeU3Ek__BackingField_0; }
	inline void set_U3CTargetHashCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTargetHashCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CWeakU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WeakObjectWrapper_t3002415697, ___U3CWeakU3Ek__BackingField_1)); }
	inline WeakReference_t3861860762 * get_U3CWeakU3Ek__BackingField_1() const { return ___U3CWeakU3Ek__BackingField_1; }
	inline WeakReference_t3861860762 ** get_address_of_U3CWeakU3Ek__BackingField_1() { return &___U3CWeakU3Ek__BackingField_1; }
	inline void set_U3CWeakU3Ek__BackingField_1(WeakReference_t3861860762 * value)
	{
		___U3CWeakU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWeakU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPER_T3002415697_H
#ifndef DEBUG_T3185956169_H
#define DEBUG_T3185956169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Debug
struct  Debug_t3185956169  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUG_T3185956169_H
#ifndef STOPWATCH_T2356732135_H
#define STOPWATCH_T2356732135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Stopwatch
struct  Stopwatch_t2356732135  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t2356732135, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t2356732135, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t2356732135, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t2356732135_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t2356732135_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t2356732135_StaticFields, ___IsHighResolution_1)); }
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
#endif // STOPWATCH_T2356732135_H
#ifndef SWITCH_T1868745697_H
#define SWITCH_T1868745697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Switch
struct  Switch_t1868745697  : public RuntimeObject
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
	StringDictionary_t3517525882 * ___attributes_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Switch_t1868745697, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Switch_t1868745697, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}

	inline static int32_t get_offset_of_switchSetting_2() { return static_cast<int32_t>(offsetof(Switch_t1868745697, ___switchSetting_2)); }
	inline int32_t get_switchSetting_2() const { return ___switchSetting_2; }
	inline int32_t* get_address_of_switchSetting_2() { return &___switchSetting_2; }
	inline void set_switchSetting_2(int32_t value)
	{
		___switchSetting_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Switch_t1868745697, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((&___value_3), value);
	}

	inline static int32_t get_offset_of_defaultSwitchValue_4() { return static_cast<int32_t>(offsetof(Switch_t1868745697, ___defaultSwitchValue_4)); }
	inline String_t* get_defaultSwitchValue_4() const { return ___defaultSwitchValue_4; }
	inline String_t** get_address_of_defaultSwitchValue_4() { return &___defaultSwitchValue_4; }
	inline void set_defaultSwitchValue_4(String_t* value)
	{
		___defaultSwitchValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSwitchValue_4), value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(Switch_t1868745697, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}

	inline static int32_t get_offset_of_attributes_6() { return static_cast<int32_t>(offsetof(Switch_t1868745697, ___attributes_6)); }
	inline StringDictionary_t3517525882 * get_attributes_6() const { return ___attributes_6; }
	inline StringDictionary_t3517525882 ** get_address_of_attributes_6() { return &___attributes_6; }
	inline void set_attributes_6(StringDictionary_t3517525882 * value)
	{
		___attributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCH_T1868745697_H
#ifndef U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T2461038639_H
#define U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T2461038639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7
struct  U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t2461038639  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7::clientCertificates
	X509CertificateCollection_t4063821556 * ___clientCertificates_0;
	// System.Net.Security.SslStream System.Net.Security.SslStream/<BeginAuthenticateAsClient>c__AnonStorey7::<>f__this
	SslStream_t708166407 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_clientCertificates_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t2461038639, ___clientCertificates_0)); }
	inline X509CertificateCollection_t4063821556 * get_clientCertificates_0() const { return ___clientCertificates_0; }
	inline X509CertificateCollection_t4063821556 ** get_address_of_clientCertificates_0() { return &___clientCertificates_0; }
	inline void set_clientCertificates_0(X509CertificateCollection_t4063821556 * value)
	{
		___clientCertificates_0 = value;
		Il2CppCodeGenWriteBarrier((&___clientCertificates_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t2461038639, ___U3CU3Ef__this_1)); }
	inline SslStream_t708166407 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline SslStream_t708166407 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(SslStream_t708166407 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBEGINAUTHENTICATEASCLIENTU3EC__ANONSTOREY7_T2461038639_H
#ifndef LINGEROPTION_T2241701209_H
#define LINGEROPTION_T2241701209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.LingerOption
struct  LingerOption_t2241701209  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::seconds
	int32_t ___seconds_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LingerOption_t2241701209, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_seconds_1() { return static_cast<int32_t>(offsetof(LingerOption_t2241701209, ___seconds_1)); }
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
#endif // LINGEROPTION_T2241701209_H
#ifndef MULTICASTOPTION_T468351970_H
#define MULTICASTOPTION_T468351970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t468351970  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTOPTION_T468351970_H
#ifndef EVENTARGS_T2275202808_H
#define EVENTARGS_T2275202808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2275202808  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2275202808_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2275202808 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2275202808_StaticFields, ___Empty_0)); }
	inline EventArgs_t2275202808 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2275202808 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2275202808 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2275202808_H
#ifndef MARSHALBYREFOBJECT_T1636946290_H
#define MARSHALBYREFOBJECT_T1636946290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1636946290  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2177312628 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1636946290, ____identity_0)); }
	inline ServerIdentity_t2177312628 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2177312628 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2177312628 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1636946290_H
#ifndef READONLYCOLLECTIONBASE_T2934541198_H
#define READONLYCOLLECTIONBASE_T2934541198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t2934541198  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t643664964 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t2934541198, ___list_0)); }
	inline ArrayList_t643664964 * get_list_0() const { return ___list_0; }
	inline ArrayList_t643664964 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t643664964 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T2934541198_H
#ifndef ATTRIBUTE_T2216352155_H
#define ATTRIBUTE_T2216352155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2216352155  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2216352155_H
#ifndef EQUALITYCOMPARER_1_T3124057593_H
#define EQUALITYCOMPARER_1_T3124057593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
struct  EqualityComparer_1_t3124057593  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3124057593_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t3124057593 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3124057593_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t3124057593 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t3124057593 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t3124057593 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T3124057593_H
#ifndef STREAM_T632710838_H
#define STREAM_T632710838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t632710838  : public RuntimeObject
{
public:

public:
};

struct Stream_t632710838_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t632710838 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t632710838_StaticFields, ___Null_0)); }
	inline Stream_t632710838 * get_Null_0() const { return ___Null_0; }
	inline Stream_t632710838 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t632710838 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T632710838_H
#ifndef VALUETYPE_T706830666_H
#define VALUETYPE_T706830666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t706830666  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t706830666_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t706830666_marshaled_com
{
};
#endif // VALUETYPE_T706830666_H
#ifndef MARSHALBYVALUECOMPONENT_T410256829_H
#define MARSHALBYVALUECOMPONENT_T410256829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t410256829  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t798779019 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t410256829, ___eventList_0)); }
	inline EventHandlerList_t798779019 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t798779019 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t798779019 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t410256829, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t410256829, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T410256829_H
#ifndef EVENTHANDLERLIST_T798779019_H
#define EVENTHANDLERLIST_T798779019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t798779019  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t134436266 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t1993281983 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t798779019, ___entries_0)); }
	inline ListEntry_t134436266 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t134436266 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t134436266 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t798779019, ___null_entry_1)); }
	inline Delegate_t1993281983 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t1993281983 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t1993281983 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T798779019_H
#ifndef EXCEPTION_T3352569137_H
#define EXCEPTION_T3352569137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3352569137  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1965776668* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3352569137 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1965776668* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1965776668** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1965776668* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___inner_exception_1)); }
	inline Exception_t3352569137 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3352569137 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3352569137 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3352569137, ____data_10)); }
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
#endif // EXCEPTION_T3352569137_H
#ifndef ENUMCOMPARER_T4232204217_H
#define ENUMCOMPARER_T4232204217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t4232204217  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T4232204217_H
#ifndef LISTENTRY_T134436266_H
#define LISTENTRY_T134436266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t134436266  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t1993281983 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t134436266 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t134436266, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t134436266, ___value_1)); }
	inline Delegate_t1993281983 * get_value_1() const { return ___value_1; }
	inline Delegate_t1993281983 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t1993281983 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t134436266, ___next_2)); }
	inline ListEntry_t134436266 * get_next_2() const { return ___next_2; }
	inline ListEntry_t134436266 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t134436266 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T134436266_H
#ifndef CULTUREINFOCOMPARER_T1957957120_H
#define CULTUREINFOCOMPARER_T1957957120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t1957957120  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T1957957120_H
#ifndef TOOLBOXITEMATTRIBUTE_T3788989388_H
#define TOOLBOXITEMATTRIBUTE_T3788989388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t3788989388  : public Attribute_t2216352155
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::itemType
	Type_t * ___itemType_2;
	// System.String System.ComponentModel.ToolboxItemAttribute::itemTypeName
	String_t* ___itemTypeName_3;

public:
	inline static int32_t get_offset_of_itemType_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3788989388, ___itemType_2)); }
	inline Type_t * get_itemType_2() const { return ___itemType_2; }
	inline Type_t ** get_address_of_itemType_2() { return &___itemType_2; }
	inline void set_itemType_2(Type_t * value)
	{
		___itemType_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_2), value);
	}

	inline static int32_t get_offset_of_itemTypeName_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3788989388, ___itemTypeName_3)); }
	inline String_t* get_itemTypeName_3() const { return ___itemTypeName_3; }
	inline String_t** get_address_of_itemTypeName_3() { return &___itemTypeName_3; }
	inline void set_itemTypeName_3(String_t* value)
	{
		___itemTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___itemTypeName_3), value);
	}
};

struct ToolboxItemAttribute_t3788989388_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t3788989388 * ___Default_0;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t3788989388 * ___None_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3788989388_StaticFields, ___Default_0)); }
	inline ToolboxItemAttribute_t3788989388 * get_Default_0() const { return ___Default_0; }
	inline ToolboxItemAttribute_t3788989388 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ToolboxItemAttribute_t3788989388 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3788989388_StaticFields, ___None_1)); }
	inline ToolboxItemAttribute_t3788989388 * get_None_1() const { return ___None_1; }
	inline ToolboxItemAttribute_t3788989388 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(ToolboxItemAttribute_t3788989388 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T3788989388_H
#ifndef ENUM_T4213410975_H
#define ENUM_T4213410975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4213410975  : public ValueType_t706830666
{
public:

public:
};

struct Enum_t4213410975_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3126673759* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4213410975_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3126673759* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3126673759** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3126673759* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4213410975_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4213410975_marshaled_com
{
};
#endif // ENUM_T4213410975_H
#ifndef TYPECONVERTERATTRIBUTE_T1193470195_H
#define TYPECONVERTERATTRIBUTE_T1193470195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t1193470195  : public Attribute_t2216352155
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::converter_type
	String_t* ___converter_type_1;

public:
	inline static int32_t get_offset_of_converter_type_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t1193470195, ___converter_type_1)); }
	inline String_t* get_converter_type_1() const { return ___converter_type_1; }
	inline String_t** get_address_of_converter_type_1() { return &___converter_type_1; }
	inline void set_converter_type_1(String_t* value)
	{
		___converter_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___converter_type_1), value);
	}
};

struct TypeConverterAttribute_t1193470195_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t1193470195 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t1193470195_StaticFields, ___Default_0)); }
	inline TypeConverterAttribute_t1193470195 * get_Default_0() const { return ___Default_0; }
	inline TypeConverterAttribute_t1193470195 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(TypeConverterAttribute_t1193470195 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T1193470195_H
#ifndef BASENUMBERCONVERTER_T2747185242_H
#define BASENUMBERCONVERTER_T2747185242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t2747185242  : public TypeConverter_t3462193360
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t2747185242, ___InnerType_0)); }
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
#endif // BASENUMBERCONVERTER_T2747185242_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T4258004414_H
#define DESIGNERCATEGORYATTRIBUTE_T4258004414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t4258004414  : public Attribute_t2216352155
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258004414, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t4258004414_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t4258004414 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t4258004414 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t4258004414 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t4258004414 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258004414_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t4258004414 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t4258004414 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t4258004414 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258004414_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t4258004414 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t4258004414 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t4258004414 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258004414_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t4258004414 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t4258004414 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t4258004414 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t4258004414_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t4258004414 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t4258004414 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t4258004414 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T4258004414_H
#ifndef COMPONENTINFO_T2221854471_H
#define COMPONENTINFO_T2221854471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentInfo
struct  ComponentInfo_t2221854471  : public Info_t2848225613
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.ComponentInfo::_component
	RuntimeObject* ____component_2;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::_properties
	PropertyDescriptorCollection_t2804378102 * ____properties_3;

public:
	inline static int32_t get_offset_of__component_2() { return static_cast<int32_t>(offsetof(ComponentInfo_t2221854471, ____component_2)); }
	inline RuntimeObject* get__component_2() const { return ____component_2; }
	inline RuntimeObject** get_address_of__component_2() { return &____component_2; }
	inline void set__component_2(RuntimeObject* value)
	{
		____component_2 = value;
		Il2CppCodeGenWriteBarrier((&____component_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(ComponentInfo_t2221854471, ____properties_3)); }
	inline PropertyDescriptorCollection_t2804378102 * get__properties_3() const { return ____properties_3; }
	inline PropertyDescriptorCollection_t2804378102 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyDescriptorCollection_t2804378102 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTINFO_T2221854471_H
#ifndef TYPEINFO_T1375294279_H
#define TYPEINFO_T1375294279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeInfo
struct  TypeInfo_t1375294279  : public Info_t2848225613
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::_properties
	PropertyDescriptorCollection_t2804378102 * ____properties_2;

public:
	inline static int32_t get_offset_of__properties_2() { return static_cast<int32_t>(offsetof(TypeInfo_t1375294279, ____properties_2)); }
	inline PropertyDescriptorCollection_t2804378102 * get__properties_2() const { return ____properties_2; }
	inline PropertyDescriptorCollection_t2804378102 ** get_address_of__properties_2() { return &____properties_2; }
	inline void set__properties_2(PropertyDescriptorCollection_t2804378102 * value)
	{
		____properties_2 = value;
		Il2CppCodeGenWriteBarrier((&____properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1375294279_H
#ifndef CULTUREINFOCONVERTER_T506052337_H
#define CULTUREINFOCONVERTER_T506052337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t506052337  : public TypeConverter_t3462193360
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t3765642228 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t506052337, ____standardValues_0)); }
	inline StandardValuesCollection_t3765642228 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t3765642228 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t3765642228 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T506052337_H
#ifndef DATETIMECONVERTER_T1739134960_H
#define DATETIMECONVERTER_T1739134960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t1739134960  : public TypeConverter_t3462193360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T1739134960_H
#ifndef DESIGNERATTRIBUTE_T4011957418_H
#define DESIGNERATTRIBUTE_T4011957418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t4011957418  : public Attribute_t2216352155
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t4011957418, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t4011957418, ___basetypename_1)); }
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
#endif // DESIGNERATTRIBUTE_T4011957418_H
#ifndef WEAKOBJECTWRAPPERCOMPARER_T76871165_H
#define WEAKOBJECTWRAPPERCOMPARER_T76871165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakObjectWrapperComparer
struct  WeakObjectWrapperComparer_t76871165  : public EqualityComparer_1_t3124057593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKOBJECTWRAPPERCOMPARER_T76871165_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T1302162368_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T1302162368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t1302162368  : public Attribute_t2216352155
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1302162368, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t1302162368_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t1302162368 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t1302162368 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t1302162368 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1302162368_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t1302162368 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t1302162368 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t1302162368 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1302162368_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t1302162368 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t1302162368 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t1302162368 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1302162368_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t1302162368 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t1302162368 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t1302162368 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T1302162368_H
#ifndef DESIGNONLYATTRIBUTE_T3503737881_H
#define DESIGNONLYATTRIBUTE_T3503737881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t3503737881  : public Attribute_t2216352155
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3503737881, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t3503737881_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t3503737881 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t3503737881 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t3503737881 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3503737881_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t3503737881 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t3503737881 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t3503737881 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3503737881_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t3503737881 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t3503737881 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t3503737881 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3503737881_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t3503737881 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t3503737881 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t3503737881 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T3503737881_H
#ifndef DESCRIPTIONATTRIBUTE_T3506308938_H
#define DESCRIPTIONATTRIBUTE_T3506308938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t3506308938  : public Attribute_t2216352155
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3506308938, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t3506308938_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t3506308938 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3506308938_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t3506308938 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t3506308938 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t3506308938 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T3506308938_H
#ifndef DEFAULTEVENTATTRIBUTE_T2803615586_H
#define DEFAULTEVENTATTRIBUTE_T2803615586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t2803615586  : public Attribute_t2216352155
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t2803615586, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t2803615586_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t2803615586 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t2803615586_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t2803615586 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t2803615586 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t2803615586 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T2803615586_H
#ifndef GZIPSTREAM_T3213166413_H
#define GZIPSTREAM_T3213166413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.GZipStream
struct  GZipStream_t3213166413  : public Stream_t632710838
{
public:
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::deflateStream
	DeflateStream_t2203633858 * ___deflateStream_1;

public:
	inline static int32_t get_offset_of_deflateStream_1() { return static_cast<int32_t>(offsetof(GZipStream_t3213166413, ___deflateStream_1)); }
	inline DeflateStream_t2203633858 * get_deflateStream_1() const { return ___deflateStream_1; }
	inline DeflateStream_t2203633858 ** get_address_of_deflateStream_1() { return &___deflateStream_1; }
	inline void set_deflateStream_1(DeflateStream_t2203633858 * value)
	{
		___deflateStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___deflateStream_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPSTREAM_T3213166413_H
#ifndef AUTHENTICATEDSTREAM_T1498147405_H
#define AUTHENTICATEDSTREAM_T1498147405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t1498147405  : public Stream_t632710838
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::innerStream
	Stream_t632710838 * ___innerStream_1;
	// System.Boolean System.Net.Security.AuthenticatedStream::leaveStreamOpen
	bool ___leaveStreamOpen_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t1498147405, ___innerStream_1)); }
	inline Stream_t632710838 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t632710838 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t632710838 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_1), value);
	}

	inline static int32_t get_offset_of_leaveStreamOpen_2() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t1498147405, ___leaveStreamOpen_2)); }
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
#endif // AUTHENTICATEDSTREAM_T1498147405_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T2576961089_H
#define DEFAULTPROPERTYATTRIBUTE_T2576961089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t2576961089  : public Attribute_t2216352155
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t2576961089, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t2576961089_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t2576961089 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t2576961089_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t2576961089 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t2576961089 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t2576961089 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T2576961089_H
#ifndef TIMESPANCONVERTER_T800601048_H
#define TIMESPANCONVERTER_T800601048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t800601048  : public TypeConverter_t3462193360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T800601048_H
#ifndef STRINGCONVERTER_T942737524_H
#define STRINGCONVERTER_T942737524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t942737524  : public TypeConverter_t3462193360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T942737524_H
#ifndef DEFAULTVALUEATTRIBUTE_T150707685_H
#define DEFAULTVALUEATTRIBUTE_T150707685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t150707685  : public Attribute_t2216352155
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t150707685, ___DefaultValue_0)); }
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
#endif // DEFAULTVALUEATTRIBUTE_T150707685_H
#ifndef ENUMCONVERTER_T1290080892_H
#define ENUMCONVERTER_T1290080892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1290080892  : public TypeConverter_t3462193360
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t3765642228 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t1290080892, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t1290080892, ___stdValues_1)); }
	inline StandardValuesCollection_t3765642228 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t3765642228 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t3765642228 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1290080892_H
#ifndef LISTBINDABLEATTRIBUTE_T4026399712_H
#define LISTBINDABLEATTRIBUTE_T4026399712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t4026399712  : public Attribute_t2216352155
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t4026399712, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t4026399712_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t4026399712 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t4026399712 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t4026399712 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t4026399712_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t4026399712 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t4026399712 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t4026399712 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t4026399712_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t4026399712 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t4026399712 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t4026399712 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t4026399712_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t4026399712 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t4026399712 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t4026399712 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T4026399712_H
#ifndef COLLECTIONCONVERTER_T508493478_H
#define COLLECTIONCONVERTER_T508493478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t508493478  : public TypeConverter_t3462193360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T508493478_H
#ifndef SYSTEMEXCEPTION_T843837669_H
#define SYSTEMEXCEPTION_T843837669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t843837669  : public Exception_t3352569137
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T843837669_H
#ifndef COMPONENTCOLLECTION_T3472151773_H
#define COMPONENTCOLLECTION_T3472151773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t3472151773  : public ReadOnlyCollectionBase_t2934541198
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T3472151773_H
#ifndef VOID_T2784251464_H
#define VOID_T2784251464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2784251464 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2784251464_H
#ifndef INT32_T3583264704_H
#define INT32_T3583264704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3583264704 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3583264704, ___m_value_2)); }
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
#endif // INT32_T3583264704_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T287716853_H
#define MERGABLEPROPERTYATTRIBUTE_T287716853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t287716853  : public Attribute_t2216352155
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t287716853, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t287716853_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t287716853 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t287716853 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t287716853 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t287716853_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t287716853 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t287716853 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t287716853 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t287716853_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t287716853 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t287716853 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t287716853 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t287716853_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t287716853 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t287716853 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t287716853 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T287716853_H
#ifndef NULLABLECONVERTER_T4101458022_H
#define NULLABLECONVERTER_T4101458022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t4101458022  : public TypeConverter_t3462193360
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t3462193360 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t4101458022, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t4101458022, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t4101458022, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t3462193360 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t3462193360 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t3462193360 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T4101458022_H
#ifndef PROPERTYCHANGEDEVENTARGS_T122797799_H
#define PROPERTYCHANGEDEVENTARGS_T122797799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t122797799  : public EventArgs_t2275202808
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t122797799, ___propertyName_1)); }
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
#endif // PROPERTYCHANGEDEVENTARGS_T122797799_H
#ifndef EDITORATTRIBUTE_T4194294253_H
#define EDITORATTRIBUTE_T4194294253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t4194294253  : public Attribute_t2216352155
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t4194294253, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t4194294253, ___basename_1)); }
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
#endif // EDITORATTRIBUTE_T4194294253_H
#ifndef READONLYATTRIBUTE_T861501680_H
#define READONLYATTRIBUTE_T861501680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t861501680  : public Attribute_t2216352155
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t861501680, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t861501680_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t861501680 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t861501680 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t861501680 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t861501680_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t861501680 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t861501680 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t861501680 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t861501680_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t861501680 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t861501680 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t861501680 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t861501680_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t861501680 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t861501680 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t861501680 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T861501680_H
#ifndef GUIDCONVERTER_T1956645795_H
#define GUIDCONVERTER_T1956645795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1956645795  : public TypeConverter_t3462193360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1956645795_H
#ifndef REFERENCECONVERTER_T3836157070_H
#define REFERENCECONVERTER_T3836157070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t3836157070  : public TypeConverter_t3462193360
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t3836157070, ___reference_type_0)); }
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
#endif // REFERENCECONVERTER_T3836157070_H
#ifndef GCHANDLE_T3328674471_H
#define GCHANDLE_T3328674471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3328674471 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3328674471, ___handle_0)); }
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
#endif // GCHANDLE_T3328674471_H
#ifndef EXPANDABLEOBJECTCONVERTER_T2195891490_H
#define EXPANDABLEOBJECTCONVERTER_T2195891490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t2195891490  : public TypeConverter_t3462193360
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T2195891490_H
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
#ifndef COMPONENT_T1680680043_H
#define COMPONENT_T1680680043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t1680680043  : public MarshalByRefObject_t1636946290
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t798779019 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t1680680043, ___event_handlers_1)); }
	inline EventHandlerList_t798779019 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t798779019 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t798779019 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t1680680043, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t1680680043, ___disposedEvent_3)); }
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
#endif // COMPONENT_T1680680043_H
#ifndef PROPERTYDESCRIPTOR_T1426956804_H
#define PROPERTYDESCRIPTOR_T1426956804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t1426956804  : public MemberDescriptor_t3300650721
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T1426956804_H
#ifndef SELECTMODE_T1616571750_H
#define SELECTMODE_T1616571750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SelectMode
struct  SelectMode_t1616571750 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectMode_t1616571750, ___value___1)); }
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
#endif // SELECTMODE_T1616571750_H
#ifndef PROTOCOLTYPE_T1028959840_H
#define PROTOCOLTYPE_T1028959840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t1028959840 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtocolType_t1028959840, ___value___1)); }
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
#endif // PROTOCOLTYPE_T1028959840_H
#ifndef SOCKETOPERATION_T3982173957_H
#define SOCKETOPERATION_T3982173957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SocketOperation
struct  SocketOperation_t3982173957 
{
public:
	// System.Int32 System.Net.Sockets.Socket/SocketOperation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketOperation_t3982173957, ___value___1)); }
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
#endif // SOCKETOPERATION_T3982173957_H
#ifndef EXTERNALEXCEPTION_T578795478_H
#define EXTERNALEXCEPTION_T578795478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t578795478  : public SystemException_t843837669
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T578795478_H
#ifndef SOCKETFLAGS_T1830165749_H
#define SOCKETFLAGS_T1830165749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t1830165749 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketFlags_t1830165749, ___value___1)); }
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
#endif // SOCKETFLAGS_T1830165749_H
#ifndef SOCKETTYPE_T3707908999_H
#define SOCKETTYPE_T3707908999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t3707908999 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketType_t3707908999, ___value___1)); }
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
#endif // SOCKETTYPE_T3707908999_H
#ifndef FILEACCESS_T2400313157_H
#define FILEACCESS_T2400313157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t2400313157 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t2400313157, ___value___1)); }
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
#endif // FILEACCESS_T2400313157_H
#ifndef COLLECTIONCHANGEACTION_T118777926_H
#define COLLECTIONCHANGEACTION_T118777926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t118777926 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t118777926, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T118777926_H
#ifndef COMPONENTCONVERTER_T4183327743_H
#define COMPONENTCONVERTER_T4183327743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t4183327743  : public ReferenceConverter_t3836157070
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T4183327743_H
#ifndef ADDRESSFAMILY_T3739712175_H
#define ADDRESSFAMILY_T3739712175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t3739712175 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t3739712175, ___value___1)); }
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
#endif // ADDRESSFAMILY_T3739712175_H
#ifndef DECIMALCONVERTER_T2707847096_H
#define DECIMALCONVERTER_T2707847096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t2707847096  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T2707847096_H
#ifndef ARGUMENTEXCEPTION_T578159344_H
#define ARGUMENTEXCEPTION_T578159344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t578159344  : public SystemException_t843837669
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t578159344, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T578159344_H
#ifndef TRACELEVEL_T1458342028_H
#define TRACELEVEL_T1458342028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceLevel
struct  TraceLevel_t1458342028 
{
public:
	// System.Int32 System.Diagnostics.TraceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TraceLevel_t1458342028, ___value___1)); }
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
#endif // TRACELEVEL_T1458342028_H
#ifndef SSLPOLICYERRORS_T3110506643_H
#define SSLPOLICYERRORS_T3110506643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t3110506643 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t3110506643, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T3110506643_H
#ifndef SBYTECONVERTER_T786753009_H
#define SBYTECONVERTER_T786753009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t786753009  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T786753009_H
#ifndef SINGLECONVERTER_T2885369526_H
#define SINGLECONVERTER_T2885369526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t2885369526  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T2885369526_H
#ifndef DOUBLECONVERTER_T3489889127_H
#define DOUBLECONVERTER_T3489889127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t3489889127  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T3489889127_H
#ifndef SSLSTREAM_T708166407_H
#define SSLSTREAM_T708166407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t708166407  : public AuthenticatedStream_t1498147405
{
public:
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t1490895759 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t2020503044 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t3075698885 * ___selection_callback_5;

public:
	inline static int32_t get_offset_of_ssl_stream_3() { return static_cast<int32_t>(offsetof(SslStream_t708166407, ___ssl_stream_3)); }
	inline SslStreamBase_t1490895759 * get_ssl_stream_3() const { return ___ssl_stream_3; }
	inline SslStreamBase_t1490895759 ** get_address_of_ssl_stream_3() { return &___ssl_stream_3; }
	inline void set_ssl_stream_3(SslStreamBase_t1490895759 * value)
	{
		___ssl_stream_3 = value;
		Il2CppCodeGenWriteBarrier((&___ssl_stream_3), value);
	}

	inline static int32_t get_offset_of_validation_callback_4() { return static_cast<int32_t>(offsetof(SslStream_t708166407, ___validation_callback_4)); }
	inline RemoteCertificateValidationCallback_t2020503044 * get_validation_callback_4() const { return ___validation_callback_4; }
	inline RemoteCertificateValidationCallback_t2020503044 ** get_address_of_validation_callback_4() { return &___validation_callback_4; }
	inline void set_validation_callback_4(RemoteCertificateValidationCallback_t2020503044 * value)
	{
		___validation_callback_4 = value;
		Il2CppCodeGenWriteBarrier((&___validation_callback_4), value);
	}

	inline static int32_t get_offset_of_selection_callback_5() { return static_cast<int32_t>(offsetof(SslStream_t708166407, ___selection_callback_5)); }
	inline LocalCertificateSelectionCallback_t3075698885 * get_selection_callback_5() const { return ___selection_callback_5; }
	inline LocalCertificateSelectionCallback_t3075698885 ** get_address_of_selection_callback_5() { return &___selection_callback_5; }
	inline void set_selection_callback_5(LocalCertificateSelectionCallback_t3075698885 * value)
	{
		___selection_callback_5 = value;
		Il2CppCodeGenWriteBarrier((&___selection_callback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAM_T708166407_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3931622439_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3931622439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3931622439 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3931622439, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3931622439_H
#ifndef DELEGATE_T1993281983_H
#define DELEGATE_T1993281983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1993281983  : public RuntimeObject
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
	DelegateData_t1247082884 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1993281983, ___data_8)); }
	inline DelegateData_t1247082884 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1247082884 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1247082884 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1993281983_H
#ifndef UINT16CONVERTER_T1561595878_H
#define UINT16CONVERTER_T1561595878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t1561595878  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T1561595878_H
#ifndef UINT32CONVERTER_T1679720244_H
#define UINT32CONVERTER_T1679720244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t1679720244  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T1679720244_H
#ifndef UINT64CONVERTER_T3280233291_H
#define UINT64CONVERTER_T3280233291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t3280233291  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T3280233291_H
#ifndef REFRESHPROPERTIES_T63490970_H
#define REFRESHPROPERTIES_T63490970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t63490970 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t63490970, ___value___1)); }
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
#endif // REFRESHPROPERTIES_T63490970_H
#ifndef COMPRESSIONMODE_T465788840_H
#define COMPRESSIONMODE_T465788840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.CompressionMode
struct  CompressionMode_t465788840 
{
public:
	// System.Int32 System.IO.Compression.CompressionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionMode_t465788840, ___value___1)); }
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
#endif // COMPRESSIONMODE_T465788840_H
#ifndef EDITORBROWSABLESTATE_T763078063_H
#define EDITORBROWSABLESTATE_T763078063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t763078063 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t763078063, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T763078063_H
#ifndef LISTSORTDIRECTION_T3095866154_H
#define LISTSORTDIRECTION_T3095866154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t3095866154 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t3095866154, ___value___1)); }
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
#endif // LISTSORTDIRECTION_T3095866154_H
#ifndef INT64CONVERTER_T4247321873_H
#define INT64CONVERTER_T4247321873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t4247321873  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T4247321873_H
#ifndef INT32CONVERTER_T1167741574_H
#define INT32CONVERTER_T1167741574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t1167741574  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T1167741574_H
#ifndef INT16CONVERTER_T4283245050_H
#define INT16CONVERTER_T4283245050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t4283245050  : public BaseNumberConverter_t2747185242
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T4283245050_H
#ifndef AUTHENTICATIONLEVEL_T208163812_H
#define AUTHENTICATIONLEVEL_T208163812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t208163812 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t208163812, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_T208163812_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T2701081859_H
#define REFLECTIONPROPERTYDESCRIPTOR_T2701081859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t2701081859  : public PropertyDescriptor_t1426956804
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_6;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2701081859, ____member_4)); }
	inline PropertyInfo_t * get__member_4() const { return ____member_4; }
	inline PropertyInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(PropertyInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2701081859, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2701081859, ____propertyType_6)); }
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
#endif // REFLECTIONPROPERTYDESCRIPTOR_T2701081859_H
#ifndef EDITORBROWSABLEATTRIBUTE_T3387857932_H
#define EDITORBROWSABLEATTRIBUTE_T3387857932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t3387857932  : public Attribute_t2216352155
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t3387857932, ___state_0)); }
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
#endif // EDITORBROWSABLEATTRIBUTE_T3387857932_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T740609292_H
#define INVALIDENUMARGUMENTEXCEPTION_T740609292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t740609292  : public ArgumentException_t578159344
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T740609292_H
#ifndef MULTICASTDELEGATE_T2319271190_H
#define MULTICASTDELEGATE_T2319271190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2319271190  : public Delegate_t1993281983
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2319271190 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2319271190 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2319271190, ___prev_9)); }
	inline MulticastDelegate_t2319271190 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2319271190 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2319271190 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2319271190, ___kpm_next_10)); }
	inline MulticastDelegate_t2319271190 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2319271190 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2319271190 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2319271190_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2904967389_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2904967389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t2904967389  : public Attribute_t2216352155
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2904967389, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t2904967389_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t2904967389 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t2904967389 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t2904967389 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t2904967389 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2904967389_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t2904967389 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t2904967389 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t2904967389 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2904967389_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t2904967389 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t2904967389 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t2904967389 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2904967389_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t2904967389 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t2904967389 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t2904967389 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2904967389_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t2904967389 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t2904967389 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t2904967389 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2904967389_H
#ifndef WIN32EXCEPTION_T895673204_H
#define WIN32EXCEPTION_T895673204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t895673204  : public ExternalException_t578795478
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::native_error_code
	int32_t ___native_error_code_11;

public:
	inline static int32_t get_offset_of_native_error_code_11() { return static_cast<int32_t>(offsetof(Win32Exception_t895673204, ___native_error_code_11)); }
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
#endif // WIN32EXCEPTION_T895673204_H
#ifndef SOCKETASYNCRESULT_T2343460733_H
#define SOCKETASYNCRESULT_T2343460733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/SocketAsyncResult
struct  SocketAsyncResult_t2343460733  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::Sock
	Socket_t2982395729 * ___Sock_0;
	// System.IntPtr System.Net.Sockets.Socket/SocketAsyncResult::handle
	IntPtr_t ___handle_1;
	// System.Object System.Net.Sockets.Socket/SocketAsyncResult::state
	RuntimeObject * ___state_2;
	// System.AsyncCallback System.Net.Sockets.Socket/SocketAsyncResult::callback
	AsyncCallback_t739029555 * ___callback_3;
	// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::waithandle
	WaitHandle_t1699413065 * ___waithandle_4;
	// System.Exception System.Net.Sockets.Socket/SocketAsyncResult::delayedException
	Exception_t3352569137 * ___delayedException_5;
	// System.Net.EndPoint System.Net.Sockets.Socket/SocketAsyncResult::EndPoint
	EndPoint_t2491867935 * ___EndPoint_6;
	// System.Byte[] System.Net.Sockets.Socket/SocketAsyncResult::Buffer
	ByteU5BU5D_t138760304* ___Buffer_7;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Offset
	int32_t ___Offset_8;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Size
	int32_t ___Size_9;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.Socket/SocketAsyncResult::SockFlags
	int32_t ___SockFlags_10;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::AcceptSocket
	Socket_t2982395729 * ___AcceptSocket_11;
	// System.Net.IPAddress[] System.Net.Sockets.Socket/SocketAsyncResult::Addresses
	IPAddressU5BU5D_t1719097003* ___Addresses_12;
	// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::Port
	int32_t ___Port_13;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.Socket/SocketAsyncResult::Buffers
	RuntimeObject* ___Buffers_14;
	// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_15;
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::acc_socket
	Socket_t2982395729 * ___acc_socket_16;
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
	inline static int32_t get_offset_of_Sock_0() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___Sock_0)); }
	inline Socket_t2982395729 * get_Sock_0() const { return ___Sock_0; }
	inline Socket_t2982395729 ** get_address_of_Sock_0() { return &___Sock_0; }
	inline void set_Sock_0(Socket_t2982395729 * value)
	{
		___Sock_0 = value;
		Il2CppCodeGenWriteBarrier((&___Sock_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___handle_1)); }
	inline IntPtr_t get_handle_1() const { return ___handle_1; }
	inline IntPtr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(IntPtr_t value)
	{
		___handle_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___state_2)); }
	inline RuntimeObject * get_state_2() const { return ___state_2; }
	inline RuntimeObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RuntimeObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((&___state_2), value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___callback_3)); }
	inline AsyncCallback_t739029555 * get_callback_3() const { return ___callback_3; }
	inline AsyncCallback_t739029555 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(AsyncCallback_t739029555 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___callback_3), value);
	}

	inline static int32_t get_offset_of_waithandle_4() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___waithandle_4)); }
	inline WaitHandle_t1699413065 * get_waithandle_4() const { return ___waithandle_4; }
	inline WaitHandle_t1699413065 ** get_address_of_waithandle_4() { return &___waithandle_4; }
	inline void set_waithandle_4(WaitHandle_t1699413065 * value)
	{
		___waithandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___waithandle_4), value);
	}

	inline static int32_t get_offset_of_delayedException_5() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___delayedException_5)); }
	inline Exception_t3352569137 * get_delayedException_5() const { return ___delayedException_5; }
	inline Exception_t3352569137 ** get_address_of_delayedException_5() { return &___delayedException_5; }
	inline void set_delayedException_5(Exception_t3352569137 * value)
	{
		___delayedException_5 = value;
		Il2CppCodeGenWriteBarrier((&___delayedException_5), value);
	}

	inline static int32_t get_offset_of_EndPoint_6() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___EndPoint_6)); }
	inline EndPoint_t2491867935 * get_EndPoint_6() const { return ___EndPoint_6; }
	inline EndPoint_t2491867935 ** get_address_of_EndPoint_6() { return &___EndPoint_6; }
	inline void set_EndPoint_6(EndPoint_t2491867935 * value)
	{
		___EndPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___EndPoint_6), value);
	}

	inline static int32_t get_offset_of_Buffer_7() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___Buffer_7)); }
	inline ByteU5BU5D_t138760304* get_Buffer_7() const { return ___Buffer_7; }
	inline ByteU5BU5D_t138760304** get_address_of_Buffer_7() { return &___Buffer_7; }
	inline void set_Buffer_7(ByteU5BU5D_t138760304* value)
	{
		___Buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_7), value);
	}

	inline static int32_t get_offset_of_Offset_8() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___Offset_8)); }
	inline int32_t get_Offset_8() const { return ___Offset_8; }
	inline int32_t* get_address_of_Offset_8() { return &___Offset_8; }
	inline void set_Offset_8(int32_t value)
	{
		___Offset_8 = value;
	}

	inline static int32_t get_offset_of_Size_9() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___Size_9)); }
	inline int32_t get_Size_9() const { return ___Size_9; }
	inline int32_t* get_address_of_Size_9() { return &___Size_9; }
	inline void set_Size_9(int32_t value)
	{
		___Size_9 = value;
	}

	inline static int32_t get_offset_of_SockFlags_10() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___SockFlags_10)); }
	inline int32_t get_SockFlags_10() const { return ___SockFlags_10; }
	inline int32_t* get_address_of_SockFlags_10() { return &___SockFlags_10; }
	inline void set_SockFlags_10(int32_t value)
	{
		___SockFlags_10 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_11() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___AcceptSocket_11)); }
	inline Socket_t2982395729 * get_AcceptSocket_11() const { return ___AcceptSocket_11; }
	inline Socket_t2982395729 ** get_address_of_AcceptSocket_11() { return &___AcceptSocket_11; }
	inline void set_AcceptSocket_11(Socket_t2982395729 * value)
	{
		___AcceptSocket_11 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptSocket_11), value);
	}

	inline static int32_t get_offset_of_Addresses_12() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___Addresses_12)); }
	inline IPAddressU5BU5D_t1719097003* get_Addresses_12() const { return ___Addresses_12; }
	inline IPAddressU5BU5D_t1719097003** get_address_of_Addresses_12() { return &___Addresses_12; }
	inline void set_Addresses_12(IPAddressU5BU5D_t1719097003* value)
	{
		___Addresses_12 = value;
		Il2CppCodeGenWriteBarrier((&___Addresses_12), value);
	}

	inline static int32_t get_offset_of_Port_13() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___Port_13)); }
	inline int32_t get_Port_13() const { return ___Port_13; }
	inline int32_t* get_address_of_Port_13() { return &___Port_13; }
	inline void set_Port_13(int32_t value)
	{
		___Port_13 = value;
	}

	inline static int32_t get_offset_of_Buffers_14() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___Buffers_14)); }
	inline RuntimeObject* get_Buffers_14() const { return ___Buffers_14; }
	inline RuntimeObject** get_address_of_Buffers_14() { return &___Buffers_14; }
	inline void set_Buffers_14(RuntimeObject* value)
	{
		___Buffers_14 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_14), value);
	}

	inline static int32_t get_offset_of_ReuseSocket_15() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___ReuseSocket_15)); }
	inline bool get_ReuseSocket_15() const { return ___ReuseSocket_15; }
	inline bool* get_address_of_ReuseSocket_15() { return &___ReuseSocket_15; }
	inline void set_ReuseSocket_15(bool value)
	{
		___ReuseSocket_15 = value;
	}

	inline static int32_t get_offset_of_acc_socket_16() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___acc_socket_16)); }
	inline Socket_t2982395729 * get_acc_socket_16() const { return ___acc_socket_16; }
	inline Socket_t2982395729 ** get_address_of_acc_socket_16() { return &___acc_socket_16; }
	inline void set_acc_socket_16(Socket_t2982395729 * value)
	{
		___acc_socket_16 = value;
		Il2CppCodeGenWriteBarrier((&___acc_socket_16), value);
	}

	inline static int32_t get_offset_of_total_17() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___total_17)); }
	inline int32_t get_total_17() const { return ___total_17; }
	inline int32_t* get_address_of_total_17() { return &___total_17; }
	inline void set_total_17(int32_t value)
	{
		___total_17 = value;
	}

	inline static int32_t get_offset_of_completed_sync_18() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___completed_sync_18)); }
	inline bool get_completed_sync_18() const { return ___completed_sync_18; }
	inline bool* get_address_of_completed_sync_18() { return &___completed_sync_18; }
	inline void set_completed_sync_18(bool value)
	{
		___completed_sync_18 = value;
	}

	inline static int32_t get_offset_of_completed_19() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___completed_19)); }
	inline bool get_completed_19() const { return ___completed_19; }
	inline bool* get_address_of_completed_19() { return &___completed_19; }
	inline void set_completed_19(bool value)
	{
		___completed_19 = value;
	}

	inline static int32_t get_offset_of_blocking_20() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___blocking_20)); }
	inline bool get_blocking_20() const { return ___blocking_20; }
	inline bool* get_address_of_blocking_20() { return &___blocking_20; }
	inline void set_blocking_20(bool value)
	{
		___blocking_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_operation_22() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___operation_22)); }
	inline int32_t get_operation_22() const { return ___operation_22; }
	inline int32_t* get_address_of_operation_22() { return &___operation_22; }
	inline void set_operation_22(int32_t value)
	{
		___operation_22 = value;
	}

	inline static int32_t get_offset_of_ares_23() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___ares_23)); }
	inline RuntimeObject * get_ares_23() const { return ___ares_23; }
	inline RuntimeObject ** get_address_of_ares_23() { return &___ares_23; }
	inline void set_ares_23(RuntimeObject * value)
	{
		___ares_23 = value;
		Il2CppCodeGenWriteBarrier((&___ares_23), value);
	}

	inline static int32_t get_offset_of_EndCalled_24() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t2343460733, ___EndCalled_24)); }
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
struct SocketAsyncResult_t2343460733_marshaled_pinvoke
{
	Socket_t2982395729 * ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	WaitHandle_t1699413065 * ___waithandle_4;
	Exception_t3352569137 * ___delayedException_5;
	EndPoint_t2491867935 * ___EndPoint_6;
	uint8_t* ___Buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Socket_t2982395729 * ___AcceptSocket_11;
	IPAddressU5BU5D_t1719097003* ___Addresses_12;
	int32_t ___Port_13;
	RuntimeObject* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Socket_t2982395729 * ___acc_socket_16;
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
struct SocketAsyncResult_t2343460733_marshaled_com
{
	Socket_t2982395729 * ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	WaitHandle_t1699413065 * ___waithandle_4;
	Exception_t3352569137 * ___delayedException_5;
	EndPoint_t2491867935 * ___EndPoint_6;
	uint8_t* ___Buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Socket_t2982395729 * ___AcceptSocket_11;
	IPAddressU5BU5D_t1719097003* ___Addresses_12;
	int32_t ___Port_13;
	RuntimeObject* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Socket_t2982395729 * ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___blocking_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
};
#endif // SOCKETASYNCRESULT_T2343460733_H
#ifndef DEFLATESTREAM_T2203633858_H
#define DEFLATESTREAM_T2203633858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream
struct  DeflateStream_t2203633858  : public Stream_t632710838
{
public:
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t632710838 * ___base_stream_1;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_2;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_3;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_4;
	// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite System.IO.Compression.DeflateStream::feeder
	UnmanagedReadOrWrite_t3411330116 * ___feeder_5;
	// System.IntPtr System.IO.Compression.DeflateStream::z_stream
	IntPtr_t ___z_stream_6;
	// System.Byte[] System.IO.Compression.DeflateStream::io_buffer
	ByteU5BU5D_t138760304* ___io_buffer_7;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStream::data
	GCHandle_t3328674471  ___data_8;

public:
	inline static int32_t get_offset_of_base_stream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t2203633858, ___base_stream_1)); }
	inline Stream_t632710838 * get_base_stream_1() const { return ___base_stream_1; }
	inline Stream_t632710838 ** get_address_of_base_stream_1() { return &___base_stream_1; }
	inline void set_base_stream_1(Stream_t632710838 * value)
	{
		___base_stream_1 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_1), value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(DeflateStream_t2203633858, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_leaveOpen_3() { return static_cast<int32_t>(offsetof(DeflateStream_t2203633858, ___leaveOpen_3)); }
	inline bool get_leaveOpen_3() const { return ___leaveOpen_3; }
	inline bool* get_address_of_leaveOpen_3() { return &___leaveOpen_3; }
	inline void set_leaveOpen_3(bool value)
	{
		___leaveOpen_3 = value;
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(DeflateStream_t2203633858, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_feeder_5() { return static_cast<int32_t>(offsetof(DeflateStream_t2203633858, ___feeder_5)); }
	inline UnmanagedReadOrWrite_t3411330116 * get_feeder_5() const { return ___feeder_5; }
	inline UnmanagedReadOrWrite_t3411330116 ** get_address_of_feeder_5() { return &___feeder_5; }
	inline void set_feeder_5(UnmanagedReadOrWrite_t3411330116 * value)
	{
		___feeder_5 = value;
		Il2CppCodeGenWriteBarrier((&___feeder_5), value);
	}

	inline static int32_t get_offset_of_z_stream_6() { return static_cast<int32_t>(offsetof(DeflateStream_t2203633858, ___z_stream_6)); }
	inline IntPtr_t get_z_stream_6() const { return ___z_stream_6; }
	inline IntPtr_t* get_address_of_z_stream_6() { return &___z_stream_6; }
	inline void set_z_stream_6(IntPtr_t value)
	{
		___z_stream_6 = value;
	}

	inline static int32_t get_offset_of_io_buffer_7() { return static_cast<int32_t>(offsetof(DeflateStream_t2203633858, ___io_buffer_7)); }
	inline ByteU5BU5D_t138760304* get_io_buffer_7() const { return ___io_buffer_7; }
	inline ByteU5BU5D_t138760304** get_address_of_io_buffer_7() { return &___io_buffer_7; }
	inline void set_io_buffer_7(ByteU5BU5D_t138760304* value)
	{
		___io_buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___io_buffer_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(DeflateStream_t2203633858, ___data_8)); }
	inline GCHandle_t3328674471  get_data_8() const { return ___data_8; }
	inline GCHandle_t3328674471 * get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(GCHandle_t3328674471  value)
	{
		___data_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAM_T2203633858_H
#ifndef SOCKET_T2982395729_H
#define SOCKET_T2982395729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t2982395729  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t2982222490 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t2982222490 * ___writeQ_1;
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
	Thread_t3250554416 * ___blocking_thread_13;
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
	EndPoint_t2491867935 * ___seed_endpoint_20;

public:
	inline static int32_t get_offset_of_readQ_0() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___readQ_0)); }
	inline Queue_t2982222490 * get_readQ_0() const { return ___readQ_0; }
	inline Queue_t2982222490 ** get_address_of_readQ_0() { return &___readQ_0; }
	inline void set_readQ_0(Queue_t2982222490 * value)
	{
		___readQ_0 = value;
		Il2CppCodeGenWriteBarrier((&___readQ_0), value);
	}

	inline static int32_t get_offset_of_writeQ_1() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___writeQ_1)); }
	inline Queue_t2982222490 * get_writeQ_1() const { return ___writeQ_1; }
	inline Queue_t2982222490 ** get_address_of_writeQ_1() { return &___writeQ_1; }
	inline void set_writeQ_1(Queue_t2982222490 * value)
	{
		___writeQ_1 = value;
		Il2CppCodeGenWriteBarrier((&___writeQ_1), value);
	}

	inline static int32_t get_offset_of_islistening_2() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___islistening_2)); }
	inline bool get_islistening_2() const { return ___islistening_2; }
	inline bool* get_address_of_islistening_2() { return &___islistening_2; }
	inline void set_islistening_2(bool value)
	{
		___islistening_2 = value;
	}

	inline static int32_t get_offset_of_MinListenPort_3() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___MinListenPort_3)); }
	inline int32_t get_MinListenPort_3() const { return ___MinListenPort_3; }
	inline int32_t* get_address_of_MinListenPort_3() { return &___MinListenPort_3; }
	inline void set_MinListenPort_3(int32_t value)
	{
		___MinListenPort_3 = value;
	}

	inline static int32_t get_offset_of_MaxListenPort_4() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___MaxListenPort_4)); }
	inline int32_t get_MaxListenPort_4() const { return ___MaxListenPort_4; }
	inline int32_t* get_address_of_MaxListenPort_4() { return &___MaxListenPort_4; }
	inline void set_MaxListenPort_4(int32_t value)
	{
		___MaxListenPort_4 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_7() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___linger_timeout_7)); }
	inline int32_t get_linger_timeout_7() const { return ___linger_timeout_7; }
	inline int32_t* get_address_of_linger_timeout_7() { return &___linger_timeout_7; }
	inline void set_linger_timeout_7(int32_t value)
	{
		___linger_timeout_7 = value;
	}

	inline static int32_t get_offset_of_socket_8() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___socket_8)); }
	inline IntPtr_t get_socket_8() const { return ___socket_8; }
	inline IntPtr_t* get_address_of_socket_8() { return &___socket_8; }
	inline void set_socket_8(IntPtr_t value)
	{
		___socket_8 = value;
	}

	inline static int32_t get_offset_of_address_family_9() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___address_family_9)); }
	inline int32_t get_address_family_9() const { return ___address_family_9; }
	inline int32_t* get_address_of_address_family_9() { return &___address_family_9; }
	inline void set_address_family_9(int32_t value)
	{
		___address_family_9 = value;
	}

	inline static int32_t get_offset_of_socket_type_10() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___socket_type_10)); }
	inline int32_t get_socket_type_10() const { return ___socket_type_10; }
	inline int32_t* get_address_of_socket_type_10() { return &___socket_type_10; }
	inline void set_socket_type_10(int32_t value)
	{
		___socket_type_10 = value;
	}

	inline static int32_t get_offset_of_protocol_type_11() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___protocol_type_11)); }
	inline int32_t get_protocol_type_11() const { return ___protocol_type_11; }
	inline int32_t* get_address_of_protocol_type_11() { return &___protocol_type_11; }
	inline void set_protocol_type_11(int32_t value)
	{
		___protocol_type_11 = value;
	}

	inline static int32_t get_offset_of_blocking_12() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___blocking_12)); }
	inline bool get_blocking_12() const { return ___blocking_12; }
	inline bool* get_address_of_blocking_12() { return &___blocking_12; }
	inline void set_blocking_12(bool value)
	{
		___blocking_12 = value;
	}

	inline static int32_t get_offset_of_blocking_thread_13() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___blocking_thread_13)); }
	inline Thread_t3250554416 * get_blocking_thread_13() const { return ___blocking_thread_13; }
	inline Thread_t3250554416 ** get_address_of_blocking_thread_13() { return &___blocking_thread_13; }
	inline void set_blocking_thread_13(Thread_t3250554416 * value)
	{
		___blocking_thread_13 = value;
		Il2CppCodeGenWriteBarrier((&___blocking_thread_13), value);
	}

	inline static int32_t get_offset_of_isbound_14() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___isbound_14)); }
	inline bool get_isbound_14() const { return ___isbound_14; }
	inline bool* get_address_of_isbound_14() { return &___isbound_14; }
	inline void set_isbound_14(bool value)
	{
		___isbound_14 = value;
	}

	inline static int32_t get_offset_of_max_bind_count_16() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___max_bind_count_16)); }
	inline int32_t get_max_bind_count_16() const { return ___max_bind_count_16; }
	inline int32_t* get_address_of_max_bind_count_16() { return &___max_bind_count_16; }
	inline void set_max_bind_count_16(int32_t value)
	{
		___max_bind_count_16 = value;
	}

	inline static int32_t get_offset_of_connected_17() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___connected_17)); }
	inline bool get_connected_17() const { return ___connected_17; }
	inline bool* get_address_of_connected_17() { return &___connected_17; }
	inline void set_connected_17(bool value)
	{
		___connected_17 = value;
	}

	inline static int32_t get_offset_of_closed_18() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___closed_18)); }
	inline bool get_closed_18() const { return ___closed_18; }
	inline bool* get_address_of_closed_18() { return &___closed_18; }
	inline void set_closed_18(bool value)
	{
		___closed_18 = value;
	}

	inline static int32_t get_offset_of_disposed_19() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___disposed_19)); }
	inline bool get_disposed_19() const { return ___disposed_19; }
	inline bool* get_address_of_disposed_19() { return &___disposed_19; }
	inline void set_disposed_19(bool value)
	{
		___disposed_19 = value;
	}

	inline static int32_t get_offset_of_seed_endpoint_20() { return static_cast<int32_t>(offsetof(Socket_t2982395729, ___seed_endpoint_20)); }
	inline EndPoint_t2491867935 * get_seed_endpoint_20() const { return ___seed_endpoint_20; }
	inline EndPoint_t2491867935 ** get_address_of_seed_endpoint_20() { return &___seed_endpoint_20; }
	inline void set_seed_endpoint_20(EndPoint_t2491867935 * value)
	{
		___seed_endpoint_20 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_20), value);
	}
};

struct Socket_t2982395729_StaticFields
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
	inline static int32_t get_offset_of_ipv4Supported_5() { return static_cast<int32_t>(offsetof(Socket_t2982395729_StaticFields, ___ipv4Supported_5)); }
	inline int32_t get_ipv4Supported_5() const { return ___ipv4Supported_5; }
	inline int32_t* get_address_of_ipv4Supported_5() { return &___ipv4Supported_5; }
	inline void set_ipv4Supported_5(int32_t value)
	{
		___ipv4Supported_5 = value;
	}

	inline static int32_t get_offset_of_ipv6Supported_6() { return static_cast<int32_t>(offsetof(Socket_t2982395729_StaticFields, ___ipv6Supported_6)); }
	inline int32_t get_ipv6Supported_6() const { return ___ipv6Supported_6; }
	inline int32_t* get_address_of_ipv6Supported_6() { return &___ipv6Supported_6; }
	inline void set_ipv6Supported_6(int32_t value)
	{
		___ipv6Supported_6 = value;
	}

	inline static int32_t get_offset_of_current_bind_count_15() { return static_cast<int32_t>(offsetof(Socket_t2982395729_StaticFields, ___current_bind_count_15)); }
	inline int32_t get_current_bind_count_15() const { return ___current_bind_count_15; }
	inline int32_t* get_address_of_current_bind_count_15() { return &___current_bind_count_15; }
	inline void set_current_bind_count_15(int32_t value)
	{
		___current_bind_count_15 = value;
	}

	inline static int32_t get_offset_of_check_socket_policy_21() { return static_cast<int32_t>(offsetof(Socket_t2982395729_StaticFields, ___check_socket_policy_21)); }
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
#endif // SOCKET_T2982395729_H
#ifndef NETWORKSTREAM_T2026277505_H
#define NETWORKSTREAM_T2026277505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t2026277505  : public Stream_t632710838
{
public:
	// System.IO.FileAccess System.Net.Sockets.NetworkStream::access
	int32_t ___access_1;
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::socket
	Socket_t2982395729 * ___socket_2;
	// System.Boolean System.Net.Sockets.NetworkStream::owns_socket
	bool ___owns_socket_3;
	// System.Boolean System.Net.Sockets.NetworkStream::readable
	bool ___readable_4;
	// System.Boolean System.Net.Sockets.NetworkStream::writeable
	bool ___writeable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::disposed
	bool ___disposed_6;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(NetworkStream_t2026277505, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(NetworkStream_t2026277505, ___socket_2)); }
	inline Socket_t2982395729 * get_socket_2() const { return ___socket_2; }
	inline Socket_t2982395729 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t2982395729 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((&___socket_2), value);
	}

	inline static int32_t get_offset_of_owns_socket_3() { return static_cast<int32_t>(offsetof(NetworkStream_t2026277505, ___owns_socket_3)); }
	inline bool get_owns_socket_3() const { return ___owns_socket_3; }
	inline bool* get_address_of_owns_socket_3() { return &___owns_socket_3; }
	inline void set_owns_socket_3(bool value)
	{
		___owns_socket_3 = value;
	}

	inline static int32_t get_offset_of_readable_4() { return static_cast<int32_t>(offsetof(NetworkStream_t2026277505, ___readable_4)); }
	inline bool get_readable_4() const { return ___readable_4; }
	inline bool* get_address_of_readable_4() { return &___readable_4; }
	inline void set_readable_4(bool value)
	{
		___readable_4 = value;
	}

	inline static int32_t get_offset_of_writeable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t2026277505, ___writeable_5)); }
	inline bool get_writeable_5() const { return ___writeable_5; }
	inline bool* get_address_of_writeable_5() { return &___writeable_5; }
	inline void set_writeable_5(bool value)
	{
		___writeable_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(NetworkStream_t2026277505, ___disposed_6)); }
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
#endif // NETWORKSTREAM_T2026277505_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T3884894366_H
#define REFRESHPROPERTIESATTRIBUTE_T3884894366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t3884894366  : public Attribute_t2216352155
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t3884894366, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t3884894366_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t3884894366 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t3884894366 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t3884894366 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t3884894366_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t3884894366 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t3884894366 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t3884894366 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t3884894366_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t3884894366 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t3884894366 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t3884894366 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t3884894366_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t3884894366 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t3884894366 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t3884894366 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T3884894366_H
#ifndef COLLECTIONCHANGEEVENTARGS_T2303948392_H
#define COLLECTIONCHANGEEVENTARGS_T2303948392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t2303948392  : public EventArgs_t2275202808
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t2303948392, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t2303948392, ___theElement_2)); }
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
#endif // COLLECTIONCHANGEEVENTARGS_T2303948392_H
#ifndef UNMANAGEDREADORWRITE_T3411330116_H
#define UNMANAGEDREADORWRITE_T3411330116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct  UnmanagedReadOrWrite_t3411330116  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDREADORWRITE_T3411330116_H
#ifndef READMETHOD_T3463757207_H
#define READMETHOD_T3463757207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/ReadMethod
struct  ReadMethod_t3463757207  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READMETHOD_T3463757207_H
#ifndef WRITEMETHOD_T2714643595_H
#define WRITEMETHOD_T2714643595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/WriteMethod
struct  WriteMethod_t2714643595  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEMETHOD_T2714643595_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (CollectionChangeEventArgs_t2303948392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1000[2] = 
{
	CollectionChangeEventArgs_t2303948392::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t2303948392::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (CollectionConverter_t508493478), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (Component_t1680680043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1002[3] = 
{
	Component_t1680680043::get_offset_of_event_handlers_1(),
	Component_t1680680043::get_offset_of_mySite_2(),
	Component_t1680680043::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (ComponentCollection_t3472151773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (ComponentConverter_t4183327743), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (CultureInfoConverter_t506052337), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1005[1] = 
{
	CultureInfoConverter_t506052337::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (CultureInfoComparer_t1957957120), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (DateTimeConverter_t1739134960), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (DecimalConverter_t2707847096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (DefaultEventAttribute_t2803615586), -1, sizeof(DefaultEventAttribute_t2803615586_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1009[2] = 
{
	DefaultEventAttribute_t2803615586::get_offset_of_eventName_0(),
	DefaultEventAttribute_t2803615586_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (DefaultPropertyAttribute_t2576961089), -1, sizeof(DefaultPropertyAttribute_t2576961089_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1010[2] = 
{
	DefaultPropertyAttribute_t2576961089::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t2576961089_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (DefaultValueAttribute_t150707685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1011[1] = 
{
	DefaultValueAttribute_t150707685::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (DescriptionAttribute_t3506308938), -1, sizeof(DescriptionAttribute_t3506308938_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1012[2] = 
{
	DescriptionAttribute_t3506308938::get_offset_of_desc_0(),
	DescriptionAttribute_t3506308938_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (DesignOnlyAttribute_t3503737881), -1, sizeof(DesignOnlyAttribute_t3503737881_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1013[4] = 
{
	DesignOnlyAttribute_t3503737881::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t3503737881_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t3503737881_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t3503737881_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (DesignTimeVisibleAttribute_t1302162368), -1, sizeof(DesignTimeVisibleAttribute_t1302162368_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1014[4] = 
{
	DesignTimeVisibleAttribute_t1302162368::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t1302162368_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t1302162368_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t1302162368_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (DesignerAttribute_t4011957418), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1015[2] = 
{
	DesignerAttribute_t4011957418::get_offset_of_name_0(),
	DesignerAttribute_t4011957418::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (DesignerCategoryAttribute_t4258004414), -1, sizeof(DesignerCategoryAttribute_t4258004414_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1016[5] = 
{
	DesignerCategoryAttribute_t4258004414::get_offset_of_category_0(),
	DesignerCategoryAttribute_t4258004414_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t4258004414_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t4258004414_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t4258004414_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (DesignerSerializationVisibility_t3931622439)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1017[4] = 
{
	DesignerSerializationVisibility_t3931622439::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (DesignerSerializationVisibilityAttribute_t2904967389), -1, sizeof(DesignerSerializationVisibilityAttribute_t2904967389_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1018[5] = 
{
	DesignerSerializationVisibilityAttribute_t2904967389::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t2904967389_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t2904967389_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t2904967389_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t2904967389_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (DoubleConverter_t3489889127), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (EditorAttribute_t4194294253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1020[2] = 
{
	EditorAttribute_t4194294253::get_offset_of_name_0(),
	EditorAttribute_t4194294253::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (EditorBrowsableAttribute_t3387857932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1021[1] = 
{
	EditorBrowsableAttribute_t3387857932::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (EditorBrowsableState_t763078063)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1022[4] = 
{
	EditorBrowsableState_t763078063::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (EnumConverter_t1290080892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1023[2] = 
{
	EnumConverter_t1290080892::get_offset_of_type_0(),
	EnumConverter_t1290080892::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (EnumComparer_t4232204217), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (ListEntry_t134436266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1025[3] = 
{
	ListEntry_t134436266::get_offset_of_key_0(),
	ListEntry_t134436266::get_offset_of_value_1(),
	ListEntry_t134436266::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (EventHandlerList_t798779019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1026[2] = 
{
	EventHandlerList_t798779019::get_offset_of_entries_0(),
	EventHandlerList_t798779019::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (ExpandableObjectConverter_t2195891490), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (GuidConverter_t1956645795), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (Int16Converter_t4283245050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (Int32Converter_t1167741574), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (Int64Converter_t4247321873), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (InvalidEnumArgumentException_t740609292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (ListBindableAttribute_t4026399712), -1, sizeof(ListBindableAttribute_t4026399712_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1042[4] = 
{
	ListBindableAttribute_t4026399712_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t4026399712_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t4026399712_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t4026399712::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (ListSortDirection_t3095866154)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1043[3] = 
{
	ListSortDirection_t3095866154::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (MarshalByValueComponent_t410256829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1044[3] = 
{
	MarshalByValueComponent_t410256829::get_offset_of_eventList_0(),
	MarshalByValueComponent_t410256829::get_offset_of_mySite_1(),
	MarshalByValueComponent_t410256829::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (MemberDescriptor_t3300650721), -1, sizeof(MemberDescriptor_t3300650721_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1045[4] = 
{
	MemberDescriptor_t3300650721::get_offset_of_name_0(),
	MemberDescriptor_t3300650721::get_offset_of_attrs_1(),
	MemberDescriptor_t3300650721::get_offset_of_attrCollection_2(),
	MemberDescriptor_t3300650721_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (MemberDescriptorComparer_t3941108658), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (MergablePropertyAttribute_t287716853), -1, sizeof(MergablePropertyAttribute_t287716853_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1047[4] = 
{
	MergablePropertyAttribute_t287716853::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t287716853_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t287716853_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t287716853_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (NullableConverter_t4101458022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1048[3] = 
{
	NullableConverter_t4101458022::get_offset_of_nullableType_0(),
	NullableConverter_t4101458022::get_offset_of_underlyingType_1(),
	NullableConverter_t4101458022::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (PropertyChangedEventArgs_t122797799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1049[1] = 
{
	PropertyChangedEventArgs_t122797799::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (PropertyDescriptor_t1426956804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (PropertyDescriptorCollection_t2804378102), -1, sizeof(PropertyDescriptorCollection_t2804378102_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1051[3] = 
{
	PropertyDescriptorCollection_t2804378102_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t2804378102::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t2804378102::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (ReadOnlyAttribute_t861501680), -1, sizeof(ReadOnlyAttribute_t861501680_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1052[4] = 
{
	ReadOnlyAttribute_t861501680::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t861501680_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t861501680_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t861501680_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (ReferenceConverter_t3836157070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1053[1] = 
{
	ReferenceConverter_t3836157070::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (ReflectionPropertyDescriptor_t2701081859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1054[3] = 
{
	ReflectionPropertyDescriptor_t2701081859::get_offset_of__member_4(),
	ReflectionPropertyDescriptor_t2701081859::get_offset_of__componentType_5(),
	ReflectionPropertyDescriptor_t2701081859::get_offset_of__propertyType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (RefreshProperties_t63490970)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1055[4] = 
{
	RefreshProperties_t63490970::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (RefreshPropertiesAttribute_t3884894366), -1, sizeof(RefreshPropertiesAttribute_t3884894366_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1056[4] = 
{
	RefreshPropertiesAttribute_t3884894366::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t3884894366_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t3884894366_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t3884894366_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (SByteConverter_t786753009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (SingleConverter_t2885369526), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (StringConverter_t942737524), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (TimeSpanConverter_t800601048), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (ToolboxItemAttribute_t3788989388), -1, sizeof(ToolboxItemAttribute_t3788989388_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1061[4] = 
{
	ToolboxItemAttribute_t3788989388_StaticFields::get_offset_of_Default_0(),
	ToolboxItemAttribute_t3788989388_StaticFields::get_offset_of_None_1(),
	ToolboxItemAttribute_t3788989388::get_offset_of_itemType_2(),
	ToolboxItemAttribute_t3788989388::get_offset_of_itemTypeName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (TypeConverter_t3462193360), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (StandardValuesCollection_t3765642228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1063[1] = 
{
	StandardValuesCollection_t3765642228::get_offset_of_values_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (TypeConverterAttribute_t1193470195), -1, sizeof(TypeConverterAttribute_t1193470195_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1064[2] = 
{
	TypeConverterAttribute_t1193470195_StaticFields::get_offset_of_Default_0(),
	TypeConverterAttribute_t1193470195::get_offset_of_converter_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (TypeDescriptionProvider_t2592436426), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (TypeDescriptor_t2220785819), -1, sizeof(TypeDescriptor_t2220785819_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1066[9] = 
{
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_creatingDefaultConverters_0(),
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_defaultConverters_1(),
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_componentTable_2(),
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_typeTable_3(),
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_typeDescriptionProvidersLock_4(),
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_typeDescriptionProviders_5(),
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_componentDescriptionProvidersLock_6(),
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_componentDescriptionProviders_7(),
	TypeDescriptor_t2220785819_StaticFields::get_offset_of_onDispose_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (Info_t2848225613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1067[2] = 
{
	Info_t2848225613::get_offset_of__infoType_0(),
	Info_t2848225613::get_offset_of__attributes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (ComponentInfo_t2221854471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1068[2] = 
{
	ComponentInfo_t2221854471::get_offset_of__component_2(),
	ComponentInfo_t2221854471::get_offset_of__properties_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (TypeInfo_t1375294279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1069[1] = 
{
	TypeInfo_t1375294279::get_offset_of__properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (UInt16Converter_t1561595878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (UInt32Converter_t1679720244), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (UInt64Converter_t3280233291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (WeakObjectWrapper_t3002415697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1073[2] = 
{
	WeakObjectWrapper_t3002415697::get_offset_of_U3CTargetHashCodeU3Ek__BackingField_0(),
	WeakObjectWrapper_t3002415697::get_offset_of_U3CWeakU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (WeakObjectWrapperComparer_t76871165), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (Win32Exception_t895673204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1075[1] = 
{
	Win32Exception_t895673204::get_offset_of_native_error_code_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (Debug_t3185956169), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (Stopwatch_t2356732135), -1, sizeof(Stopwatch_t2356732135_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1077[5] = 
{
	Stopwatch_t2356732135_StaticFields::get_offset_of_Frequency_0(),
	Stopwatch_t2356732135_StaticFields::get_offset_of_IsHighResolution_1(),
	Stopwatch_t2356732135::get_offset_of_elapsed_2(),
	Stopwatch_t2356732135::get_offset_of_started_3(),
	Stopwatch_t2356732135::get_offset_of_is_running_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (Switch_t1868745697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1078[7] = 
{
	Switch_t1868745697::get_offset_of_name_0(),
	Switch_t1868745697::get_offset_of_description_1(),
	Switch_t1868745697::get_offset_of_switchSetting_2(),
	Switch_t1868745697::get_offset_of_value_3(),
	Switch_t1868745697::get_offset_of_defaultSwitchValue_4(),
	Switch_t1868745697::get_offset_of_initialized_5(),
	Switch_t1868745697::get_offset_of_attributes_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (TraceLevel_t1458342028)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1079[6] = 
{
	TraceLevel_t1458342028::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (CompressionMode_t465788840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1080[3] = 
{
	CompressionMode_t465788840::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (DeflateStream_t2203633858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1081[8] = 
{
	DeflateStream_t2203633858::get_offset_of_base_stream_1(),
	DeflateStream_t2203633858::get_offset_of_mode_2(),
	DeflateStream_t2203633858::get_offset_of_leaveOpen_3(),
	DeflateStream_t2203633858::get_offset_of_disposed_4(),
	DeflateStream_t2203633858::get_offset_of_feeder_5(),
	DeflateStream_t2203633858::get_offset_of_z_stream_6(),
	DeflateStream_t2203633858::get_offset_of_io_buffer_7(),
	DeflateStream_t2203633858::get_offset_of_data_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (UnmanagedReadOrWrite_t3411330116), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (ReadMethod_t3463757207), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (WriteMethod_t2714643595), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (GZipStream_t3213166413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1085[1] = 
{
	GZipStream_t3213166413::get_offset_of_deflateStream_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (AuthenticatedStream_t1498147405), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1086[2] = 
{
	AuthenticatedStream_t1498147405::get_offset_of_innerStream_1(),
	AuthenticatedStream_t1498147405::get_offset_of_leaveStreamOpen_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (AuthenticationLevel_t208163812)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1087[4] = 
{
	AuthenticationLevel_t208163812::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (SslPolicyErrors_t3110506643)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1088[5] = 
{
	SslPolicyErrors_t3110506643::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (SslStream_t708166407), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1089[3] = 
{
	SslStream_t708166407::get_offset_of_ssl_stream_3(),
	SslStream_t708166407::get_offset_of_validation_callback_4(),
	SslStream_t708166407::get_offset_of_selection_callback_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t2461038639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1090[2] = 
{
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t2461038639::get_offset_of_clientCertificates_0(),
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t2461038639::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (AddressFamily_t3739712175)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1091[32] = 
{
	AddressFamily_t3739712175::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (LingerOption_t2241701209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1092[2] = 
{
	LingerOption_t2241701209::get_offset_of_enabled_0(),
	LingerOption_t2241701209::get_offset_of_seconds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (MulticastOption_t468351970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (NetworkStream_t2026277505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1094[6] = 
{
	NetworkStream_t2026277505::get_offset_of_access_1(),
	NetworkStream_t2026277505::get_offset_of_socket_2(),
	NetworkStream_t2026277505::get_offset_of_owns_socket_3(),
	NetworkStream_t2026277505::get_offset_of_readable_4(),
	NetworkStream_t2026277505::get_offset_of_writeable_5(),
	NetworkStream_t2026277505::get_offset_of_disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (ProtocolType_t1028959840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1095[26] = 
{
	ProtocolType_t1028959840::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (SelectMode_t1616571750)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1096[4] = 
{
	SelectMode_t1616571750::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (Socket_t2982395729), -1, sizeof(Socket_t2982395729_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1097[22] = 
{
	Socket_t2982395729::get_offset_of_readQ_0(),
	Socket_t2982395729::get_offset_of_writeQ_1(),
	Socket_t2982395729::get_offset_of_islistening_2(),
	Socket_t2982395729::get_offset_of_MinListenPort_3(),
	Socket_t2982395729::get_offset_of_MaxListenPort_4(),
	Socket_t2982395729_StaticFields::get_offset_of_ipv4Supported_5(),
	Socket_t2982395729_StaticFields::get_offset_of_ipv6Supported_6(),
	Socket_t2982395729::get_offset_of_linger_timeout_7(),
	Socket_t2982395729::get_offset_of_socket_8(),
	Socket_t2982395729::get_offset_of_address_family_9(),
	Socket_t2982395729::get_offset_of_socket_type_10(),
	Socket_t2982395729::get_offset_of_protocol_type_11(),
	Socket_t2982395729::get_offset_of_blocking_12(),
	Socket_t2982395729::get_offset_of_blocking_thread_13(),
	Socket_t2982395729::get_offset_of_isbound_14(),
	Socket_t2982395729_StaticFields::get_offset_of_current_bind_count_15(),
	Socket_t2982395729::get_offset_of_max_bind_count_16(),
	Socket_t2982395729::get_offset_of_connected_17(),
	Socket_t2982395729::get_offset_of_closed_18(),
	Socket_t2982395729::get_offset_of_disposed_19(),
	Socket_t2982395729::get_offset_of_seed_endpoint_20(),
	Socket_t2982395729_StaticFields::get_offset_of_check_socket_policy_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (SocketOperation_t3982173957)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1098[15] = 
{
	SocketOperation_t3982173957::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (SocketAsyncResult_t2343460733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1099[25] = 
{
	SocketAsyncResult_t2343460733::get_offset_of_Sock_0(),
	SocketAsyncResult_t2343460733::get_offset_of_handle_1(),
	SocketAsyncResult_t2343460733::get_offset_of_state_2(),
	SocketAsyncResult_t2343460733::get_offset_of_callback_3(),
	SocketAsyncResult_t2343460733::get_offset_of_waithandle_4(),
	SocketAsyncResult_t2343460733::get_offset_of_delayedException_5(),
	SocketAsyncResult_t2343460733::get_offset_of_EndPoint_6(),
	SocketAsyncResult_t2343460733::get_offset_of_Buffer_7(),
	SocketAsyncResult_t2343460733::get_offset_of_Offset_8(),
	SocketAsyncResult_t2343460733::get_offset_of_Size_9(),
	SocketAsyncResult_t2343460733::get_offset_of_SockFlags_10(),
	SocketAsyncResult_t2343460733::get_offset_of_AcceptSocket_11(),
	SocketAsyncResult_t2343460733::get_offset_of_Addresses_12(),
	SocketAsyncResult_t2343460733::get_offset_of_Port_13(),
	SocketAsyncResult_t2343460733::get_offset_of_Buffers_14(),
	SocketAsyncResult_t2343460733::get_offset_of_ReuseSocket_15(),
	SocketAsyncResult_t2343460733::get_offset_of_acc_socket_16(),
	SocketAsyncResult_t2343460733::get_offset_of_total_17(),
	SocketAsyncResult_t2343460733::get_offset_of_completed_sync_18(),
	SocketAsyncResult_t2343460733::get_offset_of_completed_19(),
	SocketAsyncResult_t2343460733::get_offset_of_blocking_20(),
	SocketAsyncResult_t2343460733::get_offset_of_error_21(),
	SocketAsyncResult_t2343460733::get_offset_of_operation_22(),
	SocketAsyncResult_t2343460733::get_offset_of_ares_23(),
	SocketAsyncResult_t2343460733::get_offset_of_EndCalled_24(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
