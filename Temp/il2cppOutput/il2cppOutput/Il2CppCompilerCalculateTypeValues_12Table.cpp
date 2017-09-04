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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t855963486;
// System.Collections.Hashtable
struct Hashtable_t3998940726;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t3979388558;
// System.Text.RegularExpressions.MRUList
struct MRUList_t2810886510;
// System.Text.RegularExpressions.MRUList/Node
struct Node_t2806860806;
// System.Collections.IDictionary
struct IDictionary_t3534030620;
// System.UInt16[]
struct UInt16U5BU5D_t2314508569;
// System.String[]
struct StringU5BU5D_t3429798153;
// System.Collections.ArrayList
struct ArrayList_t882804619;
// System.Collections.IList
struct IList_t3162999907;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t3026130804;
// System.UriParser
struct UriParser_t4174279112;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2208131372;
// System.Uri
struct Uri_t1447099052;
// System.Text.RegularExpressions.Regex
struct Regex_t2570732592;
// System.Text.RegularExpressions.Match
struct Match_t796562138;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t1590270251;
// System.IntPtr[]
struct IntPtrU5BU5D_t1064407897;
// System.Security.Cryptography.OidCollection
struct OidCollection_t1329090076;
// System.Collections.IEnumerator
struct IEnumerator_t1481902536;
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_t2004141312;
// System.Security.Cryptography.Oid
struct Oid_t3875560705;
// System.Void
struct Void_t97265340;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t3680068786;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t138971363;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t4271165394;
// System.Char[]
struct CharU5BU5D_t2775925042;
// System.Int32[]
struct Int32U5BU5D_t2951345017;
// System.Collections.Stack
struct Stack_t3252010081;
// System.Collections.BitArray
struct BitArray_t2342394985;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t2203430629;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1041011760;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2573646194;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t4026737686;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t3740143353;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t3048477934;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t896378872;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t3355131659;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1968585035;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t68778146;
// Mono.Security.X509.X509Store
struct X509Store_t707420964;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2785699738;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2766384139;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1581611722;
// System.Net.IPEndPoint
struct IPEndPoint_t4058302386;
// System.Net.ServicePoint
struct ServicePoint_t2360428963;
// System.IAsyncResult
struct IAsyncResult_t2521632562;
// System.AsyncCallback
struct AsyncCallback_t2696712479;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t396747188;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t3444840163;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2398183324;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t142727698;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t3541153920;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3402460170;




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
#ifndef QUICKSEARCH_T3740143353_H
#define QUICKSEARCH_T3740143353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.QuickSearch
struct  QuickSearch_t3740143353  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.QuickSearch::str
	String_t* ___str_0;
	// System.Int32 System.Text.RegularExpressions.QuickSearch::len
	int32_t ___len_1;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::ignore
	bool ___ignore_2;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::reverse
	bool ___reverse_3;
	// System.Byte[] System.Text.RegularExpressions.QuickSearch::shift
	ByteU5BU5D_t855963486* ___shift_4;
	// System.Collections.Hashtable System.Text.RegularExpressions.QuickSearch::shiftExtended
	Hashtable_t3998940726 * ___shiftExtended_5;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(QuickSearch_t3740143353, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(QuickSearch_t3740143353, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(QuickSearch_t3740143353, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_reverse_3() { return static_cast<int32_t>(offsetof(QuickSearch_t3740143353, ___reverse_3)); }
	inline bool get_reverse_3() const { return ___reverse_3; }
	inline bool* get_address_of_reverse_3() { return &___reverse_3; }
	inline void set_reverse_3(bool value)
	{
		___reverse_3 = value;
	}

	inline static int32_t get_offset_of_shift_4() { return static_cast<int32_t>(offsetof(QuickSearch_t3740143353, ___shift_4)); }
	inline ByteU5BU5D_t855963486* get_shift_4() const { return ___shift_4; }
	inline ByteU5BU5D_t855963486** get_address_of_shift_4() { return &___shift_4; }
	inline void set_shift_4(ByteU5BU5D_t855963486* value)
	{
		___shift_4 = value;
		Il2CppCodeGenWriteBarrier((&___shift_4), value);
	}

	inline static int32_t get_offset_of_shiftExtended_5() { return static_cast<int32_t>(offsetof(QuickSearch_t3740143353, ___shiftExtended_5)); }
	inline Hashtable_t3998940726 * get_shiftExtended_5() const { return ___shiftExtended_5; }
	inline Hashtable_t3998940726 ** get_address_of_shiftExtended_5() { return &___shiftExtended_5; }
	inline void set_shiftExtended_5(Hashtable_t3998940726 * value)
	{
		___shiftExtended_5 = value;
		Il2CppCodeGenWriteBarrier((&___shiftExtended_5), value);
	}
};

struct QuickSearch_t3740143353_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.QuickSearch::THRESHOLD
	int32_t ___THRESHOLD_6;

public:
	inline static int32_t get_offset_of_THRESHOLD_6() { return static_cast<int32_t>(offsetof(QuickSearch_t3740143353_StaticFields, ___THRESHOLD_6)); }
	inline int32_t get_THRESHOLD_6() const { return ___THRESHOLD_6; }
	inline int32_t* get_address_of_THRESHOLD_6() { return &___THRESHOLD_6; }
	inline void set_THRESHOLD_6(int32_t value)
	{
		___THRESHOLD_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUICKSEARCH_T3740143353_H
#ifndef ENUMERATOR_T3927545923_H
#define ENUMERATOR_T3927545923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection/Enumerator
struct  Enumerator_t3927545923  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection/Enumerator::index
	int32_t ___index_0;
	// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.MatchCollection/Enumerator::coll
	MatchCollection_t3979388558 * ___coll_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Enumerator_t3927545923, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_coll_1() { return static_cast<int32_t>(offsetof(Enumerator_t3927545923, ___coll_1)); }
	inline MatchCollection_t3979388558 * get_coll_1() const { return ___coll_1; }
	inline MatchCollection_t3979388558 ** get_address_of_coll_1() { return &___coll_1; }
	inline void set_coll_1(MatchCollection_t3979388558 * value)
	{
		___coll_1 = value;
		Il2CppCodeGenWriteBarrier((&___coll_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3927545923_H
#ifndef FACTORYCACHE_T3355131659_H
#define FACTORYCACHE_T3355131659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t3355131659  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t3998940726 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t2810886510 * ___mru_list_2;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(FactoryCache_t3355131659, ___capacity_0)); }
	inline int32_t get_capacity_0() const { return ___capacity_0; }
	inline int32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(int32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_factories_1() { return static_cast<int32_t>(offsetof(FactoryCache_t3355131659, ___factories_1)); }
	inline Hashtable_t3998940726 * get_factories_1() const { return ___factories_1; }
	inline Hashtable_t3998940726 ** get_address_of_factories_1() { return &___factories_1; }
	inline void set_factories_1(Hashtable_t3998940726 * value)
	{
		___factories_1 = value;
		Il2CppCodeGenWriteBarrier((&___factories_1), value);
	}

	inline static int32_t get_offset_of_mru_list_2() { return static_cast<int32_t>(offsetof(FactoryCache_t3355131659, ___mru_list_2)); }
	inline MRUList_t2810886510 * get_mru_list_2() const { return ___mru_list_2; }
	inline MRUList_t2810886510 ** get_address_of_mru_list_2() { return &___mru_list_2; }
	inline void set_mru_list_2(MRUList_t2810886510 * value)
	{
		___mru_list_2 = value;
		Il2CppCodeGenWriteBarrier((&___mru_list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORYCACHE_T3355131659_H
#ifndef MRULIST_T2810886510_H
#define MRULIST_T2810886510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList
struct  MRUList_t2810886510  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::head
	Node_t2806860806 * ___head_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::tail
	Node_t2806860806 * ___tail_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(MRUList_t2810886510, ___head_0)); }
	inline Node_t2806860806 * get_head_0() const { return ___head_0; }
	inline Node_t2806860806 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t2806860806 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(MRUList_t2810886510, ___tail_1)); }
	inline Node_t2806860806 * get_tail_1() const { return ___tail_1; }
	inline Node_t2806860806 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t2806860806 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier((&___tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MRULIST_T2810886510_H
#ifndef NODE_T2806860806_H
#define NODE_T2806860806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList/Node
struct  Node_t2806860806  : public RuntimeObject
{
public:
	// System.Object System.Text.RegularExpressions.MRUList/Node::value
	RuntimeObject * ___value_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::previous
	Node_t2806860806 * ___previous_1;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::next
	Node_t2806860806 * ___next_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Node_t2806860806, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(Node_t2806860806, ___previous_1)); }
	inline Node_t2806860806 * get_previous_1() const { return ___previous_1; }
	inline Node_t2806860806 ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(Node_t2806860806 * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier((&___previous_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(Node_t2806860806, ___next_2)); }
	inline Node_t2806860806 * get_next_2() const { return ___next_2; }
	inline Node_t2806860806 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(Node_t2806860806 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODE_T2806860806_H
#ifndef CATEGORYUTILS_T2914012279_H
#define CATEGORYUTILS_T2914012279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CategoryUtils
struct  CategoryUtils_t2914012279  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYUTILS_T2914012279_H
#ifndef LINKREF_T2858652957_H
#define LINKREF_T2858652957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkRef
struct  LinkRef_t2858652957  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKREF_T2858652957_H
#ifndef INTERPRETERFACTORY_T486001331_H
#define INTERPRETERFACTORY_T486001331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.InterpreterFactory
struct  InterpreterFactory_t486001331  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::mapping
	RuntimeObject* ___mapping_0;
	// System.UInt16[] System.Text.RegularExpressions.InterpreterFactory::pattern
	UInt16U5BU5D_t2314508569* ___pattern_1;
	// System.String[] System.Text.RegularExpressions.InterpreterFactory::namesMapping
	StringU5BU5D_t3429798153* ___namesMapping_2;
	// System.Int32 System.Text.RegularExpressions.InterpreterFactory::gap
	int32_t ___gap_3;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(InterpreterFactory_t486001331, ___mapping_0)); }
	inline RuntimeObject* get_mapping_0() const { return ___mapping_0; }
	inline RuntimeObject** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(RuntimeObject* value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_0), value);
	}

	inline static int32_t get_offset_of_pattern_1() { return static_cast<int32_t>(offsetof(InterpreterFactory_t486001331, ___pattern_1)); }
	inline UInt16U5BU5D_t2314508569* get_pattern_1() const { return ___pattern_1; }
	inline UInt16U5BU5D_t2314508569** get_address_of_pattern_1() { return &___pattern_1; }
	inline void set_pattern_1(UInt16U5BU5D_t2314508569* value)
	{
		___pattern_1 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_1), value);
	}

	inline static int32_t get_offset_of_namesMapping_2() { return static_cast<int32_t>(offsetof(InterpreterFactory_t486001331, ___namesMapping_2)); }
	inline StringU5BU5D_t3429798153* get_namesMapping_2() const { return ___namesMapping_2; }
	inline StringU5BU5D_t3429798153** get_address_of_namesMapping_2() { return &___namesMapping_2; }
	inline void set_namesMapping_2(StringU5BU5D_t3429798153* value)
	{
		___namesMapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___namesMapping_2), value);
	}

	inline static int32_t get_offset_of_gap_3() { return static_cast<int32_t>(offsetof(InterpreterFactory_t486001331, ___gap_3)); }
	inline int32_t get_gap_3() const { return ___gap_3; }
	inline int32_t* get_address_of_gap_3() { return &___gap_3; }
	inline void set_gap_3(int32_t value)
	{
		___gap_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETERFACTORY_T486001331_H
#ifndef PATTERNCOMPILER_T2750316022_H
#define PATTERNCOMPILER_T2750316022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler
struct  PatternCompiler_t2750316022  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.PatternCompiler::pgm
	ArrayList_t882804619 * ___pgm_0;

public:
	inline static int32_t get_offset_of_pgm_0() { return static_cast<int32_t>(offsetof(PatternCompiler_t2750316022, ___pgm_0)); }
	inline ArrayList_t882804619 * get_pgm_0() const { return ___pgm_0; }
	inline ArrayList_t882804619 ** get_address_of_pgm_0() { return &___pgm_0; }
	inline void set_pgm_0(ArrayList_t882804619 * value)
	{
		___pgm_0 = value;
		Il2CppCodeGenWriteBarrier((&___pgm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNCOMPILER_T2750316022_H
#ifndef REPEATCONTEXT_T3048477934_H
#define REPEATCONTEXT_T3048477934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct  RepeatContext_t3048477934  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::start
	int32_t ___start_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::lazy
	bool ___lazy_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::expr_pc
	int32_t ___expr_pc_4;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::previous
	RepeatContext_t3048477934 * ___previous_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RepeatContext_t3048477934, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(RepeatContext_t3048477934, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(RepeatContext_t3048477934, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(RepeatContext_t3048477934, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}

	inline static int32_t get_offset_of_expr_pc_4() { return static_cast<int32_t>(offsetof(RepeatContext_t3048477934, ___expr_pc_4)); }
	inline int32_t get_expr_pc_4() const { return ___expr_pc_4; }
	inline int32_t* get_address_of_expr_pc_4() { return &___expr_pc_4; }
	inline void set_expr_pc_4(int32_t value)
	{
		___expr_pc_4 = value;
	}

	inline static int32_t get_offset_of_previous_5() { return static_cast<int32_t>(offsetof(RepeatContext_t3048477934, ___previous_5)); }
	inline RepeatContext_t3048477934 * get_previous_5() const { return ___previous_5; }
	inline RepeatContext_t3048477934 ** get_address_of_previous_5() { return &___previous_5; }
	inline void set_previous_5(RepeatContext_t3048477934 * value)
	{
		___previous_5 = value;
		Il2CppCodeGenWriteBarrier((&___previous_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(RepeatContext_t3048477934, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPEATCONTEXT_T3048477934_H
#ifndef INTERVALCOLLECTION_T2203430629_H
#define INTERVALCOLLECTION_T2203430629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection
struct  IntervalCollection_t2203430629  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.IntervalCollection::intervals
	ArrayList_t882804619 * ___intervals_0;

public:
	inline static int32_t get_offset_of_intervals_0() { return static_cast<int32_t>(offsetof(IntervalCollection_t2203430629, ___intervals_0)); }
	inline ArrayList_t882804619 * get_intervals_0() const { return ___intervals_0; }
	inline ArrayList_t882804619 ** get_address_of_intervals_0() { return &___intervals_0; }
	inline void set_intervals_0(ArrayList_t882804619 * value)
	{
		___intervals_0 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALCOLLECTION_T2203430629_H
#ifndef ENUMERATOR_T2499363576_H
#define ENUMERATOR_T2499363576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/Enumerator
struct  Enumerator_t2499363576  : public RuntimeObject
{
public:
	// System.Collections.IList System.Text.RegularExpressions.IntervalCollection/Enumerator::list
	RuntimeObject* ___list_0;
	// System.Int32 System.Text.RegularExpressions.IntervalCollection/Enumerator::ptr
	int32_t ___ptr_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2499363576, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Enumerator_t2499363576, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2499363576_H
#ifndef PARSER_T60715050_H
#define PARSER_T60715050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Parser
struct  Parser_t60715050  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Parser::pattern
	String_t* ___pattern_0;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ptr
	int32_t ___ptr_1;
	// System.Collections.ArrayList System.Text.RegularExpressions.Syntax.Parser::caps
	ArrayList_t882804619 * ___caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.Syntax.Parser::refs
	Hashtable_t3998940726 * ___refs_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::num_groups
	int32_t ___num_groups_4;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::gap
	int32_t ___gap_5;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Parser_t60715050, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Parser_t60715050, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}

	inline static int32_t get_offset_of_caps_2() { return static_cast<int32_t>(offsetof(Parser_t60715050, ___caps_2)); }
	inline ArrayList_t882804619 * get_caps_2() const { return ___caps_2; }
	inline ArrayList_t882804619 ** get_address_of_caps_2() { return &___caps_2; }
	inline void set_caps_2(ArrayList_t882804619 * value)
	{
		___caps_2 = value;
		Il2CppCodeGenWriteBarrier((&___caps_2), value);
	}

	inline static int32_t get_offset_of_refs_3() { return static_cast<int32_t>(offsetof(Parser_t60715050, ___refs_3)); }
	inline Hashtable_t3998940726 * get_refs_3() const { return ___refs_3; }
	inline Hashtable_t3998940726 ** get_address_of_refs_3() { return &___refs_3; }
	inline void set_refs_3(Hashtable_t3998940726 * value)
	{
		___refs_3 = value;
		Il2CppCodeGenWriteBarrier((&___refs_3), value);
	}

	inline static int32_t get_offset_of_num_groups_4() { return static_cast<int32_t>(offsetof(Parser_t60715050, ___num_groups_4)); }
	inline int32_t get_num_groups_4() const { return ___num_groups_4; }
	inline int32_t* get_address_of_num_groups_4() { return &___num_groups_4; }
	inline void set_num_groups_4(int32_t value)
	{
		___num_groups_4 = value;
	}

	inline static int32_t get_offset_of_gap_5() { return static_cast<int32_t>(offsetof(Parser_t60715050, ___gap_5)); }
	inline int32_t get_gap_5() const { return ___gap_5; }
	inline int32_t* get_address_of_gap_5() { return &___gap_5; }
	inline void set_gap_5(int32_t value)
	{
		___gap_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T60715050_H
#ifndef EXPRESSION_T1581611722_H
#define EXPRESSION_T1581611722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Expression
struct  Expression_t1581611722  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1581611722_H
#ifndef URI_T1447099052_H
#define URI_T1447099052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t1447099052  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_t4174279112 * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_t1447099052, ___parser_30)); }
	inline UriParser_t4174279112 * get_parser_30() const { return ___parser_30; }
	inline UriParser_t4174279112 ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_t4174279112 * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_t1447099052_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t3026130804* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24map16_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_t3026130804* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_t3026130804** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_t3026130804* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_31() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___U3CU3Ef__switchU24map12_31)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24map12_31() const { return ___U3CU3Ef__switchU24map12_31; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24map12_31() { return &___U3CU3Ef__switchU24map12_31; }
	inline void set_U3CU3Ef__switchU24map12_31(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24map12_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_32() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___U3CU3Ef__switchU24map13_32)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24map13_32() const { return ___U3CU3Ef__switchU24map13_32; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24map13_32() { return &___U3CU3Ef__switchU24map13_32; }
	inline void set_U3CU3Ef__switchU24map13_32(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24map13_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_33() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___U3CU3Ef__switchU24map14_33)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24map14_33() const { return ___U3CU3Ef__switchU24map14_33; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24map14_33() { return &___U3CU3Ef__switchU24map14_33; }
	inline void set_U3CU3Ef__switchU24map14_33(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24map14_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_34() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___U3CU3Ef__switchU24map15_34)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24map15_34() const { return ___U3CU3Ef__switchU24map15_34; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24map15_34() { return &___U3CU3Ef__switchU24map15_34; }
	inline void set_U3CU3Ef__switchU24map15_34(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24map15_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_35() { return static_cast<int32_t>(offsetof(Uri_t1447099052_StaticFields, ___U3CU3Ef__switchU24map16_35)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24map16_35() const { return ___U3CU3Ef__switchU24map16_35; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24map16_35() { return &___U3CU3Ef__switchU24map16_35; }
	inline void set_U3CU3Ef__switchU24map16_35(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24map16_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T1447099052_H
#ifndef URIBUILDER_T1933159448_H
#define URIBUILDER_T1933159448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriBuilder
struct  UriBuilder_t1933159448  : public RuntimeObject
{
public:
	// System.String System.UriBuilder::scheme
	String_t* ___scheme_0;
	// System.String System.UriBuilder::host
	String_t* ___host_1;
	// System.Int32 System.UriBuilder::port
	int32_t ___port_2;
	// System.String System.UriBuilder::path
	String_t* ___path_3;
	// System.String System.UriBuilder::query
	String_t* ___query_4;
	// System.String System.UriBuilder::fragment
	String_t* ___fragment_5;
	// System.String System.UriBuilder::username
	String_t* ___username_6;
	// System.String System.UriBuilder::password
	String_t* ___password_7;
	// System.Uri System.UriBuilder::uri
	Uri_t1447099052 * ___uri_8;
	// System.Boolean System.UriBuilder::modified
	bool ___modified_9;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_host_1() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___host_1)); }
	inline String_t* get_host_1() const { return ___host_1; }
	inline String_t** get_address_of_host_1() { return &___host_1; }
	inline void set_host_1(String_t* value)
	{
		___host_1 = value;
		Il2CppCodeGenWriteBarrier((&___host_1), value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((&___path_3), value);
	}

	inline static int32_t get_offset_of_query_4() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___query_4)); }
	inline String_t* get_query_4() const { return ___query_4; }
	inline String_t** get_address_of_query_4() { return &___query_4; }
	inline void set_query_4(String_t* value)
	{
		___query_4 = value;
		Il2CppCodeGenWriteBarrier((&___query_4), value);
	}

	inline static int32_t get_offset_of_fragment_5() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___fragment_5)); }
	inline String_t* get_fragment_5() const { return ___fragment_5; }
	inline String_t** get_address_of_fragment_5() { return &___fragment_5; }
	inline void set_fragment_5(String_t* value)
	{
		___fragment_5 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_5), value);
	}

	inline static int32_t get_offset_of_username_6() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___username_6)); }
	inline String_t* get_username_6() const { return ___username_6; }
	inline String_t** get_address_of_username_6() { return &___username_6; }
	inline void set_username_6(String_t* value)
	{
		___username_6 = value;
		Il2CppCodeGenWriteBarrier((&___username_6), value);
	}

	inline static int32_t get_offset_of_password_7() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___password_7)); }
	inline String_t* get_password_7() const { return ___password_7; }
	inline String_t** get_address_of_password_7() { return &___password_7; }
	inline void set_password_7(String_t* value)
	{
		___password_7 = value;
		Il2CppCodeGenWriteBarrier((&___password_7), value);
	}

	inline static int32_t get_offset_of_uri_8() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___uri_8)); }
	inline Uri_t1447099052 * get_uri_8() const { return ___uri_8; }
	inline Uri_t1447099052 ** get_address_of_uri_8() { return &___uri_8; }
	inline void set_uri_8(Uri_t1447099052 * value)
	{
		___uri_8 = value;
		Il2CppCodeGenWriteBarrier((&___uri_8), value);
	}

	inline static int32_t get_offset_of_modified_9() { return static_cast<int32_t>(offsetof(UriBuilder_t1933159448, ___modified_9)); }
	inline bool get_modified_9() const { return ___modified_9; }
	inline bool* get_address_of_modified_9() { return &___modified_9; }
	inline void set_modified_9(bool value)
	{
		___modified_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIBUILDER_T1933159448_H
#ifndef URIPARSER_T4174279112_H
#define URIPARSER_T4174279112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t4174279112  : public RuntimeObject
{
public:
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;

public:
	inline static int32_t get_offset_of_scheme_name_2() { return static_cast<int32_t>(offsetof(UriParser_t4174279112, ___scheme_name_2)); }
	inline String_t* get_scheme_name_2() const { return ___scheme_name_2; }
	inline String_t** get_address_of_scheme_name_2() { return &___scheme_name_2; }
	inline void set_scheme_name_2(String_t* value)
	{
		___scheme_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_name_2), value);
	}

	inline static int32_t get_offset_of_default_port_3() { return static_cast<int32_t>(offsetof(UriParser_t4174279112, ___default_port_3)); }
	inline int32_t get_default_port_3() const { return ___default_port_3; }
	inline int32_t* get_address_of_default_port_3() { return &___default_port_3; }
	inline void set_default_port_3(int32_t value)
	{
		___default_port_3 = value;
	}
};

struct UriParser_t4174279112_StaticFields
{
public:
	// System.Object System.UriParser::lock_object
	RuntimeObject * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t3998940726 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t2570732592 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t2570732592 * ___auth_regex_5;

public:
	inline static int32_t get_offset_of_lock_object_0() { return static_cast<int32_t>(offsetof(UriParser_t4174279112_StaticFields, ___lock_object_0)); }
	inline RuntimeObject * get_lock_object_0() const { return ___lock_object_0; }
	inline RuntimeObject ** get_address_of_lock_object_0() { return &___lock_object_0; }
	inline void set_lock_object_0(RuntimeObject * value)
	{
		___lock_object_0 = value;
		Il2CppCodeGenWriteBarrier((&___lock_object_0), value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(UriParser_t4174279112_StaticFields, ___table_1)); }
	inline Hashtable_t3998940726 * get_table_1() const { return ___table_1; }
	inline Hashtable_t3998940726 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t3998940726 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}

	inline static int32_t get_offset_of_uri_regex_4() { return static_cast<int32_t>(offsetof(UriParser_t4174279112_StaticFields, ___uri_regex_4)); }
	inline Regex_t2570732592 * get_uri_regex_4() const { return ___uri_regex_4; }
	inline Regex_t2570732592 ** get_address_of_uri_regex_4() { return &___uri_regex_4; }
	inline void set_uri_regex_4(Regex_t2570732592 * value)
	{
		___uri_regex_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_regex_4), value);
	}

	inline static int32_t get_offset_of_auth_regex_5() { return static_cast<int32_t>(offsetof(UriParser_t4174279112_StaticFields, ___auth_regex_5)); }
	inline Regex_t2570732592 * get_auth_regex_5() const { return ___auth_regex_5; }
	inline Regex_t2570732592 ** get_address_of_auth_regex_5() { return &___auth_regex_5; }
	inline void set_auth_regex_5(Regex_t2570732592 * value)
	{
		___auth_regex_5 = value;
		Il2CppCodeGenWriteBarrier((&___auth_regex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_T4174279112_H
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
#ifndef COLLECTIONBASE_T2449250509_H
#define COLLECTIONBASE_T2449250509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2449250509  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t882804619 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2449250509, ___list_0)); }
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
#endif // COLLECTIONBASE_T2449250509_H
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
#ifndef MATCHCOLLECTION_T3979388558_H
#define MATCHCOLLECTION_T3979388558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection
struct  MatchCollection_t3979388558  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::current
	Match_t796562138 * ___current_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::list
	ArrayList_t882804619 * ___list_1;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(MatchCollection_t3979388558, ___current_0)); }
	inline Match_t796562138 * get_current_0() const { return ___current_0; }
	inline Match_t796562138 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Match_t796562138 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier((&___current_0), value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(MatchCollection_t3979388558, ___list_1)); }
	inline ArrayList_t882804619 * get_list_1() const { return ___list_1; }
	inline ArrayList_t882804619 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t882804619 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHCOLLECTION_T3979388558_H
