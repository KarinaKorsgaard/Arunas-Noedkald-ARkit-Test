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

// System.IntPtr[]
struct IntPtrU5BU5D_t1965776668;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t3710533427;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t495662781;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t880975428;
// System.Byte[]
struct ByteU5BU5D_t138760304;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t3271231022;
// System.Func`3<System.Int32,System.Int32,System.Int32>
struct Func_3_t1162855405;
// System.Text.StringBuilder
struct StringBuilder_t4211155742;
// System.Char[]
struct CharU5BU5D_t3126673759;
// System.UInt32[]
struct UInt32U5BU5D_t3321746679;
// System.Void
struct Void_t2784251464;
// System.IO.MemoryStream
struct MemoryStream_t3797910543;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t3616306002;
// System.DelegateData
struct DelegateData_t1247082884;
// System.Type
struct Type_t;
// Mono.Security.Protocol.Tls.Context
struct Context_t123069135;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String[]
struct StringU5BU5D_t4119682326;
// System.Int32[]
struct Int32U5BU5D_t2629886273;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3244502600;
// System.IAsyncResult
struct IAsyncResult_t840617180;
// System.AsyncCallback
struct AsyncCallback_t739029555;
// System.Linq.Expressions.Expression
struct Expression_t1073136545;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4205265902;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t4076484170;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t3024930390;
// Mono.Math.BigInteger
struct BigInteger_t1928176118;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t32678625;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1760559852;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t4063821556;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2829791689;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2699226147;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3940903098;
// System.Linq.Expressions.NewExpression
struct NewExpression_t2222008053;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t1236223468;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t1064207761;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1228266513;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t912264516;




#ifndef U3CMODULEU3E_T1026634777_H
#define U3CMODULEU3E_T1026634777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1026634777 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1026634777_H
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
#ifndef LOCALE_T642258376_H
#define LOCALE_T642258376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t642258376  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T642258376_H
#ifndef KEYBUILDER_T1011092278_H
#define KEYBUILDER_T1011092278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t1011092278  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t1011092278_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t495662781 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t1011092278_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t495662781 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t495662781 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t495662781 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T1011092278_H
#ifndef SYMMETRICTRANSFORM_T3370709421_H
#define SYMMETRICTRANSFORM_T3370709421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3370709421  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t880975428 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t138760304* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t138760304* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t138760304* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t138760304* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t495662781 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___algo_0)); }
	inline SymmetricAlgorithm_t880975428 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t880975428 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t880975428 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___temp_3)); }
	inline ByteU5BU5D_t138760304* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t138760304** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t138760304* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___temp2_4)); }
	inline ByteU5BU5D_t138760304* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t138760304** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t138760304* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___workBuff_5)); }
	inline ByteU5BU5D_t138760304* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t138760304** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t138760304* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___workout_6)); }
	inline ByteU5BU5D_t138760304* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t138760304** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t138760304* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3370709421, ____rng_11)); }
	inline RandomNumberGenerator_t495662781 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t495662781 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t495662781 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3370709421_H
#ifndef ELEMENTINIT_T3333096287_H
#define ELEMENTINIT_T3333096287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ElementInit
struct  ElementInit_t3333096287  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::add_method
	MethodInfo_t * ___add_method_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::arguments
	ReadOnlyCollection_1_t3271231022 * ___arguments_1;

public:
	inline static int32_t get_offset_of_add_method_0() { return static_cast<int32_t>(offsetof(ElementInit_t3333096287, ___add_method_0)); }
	inline MethodInfo_t * get_add_method_0() const { return ___add_method_0; }
	inline MethodInfo_t ** get_address_of_add_method_0() { return &___add_method_0; }
	inline void set_add_method_0(MethodInfo_t * value)
	{
		___add_method_0 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(ElementInit_t3333096287, ___arguments_1)); }
	inline ReadOnlyCollection_1_t3271231022 * get_arguments_1() const { return ___arguments_1; }
	inline ReadOnlyCollection_1_t3271231022 ** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(ReadOnlyCollection_1_t3271231022 * value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTINIT_T3333096287_H
#ifndef EXPRESSIONVISITOR_T4048791101_H
#define EXPRESSIONVISITOR_T4048791101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionVisitor
struct  ExpressionVisitor_t4048791101  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONVISITOR_T4048791101_H
#ifndef EXTENSIONS_T4237486425_H
#define EXTENSIONS_T4237486425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Extensions
struct  Extensions_t4237486425  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONS_T4237486425_H
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
#ifndef CHECK_T971143985_H
#define CHECK_T971143985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Check
struct  Check_t971143985  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECK_T971143985_H
#ifndef ENUMERABLE_T1546757032_H
#define ENUMERABLE_T1546757032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t1546757032  : public RuntimeObject
{
public:

public:
};

struct Enumerable_t1546757032_StaticFields
{
public:
	// System.Func`3<System.Int32,System.Int32,System.Int32> System.Linq.Enumerable::<>f__am$cache0
	Func_3_t1162855405 * ___U3CU3Ef__amU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(Enumerable_t1546757032_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Func_3_t1162855405 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Func_3_t1162855405 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Func_3_t1162855405 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T1546757032_H
#ifndef U24ARRAYTYPEU24120_T3100711124_H
#define U24ARRAYTYPEU24120_T3100711124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t3100711124 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t3100711124__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T3100711124_H
#ifndef U24ARRAYTYPEU24136_T2381901534_H
#define U24ARRAYTYPEU24136_T2381901534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t2381901534 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t2381901534__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T2381901534_H
#ifndef EXPRESSIONPRINTER_T2618516411_H
#define EXPRESSIONPRINTER_T2618516411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionPrinter
struct  ExpressionPrinter_t2618516411  : public ExpressionVisitor_t4048791101
{
public:
	// System.Text.StringBuilder System.Linq.Expressions.ExpressionPrinter::builder
	StringBuilder_t4211155742 * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(ExpressionPrinter_t2618516411, ___builder_0)); }
	inline StringBuilder_t4211155742 * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t4211155742 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t4211155742 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONPRINTER_T2618516411_H
#ifndef TIMEZONENOTFOUNDEXCEPTION_T1517097920_H
#define TIMEZONENOTFOUNDEXCEPTION_T1517097920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneNotFoundException
struct  TimeZoneNotFoundException_t1517097920  : public Exception_t3352569137
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONENOTFOUNDEXCEPTION_T1517097920_H
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
#ifndef TIMETYPE_T631897649_H
#define TIMETYPE_T631897649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/TimeType
struct  TimeType_t631897649 
{
public:
	// System.Int32 System.TimeZoneInfo/TimeType::Offset
	int32_t ___Offset_0;
	// System.Boolean System.TimeZoneInfo/TimeType::IsDst
	bool ___IsDst_1;
	// System.String System.TimeZoneInfo/TimeType::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Offset_0() { return static_cast<int32_t>(offsetof(TimeType_t631897649, ___Offset_0)); }
	inline int32_t get_Offset_0() const { return ___Offset_0; }
	inline int32_t* get_address_of_Offset_0() { return &___Offset_0; }
	inline void set_Offset_0(int32_t value)
	{
		___Offset_0 = value;
	}

	inline static int32_t get_offset_of_IsDst_1() { return static_cast<int32_t>(offsetof(TimeType_t631897649, ___IsDst_1)); }
	inline bool get_IsDst_1() const { return ___IsDst_1; }
	inline bool* get_address_of_IsDst_1() { return &___IsDst_1; }
	inline void set_IsDst_1(bool value)
	{
		___IsDst_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(TimeType_t631897649, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TimeType
struct TimeType_t631897649_marshaled_pinvoke
{
	int32_t ___Offset_0;
	int32_t ___IsDst_1;
	char* ___Name_2;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TimeType
struct TimeType_t631897649_marshaled_com
{
	int32_t ___Offset_0;
	int32_t ___IsDst_1;
	Il2CppChar* ___Name_2;
};
#endif // TIMETYPE_T631897649_H
#ifndef AESTRANSFORM_T59149347_H
#define AESTRANSFORM_T59149347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t59149347  : public SymmetricTransform_t3370709421
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t3321746679* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t59149347, ___expandedKey_12)); }
	inline UInt32U5BU5D_t3321746679* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t3321746679** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t3321746679* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t59149347, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t59149347, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t59149347_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t3321746679* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t138760304* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t138760304* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t3321746679* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t3321746679* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t3321746679* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t3321746679* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t3321746679* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t3321746679* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t3321746679* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t3321746679* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t3321746679* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t3321746679** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t3321746679* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t138760304* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t138760304** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t138760304* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t138760304* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t138760304** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t138760304* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t3321746679* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t3321746679** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t3321746679* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t3321746679* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t3321746679** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t3321746679* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t3321746679* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t3321746679** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t3321746679* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t3321746679* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t3321746679** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t3321746679* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t3321746679* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t3321746679** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t3321746679* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t3321746679* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t3321746679** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t3321746679* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t3321746679* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t3321746679** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t3321746679* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t59149347_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t3321746679* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t3321746679** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t3321746679* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T59149347_H
#ifndef MONOTODOATTRIBUTE_T618752913_H
#define MONOTODOATTRIBUTE_T618752913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t618752913  : public Attribute_t2216352155
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T618752913_H
#ifndef INVALIDTIMEZONEEXCEPTION_T1254111066_H
#define INVALIDTIMEZONEEXCEPTION_T1254111066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidTimeZoneException
struct  InvalidTimeZoneException_t1254111066  : public Exception_t3352569137
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEZONEEXCEPTION_T1254111066_H
#ifndef RSAPARAMETERS_T2209974036_H
#define RSAPARAMETERS_T2209974036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t2209974036 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t138760304* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t138760304* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t138760304* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t138760304* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t138760304* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t138760304* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t138760304* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t138760304* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t2209974036, ___P_0)); }
	inline ByteU5BU5D_t138760304* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t138760304** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t138760304* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t2209974036, ___Q_1)); }
	inline ByteU5BU5D_t138760304* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t138760304** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t138760304* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t2209974036, ___D_2)); }
	inline ByteU5BU5D_t138760304* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t138760304** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t138760304* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t2209974036, ___DP_3)); }
	inline ByteU5BU5D_t138760304* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t138760304** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t138760304* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t2209974036, ___DQ_4)); }
	inline ByteU5BU5D_t138760304* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t138760304** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t138760304* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t2209974036, ___InverseQ_5)); }
	inline ByteU5BU5D_t138760304* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t138760304** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t138760304* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t2209974036, ___Modulus_6)); }
	inline ByteU5BU5D_t138760304* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t138760304** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t138760304* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t2209974036, ___Exponent_7)); }
	inline ByteU5BU5D_t138760304* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t138760304** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t138760304* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t2209974036_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t2209974036_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T2209974036_H