#ifndef GROUPCOLLECTION_T4026737686_H
#define GROUPCOLLECTION_T4026737686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.GroupCollection
struct  GroupCollection_t4026737686  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::list
	GroupU5BU5D_t1590270251* ___list_0;
	// System.Int32 System.Text.RegularExpressions.GroupCollection::gap
	int32_t ___gap_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(GroupCollection_t4026737686, ___list_0)); }
	inline GroupU5BU5D_t1590270251* get_list_0() const { return ___list_0; }
	inline GroupU5BU5D_t1590270251** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(GroupU5BU5D_t1590270251* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_gap_1() { return static_cast<int32_t>(offsetof(GroupCollection_t4026737686, ___gap_1)); }
	inline int32_t get_gap_1() const { return ___gap_1; }
	inline int32_t* get_address_of_gap_1() { return &___gap_1; }
	inline void set_gap_1(int32_t value)
	{
		___gap_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUPCOLLECTION_T4026737686_H
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
#ifndef OID_T3875560705_H
#define OID_T3875560705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Oid
struct  Oid_t3875560705  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Oid::_value
	String_t* ____value_0;
	// System.String System.Security.Cryptography.Oid::_name
	String_t* ____name_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(Oid_t3875560705, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(Oid_t3875560705, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier((&____name_1), value);
	}
};

struct Oid_t3875560705_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Oid::<>f__switch$map10
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24map10_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_2() { return static_cast<int32_t>(offsetof(Oid_t3875560705_StaticFields, ___U3CU3Ef__switchU24map10_2)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24map10_2() const { return ___U3CU3Ef__switchU24map10_2; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24map10_2() { return &___U3CU3Ef__switchU24map10_2; }
	inline void set_U3CU3Ef__switchU24map10_2(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24map10_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T3875560705_H
#ifndef CAPTURE_T816207277_H
#define CAPTURE_T816207277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_t816207277  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Capture::index
	int32_t ___index_0;
	// System.Int32 System.Text.RegularExpressions.Capture::length
	int32_t ___length_1;
	// System.String System.Text.RegularExpressions.Capture::text
	String_t* ___text_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Capture_t816207277, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Capture_t816207277, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Capture_t816207277, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_T816207277_H
#ifndef BASEMACHINE_T2567317288_H
#define BASEMACHINE_T2567317288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.BaseMachine
struct  BaseMachine_t2567317288  : public RuntimeObject
{
public:
	// System.Boolean System.Text.RegularExpressions.BaseMachine::needs_groups_or_captures
	bool ___needs_groups_or_captures_0;

public:
	inline static int32_t get_offset_of_needs_groups_or_captures_0() { return static_cast<int32_t>(offsetof(BaseMachine_t2567317288, ___needs_groups_or_captures_0)); }
	inline bool get_needs_groups_or_captures_0() const { return ___needs_groups_or_captures_0; }
	inline bool* get_address_of_needs_groups_or_captures_0() { return &___needs_groups_or_captures_0; }
	inline void set_needs_groups_or_captures_0(bool value)
	{
		___needs_groups_or_captures_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMACHINE_T2567317288_H
#ifndef OIDENUMERATOR_T1943853947_H
#define OIDENUMERATOR_T1943853947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidEnumerator
struct  OidEnumerator_t1943853947  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::_collection
	OidCollection_t1329090076 * ____collection_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__collection_0() { return static_cast<int32_t>(offsetof(OidEnumerator_t1943853947, ____collection_0)); }
	inline OidCollection_t1329090076 * get__collection_0() const { return ____collection_0; }
	inline OidCollection_t1329090076 ** get_address_of__collection_0() { return &____collection_0; }
	inline void set__collection_0(OidCollection_t1329090076 * value)
	{
		____collection_0 = value;
		Il2CppCodeGenWriteBarrier((&____collection_0), value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(OidEnumerator_t1943853947, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDENUMERATOR_T1943853947_H
#ifndef X509EXTENSIONENUMERATOR_T3308268471_H
#define X509EXTENSIONENUMERATOR_T3308268471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct  X509ExtensionEnumerator_t3308268471  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509ExtensionEnumerator_t3308268471, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONENUMERATOR_T3308268471_H
#ifndef X509EXTENSIONCOLLECTION_T882162307_H
#define X509EXTENSIONCOLLECTION_T882162307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct  X509ExtensionCollection_t882162307  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ExtensionCollection::_list
	ArrayList_t882804619 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t882162307, ____list_0)); }
	inline ArrayList_t882804619 * get__list_0() const { return ____list_0; }
	inline ArrayList_t882804619 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t882804619 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T882162307_H
#ifndef CAPTURECOLLECTION_T4271165394_H
#define CAPTURECOLLECTION_T4271165394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CaptureCollection
struct  CaptureCollection_t4271165394  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Capture[] System.Text.RegularExpressions.CaptureCollection::list
	CaptureU5BU5D_t2004141312* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CaptureCollection_t4271165394, ___list_0)); }
	inline CaptureU5BU5D_t2004141312* get_list_0() const { return ___list_0; }
	inline CaptureU5BU5D_t2004141312** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(CaptureU5BU5D_t2004141312* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURECOLLECTION_T4271165394_H
#ifndef OIDCOLLECTION_T1329090076_H
#define OIDCOLLECTION_T1329090076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidCollection
struct  OidCollection_t1329090076  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::_list
	ArrayList_t882804619 * ____list_0;
	// System.Boolean System.Security.Cryptography.OidCollection::_readOnly
	bool ____readOnly_1;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(OidCollection_t1329090076, ____list_0)); }
	inline ArrayList_t882804619 * get__list_0() const { return ____list_0; }
	inline ArrayList_t882804619 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t882804619 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}

	inline static int32_t get_offset_of__readOnly_1() { return static_cast<int32_t>(offsetof(OidCollection_t1329090076, ____readOnly_1)); }
	inline bool get__readOnly_1() const { return ____readOnly_1; }
	inline bool* get_address_of__readOnly_1() { return &____readOnly_1; }
	inline void set__readOnly_1(bool value)
	{
		____readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDCOLLECTION_T1329090076_H
#ifndef ASNENCODEDDATA_T1161168146_H
#define ASNENCODEDDATA_T1161168146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedData
struct  AsnEncodedData_t1161168146  : public RuntimeObject
{
public:
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t3875560705 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_t855963486* ____raw_1;

public:
	inline static int32_t get_offset_of__oid_0() { return static_cast<int32_t>(offsetof(AsnEncodedData_t1161168146, ____oid_0)); }
	inline Oid_t3875560705 * get__oid_0() const { return ____oid_0; }
	inline Oid_t3875560705 ** get_address_of__oid_0() { return &____oid_0; }
	inline void set__oid_0(Oid_t3875560705 * value)
	{
		____oid_0 = value;
		Il2CppCodeGenWriteBarrier((&____oid_0), value);
	}

	inline static int32_t get_offset_of__raw_1() { return static_cast<int32_t>(offsetof(AsnEncodedData_t1161168146, ____raw_1)); }
	inline ByteU5BU5D_t855963486* get__raw_1() const { return ____raw_1; }
	inline ByteU5BU5D_t855963486** get_address_of__raw_1() { return &____raw_1; }
	inline void set__raw_1(ByteU5BU5D_t855963486* value)
	{
		____raw_1 = value;
		Il2CppCodeGenWriteBarrier((&____raw_1), value);
	}
};

struct AsnEncodedData_t1161168146_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.AsnEncodedData::<>f__switch$mapA
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24mapA_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_2() { return static_cast<int32_t>(offsetof(AsnEncodedData_t1161168146_StaticFields, ___U3CU3Ef__switchU24mapA_2)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24mapA_2() const { return ___U3CU3Ef__switchU24mapA_2; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24mapA_2() { return &___U3CU3Ef__switchU24mapA_2; }
	inline void set_U3CU3Ef__switchU24mapA_2(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24mapA_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNENCODEDDATA_T1161168146_H
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
#ifndef U24ARRAYTYPEU2416_T2396488415_H
#define U24ARRAYTYPEU2416_T2396488415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t2396488415 
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
		uint8_t U24ArrayTypeU2416_t2396488415__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T2396488415_H
#ifndef COMPOSITEEXPRESSION_T1183293217_H
#define COMPOSITEEXPRESSION_T1183293217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t1183293217  : public Expression_t1581611722
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_t3680068786 * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t1183293217, ___expressions_0)); }
	inline ExpressionCollection_t3680068786 * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_t3680068786 ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_t3680068786 * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITEEXPRESSION_T1183293217_H
#ifndef LITERAL_T2766384139_H
#define LITERAL_T2766384139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Literal
struct  Literal_t2766384139  : public Expression_t1581611722
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Literal::str
	String_t* ___str_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Literal::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(Literal_t2766384139, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Literal_t2766384139, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LITERAL_T2766384139_H
#ifndef REFERENCE_T2622548812_H
#define REFERENCE_T2622548812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t2622548812  : public Expression_t1581611722
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t138971363 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(Reference_t2622548812, ___group_0)); }
	inline CapturingGroup_t138971363 * get_group_0() const { return ___group_0; }
	inline CapturingGroup_t138971363 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(CapturingGroup_t138971363 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Reference_t2622548812, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCE_T2622548812_H
#ifndef X509EXTENSION_T1183963135_H
#define X509EXTENSION_T1183963135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Extension
struct  X509Extension_t1183963135  : public AsnEncodedData_t1161168146
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_3;

public:
	inline static int32_t get_offset_of__critical_3() { return static_cast<int32_t>(offsetof(X509Extension_t1183963135, ____critical_3)); }
	inline bool get__critical_3() const { return ____critical_3; }
	inline bool* get_address_of__critical_3() { return &____critical_3; }
	inline void set__critical_3(bool value)
	{
		____critical_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T1183963135_H
#ifndef GROUP_T2498241182_H
#define GROUP_T2498241182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t2498241182  : public Capture_t816207277
{
public:
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t4271165394 * ___captures_5;

public:
	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(Group_t2498241182, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}

	inline static int32_t get_offset_of_captures_5() { return static_cast<int32_t>(offsetof(Group_t2498241182, ___captures_5)); }
	inline CaptureCollection_t4271165394 * get_captures_5() const { return ___captures_5; }
	inline CaptureCollection_t4271165394 ** get_address_of_captures_5() { return &___captures_5; }
	inline void set_captures_5(CaptureCollection_t4271165394 * value)
	{
		___captures_5 = value;
		Il2CppCodeGenWriteBarrier((&___captures_5), value);
	}
};

struct Group_t2498241182_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t2498241182 * ___Fail_3;

public:
	inline static int32_t get_offset_of_Fail_3() { return static_cast<int32_t>(offsetof(Group_t2498241182_StaticFields, ___Fail_3)); }
	inline Group_t2498241182 * get_Fail_3() const { return ___Fail_3; }
	inline Group_t2498241182 ** get_address_of_Fail_3() { return &___Fail_3; }
	inline void set_Fail_3(Group_t2498241182 * value)
	{
		___Fail_3 = value;
		Il2CppCodeGenWriteBarrier((&___Fail_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T2498241182_H
#ifndef GENERICURIPARSER_T1908562787_H
#define GENERICURIPARSER_T1908562787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GenericUriParser
struct  GenericUriParser_t1908562787  : public UriParser_t4174279112
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICURIPARSER_T1908562787_H
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
#ifndef URISCHEME_T3089573193_H
#define URISCHEME_T3089573193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t3089573193 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t3089573193, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t3089573193, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t3089573193, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t3089573193_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t3089573193_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T3089573193_H
#ifndef URITYPECONVERTER_T300503799_H
#define URITYPECONVERTER_T300503799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriTypeConverter
struct  UriTypeConverter_t300503799  : public TypeConverter_t1102714454
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URITYPECONVERTER_T300503799_H
#ifndef U24ARRAYTYPEU2412_T404068635_H
#define U24ARRAYTYPEU2412_T404068635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t404068635 
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
		uint8_t U24ArrayTypeU2412_t404068635__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T404068635_H
#ifndef U24ARRAYTYPEU24128_T3280665359_H
#define U24ARRAYTYPEU24128_T3280665359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t3280665359 
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
		uint8_t U24ArrayTypeU24128_t3280665359__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T3280665359_H
#ifndef DEFAULTURIPARSER_T1129965615_H
#define DEFAULTURIPARSER_T1129965615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultUriParser
struct  DefaultUriParser_t1129965615  : public UriParser_t4174279112
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTURIPARSER_T1129965615_H
#ifndef INTERVAL_T2949578957_H
#define INTERVAL_T2949578957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interval
struct  Interval_t2949578957 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interval::low
	int32_t ___low_0;
	// System.Int32 System.Text.RegularExpressions.Interval::high
	int32_t ___high_1;
	// System.Boolean System.Text.RegularExpressions.Interval::contiguous
	bool ___contiguous_2;

public:
	inline static int32_t get_offset_of_low_0() { return static_cast<int32_t>(offsetof(Interval_t2949578957, ___low_0)); }
	inline int32_t get_low_0() const { return ___low_0; }
	inline int32_t* get_address_of_low_0() { return &___low_0; }
	inline void set_low_0(int32_t value)
	{
		___low_0 = value;
	}

	inline static int32_t get_offset_of_high_1() { return static_cast<int32_t>(offsetof(Interval_t2949578957, ___high_1)); }
	inline int32_t get_high_1() const { return ___high_1; }
	inline int32_t* get_address_of_high_1() { return &___high_1; }
	inline void set_high_1(int32_t value)
	{
		___high_1 = value;
	}

	inline static int32_t get_offset_of_contiguous_2() { return static_cast<int32_t>(offsetof(Interval_t2949578957, ___contiguous_2)); }
	inline bool get_contiguous_2() const { return ___contiguous_2; }
	inline bool* get_address_of_contiguous_2() { return &___contiguous_2; }
	inline void set_contiguous_2(bool value)
	{
		___contiguous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interval
struct Interval_t2949578957_marshaled_pinvoke
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interval
struct Interval_t2949578957_marshaled_com
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
#endif // INTERVAL_T2949578957_H
#ifndef EXPRESSIONCOLLECTION_T3680068786_H
#define EXPRESSIONCOLLECTION_T3680068786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct  ExpressionCollection_t3680068786  : public CollectionBase_t2449250509
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONCOLLECTION_T3680068786_H
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
#ifndef INTSTACK_T1994502788_H
#define INTSTACK_T1994502788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/IntStack
struct  IntStack_t1994502788 
{
public:
	// System.Int32[] System.Text.RegularExpressions.Interpreter/IntStack::values
	Int32U5BU5D_t2951345017* ___values_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(IntStack_t1994502788, ___values_0)); }
	inline Int32U5BU5D_t2951345017* get_values_0() const { return ___values_0; }
	inline Int32U5BU5D_t2951345017** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(Int32U5BU5D_t2951345017* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(IntStack_t1994502788, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t1994502788_marshaled_pinvoke
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t1994502788_marshaled_com
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
#endif // INTSTACK_T1994502788_H
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
#ifndef MARK_T314483733_H
#define MARK_T314483733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Mark
struct  Mark_t314483733 
{
public:
	// System.Int32 System.Text.RegularExpressions.Mark::Start
	int32_t ___Start_0;
	// System.Int32 System.Text.RegularExpressions.Mark::End
	int32_t ___End_1;
	// System.Int32 System.Text.RegularExpressions.Mark::Previous
	int32_t ___Previous_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(Mark_t314483733, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(Mark_t314483733, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(Mark_t314483733, ___Previous_2)); }
	inline int32_t get_Previous_2() const { return ___Previous_2; }
	inline int32_t* get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(int32_t value)
	{
		___Previous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARK_T314483733_H
#ifndef LINKSTACK_T2872369810_H
#define LINKSTACK_T2872369810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkStack
struct  LinkStack_t2872369810  : public LinkRef_t2858652957
{
public:
	// System.Collections.Stack System.Text.RegularExpressions.LinkStack::stack
	Stack_t3252010081 * ___stack_0;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(LinkStack_t2872369810, ___stack_0)); }
	inline Stack_t3252010081 * get_stack_0() const { return ___stack_0; }
	inline Stack_t3252010081 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t3252010081 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___stack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSTACK_T2872369810_H
#ifndef LINK_T1473014075_H
#define LINK_T1473014075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
struct  Link_t1473014075 
{
public:
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::base_addr
	int32_t ___base_addr_0;
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::offset_addr
	int32_t ___offset_addr_1;

public:
	inline static int32_t get_offset_of_base_addr_0() { return static_cast<int32_t>(offsetof(Link_t1473014075, ___base_addr_0)); }
	inline int32_t get_base_addr_0() const { return ___base_addr_0; }
	inline int32_t* get_address_of_base_addr_0() { return &___base_addr_0; }
	inline void set_base_addr_0(int32_t value)
	{
		___base_addr_0 = value;
	}

	inline static int32_t get_offset_of_offset_addr_1() { return static_cast<int32_t>(offsetof(Link_t1473014075, ___offset_addr_1)); }
	inline int32_t get_offset_addr_1() const { return ___offset_addr_1; }
	inline int32_t* get_address_of_offset_addr_1() { return &___offset_addr_1; }
	inline void set_offset_addr_1(int32_t value)
	{
		___offset_addr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T1473014075_H
#ifndef CHARACTERCLASS_T2760279392_H
#define CHARACTERCLASS_T2760279392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t2760279392  : public Expression_t1581611722
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t2342394985 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t2342394985 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t2203430629 * ___intervals_5;

public:
	inline static int32_t get_offset_of_negate_1() { return static_cast<int32_t>(offsetof(CharacterClass_t2760279392, ___negate_1)); }
	inline bool get_negate_1() const { return ___negate_1; }
	inline bool* get_address_of_negate_1() { return &___negate_1; }
	inline void set_negate_1(bool value)
	{
		___negate_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(CharacterClass_t2760279392, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_pos_cats_3() { return static_cast<int32_t>(offsetof(CharacterClass_t2760279392, ___pos_cats_3)); }
	inline BitArray_t2342394985 * get_pos_cats_3() const { return ___pos_cats_3; }
	inline BitArray_t2342394985 ** get_address_of_pos_cats_3() { return &___pos_cats_3; }
	inline void set_pos_cats_3(BitArray_t2342394985 * value)
	{
		___pos_cats_3 = value;
		Il2CppCodeGenWriteBarrier((&___pos_cats_3), value);
	}

	inline static int32_t get_offset_of_neg_cats_4() { return static_cast<int32_t>(offsetof(CharacterClass_t2760279392, ___neg_cats_4)); }
	inline BitArray_t2342394985 * get_neg_cats_4() const { return ___neg_cats_4; }
	inline BitArray_t2342394985 ** get_address_of_neg_cats_4() { return &___neg_cats_4; }
	inline void set_neg_cats_4(BitArray_t2342394985 * value)
	{
		___neg_cats_4 = value;
		Il2CppCodeGenWriteBarrier((&___neg_cats_4), value);
	}

	inline static int32_t get_offset_of_intervals_5() { return static_cast<int32_t>(offsetof(CharacterClass_t2760279392, ___intervals_5)); }
	inline IntervalCollection_t2203430629 * get_intervals_5() const { return ___intervals_5; }
	inline IntervalCollection_t2203430629 ** get_address_of_intervals_5() { return &___intervals_5; }
	inline void set_intervals_5(IntervalCollection_t2203430629 * value)
	{
		___intervals_5 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_5), value);
	}
};

struct CharacterClass_t2760279392_StaticFields
{
public:
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t2949578957  ___upper_case_characters_0;

public:
	inline static int32_t get_offset_of_upper_case_characters_0() { return static_cast<int32_t>(offsetof(CharacterClass_t2760279392_StaticFields, ___upper_case_characters_0)); }
	inline Interval_t2949578957  get_upper_case_characters_0() const { return ___upper_case_characters_0; }
	inline Interval_t2949578957 * get_address_of_upper_case_characters_0() { return &___upper_case_characters_0; }
	inline void set_upper_case_characters_0(Interval_t2949578957  value)
	{
		___upper_case_characters_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCLASS_T2760279392_H
#ifndef X509VERIFICATIONFLAGS_T711483322_H
#define X509VERIFICATIONFLAGS_T711483322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct  X509VerificationFlags_t711483322 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509VerificationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509VerificationFlags_t711483322, ___value___1)); }
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
#endif // X509VERIFICATIONFLAGS_T711483322_H
#ifndef ASNDECODESTATUS_T2905265872_H
#define ASNDECODESTATUS_T2905265872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnDecodeStatus
struct  AsnDecodeStatus_t2905265872 
{
public:
	// System.Int32 System.Security.Cryptography.AsnDecodeStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AsnDecodeStatus_t2905265872, ___value___1)); }
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
#endif // ASNDECODESTATUS_T2905265872_H
#ifndef CATEGORY_T4024833735_H
#define CATEGORY_T4024833735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Category
struct  Category_t4024833735 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Category::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Category_t4024833735, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORY_T4024833735_H
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
#ifndef POSITION_T395601442_H
#define POSITION_T395601442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Position
struct  Position_t395601442 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Position::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Position_t395601442, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T395601442_H
#ifndef X509FINDTYPE_T1316343390_H
#define X509FINDTYPE_T1316343390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509FindType
struct  X509FindType_t1316343390 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509FindType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509FindType_t1316343390, ___value___1)); }
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
#endif // X509FINDTYPE_T1316343390_H
#ifndef URIKIND_T2651602253_H
#define URIKIND_T2651602253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t2651602253 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t2651602253, ___value___1)); }
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
#endif // URIKIND_T2651602253_H
#ifndef URIHOSTNAMETYPE_T2189074131_H
#define URIHOSTNAMETYPE_T2189074131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHostNameType
struct  UriHostNameType_t2189074131 
{
public:
	// System.Int32 System.UriHostNameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriHostNameType_t2189074131, ___value___1)); }
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
#endif // URIHOSTNAMETYPE_T2189074131_H
#ifndef BACKSLASHNUMBER_T3884605558_H
#define BACKSLASHNUMBER_T3884605558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct  BackslashNumber_t3884605558  : public Reference_t2622548812
{
public:
	// System.String System.Text.RegularExpressions.Syntax.BackslashNumber::literal
	String_t* ___literal_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ecma
	bool ___ecma_3;

public:
	inline static int32_t get_offset_of_literal_2() { return static_cast<int32_t>(offsetof(BackslashNumber_t3884605558, ___literal_2)); }
	inline String_t* get_literal_2() const { return ___literal_2; }
	inline String_t** get_address_of_literal_2() { return &___literal_2; }
	inline void set_literal_2(String_t* value)
	{
		___literal_2 = value;
		Il2CppCodeGenWriteBarrier((&___literal_2), value);
	}

	inline static int32_t get_offset_of_ecma_3() { return static_cast<int32_t>(offsetof(BackslashNumber_t3884605558, ___ecma_3)); }
	inline bool get_ecma_3() const { return ___ecma_3; }
	inline bool* get_address_of_ecma_3() { return &___ecma_3; }
	inline void set_ecma_3(bool value)
	{
		___ecma_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKSLASHNUMBER_T3884605558_H
#ifndef OPCODE_T3199220381_H
#define OPCODE_T3199220381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.OpCode
struct  OpCode_t3199220381 
{
public:
	// System.UInt16 System.Text.RegularExpressions.OpCode::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCode_t3199220381, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T3199220381_H
#ifndef URIPARTIAL_T430649659_H
#define URIPARTIAL_T430649659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriPartial
struct  UriPartial_t430649659 
{
public:
	// System.Int32 System.UriPartial::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriPartial_t430649659, ___value___1)); }
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
#endif // URIPARTIAL_T430649659_H
#ifndef REGEXOPTIONS_T3304626522_H
#define REGEXOPTIONS_T3304626522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t3304626522 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t3304626522, ___value___1)); }
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
#endif // REGEXOPTIONS_T3304626522_H
#ifndef MATCH_T796562138_H
#define MATCH_T796562138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t796562138  : public Group_t2498241182
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t2570732592 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	RuntimeObject* ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t4026737686 * ___groups_9;

public:
	inline static int32_t get_offset_of_regex_6() { return static_cast<int32_t>(offsetof(Match_t796562138, ___regex_6)); }
	inline Regex_t2570732592 * get_regex_6() const { return ___regex_6; }
	inline Regex_t2570732592 ** get_address_of_regex_6() { return &___regex_6; }
	inline void set_regex_6(Regex_t2570732592 * value)
	{
		___regex_6 = value;
		Il2CppCodeGenWriteBarrier((&___regex_6), value);
	}

	inline static int32_t get_offset_of_machine_7() { return static_cast<int32_t>(offsetof(Match_t796562138, ___machine_7)); }
	inline RuntimeObject* get_machine_7() const { return ___machine_7; }
	inline RuntimeObject** get_address_of_machine_7() { return &___machine_7; }
	inline void set_machine_7(RuntimeObject* value)
	{
		___machine_7 = value;
		Il2CppCodeGenWriteBarrier((&___machine_7), value);
	}

	inline static int32_t get_offset_of_text_length_8() { return static_cast<int32_t>(offsetof(Match_t796562138, ___text_length_8)); }
	inline int32_t get_text_length_8() const { return ___text_length_8; }
	inline int32_t* get_address_of_text_length_8() { return &___text_length_8; }
	inline void set_text_length_8(int32_t value)
	{
		___text_length_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(Match_t796562138, ___groups_9)); }
	inline GroupCollection_t4026737686 * get_groups_9() const { return ___groups_9; }
	inline GroupCollection_t4026737686 ** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(GroupCollection_t4026737686 * value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier((&___groups_9), value);
	}
};

struct Match_t796562138_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t796562138 * ___empty_10;

public:
	inline static int32_t get_offset_of_empty_10() { return static_cast<int32_t>(offsetof(Match_t796562138_StaticFields, ___empty_10)); }
	inline Match_t796562138 * get_empty_10() const { return ___empty_10; }
	inline Match_t796562138 ** get_address_of_empty_10() { return &___empty_10; }
	inline void set_empty_10(Match_t796562138 * value)
	{
		___empty_10 = value;
		Il2CppCodeGenWriteBarrier((&___empty_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T796562138_H
#ifndef OPFLAGS_T3290666816_H
#define OPFLAGS_T3290666816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.OpFlags
struct  OpFlags_t3290666816 
{
public:
	// System.UInt16 System.Text.RegularExpressions.OpFlags::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpFlags_t3290666816, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPFLAGS_T3290666816_H
#ifndef X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3542796164_H
#define X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3542796164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
struct  X509SubjectKeyIdentifierHashAlgorithm_t3542796164 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierHashAlgorithm_t3542796164, ___value___1)); }
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
#endif // X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3542796164_H
#ifndef MODE_T2692243128_H
#define MODE_T2692243128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/Mode
struct  Mode_t2692243128 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t2692243128, ___value___1)); }
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
#endif // MODE_T2692243128_H
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
#ifndef X509REVOCATIONMODE_T2963934379_H
#define X509REVOCATIONMODE_T2963934379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationMode
struct  X509RevocationMode_t2963934379 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509RevocationMode_t2963934379, ___value___1)); }
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
#endif // X509REVOCATIONMODE_T2963934379_H
#ifndef X509REVOCATIONFLAG_T3468402237_H
#define X509REVOCATIONFLAG_T3468402237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationFlag
struct  X509RevocationFlag_t3468402237 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509RevocationFlag_t3468402237, ___value___1)); }
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
#endif // X509REVOCATIONFLAG_T3468402237_H
#ifndef INTERPRETER_T3045657267_H
#define INTERPRETER_T3045657267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter
struct  Interpreter_t3045657267  : public BaseMachine_t2567317288
{
public:
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t2314508569* ___program_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start_2;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end_4;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min_6;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t3740143353 * ___qs_7;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr_8;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t3048477934 * ___repeat_9;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t3048477934 * ___fast_10;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t1994502788  ___stack_11;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t3048477934 * ___deep_12;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t896378872* ___marks_13;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start_14;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end_15;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t2951345017* ___groups_16;

public:
	inline static int32_t get_offset_of_program_1() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___program_1)); }
	inline UInt16U5BU5D_t2314508569* get_program_1() const { return ___program_1; }
	inline UInt16U5BU5D_t2314508569** get_address_of_program_1() { return &___program_1; }
	inline void set_program_1(UInt16U5BU5D_t2314508569* value)
	{
		___program_1 = value;
		Il2CppCodeGenWriteBarrier((&___program_1), value);
	}

	inline static int32_t get_offset_of_program_start_2() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___program_start_2)); }
	inline int32_t get_program_start_2() const { return ___program_start_2; }
	inline int32_t* get_address_of_program_start_2() { return &___program_start_2; }
	inline void set_program_start_2(int32_t value)
	{
		___program_start_2 = value;
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}

	inline static int32_t get_offset_of_text_end_4() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___text_end_4)); }
	inline int32_t get_text_end_4() const { return ___text_end_4; }
	inline int32_t* get_address_of_text_end_4() { return &___text_end_4; }
	inline void set_text_end_4(int32_t value)
	{
		___text_end_4 = value;
	}

	inline static int32_t get_offset_of_group_count_5() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___group_count_5)); }
	inline int32_t get_group_count_5() const { return ___group_count_5; }
	inline int32_t* get_address_of_group_count_5() { return &___group_count_5; }
	inline void set_group_count_5(int32_t value)
	{
		___group_count_5 = value;
	}

	inline static int32_t get_offset_of_match_min_6() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___match_min_6)); }
	inline int32_t get_match_min_6() const { return ___match_min_6; }
	inline int32_t* get_address_of_match_min_6() { return &___match_min_6; }
	inline void set_match_min_6(int32_t value)
	{
		___match_min_6 = value;
	}

	inline static int32_t get_offset_of_qs_7() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___qs_7)); }
	inline QuickSearch_t3740143353 * get_qs_7() const { return ___qs_7; }
	inline QuickSearch_t3740143353 ** get_address_of_qs_7() { return &___qs_7; }
	inline void set_qs_7(QuickSearch_t3740143353 * value)
	{
		___qs_7 = value;
		Il2CppCodeGenWriteBarrier((&___qs_7), value);
	}

	inline static int32_t get_offset_of_scan_ptr_8() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___scan_ptr_8)); }
	inline int32_t get_scan_ptr_8() const { return ___scan_ptr_8; }
	inline int32_t* get_address_of_scan_ptr_8() { return &___scan_ptr_8; }
	inline void set_scan_ptr_8(int32_t value)
	{
		___scan_ptr_8 = value;
	}

	inline static int32_t get_offset_of_repeat_9() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___repeat_9)); }
	inline RepeatContext_t3048477934 * get_repeat_9() const { return ___repeat_9; }
	inline RepeatContext_t3048477934 ** get_address_of_repeat_9() { return &___repeat_9; }
	inline void set_repeat_9(RepeatContext_t3048477934 * value)
	{
		___repeat_9 = value;
		Il2CppCodeGenWriteBarrier((&___repeat_9), value);
	}

	inline static int32_t get_offset_of_fast_10() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___fast_10)); }
	inline RepeatContext_t3048477934 * get_fast_10() const { return ___fast_10; }
	inline RepeatContext_t3048477934 ** get_address_of_fast_10() { return &___fast_10; }
	inline void set_fast_10(RepeatContext_t3048477934 * value)
	{
		___fast_10 = value;
		Il2CppCodeGenWriteBarrier((&___fast_10), value);
	}

	inline static int32_t get_offset_of_stack_11() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___stack_11)); }
	inline IntStack_t1994502788  get_stack_11() const { return ___stack_11; }
	inline IntStack_t1994502788 * get_address_of_stack_11() { return &___stack_11; }
	inline void set_stack_11(IntStack_t1994502788  value)
	{
		___stack_11 = value;
	}

	inline static int32_t get_offset_of_deep_12() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___deep_12)); }
	inline RepeatContext_t3048477934 * get_deep_12() const { return ___deep_12; }
	inline RepeatContext_t3048477934 ** get_address_of_deep_12() { return &___deep_12; }
	inline void set_deep_12(RepeatContext_t3048477934 * value)
	{
		___deep_12 = value;
		Il2CppCodeGenWriteBarrier((&___deep_12), value);
	}

	inline static int32_t get_offset_of_marks_13() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___marks_13)); }
	inline MarkU5BU5D_t896378872* get_marks_13() const { return ___marks_13; }
	inline MarkU5BU5D_t896378872** get_address_of_marks_13() { return &___marks_13; }
	inline void set_marks_13(MarkU5BU5D_t896378872* value)
	{
		___marks_13 = value;
		Il2CppCodeGenWriteBarrier((&___marks_13), value);
	}

	inline static int32_t get_offset_of_mark_start_14() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___mark_start_14)); }
	inline int32_t get_mark_start_14() const { return ___mark_start_14; }
	inline int32_t* get_address_of_mark_start_14() { return &___mark_start_14; }
	inline void set_mark_start_14(int32_t value)
	{
		___mark_start_14 = value;
	}

	inline static int32_t get_offset_of_mark_end_15() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___mark_end_15)); }
	inline int32_t get_mark_end_15() const { return ___mark_end_15; }
	inline int32_t* get_address_of_mark_end_15() { return &___mark_end_15; }
	inline void set_mark_end_15(int32_t value)
	{
		___mark_end_15 = value;
	}

	inline static int32_t get_offset_of_groups_16() { return static_cast<int32_t>(offsetof(Interpreter_t3045657267, ___groups_16)); }
	inline Int32U5BU5D_t2951345017* get_groups_16() const { return ___groups_16; }
	inline Int32U5BU5D_t2951345017** get_address_of_groups_16() { return &___groups_16; }
	inline void set_groups_16(Int32U5BU5D_t2951345017* value)
	{
		___groups_16 = value;
		Il2CppCodeGenWriteBarrier((&___groups_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETER_T3045657267_H
#ifndef X509NAMETYPE_T2961411613_H
#define X509NAMETYPE_T2961411613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509NameType
struct  X509NameType_t2961411613 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509NameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509NameType_t2961411613, ___value___1)); }
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
#endif // X509NAMETYPE_T2961411613_H
#ifndef X509KEYUSAGEFLAGS_T2503346937_H
#define X509KEYUSAGEFLAGS_T2503346937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct  X509KeyUsageFlags_t2503346937 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyUsageFlags_t2503346937, ___value___1)); }
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
#endif // X509KEYUSAGEFLAGS_T2503346937_H
#ifndef GROUP_T3547025775_H
#define GROUP_T3547025775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Group
struct  Group_t3547025775  : public CompositeExpression_t1183293217
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T3547025775_H
#ifndef X509CHAINSTATUSFLAGS_T1592911795_H
#define X509CHAINSTATUSFLAGS_T1592911795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1592911795 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1592911795, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T1592911795_H
#ifndef FORMATEXCEPTION_T195130_H
#define FORMATEXCEPTION_T195130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t195130  : public SystemException_t4168264303
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T195130_H
#ifndef REPETITION_T1962111128_H
#define REPETITION_T1962111128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Repetition
struct  Repetition_t1962111128  : public CompositeExpression_t1183293217
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.Repetition::lazy
	bool ___lazy_3;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(Repetition_t1962111128, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(Repetition_t1962111128, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(Repetition_t1962111128, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPETITION_T1962111128_H
#ifndef ASSERTION_T3382005788_H
#define ASSERTION_T3382005788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Assertion
struct  Assertion_t3382005788  : public CompositeExpression_t1183293217
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTION_T3382005788_H
#ifndef OPENFLAGS_T310374357_H
#define OPENFLAGS_T310374357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OpenFlags
struct  OpenFlags_t310374357 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.OpenFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpenFlags_t310374357, ___value___1)); }
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
#endif // OPENFLAGS_T310374357_H
#ifndef PATTERNLINKSTACK_T2139353479_H
#define PATTERNLINKSTACK_T2139353479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
struct  PatternLinkStack_t2139353479  : public LinkStack_t2872369810
{
public:
	// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::link
	Link_t1473014075  ___link_1;

public:
	inline static int32_t get_offset_of_link_1() { return static_cast<int32_t>(offsetof(PatternLinkStack_t2139353479, ___link_1)); }
	inline Link_t1473014075  get_link_1() const { return ___link_1; }
	inline Link_t1473014075 * get_address_of_link_1() { return &___link_1; }
	inline void set_link_1(Link_t1473014075  value)
	{
		___link_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNLINKSTACK_T2139353479_H
#ifndef ALTERNATION_T3864059847_H
#define ALTERNATION_T3864059847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Alternation
struct  Alternation_t3864059847  : public CompositeExpression_t1183293217
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALTERNATION_T3864059847_H
#ifndef STORELOCATION_T1315150356_H
#define STORELOCATION_T1315150356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreLocation
struct  StoreLocation_t1315150356 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StoreLocation_t1315150356, ___value___1)); }
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
#endif // STORELOCATION_T1315150356_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2311847829_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2311847829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2311847829  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2416_t2396488415  ___U24U24fieldU2D1_0;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24128_t3280665359  ___U24U24fieldU2D2_1;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2412_t404068635  ___U24U24fieldU2D3_2;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2412_t404068635  ___U24U24fieldU2D4_3;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D1_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields, ___U24U24fieldU2D1_0)); }
	inline U24ArrayTypeU2416_t2396488415  get_U24U24fieldU2D1_0() const { return ___U24U24fieldU2D1_0; }
	inline U24ArrayTypeU2416_t2396488415 * get_address_of_U24U24fieldU2D1_0() { return &___U24U24fieldU2D1_0; }
	inline void set_U24U24fieldU2D1_0(U24ArrayTypeU2416_t2396488415  value)
	{
		___U24U24fieldU2D1_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields, ___U24U24fieldU2D2_1)); }
	inline U24ArrayTypeU24128_t3280665359  get_U24U24fieldU2D2_1() const { return ___U24U24fieldU2D2_1; }
	inline U24ArrayTypeU24128_t3280665359 * get_address_of_U24U24fieldU2D2_1() { return &___U24U24fieldU2D2_1; }
	inline void set_U24U24fieldU2D2_1(U24ArrayTypeU24128_t3280665359  value)
	{
		___U24U24fieldU2D2_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields, ___U24U24fieldU2D3_2)); }
	inline U24ArrayTypeU2412_t404068635  get_U24U24fieldU2D3_2() const { return ___U24U24fieldU2D3_2; }
	inline U24ArrayTypeU2412_t404068635 * get_address_of_U24U24fieldU2D3_2() { return &___U24U24fieldU2D3_2; }
	inline void set_U24U24fieldU2D3_2(U24ArrayTypeU2412_t404068635  value)
	{
		___U24U24fieldU2D3_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields, ___U24U24fieldU2D4_3)); }
	inline U24ArrayTypeU2412_t404068635  get_U24U24fieldU2D4_3() const { return ___U24U24fieldU2D4_3; }
	inline U24ArrayTypeU2412_t404068635 * get_address_of_U24U24fieldU2D4_3() { return &___U24U24fieldU2D4_3; }
	inline void set_U24U24fieldU2D4_3(U24ArrayTypeU2412_t404068635  value)
	{
		___U24U24fieldU2D4_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2311847829_H
#ifndef X509ENHANCEDKEYUSAGEEXTENSION_T2123116986_H
#define X509ENHANCEDKEYUSAGEEXTENSION_T2123116986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t2123116986  : public X509Extension_t1183963135
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t1329090076 * ____enhKeyUsage_4;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_5;

public:
	inline static int32_t get_offset_of__enhKeyUsage_4() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2123116986, ____enhKeyUsage_4)); }
	inline OidCollection_t1329090076 * get__enhKeyUsage_4() const { return ____enhKeyUsage_4; }
	inline OidCollection_t1329090076 ** get_address_of__enhKeyUsage_4() { return &____enhKeyUsage_4; }
	inline void set__enhKeyUsage_4(OidCollection_t1329090076 * value)
	{
		____enhKeyUsage_4 = value;
		Il2CppCodeGenWriteBarrier((&____enhKeyUsage_4), value);
	}

	inline static int32_t get_offset_of__status_5() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2123116986, ____status_5)); }
	inline int32_t get__status_5() const { return ____status_5; }
	inline int32_t* get_address_of__status_5() { return &____status_5; }
	inline void set__status_5(int32_t value)
	{
		____status_5 = value;
	}
};