#ifndef TIMESPAN_T3503189249_H
#define TIMESPAN_T3503189249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3503189249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3503189249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3503189249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3503189249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3503189249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3503189249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3503189249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3503189249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3503189249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3503189249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3503189249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3503189249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3503189249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3503189249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3503189249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3503189249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3503189249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3503189249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3503189249_H
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
#ifndef U24ARRAYTYPEU2420_T4012419755_H
#define U24ARRAYTYPEU2420_T4012419755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t4012419755 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t4012419755__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T4012419755_H
#ifndef U24ARRAYTYPEU24256_T881199258_H
#define U24ARRAYTYPEU24256_T881199258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t881199258 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t881199258__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T881199258_H
#ifndef U24ARRAYTYPEU241024_T3912026014_H
#define U24ARRAYTYPEU241024_T3912026014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3912026014 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t3912026014__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3912026014_H
#ifndef U24ARRAYTYPEU243132_T1716869836_H
#define U24ARRAYTYPEU243132_T1716869836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t1716869836 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t1716869836__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T1716869836_H
#ifndef U24ARRAYTYPEU24256_T881199257_H
#define U24ARRAYTYPEU24256_T881199257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t881199257 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t881199257__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T881199257_H
#ifndef TLSSTREAM_T532355066_H
#define TLSSTREAM_T532355066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsStream
struct  TlsStream_t532355066  : public Stream_t632710838
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canRead
	bool ___canRead_1;
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canWrite
	bool ___canWrite_2;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.TlsStream::buffer
	MemoryStream_t3797910543 * ___buffer_3;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::temp
	ByteU5BU5D_t138760304* ___temp_4;

public:
	inline static int32_t get_offset_of_canRead_1() { return static_cast<int32_t>(offsetof(TlsStream_t532355066, ___canRead_1)); }
	inline bool get_canRead_1() const { return ___canRead_1; }
	inline bool* get_address_of_canRead_1() { return &___canRead_1; }
	inline void set_canRead_1(bool value)
	{
		___canRead_1 = value;
	}

	inline static int32_t get_offset_of_canWrite_2() { return static_cast<int32_t>(offsetof(TlsStream_t532355066, ___canWrite_2)); }
	inline bool get_canWrite_2() const { return ___canWrite_2; }
	inline bool* get_address_of_canWrite_2() { return &___canWrite_2; }
	inline void set_canWrite_2(bool value)
	{
		___canWrite_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(TlsStream_t532355066, ___buffer_3)); }
	inline MemoryStream_t3797910543 * get_buffer_3() const { return ___buffer_3; }
	inline MemoryStream_t3797910543 ** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(MemoryStream_t3797910543 * value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_temp_4() { return static_cast<int32_t>(offsetof(TlsStream_t532355066, ___temp_4)); }
	inline ByteU5BU5D_t138760304* get_temp_4() const { return ___temp_4; }
	inline ByteU5BU5D_t138760304** get_address_of_temp_4() { return &___temp_4; }
	inline void set_temp_4(ByteU5BU5D_t138760304* value)
	{
		___temp_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSSTREAM_T532355066_H
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
#ifndef U24ARRAYTYPEU2432_T239390072_H
#define U24ARRAYTYPEU2432_T239390072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t239390072 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t239390072__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T239390072_H
#ifndef EXTENSIONATTRIBUTE_T2211047782_H
#define EXTENSIONATTRIBUTE_T2211047782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t2211047782  : public Attribute_t2216352155
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T2211047782_H
#ifndef U24ARRAYTYPEU2464_T3002942121_H
#define U24ARRAYTYPEU2464_T3002942121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t3002942121 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t3002942121__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T3002942121_H
#ifndef U24ARRAYTYPEU2412_T2374606689_H
#define U24ARRAYTYPEU2412_T2374606689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2374606689 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2374606689__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2374606689_H
#ifndef U24ARRAYTYPEU2416_T389290092_H
#define U24ARRAYTYPEU2416_T389290092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t389290092 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t389290092__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T389290092_H
#ifndef U24ARRAYTYPEU244_T3768510325_H
#define U24ARRAYTYPEU244_T3768510325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$4
struct  U24ArrayTypeU244_t3768510325 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU244_t3768510325__padding[4];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU244_T3768510325_H
#ifndef U24ARRAYTYPEU2448_T963713228_H
#define U24ARRAYTYPEU2448_T963713228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t963713228 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t963713228__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T963713228_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2072089983_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2072089983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2072089983  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24136_t2381901534  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24120_t3100711124  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24256_t881199258  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU24256_t881199258  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU241024_t3912026014  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU241024_t3912026014  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU241024_t3912026014  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241024_t3912026014  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241024_t3912026014  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU241024_t3912026014  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU241024_t3912026014  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU241024_t3912026014  ___U24U24fieldU2D11_11;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24136_t2381901534  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24136_t2381901534 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24136_t2381901534  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24120_t3100711124  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24120_t3100711124 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24120_t3100711124  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24256_t881199258  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24256_t881199258 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24256_t881199258  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU24256_t881199258  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU24256_t881199258 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU24256_t881199258  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU241024_t3912026014  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU241024_t3912026014 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU241024_t3912026014  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU241024_t3912026014  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU241024_t3912026014 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU241024_t3912026014  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU241024_t3912026014  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU241024_t3912026014 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU241024_t3912026014  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241024_t3912026014  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241024_t3912026014 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241024_t3912026014  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241024_t3912026014  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241024_t3912026014 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241024_t3912026014  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU241024_t3912026014  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU241024_t3912026014 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU241024_t3912026014  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU241024_t3912026014  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU241024_t3912026014 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU241024_t3912026014  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU241024_t3912026014  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU241024_t3912026014 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU241024_t3912026014  value)
	{
		___U24U24fieldU2D11_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2072089983_H
#ifndef FALLBACK_T520553317_H
#define FALLBACK_T520553317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t520553317 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t520553317, ___value___1)); }
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
#endif // FALLBACK_T520553317_H
#ifndef SORTDIRECTION_T1847859233_H
#define SORTDIRECTION_T1847859233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.SortDirection
struct  SortDirection_t1847859233 
{
public:
	// System.Int32 System.Linq.SortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SortDirection_t1847859233, ___value___1)); }
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
#endif // SORTDIRECTION_T1847859233_H
#ifndef SECURITYCOMPRESSIONTYPE_T2908962051_H
#define SECURITYCOMPRESSIONTYPE_T2908962051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityCompressionType
struct  SecurityCompressionType_t2908962051 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityCompressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCompressionType_t2908962051, ___value___1)); }
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
#endif // SECURITYCOMPRESSIONTYPE_T2908962051_H
#ifndef CONFIDENCEFACTOR_T4011724817_H
#define CONFIDENCEFACTOR_T4011724817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t4011724817 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t4011724817, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T4011724817_H
#ifndef PADDINGMODE_T1873749453_H
#define PADDINGMODE_T1873749453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t1873749453 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t1873749453, ___value___1)); }
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
#endif // PADDINGMODE_T1873749453_H
#ifndef MEMBERBINDINGTYPE_T740424134_H
#define MEMBERBINDINGTYPE_T740424134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBindingType
struct  MemberBindingType_t740424134 
{
public:
	// System.Int32 System.Linq.Expressions.MemberBindingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberBindingType_t740424134, ___value___1)); }
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
#endif // MEMBERBINDINGTYPE_T740424134_H
#ifndef CIPHERMODE_T3423923439_H
#define CIPHERMODE_T3423923439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3423923439 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3423923439, ___value___1)); }
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
#endif // CIPHERMODE_T3423923439_H
#ifndef DAYOFWEEK_T2065889453_H
#define DAYOFWEEK_T2065889453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t2065889453 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t2065889453, ___value___1)); }
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
#endif // DAYOFWEEK_T2065889453_H
#ifndef HANDSHAKETYPE_T1889450615_H
#define HANDSHAKETYPE_T1889450615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeType
struct  HandshakeType_t1889450615 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.Handshake.HandshakeType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeType_t1889450615, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDSHAKETYPE_T1889450615_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2072089982_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2072089982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2072089982  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU243132_t1716869836  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU24256_t881199257  ___U24U24fieldU2D5_1;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2420_t4012419755  ___U24U24fieldU2D6_2;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU2432_t239390072  ___U24U24fieldU2D7_3;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU2448_t963713228  ___U24U24fieldU2D8_4;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU2464_t3002942121  ___U24U24fieldU2D9_5;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU2464_t3002942121  ___U24U24fieldU2D11_6;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-12
	U24ArrayTypeU2464_t3002942121  ___U24U24fieldU2D12_7;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-13
	U24ArrayTypeU2464_t3002942121  ___U24U24fieldU2D13_8;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-14
	U24ArrayTypeU2412_t2374606689  ___U24U24fieldU2D14_9;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU2412_t2374606689  ___U24U24fieldU2D15_10;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2412_t2374606689  ___U24U24fieldU2D16_11;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2416_t389290092  ___U24U24fieldU2D17_12;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU244_t3768510325  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$4 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU244_t3768510325  ___U24U24fieldU2D22_14;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU243132_t1716869836  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU243132_t1716869836 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU243132_t1716869836  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D5_1)); }
	inline U24ArrayTypeU24256_t881199257  get_U24U24fieldU2D5_1() const { return ___U24U24fieldU2D5_1; }
	inline U24ArrayTypeU24256_t881199257 * get_address_of_U24U24fieldU2D5_1() { return &___U24U24fieldU2D5_1; }
	inline void set_U24U24fieldU2D5_1(U24ArrayTypeU24256_t881199257  value)
	{
		___U24U24fieldU2D5_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D6_2)); }
	inline U24ArrayTypeU2420_t4012419755  get_U24U24fieldU2D6_2() const { return ___U24U24fieldU2D6_2; }
	inline U24ArrayTypeU2420_t4012419755 * get_address_of_U24U24fieldU2D6_2() { return &___U24U24fieldU2D6_2; }
	inline void set_U24U24fieldU2D6_2(U24ArrayTypeU2420_t4012419755  value)
	{
		___U24U24fieldU2D6_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D7_3)); }
	inline U24ArrayTypeU2432_t239390072  get_U24U24fieldU2D7_3() const { return ___U24U24fieldU2D7_3; }
	inline U24ArrayTypeU2432_t239390072 * get_address_of_U24U24fieldU2D7_3() { return &___U24U24fieldU2D7_3; }
	inline void set_U24U24fieldU2D7_3(U24ArrayTypeU2432_t239390072  value)
	{
		___U24U24fieldU2D7_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D8_4)); }
	inline U24ArrayTypeU2448_t963713228  get_U24U24fieldU2D8_4() const { return ___U24U24fieldU2D8_4; }
	inline U24ArrayTypeU2448_t963713228 * get_address_of_U24U24fieldU2D8_4() { return &___U24U24fieldU2D8_4; }
	inline void set_U24U24fieldU2D8_4(U24ArrayTypeU2448_t963713228  value)
	{
		___U24U24fieldU2D8_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D9_5)); }
	inline U24ArrayTypeU2464_t3002942121  get_U24U24fieldU2D9_5() const { return ___U24U24fieldU2D9_5; }
	inline U24ArrayTypeU2464_t3002942121 * get_address_of_U24U24fieldU2D9_5() { return &___U24U24fieldU2D9_5; }
	inline void set_U24U24fieldU2D9_5(U24ArrayTypeU2464_t3002942121  value)
	{
		___U24U24fieldU2D9_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D11_6)); }
	inline U24ArrayTypeU2464_t3002942121  get_U24U24fieldU2D11_6() const { return ___U24U24fieldU2D11_6; }
	inline U24ArrayTypeU2464_t3002942121 * get_address_of_U24U24fieldU2D11_6() { return &___U24U24fieldU2D11_6; }
	inline void set_U24U24fieldU2D11_6(U24ArrayTypeU2464_t3002942121  value)
	{
		___U24U24fieldU2D11_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D12_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D12_7)); }
	inline U24ArrayTypeU2464_t3002942121  get_U24U24fieldU2D12_7() const { return ___U24U24fieldU2D12_7; }
	inline U24ArrayTypeU2464_t3002942121 * get_address_of_U24U24fieldU2D12_7() { return &___U24U24fieldU2D12_7; }
	inline void set_U24U24fieldU2D12_7(U24ArrayTypeU2464_t3002942121  value)
	{
		___U24U24fieldU2D12_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D13_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D13_8)); }
	inline U24ArrayTypeU2464_t3002942121  get_U24U24fieldU2D13_8() const { return ___U24U24fieldU2D13_8; }
	inline U24ArrayTypeU2464_t3002942121 * get_address_of_U24U24fieldU2D13_8() { return &___U24U24fieldU2D13_8; }
	inline void set_U24U24fieldU2D13_8(U24ArrayTypeU2464_t3002942121  value)
	{
		___U24U24fieldU2D13_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D14_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D14_9)); }
	inline U24ArrayTypeU2412_t2374606689  get_U24U24fieldU2D14_9() const { return ___U24U24fieldU2D14_9; }
	inline U24ArrayTypeU2412_t2374606689 * get_address_of_U24U24fieldU2D14_9() { return &___U24U24fieldU2D14_9; }
	inline void set_U24U24fieldU2D14_9(U24ArrayTypeU2412_t2374606689  value)
	{
		___U24U24fieldU2D14_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D15_10)); }
	inline U24ArrayTypeU2412_t2374606689  get_U24U24fieldU2D15_10() const { return ___U24U24fieldU2D15_10; }
	inline U24ArrayTypeU2412_t2374606689 * get_address_of_U24U24fieldU2D15_10() { return &___U24U24fieldU2D15_10; }
	inline void set_U24U24fieldU2D15_10(U24ArrayTypeU2412_t2374606689  value)
	{
		___U24U24fieldU2D15_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D16_11)); }
	inline U24ArrayTypeU2412_t2374606689  get_U24U24fieldU2D16_11() const { return ___U24U24fieldU2D16_11; }
	inline U24ArrayTypeU2412_t2374606689 * get_address_of_U24U24fieldU2D16_11() { return &___U24U24fieldU2D16_11; }
	inline void set_U24U24fieldU2D16_11(U24ArrayTypeU2412_t2374606689  value)
	{
		___U24U24fieldU2D16_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D17_12)); }
	inline U24ArrayTypeU2416_t389290092  get_U24U24fieldU2D17_12() const { return ___U24U24fieldU2D17_12; }
	inline U24ArrayTypeU2416_t389290092 * get_address_of_U24U24fieldU2D17_12() { return &___U24U24fieldU2D17_12; }
	inline void set_U24U24fieldU2D17_12(U24ArrayTypeU2416_t389290092  value)
	{
		___U24U24fieldU2D17_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU244_t3768510325  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU244_t3768510325 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU244_t3768510325  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU244_t3768510325  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU244_t3768510325 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU244_t3768510325  value)
	{
		___U24U24fieldU2D22_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2072089982_H
#ifndef EXPRESSIONTYPE_T1272385551_H
#define EXPRESSIONTYPE_T1272385551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionType
struct  ExpressionType_t1272385551 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExpressionType_t1272385551, ___value___1)); }
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
#endif // EXPRESSIONTYPE_T1272385551_H
#ifndef DATETIMEKIND_T1727188563_H
#define DATETIMEKIND_T1727188563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t1727188563 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t1727188563, ___value___1)); }
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
#endif // DATETIMEKIND_T1727188563_H
#ifndef TIMEZONEINFO_T4141160514_H
#define TIMEZONEINFO_T4141160514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo
struct  TimeZoneInfo_t4141160514  : public RuntimeObject
{
public:
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t3503189249  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::daylightDisplayName
	String_t* ___daylightDisplayName_1;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_2;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_3;
	// System.String System.TimeZoneInfo::standardDisplayName
	String_t* ___standardDisplayName_5;
	// System.Boolean System.TimeZoneInfo::disableDaylightSavingTime
	bool ___disableDaylightSavingTime_6;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t3616306002* ___adjustmentRules_9;

public:
	inline static int32_t get_offset_of_baseUtcOffset_0() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514, ___baseUtcOffset_0)); }
	inline TimeSpan_t3503189249  get_baseUtcOffset_0() const { return ___baseUtcOffset_0; }
	inline TimeSpan_t3503189249 * get_address_of_baseUtcOffset_0() { return &___baseUtcOffset_0; }
	inline void set_baseUtcOffset_0(TimeSpan_t3503189249  value)
	{
		___baseUtcOffset_0 = value;
	}

	inline static int32_t get_offset_of_daylightDisplayName_1() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514, ___daylightDisplayName_1)); }
	inline String_t* get_daylightDisplayName_1() const { return ___daylightDisplayName_1; }
	inline String_t** get_address_of_daylightDisplayName_1() { return &___daylightDisplayName_1; }
	inline void set_daylightDisplayName_1(String_t* value)
	{
		___daylightDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___daylightDisplayName_1), value);
	}

	inline static int32_t get_offset_of_displayName_2() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514, ___displayName_2)); }
	inline String_t* get_displayName_2() const { return ___displayName_2; }
	inline String_t** get_address_of_displayName_2() { return &___displayName_2; }
	inline void set_displayName_2(String_t* value)
	{
		___displayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_2), value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier((&___id_3), value);
	}

	inline static int32_t get_offset_of_standardDisplayName_5() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514, ___standardDisplayName_5)); }
	inline String_t* get_standardDisplayName_5() const { return ___standardDisplayName_5; }
	inline String_t** get_address_of_standardDisplayName_5() { return &___standardDisplayName_5; }
	inline void set_standardDisplayName_5(String_t* value)
	{
		___standardDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((&___standardDisplayName_5), value);
	}

	inline static int32_t get_offset_of_disableDaylightSavingTime_6() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514, ___disableDaylightSavingTime_6)); }
	inline bool get_disableDaylightSavingTime_6() const { return ___disableDaylightSavingTime_6; }
	inline bool* get_address_of_disableDaylightSavingTime_6() { return &___disableDaylightSavingTime_6; }
	inline void set_disableDaylightSavingTime_6(bool value)
	{
		___disableDaylightSavingTime_6 = value;
	}

	inline static int32_t get_offset_of_adjustmentRules_9() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514, ___adjustmentRules_9)); }
	inline AdjustmentRuleU5BU5D_t3616306002* get_adjustmentRules_9() const { return ___adjustmentRules_9; }
	inline AdjustmentRuleU5BU5D_t3616306002** get_address_of_adjustmentRules_9() { return &___adjustmentRules_9; }
	inline void set_adjustmentRules_9(AdjustmentRuleU5BU5D_t3616306002* value)
	{
		___adjustmentRules_9 = value;
		Il2CppCodeGenWriteBarrier((&___adjustmentRules_9), value);
	}
};