struct X509EnhancedKeyUsageExtension_t2123116986_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::<>f__switch$mapE
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24mapE_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_6() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2123116986_StaticFields, ___U3CU3Ef__switchU24mapE_6)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24mapE_6() const { return ___U3CU3Ef__switchU24mapE_6; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24mapE_6() { return &___U3CU3Ef__switchU24mapE_6; }
	inline void set_U3CU3Ef__switchU24mapE_6(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24mapE_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509ENHANCEDKEYUSAGEEXTENSION_T2123116986_H
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
#ifndef EXPRESSIONASSERTION_T2785699738_H
#define EXPRESSIONASSERTION_T2785699738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct  ExpressionAssertion_t2785699738  : public Assertion_t3382005788
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::reverse
	bool ___reverse_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::negate
	bool ___negate_2;

public:
	inline static int32_t get_offset_of_reverse_1() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t2785699738, ___reverse_1)); }
	inline bool get_reverse_1() const { return ___reverse_1; }
	inline bool* get_address_of_reverse_1() { return &___reverse_1; }
	inline void set_reverse_1(bool value)
	{
		___reverse_1 = value;
	}

	inline static int32_t get_offset_of_negate_2() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t2785699738, ___negate_2)); }
	inline bool get_negate_2() const { return ___negate_2; }
	inline bool* get_address_of_negate_2() { return &___negate_2; }
	inline void set_negate_2(bool value)
	{
		___negate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONASSERTION_T2785699738_H
#ifndef NONBACKTRACKINGGROUP_T1164761523_H
#define NONBACKTRACKINGGROUP_T1164761523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
struct  NonBacktrackingGroup_t1164761523  : public Group_t3547025775
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONBACKTRACKINGGROUP_T1164761523_H
#ifndef REGEX_T2570732592_H
#define REGEX_T2570732592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t2570732592  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t3429798153* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t2951345017* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t2570732592, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t2570732592, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t2570732592, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t2570732592, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_group_names_5() { return static_cast<int32_t>(offsetof(Regex_t2570732592, ___group_names_5)); }
	inline StringU5BU5D_t3429798153* get_group_names_5() const { return ___group_names_5; }
	inline StringU5BU5D_t3429798153** get_address_of_group_names_5() { return &___group_names_5; }
	inline void set_group_names_5(StringU5BU5D_t3429798153* value)
	{
		___group_names_5 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_5), value);
	}

	inline static int32_t get_offset_of_group_numbers_6() { return static_cast<int32_t>(offsetof(Regex_t2570732592, ___group_numbers_6)); }
	inline Int32U5BU5D_t2951345017* get_group_numbers_6() const { return ___group_numbers_6; }
	inline Int32U5BU5D_t2951345017** get_address_of_group_numbers_6() { return &___group_numbers_6; }
	inline void set_group_numbers_6(Int32U5BU5D_t2951345017* value)
	{
		___group_numbers_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_6), value);
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(Regex_t2570732592, ___pattern_7)); }
	inline String_t* get_pattern_7() const { return ___pattern_7; }
	inline String_t** get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(String_t* value)
	{
		___pattern_7 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_7), value);
	}

	inline static int32_t get_offset_of_roptions_8() { return static_cast<int32_t>(offsetof(Regex_t2570732592, ___roptions_8)); }
	inline int32_t get_roptions_8() const { return ___roptions_8; }
	inline int32_t* get_address_of_roptions_8() { return &___roptions_8; }
	inline void set_roptions_8(int32_t value)
	{
		___roptions_8 = value;
	}
};