struct TimeZoneInfo_t4141160514_StaticFields
{
public:
	// System.TimeZoneInfo System.TimeZoneInfo::local
	TimeZoneInfo_t4141160514 * ___local_4;
	// System.TimeZoneInfo System.TimeZoneInfo::utc
	TimeZoneInfo_t4141160514 * ___utc_7;
	// System.String System.TimeZoneInfo::timeZoneDirectory
	String_t* ___timeZoneDirectory_8;

public:
	inline static int32_t get_offset_of_local_4() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514_StaticFields, ___local_4)); }
	inline TimeZoneInfo_t4141160514 * get_local_4() const { return ___local_4; }
	inline TimeZoneInfo_t4141160514 ** get_address_of_local_4() { return &___local_4; }
	inline void set_local_4(TimeZoneInfo_t4141160514 * value)
	{
		___local_4 = value;
		Il2CppCodeGenWriteBarrier((&___local_4), value);
	}

	inline static int32_t get_offset_of_utc_7() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514_StaticFields, ___utc_7)); }
	inline TimeZoneInfo_t4141160514 * get_utc_7() const { return ___utc_7; }
	inline TimeZoneInfo_t4141160514 ** get_address_of_utc_7() { return &___utc_7; }
	inline void set_utc_7(TimeZoneInfo_t4141160514 * value)
	{
		___utc_7 = value;
		Il2CppCodeGenWriteBarrier((&___utc_7), value);
	}

	inline static int32_t get_offset_of_timeZoneDirectory_8() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t4141160514_StaticFields, ___timeZoneDirectory_8)); }
	inline String_t* get_timeZoneDirectory_8() const { return ___timeZoneDirectory_8; }
	inline String_t** get_address_of_timeZoneDirectory_8() { return &___timeZoneDirectory_8; }
	inline void set_timeZoneDirectory_8(String_t* value)
	{
		___timeZoneDirectory_8 = value;
		Il2CppCodeGenWriteBarrier((&___timeZoneDirectory_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONEINFO_T4141160514_H
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
#ifndef CONTENTTYPE_T1346839060_H
#define CONTENTTYPE_T1346839060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ContentType
struct  ContentType_t1346839060 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.ContentType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1346839060, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1346839060_H
#ifndef EXPRESSION_T1073136545_H
#define EXPRESSION_T1073136545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression
struct  Expression_t1073136545  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::node_type
	int32_t ___node_type_0;
	// System.Type System.Linq.Expressions.Expression::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_node_type_0() { return static_cast<int32_t>(offsetof(Expression_t1073136545, ___node_type_0)); }
	inline int32_t get_node_type_0() const { return ___node_type_0; }
	inline int32_t* get_address_of_node_type_0() { return &___node_type_0; }
	inline void set_node_type_0(int32_t value)
	{
		___node_type_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Expression_t1073136545, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1073136545_H
#ifndef HANDSHAKEMESSAGE_T1610311895_H
#define HANDSHAKEMESSAGE_T1610311895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct  HandshakeMessage_t1610311895  : public TlsStream_t532355066
{
public:
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::context
	Context_t123069135 * ___context_5;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::handshakeType
	uint8_t ___handshakeType_6;
	// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::contentType
	uint8_t ___contentType_7;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::cache
	ByteU5BU5D_t138760304* ___cache_8;

public:
	inline static int32_t get_offset_of_context_5() { return static_cast<int32_t>(offsetof(HandshakeMessage_t1610311895, ___context_5)); }
	inline Context_t123069135 * get_context_5() const { return ___context_5; }
	inline Context_t123069135 ** get_address_of_context_5() { return &___context_5; }
	inline void set_context_5(Context_t123069135 * value)
	{
		___context_5 = value;
		Il2CppCodeGenWriteBarrier((&___context_5), value);
	}

	inline static int32_t get_offset_of_handshakeType_6() { return static_cast<int32_t>(offsetof(HandshakeMessage_t1610311895, ___handshakeType_6)); }
	inline uint8_t get_handshakeType_6() const { return ___handshakeType_6; }
	inline uint8_t* get_address_of_handshakeType_6() { return &___handshakeType_6; }
	inline void set_handshakeType_6(uint8_t value)
	{
		___handshakeType_6 = value;
	}

	inline static int32_t get_offset_of_contentType_7() { return static_cast<int32_t>(offsetof(HandshakeMessage_t1610311895, ___contentType_7)); }
	inline uint8_t get_contentType_7() const { return ___contentType_7; }
	inline uint8_t* get_address_of_contentType_7() { return &___contentType_7; }
	inline void set_contentType_7(uint8_t value)
	{
		___contentType_7 = value;
	}

	inline static int32_t get_offset_of_cache_8() { return static_cast<int32_t>(offsetof(HandshakeMessage_t1610311895, ___cache_8)); }
	inline ByteU5BU5D_t138760304* get_cache_8() const { return ___cache_8; }
	inline ByteU5BU5D_t138760304** get_address_of_cache_8() { return &___cache_8; }
	inline void set_cache_8(ByteU5BU5D_t138760304* value)
	{
		___cache_8 = value;
		Il2CppCodeGenWriteBarrier((&___cache_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDSHAKEMESSAGE_T1610311895_H
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
#ifndef MEMBERBINDING_T3161080580_H
#define MEMBERBINDING_T3161080580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBinding
struct  MemberBinding_t3161080580  : public RuntimeObject
{
public:
	// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::binding_type
	int32_t ___binding_type_0;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::member
	MemberInfo_t * ___member_1;

public:
	inline static int32_t get_offset_of_binding_type_0() { return static_cast<int32_t>(offsetof(MemberBinding_t3161080580, ___binding_type_0)); }
	inline int32_t get_binding_type_0() const { return ___binding_type_0; }
	inline int32_t* get_address_of_binding_type_0() { return &___binding_type_0; }
	inline void set_binding_type_0(int32_t value)
	{
		___binding_type_0 = value;
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(MemberBinding_t3161080580, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier((&___member_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERBINDING_T3161080580_H
#ifndef DATETIME_T584526854_H
#define DATETIME_T584526854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t584526854 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3503189249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t584526854, ___ticks_0)); }
	inline TimeSpan_t3503189249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3503189249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3503189249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t584526854, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t584526854_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t584526854  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t584526854  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t4119682326* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t4119682326* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t4119682326* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t4119682326* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t4119682326* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t4119682326* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t4119682326* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2629886273* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2629886273* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___MaxValue_2)); }
	inline DateTime_t584526854  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t584526854 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t584526854  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___MinValue_3)); }
	inline DateTime_t584526854  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t584526854 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t584526854  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t4119682326* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t4119682326** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t4119682326* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t4119682326* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t4119682326** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t4119682326* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t4119682326* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t4119682326** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t4119682326* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t4119682326* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t4119682326** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t4119682326* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t4119682326* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t4119682326** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t4119682326* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t4119682326* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t4119682326** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t4119682326* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t4119682326* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t4119682326** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t4119682326* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t2629886273* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t2629886273** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t2629886273* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t2629886273* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t2629886273** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t2629886273* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t584526854_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T584526854_H
#ifndef SYMMETRICALGORITHM_T880975428_H
#define SYMMETRICALGORITHM_T880975428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t880975428  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t138760304* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t138760304* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t3244502600* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3244502600* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___IVValue_1)); }
	inline ByteU5BU5D_t138760304* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t138760304** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t138760304* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___KeyValue_3)); }
	inline ByteU5BU5D_t138760304* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t138760304** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t138760304* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t3244502600* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t3244502600** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t3244502600* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t3244502600* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t3244502600** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t3244502600* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t880975428, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T880975428_H
#ifndef ACTION_T1780669612_H
#define ACTION_T1780669612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1780669612  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1780669612_H
#ifndef TRANSITIONTIME_T2338266701_H
#define TRANSITIONTIME_T2338266701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/TransitionTime
struct  TransitionTime_t2338266701 
{
public:
	// System.DateTime System.TimeZoneInfo/TransitionTime::timeOfDay
	DateTime_t584526854  ___timeOfDay_0;
	// System.Int32 System.TimeZoneInfo/TransitionTime::month
	int32_t ___month_1;
	// System.Int32 System.TimeZoneInfo/TransitionTime::day
	int32_t ___day_2;
	// System.Int32 System.TimeZoneInfo/TransitionTime::week
	int32_t ___week_3;
	// System.DayOfWeek System.TimeZoneInfo/TransitionTime::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Boolean System.TimeZoneInfo/TransitionTime::isFixedDateRule
	bool ___isFixedDateRule_5;

public:
	inline static int32_t get_offset_of_timeOfDay_0() { return static_cast<int32_t>(offsetof(TransitionTime_t2338266701, ___timeOfDay_0)); }
	inline DateTime_t584526854  get_timeOfDay_0() const { return ___timeOfDay_0; }
	inline DateTime_t584526854 * get_address_of_timeOfDay_0() { return &___timeOfDay_0; }
	inline void set_timeOfDay_0(DateTime_t584526854  value)
	{
		___timeOfDay_0 = value;
	}

	inline static int32_t get_offset_of_month_1() { return static_cast<int32_t>(offsetof(TransitionTime_t2338266701, ___month_1)); }
	inline int32_t get_month_1() const { return ___month_1; }
	inline int32_t* get_address_of_month_1() { return &___month_1; }
	inline void set_month_1(int32_t value)
	{
		___month_1 = value;
	}

	inline static int32_t get_offset_of_day_2() { return static_cast<int32_t>(offsetof(TransitionTime_t2338266701, ___day_2)); }
	inline int32_t get_day_2() const { return ___day_2; }
	inline int32_t* get_address_of_day_2() { return &___day_2; }
	inline void set_day_2(int32_t value)
	{
		___day_2 = value;
	}

	inline static int32_t get_offset_of_week_3() { return static_cast<int32_t>(offsetof(TransitionTime_t2338266701, ___week_3)); }
	inline int32_t get_week_3() const { return ___week_3; }
	inline int32_t* get_address_of_week_3() { return &___week_3; }
	inline void set_week_3(int32_t value)
	{
		___week_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(TransitionTime_t2338266701, ___dayOfWeek_4)); }
	inline int32_t get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline int32_t* get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(int32_t value)
	{
		___dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_isFixedDateRule_5() { return static_cast<int32_t>(offsetof(TransitionTime_t2338266701, ___isFixedDateRule_5)); }
	inline bool get_isFixedDateRule_5() const { return ___isFixedDateRule_5; }
	inline bool* get_address_of_isFixedDateRule_5() { return &___isFixedDateRule_5; }
	inline void set_isFixedDateRule_5(bool value)
	{
		___isFixedDateRule_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_t2338266701_marshaled_pinvoke
{
	DateTime_t584526854  ___timeOfDay_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___week_3;
	int32_t ___dayOfWeek_4;
	int32_t ___isFixedDateRule_5;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_t2338266701_marshaled_com
{
	DateTime_t584526854  ___timeOfDay_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___week_3;
	int32_t ___dayOfWeek_4;
	int32_t ___isFixedDateRule_5;
};
#endif // TRANSITIONTIME_T2338266701_H
#ifndef METHODCALLEXPRESSION_T331450639_H
#define METHODCALLEXPRESSION_T331450639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression
struct  MethodCallExpression_t331450639  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::obj
	Expression_t1073136545 * ___obj_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::method
	MethodInfo_t * ___method_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::arguments
	ReadOnlyCollection_1_t3271231022 * ___arguments_4;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(MethodCallExpression_t331450639, ___obj_2)); }
	inline Expression_t1073136545 * get_obj_2() const { return ___obj_2; }
	inline Expression_t1073136545 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(Expression_t1073136545 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(MethodCallExpression_t331450639, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier((&___method_3), value);
	}

	inline static int32_t get_offset_of_arguments_4() { return static_cast<int32_t>(offsetof(MethodCallExpression_t331450639, ___arguments_4)); }
	inline ReadOnlyCollection_1_t3271231022 * get_arguments_4() const { return ___arguments_4; }
	inline ReadOnlyCollection_1_t3271231022 ** get_address_of_arguments_4() { return &___arguments_4; }
	inline void set_arguments_4(ReadOnlyCollection_1_t3271231022 * value)
	{
		___arguments_4 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION_T331450639_H
#ifndef CONDITIONALEXPRESSION_T4018650922_H
#define CONDITIONALEXPRESSION_T4018650922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConditionalExpression
struct  ConditionalExpression_t4018650922  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::test
	Expression_t1073136545 * ___test_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_true
	Expression_t1073136545 * ___if_true_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_false
	Expression_t1073136545 * ___if_false_4;

public:
	inline static int32_t get_offset_of_test_2() { return static_cast<int32_t>(offsetof(ConditionalExpression_t4018650922, ___test_2)); }
	inline Expression_t1073136545 * get_test_2() const { return ___test_2; }
	inline Expression_t1073136545 ** get_address_of_test_2() { return &___test_2; }
	inline void set_test_2(Expression_t1073136545 * value)
	{
		___test_2 = value;
		Il2CppCodeGenWriteBarrier((&___test_2), value);
	}

	inline static int32_t get_offset_of_if_true_3() { return static_cast<int32_t>(offsetof(ConditionalExpression_t4018650922, ___if_true_3)); }
	inline Expression_t1073136545 * get_if_true_3() const { return ___if_true_3; }
	inline Expression_t1073136545 ** get_address_of_if_true_3() { return &___if_true_3; }
	inline void set_if_true_3(Expression_t1073136545 * value)
	{
		___if_true_3 = value;
		Il2CppCodeGenWriteBarrier((&___if_true_3), value);
	}

	inline static int32_t get_offset_of_if_false_4() { return static_cast<int32_t>(offsetof(ConditionalExpression_t4018650922, ___if_false_4)); }
	inline Expression_t1073136545 * get_if_false_4() const { return ___if_false_4; }
	inline Expression_t1073136545 ** get_address_of_if_false_4() { return &___if_false_4; }
	inline void set_if_false_4(Expression_t1073136545 * value)
	{
		___if_false_4 = value;
		Il2CppCodeGenWriteBarrier((&___if_false_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITIONALEXPRESSION_T4018650922_H
#ifndef TLSCLIENTKEYEXCHANGE_T4202983672_H
#define TLSCLIENTKEYEXCHANGE_T4202983672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange
struct  TlsClientKeyExchange_t4202983672  : public HandshakeMessage_t1610311895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSCLIENTKEYEXCHANGE_T4202983672_H
#ifndef TLSSERVERCERTIFICATE_T3907966258_H
#define TLSSERVERCERTIFICATE_T3907966258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct  TlsServerCertificate_t3907966258  : public HandshakeMessage_t1610311895
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::certificates
	X509CertificateCollection_t4205265902 * ___certificates_9;

public:
	inline static int32_t get_offset_of_certificates_9() { return static_cast<int32_t>(offsetof(TlsServerCertificate_t3907966258, ___certificates_9)); }
	inline X509CertificateCollection_t4205265902 * get_certificates_9() const { return ___certificates_9; }
	inline X509CertificateCollection_t4205265902 ** get_address_of_certificates_9() { return &___certificates_9; }
	inline void set_certificates_9(X509CertificateCollection_t4205265902 * value)
	{
		___certificates_9 = value;
		Il2CppCodeGenWriteBarrier((&___certificates_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSSERVERCERTIFICATE_T3907966258_H
#ifndef TLSSERVERCERTIFICATEREQUEST_T832587893_H
#define TLSSERVERCERTIFICATEREQUEST_T832587893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct  TlsServerCertificateRequest_t832587893  : public HandshakeMessage_t1610311895
{
public:
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::certificateTypes
	ClientCertificateTypeU5BU5D_t4076484170* ___certificateTypes_9;
	// System.String[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::distinguisedNames
	StringU5BU5D_t4119682326* ___distinguisedNames_10;

public:
	inline static int32_t get_offset_of_certificateTypes_9() { return static_cast<int32_t>(offsetof(TlsServerCertificateRequest_t832587893, ___certificateTypes_9)); }
	inline ClientCertificateTypeU5BU5D_t4076484170* get_certificateTypes_9() const { return ___certificateTypes_9; }
	inline ClientCertificateTypeU5BU5D_t4076484170** get_address_of_certificateTypes_9() { return &___certificateTypes_9; }
	inline void set_certificateTypes_9(ClientCertificateTypeU5BU5D_t4076484170* value)
	{
		___certificateTypes_9 = value;
		Il2CppCodeGenWriteBarrier((&___certificateTypes_9), value);
	}

	inline static int32_t get_offset_of_distinguisedNames_10() { return static_cast<int32_t>(offsetof(TlsServerCertificateRequest_t832587893, ___distinguisedNames_10)); }
	inline StringU5BU5D_t4119682326* get_distinguisedNames_10() const { return ___distinguisedNames_10; }
	inline StringU5BU5D_t4119682326** get_address_of_distinguisedNames_10() { return &___distinguisedNames_10; }
	inline void set_distinguisedNames_10(StringU5BU5D_t4119682326* value)
	{
		___distinguisedNames_10 = value;
		Il2CppCodeGenWriteBarrier((&___distinguisedNames_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSSERVERCERTIFICATEREQUEST_T832587893_H
#ifndef TLSSERVERFINISHED_T3214738597_H
#define TLSSERVERFINISHED_T3214738597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct  TlsServerFinished_t3214738597  : public HandshakeMessage_t1610311895
{
public:

public:
};

struct TlsServerFinished_t3214738597_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Ssl3Marker
	ByteU5BU5D_t138760304* ___Ssl3Marker_9;

public:
	inline static int32_t get_offset_of_Ssl3Marker_9() { return static_cast<int32_t>(offsetof(TlsServerFinished_t3214738597_StaticFields, ___Ssl3Marker_9)); }
	inline ByteU5BU5D_t138760304* get_Ssl3Marker_9() const { return ___Ssl3Marker_9; }
	inline ByteU5BU5D_t138760304** get_address_of_Ssl3Marker_9() { return &___Ssl3Marker_9; }
	inline void set_Ssl3Marker_9(ByteU5BU5D_t138760304* value)
	{
		___Ssl3Marker_9 = value;
		Il2CppCodeGenWriteBarrier((&___Ssl3Marker_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSSERVERFINISHED_T3214738597_H
#ifndef TLSSERVERHELLO_T4003631948_H
#define TLSSERVERHELLO_T4003631948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct  TlsServerHello_t4003631948  : public HandshakeMessage_t1610311895
{
public:
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::compressionMethod
	int32_t ___compressionMethod_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::random
	ByteU5BU5D_t138760304* ___random_10;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::sessionId
	ByteU5BU5D_t138760304* ___sessionId_11;
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::cipherSuite
	CipherSuite_t3024930390 * ___cipherSuite_12;

public:
	inline static int32_t get_offset_of_compressionMethod_9() { return static_cast<int32_t>(offsetof(TlsServerHello_t4003631948, ___compressionMethod_9)); }
	inline int32_t get_compressionMethod_9() const { return ___compressionMethod_9; }
	inline int32_t* get_address_of_compressionMethod_9() { return &___compressionMethod_9; }
	inline void set_compressionMethod_9(int32_t value)
	{
		___compressionMethod_9 = value;
	}

	inline static int32_t get_offset_of_random_10() { return static_cast<int32_t>(offsetof(TlsServerHello_t4003631948, ___random_10)); }
	inline ByteU5BU5D_t138760304* get_random_10() const { return ___random_10; }
	inline ByteU5BU5D_t138760304** get_address_of_random_10() { return &___random_10; }
	inline void set_random_10(ByteU5BU5D_t138760304* value)
	{
		___random_10 = value;
		Il2CppCodeGenWriteBarrier((&___random_10), value);
	}

	inline static int32_t get_offset_of_sessionId_11() { return static_cast<int32_t>(offsetof(TlsServerHello_t4003631948, ___sessionId_11)); }
	inline ByteU5BU5D_t138760304* get_sessionId_11() const { return ___sessionId_11; }
	inline ByteU5BU5D_t138760304** get_address_of_sessionId_11() { return &___sessionId_11; }
	inline void set_sessionId_11(ByteU5BU5D_t138760304* value)
	{
		___sessionId_11 = value;
		Il2CppCodeGenWriteBarrier((&___sessionId_11), value);
	}

	inline static int32_t get_offset_of_cipherSuite_12() { return static_cast<int32_t>(offsetof(TlsServerHello_t4003631948, ___cipherSuite_12)); }
	inline CipherSuite_t3024930390 * get_cipherSuite_12() const { return ___cipherSuite_12; }
	inline CipherSuite_t3024930390 ** get_address_of_cipherSuite_12() { return &___cipherSuite_12; }
	inline void set_cipherSuite_12(CipherSuite_t3024930390 * value)
	{
		___cipherSuite_12 = value;
		Il2CppCodeGenWriteBarrier((&___cipherSuite_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSSERVERHELLO_T4003631948_H
#ifndef TLSSERVERHELLODONE_T2703040681_H
#define TLSSERVERHELLODONE_T2703040681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct  TlsServerHelloDone_t2703040681  : public HandshakeMessage_t1610311895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSSERVERHELLODONE_T2703040681_H
#ifndef TLSSERVERKEYEXCHANGE_T145457703_H
#define TLSSERVERKEYEXCHANGE_T145457703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct  TlsServerKeyExchange_t145457703  : public HandshakeMessage_t1610311895
{
public:
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::rsaParams
	RSAParameters_t2209974036  ___rsaParams_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::signedParams
	ByteU5BU5D_t138760304* ___signedParams_10;

public:
	inline static int32_t get_offset_of_rsaParams_9() { return static_cast<int32_t>(offsetof(TlsServerKeyExchange_t145457703, ___rsaParams_9)); }
	inline RSAParameters_t2209974036  get_rsaParams_9() const { return ___rsaParams_9; }
	inline RSAParameters_t2209974036 * get_address_of_rsaParams_9() { return &___rsaParams_9; }
	inline void set_rsaParams_9(RSAParameters_t2209974036  value)
	{
		___rsaParams_9 = value;
	}

	inline static int32_t get_offset_of_signedParams_10() { return static_cast<int32_t>(offsetof(TlsServerKeyExchange_t145457703, ___signedParams_10)); }
	inline ByteU5BU5D_t138760304* get_signedParams_10() const { return ___signedParams_10; }
	inline ByteU5BU5D_t138760304** get_address_of_signedParams_10() { return &___signedParams_10; }
	inline void set_signedParams_10(ByteU5BU5D_t138760304* value)
	{
		___signedParams_10 = value;
		Il2CppCodeGenWriteBarrier((&___signedParams_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSSERVERKEYEXCHANGE_T145457703_H
#ifndef PRIMALITYTEST_T1986528758_H
#define PRIMALITYTEST_T1986528758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t1986528758  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T1986528758_H
#ifndef CERTIFICATEVALIDATIONCALLBACK_T85219586_H
#define CERTIFICATEVALIDATIONCALLBACK_T85219586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct  CertificateValidationCallback_t85219586  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATEVALIDATIONCALLBACK_T85219586_H
#ifndef CERTIFICATEVALIDATIONCALLBACK2_T1719435964_H
#define CERTIFICATEVALIDATIONCALLBACK2_T1719435964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct  CertificateValidationCallback2_t1719435964  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATEVALIDATIONCALLBACK2_T1719435964_H
#ifndef CERTIFICATESELECTIONCALLBACK_T1550821580_H
#define CERTIFICATESELECTIONCALLBACK_T1550821580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct  CertificateSelectionCallback_t1550821580  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATESELECTIONCALLBACK_T1550821580_H
#ifndef PRIVATEKEYSELECTIONCALLBACK_T2271640658_H
#define PRIVATEKEYSELECTIONCALLBACK_T2271640658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct  PrivateKeySelectionCallback_t2271640658  : public MulticastDelegate_t2319271190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYSELECTIONCALLBACK_T2271640658_H
#ifndef LAMBDAEXPRESSION_T3940903098_H
#define LAMBDAEXPRESSION_T3940903098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t3940903098  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t1073136545 * ___body_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t2699226147 * ___parameters_3;

public:
	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(LambdaExpression_t3940903098, ___body_2)); }
	inline Expression_t1073136545 * get_body_2() const { return ___body_2; }
	inline Expression_t1073136545 ** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(Expression_t1073136545 * value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((&___body_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t3940903098, ___parameters_3)); }
	inline ReadOnlyCollection_1_t2699226147 * get_parameters_3() const { return ___parameters_3; }
	inline ReadOnlyCollection_1_t2699226147 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(ReadOnlyCollection_1_t2699226147 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMBDAEXPRESSION_T3940903098_H
#ifndef BINARYEXPRESSION_T4147785036_H
#define BINARYEXPRESSION_T4147785036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BinaryExpression
struct  BinaryExpression_t4147785036  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t1073136545 * ___left_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t1073136545 * ___right_3;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t3940903098 * ___conversion_4;
	// System.Reflection.MethodInfo System.Linq.Expressions.BinaryExpression::method
	MethodInfo_t * ___method_5;
	// System.Boolean System.Linq.Expressions.BinaryExpression::lift_to_null
	bool ___lift_to_null_6;
	// System.Boolean System.Linq.Expressions.BinaryExpression::is_lifted
	bool ___is_lifted_7;

public:
	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(BinaryExpression_t4147785036, ___left_2)); }
	inline Expression_t1073136545 * get_left_2() const { return ___left_2; }
	inline Expression_t1073136545 ** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(Expression_t1073136545 * value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier((&___left_2), value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(BinaryExpression_t4147785036, ___right_3)); }
	inline Expression_t1073136545 * get_right_3() const { return ___right_3; }
	inline Expression_t1073136545 ** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(Expression_t1073136545 * value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier((&___right_3), value);
	}

	inline static int32_t get_offset_of_conversion_4() { return static_cast<int32_t>(offsetof(BinaryExpression_t4147785036, ___conversion_4)); }
	inline LambdaExpression_t3940903098 * get_conversion_4() const { return ___conversion_4; }
	inline LambdaExpression_t3940903098 ** get_address_of_conversion_4() { return &___conversion_4; }
	inline void set_conversion_4(LambdaExpression_t3940903098 * value)
	{
		___conversion_4 = value;
		Il2CppCodeGenWriteBarrier((&___conversion_4), value);
	}

	inline static int32_t get_offset_of_method_5() { return static_cast<int32_t>(offsetof(BinaryExpression_t4147785036, ___method_5)); }
	inline MethodInfo_t * get_method_5() const { return ___method_5; }
	inline MethodInfo_t ** get_address_of_method_5() { return &___method_5; }
	inline void set_method_5(MethodInfo_t * value)
	{
		___method_5 = value;
		Il2CppCodeGenWriteBarrier((&___method_5), value);
	}

	inline static int32_t get_offset_of_lift_to_null_6() { return static_cast<int32_t>(offsetof(BinaryExpression_t4147785036, ___lift_to_null_6)); }
	inline bool get_lift_to_null_6() const { return ___lift_to_null_6; }
	inline bool* get_address_of_lift_to_null_6() { return &___lift_to_null_6; }
	inline void set_lift_to_null_6(bool value)
	{
		___lift_to_null_6 = value;
	}

	inline static int32_t get_offset_of_is_lifted_7() { return static_cast<int32_t>(offsetof(BinaryExpression_t4147785036, ___is_lifted_7)); }
	inline bool get_is_lifted_7() const { return ___is_lifted_7; }
	inline bool* get_address_of_is_lifted_7() { return &___is_lifted_7; }
	inline void set_is_lifted_7(bool value)
	{
		___is_lifted_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYEXPRESSION_T4147785036_H
#ifndef TLSCLIENTHELLO_T693943665_H
#define TLSCLIENTHELLO_T693943665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello
struct  TlsClientHello_t693943665  : public HandshakeMessage_t1610311895
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::random
	ByteU5BU5D_t138760304* ___random_9;

public:
	inline static int32_t get_offset_of_random_9() { return static_cast<int32_t>(offsetof(TlsClientHello_t693943665, ___random_9)); }
	inline ByteU5BU5D_t138760304* get_random_9() const { return ___random_9; }
	inline ByteU5BU5D_t138760304** get_address_of_random_9() { return &___random_9; }
	inline void set_random_9(ByteU5BU5D_t138760304* value)
	{
		___random_9 = value;
		Il2CppCodeGenWriteBarrier((&___random_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSCLIENTHELLO_T693943665_H
#ifndef CONSTANTEXPRESSION_T2790213901_H
#define CONSTANTEXPRESSION_T2790213901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConstantExpression
struct  ConstantExpression_t2790213901  : public Expression_t1073136545
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ConstantExpression_t2790213901, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTEXPRESSION_T2790213901_H
#ifndef INVOCATIONEXPRESSION_T3833944527_H
#define INVOCATIONEXPRESSION_T3833944527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression
struct  InvocationExpression_t3833944527  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::expression
	Expression_t1073136545 * ___expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpression::arguments
	ReadOnlyCollection_1_t3271231022 * ___arguments_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(InvocationExpression_t3833944527, ___expression_2)); }
	inline Expression_t1073136545 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1073136545 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1073136545 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_arguments_3() { return static_cast<int32_t>(offsetof(InvocationExpression_t3833944527, ___arguments_3)); }
	inline ReadOnlyCollection_1_t3271231022 * get_arguments_3() const { return ___arguments_3; }
	inline ReadOnlyCollection_1_t3271231022 ** get_address_of_arguments_3() { return &___arguments_3; }
	inline void set_arguments_3(ReadOnlyCollection_1_t3271231022 * value)
	{
		___arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION_T3833944527_H
#ifndef LISTINITEXPRESSION_T1156253830_H
#define LISTINITEXPRESSION_T1156253830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ListInitExpression
struct  ListInitExpression_t1156253830  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::new_expression
	NewExpression_t2222008053 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::initializers
	ReadOnlyCollection_1_t1236223468 * ___initializers_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(ListInitExpression_t1156253830, ___new_expression_2)); }
	inline NewExpression_t2222008053 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t2222008053 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t2222008053 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___new_expression_2), value);
	}

	inline static int32_t get_offset_of_initializers_3() { return static_cast<int32_t>(offsetof(ListInitExpression_t1156253830, ___initializers_3)); }
	inline ReadOnlyCollection_1_t1236223468 * get_initializers_3() const { return ___initializers_3; }
	inline ReadOnlyCollection_1_t1236223468 ** get_address_of_initializers_3() { return &___initializers_3; }
	inline void set_initializers_3(ReadOnlyCollection_1_t1236223468 * value)
	{
		___initializers_3 = value;
		Il2CppCodeGenWriteBarrier((&___initializers_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTINITEXPRESSION_T1156253830_H
#ifndef MEMBERASSIGNMENT_T1191847932_H
#define MEMBERASSIGNMENT_T1191847932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberAssignment
struct  MemberAssignment_t1191847932  : public MemberBinding_t3161080580
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberAssignment::expression
	Expression_t1073136545 * ___expression_2;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(MemberAssignment_t1191847932, ___expression_2)); }
	inline Expression_t1073136545 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1073136545 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1073136545 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERASSIGNMENT_T1191847932_H
#ifndef MEMBEREXPRESSION_T107833831_H
#define MEMBEREXPRESSION_T107833831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberExpression
struct  MemberExpression_t107833831  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::expression
	Expression_t1073136545 * ___expression_2;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::member
	MemberInfo_t * ___member_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(MemberExpression_t107833831, ___expression_2)); }
	inline Expression_t1073136545 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1073136545 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1073136545 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_member_3() { return static_cast<int32_t>(offsetof(MemberExpression_t107833831, ___member_3)); }
	inline MemberInfo_t * get_member_3() const { return ___member_3; }
	inline MemberInfo_t ** get_address_of_member_3() { return &___member_3; }
	inline void set_member_3(MemberInfo_t * value)
	{
		___member_3 = value;
		Il2CppCodeGenWriteBarrier((&___member_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBEREXPRESSION_T107833831_H
#ifndef MEMBERINITEXPRESSION_T3333104064_H
#define MEMBERINITEXPRESSION_T3333104064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberInitExpression
struct  MemberInitExpression_t3333104064  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::new_expression
	NewExpression_t2222008053 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::bindings
	ReadOnlyCollection_1_t1064207761 * ___bindings_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(MemberInitExpression_t3333104064, ___new_expression_2)); }
	inline NewExpression_t2222008053 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t2222008053 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t2222008053 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___new_expression_2), value);
	}

	inline static int32_t get_offset_of_bindings_3() { return static_cast<int32_t>(offsetof(MemberInitExpression_t3333104064, ___bindings_3)); }
	inline ReadOnlyCollection_1_t1064207761 * get_bindings_3() const { return ___bindings_3; }
	inline ReadOnlyCollection_1_t1064207761 ** get_address_of_bindings_3() { return &___bindings_3; }
	inline void set_bindings_3(ReadOnlyCollection_1_t1064207761 * value)
	{
		___bindings_3 = value;
		Il2CppCodeGenWriteBarrier((&___bindings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINITEXPRESSION_T3333104064_H
#ifndef MEMBERLISTBINDING_T1737903764_H
#define MEMBERLISTBINDING_T1737903764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberListBinding
struct  MemberListBinding_t1737903764  : public MemberBinding_t3161080580
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.MemberListBinding::initializers
	ReadOnlyCollection_1_t1236223468 * ___initializers_2;

public:
	inline static int32_t get_offset_of_initializers_2() { return static_cast<int32_t>(offsetof(MemberListBinding_t1737903764, ___initializers_2)); }
	inline ReadOnlyCollection_1_t1236223468 * get_initializers_2() const { return ___initializers_2; }
	inline ReadOnlyCollection_1_t1236223468 ** get_address_of_initializers_2() { return &___initializers_2; }
	inline void set_initializers_2(ReadOnlyCollection_1_t1236223468 * value)
	{
		___initializers_2 = value;
		Il2CppCodeGenWriteBarrier((&___initializers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERLISTBINDING_T1737903764_H
#ifndef MEMBERMEMBERBINDING_T2901417240_H
#define MEMBERMEMBERBINDING_T2901417240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberMemberBinding
struct  MemberMemberBinding_t2901417240  : public MemberBinding_t3161080580
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberMemberBinding::bindings
	ReadOnlyCollection_1_t1064207761 * ___bindings_2;

public:
	inline static int32_t get_offset_of_bindings_2() { return static_cast<int32_t>(offsetof(MemberMemberBinding_t2901417240, ___bindings_2)); }
	inline ReadOnlyCollection_1_t1064207761 * get_bindings_2() const { return ___bindings_2; }
	inline ReadOnlyCollection_1_t1064207761 ** get_address_of_bindings_2() { return &___bindings_2; }
	inline void set_bindings_2(ReadOnlyCollection_1_t1064207761 * value)
	{
		___bindings_2 = value;
		Il2CppCodeGenWriteBarrier((&___bindings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERMEMBERBINDING_T2901417240_H
#ifndef NEWARRAYEXPRESSION_T1503959308_H
#define NEWARRAYEXPRESSION_T1503959308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewArrayExpression
struct  NewArrayExpression_t1503959308  : public Expression_t1073136545
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::expressions
	ReadOnlyCollection_1_t3271231022 * ___expressions_2;

public:
	inline static int32_t get_offset_of_expressions_2() { return static_cast<int32_t>(offsetof(NewArrayExpression_t1503959308, ___expressions_2)); }
	inline ReadOnlyCollection_1_t3271231022 * get_expressions_2() const { return ___expressions_2; }
	inline ReadOnlyCollection_1_t3271231022 ** get_address_of_expressions_2() { return &___expressions_2; }
	inline void set_expressions_2(ReadOnlyCollection_1_t3271231022 * value)
	{
		___expressions_2 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWARRAYEXPRESSION_T1503959308_H
#ifndef NEWEXPRESSION_T2222008053_H
#define NEWEXPRESSION_T2222008053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewExpression
struct  NewExpression_t2222008053  : public Expression_t1073136545
{
public:
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::constructor
	ConstructorInfo_t1228266513 * ___constructor_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::arguments
	ReadOnlyCollection_1_t3271231022 * ___arguments_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::members
	ReadOnlyCollection_1_t912264516 * ___members_4;

public:
	inline static int32_t get_offset_of_constructor_2() { return static_cast<int32_t>(offsetof(NewExpression_t2222008053, ___constructor_2)); }
	inline ConstructorInfo_t1228266513 * get_constructor_2() const { return ___constructor_2; }
	inline ConstructorInfo_t1228266513 ** get_address_of_constructor_2() { return &___constructor_2; }
	inline void set_constructor_2(ConstructorInfo_t1228266513 * value)
	{
		___constructor_2 = value;
		Il2CppCodeGenWriteBarrier((&___constructor_2), value);
	}

	inline static int32_t get_offset_of_arguments_3() { return static_cast<int32_t>(offsetof(NewExpression_t2222008053, ___arguments_3)); }
	inline ReadOnlyCollection_1_t3271231022 * get_arguments_3() const { return ___arguments_3; }
	inline ReadOnlyCollection_1_t3271231022 ** get_address_of_arguments_3() { return &___arguments_3; }
	inline void set_arguments_3(ReadOnlyCollection_1_t3271231022 * value)
	{
		___arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_3), value);
	}

	inline static int32_t get_offset_of_members_4() { return static_cast<int32_t>(offsetof(NewExpression_t2222008053, ___members_4)); }
	inline ReadOnlyCollection_1_t912264516 * get_members_4() const { return ___members_4; }
	inline ReadOnlyCollection_1_t912264516 ** get_address_of_members_4() { return &___members_4; }
	inline void set_members_4(ReadOnlyCollection_1_t912264516 * value)
	{
		___members_4 = value;
		Il2CppCodeGenWriteBarrier((&___members_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWEXPRESSION_T2222008053_H
#ifndef PARAMETEREXPRESSION_T501131670_H
#define PARAMETEREXPRESSION_T501131670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_t501131670  : public Expression_t1073136545
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ParameterExpression_t501131670, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEREXPRESSION_T501131670_H
#ifndef TYPEBINARYEXPRESSION_T3859887481_H
#define TYPEBINARYEXPRESSION_T3859887481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypeBinaryExpression
struct  TypeBinaryExpression_t3859887481  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.TypeBinaryExpression::expression
	Expression_t1073136545 * ___expression_2;
	// System.Type System.Linq.Expressions.TypeBinaryExpression::type_operand
	Type_t * ___type_operand_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(TypeBinaryExpression_t3859887481, ___expression_2)); }
	inline Expression_t1073136545 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1073136545 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1073136545 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_type_operand_3() { return static_cast<int32_t>(offsetof(TypeBinaryExpression_t3859887481, ___type_operand_3)); }
	inline Type_t * get_type_operand_3() const { return ___type_operand_3; }
	inline Type_t ** get_address_of_type_operand_3() { return &___type_operand_3; }
	inline void set_type_operand_3(Type_t * value)
	{
		___type_operand_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_operand_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBINARYEXPRESSION_T3859887481_H
#ifndef UNARYEXPRESSION_T660415213_H
#define UNARYEXPRESSION_T660415213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.UnaryExpression
struct  UnaryExpression_t660415213  : public Expression_t1073136545
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::operand
	Expression_t1073136545 * ___operand_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::method
	MethodInfo_t * ___method_3;
	// System.Boolean System.Linq.Expressions.UnaryExpression::is_lifted
	bool ___is_lifted_4;

public:
	inline static int32_t get_offset_of_operand_2() { return static_cast<int32_t>(offsetof(UnaryExpression_t660415213, ___operand_2)); }
	inline Expression_t1073136545 * get_operand_2() const { return ___operand_2; }
	inline Expression_t1073136545 ** get_address_of_operand_2() { return &___operand_2; }
	inline void set_operand_2(Expression_t1073136545 * value)
	{
		___operand_2 = value;
		Il2CppCodeGenWriteBarrier((&___operand_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(UnaryExpression_t660415213, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier((&___method_3), value);
	}

	inline static int32_t get_offset_of_is_lifted_4() { return static_cast<int32_t>(offsetof(UnaryExpression_t660415213, ___is_lifted_4)); }
	inline bool get_is_lifted_4() const { return ___is_lifted_4; }
	inline bool* get_address_of_is_lifted_4() { return &___is_lifted_4; }
	inline void set_is_lifted_4(bool value)
	{
		___is_lifted_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNARYEXPRESSION_T660415213_H
#ifndef AES_T2744671714_H
#define AES_T2744671714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t2744671714  : public SymmetricAlgorithm_t880975428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T2744671714_H
#ifndef ADJUSTMENTRULE_T109165635_H
#define ADJUSTMENTRULE_T109165635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/AdjustmentRule
struct  AdjustmentRule_t109165635  : public RuntimeObject
{
public:
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateEnd
	DateTime_t584526854  ___dateEnd_0;
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateStart
	DateTime_t584526854  ___dateStart_1;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::daylightDelta
	TimeSpan_t3503189249  ___daylightDelta_2;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionEnd
	TransitionTime_t2338266701  ___daylightTransitionEnd_3;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionStart
	TransitionTime_t2338266701  ___daylightTransitionStart_4;

public:
	inline static int32_t get_offset_of_dateEnd_0() { return static_cast<int32_t>(offsetof(AdjustmentRule_t109165635, ___dateEnd_0)); }
	inline DateTime_t584526854  get_dateEnd_0() const { return ___dateEnd_0; }
	inline DateTime_t584526854 * get_address_of_dateEnd_0() { return &___dateEnd_0; }
	inline void set_dateEnd_0(DateTime_t584526854  value)
	{
		___dateEnd_0 = value;
	}

	inline static int32_t get_offset_of_dateStart_1() { return static_cast<int32_t>(offsetof(AdjustmentRule_t109165635, ___dateStart_1)); }
	inline DateTime_t584526854  get_dateStart_1() const { return ___dateStart_1; }
	inline DateTime_t584526854 * get_address_of_dateStart_1() { return &___dateStart_1; }
	inline void set_dateStart_1(DateTime_t584526854  value)
	{
		___dateStart_1 = value;
	}

	inline static int32_t get_offset_of_daylightDelta_2() { return static_cast<int32_t>(offsetof(AdjustmentRule_t109165635, ___daylightDelta_2)); }
	inline TimeSpan_t3503189249  get_daylightDelta_2() const { return ___daylightDelta_2; }
	inline TimeSpan_t3503189249 * get_address_of_daylightDelta_2() { return &___daylightDelta_2; }
	inline void set_daylightDelta_2(TimeSpan_t3503189249  value)
	{
		___daylightDelta_2 = value;
	}

	inline static int32_t get_offset_of_daylightTransitionEnd_3() { return static_cast<int32_t>(offsetof(AdjustmentRule_t109165635, ___daylightTransitionEnd_3)); }
	inline TransitionTime_t2338266701  get_daylightTransitionEnd_3() const { return ___daylightTransitionEnd_3; }
	inline TransitionTime_t2338266701 * get_address_of_daylightTransitionEnd_3() { return &___daylightTransitionEnd_3; }
	inline void set_daylightTransitionEnd_3(TransitionTime_t2338266701  value)
	{
		___daylightTransitionEnd_3 = value;
	}

	inline static int32_t get_offset_of_daylightTransitionStart_4() { return static_cast<int32_t>(offsetof(AdjustmentRule_t109165635, ___daylightTransitionStart_4)); }
	inline TransitionTime_t2338266701  get_daylightTransitionStart_4() const { return ___daylightTransitionStart_4; }
	inline TransitionTime_t2338266701 * get_address_of_daylightTransitionStart_4() { return &___daylightTransitionStart_4; }
	inline void set_daylightTransitionStart_4(TransitionTime_t2338266701  value)
	{
		___daylightTransitionStart_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADJUSTMENTRULE_T109165635_H
#ifndef AESMANAGED_T2876048474_H
#define AESMANAGED_T2876048474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t2876048474  : public Aes_t2744671714
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T2876048474_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (TlsClientHello_t693943665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[1] = 
{
	TlsClientHello_t693943665::get_offset_of_random_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (TlsClientKeyExchange_t4202983672), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (TlsServerCertificate_t3907966258), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1402[1] = 
{
	TlsServerCertificate_t3907966258::get_offset_of_certificates_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (TlsServerCertificateRequest_t832587893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1403[2] = 
{
	TlsServerCertificateRequest_t832587893::get_offset_of_certificateTypes_9(),
	TlsServerCertificateRequest_t832587893::get_offset_of_distinguisedNames_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (TlsServerFinished_t3214738597), -1, sizeof(TlsServerFinished_t3214738597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1404[1] = 
{
	TlsServerFinished_t3214738597_StaticFields::get_offset_of_Ssl3Marker_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (TlsServerHello_t4003631948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1405[4] = 
{
	TlsServerHello_t4003631948::get_offset_of_compressionMethod_9(),
	TlsServerHello_t4003631948::get_offset_of_random_10(),
	TlsServerHello_t4003631948::get_offset_of_sessionId_11(),
	TlsServerHello_t4003631948::get_offset_of_cipherSuite_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (TlsServerHelloDone_t2703040681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (TlsServerKeyExchange_t145457703), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[2] = 
{
	TlsServerKeyExchange_t145457703::get_offset_of_rsaParams_9(),
	TlsServerKeyExchange_t145457703::get_offset_of_signedParams_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (PrimalityTest_t1986528758), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (CertificateValidationCallback_t85219586), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (CertificateValidationCallback2_t1719435964), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (CertificateSelectionCallback_t1550821580), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (PrivateKeySelectionCallback_t2271640658), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (U3CPrivateImplementationDetailsU3E_t2072089982), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1413[15] = 
{
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D5_1(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D6_2(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D7_3(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D8_4(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D9_5(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D11_6(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D12_7(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D13_8(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D14_9(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D15_10(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D16_11(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D17_12(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t2072089982_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (U24ArrayTypeU243132_t1716869836)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t1716869836 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (U24ArrayTypeU24256_t881199257)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t881199257 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (U24ArrayTypeU2420_t4012419755)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t4012419755 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (U24ArrayTypeU2432_t239390072)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t239390072 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (U24ArrayTypeU2448_t963713228)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t963713228 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (U24ArrayTypeU2464_t3002942121)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t3002942121 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (U24ArrayTypeU2412_t2374606689)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t2374606689 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (U24ArrayTypeU2416_t389290092)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t389290092 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (U24ArrayTypeU244_t3768510325)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU244_t3768510325 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (U3CModuleU3E_t1026634777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (ExtensionAttribute_t2211047782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (LambdaExpression_t3940903098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1426[2] = 
{
	LambdaExpression_t3940903098::get_offset_of_body_2(),
	LambdaExpression_t3940903098::get_offset_of_parameters_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (Expression_t1073136545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1427[2] = 
{
	Expression_t1073136545::get_offset_of_node_type_0(),
	Expression_t1073136545::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (Locale_t642258376), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (MonoTODOAttribute_t618752913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (KeyBuilder_t1011092278), -1, sizeof(KeyBuilder_t1011092278_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1430[1] = 
{
	KeyBuilder_t1011092278_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (SymmetricTransform_t3370709421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1431[12] = 
{
	SymmetricTransform_t3370709421::get_offset_of_algo_0(),
	SymmetricTransform_t3370709421::get_offset_of_encrypt_1(),
	SymmetricTransform_t3370709421::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t3370709421::get_offset_of_temp_3(),
	SymmetricTransform_t3370709421::get_offset_of_temp2_4(),
	SymmetricTransform_t3370709421::get_offset_of_workBuff_5(),
	SymmetricTransform_t3370709421::get_offset_of_workout_6(),
	SymmetricTransform_t3370709421::get_offset_of_FeedBackByte_7(),
	SymmetricTransform_t3370709421::get_offset_of_FeedBackIter_8(),
	SymmetricTransform_t3370709421::get_offset_of_m_disposed_9(),
	SymmetricTransform_t3370709421::get_offset_of_lastBlock_10(),
	SymmetricTransform_t3370709421::get_offset_of__rng_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1432[14] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1433[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1434[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1435[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (BinaryExpression_t4147785036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1436[6] = 
{
	BinaryExpression_t4147785036::get_offset_of_left_2(),
	BinaryExpression_t4147785036::get_offset_of_right_3(),
	BinaryExpression_t4147785036::get_offset_of_conversion_4(),
	BinaryExpression_t4147785036::get_offset_of_method_5(),
	BinaryExpression_t4147785036::get_offset_of_lift_to_null_6(),
	BinaryExpression_t4147785036::get_offset_of_is_lifted_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (ConditionalExpression_t4018650922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[3] = 
{
	ConditionalExpression_t4018650922::get_offset_of_test_2(),
	ConditionalExpression_t4018650922::get_offset_of_if_true_3(),
	ConditionalExpression_t4018650922::get_offset_of_if_false_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (ConstantExpression_t2790213901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1438[1] = 
{
	ConstantExpression_t2790213901::get_offset_of_value_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (ElementInit_t3333096287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[2] = 
{
	ElementInit_t3333096287::get_offset_of_add_method_0(),
	ElementInit_t3333096287::get_offset_of_arguments_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (ExpressionPrinter_t2618516411), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1440[1] = 
{
	ExpressionPrinter_t2618516411::get_offset_of_builder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (ExpressionType_t1272385551)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1441[47] = 
{
	ExpressionType_t1272385551::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (ExpressionVisitor_t4048791101), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (Extensions_t4237486425), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (InvocationExpression_t3833944527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1444[2] = 
{
	InvocationExpression_t3833944527::get_offset_of_expression_2(),
	InvocationExpression_t3833944527::get_offset_of_arguments_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (ListInitExpression_t1156253830), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1445[2] = 
{
	ListInitExpression_t1156253830::get_offset_of_new_expression_2(),
	ListInitExpression_t1156253830::get_offset_of_initializers_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (MemberAssignment_t1191847932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1446[1] = 
{
	MemberAssignment_t1191847932::get_offset_of_expression_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (MemberBinding_t3161080580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1447[2] = 
{
	MemberBinding_t3161080580::get_offset_of_binding_type_0(),
	MemberBinding_t3161080580::get_offset_of_member_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (MemberBindingType_t740424134)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1448[4] = 
{
	MemberBindingType_t740424134::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (MemberExpression_t107833831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1449[2] = 
{
	MemberExpression_t107833831::get_offset_of_expression_2(),
	MemberExpression_t107833831::get_offset_of_member_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (MemberInitExpression_t3333104064), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1450[2] = 
{
	MemberInitExpression_t3333104064::get_offset_of_new_expression_2(),
	MemberInitExpression_t3333104064::get_offset_of_bindings_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (MemberListBinding_t1737903764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1451[1] = 
{
	MemberListBinding_t1737903764::get_offset_of_initializers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (MemberMemberBinding_t2901417240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1452[1] = 
{
	MemberMemberBinding_t2901417240::get_offset_of_bindings_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (MethodCallExpression_t331450639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[3] = 
{
	MethodCallExpression_t331450639::get_offset_of_obj_2(),
	MethodCallExpression_t331450639::get_offset_of_method_3(),
	MethodCallExpression_t331450639::get_offset_of_arguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (NewArrayExpression_t1503959308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1454[1] = 
{
	NewArrayExpression_t1503959308::get_offset_of_expressions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (NewExpression_t2222008053), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1455[3] = 
{
	NewExpression_t2222008053::get_offset_of_constructor_2(),
	NewExpression_t2222008053::get_offset_of_arguments_3(),
	NewExpression_t2222008053::get_offset_of_members_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (ParameterExpression_t501131670), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1456[1] = 
{
	ParameterExpression_t501131670::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (TypeBinaryExpression_t3859887481), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1457[2] = 
{
	TypeBinaryExpression_t3859887481::get_offset_of_expression_2(),
	TypeBinaryExpression_t3859887481::get_offset_of_type_operand_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (UnaryExpression_t660415213), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1458[3] = 
{
	UnaryExpression_t660415213::get_offset_of_operand_2(),
	UnaryExpression_t660415213::get_offset_of_method_3(),
	UnaryExpression_t660415213::get_offset_of_is_lifted_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (Check_t971143985), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (Enumerable_t1546757032), -1, sizeof(Enumerable_t1546757032_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1460[1] = 
{
	Enumerable_t1546757032_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (Fallback_t520553317)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1461[3] = 
{
	Fallback_t520553317::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1462[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1463[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1464[9] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[18] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1466[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1467[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1468[10] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[13] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1470[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1471[9] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1472[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1473[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1476[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1477[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1478[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1479[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1480[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (SortDirection_t1847859233)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1481[3] = 
{
	SortDirection_t1847859233::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1482[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (Aes_t2744671714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (AesManaged_t2876048474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (AesTransform_t59149347), -1, sizeof(AesTransform_t59149347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1485[14] = 
{
	AesTransform_t59149347::get_offset_of_expandedKey_12(),
	AesTransform_t59149347::get_offset_of_Nk_13(),
	AesTransform_t59149347::get_offset_of_Nr_14(),
	AesTransform_t59149347_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t59149347_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t59149347_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t59149347_StaticFields::get_offset_of_T0_18(),
	AesTransform_t59149347_StaticFields::get_offset_of_T1_19(),
	AesTransform_t59149347_StaticFields::get_offset_of_T2_20(),
	AesTransform_t59149347_StaticFields::get_offset_of_T3_21(),
	AesTransform_t59149347_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t59149347_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t59149347_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t59149347_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (InvalidTimeZoneException_t1254111066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (TimeZoneInfo_t4141160514), -1, sizeof(TimeZoneInfo_t4141160514_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1487[10] = 
{
	TimeZoneInfo_t4141160514::get_offset_of_baseUtcOffset_0(),
	TimeZoneInfo_t4141160514::get_offset_of_daylightDisplayName_1(),
	TimeZoneInfo_t4141160514::get_offset_of_displayName_2(),
	TimeZoneInfo_t4141160514::get_offset_of_id_3(),
	TimeZoneInfo_t4141160514_StaticFields::get_offset_of_local_4(),
	TimeZoneInfo_t4141160514::get_offset_of_standardDisplayName_5(),
	TimeZoneInfo_t4141160514::get_offset_of_disableDaylightSavingTime_6(),
	TimeZoneInfo_t4141160514_StaticFields::get_offset_of_utc_7(),
	TimeZoneInfo_t4141160514_StaticFields::get_offset_of_timeZoneDirectory_8(),
	TimeZoneInfo_t4141160514::get_offset_of_adjustmentRules_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (AdjustmentRule_t109165635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1488[5] = 
{
	AdjustmentRule_t109165635::get_offset_of_dateEnd_0(),
	AdjustmentRule_t109165635::get_offset_of_dateStart_1(),
	AdjustmentRule_t109165635::get_offset_of_daylightDelta_2(),
	AdjustmentRule_t109165635::get_offset_of_daylightTransitionEnd_3(),
	AdjustmentRule_t109165635::get_offset_of_daylightTransitionStart_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (TransitionTime_t2338266701)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1489[6] = 
{
	TransitionTime_t2338266701::get_offset_of_timeOfDay_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TransitionTime_t2338266701::get_offset_of_month_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TransitionTime_t2338266701::get_offset_of_day_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TransitionTime_t2338266701::get_offset_of_week_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TransitionTime_t2338266701::get_offset_of_dayOfWeek_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TransitionTime_t2338266701::get_offset_of_isFixedDateRule_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (TimeType_t631897649)+ sizeof (RuntimeObject), sizeof(TimeType_t631897649_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1490[3] = 
{
	TimeType_t631897649::get_offset_of_Offset_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeType_t631897649::get_offset_of_IsDst_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeType_t631897649::get_offset_of_Name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { sizeof (TimeZoneNotFoundException_t1517097920), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { sizeof (Action_t1780669612), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (U3CPrivateImplementationDetailsU3E_t2072089983), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1497[12] = 
{
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D7_7(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D8_8(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D9_9(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D10_10(),
	U3CPrivateImplementationDetailsU3E_t2072089983_StaticFields::get_offset_of_U24U24fieldU2D11_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (U24ArrayTypeU24136_t2381901534)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t2381901534 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (U24ArrayTypeU24120_t3100711124)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t3100711124 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