struct Regex_t2570732592_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t3355131659 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t2570732592_StaticFields, ___cache_0)); }
	inline FactoryCache_t3355131659 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t3355131659 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t3355131659 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T2570732592_H
#ifndef KEY_T3105331241_H
#define KEY_T3105331241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache/Key
struct  Key_t3105331241  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.FactoryCache/Key::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.FactoryCache/Key::options
	int32_t ___options_1;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Key_t3105331241, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(Key_t3105331241, ___options_1)); }
	inline int32_t get_options_1() const { return ___options_1; }
	inline int32_t* get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(int32_t value)
	{
		___options_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T3105331241_H
#ifndef X509SUBJECTKEYIDENTIFIEREXTENSION_T1013321451_H
#define X509SUBJECTKEYIDENTIFIEREXTENSION_T1013321451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct  X509SubjectKeyIdentifierExtension_t1013321451  : public X509Extension_t1183963135
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_t855963486* ____subjectKeyIdentifier_6;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__subjectKeyIdentifier_6() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t1013321451, ____subjectKeyIdentifier_6)); }
	inline ByteU5BU5D_t855963486* get__subjectKeyIdentifier_6() const { return ____subjectKeyIdentifier_6; }
	inline ByteU5BU5D_t855963486** get_address_of__subjectKeyIdentifier_6() { return &____subjectKeyIdentifier_6; }
	inline void set__subjectKeyIdentifier_6(ByteU5BU5D_t855963486* value)
	{
		____subjectKeyIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((&____subjectKeyIdentifier_6), value);
	}

	inline static int32_t get_offset_of__ski_7() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t1013321451, ____ski_7)); }
	inline String_t* get__ski_7() const { return ____ski_7; }
	inline String_t** get_address_of__ski_7() { return &____ski_7; }
	inline void set__ski_7(String_t* value)
	{
		____ski_7 = value;
		Il2CppCodeGenWriteBarrier((&____ski_7), value);
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t1013321451, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509SUBJECTKEYIDENTIFIEREXTENSION_T1013321451_H
#ifndef X509STORE_T3023776948_H
#define X509STORE_T3023776948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Store
struct  X509Store_t3023776948  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Store::_name
	String_t* ____name_0;
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::_location
	int32_t ____location_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t68778146 * ___list_2;
	// System.Security.Cryptography.X509Certificates.OpenFlags System.Security.Cryptography.X509Certificates.X509Store::_flags
	int32_t ____flags_3;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_t707420964 * ___store_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(X509Store_t3023776948, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(X509Store_t3023776948, ____location_1)); }
	inline int32_t get__location_1() const { return ____location_1; }
	inline int32_t* get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(int32_t value)
	{
		____location_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(X509Store_t3023776948, ___list_2)); }
	inline X509Certificate2Collection_t68778146 * get_list_2() const { return ___list_2; }
	inline X509Certificate2Collection_t68778146 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(X509Certificate2Collection_t68778146 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}

	inline static int32_t get_offset_of__flags_3() { return static_cast<int32_t>(offsetof(X509Store_t3023776948, ____flags_3)); }
	inline int32_t get__flags_3() const { return ____flags_3; }
	inline int32_t* get_address_of__flags_3() { return &____flags_3; }
	inline void set__flags_3(int32_t value)
	{
		____flags_3 = value;
	}

	inline static int32_t get_offset_of_store_4() { return static_cast<int32_t>(offsetof(X509Store_t3023776948, ___store_4)); }
	inline X509Store_t707420964 * get_store_4() const { return ___store_4; }
	inline X509Store_t707420964 ** get_address_of_store_4() { return &___store_4; }
	inline void set_store_4(X509Store_t707420964 * value)
	{
		___store_4 = value;
		Il2CppCodeGenWriteBarrier((&___store_4), value);
	}
};

struct X509Store_t3023776948_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Store::<>f__switch$mapF
	Dictionary_2_t2208131372 * ___U3CU3Ef__switchU24mapF_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_5() { return static_cast<int32_t>(offsetof(X509Store_t3023776948_StaticFields, ___U3CU3Ef__switchU24mapF_5)); }
	inline Dictionary_2_t2208131372 * get_U3CU3Ef__switchU24mapF_5() const { return ___U3CU3Ef__switchU24mapF_5; }
	inline Dictionary_2_t2208131372 ** get_address_of_U3CU3Ef__switchU24mapF_5() { return &___U3CU3Ef__switchU24mapF_5; }
	inline void set_U3CU3Ef__switchU24mapF_5(Dictionary_2_t2208131372 * value)
	{
		___U3CU3Ef__switchU24mapF_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T3023776948_H
#ifndef REGULAREXPRESSION_T1620813245_H
#define REGULAREXPRESSION_T1620813245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.RegularExpression
struct  RegularExpression_t1620813245  : public Group_t3547025775
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.RegularExpression::group_count
	int32_t ___group_count_1;

public:
	inline static int32_t get_offset_of_group_count_1() { return static_cast<int32_t>(offsetof(RegularExpression_t1620813245, ___group_count_1)); }
	inline int32_t get_group_count_1() const { return ___group_count_1; }
	inline int32_t* get_address_of_group_count_1() { return &___group_count_1; }
	inline void set_group_count_1(int32_t value)
	{
		___group_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGULAREXPRESSION_T1620813245_H
#ifndef CAPTURINGGROUP_T138971363_H
#define CAPTURINGGROUP_T138971363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct  CapturingGroup_t138971363  : public Group_t3547025775
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::gid
	int32_t ___gid_1;
	// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(CapturingGroup_t138971363, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CapturingGroup_t138971363, ___name_2)); }
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
#endif // CAPTURINGGROUP_T138971363_H
#ifndef CAPTUREASSERTION_T2947362665_H
#define CAPTUREASSERTION_T2947362665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t2947362665  : public Assertion_t3382005788
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t2785699738 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t138971363 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t2766384139 * ___literal_3;

public:
	inline static int32_t get_offset_of_alternate_1() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2947362665, ___alternate_1)); }
	inline ExpressionAssertion_t2785699738 * get_alternate_1() const { return ___alternate_1; }
	inline ExpressionAssertion_t2785699738 ** get_address_of_alternate_1() { return &___alternate_1; }
	inline void set_alternate_1(ExpressionAssertion_t2785699738 * value)
	{
		___alternate_1 = value;
		Il2CppCodeGenWriteBarrier((&___alternate_1), value);
	}

	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2947362665, ___group_2)); }
	inline CapturingGroup_t138971363 * get_group_2() const { return ___group_2; }
	inline CapturingGroup_t138971363 ** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(CapturingGroup_t138971363 * value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier((&___group_2), value);
	}

	inline static int32_t get_offset_of_literal_3() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2947362665, ___literal_3)); }
	inline Literal_t2766384139 * get_literal_3() const { return ___literal_3; }
	inline Literal_t2766384139 ** get_address_of_literal_3() { return &___literal_3; }
	inline void set_literal_3(Literal_t2766384139 * value)
	{
		___literal_3 = value;
		Il2CppCodeGenWriteBarrier((&___literal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREASSERTION_T2947362665_H
#ifndef X509CHAINSTATUS_T2960962579_H
#define X509CHAINSTATUS_T2960962579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t2960962579 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t2960962579, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t2960962579, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t2960962579_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t2960962579_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
#endif // X509CHAINSTATUS_T2960962579_H
#ifndef ANCHORINFO_T2763211468_H
#define ANCHORINFO_T2763211468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct  AnchorInfo_t2763211468  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.AnchorInfo::expr
	Expression_t1581611722 * ___expr_0;
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::pos
	uint16_t ___pos_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::offset
	int32_t ___offset_2;
	// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::str
	String_t* ___str_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::width
	int32_t ___width_4;
	// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::ignore
	bool ___ignore_5;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(AnchorInfo_t2763211468, ___expr_0)); }
	inline Expression_t1581611722 * get_expr_0() const { return ___expr_0; }
	inline Expression_t1581611722 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t1581611722 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(AnchorInfo_t2763211468, ___pos_1)); }
	inline uint16_t get_pos_1() const { return ___pos_1; }
	inline uint16_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(uint16_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(AnchorInfo_t2763211468, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(AnchorInfo_t2763211468, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((&___str_3), value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AnchorInfo_t2763211468, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(AnchorInfo_t2763211468, ___ignore_5)); }
	inline bool get_ignore_5() const { return ___ignore_5; }
	inline bool* get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(bool value)
	{
		___ignore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORINFO_T2763211468_H
#ifndef X509KEYUSAGEEXTENSION_T3265721421_H
#define X509KEYUSAGEEXTENSION_T3265721421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct  X509KeyUsageExtension_t3265721421  : public X509Extension_t1183963135
{
public:
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__keyUsages_7() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t3265721421, ____keyUsages_7)); }
	inline int32_t get__keyUsages_7() const { return ____keyUsages_7; }
	inline int32_t* get_address_of__keyUsages_7() { return &____keyUsages_7; }
	inline void set__keyUsages_7(int32_t value)
	{
		____keyUsages_7 = value;
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t3265721421, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYUSAGEEXTENSION_T3265721421_H
#ifndef URIFORMATEXCEPTION_T2511906267_H
#define URIFORMATEXCEPTION_T2511906267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormatException
struct  UriFormatException_t2511906267  : public FormatException_t195130
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMATEXCEPTION_T2511906267_H
#ifndef POSITIONASSERTION_T382115506_H
#define POSITIONASSERTION_T382115506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct  PositionAssertion_t382115506  : public Expression_t1581611722
{
public:
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.PositionAssertion::pos
	uint16_t ___pos_0;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(PositionAssertion_t382115506, ___pos_0)); }
	inline uint16_t get_pos_0() const { return ___pos_0; }
	inline uint16_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(uint16_t value)
	{
		___pos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASSERTION_T382115506_H
#ifndef BINDIPENDPOINT_T2329896518_H
#define BINDIPENDPOINT_T2329896518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.BindIPEndPoint
struct  BindIPEndPoint_t2329896518  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDIPENDPOINT_T2329896518_H
#ifndef BALANCINGGROUP_T4224748170_H
#define BALANCINGGROUP_T4224748170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct  BalancingGroup_t4224748170  : public CapturingGroup_t138971363
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.BalancingGroup::balance
	CapturingGroup_t138971363 * ___balance_3;

public:
	inline static int32_t get_offset_of_balance_3() { return static_cast<int32_t>(offsetof(BalancingGroup_t4224748170, ___balance_3)); }
	inline CapturingGroup_t138971363 * get_balance_3() const { return ___balance_3; }
	inline CapturingGroup_t138971363 ** get_address_of_balance_3() { return &___balance_3; }
	inline void set_balance_3(CapturingGroup_t138971363 * value)
	{
		___balance_3 = value;
		Il2CppCodeGenWriteBarrier((&___balance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALANCINGGROUP_T4224748170_H
#ifndef COSTDELEGATE_T2266625194_H
#define COSTDELEGATE_T2266625194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct  CostDelegate_t2266625194  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COSTDELEGATE_T2266625194_H
#ifndef COLLECTIONCHANGEEVENTHANDLER_T3349143350_H
#define COLLECTIONCHANGEEVENTHANDLER_T3349143350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventHandler
struct  CollectionChangeEventHandler_t3349143350  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTHANDLER_T3349143350_H
#ifndef PROPERTYCHANGEDEVENTHANDLER_T1714378753_H
#define PROPERTYCHANGEDEVENTHANDLER_T1714378753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventHandler
struct  PropertyChangedEventHandler_t1714378753  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTHANDLER_T1714378753_H
#ifndef LOCALCERTIFICATESELECTIONCALLBACK_T4020417944_H
#define LOCALCERTIFICATESELECTIONCALLBACK_T4020417944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.LocalCertificateSelectionCallback
struct  LocalCertificateSelectionCallback_t4020417944  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALCERTIFICATESELECTIONCALLBACK_T4020417944_H
#ifndef REMOTECERTIFICATEVALIDATIONCALLBACK_T2177389735_H
#define REMOTECERTIFICATEVALIDATIONCALLBACK_T2177389735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.RemoteCertificateValidationCallback
struct  RemoteCertificateValidationCallback_t2177389735  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTECERTIFICATEVALIDATIONCALLBACK_T2177389735_H
#ifndef HTTPCONTINUEDELEGATE_T3900675817_H
#define HTTPCONTINUEDELEGATE_T3900675817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpContinueDelegate
struct  HttpContinueDelegate_t3900675817  : public MulticastDelegate_t2400541826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPCONTINUEDELEGATE_T3900675817_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1200 = { sizeof (X509ChainStatus_t2960962579)+ sizeof (RuntimeObject), sizeof(X509ChainStatus_t2960962579_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1200[2] = 
{
	X509ChainStatus_t2960962579::get_offset_of_status_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	X509ChainStatus_t2960962579::get_offset_of_info_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1201 = { sizeof (X509ChainStatusFlags_t1592911795)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1201[24] = 
{
	X509ChainStatusFlags_t1592911795::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1202 = { sizeof (X509EnhancedKeyUsageExtension_t2123116986), -1, sizeof(X509EnhancedKeyUsageExtension_t2123116986_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1202[3] = 
{
	X509EnhancedKeyUsageExtension_t2123116986::get_offset_of__enhKeyUsage_4(),
	X509EnhancedKeyUsageExtension_t2123116986::get_offset_of__status_5(),
	X509EnhancedKeyUsageExtension_t2123116986_StaticFields::get_offset_of_U3CU3Ef__switchU24mapE_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1203 = { sizeof (X509Extension_t1183963135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1203[1] = 
{
	X509Extension_t1183963135::get_offset_of__critical_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1204 = { sizeof (X509ExtensionCollection_t882162307), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1204[1] = 
{
	X509ExtensionCollection_t882162307::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1205 = { sizeof (X509ExtensionEnumerator_t3308268471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1205[1] = 
{
	X509ExtensionEnumerator_t3308268471::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1206 = { sizeof (X509FindType_t1316343390)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1206[16] = 
{
	X509FindType_t1316343390::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1207 = { sizeof (X509KeyUsageExtension_t3265721421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1207[5] = 
{
	0,
	0,
	0,
	X509KeyUsageExtension_t3265721421::get_offset_of__keyUsages_7(),
	X509KeyUsageExtension_t3265721421::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1208 = { sizeof (X509KeyUsageFlags_t2503346937)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1208[11] = 
{
	X509KeyUsageFlags_t2503346937::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1209 = { sizeof (X509NameType_t2961411613)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1209[7] = 
{
	X509NameType_t2961411613::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1210 = { sizeof (X509RevocationFlag_t3468402237)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1210[4] = 
{
	X509RevocationFlag_t3468402237::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1211 = { sizeof (X509RevocationMode_t2963934379)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1211[4] = 
{
	X509RevocationMode_t2963934379::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1212 = { sizeof (X509Store_t3023776948), -1, sizeof(X509Store_t3023776948_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1212[6] = 
{
	X509Store_t3023776948::get_offset_of__name_0(),
	X509Store_t3023776948::get_offset_of__location_1(),
	X509Store_t3023776948::get_offset_of_list_2(),
	X509Store_t3023776948::get_offset_of__flags_3(),
	X509Store_t3023776948::get_offset_of_store_4(),
	X509Store_t3023776948_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1213 = { sizeof (X509SubjectKeyIdentifierExtension_t1013321451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1213[5] = 
{
	0,
	0,
	X509SubjectKeyIdentifierExtension_t1013321451::get_offset_of__subjectKeyIdentifier_6(),
	X509SubjectKeyIdentifierExtension_t1013321451::get_offset_of__ski_7(),
	X509SubjectKeyIdentifierExtension_t1013321451::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1214 = { sizeof (X509SubjectKeyIdentifierHashAlgorithm_t3542796164)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1214[4] = 
{
	X509SubjectKeyIdentifierHashAlgorithm_t3542796164::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1215 = { sizeof (X509VerificationFlags_t711483322)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1215[15] = 
{
	X509VerificationFlags_t711483322::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1216 = { sizeof (AsnDecodeStatus_t2905265872)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1216[7] = 
{
	AsnDecodeStatus_t2905265872::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1217 = { sizeof (AsnEncodedData_t1161168146), -1, sizeof(AsnEncodedData_t1161168146_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1217[3] = 
{
	AsnEncodedData_t1161168146::get_offset_of__oid_0(),
	AsnEncodedData_t1161168146::get_offset_of__raw_1(),
	AsnEncodedData_t1161168146_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1218 = { sizeof (Oid_t3875560705), -1, sizeof(Oid_t3875560705_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1218[3] = 
{
	Oid_t3875560705::get_offset_of__value_0(),
	Oid_t3875560705::get_offset_of__name_1(),
	Oid_t3875560705_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1219 = { sizeof (OidCollection_t1329090076), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1219[2] = 
{
	OidCollection_t1329090076::get_offset_of__list_0(),
	OidCollection_t1329090076::get_offset_of__readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1220 = { sizeof (OidEnumerator_t1943853947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1220[2] = 
{
	OidEnumerator_t1943853947::get_offset_of__collection_0(),
	OidEnumerator_t1943853947::get_offset_of__position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1221 = { sizeof (BaseMachine_t2567317288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1221[1] = 
{
	BaseMachine_t2567317288::get_offset_of_needs_groups_or_captures_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1222 = { sizeof (Capture_t816207277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1222[3] = 
{
	Capture_t816207277::get_offset_of_index_0(),
	Capture_t816207277::get_offset_of_length_1(),
	Capture_t816207277::get_offset_of_text_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1223 = { sizeof (CaptureCollection_t4271165394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1223[1] = 
{
	CaptureCollection_t4271165394::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1224 = { sizeof (Group_t2498241182), -1, sizeof(Group_t2498241182_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1224[3] = 
{
	Group_t2498241182_StaticFields::get_offset_of_Fail_3(),
	Group_t2498241182::get_offset_of_success_4(),
	Group_t2498241182::get_offset_of_captures_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1225 = { sizeof (GroupCollection_t4026737686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1225[2] = 
{
	GroupCollection_t4026737686::get_offset_of_list_0(),
	GroupCollection_t4026737686::get_offset_of_gap_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1226 = { sizeof (Match_t796562138), -1, sizeof(Match_t796562138_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1226[5] = 
{
	Match_t796562138::get_offset_of_regex_6(),
	Match_t796562138::get_offset_of_machine_7(),
	Match_t796562138::get_offset_of_text_length_8(),
	Match_t796562138::get_offset_of_groups_9(),
	Match_t796562138_StaticFields::get_offset_of_empty_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1227 = { sizeof (MatchCollection_t3979388558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1227[2] = 
{
	MatchCollection_t3979388558::get_offset_of_current_0(),
	MatchCollection_t3979388558::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1228 = { sizeof (Enumerator_t3927545923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1228[2] = 
{
	Enumerator_t3927545923::get_offset_of_index_0(),
	Enumerator_t3927545923::get_offset_of_coll_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1229 = { sizeof (Regex_t2570732592), -1, sizeof(Regex_t2570732592_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1229[9] = 
{
	Regex_t2570732592_StaticFields::get_offset_of_cache_0(),
	Regex_t2570732592::get_offset_of_machineFactory_1(),
	Regex_t2570732592::get_offset_of_mapping_2(),
	Regex_t2570732592::get_offset_of_group_count_3(),
	Regex_t2570732592::get_offset_of_gap_4(),
	Regex_t2570732592::get_offset_of_group_names_5(),
	Regex_t2570732592::get_offset_of_group_numbers_6(),
	Regex_t2570732592::get_offset_of_pattern_7(),
	Regex_t2570732592::get_offset_of_roptions_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1230 = { sizeof (RegexOptions_t3304626522)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1230[10] = 
{
	RegexOptions_t3304626522::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1231 = { sizeof (OpCode_t3199220381)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1231[26] = 
{
	OpCode_t3199220381::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1232 = { sizeof (OpFlags_t3290666816)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1232[6] = 
{
	OpFlags_t3290666816::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1233 = { sizeof (Position_t395601442)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1233[11] = 
{
	Position_t395601442::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1234 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1235 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1236 = { sizeof (FactoryCache_t3355131659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1236[3] = 
{
	FactoryCache_t3355131659::get_offset_of_capacity_0(),
	FactoryCache_t3355131659::get_offset_of_factories_1(),
	FactoryCache_t3355131659::get_offset_of_mru_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1237 = { sizeof (Key_t3105331241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1237[2] = 
{
	Key_t3105331241::get_offset_of_pattern_0(),
	Key_t3105331241::get_offset_of_options_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1238 = { sizeof (MRUList_t2810886510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1238[2] = 
{
	MRUList_t2810886510::get_offset_of_head_0(),
	MRUList_t2810886510::get_offset_of_tail_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1239 = { sizeof (Node_t2806860806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1239[3] = 
{
	Node_t2806860806::get_offset_of_value_0(),
	Node_t2806860806::get_offset_of_previous_1(),
	Node_t2806860806::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1240 = { sizeof (Category_t4024833735)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1240[146] = 
{
	Category_t4024833735::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1241 = { sizeof (CategoryUtils_t2914012279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1242 = { sizeof (LinkRef_t2858652957), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1243 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1244 = { sizeof (InterpreterFactory_t486001331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1244[4] = 
{
	InterpreterFactory_t486001331::get_offset_of_mapping_0(),
	InterpreterFactory_t486001331::get_offset_of_pattern_1(),
	InterpreterFactory_t486001331::get_offset_of_namesMapping_2(),
	InterpreterFactory_t486001331::get_offset_of_gap_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1245 = { sizeof (PatternCompiler_t2750316022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1245[1] = 
{
	PatternCompiler_t2750316022::get_offset_of_pgm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1246 = { sizeof (PatternLinkStack_t2139353479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1246[1] = 
{
	PatternLinkStack_t2139353479::get_offset_of_link_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1247 = { sizeof (Link_t1473014075)+ sizeof (RuntimeObject), sizeof(Link_t1473014075 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1247[2] = 
{
	Link_t1473014075::get_offset_of_base_addr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Link_t1473014075::get_offset_of_offset_addr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1248 = { sizeof (LinkStack_t2872369810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1248[1] = 
{
	LinkStack_t2872369810::get_offset_of_stack_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1249 = { sizeof (Mark_t314483733)+ sizeof (RuntimeObject), sizeof(Mark_t314483733 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1249[3] = 
{
	Mark_t314483733::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t314483733::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t314483733::get_offset_of_Previous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1250 = { sizeof (Interpreter_t3045657267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1250[16] = 
{
	Interpreter_t3045657267::get_offset_of_program_1(),
	Interpreter_t3045657267::get_offset_of_program_start_2(),
	Interpreter_t3045657267::get_offset_of_text_3(),
	Interpreter_t3045657267::get_offset_of_text_end_4(),
	Interpreter_t3045657267::get_offset_of_group_count_5(),
	Interpreter_t3045657267::get_offset_of_match_min_6(),
	Interpreter_t3045657267::get_offset_of_qs_7(),
	Interpreter_t3045657267::get_offset_of_scan_ptr_8(),
	Interpreter_t3045657267::get_offset_of_repeat_9(),
	Interpreter_t3045657267::get_offset_of_fast_10(),
	Interpreter_t3045657267::get_offset_of_stack_11(),
	Interpreter_t3045657267::get_offset_of_deep_12(),
	Interpreter_t3045657267::get_offset_of_marks_13(),
	Interpreter_t3045657267::get_offset_of_mark_start_14(),
	Interpreter_t3045657267::get_offset_of_mark_end_15(),
	Interpreter_t3045657267::get_offset_of_groups_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1251 = { sizeof (IntStack_t1994502788)+ sizeof (RuntimeObject), sizeof(IntStack_t1994502788_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1251[2] = 
{
	IntStack_t1994502788::get_offset_of_values_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntStack_t1994502788::get_offset_of_count_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1252 = { sizeof (RepeatContext_t3048477934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1252[7] = 
{
	RepeatContext_t3048477934::get_offset_of_start_0(),
	RepeatContext_t3048477934::get_offset_of_min_1(),
	RepeatContext_t3048477934::get_offset_of_max_2(),
	RepeatContext_t3048477934::get_offset_of_lazy_3(),
	RepeatContext_t3048477934::get_offset_of_expr_pc_4(),
	RepeatContext_t3048477934::get_offset_of_previous_5(),
	RepeatContext_t3048477934::get_offset_of_count_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1253 = { sizeof (Mode_t2692243128)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1253[4] = 
{
	Mode_t2692243128::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1254 = { sizeof (Interval_t2949578957)+ sizeof (RuntimeObject), sizeof(Interval_t2949578957_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1254[3] = 
{
	Interval_t2949578957::get_offset_of_low_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t2949578957::get_offset_of_high_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t2949578957::get_offset_of_contiguous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1255 = { sizeof (IntervalCollection_t2203430629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1255[1] = 
{
	IntervalCollection_t2203430629::get_offset_of_intervals_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1256 = { sizeof (Enumerator_t2499363576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1256[2] = 
{
	Enumerator_t2499363576::get_offset_of_list_0(),
	Enumerator_t2499363576::get_offset_of_ptr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1257 = { sizeof (CostDelegate_t2266625194), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1258 = { sizeof (Parser_t60715050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1258[6] = 
{
	Parser_t60715050::get_offset_of_pattern_0(),
	Parser_t60715050::get_offset_of_ptr_1(),
	Parser_t60715050::get_offset_of_caps_2(),
	Parser_t60715050::get_offset_of_refs_3(),
	Parser_t60715050::get_offset_of_num_groups_4(),
	Parser_t60715050::get_offset_of_gap_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1259 = { sizeof (QuickSearch_t3740143353), -1, sizeof(QuickSearch_t3740143353_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1259[7] = 
{
	QuickSearch_t3740143353::get_offset_of_str_0(),
	QuickSearch_t3740143353::get_offset_of_len_1(),
	QuickSearch_t3740143353::get_offset_of_ignore_2(),
	QuickSearch_t3740143353::get_offset_of_reverse_3(),
	QuickSearch_t3740143353::get_offset_of_shift_4(),
	QuickSearch_t3740143353::get_offset_of_shiftExtended_5(),
	QuickSearch_t3740143353_StaticFields::get_offset_of_THRESHOLD_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1260 = { sizeof (ExpressionCollection_t3680068786), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1261 = { sizeof (Expression_t1581611722), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1262 = { sizeof (CompositeExpression_t1183293217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1262[1] = 
{
	CompositeExpression_t1183293217::get_offset_of_expressions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1263 = { sizeof (Group_t3547025775), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1264 = { sizeof (RegularExpression_t1620813245), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1264[1] = 
{
	RegularExpression_t1620813245::get_offset_of_group_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1265 = { sizeof (CapturingGroup_t138971363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1265[2] = 
{
	CapturingGroup_t138971363::get_offset_of_gid_1(),
	CapturingGroup_t138971363::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1266 = { sizeof (BalancingGroup_t4224748170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1266[1] = 
{
	BalancingGroup_t4224748170::get_offset_of_balance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1267 = { sizeof (NonBacktrackingGroup_t1164761523), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1268 = { sizeof (Repetition_t1962111128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1268[3] = 
{
	Repetition_t1962111128::get_offset_of_min_1(),
	Repetition_t1962111128::get_offset_of_max_2(),
	Repetition_t1962111128::get_offset_of_lazy_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1269 = { sizeof (Assertion_t3382005788), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1270 = { sizeof (CaptureAssertion_t2947362665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1270[3] = 
{
	CaptureAssertion_t2947362665::get_offset_of_alternate_1(),
	CaptureAssertion_t2947362665::get_offset_of_group_2(),
	CaptureAssertion_t2947362665::get_offset_of_literal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1271 = { sizeof (ExpressionAssertion_t2785699738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1271[2] = 
{
	ExpressionAssertion_t2785699738::get_offset_of_reverse_1(),
	ExpressionAssertion_t2785699738::get_offset_of_negate_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1272 = { sizeof (Alternation_t3864059847), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1273 = { sizeof (Literal_t2766384139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1273[2] = 
{
	Literal_t2766384139::get_offset_of_str_0(),
	Literal_t2766384139::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1274 = { sizeof (PositionAssertion_t382115506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1274[1] = 
{
	PositionAssertion_t382115506::get_offset_of_pos_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1275 = { sizeof (Reference_t2622548812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1275[2] = 
{
	Reference_t2622548812::get_offset_of_group_0(),
	Reference_t2622548812::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1276 = { sizeof (BackslashNumber_t3884605558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1276[2] = 
{
	BackslashNumber_t3884605558::get_offset_of_literal_2(),
	BackslashNumber_t3884605558::get_offset_of_ecma_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1277 = { sizeof (CharacterClass_t2760279392), -1, sizeof(CharacterClass_t2760279392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1277[6] = 
{
	CharacterClass_t2760279392_StaticFields::get_offset_of_upper_case_characters_0(),
	CharacterClass_t2760279392::get_offset_of_negate_1(),
	CharacterClass_t2760279392::get_offset_of_ignore_2(),
	CharacterClass_t2760279392::get_offset_of_pos_cats_3(),
	CharacterClass_t2760279392::get_offset_of_neg_cats_4(),
	CharacterClass_t2760279392::get_offset_of_intervals_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1278 = { sizeof (AnchorInfo_t2763211468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1278[6] = 
{
	AnchorInfo_t2763211468::get_offset_of_expr_0(),
	AnchorInfo_t2763211468::get_offset_of_pos_1(),
	AnchorInfo_t2763211468::get_offset_of_offset_2(),
	AnchorInfo_t2763211468::get_offset_of_str_3(),
	AnchorInfo_t2763211468::get_offset_of_width_4(),
	AnchorInfo_t2763211468::get_offset_of_ignore_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1279 = { sizeof (DefaultUriParser_t1129965615), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1280 = { sizeof (GenericUriParser_t1908562787), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1281 = { sizeof (Uri_t1447099052), -1, sizeof(Uri_t1447099052_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1281[36] = 
{
	Uri_t1447099052::get_offset_of_isUnixFilePath_0(),
	Uri_t1447099052::get_offset_of_source_1(),
	Uri_t1447099052::get_offset_of_scheme_2(),
	Uri_t1447099052::get_offset_of_host_3(),
	Uri_t1447099052::get_offset_of_port_4(),
	Uri_t1447099052::get_offset_of_path_5(),
	Uri_t1447099052::get_offset_of_query_6(),
	Uri_t1447099052::get_offset_of_fragment_7(),
	Uri_t1447099052::get_offset_of_userinfo_8(),
	Uri_t1447099052::get_offset_of_isUnc_9(),
	Uri_t1447099052::get_offset_of_isOpaquePart_10(),
	Uri_t1447099052::get_offset_of_isAbsoluteUri_11(),
	Uri_t1447099052::get_offset_of_userEscaped_12(),
	Uri_t1447099052::get_offset_of_cachedAbsoluteUri_13(),
	Uri_t1447099052::get_offset_of_cachedToString_14(),
	Uri_t1447099052::get_offset_of_cachedLocalPath_15(),
	Uri_t1447099052::get_offset_of_cachedHashCode_16(),
	Uri_t1447099052_StaticFields::get_offset_of_hexUpperChars_17(),
	Uri_t1447099052_StaticFields::get_offset_of_SchemeDelimiter_18(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeFile_19(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeFtp_20(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeGopher_21(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeHttp_22(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeHttps_23(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeMailto_24(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeNews_25(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeNntp_26(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeNetPipe_27(),
	Uri_t1447099052_StaticFields::get_offset_of_UriSchemeNetTcp_28(),
	Uri_t1447099052_StaticFields::get_offset_of_schemes_29(),
	Uri_t1447099052::get_offset_of_parser_30(),
	Uri_t1447099052_StaticFields::get_offset_of_U3CU3Ef__switchU24map12_31(),
	Uri_t1447099052_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_32(),
	Uri_t1447099052_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_33(),
	Uri_t1447099052_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_34(),
	Uri_t1447099052_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1282 = { sizeof (UriScheme_t3089573193)+ sizeof (RuntimeObject), sizeof(UriScheme_t3089573193_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1282[3] = 
{
	UriScheme_t3089573193::get_offset_of_scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t3089573193::get_offset_of_delimiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t3089573193::get_offset_of_defaultPort_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1283 = { sizeof (UriBuilder_t1933159448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1283[10] = 
{
	UriBuilder_t1933159448::get_offset_of_scheme_0(),
	UriBuilder_t1933159448::get_offset_of_host_1(),
	UriBuilder_t1933159448::get_offset_of_port_2(),
	UriBuilder_t1933159448::get_offset_of_path_3(),
	UriBuilder_t1933159448::get_offset_of_query_4(),
	UriBuilder_t1933159448::get_offset_of_fragment_5(),
	UriBuilder_t1933159448::get_offset_of_username_6(),
	UriBuilder_t1933159448::get_offset_of_password_7(),
	UriBuilder_t1933159448::get_offset_of_uri_8(),
	UriBuilder_t1933159448::get_offset_of_modified_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1284 = { sizeof (UriFormatException_t2511906267), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1285 = { sizeof (UriHostNameType_t2189074131)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1285[6] = 
{
	UriHostNameType_t2189074131::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1286 = { sizeof (UriKind_t2651602253)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1286[4] = 
{
	UriKind_t2651602253::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1287 = { sizeof (UriParser_t4174279112), -1, sizeof(UriParser_t4174279112_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1287[6] = 
{
	UriParser_t4174279112_StaticFields::get_offset_of_lock_object_0(),
	UriParser_t4174279112_StaticFields::get_offset_of_table_1(),
	UriParser_t4174279112::get_offset_of_scheme_name_2(),
	UriParser_t4174279112::get_offset_of_default_port_3(),
	UriParser_t4174279112_StaticFields::get_offset_of_uri_regex_4(),
	UriParser_t4174279112_StaticFields::get_offset_of_auth_regex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1288 = { sizeof (UriPartial_t430649659)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1288[5] = 
{
	UriPartial_t430649659::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1289 = { sizeof (UriTypeConverter_t300503799), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1290 = { sizeof (CollectionChangeEventHandler_t3349143350), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1291 = { sizeof (PropertyChangedEventHandler_t1714378753), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1292 = { sizeof (LocalCertificateSelectionCallback_t4020417944), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1293 = { sizeof (RemoteCertificateValidationCallback_t2177389735), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1294 = { sizeof (BindIPEndPoint_t2329896518), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1295 = { sizeof (HttpContinueDelegate_t3900675817), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1296 = { sizeof (U3CPrivateImplementationDetailsU3E_t2311847829), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1296[4] = 
{
	U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields::get_offset_of_U24U24fieldU2D1_0(),
	U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields::get_offset_of_U24U24fieldU2D2_1(),
	U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields::get_offset_of_U24U24fieldU2D3_2(),
	U3CPrivateImplementationDetailsU3E_t2311847829_StaticFields::get_offset_of_U24U24fieldU2D4_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1297 = { sizeof (U24ArrayTypeU2416_t2396488415)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t2396488415 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1298 = { sizeof (U24ArrayTypeU24128_t3280665359)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t3280665359 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1299 = { sizeof (U24ArrayTypeU2412_t404068635)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t404068635 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
