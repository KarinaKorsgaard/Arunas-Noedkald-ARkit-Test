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

// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Platform.Cache.MemoryCache/CacheItem>
struct Dictionary_2_t2274540510;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Platform.Cache.MemoryCache/CacheItem>,System.Int64>
struct Func_2_t3603438584;
// System.Collections.IEnumerable
struct IEnumerable_t2811011488;
// System.Type
struct Type_t;
// SQLite4Unity3d.SQLiteConnection
struct SQLiteConnection_t363421307;
// SQLite4Unity3d.TableMapping/Column
struct Column_t4064576960;
// System.String
struct String_t;
// Mapbox.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3964752995;
// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct TEdge_t941134437;
// SQLite4Unity3d.TableMapping/Column[]
struct ColumnU5BU5D_t985787201;
// SQLite4Unity3d.PreparedSqlLiteInsertCommand
struct PreparedSqlLiteInsertCommand_t2868954573;
// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean>
struct Func_2_t37987631;
// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String>
struct Func_2_t2738487625;
// System.Action`1<Mapbox.Platform.Response>
struct Action_1_t90952371;
// Mapbox.Platform.FileSource
struct FileSource_t3240410936;
// Mapbox.VectorTile.VectorTileFeature
struct VectorTileFeature_t877747989;
// System.Byte[]
struct ByteU5BU5D_t2085045523;
// System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>>
struct Func_2_t3344775808;
// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String>
struct Func_2_t834845416;
// System.IntPtr[]
struct IntPtrU5BU5D_t3720721507;
// System.Collections.IDictionary
struct IDictionary_t1534903287;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>>
struct Func_2_t447185155;
// System.Func`2<<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>,<>__AnonType1`2<<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>,System.String>>
struct Func_2_t2603892896;
// System.Func`2<<>__AnonType1`2<<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>,System.String>,System.String>
struct Func_2_t2444500192;
// System.Void
struct Void_t84408536;
// System.Char[]
struct CharU5BU5D_t2602859263;
// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn>
struct List_1_t3958191823;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute>
struct IEnumerable_1_t3164048389;
// System.Collections.Generic.Dictionary`2<System.String,SQLite4Unity3d.TableMapping>
struct Dictionary_2_t4103039106;
// System.Diagnostics.Stopwatch
struct Stopwatch_t1957889703;
// System.Random
struct Random_t1272380693;
// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Int32>
struct Func_2_t3852355442;
// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.String>
struct Func_2_t2030552290;
// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding>
struct List_1_t3328439054;
// System.String[]
struct StringU5BU5D_t2565337470;
// System.Int32[]
struct Int32U5BU5D_t4243112622;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint>
struct List_1_t3476533892;
// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode>
struct List_1_t223094752;
// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.TableMapping/Column>
struct IEnumerable_1_t3047700566;
// System.Collections.Generic.Dictionary`2<Mapbox.Platform.IAsyncRequest,System.Int32>
struct Dictionary_2_t4130429761;
// Mapbox.Platform.IAsyncRequest
struct IAsyncRequest_t3491062776;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t275767896;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3603125510;
// System.Func`2<System.Exception,System.String>
struct Func_2_t3844551957;




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
#ifndef MEMORYCACHE_T943603236_H
#define MEMORYCACHE_T943603236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Cache.MemoryCache
struct  MemoryCache_t943603236  : public RuntimeObject
{
public:
	// System.UInt32 Mapbox.Platform.Cache.MemoryCache::_maxCacheSize
	uint32_t ____maxCacheSize_0;
	// System.Object Mapbox.Platform.Cache.MemoryCache::_lock
	RuntimeObject * ____lock_1;
	// System.Collections.Generic.Dictionary`2<System.String,Mapbox.Platform.Cache.MemoryCache/CacheItem> Mapbox.Platform.Cache.MemoryCache::_cachedResponses
	Dictionary_2_t2274540510 * ____cachedResponses_2;

public:
	inline static int32_t get_offset_of__maxCacheSize_0() { return static_cast<int32_t>(offsetof(MemoryCache_t943603236, ____maxCacheSize_0)); }
	inline uint32_t get__maxCacheSize_0() const { return ____maxCacheSize_0; }
	inline uint32_t* get_address_of__maxCacheSize_0() { return &____maxCacheSize_0; }
	inline void set__maxCacheSize_0(uint32_t value)
	{
		____maxCacheSize_0 = value;
	}

	inline static int32_t get_offset_of__lock_1() { return static_cast<int32_t>(offsetof(MemoryCache_t943603236, ____lock_1)); }
	inline RuntimeObject * get__lock_1() const { return ____lock_1; }
	inline RuntimeObject ** get_address_of__lock_1() { return &____lock_1; }
	inline void set__lock_1(RuntimeObject * value)
	{
		____lock_1 = value;
		Il2CppCodeGenWriteBarrier((&____lock_1), value);
	}

	inline static int32_t get_offset_of__cachedResponses_2() { return static_cast<int32_t>(offsetof(MemoryCache_t943603236, ____cachedResponses_2)); }
	inline Dictionary_2_t2274540510 * get__cachedResponses_2() const { return ____cachedResponses_2; }
	inline Dictionary_2_t2274540510 ** get_address_of__cachedResponses_2() { return &____cachedResponses_2; }
	inline void set__cachedResponses_2(Dictionary_2_t2274540510 * value)
	{
		____cachedResponses_2 = value;
		Il2CppCodeGenWriteBarrier((&____cachedResponses_2), value);
	}
};

struct MemoryCache_t943603236_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Mapbox.Platform.Cache.MemoryCache/CacheItem>,System.Int64> Mapbox.Platform.Cache.MemoryCache::<>f__am$cache0
	Func_2_t3603438584 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(MemoryCache_t943603236_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Func_2_t3603438584 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Func_2_t3603438584 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Func_2_t3603438584 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYCACHE_T943603236_H
#ifndef U3CINSERTALLU3EC__ANONSTOREY2_T2355627383_H
#define U3CINSERTALLU3EC__ANONSTOREY2_T2355627383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey2
struct  U3CInsertAllU3Ec__AnonStorey2_t2355627383  : public RuntimeObject
{
public:
	// System.Collections.IEnumerable SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey2::objects
	RuntimeObject* ___objects_0;
	// System.Type SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey2::objType
	Type_t * ___objType_1;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey2::c
	int32_t ___c_2;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey2::$this
	SQLiteConnection_t363421307 * ___U24this_3;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey2_t2355627383, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___objects_0), value);
	}

	inline static int32_t get_offset_of_objType_1() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey2_t2355627383, ___objType_1)); }
	inline Type_t * get_objType_1() const { return ___objType_1; }
	inline Type_t ** get_address_of_objType_1() { return &___objType_1; }
	inline void set_objType_1(Type_t * value)
	{
		___objType_1 = value;
		Il2CppCodeGenWriteBarrier((&___objType_1), value);
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey2_t2355627383, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey2_t2355627383, ___U24this_3)); }
	inline SQLiteConnection_t363421307 * get_U24this_3() const { return ___U24this_3; }
	inline SQLiteConnection_t363421307 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(SQLiteConnection_t363421307 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINSERTALLU3EC__ANONSTOREY2_T2355627383_H
#ifndef U3CUPDATEU3EC__ANONSTOREY3_T657726530_H
#define U3CUPDATEU3EC__ANONSTOREY3_T657726530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection/<Update>c__AnonStorey3
struct  U3CUpdateU3Ec__AnonStorey3_t657726530  : public RuntimeObject
{
public:
	// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.SQLiteConnection/<Update>c__AnonStorey3::pk
	Column_t4064576960 * ___pk_0;
	// System.Object SQLite4Unity3d.SQLiteConnection/<Update>c__AnonStorey3::obj
	RuntimeObject * ___obj_1;

public:
	inline static int32_t get_offset_of_pk_0() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ec__AnonStorey3_t657726530, ___pk_0)); }
	inline Column_t4064576960 * get_pk_0() const { return ___pk_0; }
	inline Column_t4064576960 ** get_address_of_pk_0() { return &___pk_0; }
	inline void set_pk_0(Column_t4064576960 * value)
	{
		___pk_0 = value;
		Il2CppCodeGenWriteBarrier((&___pk_0), value);
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ec__AnonStorey3_t657726530, ___obj_1)); }
	inline RuntimeObject * get_obj_1() const { return ___obj_1; }
	inline RuntimeObject ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(RuntimeObject * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier((&___obj_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPDATEU3EC__ANONSTOREY3_T657726530_H
#ifndef U3CUPDATEALLU3EC__ANONSTOREY4_T2636548924_H
#define U3CUPDATEALLU3EC__ANONSTOREY4_T2636548924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection/<UpdateAll>c__AnonStorey4
struct  U3CUpdateAllU3Ec__AnonStorey4_t2636548924  : public RuntimeObject
{
public:
	// System.Collections.IEnumerable SQLite4Unity3d.SQLiteConnection/<UpdateAll>c__AnonStorey4::objects
	RuntimeObject* ___objects_0;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/<UpdateAll>c__AnonStorey4::c
	int32_t ___c_1;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteConnection/<UpdateAll>c__AnonStorey4::$this
	SQLiteConnection_t363421307 * ___U24this_2;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(U3CUpdateAllU3Ec__AnonStorey4_t2636548924, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___objects_0), value);
	}

	inline static int32_t get_offset_of_c_1() { return static_cast<int32_t>(offsetof(U3CUpdateAllU3Ec__AnonStorey4_t2636548924, ___c_1)); }
	inline int32_t get_c_1() const { return ___c_1; }
	inline int32_t* get_address_of_c_1() { return &___c_1; }
	inline void set_c_1(int32_t value)
	{
		___c_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CUpdateAllU3Ec__AnonStorey4_t2636548924, ___U24this_2)); }
	inline SQLiteConnection_t363421307 * get_U24this_2() const { return ___U24this_2; }
	inline SQLiteConnection_t363421307 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SQLiteConnection_t363421307 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPDATEALLU3EC__ANONSTOREY4_T2636548924_H
#ifndef SQLITECONNECTIONSTRING_T1317844915_H
#define SQLITECONNECTIONSTRING_T1317844915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnectionString
struct  SQLiteConnectionString_t1317844915  : public RuntimeObject
{
public:
	// System.String SQLite4Unity3d.SQLiteConnectionString::<ConnectionString>k__BackingField
	String_t* ___U3CConnectionStringU3Ek__BackingField_0;
	// System.String SQLite4Unity3d.SQLiteConnectionString::<DatabasePath>k__BackingField
	String_t* ___U3CDatabasePathU3Ek__BackingField_1;
	// System.Boolean SQLite4Unity3d.SQLiteConnectionString::<StoreDateTimeAsTicks>k__BackingField
	bool ___U3CStoreDateTimeAsTicksU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CConnectionStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SQLiteConnectionString_t1317844915, ___U3CConnectionStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CConnectionStringU3Ek__BackingField_0() const { return ___U3CConnectionStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CConnectionStringU3Ek__BackingField_0() { return &___U3CConnectionStringU3Ek__BackingField_0; }
	inline void set_U3CConnectionStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CConnectionStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConnectionStringU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDatabasePathU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SQLiteConnectionString_t1317844915, ___U3CDatabasePathU3Ek__BackingField_1)); }
	inline String_t* get_U3CDatabasePathU3Ek__BackingField_1() const { return ___U3CDatabasePathU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDatabasePathU3Ek__BackingField_1() { return &___U3CDatabasePathU3Ek__BackingField_1; }
	inline void set_U3CDatabasePathU3Ek__BackingField_1(String_t* value)
	{
		___U3CDatabasePathU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDatabasePathU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SQLiteConnectionString_t1317844915, ___U3CStoreDateTimeAsTicksU3Ek__BackingField_2)); }
	inline bool get_U3CStoreDateTimeAsTicksU3Ek__BackingField_2() const { return ___U3CStoreDateTimeAsTicksU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_2() { return &___U3CStoreDateTimeAsTicksU3Ek__BackingField_2; }
	inline void set_U3CStoreDateTimeAsTicksU3Ek__BackingField_2(bool value)
	{
		___U3CStoreDateTimeAsTicksU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECONNECTIONSTRING_T1317844915_H
#ifndef POLYLINEUTILS_T1831646503_H
#define POLYLINEUTILS_T1831646503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.PolylineUtils
struct  PolylineUtils_t1831646503  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYLINEUTILS_T1831646503_H
#ifndef JSONCONVERTERS_T1733012709_H
#define JSONCONVERTERS_T1733012709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.JsonConverters.JsonConverters
struct  JsonConverters_t1733012709  : public RuntimeObject
{
public:

public:
};

struct JsonConverters_t1733012709_StaticFields
{
public:
	// Mapbox.Json.JsonConverter[] Mapbox.Utils.JsonConverters.JsonConverters::converters
	JsonConverterU5BU5D_t3964752995* ___converters_0;

public:
	inline static int32_t get_offset_of_converters_0() { return static_cast<int32_t>(offsetof(JsonConverters_t1733012709_StaticFields, ___converters_0)); }
	inline JsonConverterU5BU5D_t3964752995* get_converters_0() const { return ___converters_0; }
	inline JsonConverterU5BU5D_t3964752995** get_address_of_converters_0() { return &___converters_0; }
	inline void set_converters_0(JsonConverterU5BU5D_t3964752995* value)
	{
		___converters_0 = value;
		Il2CppCodeGenWriteBarrier((&___converters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONCONVERTERS_T1733012709_H
#ifndef MYINTERSECTNODESORT_T3910898002_H
#define MYINTERSECTNODESORT_T3910898002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/MyIntersectNodeSort
struct  MyIntersectNodeSort_t3910898002  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYINTERSECTNODESORT_T3910898002_H
#ifndef CONSTANTS_T2877589745_H
#define CONSTANTS_T2877589745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.Constants
struct  Constants_t2877589745  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTS_T2877589745_H
#ifndef COMPRESSION_T896673825_H
#define COMPRESSION_T896673825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.Compression
struct  Compression_t896673825  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSION_T896673825_H
#ifndef JSONCONVERTER_T1284165062_H
#define JSONCONVERTER_T1284165062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.JsonConverter
struct  JsonConverter_t1284165062  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONCONVERTER_T1284165062_H
#ifndef LOCALMINIMA_T1650670650_H
#define LOCALMINIMA_T1650670650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima
struct  LocalMinima_t1650670650  : public RuntimeObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::Y
	int64_t ___Y_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::LeftBound
	TEdge_t941134437 * ___LeftBound_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::RightBound
	TEdge_t941134437 * ___RightBound_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/LocalMinima::Next
	LocalMinima_t1650670650 * ___Next_3;

public:
	inline static int32_t get_offset_of_Y_0() { return static_cast<int32_t>(offsetof(LocalMinima_t1650670650, ___Y_0)); }
	inline int64_t get_Y_0() const { return ___Y_0; }
	inline int64_t* get_address_of_Y_0() { return &___Y_0; }
	inline void set_Y_0(int64_t value)
	{
		___Y_0 = value;
	}

	inline static int32_t get_offset_of_LeftBound_1() { return static_cast<int32_t>(offsetof(LocalMinima_t1650670650, ___LeftBound_1)); }
	inline TEdge_t941134437 * get_LeftBound_1() const { return ___LeftBound_1; }
	inline TEdge_t941134437 ** get_address_of_LeftBound_1() { return &___LeftBound_1; }
	inline void set_LeftBound_1(TEdge_t941134437 * value)
	{
		___LeftBound_1 = value;
		Il2CppCodeGenWriteBarrier((&___LeftBound_1), value);
	}

	inline static int32_t get_offset_of_RightBound_2() { return static_cast<int32_t>(offsetof(LocalMinima_t1650670650, ___RightBound_2)); }
	inline TEdge_t941134437 * get_RightBound_2() const { return ___RightBound_2; }
	inline TEdge_t941134437 ** get_address_of_RightBound_2() { return &___RightBound_2; }
	inline void set_RightBound_2(TEdge_t941134437 * value)
	{
		___RightBound_2 = value;
		Il2CppCodeGenWriteBarrier((&___RightBound_2), value);
	}

	inline static int32_t get_offset_of_Next_3() { return static_cast<int32_t>(offsetof(LocalMinima_t1650670650, ___Next_3)); }
	inline LocalMinima_t1650670650 * get_Next_3() const { return ___Next_3; }
	inline LocalMinima_t1650670650 ** get_address_of_Next_3() { return &___Next_3; }
	inline void set_Next_3(LocalMinima_t1650670650 * value)
	{
		___Next_3 = value;
		Il2CppCodeGenWriteBarrier((&___Next_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALMINIMA_T1650670650_H
#ifndef SCANBEAM_T2078220396_H
#define SCANBEAM_T2078220396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam
struct  Scanbeam_t2078220396  : public RuntimeObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam::Y
	int64_t ___Y_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Scanbeam::Next
	Scanbeam_t2078220396 * ___Next_1;

public:
	inline static int32_t get_offset_of_Y_0() { return static_cast<int32_t>(offsetof(Scanbeam_t2078220396, ___Y_0)); }
	inline int64_t get_Y_0() const { return ___Y_0; }
	inline int64_t* get_address_of_Y_0() { return &___Y_0; }
	inline void set_Y_0(int64_t value)
	{
		___Y_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Scanbeam_t2078220396, ___Next_1)); }
	inline Scanbeam_t2078220396 * get_Next_1() const { return ___Next_1; }
	inline Scanbeam_t2078220396 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(Scanbeam_t2078220396 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier((&___Next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCANBEAM_T2078220396_H
#ifndef MAXIMA_T4289495226_H
#define MAXIMA_T4289495226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima
struct  Maxima_t4289495226  : public RuntimeObject
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::X
	int64_t ___X_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::Next
	Maxima_t4289495226 * ___Next_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Maxima::Prev
	Maxima_t4289495226 * ___Prev_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Maxima_t4289495226, ___X_0)); }
	inline int64_t get_X_0() const { return ___X_0; }
	inline int64_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int64_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Maxima_t4289495226, ___Next_1)); }
	inline Maxima_t4289495226 * get_Next_1() const { return ___Next_1; }
	inline Maxima_t4289495226 ** get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(Maxima_t4289495226 * value)
	{
		___Next_1 = value;
		Il2CppCodeGenWriteBarrier((&___Next_1), value);
	}

	inline static int32_t get_offset_of_Prev_2() { return static_cast<int32_t>(offsetof(Maxima_t4289495226, ___Prev_2)); }
	inline Maxima_t4289495226 * get_Prev_2() const { return ___Prev_2; }
	inline Maxima_t4289495226 ** get_address_of_Prev_2() { return &___Prev_2; }
	inline void set_Prev_2(Maxima_t4289495226 * value)
	{
		___Prev_2 = value;
		Il2CppCodeGenWriteBarrier((&___Prev_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAXIMA_T4289495226_H
#ifndef TABLEMAPPING_T257246211_H
#define TABLEMAPPING_T257246211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.TableMapping
struct  TableMapping_t257246211  : public RuntimeObject
{
public:
	// System.Type SQLite4Unity3d.TableMapping::<MappedType>k__BackingField
	Type_t * ___U3CMappedTypeU3Ek__BackingField_0;
	// System.String SQLite4Unity3d.TableMapping::<TableName>k__BackingField
	String_t* ___U3CTableNameU3Ek__BackingField_1;
	// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::<Columns>k__BackingField
	ColumnU5BU5D_t985787201* ___U3CColumnsU3Ek__BackingField_2;
	// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.TableMapping::<PK>k__BackingField
	Column_t4064576960 * ___U3CPKU3Ek__BackingField_3;
	// System.String SQLite4Unity3d.TableMapping::<GetByPrimaryKeySql>k__BackingField
	String_t* ___U3CGetByPrimaryKeySqlU3Ek__BackingField_4;
	// SQLite4Unity3d.TableMapping/Column SQLite4Unity3d.TableMapping::_autoPk
	Column_t4064576960 * ____autoPk_5;
	// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::_insertColumns
	ColumnU5BU5D_t985787201* ____insertColumns_6;
	// SQLite4Unity3d.TableMapping/Column[] SQLite4Unity3d.TableMapping::_insertOrReplaceColumns
	ColumnU5BU5D_t985787201* ____insertOrReplaceColumns_7;
	// System.Boolean SQLite4Unity3d.TableMapping::<HasAutoIncPK>k__BackingField
	bool ___U3CHasAutoIncPKU3Ek__BackingField_8;
	// SQLite4Unity3d.PreparedSqlLiteInsertCommand SQLite4Unity3d.TableMapping::_insertCommand
	PreparedSqlLiteInsertCommand_t2868954573 * ____insertCommand_9;
	// System.String SQLite4Unity3d.TableMapping::_insertCommandExtra
	String_t* ____insertCommandExtra_10;

public:
	inline static int32_t get_offset_of_U3CMappedTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ___U3CMappedTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CMappedTypeU3Ek__BackingField_0() const { return ___U3CMappedTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CMappedTypeU3Ek__BackingField_0() { return &___U3CMappedTypeU3Ek__BackingField_0; }
	inline void set_U3CMappedTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CMappedTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMappedTypeU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTableNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ___U3CTableNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CTableNameU3Ek__BackingField_1() const { return ___U3CTableNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTableNameU3Ek__BackingField_1() { return &___U3CTableNameU3Ek__BackingField_1; }
	inline void set_U3CTableNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CTableNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTableNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CColumnsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ___U3CColumnsU3Ek__BackingField_2)); }
	inline ColumnU5BU5D_t985787201* get_U3CColumnsU3Ek__BackingField_2() const { return ___U3CColumnsU3Ek__BackingField_2; }
	inline ColumnU5BU5D_t985787201** get_address_of_U3CColumnsU3Ek__BackingField_2() { return &___U3CColumnsU3Ek__BackingField_2; }
	inline void set_U3CColumnsU3Ek__BackingField_2(ColumnU5BU5D_t985787201* value)
	{
		___U3CColumnsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CColumnsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CPKU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ___U3CPKU3Ek__BackingField_3)); }
	inline Column_t4064576960 * get_U3CPKU3Ek__BackingField_3() const { return ___U3CPKU3Ek__BackingField_3; }
	inline Column_t4064576960 ** get_address_of_U3CPKU3Ek__BackingField_3() { return &___U3CPKU3Ek__BackingField_3; }
	inline void set_U3CPKU3Ek__BackingField_3(Column_t4064576960 * value)
	{
		___U3CPKU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPKU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CGetByPrimaryKeySqlU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ___U3CGetByPrimaryKeySqlU3Ek__BackingField_4)); }
	inline String_t* get_U3CGetByPrimaryKeySqlU3Ek__BackingField_4() const { return ___U3CGetByPrimaryKeySqlU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CGetByPrimaryKeySqlU3Ek__BackingField_4() { return &___U3CGetByPrimaryKeySqlU3Ek__BackingField_4; }
	inline void set_U3CGetByPrimaryKeySqlU3Ek__BackingField_4(String_t* value)
	{
		___U3CGetByPrimaryKeySqlU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGetByPrimaryKeySqlU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of__autoPk_5() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ____autoPk_5)); }
	inline Column_t4064576960 * get__autoPk_5() const { return ____autoPk_5; }
	inline Column_t4064576960 ** get_address_of__autoPk_5() { return &____autoPk_5; }
	inline void set__autoPk_5(Column_t4064576960 * value)
	{
		____autoPk_5 = value;
		Il2CppCodeGenWriteBarrier((&____autoPk_5), value);
	}

	inline static int32_t get_offset_of__insertColumns_6() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ____insertColumns_6)); }
	inline ColumnU5BU5D_t985787201* get__insertColumns_6() const { return ____insertColumns_6; }
	inline ColumnU5BU5D_t985787201** get_address_of__insertColumns_6() { return &____insertColumns_6; }
	inline void set__insertColumns_6(ColumnU5BU5D_t985787201* value)
	{
		____insertColumns_6 = value;
		Il2CppCodeGenWriteBarrier((&____insertColumns_6), value);
	}

	inline static int32_t get_offset_of__insertOrReplaceColumns_7() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ____insertOrReplaceColumns_7)); }
	inline ColumnU5BU5D_t985787201* get__insertOrReplaceColumns_7() const { return ____insertOrReplaceColumns_7; }
	inline ColumnU5BU5D_t985787201** get_address_of__insertOrReplaceColumns_7() { return &____insertOrReplaceColumns_7; }
	inline void set__insertOrReplaceColumns_7(ColumnU5BU5D_t985787201* value)
	{
		____insertOrReplaceColumns_7 = value;
		Il2CppCodeGenWriteBarrier((&____insertOrReplaceColumns_7), value);
	}

	inline static int32_t get_offset_of_U3CHasAutoIncPKU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ___U3CHasAutoIncPKU3Ek__BackingField_8)); }
	inline bool get_U3CHasAutoIncPKU3Ek__BackingField_8() const { return ___U3CHasAutoIncPKU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CHasAutoIncPKU3Ek__BackingField_8() { return &___U3CHasAutoIncPKU3Ek__BackingField_8; }
	inline void set_U3CHasAutoIncPKU3Ek__BackingField_8(bool value)
	{
		___U3CHasAutoIncPKU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of__insertCommand_9() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ____insertCommand_9)); }
	inline PreparedSqlLiteInsertCommand_t2868954573 * get__insertCommand_9() const { return ____insertCommand_9; }
	inline PreparedSqlLiteInsertCommand_t2868954573 ** get_address_of__insertCommand_9() { return &____insertCommand_9; }
	inline void set__insertCommand_9(PreparedSqlLiteInsertCommand_t2868954573 * value)
	{
		____insertCommand_9 = value;
		Il2CppCodeGenWriteBarrier((&____insertCommand_9), value);
	}

	inline static int32_t get_offset_of__insertCommandExtra_10() { return static_cast<int32_t>(offsetof(TableMapping_t257246211, ____insertCommandExtra_10)); }
	inline String_t* get__insertCommandExtra_10() const { return ____insertCommandExtra_10; }
	inline String_t** get_address_of__insertCommandExtra_10() { return &____insertCommandExtra_10; }
	inline void set__insertCommandExtra_10(String_t* value)
	{
		____insertCommandExtra_10 = value;
		Il2CppCodeGenWriteBarrier((&____insertCommandExtra_10), value);
	}
};

struct TableMapping_t257246211_StaticFields
{
public:
	// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.Boolean> SQLite4Unity3d.TableMapping::<>f__am$cache0
	Func_2_t37987631 * ___U3CU3Ef__amU24cache0_11;
	// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String> SQLite4Unity3d.TableMapping::<>f__am$cache1
	Func_2_t2738487625 * ___U3CU3Ef__amU24cache1_12;
	// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String> SQLite4Unity3d.TableMapping::<>f__am$cache2
	Func_2_t2738487625 * ___U3CU3Ef__amU24cache2_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(TableMapping_t257246211_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t37987631 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t37987631 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t37987631 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(TableMapping_t257246211_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_2_t2738487625 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_2_t2738487625 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_2_t2738487625 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(TableMapping_t257246211_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Func_2_t2738487625 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Func_2_t2738487625 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Func_2_t2738487625 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEMAPPING_T257246211_H
#ifndef SQLITE3_T695450772_H
#define SQLITE3_T695450772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLite3
struct  SQLite3_t695450772  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITE3_T695450772_H
#ifndef U3CFINDCOLUMNWITHPROPERTYNAMEU3EC__ANONSTOREY0_T1854264506_H
#define U3CFINDCOLUMNWITHPROPERTYNAMEU3EC__ANONSTOREY0_T1854264506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.TableMapping/<FindColumnWithPropertyName>c__AnonStorey0
struct  U3CFindColumnWithPropertyNameU3Ec__AnonStorey0_t1854264506  : public RuntimeObject
{
public:
	// System.String SQLite4Unity3d.TableMapping/<FindColumnWithPropertyName>c__AnonStorey0::propertyName
	String_t* ___propertyName_0;

public:
	inline static int32_t get_offset_of_propertyName_0() { return static_cast<int32_t>(offsetof(U3CFindColumnWithPropertyNameU3Ec__AnonStorey0_t1854264506, ___propertyName_0)); }
	inline String_t* get_propertyName_0() const { return ___propertyName_0; }
	inline String_t** get_address_of_propertyName_0() { return &___propertyName_0; }
	inline void set_propertyName_0(String_t* value)
	{
		___propertyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFINDCOLUMNWITHPROPERTYNAMEU3EC__ANONSTOREY0_T1854264506_H
#ifndef U3CFINDCOLUMNU3EC__ANONSTOREY1_T347023015_H
#define U3CFINDCOLUMNU3EC__ANONSTOREY1_T347023015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.TableMapping/<FindColumn>c__AnonStorey1
struct  U3CFindColumnU3Ec__AnonStorey1_t347023015  : public RuntimeObject
{
public:
	// System.String SQLite4Unity3d.TableMapping/<FindColumn>c__AnonStorey1::columnName
	String_t* ___columnName_0;

public:
	inline static int32_t get_offset_of_columnName_0() { return static_cast<int32_t>(offsetof(U3CFindColumnU3Ec__AnonStorey1_t347023015, ___columnName_0)); }
	inline String_t* get_columnName_0() const { return ___columnName_0; }
	inline String_t** get_address_of_columnName_0() { return &___columnName_0; }
	inline void set_columnName_0(String_t* value)
	{
		___columnName_0 = value;
		Il2CppCodeGenWriteBarrier((&___columnName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFINDCOLUMNU3EC__ANONSTOREY1_T347023015_H
#ifndef ORM_T911138220_H
#define ORM_T911138220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.Orm
struct  Orm_t911138220  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORM_T911138220_H
#ifndef ORDERING_T3667274934_H
#define ORDERING_T3667274934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.BaseTableQuery/Ordering
struct  Ordering_t3667274934  : public RuntimeObject
{
public:
	// System.String SQLite4Unity3d.BaseTableQuery/Ordering::<ColumnName>k__BackingField
	String_t* ___U3CColumnNameU3Ek__BackingField_0;
	// System.Boolean SQLite4Unity3d.BaseTableQuery/Ordering::<Ascending>k__BackingField
	bool ___U3CAscendingU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CColumnNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Ordering_t3667274934, ___U3CColumnNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CColumnNameU3Ek__BackingField_0() const { return ___U3CColumnNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CColumnNameU3Ek__BackingField_0() { return &___U3CColumnNameU3Ek__BackingField_0; }
	inline void set_U3CColumnNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CColumnNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CColumnNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CAscendingU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Ordering_t3667274934, ___U3CAscendingU3Ek__BackingField_1)); }
	inline bool get_U3CAscendingU3Ek__BackingField_1() const { return ___U3CAscendingU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CAscendingU3Ek__BackingField_1() { return &___U3CAscendingU3Ek__BackingField_1; }
	inline void set_U3CAscendingU3Ek__BackingField_1(bool value)
	{
		___U3CAscendingU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDERING_T3667274934_H
#ifndef BINDING_T3421539738_H
#define BINDING_T3421539738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteCommand/Binding
struct  Binding_t3421539738  : public RuntimeObject
{
public:
	// System.String SQLite4Unity3d.SQLiteCommand/Binding::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Object SQLite4Unity3d.SQLiteCommand/Binding::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_1;
	// System.Int32 SQLite4Unity3d.SQLiteCommand/Binding::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Binding_t3421539738, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Binding_t3421539738, ___U3CValueU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Binding_t3421539738, ___U3CIndexU3Ek__BackingField_2)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_2() const { return ___U3CIndexU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_2() { return &___U3CIndexU3Ek__BackingField_2; }
	inline void set_U3CIndexU3Ek__BackingField_2(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDING_T3421539738_H
#ifndef U3CINSERTALLU3EC__ANONSTOREY1_T2914658587_H
#define U3CINSERTALLU3EC__ANONSTOREY1_T2914658587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey1
struct  U3CInsertAllU3Ec__AnonStorey1_t2914658587  : public RuntimeObject
{
public:
	// System.Collections.IEnumerable SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey1::objects
	RuntimeObject* ___objects_0;
	// System.String SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey1::extra
	String_t* ___extra_1;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey1::c
	int32_t ___c_2;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey1::$this
	SQLiteConnection_t363421307 * ___U24this_3;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey1_t2914658587, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___objects_0), value);
	}

	inline static int32_t get_offset_of_extra_1() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey1_t2914658587, ___extra_1)); }
	inline String_t* get_extra_1() const { return ___extra_1; }
	inline String_t** get_address_of_extra_1() { return &___extra_1; }
	inline void set_extra_1(String_t* value)
	{
		___extra_1 = value;
		Il2CppCodeGenWriteBarrier((&___extra_1), value);
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey1_t2914658587, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey1_t2914658587, ___U24this_3)); }
	inline SQLiteConnection_t363421307 * get_U24this_3() const { return ___U24this_3; }
	inline SQLiteConnection_t363421307 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(SQLiteConnection_t363421307 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINSERTALLU3EC__ANONSTOREY1_T2914658587_H
#ifndef VALUETYPE_T692148246_H
#define VALUETYPE_T692148246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t692148246  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t692148246_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t692148246_marshaled_com
{
};
#endif // VALUETYPE_T692148246_H
#ifndef U3CINSERTALLU3EC__ANONSTOREY0_T2367456201_H
#define U3CINSERTALLU3EC__ANONSTOREY0_T2367456201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey0
struct  U3CInsertAllU3Ec__AnonStorey0_t2367456201  : public RuntimeObject
{
public:
	// System.Collections.IEnumerable SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey0::objects
	RuntimeObject* ___objects_0;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey0::c
	int32_t ___c_1;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteConnection/<InsertAll>c__AnonStorey0::$this
	SQLiteConnection_t363421307 * ___U24this_2;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey0_t2367456201, ___objects_0)); }
	inline RuntimeObject* get_objects_0() const { return ___objects_0; }
	inline RuntimeObject** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(RuntimeObject* value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier((&___objects_0), value);
	}

	inline static int32_t get_offset_of_c_1() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey0_t2367456201, ___c_1)); }
	inline int32_t get_c_1() const { return ___c_1; }
	inline int32_t* get_address_of_c_1() { return &___c_1; }
	inline void set_c_1(int32_t value)
	{
		___c_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CInsertAllU3Ec__AnonStorey0_t2367456201, ___U24this_2)); }
	inline SQLiteConnection_t363421307 * get_U24this_2() const { return ___U24this_2; }
	inline SQLiteConnection_t363421307 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SQLiteConnection_t363421307 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINSERTALLU3EC__ANONSTOREY0_T2367456201_H
#ifndef UNIXTIMESTAMPUTILS_T3849602352_H
#define UNIXTIMESTAMPUTILS_T3849602352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.UnixTimestampUtils
struct  UnixTimestampUtils_t3849602352  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXTIMESTAMPUTILS_T3849602352_H
#ifndef U3CCLEARU3EC__ANONSTOREY0_T1028582550_H
#define U3CCLEARU3EC__ANONSTOREY0_T1028582550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Cache.MemoryCache/<Clear>c__AnonStorey0
struct  U3CClearU3Ec__AnonStorey0_t1028582550  : public RuntimeObject
{
public:
	// System.String Mapbox.Platform.Cache.MemoryCache/<Clear>c__AnonStorey0::mapId
	String_t* ___mapId_0;

public:
	inline static int32_t get_offset_of_mapId_0() { return static_cast<int32_t>(offsetof(U3CClearU3Ec__AnonStorey0_t1028582550, ___mapId_0)); }
	inline String_t* get_mapId_0() const { return ___mapId_0; }
	inline String_t** get_address_of_mapId_0() { return &___mapId_0; }
	inline void set_mapId_0(String_t* value)
	{
		___mapId_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapId_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCLEARU3EC__ANONSTOREY0_T1028582550_H
#ifndef U3CPROXYRESPONSEU3EC__ANONSTOREY1_T2543089549_H
#define U3CPROXYRESPONSEU3EC__ANONSTOREY1_T2543089549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.FileSource/<proxyResponse>c__AnonStorey1
struct  U3CproxyResponseU3Ec__AnonStorey1_t2543089549  : public RuntimeObject
{
public:
	// System.Action`1<Mapbox.Platform.Response> Mapbox.Platform.FileSource/<proxyResponse>c__AnonStorey1::callback
	Action_1_t90952371 * ___callback_0;
	// Mapbox.Platform.FileSource Mapbox.Platform.FileSource/<proxyResponse>c__AnonStorey1::$this
	FileSource_t3240410936 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CproxyResponseU3Ec__AnonStorey1_t2543089549, ___callback_0)); }
	inline Action_1_t90952371 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t90952371 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t90952371 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CproxyResponseU3Ec__AnonStorey1_t2543089549, ___U24this_1)); }
	inline FileSource_t3240410936 * get_U24this_1() const { return ___U24this_1; }
	inline FileSource_t3240410936 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FileSource_t3240410936 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPROXYRESPONSEU3EC__ANONSTOREY1_T2543089549_H
#ifndef U3CWAITFORALLREQUESTSU3EC__ITERATOR0_T1808505784_H
#define U3CWAITFORALLREQUESTSU3EC__ITERATOR0_T1808505784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.FileSource/<WaitForAllRequests>c__Iterator0
struct  U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784  : public RuntimeObject
{
public:
	// System.Object Mapbox.Platform.FileSource/<WaitForAllRequests>c__Iterator0::$locvar0
	RuntimeObject * ___U24locvar0_0;
	// Mapbox.Platform.FileSource Mapbox.Platform.FileSource/<WaitForAllRequests>c__Iterator0::$this
	FileSource_t3240410936 * ___U24this_1;
	// System.Object Mapbox.Platform.FileSource/<WaitForAllRequests>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Mapbox.Platform.FileSource/<WaitForAllRequests>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Mapbox.Platform.FileSource/<WaitForAllRequests>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784, ___U24locvar0_0)); }
	inline RuntimeObject * get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject ** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject * value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784, ___U24this_1)); }
	inline FileSource_t3240410936 * get_U24this_1() const { return ___U24this_1; }
	inline FileSource_t3240410936 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FileSource_t3240410936 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORALLREQUESTSU3EC__ITERATOR0_T1808505784_H
#ifndef IASYNCREQUESTFACTORY_T2188610507_H
#define IASYNCREQUESTFACTORY_T2188610507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.IAsyncRequestFactory
struct  IAsyncRequestFactory_t2188610507  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IASYNCREQUESTFACTORY_T2188610507_H
#ifndef INTERNALCLIPPER_T340204332_H
#define INTERNALCLIPPER_T340204332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper
struct  InternalClipper_t340204332  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALCLIPPER_T340204332_H
#ifndef U3CGEOMETRYASWGS84U3EC__ANONSTOREY0_T2798544804_H
#define U3CGEOMETRYASWGS84U3EC__ANONSTOREY0_T2798544804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0
struct  U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804  : public RuntimeObject
{
public:
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0::zoom
	uint64_t ___zoom_0;
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0::tileColumn
	uint64_t ___tileColumn_1;
	// System.UInt64 Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0::tileRow
	uint64_t ___tileRow_2;
	// Mapbox.VectorTile.VectorTileFeature Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions/<GeometryAsWgs84>c__AnonStorey0::feature
	VectorTileFeature_t877747989 * ___feature_3;

public:
	inline static int32_t get_offset_of_zoom_0() { return static_cast<int32_t>(offsetof(U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804, ___zoom_0)); }
	inline uint64_t get_zoom_0() const { return ___zoom_0; }
	inline uint64_t* get_address_of_zoom_0() { return &___zoom_0; }
	inline void set_zoom_0(uint64_t value)
	{
		___zoom_0 = value;
	}

	inline static int32_t get_offset_of_tileColumn_1() { return static_cast<int32_t>(offsetof(U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804, ___tileColumn_1)); }
	inline uint64_t get_tileColumn_1() const { return ___tileColumn_1; }
	inline uint64_t* get_address_of_tileColumn_1() { return &___tileColumn_1; }
	inline void set_tileColumn_1(uint64_t value)
	{
		___tileColumn_1 = value;
	}

	inline static int32_t get_offset_of_tileRow_2() { return static_cast<int32_t>(offsetof(U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804, ___tileRow_2)); }
	inline uint64_t get_tileRow_2() const { return ___tileRow_2; }
	inline uint64_t* get_address_of_tileRow_2() { return &___tileRow_2; }
	inline void set_tileRow_2(uint64_t value)
	{
		___tileRow_2 = value;
	}

	inline static int32_t get_offset_of_feature_3() { return static_cast<int32_t>(offsetof(U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804, ___feature_3)); }
	inline VectorTileFeature_t877747989 * get_feature_3() const { return ___feature_3; }
	inline VectorTileFeature_t877747989 ** get_address_of_feature_3() { return &___feature_3; }
	inline void set_feature_3(VectorTileFeature_t877747989 * value)
	{
		___feature_3 = value;
		Il2CppCodeGenWriteBarrier((&___feature_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGEOMETRYASWGS84U3EC__ANONSTOREY0_T2798544804_H
#ifndef METADATA_T1501991648_H
#define METADATA_T1501991648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.MbTiles.metadata
struct  metadata_t1501991648  : public RuntimeObject
{
public:
	// System.String Mapbox.Platform.MbTiles.metadata::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String Mapbox.Platform.MbTiles.metadata::<value>k__BackingField
	String_t* ___U3CvalueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(metadata_t1501991648, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(metadata_t1501991648, ___U3CvalueU3Ek__BackingField_1)); }
	inline String_t* get_U3CvalueU3Ek__BackingField_1() const { return ___U3CvalueU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CvalueU3Ek__BackingField_1() { return &___U3CvalueU3Ek__BackingField_1; }
	inline void set_U3CvalueU3Ek__BackingField_1(String_t* value)
	{
		___U3CvalueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvalueU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATA_T1501991648_H
#ifndef COLUMNINFO_T768380545_H
#define COLUMNINFO_T768380545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection/ColumnInfo
struct  ColumnInfo_t768380545  : public RuntimeObject
{
public:
	// System.String SQLite4Unity3d.SQLiteConnection/ColumnInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 SQLite4Unity3d.SQLiteConnection/ColumnInfo::<notnull>k__BackingField
	int32_t ___U3CnotnullU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ColumnInfo_t768380545, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CnotnullU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ColumnInfo_t768380545, ___U3CnotnullU3Ek__BackingField_1)); }
	inline int32_t get_U3CnotnullU3Ek__BackingField_1() const { return ___U3CnotnullU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CnotnullU3Ek__BackingField_1() { return &___U3CnotnullU3Ek__BackingField_1; }
	inline void set_U3CnotnullU3Ek__BackingField_1(int32_t value)
	{
		___U3CnotnullU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNINFO_T768380545_H
#ifndef TILES_T3504664305_H
#define TILES_T3504664305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.MbTiles.tiles
struct  tiles_t3504664305  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.Platform.MbTiles.tiles::<zoom_level>k__BackingField
	int32_t ___U3Czoom_levelU3Ek__BackingField_0;
	// System.Int64 Mapbox.Platform.MbTiles.tiles::<tile_column>k__BackingField
	int64_t ___U3Ctile_columnU3Ek__BackingField_1;
	// System.Int64 Mapbox.Platform.MbTiles.tiles::<tile_row>k__BackingField
	int64_t ___U3Ctile_rowU3Ek__BackingField_2;
	// System.Byte[] Mapbox.Platform.MbTiles.tiles::<tile_data>k__BackingField
	ByteU5BU5D_t2085045523* ___U3Ctile_dataU3Ek__BackingField_3;
	// System.Int32 Mapbox.Platform.MbTiles.tiles::<timestamp>k__BackingField
	int32_t ___U3CtimestampU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3Czoom_levelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(tiles_t3504664305, ___U3Czoom_levelU3Ek__BackingField_0)); }
	inline int32_t get_U3Czoom_levelU3Ek__BackingField_0() const { return ___U3Czoom_levelU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3Czoom_levelU3Ek__BackingField_0() { return &___U3Czoom_levelU3Ek__BackingField_0; }
	inline void set_U3Czoom_levelU3Ek__BackingField_0(int32_t value)
	{
		___U3Czoom_levelU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3Ctile_columnU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(tiles_t3504664305, ___U3Ctile_columnU3Ek__BackingField_1)); }
	inline int64_t get_U3Ctile_columnU3Ek__BackingField_1() const { return ___U3Ctile_columnU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3Ctile_columnU3Ek__BackingField_1() { return &___U3Ctile_columnU3Ek__BackingField_1; }
	inline void set_U3Ctile_columnU3Ek__BackingField_1(int64_t value)
	{
		___U3Ctile_columnU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3Ctile_rowU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(tiles_t3504664305, ___U3Ctile_rowU3Ek__BackingField_2)); }
	inline int64_t get_U3Ctile_rowU3Ek__BackingField_2() const { return ___U3Ctile_rowU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3Ctile_rowU3Ek__BackingField_2() { return &___U3Ctile_rowU3Ek__BackingField_2; }
	inline void set_U3Ctile_rowU3Ek__BackingField_2(int64_t value)
	{
		___U3Ctile_rowU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3Ctile_dataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(tiles_t3504664305, ___U3Ctile_dataU3Ek__BackingField_3)); }
	inline ByteU5BU5D_t2085045523* get_U3Ctile_dataU3Ek__BackingField_3() const { return ___U3Ctile_dataU3Ek__BackingField_3; }
	inline ByteU5BU5D_t2085045523** get_address_of_U3Ctile_dataU3Ek__BackingField_3() { return &___U3Ctile_dataU3Ek__BackingField_3; }
	inline void set_U3Ctile_dataU3Ek__BackingField_3(ByteU5BU5D_t2085045523* value)
	{
		___U3Ctile_dataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3Ctile_dataU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(tiles_t3504664305, ___U3CtimestampU3Ek__BackingField_4)); }
	inline int32_t get_U3CtimestampU3Ek__BackingField_4() const { return ___U3CtimestampU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CtimestampU3Ek__BackingField_4() { return &___U3CtimestampU3Ek__BackingField_4; }
	inline void set_U3CtimestampU3Ek__BackingField_4(int32_t value)
	{
		___U3CtimestampU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILES_T3504664305_H
#ifndef METADATAREQUIRED_T2054535199_H
#define METADATAREQUIRED_T2054535199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.MbTiles.MetaDataRequired
struct  MetaDataRequired_t2054535199  : public RuntimeObject
{
public:
	// System.String Mapbox.Platform.MbTiles.MetaDataRequired::<TilesetName>k__BackingField
	String_t* ___U3CTilesetNameU3Ek__BackingField_0;
	// System.String Mapbox.Platform.MbTiles.MetaDataRequired::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Int32 Mapbox.Platform.MbTiles.MetaDataRequired::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_2;
	// System.String Mapbox.Platform.MbTiles.MetaDataRequired::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_3;
	// System.String Mapbox.Platform.MbTiles.MetaDataRequired::<Format>k__BackingField
	String_t* ___U3CFormatU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CTilesetNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MetaDataRequired_t2054535199, ___U3CTilesetNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CTilesetNameU3Ek__BackingField_0() const { return ___U3CTilesetNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTilesetNameU3Ek__BackingField_0() { return &___U3CTilesetNameU3Ek__BackingField_0; }
	inline void set_U3CTilesetNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CTilesetNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTilesetNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaDataRequired_t2054535199, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetaDataRequired_t2054535199, ___U3CVersionU3Ek__BackingField_2)); }
	inline int32_t get_U3CVersionU3Ek__BackingField_2() const { return ___U3CVersionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CVersionU3Ek__BackingField_2() { return &___U3CVersionU3Ek__BackingField_2; }
	inline void set_U3CVersionU3Ek__BackingField_2(int32_t value)
	{
		___U3CVersionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MetaDataRequired_t2054535199, ___U3CDescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CDescriptionU3Ek__BackingField_3() const { return ___U3CDescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDescriptionU3Ek__BackingField_3() { return &___U3CDescriptionU3Ek__BackingField_3; }
	inline void set_U3CDescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CDescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDescriptionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MetaDataRequired_t2054535199, ___U3CFormatU3Ek__BackingField_4)); }
	inline String_t* get_U3CFormatU3Ek__BackingField_4() const { return ___U3CFormatU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CFormatU3Ek__BackingField_4() { return &___U3CFormatU3Ek__BackingField_4; }
	inline void set_U3CFormatU3Ek__BackingField_4(String_t* value)
	{
		___U3CFormatU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFormatU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATAREQUIRED_T2054535199_H
#ifndef ATTRIBUTE_T2506983841_H
#define ATTRIBUTE_T2506983841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2506983841  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2506983841_H
#ifndef VECTORTILEFEATUREEXTENSIONS_T72068974_H
#define VECTORTILEFEATUREEXTENSIONS_T72068974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.ExtensionMethods.VectorTileFeatureExtensions
struct  VectorTileFeatureExtensions_t72068974  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORTILEFEATUREEXTENSIONS_T72068974_H
#ifndef VECTORTILEEXTENSIONS_T1447007237_H
#define VECTORTILEEXTENSIONS_T1447007237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions
struct  VectorTileExtensions_t1447007237  : public RuntimeObject
{
public:

public:
};

struct VectorTileExtensions_t1447007237_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.LatLng>,System.Collections.Generic.IEnumerable`1<Mapbox.VectorTile.Geometry.LatLng>> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions::<>f__am$cache0
	Func_2_t3344775808 * ___U3CU3Ef__amU24cache0_0;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions::<>f__am$cache1
	Func_2_t834845416 * ___U3CU3Ef__amU24cache1_1;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions::<>f__am$cache2
	Func_2_t834845416 * ___U3CU3Ef__amU24cache2_2;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions::<>f__am$cache3
	Func_2_t834845416 * ___U3CU3Ef__amU24cache3_3;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions::<>f__am$cache4
	Func_2_t834845416 * ___U3CU3Ef__amU24cache4_4;
	// System.Func`2<Mapbox.VectorTile.Geometry.LatLng,System.String> Mapbox.VectorTile.ExtensionMethods.VectorTileExtensions::<>f__am$cache5
	Func_2_t834845416 * ___U3CU3Ef__amU24cache5_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(VectorTileExtensions_t1447007237_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Func_2_t3344775808 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Func_2_t3344775808 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Func_2_t3344775808 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(VectorTileExtensions_t1447007237_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_2_t834845416 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_2_t834845416 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_2_t834845416 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(VectorTileExtensions_t1447007237_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t834845416 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t834845416 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t834845416 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(VectorTileExtensions_t1447007237_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Func_2_t834845416 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Func_2_t834845416 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Func_2_t834845416 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(VectorTileExtensions_t1447007237_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline Func_2_t834845416 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline Func_2_t834845416 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(Func_2_t834845416 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(VectorTileExtensions_t1447007237_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t834845416 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t834845416 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t834845416 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORTILEEXTENSIONS_T1447007237_H
#ifndef U3CNOTNULLCONSTRAINTVIOLATIONEXCEPTIONU3EC__ANONSTOREY0_T1381194285_H
#define U3CNOTNULLCONSTRAINTVIOLATIONEXCEPTIONU3EC__ANONSTOREY0_T1381194285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.NotNullConstraintViolationException/<NotNullConstraintViolationException>c__AnonStorey0
struct  U3CNotNullConstraintViolationExceptionU3Ec__AnonStorey0_t1381194285  : public RuntimeObject
{
public:
	// System.Object SQLite4Unity3d.NotNullConstraintViolationException/<NotNullConstraintViolationException>c__AnonStorey0::obj
	RuntimeObject * ___obj_0;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(U3CNotNullConstraintViolationExceptionU3Ec__AnonStorey0_t1381194285, ___obj_0)); }
	inline RuntimeObject * get_obj_0() const { return ___obj_0; }
	inline RuntimeObject ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(RuntimeObject * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((&___obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNOTNULLCONSTRAINTVIOLATIONEXCEPTIONU3EC__ANONSTOREY0_T1381194285_H
#ifndef ENUMEXTENSIONS_T852550954_H
#define ENUMEXTENSIONS_T852550954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.ExtensionMethods.EnumExtensions
struct  EnumExtensions_t852550954  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMEXTENSIONS_T852550954_H
#ifndef EXCEPTION_T368868580_H
#define EXCEPTION_T368868580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t368868580  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3720721507* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t368868580 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3720721507* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3720721507** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3720721507* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___inner_exception_1)); }
	inline Exception_t368868580 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t368868580 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t368868580 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t368868580, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t368868580, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t368868580, ____data_10)); }
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
#endif // EXCEPTION_T368868580_H
#ifndef RESOURCE_T2483720500_H
#define RESOURCE_T2483720500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Resource
struct  Resource_t2483720500  : public RuntimeObject
{
public:

public:
};

struct Resource_t2483720500_StaticFields
{
public:
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>> Mapbox.Platform.Resource::<>f__am$cache0
	Func_2_t447185155 * ___U3CU3Ef__amU24cache0_0;
	// System.Func`2<<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>,<>__AnonType1`2<<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>,System.String>> Mapbox.Platform.Resource::<>f__am$cache1
	Func_2_t2603892896 * ___U3CU3Ef__amU24cache1_1;
	// System.Func`2<<>__AnonType1`2<<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>,System.String>,System.String> Mapbox.Platform.Resource::<>f__am$cache2
	Func_2_t2444500192 * ___U3CU3Ef__amU24cache2_2;
	// System.Func`2<<>__AnonType1`2<<>__AnonType0`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>,System.String>,System.String> Mapbox.Platform.Resource::<>f__am$cache3
	Func_2_t2444500192 * ___U3CU3Ef__amU24cache3_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(Resource_t2483720500_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Func_2_t447185155 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Func_2_t447185155 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Func_2_t447185155 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(Resource_t2483720500_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_2_t2603892896 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_2_t2603892896 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_2_t2603892896 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(Resource_t2483720500_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t2444500192 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t2444500192 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t2444500192 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(Resource_t2483720500_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Func_2_t2444500192 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Func_2_t2444500192 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Func_2_t2444500192 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCE_T2483720500_H
#ifndef BASETABLEQUERY_T247962011_H
#define BASETABLEQUERY_T247962011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.BaseTableQuery
struct  BaseTableQuery_t247962011  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASETABLEQUERY_T247962011_H
#ifndef DOUBLEPOINT_T3808997226_H
#define DOUBLEPOINT_T3808997226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/DoublePoint
struct  DoublePoint_t3808997226 
{
public:
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/DoublePoint::X
	double ___X_0;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/DoublePoint::Y
	double ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(DoublePoint_t3808997226, ___X_0)); }
	inline double get_X_0() const { return ___X_0; }
	inline double* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(double value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(DoublePoint_t3808997226, ___Y_1)); }
	inline double get_Y_1() const { return ___Y_1; }
	inline double* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(double value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEPOINT_T3808997226_H
#ifndef VECTOR2D_T2412030077_H
#define VECTOR2D_T2412030077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.Vector2d
struct  Vector2d_t2412030077 
{
public:
	// System.Double Mapbox.Utils.Vector2d::x
	double ___x_1;
	// System.Double Mapbox.Utils.Vector2d::y
	double ___y_2;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector2d_t2412030077, ___x_1)); }
	inline double get_x_1() const { return ___x_1; }
	inline double* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(double value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector2d_t2412030077, ___y_2)); }
	inline double get_y_2() const { return ___y_2; }
	inline double* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(double value)
	{
		___y_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2D_T2412030077_H
#ifndef INT128_T3790056640_H
#define INT128_T3790056640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128
struct  Int128_t3790056640 
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::hi
	int64_t ___hi_0;
	// System.UInt64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Int128::lo
	uint64_t ___lo_1;

public:
	inline static int32_t get_offset_of_hi_0() { return static_cast<int32_t>(offsetof(Int128_t3790056640, ___hi_0)); }
	inline int64_t get_hi_0() const { return ___hi_0; }
	inline int64_t* get_address_of_hi_0() { return &___hi_0; }
	inline void set_hi_0(int64_t value)
	{
		___hi_0 = value;
	}

	inline static int32_t get_offset_of_lo_1() { return static_cast<int32_t>(offsetof(Int128_t3790056640, ___lo_1)); }
	inline uint64_t get_lo_1() const { return ___lo_1; }
	inline uint64_t* get_address_of_lo_1() { return &___lo_1; }
	inline void set_lo_1(uint64_t value)
	{
		___lo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT128_T3790056640_H
#ifndef MATHD_T2225564787_H
#define MATHD_T2225564787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.Mathd
struct  Mathd_t2225564787 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathd_t2225564787__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHD_T2225564787_H
#ifndef INTPOINT_T3569634576_H
#define INTPOINT_T3569634576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint
struct  IntPoint_t3569634576 
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::X
	int64_t ___X_0;
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint::Y
	int64_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(IntPoint_t3569634576, ___X_0)); }
	inline int64_t get_X_0() const { return ___X_0; }
	inline int64_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int64_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(IntPoint_t3569634576, ___Y_1)); }
	inline int64_t get_Y_1() const { return ___Y_1; }
	inline int64_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int64_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPOINT_T3569634576_H
#ifndef NOTNULLATTRIBUTE_T3370137287_H
#define NOTNULLATTRIBUTE_T3370137287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.NotNullAttribute
struct  NotNullAttribute_t3370137287  : public Attribute_t2506983841
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTNULLATTRIBUTE_T3370137287_H
#ifndef NULLABLE_1_T3575497134_H
#define NULLABLE_1_T3575497134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int64>
struct  Nullable_1_t3575497134 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3575497134, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3575497134, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T3575497134_H
#ifndef CACHEITEM_T2723714911_H
#define CACHEITEM_T2723714911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Cache.MemoryCache/CacheItem
struct  CacheItem_t2723714911 
{
public:
	// System.Int64 Mapbox.Platform.Cache.MemoryCache/CacheItem::Timestamp
	int64_t ___Timestamp_0;
	// System.Byte[] Mapbox.Platform.Cache.MemoryCache/CacheItem::Data
	ByteU5BU5D_t2085045523* ___Data_1;

public:
	inline static int32_t get_offset_of_Timestamp_0() { return static_cast<int32_t>(offsetof(CacheItem_t2723714911, ___Timestamp_0)); }
	inline int64_t get_Timestamp_0() const { return ___Timestamp_0; }
	inline int64_t* get_address_of_Timestamp_0() { return &___Timestamp_0; }
	inline void set_Timestamp_0(int64_t value)
	{
		___Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(CacheItem_t2723714911, ___Data_1)); }
	inline ByteU5BU5D_t2085045523* get_Data_1() const { return ___Data_1; }
	inline ByteU5BU5D_t2085045523** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(ByteU5BU5D_t2085045523* value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((&___Data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mapbox.Platform.Cache.MemoryCache/CacheItem
struct CacheItem_t2723714911_marshaled_pinvoke
{
	int64_t ___Timestamp_0;
	uint8_t* ___Data_1;
};
// Native definition for COM marshalling of Mapbox.Platform.Cache.MemoryCache/CacheItem
struct CacheItem_t2723714911_marshaled_com
{
	int64_t ___Timestamp_0;
	uint8_t* ___Data_1;
};
#endif // CACHEITEM_T2723714911_H
#ifndef CUSTOMCREATIONCONVERTER_1_T3295007813_H
#define CUSTOMCREATIONCONVERTER_1_T3295007813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Converters.CustomCreationConverter`1<System.Collections.Generic.List`1<Mapbox.Utils.Vector2d>>
struct  CustomCreationConverter_1_t3295007813  : public JsonConverter_t1284165062
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCREATIONCONVERTER_1_T3295007813_H
#ifndef CUSTOMCREATIONCONVERTER_1_T3388108497_H
#define CUSTOMCREATIONCONVERTER_1_T3388108497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Converters.CustomCreationConverter`1<Mapbox.Utils.Vector2d>
struct  CustomCreationConverter_1_t3388108497  : public JsonConverter_t1284165062
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCREATIONCONVERTER_1_T3388108497_H
#ifndef CUSTOMCREATIONCONVERTER_1_T2746607235_H
#define CUSTOMCREATIONCONVERTER_1_T2746607235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Json.Converters.CustomCreationConverter`1<Mapbox.Utils.Vector2dBounds>
struct  CustomCreationConverter_1_t2746607235  : public JsonConverter_t1284165062
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCREATIONCONVERTER_1_T2746607235_H
#ifndef NULLABLE_1_T1321957244_H
#define NULLABLE_1_T1321957244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Double>
struct  Nullable_1_t1321957244 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1321957244, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1321957244, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1321957244_H
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
#ifndef TIMESPAN_T1646942302_H
#define TIMESPAN_T1646942302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1646942302 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1646942302, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1646942302_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1646942302  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1646942302  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1646942302  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1646942302_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1646942302  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1646942302 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1646942302  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1646942302_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1646942302  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1646942302 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1646942302  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1646942302_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1646942302  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1646942302 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1646942302  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1646942302_H
#ifndef ENUM_T630144776_H
#define ENUM_T630144776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t630144776  : public ValueType_t692148246
{
public:

public:
};

struct Enum_t630144776_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2602859263* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t630144776_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2602859263* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2602859263** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2602859263* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t630144776_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t630144776_marshaled_com
{
};
#endif // ENUM_T630144776_H
#ifndef CANONICALTILEID_T343801577_H
#define CANONICALTILEID_T343801577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Map.CanonicalTileId
struct  CanonicalTileId_t343801577 
{
public:
	// System.Int32 Mapbox.Map.CanonicalTileId::Z
	int32_t ___Z_0;
	// System.Int32 Mapbox.Map.CanonicalTileId::X
	int32_t ___X_1;
	// System.Int32 Mapbox.Map.CanonicalTileId::Y
	int32_t ___Y_2;

public:
	inline static int32_t get_offset_of_Z_0() { return static_cast<int32_t>(offsetof(CanonicalTileId_t343801577, ___Z_0)); }
	inline int32_t get_Z_0() const { return ___Z_0; }
	inline int32_t* get_address_of_Z_0() { return &___Z_0; }
	inline void set_Z_0(int32_t value)
	{
		___Z_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(CanonicalTileId_t343801577, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(CanonicalTileId_t343801577, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANONICALTILEID_T343801577_H
#ifndef INDEXEDCOLUMN_T4051292507_H
#define INDEXEDCOLUMN_T4051292507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct  IndexedColumn_t4051292507 
{
public:
	// System.Int32 SQLite4Unity3d.SQLiteConnection/IndexedColumn::Order
	int32_t ___Order_0;
	// System.String SQLite4Unity3d.SQLiteConnection/IndexedColumn::ColumnName
	String_t* ___ColumnName_1;

public:
	inline static int32_t get_offset_of_Order_0() { return static_cast<int32_t>(offsetof(IndexedColumn_t4051292507, ___Order_0)); }
	inline int32_t get_Order_0() const { return ___Order_0; }
	inline int32_t* get_address_of_Order_0() { return &___Order_0; }
	inline void set_Order_0(int32_t value)
	{
		___Order_0 = value;
	}

	inline static int32_t get_offset_of_ColumnName_1() { return static_cast<int32_t>(offsetof(IndexedColumn_t4051292507, ___ColumnName_1)); }
	inline String_t* get_ColumnName_1() const { return ___ColumnName_1; }
	inline String_t** get_address_of_ColumnName_1() { return &___ColumnName_1; }
	inline void set_ColumnName_1(String_t* value)
	{
		___ColumnName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct IndexedColumn_t4051292507_marshaled_pinvoke
{
	int32_t ___Order_0;
	char* ___ColumnName_1;
};
// Native definition for COM marshalling of SQLite4Unity3d.SQLiteConnection/IndexedColumn
struct IndexedColumn_t4051292507_marshaled_com
{
	int32_t ___Order_0;
	Il2CppChar* ___ColumnName_1;
};
#endif // INDEXEDCOLUMN_T4051292507_H
#ifndef NULLABLE_1_T660714893_H
#define NULLABLE_1_T660714893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t660714893 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t660714893, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t660714893, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T660714893_H
#ifndef TABLEATTRIBUTE_T4122574923_H
#define TABLEATTRIBUTE_T4122574923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.TableAttribute
struct  TableAttribute_t4122574923  : public Attribute_t2506983841
{
public:
	// System.String SQLite4Unity3d.TableAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TableAttribute_t4122574923, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEATTRIBUTE_T4122574923_H
#ifndef INDEXINFO_T474914895_H
#define INDEXINFO_T474914895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection/IndexInfo
struct  IndexInfo_t474914895 
{
public:
	// System.String SQLite4Unity3d.SQLiteConnection/IndexInfo::IndexName
	String_t* ___IndexName_0;
	// System.String SQLite4Unity3d.SQLiteConnection/IndexInfo::TableName
	String_t* ___TableName_1;
	// System.Boolean SQLite4Unity3d.SQLiteConnection/IndexInfo::Unique
	bool ___Unique_2;
	// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteConnection/IndexedColumn> SQLite4Unity3d.SQLiteConnection/IndexInfo::Columns
	List_1_t3958191823 * ___Columns_3;

public:
	inline static int32_t get_offset_of_IndexName_0() { return static_cast<int32_t>(offsetof(IndexInfo_t474914895, ___IndexName_0)); }
	inline String_t* get_IndexName_0() const { return ___IndexName_0; }
	inline String_t** get_address_of_IndexName_0() { return &___IndexName_0; }
	inline void set_IndexName_0(String_t* value)
	{
		___IndexName_0 = value;
		Il2CppCodeGenWriteBarrier((&___IndexName_0), value);
	}

	inline static int32_t get_offset_of_TableName_1() { return static_cast<int32_t>(offsetof(IndexInfo_t474914895, ___TableName_1)); }
	inline String_t* get_TableName_1() const { return ___TableName_1; }
	inline String_t** get_address_of_TableName_1() { return &___TableName_1; }
	inline void set_TableName_1(String_t* value)
	{
		___TableName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TableName_1), value);
	}

	inline static int32_t get_offset_of_Unique_2() { return static_cast<int32_t>(offsetof(IndexInfo_t474914895, ___Unique_2)); }
	inline bool get_Unique_2() const { return ___Unique_2; }
	inline bool* get_address_of_Unique_2() { return &___Unique_2; }
	inline void set_Unique_2(bool value)
	{
		___Unique_2 = value;
	}

	inline static int32_t get_offset_of_Columns_3() { return static_cast<int32_t>(offsetof(IndexInfo_t474914895, ___Columns_3)); }
	inline List_1_t3958191823 * get_Columns_3() const { return ___Columns_3; }
	inline List_1_t3958191823 ** get_address_of_Columns_3() { return &___Columns_3; }
	inline void set_Columns_3(List_1_t3958191823 * value)
	{
		___Columns_3 = value;
		Il2CppCodeGenWriteBarrier((&___Columns_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SQLite4Unity3d.SQLiteConnection/IndexInfo
struct IndexInfo_t474914895_marshaled_pinvoke
{
	char* ___IndexName_0;
	char* ___TableName_1;
	int32_t ___Unique_2;
	List_1_t3958191823 * ___Columns_3;
};
// Native definition for COM marshalling of SQLite4Unity3d.SQLiteConnection/IndexInfo
struct IndexInfo_t474914895_marshaled_com
{
	Il2CppChar* ___IndexName_0;
	Il2CppChar* ___TableName_1;
	int32_t ___Unique_2;
	List_1_t3958191823 * ___Columns_3;
};
#endif // INDEXINFO_T474914895_H
#ifndef COLUMNATTRIBUTE_T3970719066_H
#define COLUMNATTRIBUTE_T3970719066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.ColumnAttribute
struct  ColumnAttribute_t3970719066  : public Attribute_t2506983841
{
public:
	// System.String SQLite4Unity3d.ColumnAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ColumnAttribute_t3970719066, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNATTRIBUTE_T3970719066_H
#ifndef PRIMARYKEYATTRIBUTE_T2483723465_H
#define PRIMARYKEYATTRIBUTE_T2483723465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.PrimaryKeyAttribute
struct  PrimaryKeyAttribute_t2483723465  : public Attribute_t2506983841
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMARYKEYATTRIBUTE_T2483723465_H
#ifndef AUTOINCREMENTATTRIBUTE_T2229500047_H
#define AUTOINCREMENTATTRIBUTE_T2229500047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.AutoIncrementAttribute
struct  AutoIncrementAttribute_t2229500047  : public Attribute_t2506983841
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOINCREMENTATTRIBUTE_T2229500047_H
#ifndef INDEXEDATTRIBUTE_T4180924783_H
#define INDEXEDATTRIBUTE_T4180924783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.IndexedAttribute
struct  IndexedAttribute_t4180924783  : public Attribute_t2506983841
{
public:
	// System.String SQLite4Unity3d.IndexedAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 SQLite4Unity3d.IndexedAttribute::<Order>k__BackingField
	int32_t ___U3COrderU3Ek__BackingField_1;
	// System.Boolean SQLite4Unity3d.IndexedAttribute::<Unique>k__BackingField
	bool ___U3CUniqueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(IndexedAttribute_t4180924783, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(IndexedAttribute_t4180924783, ___U3COrderU3Ek__BackingField_1)); }
	inline int32_t get_U3COrderU3Ek__BackingField_1() const { return ___U3COrderU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3COrderU3Ek__BackingField_1() { return &___U3COrderU3Ek__BackingField_1; }
	inline void set_U3COrderU3Ek__BackingField_1(int32_t value)
	{
		___U3COrderU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUniqueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IndexedAttribute_t4180924783, ___U3CUniqueU3Ek__BackingField_2)); }
	inline bool get_U3CUniqueU3Ek__BackingField_2() const { return ___U3CUniqueU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CUniqueU3Ek__BackingField_2() { return &___U3CUniqueU3Ek__BackingField_2; }
	inline void set_U3CUniqueU3Ek__BackingField_2(bool value)
	{
		___U3CUniqueU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXEDATTRIBUTE_T4180924783_H
#ifndef IGNOREATTRIBUTE_T1379192568_H
#define IGNOREATTRIBUTE_T1379192568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.IgnoreAttribute
struct  IgnoreAttribute_t1379192568  : public Attribute_t2506983841
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IGNOREATTRIBUTE_T1379192568_H
#ifndef NULLABLE_1_T72511825_H
#define NULLABLE_1_T72511825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.UInt32>
struct  Nullable_1_t72511825 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t72511825, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t72511825, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T72511825_H
#ifndef MAXLENGTHATTRIBUTE_T2589852777_H
#define MAXLENGTHATTRIBUTE_T2589852777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.MaxLengthAttribute
struct  MaxLengthAttribute_t2589852777  : public Attribute_t2506983841
{
public:
	// System.Int32 SQLite4Unity3d.MaxLengthAttribute::<Value>k__BackingField
	int32_t ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MaxLengthAttribute_t2589852777, ___U3CValueU3Ek__BackingField_0)); }
	inline int32_t get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(int32_t value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAXLENGTHATTRIBUTE_T2589852777_H
#ifndef COLLATIONATTRIBUTE_T767046006_H
#define COLLATIONATTRIBUTE_T767046006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.CollationAttribute
struct  CollationAttribute_t767046006  : public Attribute_t2506983841
{
public:
	// System.String SQLite4Unity3d.CollationAttribute::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CollationAttribute_t767046006, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CValueU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLATIONATTRIBUTE_T767046006_H
#ifndef INTRECT_T2881388650_H
#define INTRECT_T2881388650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntRect
struct  IntRect_t2881388650 
{
public:
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntRect::left
	int64_t ___left_0;
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntRect::top
	int64_t ___top_1;
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntRect::right
	int64_t ___right_2;
	// System.Int64 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntRect::bottom
	int64_t ___bottom_3;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(IntRect_t2881388650, ___left_0)); }
	inline int64_t get_left_0() const { return ___left_0; }
	inline int64_t* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(int64_t value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_top_1() { return static_cast<int32_t>(offsetof(IntRect_t2881388650, ___top_1)); }
	inline int64_t get_top_1() const { return ___top_1; }
	inline int64_t* get_address_of_top_1() { return &___top_1; }
	inline void set_top_1(int64_t value)
	{
		___top_1 = value;
	}

	inline static int32_t get_offset_of_right_2() { return static_cast<int32_t>(offsetof(IntRect_t2881388650, ___right_2)); }
	inline int64_t get_right_2() const { return ___right_2; }
	inline int64_t* get_address_of_right_2() { return &___right_2; }
	inline void set_right_2(int64_t value)
	{
		___right_2 = value;
	}

	inline static int32_t get_offset_of_bottom_3() { return static_cast<int32_t>(offsetof(IntRect_t2881388650, ___bottom_3)); }
	inline int64_t get_bottom_3() const { return ___bottom_3; }
	inline int64_t* get_address_of_bottom_3() { return &___bottom_3; }
	inline void set_bottom_3(int64_t value)
	{
		___bottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTRECT_T2881388650_H
#ifndef DIRECTION_T266154771_H
#define DIRECTION_T266154771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Direction
struct  Direction_t266154771 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t266154771, ___value___1)); }
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
#endif // DIRECTION_T266154771_H
#ifndef ENDTYPE_T2269235238_H
#define ENDTYPE_T2269235238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EndType
struct  EndType_t2269235238 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EndType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EndType_t2269235238, ___value___1)); }
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
#endif // ENDTYPE_T2269235238_H
#ifndef INTERSECTNODE_T3153246009_H
#define INTERSECTNODE_T3153246009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode
struct  IntersectNode_t3153246009  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Edge1
	TEdge_t941134437 * ___Edge1_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Edge2
	TEdge_t941134437 * ___Edge2_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntersectNode::Pt
	IntPoint_t3569634576  ___Pt_2;

public:
	inline static int32_t get_offset_of_Edge1_0() { return static_cast<int32_t>(offsetof(IntersectNode_t3153246009, ___Edge1_0)); }
	inline TEdge_t941134437 * get_Edge1_0() const { return ___Edge1_0; }
	inline TEdge_t941134437 ** get_address_of_Edge1_0() { return &___Edge1_0; }
	inline void set_Edge1_0(TEdge_t941134437 * value)
	{
		___Edge1_0 = value;
		Il2CppCodeGenWriteBarrier((&___Edge1_0), value);
	}

	inline static int32_t get_offset_of_Edge2_1() { return static_cast<int32_t>(offsetof(IntersectNode_t3153246009, ___Edge2_1)); }
	inline TEdge_t941134437 * get_Edge2_1() const { return ___Edge2_1; }
	inline TEdge_t941134437 ** get_address_of_Edge2_1() { return &___Edge2_1; }
	inline void set_Edge2_1(TEdge_t941134437 * value)
	{
		___Edge2_1 = value;
		Il2CppCodeGenWriteBarrier((&___Edge2_1), value);
	}

	inline static int32_t get_offset_of_Pt_2() { return static_cast<int32_t>(offsetof(IntersectNode_t3153246009, ___Pt_2)); }
	inline IntPoint_t3569634576  get_Pt_2() const { return ___Pt_2; }
	inline IntPoint_t3569634576 * get_address_of_Pt_2() { return &___Pt_2; }
	inline void set_Pt_2(IntPoint_t3569634576  value)
	{
		___Pt_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERSECTNODE_T3153246009_H
#ifndef JOINTYPE_T707909600_H
#define JOINTYPE_T707909600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/JoinType
struct  JoinType_t707909600 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/JoinType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JoinType_t707909600, ___value___1)); }
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
#endif // JOINTYPE_T707909600_H
#ifndef POLYFILLTYPE_T1589120019_H
#define POLYFILLTYPE_T1589120019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType
struct  PolyFillType_t1589120019 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyFillType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolyFillType_t1589120019, ___value___1)); }
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
#endif // POLYFILLTYPE_T1589120019_H
#ifndef EDGESIDE_T3850731799_H
#define EDGESIDE_T3850731799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EdgeSide
struct  EdgeSide_t3850731799 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EdgeSide::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EdgeSide_t3850731799, ___value___1)); }
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
#endif // EDGESIDE_T3850731799_H
#ifndef POLYTYPE_T2098605919_H
#define POLYTYPE_T2098605919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType
struct  PolyType_t2098605919 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolyType_t2098605919, ___value___1)); }
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
#endif // POLYTYPE_T2098605919_H
#ifndef BEARINGFILTER_T244852089_H
#define BEARINGFILTER_T244852089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.BearingFilter
struct  BearingFilter_t244852089 
{
public:
	// System.Nullable`1<System.Double> Mapbox.Utils.BearingFilter::Bearing
	Nullable_1_t1321957244  ___Bearing_0;
	// System.Nullable`1<System.Double> Mapbox.Utils.BearingFilter::Range
	Nullable_1_t1321957244  ___Range_1;

public:
	inline static int32_t get_offset_of_Bearing_0() { return static_cast<int32_t>(offsetof(BearingFilter_t244852089, ___Bearing_0)); }
	inline Nullable_1_t1321957244  get_Bearing_0() const { return ___Bearing_0; }
	inline Nullable_1_t1321957244 * get_address_of_Bearing_0() { return &___Bearing_0; }
	inline void set_Bearing_0(Nullable_1_t1321957244  value)
	{
		___Bearing_0 = value;
	}

	inline static int32_t get_offset_of_Range_1() { return static_cast<int32_t>(offsetof(BearingFilter_t244852089, ___Range_1)); }
	inline Nullable_1_t1321957244  get_Range_1() const { return ___Range_1; }
	inline Nullable_1_t1321957244 * get_address_of_Range_1() { return &___Range_1; }
	inline void set_Range_1(Nullable_1_t1321957244  value)
	{
		___Range_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mapbox.Utils.BearingFilter
struct BearingFilter_t244852089_marshaled_pinvoke
{
	Nullable_1_t1321957244  ___Bearing_0;
	Nullable_1_t1321957244  ___Range_1;
};
// Native definition for COM marshalling of Mapbox.Utils.BearingFilter
struct BearingFilter_t244852089_marshaled_com
{
	Nullable_1_t1321957244  ___Bearing_0;
	Nullable_1_t1321957244  ___Range_1;
};
#endif // BEARINGFILTER_T244852089_H
#ifndef COLUMN_T4064576960_H
#define COLUMN_T4064576960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.TableMapping/Column
struct  Column_t4064576960  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo SQLite4Unity3d.TableMapping/Column::_prop
	PropertyInfo_t * ____prop_0;
	// System.String SQLite4Unity3d.TableMapping/Column::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Type SQLite4Unity3d.TableMapping/Column::<ColumnType>k__BackingField
	Type_t * ___U3CColumnTypeU3Ek__BackingField_2;
	// System.String SQLite4Unity3d.TableMapping/Column::<Collation>k__BackingField
	String_t* ___U3CCollationU3Ek__BackingField_3;
	// System.Boolean SQLite4Unity3d.TableMapping/Column::<IsAutoInc>k__BackingField
	bool ___U3CIsAutoIncU3Ek__BackingField_4;
	// System.Boolean SQLite4Unity3d.TableMapping/Column::<IsAutoGuid>k__BackingField
	bool ___U3CIsAutoGuidU3Ek__BackingField_5;
	// System.Boolean SQLite4Unity3d.TableMapping/Column::<IsPK>k__BackingField
	bool ___U3CIsPKU3Ek__BackingField_6;
	// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.IndexedAttribute> SQLite4Unity3d.TableMapping/Column::<Indices>k__BackingField
	RuntimeObject* ___U3CIndicesU3Ek__BackingField_7;
	// System.Boolean SQLite4Unity3d.TableMapping/Column::<IsNullable>k__BackingField
	bool ___U3CIsNullableU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> SQLite4Unity3d.TableMapping/Column::<MaxStringLength>k__BackingField
	Nullable_1_t660714893  ___U3CMaxStringLengthU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__prop_0() { return static_cast<int32_t>(offsetof(Column_t4064576960, ____prop_0)); }
	inline PropertyInfo_t * get__prop_0() const { return ____prop_0; }
	inline PropertyInfo_t ** get_address_of__prop_0() { return &____prop_0; }
	inline void set__prop_0(PropertyInfo_t * value)
	{
		____prop_0 = value;
		Il2CppCodeGenWriteBarrier((&____prop_0), value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CColumnTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CColumnTypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CColumnTypeU3Ek__BackingField_2() const { return ___U3CColumnTypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CColumnTypeU3Ek__BackingField_2() { return &___U3CColumnTypeU3Ek__BackingField_2; }
	inline void set_U3CColumnTypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CColumnTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CColumnTypeU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CCollationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CCollationU3Ek__BackingField_3)); }
	inline String_t* get_U3CCollationU3Ek__BackingField_3() const { return ___U3CCollationU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCollationU3Ek__BackingField_3() { return &___U3CCollationU3Ek__BackingField_3; }
	inline void set_U3CCollationU3Ek__BackingField_3(String_t* value)
	{
		___U3CCollationU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCollationU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CIsAutoIncU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CIsAutoIncU3Ek__BackingField_4)); }
	inline bool get_U3CIsAutoIncU3Ek__BackingField_4() const { return ___U3CIsAutoIncU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsAutoIncU3Ek__BackingField_4() { return &___U3CIsAutoIncU3Ek__BackingField_4; }
	inline void set_U3CIsAutoIncU3Ek__BackingField_4(bool value)
	{
		___U3CIsAutoIncU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsAutoGuidU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CIsAutoGuidU3Ek__BackingField_5)); }
	inline bool get_U3CIsAutoGuidU3Ek__BackingField_5() const { return ___U3CIsAutoGuidU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsAutoGuidU3Ek__BackingField_5() { return &___U3CIsAutoGuidU3Ek__BackingField_5; }
	inline void set_U3CIsAutoGuidU3Ek__BackingField_5(bool value)
	{
		___U3CIsAutoGuidU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsPKU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CIsPKU3Ek__BackingField_6)); }
	inline bool get_U3CIsPKU3Ek__BackingField_6() const { return ___U3CIsPKU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPKU3Ek__BackingField_6() { return &___U3CIsPKU3Ek__BackingField_6; }
	inline void set_U3CIsPKU3Ek__BackingField_6(bool value)
	{
		___U3CIsPKU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIndicesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CIndicesU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CIndicesU3Ek__BackingField_7() const { return ___U3CIndicesU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CIndicesU3Ek__BackingField_7() { return &___U3CIndicesU3Ek__BackingField_7; }
	inline void set_U3CIndicesU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CIndicesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIndicesU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CIsNullableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CIsNullableU3Ek__BackingField_8)); }
	inline bool get_U3CIsNullableU3Ek__BackingField_8() const { return ___U3CIsNullableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsNullableU3Ek__BackingField_8() { return &___U3CIsNullableU3Ek__BackingField_8; }
	inline void set_U3CIsNullableU3Ek__BackingField_8(bool value)
	{
		___U3CIsNullableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxStringLengthU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Column_t4064576960, ___U3CMaxStringLengthU3Ek__BackingField_9)); }
	inline Nullable_1_t660714893  get_U3CMaxStringLengthU3Ek__BackingField_9() const { return ___U3CMaxStringLengthU3Ek__BackingField_9; }
	inline Nullable_1_t660714893 * get_address_of_U3CMaxStringLengthU3Ek__BackingField_9() { return &___U3CMaxStringLengthU3Ek__BackingField_9; }
	inline void set_U3CMaxStringLengthU3Ek__BackingField_9(Nullable_1_t660714893  value)
	{
		___U3CMaxStringLengthU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMN_T4064576960_H
#ifndef MBTILESDB_T3038525224_H
#define MBTILESDB_T3038525224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.MbTiles.MbTilesDb
struct  MbTilesDb_t3038525224  : public RuntimeObject
{
public:
	// System.Boolean Mapbox.Platform.MbTiles.MbTilesDb::_disposed
	bool ____disposed_0;
	// System.String Mapbox.Platform.MbTiles.MbTilesDb::_dbPath
	String_t* ____dbPath_1;
	// SQLite4Unity3d.SQLiteConnection Mapbox.Platform.MbTiles.MbTilesDb::_sqlite
	SQLiteConnection_t363421307 * ____sqlite_2;
	// System.Nullable`1<System.UInt32> Mapbox.Platform.MbTiles.MbTilesDb::_maxTileCount
	Nullable_1_t72511825  ____maxTileCount_3;
	// System.Int32 Mapbox.Platform.MbTiles.MbTilesDb::_pruneCacheCounter
	int32_t ____pruneCacheCounter_5;

public:
	inline static int32_t get_offset_of__disposed_0() { return static_cast<int32_t>(offsetof(MbTilesDb_t3038525224, ____disposed_0)); }
	inline bool get__disposed_0() const { return ____disposed_0; }
	inline bool* get_address_of__disposed_0() { return &____disposed_0; }
	inline void set__disposed_0(bool value)
	{
		____disposed_0 = value;
	}

	inline static int32_t get_offset_of__dbPath_1() { return static_cast<int32_t>(offsetof(MbTilesDb_t3038525224, ____dbPath_1)); }
	inline String_t* get__dbPath_1() const { return ____dbPath_1; }
	inline String_t** get_address_of__dbPath_1() { return &____dbPath_1; }
	inline void set__dbPath_1(String_t* value)
	{
		____dbPath_1 = value;
		Il2CppCodeGenWriteBarrier((&____dbPath_1), value);
	}

	inline static int32_t get_offset_of__sqlite_2() { return static_cast<int32_t>(offsetof(MbTilesDb_t3038525224, ____sqlite_2)); }
	inline SQLiteConnection_t363421307 * get__sqlite_2() const { return ____sqlite_2; }
	inline SQLiteConnection_t363421307 ** get_address_of__sqlite_2() { return &____sqlite_2; }
	inline void set__sqlite_2(SQLiteConnection_t363421307 * value)
	{
		____sqlite_2 = value;
		Il2CppCodeGenWriteBarrier((&____sqlite_2), value);
	}

	inline static int32_t get_offset_of__maxTileCount_3() { return static_cast<int32_t>(offsetof(MbTilesDb_t3038525224, ____maxTileCount_3)); }
	inline Nullable_1_t72511825  get__maxTileCount_3() const { return ____maxTileCount_3; }
	inline Nullable_1_t72511825 * get_address_of__maxTileCount_3() { return &____maxTileCount_3; }
	inline void set__maxTileCount_3(Nullable_1_t72511825  value)
	{
		____maxTileCount_3 = value;
	}

	inline static int32_t get_offset_of__pruneCacheCounter_5() { return static_cast<int32_t>(offsetof(MbTilesDb_t3038525224, ____pruneCacheCounter_5)); }
	inline int32_t get__pruneCacheCounter_5() const { return ____pruneCacheCounter_5; }
	inline int32_t* get_address_of__pruneCacheCounter_5() { return &____pruneCacheCounter_5; }
	inline void set__pruneCacheCounter_5(int32_t value)
	{
		____pruneCacheCounter_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MBTILESDB_T3038525224_H
#ifndef U3CGETTILEU3EC__ANONSTOREY0_T3757461847_H
#define U3CGETTILEU3EC__ANONSTOREY0_T3757461847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.MbTiles.MbTilesDb/<GetTile>c__AnonStorey0
struct  U3CGetTileU3Ec__AnonStorey0_t3757461847  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Platform.MbTiles.MbTilesDb/<GetTile>c__AnonStorey0::tileId
	CanonicalTileId_t343801577  ___tileId_0;

public:
	inline static int32_t get_offset_of_tileId_0() { return static_cast<int32_t>(offsetof(U3CGetTileU3Ec__AnonStorey0_t3757461847, ___tileId_0)); }
	inline CanonicalTileId_t343801577  get_tileId_0() const { return ___tileId_0; }
	inline CanonicalTileId_t343801577 * get_address_of_tileId_0() { return &___tileId_0; }
	inline void set_tileId_0(CanonicalTileId_t343801577  value)
	{
		___tileId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETTILEU3EC__ANONSTOREY0_T3757461847_H
#ifndef U3CTILEEXISTSU3EC__ANONSTOREY1_T1072699741_H
#define U3CTILEEXISTSU3EC__ANONSTOREY1_T1072699741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.MbTiles.MbTilesDb/<TileExists>c__AnonStorey1
struct  U3CTileExistsU3Ec__AnonStorey1_t1072699741  : public RuntimeObject
{
public:
	// Mapbox.Map.CanonicalTileId Mapbox.Platform.MbTiles.MbTilesDb/<TileExists>c__AnonStorey1::tileId
	CanonicalTileId_t343801577  ___tileId_0;

public:
	inline static int32_t get_offset_of_tileId_0() { return static_cast<int32_t>(offsetof(U3CTileExistsU3Ec__AnonStorey1_t1072699741, ___tileId_0)); }
	inline CanonicalTileId_t343801577  get_tileId_0() const { return ___tileId_0; }
	inline CanonicalTileId_t343801577 * get_address_of_tileId_0() { return &___tileId_0; }
	inline void set_tileId_0(CanonicalTileId_t343801577  value)
	{
		___tileId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTILEEXISTSU3EC__ANONSTOREY1_T1072699741_H
#ifndef SQLITEOPENFLAGS_T2769278808_H
#define SQLITEOPENFLAGS_T2769278808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteOpenFlags
struct  SQLiteOpenFlags_t2769278808 
{
public:
	// System.Int32 SQLite4Unity3d.SQLiteOpenFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SQLiteOpenFlags_t2769278808, ___value___1)); }
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
#endif // SQLITEOPENFLAGS_T2769278808_H
#ifndef CREATEFLAGS_T2850693561_H
#define CREATEFLAGS_T2850693561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.CreateFlags
struct  CreateFlags_t2850693561 
{
public:
	// System.Int32 SQLite4Unity3d.CreateFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CreateFlags_t2850693561, ___value___1)); }
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
#endif // CREATEFLAGS_T2850693561_H
#ifndef SQLITECONNECTION_T363421307_H
#define SQLITECONNECTION_T363421307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteConnection
struct  SQLiteConnection_t363421307  : public RuntimeObject
{
public:
	// System.Boolean SQLite4Unity3d.SQLiteConnection::_open
	bool ____open_0;
	// System.TimeSpan SQLite4Unity3d.SQLiteConnection::_busyTimeout
	TimeSpan_t1646942302  ____busyTimeout_1;
	// System.Collections.Generic.Dictionary`2<System.String,SQLite4Unity3d.TableMapping> SQLite4Unity3d.SQLiteConnection::_mappings
	Dictionary_2_t4103039106 * ____mappings_2;
	// System.Collections.Generic.Dictionary`2<System.String,SQLite4Unity3d.TableMapping> SQLite4Unity3d.SQLiteConnection::_tables
	Dictionary_2_t4103039106 * ____tables_3;
	// System.Diagnostics.Stopwatch SQLite4Unity3d.SQLiteConnection::_sw
	Stopwatch_t1957889703 * ____sw_4;
	// System.Int64 SQLite4Unity3d.SQLiteConnection::_elapsedMilliseconds
	int64_t ____elapsedMilliseconds_5;
	// System.Int32 SQLite4Unity3d.SQLiteConnection::_transactionDepth
	int32_t ____transactionDepth_6;
	// System.Random SQLite4Unity3d.SQLiteConnection::_rand
	Random_t1272380693 * ____rand_7;
	// System.IntPtr SQLite4Unity3d.SQLiteConnection::<Handle>k__BackingField
	IntPtr_t ___U3CHandleU3Ek__BackingField_8;
	// System.String SQLite4Unity3d.SQLiteConnection::<DatabasePath>k__BackingField
	String_t* ___U3CDatabasePathU3Ek__BackingField_10;
	// System.Boolean SQLite4Unity3d.SQLiteConnection::<TimeExecution>k__BackingField
	bool ___U3CTimeExecutionU3Ek__BackingField_11;
	// System.Boolean SQLite4Unity3d.SQLiteConnection::<Trace>k__BackingField
	bool ___U3CTraceU3Ek__BackingField_12;
	// System.Boolean SQLite4Unity3d.SQLiteConnection::<StoreDateTimeAsTicks>k__BackingField
	bool ___U3CStoreDateTimeAsTicksU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__open_0() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ____open_0)); }
	inline bool get__open_0() const { return ____open_0; }
	inline bool* get_address_of__open_0() { return &____open_0; }
	inline void set__open_0(bool value)
	{
		____open_0 = value;
	}

	inline static int32_t get_offset_of__busyTimeout_1() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ____busyTimeout_1)); }
	inline TimeSpan_t1646942302  get__busyTimeout_1() const { return ____busyTimeout_1; }
	inline TimeSpan_t1646942302 * get_address_of__busyTimeout_1() { return &____busyTimeout_1; }
	inline void set__busyTimeout_1(TimeSpan_t1646942302  value)
	{
		____busyTimeout_1 = value;
	}

	inline static int32_t get_offset_of__mappings_2() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ____mappings_2)); }
	inline Dictionary_2_t4103039106 * get__mappings_2() const { return ____mappings_2; }
	inline Dictionary_2_t4103039106 ** get_address_of__mappings_2() { return &____mappings_2; }
	inline void set__mappings_2(Dictionary_2_t4103039106 * value)
	{
		____mappings_2 = value;
		Il2CppCodeGenWriteBarrier((&____mappings_2), value);
	}

	inline static int32_t get_offset_of__tables_3() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ____tables_3)); }
	inline Dictionary_2_t4103039106 * get__tables_3() const { return ____tables_3; }
	inline Dictionary_2_t4103039106 ** get_address_of__tables_3() { return &____tables_3; }
	inline void set__tables_3(Dictionary_2_t4103039106 * value)
	{
		____tables_3 = value;
		Il2CppCodeGenWriteBarrier((&____tables_3), value);
	}

	inline static int32_t get_offset_of__sw_4() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ____sw_4)); }
	inline Stopwatch_t1957889703 * get__sw_4() const { return ____sw_4; }
	inline Stopwatch_t1957889703 ** get_address_of__sw_4() { return &____sw_4; }
	inline void set__sw_4(Stopwatch_t1957889703 * value)
	{
		____sw_4 = value;
		Il2CppCodeGenWriteBarrier((&____sw_4), value);
	}

	inline static int32_t get_offset_of__elapsedMilliseconds_5() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ____elapsedMilliseconds_5)); }
	inline int64_t get__elapsedMilliseconds_5() const { return ____elapsedMilliseconds_5; }
	inline int64_t* get_address_of__elapsedMilliseconds_5() { return &____elapsedMilliseconds_5; }
	inline void set__elapsedMilliseconds_5(int64_t value)
	{
		____elapsedMilliseconds_5 = value;
	}

	inline static int32_t get_offset_of__transactionDepth_6() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ____transactionDepth_6)); }
	inline int32_t get__transactionDepth_6() const { return ____transactionDepth_6; }
	inline int32_t* get_address_of__transactionDepth_6() { return &____transactionDepth_6; }
	inline void set__transactionDepth_6(int32_t value)
	{
		____transactionDepth_6 = value;
	}

	inline static int32_t get_offset_of__rand_7() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ____rand_7)); }
	inline Random_t1272380693 * get__rand_7() const { return ____rand_7; }
	inline Random_t1272380693 ** get_address_of__rand_7() { return &____rand_7; }
	inline void set__rand_7(Random_t1272380693 * value)
	{
		____rand_7 = value;
		Il2CppCodeGenWriteBarrier((&____rand_7), value);
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ___U3CHandleU3Ek__BackingField_8)); }
	inline IntPtr_t get_U3CHandleU3Ek__BackingField_8() const { return ___U3CHandleU3Ek__BackingField_8; }
	inline IntPtr_t* get_address_of_U3CHandleU3Ek__BackingField_8() { return &___U3CHandleU3Ek__BackingField_8; }
	inline void set_U3CHandleU3Ek__BackingField_8(IntPtr_t value)
	{
		___U3CHandleU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CDatabasePathU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ___U3CDatabasePathU3Ek__BackingField_10)); }
	inline String_t* get_U3CDatabasePathU3Ek__BackingField_10() const { return ___U3CDatabasePathU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CDatabasePathU3Ek__BackingField_10() { return &___U3CDatabasePathU3Ek__BackingField_10; }
	inline void set_U3CDatabasePathU3Ek__BackingField_10(String_t* value)
	{
		___U3CDatabasePathU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDatabasePathU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CTimeExecutionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ___U3CTimeExecutionU3Ek__BackingField_11)); }
	inline bool get_U3CTimeExecutionU3Ek__BackingField_11() const { return ___U3CTimeExecutionU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CTimeExecutionU3Ek__BackingField_11() { return &___U3CTimeExecutionU3Ek__BackingField_11; }
	inline void set_U3CTimeExecutionU3Ek__BackingField_11(bool value)
	{
		___U3CTimeExecutionU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTraceU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ___U3CTraceU3Ek__BackingField_12)); }
	inline bool get_U3CTraceU3Ek__BackingField_12() const { return ___U3CTraceU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CTraceU3Ek__BackingField_12() { return &___U3CTraceU3Ek__BackingField_12; }
	inline void set_U3CTraceU3Ek__BackingField_12(bool value)
	{
		___U3CTraceU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307, ___U3CStoreDateTimeAsTicksU3Ek__BackingField_13)); }
	inline bool get_U3CStoreDateTimeAsTicksU3Ek__BackingField_13() const { return ___U3CStoreDateTimeAsTicksU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_13() { return &___U3CStoreDateTimeAsTicksU3Ek__BackingField_13; }
	inline void set_U3CStoreDateTimeAsTicksU3Ek__BackingField_13(bool value)
	{
		___U3CStoreDateTimeAsTicksU3Ek__BackingField_13 = value;
	}
};

struct SQLiteConnection_t363421307_StaticFields
{
public:
	// System.IntPtr SQLite4Unity3d.SQLiteConnection::NullHandle
	IntPtr_t ___NullHandle_9;
	// System.Boolean SQLite4Unity3d.SQLiteConnection::_preserveDuringLinkMagic
	bool ____preserveDuringLinkMagic_14;
	// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.Int32> SQLite4Unity3d.SQLiteConnection::<>f__am$cache0
	Func_2_t3852355442 * ___U3CU3Ef__amU24cache0_15;
	// System.Func`2<SQLite4Unity3d.SQLiteConnection/IndexedColumn,System.String> SQLite4Unity3d.SQLiteConnection::<>f__am$cache1
	Func_2_t2030552290 * ___U3CU3Ef__amU24cache1_16;
	// System.Func`2<SQLite4Unity3d.TableMapping/Column,System.String> SQLite4Unity3d.SQLiteConnection::<>f__am$cache2
	Func_2_t2738487625 * ___U3CU3Ef__amU24cache2_17;

public:
	inline static int32_t get_offset_of_NullHandle_9() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307_StaticFields, ___NullHandle_9)); }
	inline IntPtr_t get_NullHandle_9() const { return ___NullHandle_9; }
	inline IntPtr_t* get_address_of_NullHandle_9() { return &___NullHandle_9; }
	inline void set_NullHandle_9(IntPtr_t value)
	{
		___NullHandle_9 = value;
	}

	inline static int32_t get_offset_of__preserveDuringLinkMagic_14() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307_StaticFields, ____preserveDuringLinkMagic_14)); }
	inline bool get__preserveDuringLinkMagic_14() const { return ____preserveDuringLinkMagic_14; }
	inline bool* get_address_of__preserveDuringLinkMagic_14() { return &____preserveDuringLinkMagic_14; }
	inline void set__preserveDuringLinkMagic_14(bool value)
	{
		____preserveDuringLinkMagic_14 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_15() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307_StaticFields, ___U3CU3Ef__amU24cache0_15)); }
	inline Func_2_t3852355442 * get_U3CU3Ef__amU24cache0_15() const { return ___U3CU3Ef__amU24cache0_15; }
	inline Func_2_t3852355442 ** get_address_of_U3CU3Ef__amU24cache0_15() { return &___U3CU3Ef__amU24cache0_15; }
	inline void set_U3CU3Ef__amU24cache0_15(Func_2_t3852355442 * value)
	{
		___U3CU3Ef__amU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_16() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307_StaticFields, ___U3CU3Ef__amU24cache1_16)); }
	inline Func_2_t2030552290 * get_U3CU3Ef__amU24cache1_16() const { return ___U3CU3Ef__amU24cache1_16; }
	inline Func_2_t2030552290 ** get_address_of_U3CU3Ef__amU24cache1_16() { return &___U3CU3Ef__amU24cache1_16; }
	inline void set_U3CU3Ef__amU24cache1_16(Func_2_t2030552290 * value)
	{
		___U3CU3Ef__amU24cache1_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_17() { return static_cast<int32_t>(offsetof(SQLiteConnection_t363421307_StaticFields, ___U3CU3Ef__amU24cache2_17)); }
	inline Func_2_t2738487625 * get_U3CU3Ef__amU24cache2_17() const { return ___U3CU3Ef__amU24cache2_17; }
	inline Func_2_t2738487625 ** get_address_of_U3CU3Ef__amU24cache2_17() { return &___U3CU3Ef__amU24cache2_17; }
	inline void set_U3CU3Ef__amU24cache2_17(Func_2_t2738487625 * value)
	{
		___U3CU3Ef__amU24cache2_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECONNECTION_T363421307_H
#ifndef UNIQUEATTRIBUTE_T234610737_H
#define UNIQUEATTRIBUTE_T234610737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.UniqueAttribute
struct  UniqueAttribute_t234610737  : public IndexedAttribute_t4180924783
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIQUEATTRIBUTE_T234610737_H
#ifndef CLIPTYPE_T3137199462_H
#define CLIPTYPE_T3137199462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType
struct  ClipType_t3137199462 
{
public:
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/ClipType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClipType_t3137199462, ___value___1)); }
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
#endif // CLIPTYPE_T3137199462_H
#ifndef SQLITECOMMAND_T775869909_H
#define SQLITECOMMAND_T775869909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteCommand
struct  SQLiteCommand_t775869909  : public RuntimeObject
{
public:
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.SQLiteCommand::_conn
	SQLiteConnection_t363421307 * ____conn_0;
	// System.Collections.Generic.List`1<SQLite4Unity3d.SQLiteCommand/Binding> SQLite4Unity3d.SQLiteCommand::_bindings
	List_1_t3328439054 * ____bindings_1;
	// System.String SQLite4Unity3d.SQLiteCommand::<CommandText>k__BackingField
	String_t* ___U3CCommandTextU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__conn_0() { return static_cast<int32_t>(offsetof(SQLiteCommand_t775869909, ____conn_0)); }
	inline SQLiteConnection_t363421307 * get__conn_0() const { return ____conn_0; }
	inline SQLiteConnection_t363421307 ** get_address_of__conn_0() { return &____conn_0; }
	inline void set__conn_0(SQLiteConnection_t363421307 * value)
	{
		____conn_0 = value;
		Il2CppCodeGenWriteBarrier((&____conn_0), value);
	}

	inline static int32_t get_offset_of__bindings_1() { return static_cast<int32_t>(offsetof(SQLiteCommand_t775869909, ____bindings_1)); }
	inline List_1_t3328439054 * get__bindings_1() const { return ____bindings_1; }
	inline List_1_t3328439054 ** get_address_of__bindings_1() { return &____bindings_1; }
	inline void set__bindings_1(List_1_t3328439054 * value)
	{
		____bindings_1 = value;
		Il2CppCodeGenWriteBarrier((&____bindings_1), value);
	}

	inline static int32_t get_offset_of_U3CCommandTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SQLiteCommand_t775869909, ___U3CCommandTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CCommandTextU3Ek__BackingField_2() const { return ___U3CCommandTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CCommandTextU3Ek__BackingField_2() { return &___U3CCommandTextU3Ek__BackingField_2; }
	inline void set_U3CCommandTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CCommandTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCommandTextU3Ek__BackingField_2), value);
	}
};

struct SQLiteCommand_t775869909_StaticFields
{
public:
	// System.IntPtr SQLite4Unity3d.SQLiteCommand::NegativePointer
	IntPtr_t ___NegativePointer_3;

public:
	inline static int32_t get_offset_of_NegativePointer_3() { return static_cast<int32_t>(offsetof(SQLiteCommand_t775869909_StaticFields, ___NegativePointer_3)); }
	inline IntPtr_t get_NegativePointer_3() const { return ___NegativePointer_3; }
	inline IntPtr_t* get_address_of_NegativePointer_3() { return &___NegativePointer_3; }
	inline void set_NegativePointer_3(IntPtr_t value)
	{
		___NegativePointer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITECOMMAND_T775869909_H
#ifndef PREPAREDSQLLITEINSERTCOMMAND_T2868954573_H
#define PREPAREDSQLLITEINSERTCOMMAND_T2868954573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.PreparedSqlLiteInsertCommand
struct  PreparedSqlLiteInsertCommand_t2868954573  : public RuntimeObject
{
public:
	// System.Boolean SQLite4Unity3d.PreparedSqlLiteInsertCommand::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_0;
	// SQLite4Unity3d.SQLiteConnection SQLite4Unity3d.PreparedSqlLiteInsertCommand::<Connection>k__BackingField
	SQLiteConnection_t363421307 * ___U3CConnectionU3Ek__BackingField_1;
	// System.String SQLite4Unity3d.PreparedSqlLiteInsertCommand::<CommandText>k__BackingField
	String_t* ___U3CCommandTextU3Ek__BackingField_2;
	// System.IntPtr SQLite4Unity3d.PreparedSqlLiteInsertCommand::<Statement>k__BackingField
	IntPtr_t ___U3CStatementU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t2868954573, ___U3CInitializedU3Ek__BackingField_0)); }
	inline bool get_U3CInitializedU3Ek__BackingField_0() const { return ___U3CInitializedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_0() { return &___U3CInitializedU3Ek__BackingField_0; }
	inline void set_U3CInitializedU3Ek__BackingField_0(bool value)
	{
		___U3CInitializedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t2868954573, ___U3CConnectionU3Ek__BackingField_1)); }
	inline SQLiteConnection_t363421307 * get_U3CConnectionU3Ek__BackingField_1() const { return ___U3CConnectionU3Ek__BackingField_1; }
	inline SQLiteConnection_t363421307 ** get_address_of_U3CConnectionU3Ek__BackingField_1() { return &___U3CConnectionU3Ek__BackingField_1; }
	inline void set_U3CConnectionU3Ek__BackingField_1(SQLiteConnection_t363421307 * value)
	{
		___U3CConnectionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConnectionU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CCommandTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t2868954573, ___U3CCommandTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CCommandTextU3Ek__BackingField_2() const { return ___U3CCommandTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CCommandTextU3Ek__BackingField_2() { return &___U3CCommandTextU3Ek__BackingField_2; }
	inline void set_U3CCommandTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CCommandTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCommandTextU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CStatementU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t2868954573, ___U3CStatementU3Ek__BackingField_3)); }
	inline IntPtr_t get_U3CStatementU3Ek__BackingField_3() const { return ___U3CStatementU3Ek__BackingField_3; }
	inline IntPtr_t* get_address_of_U3CStatementU3Ek__BackingField_3() { return &___U3CStatementU3Ek__BackingField_3; }
	inline void set_U3CStatementU3Ek__BackingField_3(IntPtr_t value)
	{
		___U3CStatementU3Ek__BackingField_3 = value;
	}
};

struct PreparedSqlLiteInsertCommand_t2868954573_StaticFields
{
public:
	// System.IntPtr SQLite4Unity3d.PreparedSqlLiteInsertCommand::NullStatement
	IntPtr_t ___NullStatement_4;

public:
	inline static int32_t get_offset_of_NullStatement_4() { return static_cast<int32_t>(offsetof(PreparedSqlLiteInsertCommand_t2868954573_StaticFields, ___NullStatement_4)); }
	inline IntPtr_t get_NullStatement_4() const { return ___NullStatement_4; }
	inline IntPtr_t* get_address_of_NullStatement_4() { return &___NullStatement_4; }
	inline void set_NullStatement_4(IntPtr_t value)
	{
		___NullStatement_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPAREDSQLLITEINSERTCOMMAND_T2868954573_H
#ifndef DATETIMEKIND_T2044846597_H
#define DATETIMEKIND_T2044846597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2044846597 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2044846597, ___value___1)); }
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
#endif // DATETIMEKIND_T2044846597_H
#ifndef EXTENDEDRESULT_T396092144_H
#define EXTENDEDRESULT_T396092144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLite3/ExtendedResult
struct  ExtendedResult_t396092144 
{
public:
	// System.Int32 SQLite4Unity3d.SQLite3/ExtendedResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExtendedResult_t396092144, ___value___1)); }
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
#endif // EXTENDEDRESULT_T396092144_H
#ifndef CONFIGOPTION_T3975792956_H
#define CONFIGOPTION_T3975792956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLite3/ConfigOption
struct  ConfigOption_t3975792956 
{
public:
	// System.Int32 SQLite4Unity3d.SQLite3/ConfigOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfigOption_t3975792956, ___value___1)); }
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
#endif // CONFIGOPTION_T3975792956_H
#ifndef COLTYPE_T1511198891_H
#define COLTYPE_T1511198891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLite3/ColType
struct  ColType_t1511198891 
{
public:
	// System.Int32 SQLite4Unity3d.SQLite3/ColType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColType_t1511198891, ___value___1)); }
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
#endif // COLTYPE_T1511198891_H
#ifndef VECTOR2DBOUNDS_T1770528815_H
#define VECTOR2DBOUNDS_T1770528815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.Vector2dBounds
struct  Vector2dBounds_t1770528815 
{
public:
	// Mapbox.Utils.Vector2d Mapbox.Utils.Vector2dBounds::SouthWest
	Vector2d_t2412030077  ___SouthWest_0;
	// Mapbox.Utils.Vector2d Mapbox.Utils.Vector2dBounds::NorthEast
	Vector2d_t2412030077  ___NorthEast_1;

public:
	inline static int32_t get_offset_of_SouthWest_0() { return static_cast<int32_t>(offsetof(Vector2dBounds_t1770528815, ___SouthWest_0)); }
	inline Vector2d_t2412030077  get_SouthWest_0() const { return ___SouthWest_0; }
	inline Vector2d_t2412030077 * get_address_of_SouthWest_0() { return &___SouthWest_0; }
	inline void set_SouthWest_0(Vector2d_t2412030077  value)
	{
		___SouthWest_0 = value;
	}

	inline static int32_t get_offset_of_NorthEast_1() { return static_cast<int32_t>(offsetof(Vector2dBounds_t1770528815, ___NorthEast_1)); }
	inline Vector2d_t2412030077  get_NorthEast_1() const { return ___NorthEast_1; }
	inline Vector2d_t2412030077 * get_address_of_NorthEast_1() { return &___NorthEast_1; }
	inline void set_NorthEast_1(Vector2d_t2412030077  value)
	{
		___NorthEast_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2DBOUNDS_T1770528815_H
#ifndef BBOXTOVECTOR2DBOUNDSCONVERTER_T3016122343_H
#define BBOXTOVECTOR2DBOUNDSCONVERTER_T3016122343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.JsonConverters.BboxToVector2dBoundsConverter
struct  BboxToVector2dBoundsConverter_t3016122343  : public CustomCreationConverter_1_t2746607235
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BBOXTOVECTOR2DBOUNDSCONVERTER_T3016122343_H
#ifndef RECTD_T2740685974_H
#define RECTD_T2740685974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.RectD
struct  RectD_t2740685974 
{
public:
	union
	{
		struct
		{
			// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Min>k__BackingField
			Vector2d_t2412030077  ___U3CMinU3Ek__BackingField_0;
			// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Max>k__BackingField
			Vector2d_t2412030077  ___U3CMaxU3Ek__BackingField_1;
			// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Size>k__BackingField
			Vector2d_t2412030077  ___U3CSizeU3Ek__BackingField_2;
			// Mapbox.Utils.Vector2d Mapbox.Utils.RectD::<Center>k__BackingField
			Vector2d_t2412030077  ___U3CCenterU3Ek__BackingField_3;
		};
		uint8_t RectD_t2740685974__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CMinU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RectD_t2740685974, ___U3CMinU3Ek__BackingField_0)); }
	inline Vector2d_t2412030077  get_U3CMinU3Ek__BackingField_0() const { return ___U3CMinU3Ek__BackingField_0; }
	inline Vector2d_t2412030077 * get_address_of_U3CMinU3Ek__BackingField_0() { return &___U3CMinU3Ek__BackingField_0; }
	inline void set_U3CMinU3Ek__BackingField_0(Vector2d_t2412030077  value)
	{
		___U3CMinU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RectD_t2740685974, ___U3CMaxU3Ek__BackingField_1)); }
	inline Vector2d_t2412030077  get_U3CMaxU3Ek__BackingField_1() const { return ___U3CMaxU3Ek__BackingField_1; }
	inline Vector2d_t2412030077 * get_address_of_U3CMaxU3Ek__BackingField_1() { return &___U3CMaxU3Ek__BackingField_1; }
	inline void set_U3CMaxU3Ek__BackingField_1(Vector2d_t2412030077  value)
	{
		___U3CMaxU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RectD_t2740685974, ___U3CSizeU3Ek__BackingField_2)); }
	inline Vector2d_t2412030077  get_U3CSizeU3Ek__BackingField_2() const { return ___U3CSizeU3Ek__BackingField_2; }
	inline Vector2d_t2412030077 * get_address_of_U3CSizeU3Ek__BackingField_2() { return &___U3CSizeU3Ek__BackingField_2; }
	inline void set_U3CSizeU3Ek__BackingField_2(Vector2d_t2412030077  value)
	{
		___U3CSizeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RectD_t2740685974, ___U3CCenterU3Ek__BackingField_3)); }
	inline Vector2d_t2412030077  get_U3CCenterU3Ek__BackingField_3() const { return ___U3CCenterU3Ek__BackingField_3; }
	inline Vector2d_t2412030077 * get_address_of_U3CCenterU3Ek__BackingField_3() { return &___U3CCenterU3Ek__BackingField_3; }
	inline void set_U3CCenterU3Ek__BackingField_3(Vector2d_t2412030077  value)
	{
		___U3CCenterU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTD_T2740685974_H
#ifndef LONLATTOVECTOR2DCONVERTER_T4008054295_H
#define LONLATTOVECTOR2DCONVERTER_T4008054295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.JsonConverters.LonLatToVector2dConverter
struct  LonLatToVector2dConverter_t4008054295  : public CustomCreationConverter_1_t3388108497
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONLATTOVECTOR2DCONVERTER_T4008054295_H
#ifndef RESULT_T2258912984_H
#define RESULT_T2258912984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLite3/Result
struct  Result_t2258912984 
{
public:
	// System.Int32 SQLite4Unity3d.SQLite3/Result::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Result_t2258912984, ___value___1)); }
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
#endif // RESULT_T2258912984_H
#ifndef POLYLINETOVECTOR2DLISTCONVERTER_T3158638371_H
#define POLYLINETOVECTOR2DLISTCONVERTER_T3158638371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Utils.JsonConverters.PolylineToVector2dListConverter
struct  PolylineToVector2dListConverter_t3158638371  : public CustomCreationConverter_1_t3295007813
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYLINETOVECTOR2DLISTCONVERTER_T3158638371_H
#ifndef DATETIME_T3522192114_H
#define DATETIME_T3522192114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3522192114 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1646942302  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3522192114, ___ticks_0)); }
	inline TimeSpan_t1646942302  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t1646942302 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t1646942302  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3522192114, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3522192114_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3522192114  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3522192114  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t2565337470* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t2565337470* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t2565337470* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t2565337470* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t2565337470* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t2565337470* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t2565337470* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t4243112622* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t4243112622* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3522192114  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3522192114 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3522192114  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___MinValue_3)); }
	inline DateTime_t3522192114  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3522192114 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3522192114  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t2565337470* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t2565337470** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t2565337470* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t2565337470* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t2565337470** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t2565337470* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t2565337470* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t2565337470** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t2565337470* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t2565337470* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t2565337470** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t2565337470* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t2565337470* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t2565337470** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t2565337470* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t2565337470* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t2565337470** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t2565337470* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t2565337470* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t2565337470** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t2565337470* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t4243112622* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t4243112622** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t4243112622* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t4243112622* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t4243112622** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t4243112622* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3522192114_StaticFields, ___last_now_14)); }
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
#endif // DATETIME_T3522192114_H
#ifndef POLYNODE_T316195436_H
#define POLYNODE_T316195436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode
struct  PolyNode_t316195436  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Parent
	PolyNode_t316195436 * ___m_Parent_0;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_polygon
	List_1_t3476533892 * ___m_polygon_1;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Index
	int32_t ___m_Index_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/JoinType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_jointype
	int32_t ___m_jointype_3;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EndType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_endtype
	int32_t ___m_endtype_4;
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::m_Childs
	List_1_t223094752 * ___m_Childs_5;
	// System.Boolean Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode::<IsOpen>k__BackingField
	bool ___U3CIsOpenU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Parent_0() { return static_cast<int32_t>(offsetof(PolyNode_t316195436, ___m_Parent_0)); }
	inline PolyNode_t316195436 * get_m_Parent_0() const { return ___m_Parent_0; }
	inline PolyNode_t316195436 ** get_address_of_m_Parent_0() { return &___m_Parent_0; }
	inline void set_m_Parent_0(PolyNode_t316195436 * value)
	{
		___m_Parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Parent_0), value);
	}

	inline static int32_t get_offset_of_m_polygon_1() { return static_cast<int32_t>(offsetof(PolyNode_t316195436, ___m_polygon_1)); }
	inline List_1_t3476533892 * get_m_polygon_1() const { return ___m_polygon_1; }
	inline List_1_t3476533892 ** get_address_of_m_polygon_1() { return &___m_polygon_1; }
	inline void set_m_polygon_1(List_1_t3476533892 * value)
	{
		___m_polygon_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_polygon_1), value);
	}

	inline static int32_t get_offset_of_m_Index_2() { return static_cast<int32_t>(offsetof(PolyNode_t316195436, ___m_Index_2)); }
	inline int32_t get_m_Index_2() const { return ___m_Index_2; }
	inline int32_t* get_address_of_m_Index_2() { return &___m_Index_2; }
	inline void set_m_Index_2(int32_t value)
	{
		___m_Index_2 = value;
	}

	inline static int32_t get_offset_of_m_jointype_3() { return static_cast<int32_t>(offsetof(PolyNode_t316195436, ___m_jointype_3)); }
	inline int32_t get_m_jointype_3() const { return ___m_jointype_3; }
	inline int32_t* get_address_of_m_jointype_3() { return &___m_jointype_3; }
	inline void set_m_jointype_3(int32_t value)
	{
		___m_jointype_3 = value;
	}

	inline static int32_t get_offset_of_m_endtype_4() { return static_cast<int32_t>(offsetof(PolyNode_t316195436, ___m_endtype_4)); }
	inline int32_t get_m_endtype_4() const { return ___m_endtype_4; }
	inline int32_t* get_address_of_m_endtype_4() { return &___m_endtype_4; }
	inline void set_m_endtype_4(int32_t value)
	{
		___m_endtype_4 = value;
	}

	inline static int32_t get_offset_of_m_Childs_5() { return static_cast<int32_t>(offsetof(PolyNode_t316195436, ___m_Childs_5)); }
	inline List_1_t223094752 * get_m_Childs_5() const { return ___m_Childs_5; }
	inline List_1_t223094752 ** get_address_of_m_Childs_5() { return &___m_Childs_5; }
	inline void set_m_Childs_5(List_1_t223094752 * value)
	{
		___m_Childs_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Childs_5), value);
	}

	inline static int32_t get_offset_of_U3CIsOpenU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PolyNode_t316195436, ___U3CIsOpenU3Ek__BackingField_6)); }
	inline bool get_U3CIsOpenU3Ek__BackingField_6() const { return ___U3CIsOpenU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsOpenU3Ek__BackingField_6() { return &___U3CIsOpenU3Ek__BackingField_6; }
	inline void set_U3CIsOpenU3Ek__BackingField_6(bool value)
	{
		___U3CIsOpenU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYNODE_T316195436_H
#ifndef SQLITEEXCEPTION_T57950495_H
#define SQLITEEXCEPTION_T57950495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.SQLiteException
struct  SQLiteException_t57950495  : public Exception_t368868580
{
public:
	// SQLite4Unity3d.SQLite3/Result SQLite4Unity3d.SQLiteException::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SQLiteException_t57950495, ___U3CResultU3Ek__BackingField_11)); }
	inline int32_t get_U3CResultU3Ek__BackingField_11() const { return ___U3CResultU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CResultU3Ek__BackingField_11() { return &___U3CResultU3Ek__BackingField_11; }
	inline void set_U3CResultU3Ek__BackingField_11(int32_t value)
	{
		___U3CResultU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLITEEXCEPTION_T57950495_H
#ifndef TEDGE_T941134437_H
#define TEDGE_T941134437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge
struct  TEdge_t941134437  : public RuntimeObject
{
public:
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Bot
	IntPoint_t3569634576  ___Bot_0;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Curr
	IntPoint_t3569634576  ___Curr_1;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Top
	IntPoint_t3569634576  ___Top_2;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/IntPoint Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Delta
	IntPoint_t3569634576  ___Delta_3;
	// System.Double Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Dx
	double ___Dx_4;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyType Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PolyTyp
	int32_t ___PolyTyp_5;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/EdgeSide Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Side
	int32_t ___Side_6;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindDelta
	int32_t ___WindDelta_7;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindCnt
	int32_t ___WindCnt_8;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::WindCnt2
	int32_t ___WindCnt2_9;
	// System.Int32 Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::OutIdx
	int32_t ___OutIdx_10;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Next
	TEdge_t941134437 * ___Next_11;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::Prev
	TEdge_t941134437 * ___Prev_12;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInLML
	TEdge_t941134437 * ___NextInLML_13;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInAEL
	TEdge_t941134437 * ___NextInAEL_14;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PrevInAEL
	TEdge_t941134437 * ___PrevInAEL_15;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::NextInSEL
	TEdge_t941134437 * ___NextInSEL_16;
	// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/TEdge::PrevInSEL
	TEdge_t941134437 * ___PrevInSEL_17;

public:
	inline static int32_t get_offset_of_Bot_0() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___Bot_0)); }
	inline IntPoint_t3569634576  get_Bot_0() const { return ___Bot_0; }
	inline IntPoint_t3569634576 * get_address_of_Bot_0() { return &___Bot_0; }
	inline void set_Bot_0(IntPoint_t3569634576  value)
	{
		___Bot_0 = value;
	}

	inline static int32_t get_offset_of_Curr_1() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___Curr_1)); }
	inline IntPoint_t3569634576  get_Curr_1() const { return ___Curr_1; }
	inline IntPoint_t3569634576 * get_address_of_Curr_1() { return &___Curr_1; }
	inline void set_Curr_1(IntPoint_t3569634576  value)
	{
		___Curr_1 = value;
	}

	inline static int32_t get_offset_of_Top_2() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___Top_2)); }
	inline IntPoint_t3569634576  get_Top_2() const { return ___Top_2; }
	inline IntPoint_t3569634576 * get_address_of_Top_2() { return &___Top_2; }
	inline void set_Top_2(IntPoint_t3569634576  value)
	{
		___Top_2 = value;
	}

	inline static int32_t get_offset_of_Delta_3() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___Delta_3)); }
	inline IntPoint_t3569634576  get_Delta_3() const { return ___Delta_3; }
	inline IntPoint_t3569634576 * get_address_of_Delta_3() { return &___Delta_3; }
	inline void set_Delta_3(IntPoint_t3569634576  value)
	{
		___Delta_3 = value;
	}

	inline static int32_t get_offset_of_Dx_4() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___Dx_4)); }
	inline double get_Dx_4() const { return ___Dx_4; }
	inline double* get_address_of_Dx_4() { return &___Dx_4; }
	inline void set_Dx_4(double value)
	{
		___Dx_4 = value;
	}

	inline static int32_t get_offset_of_PolyTyp_5() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___PolyTyp_5)); }
	inline int32_t get_PolyTyp_5() const { return ___PolyTyp_5; }
	inline int32_t* get_address_of_PolyTyp_5() { return &___PolyTyp_5; }
	inline void set_PolyTyp_5(int32_t value)
	{
		___PolyTyp_5 = value;
	}

	inline static int32_t get_offset_of_Side_6() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___Side_6)); }
	inline int32_t get_Side_6() const { return ___Side_6; }
	inline int32_t* get_address_of_Side_6() { return &___Side_6; }
	inline void set_Side_6(int32_t value)
	{
		___Side_6 = value;
	}

	inline static int32_t get_offset_of_WindDelta_7() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___WindDelta_7)); }
	inline int32_t get_WindDelta_7() const { return ___WindDelta_7; }
	inline int32_t* get_address_of_WindDelta_7() { return &___WindDelta_7; }
	inline void set_WindDelta_7(int32_t value)
	{
		___WindDelta_7 = value;
	}

	inline static int32_t get_offset_of_WindCnt_8() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___WindCnt_8)); }
	inline int32_t get_WindCnt_8() const { return ___WindCnt_8; }
	inline int32_t* get_address_of_WindCnt_8() { return &___WindCnt_8; }
	inline void set_WindCnt_8(int32_t value)
	{
		___WindCnt_8 = value;
	}

	inline static int32_t get_offset_of_WindCnt2_9() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___WindCnt2_9)); }
	inline int32_t get_WindCnt2_9() const { return ___WindCnt2_9; }
	inline int32_t* get_address_of_WindCnt2_9() { return &___WindCnt2_9; }
	inline void set_WindCnt2_9(int32_t value)
	{
		___WindCnt2_9 = value;
	}

	inline static int32_t get_offset_of_OutIdx_10() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___OutIdx_10)); }
	inline int32_t get_OutIdx_10() const { return ___OutIdx_10; }
	inline int32_t* get_address_of_OutIdx_10() { return &___OutIdx_10; }
	inline void set_OutIdx_10(int32_t value)
	{
		___OutIdx_10 = value;
	}

	inline static int32_t get_offset_of_Next_11() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___Next_11)); }
	inline TEdge_t941134437 * get_Next_11() const { return ___Next_11; }
	inline TEdge_t941134437 ** get_address_of_Next_11() { return &___Next_11; }
	inline void set_Next_11(TEdge_t941134437 * value)
	{
		___Next_11 = value;
		Il2CppCodeGenWriteBarrier((&___Next_11), value);
	}

	inline static int32_t get_offset_of_Prev_12() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___Prev_12)); }
	inline TEdge_t941134437 * get_Prev_12() const { return ___Prev_12; }
	inline TEdge_t941134437 ** get_address_of_Prev_12() { return &___Prev_12; }
	inline void set_Prev_12(TEdge_t941134437 * value)
	{
		___Prev_12 = value;
		Il2CppCodeGenWriteBarrier((&___Prev_12), value);
	}

	inline static int32_t get_offset_of_NextInLML_13() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___NextInLML_13)); }
	inline TEdge_t941134437 * get_NextInLML_13() const { return ___NextInLML_13; }
	inline TEdge_t941134437 ** get_address_of_NextInLML_13() { return &___NextInLML_13; }
	inline void set_NextInLML_13(TEdge_t941134437 * value)
	{
		___NextInLML_13 = value;
		Il2CppCodeGenWriteBarrier((&___NextInLML_13), value);
	}

	inline static int32_t get_offset_of_NextInAEL_14() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___NextInAEL_14)); }
	inline TEdge_t941134437 * get_NextInAEL_14() const { return ___NextInAEL_14; }
	inline TEdge_t941134437 ** get_address_of_NextInAEL_14() { return &___NextInAEL_14; }
	inline void set_NextInAEL_14(TEdge_t941134437 * value)
	{
		___NextInAEL_14 = value;
		Il2CppCodeGenWriteBarrier((&___NextInAEL_14), value);
	}

	inline static int32_t get_offset_of_PrevInAEL_15() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___PrevInAEL_15)); }
	inline TEdge_t941134437 * get_PrevInAEL_15() const { return ___PrevInAEL_15; }
	inline TEdge_t941134437 ** get_address_of_PrevInAEL_15() { return &___PrevInAEL_15; }
	inline void set_PrevInAEL_15(TEdge_t941134437 * value)
	{
		___PrevInAEL_15 = value;
		Il2CppCodeGenWriteBarrier((&___PrevInAEL_15), value);
	}

	inline static int32_t get_offset_of_NextInSEL_16() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___NextInSEL_16)); }
	inline TEdge_t941134437 * get_NextInSEL_16() const { return ___NextInSEL_16; }
	inline TEdge_t941134437 ** get_address_of_NextInSEL_16() { return &___NextInSEL_16; }
	inline void set_NextInSEL_16(TEdge_t941134437 * value)
	{
		___NextInSEL_16 = value;
		Il2CppCodeGenWriteBarrier((&___NextInSEL_16), value);
	}

	inline static int32_t get_offset_of_PrevInSEL_17() { return static_cast<int32_t>(offsetof(TEdge_t941134437, ___PrevInSEL_17)); }
	inline TEdge_t941134437 * get_PrevInSEL_17() const { return ___PrevInSEL_17; }
	inline TEdge_t941134437 ** get_address_of_PrevInSEL_17() { return &___PrevInSEL_17; }
	inline void set_PrevInSEL_17(TEdge_t941134437 * value)
	{
		___PrevInSEL_17 = value;
		Il2CppCodeGenWriteBarrier((&___PrevInSEL_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEDGE_T941134437_H
#ifndef POLYTREE_T2349856017_H
#define POLYTREE_T2349856017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree
struct  PolyTree_t2349856017  : public PolyNode_t316195436
{
public:
	// System.Collections.Generic.List`1<Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyNode> Mapbox.VectorTile.Geometry.InteralClipperLib.InternalClipper/PolyTree::m_AllPolys
	List_1_t223094752 * ___m_AllPolys_7;

public:
	inline static int32_t get_offset_of_m_AllPolys_7() { return static_cast<int32_t>(offsetof(PolyTree_t2349856017, ___m_AllPolys_7)); }
	inline List_1_t223094752 * get_m_AllPolys_7() const { return ___m_AllPolys_7; }
	inline List_1_t223094752 ** get_address_of_m_AllPolys_7() { return &___m_AllPolys_7; }
	inline void set_m_AllPolys_7(List_1_t223094752 * value)
	{
		___m_AllPolys_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AllPolys_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLYTREE_T2349856017_H
#ifndef NULLABLE_1_T2603771240_H
#define NULLABLE_1_T2603771240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t2603771240 
{
public:
	// T System.Nullable`1::value
	DateTime_t3522192114  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2603771240, ___value_0)); }
	inline DateTime_t3522192114  get_value_0() const { return ___value_0; }
	inline DateTime_t3522192114 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3522192114  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2603771240, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2603771240_H
#ifndef NOTNULLCONSTRAINTVIOLATIONEXCEPTION_T1159713205_H
#define NOTNULLCONSTRAINTVIOLATIONEXCEPTION_T1159713205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite4Unity3d.NotNullConstraintViolationException
struct  NotNullConstraintViolationException_t1159713205  : public SQLiteException_t57950495
{
public:
	// System.Collections.Generic.IEnumerable`1<SQLite4Unity3d.TableMapping/Column> SQLite4Unity3d.NotNullConstraintViolationException::<Columns>k__BackingField
	RuntimeObject* ___U3CColumnsU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CColumnsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NotNullConstraintViolationException_t1159713205, ___U3CColumnsU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CColumnsU3Ek__BackingField_12() const { return ___U3CColumnsU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CColumnsU3Ek__BackingField_12() { return &___U3CColumnsU3Ek__BackingField_12; }
	inline void set_U3CColumnsU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CColumnsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CColumnsU3Ek__BackingField_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTNULLCONSTRAINTVIOLATIONEXCEPTION_T1159713205_H
#ifndef FILESOURCE_T3240410936_H
#define FILESOURCE_T3240410936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.FileSource
struct  FileSource_t3240410936  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Mapbox.Platform.IAsyncRequest,System.Int32> Mapbox.Platform.FileSource::_requests
	Dictionary_2_t4130429761 * ____requests_0;
	// System.String Mapbox.Platform.FileSource::_accessToken
	String_t* ____accessToken_1;
	// System.Object Mapbox.Platform.FileSource::_lock
	RuntimeObject * ____lock_2;
	// System.Nullable`1<System.Int32> Mapbox.Platform.FileSource::XRateLimitInterval
	Nullable_1_t660714893  ___XRateLimitInterval_3;
	// System.Nullable`1<System.Int64> Mapbox.Platform.FileSource::XRateLimitLimit
	Nullable_1_t3575497134  ___XRateLimitLimit_4;
	// System.Nullable`1<System.DateTime> Mapbox.Platform.FileSource::XRateLimitReset
	Nullable_1_t2603771240  ___XRateLimitReset_5;

public:
	inline static int32_t get_offset_of__requests_0() { return static_cast<int32_t>(offsetof(FileSource_t3240410936, ____requests_0)); }
	inline Dictionary_2_t4130429761 * get__requests_0() const { return ____requests_0; }
	inline Dictionary_2_t4130429761 ** get_address_of__requests_0() { return &____requests_0; }
	inline void set__requests_0(Dictionary_2_t4130429761 * value)
	{
		____requests_0 = value;
		Il2CppCodeGenWriteBarrier((&____requests_0), value);
	}

	inline static int32_t get_offset_of__accessToken_1() { return static_cast<int32_t>(offsetof(FileSource_t3240410936, ____accessToken_1)); }
	inline String_t* get__accessToken_1() const { return ____accessToken_1; }
	inline String_t** get_address_of__accessToken_1() { return &____accessToken_1; }
	inline void set__accessToken_1(String_t* value)
	{
		____accessToken_1 = value;
		Il2CppCodeGenWriteBarrier((&____accessToken_1), value);
	}

	inline static int32_t get_offset_of__lock_2() { return static_cast<int32_t>(offsetof(FileSource_t3240410936, ____lock_2)); }
	inline RuntimeObject * get__lock_2() const { return ____lock_2; }
	inline RuntimeObject ** get_address_of__lock_2() { return &____lock_2; }
	inline void set__lock_2(RuntimeObject * value)
	{
		____lock_2 = value;
		Il2CppCodeGenWriteBarrier((&____lock_2), value);
	}

	inline static int32_t get_offset_of_XRateLimitInterval_3() { return static_cast<int32_t>(offsetof(FileSource_t3240410936, ___XRateLimitInterval_3)); }
	inline Nullable_1_t660714893  get_XRateLimitInterval_3() const { return ___XRateLimitInterval_3; }
	inline Nullable_1_t660714893 * get_address_of_XRateLimitInterval_3() { return &___XRateLimitInterval_3; }
	inline void set_XRateLimitInterval_3(Nullable_1_t660714893  value)
	{
		___XRateLimitInterval_3 = value;
	}

	inline static int32_t get_offset_of_XRateLimitLimit_4() { return static_cast<int32_t>(offsetof(FileSource_t3240410936, ___XRateLimitLimit_4)); }
	inline Nullable_1_t3575497134  get_XRateLimitLimit_4() const { return ___XRateLimitLimit_4; }
	inline Nullable_1_t3575497134 * get_address_of_XRateLimitLimit_4() { return &___XRateLimitLimit_4; }
	inline void set_XRateLimitLimit_4(Nullable_1_t3575497134  value)
	{
		___XRateLimitLimit_4 = value;
	}

	inline static int32_t get_offset_of_XRateLimitReset_5() { return static_cast<int32_t>(offsetof(FileSource_t3240410936, ___XRateLimitReset_5)); }
	inline Nullable_1_t2603771240  get_XRateLimitReset_5() const { return ___XRateLimitReset_5; }
	inline Nullable_1_t2603771240 * get_address_of_XRateLimitReset_5() { return &___XRateLimitReset_5; }
	inline void set_XRateLimitReset_5(Nullable_1_t2603771240  value)
	{
		___XRateLimitReset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESOURCE_T3240410936_H
#ifndef RESPONSE_T3116104221_H
#define RESPONSE_T3116104221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Platform.Response
struct  Response_t3116104221  : public RuntimeObject
{
public:
	// Mapbox.Platform.IAsyncRequest Mapbox.Platform.Response::<Request>k__BackingField
	RuntimeObject* ___U3CRequestU3Ek__BackingField_0;
	// System.Boolean Mapbox.Platform.Response::LoadedFromCache
	bool ___LoadedFromCache_1;
	// System.String Mapbox.Platform.Response::RequestUrl
	String_t* ___RequestUrl_2;
	// System.Nullable`1<System.Int32> Mapbox.Platform.Response::StatusCode
	Nullable_1_t660714893  ___StatusCode_3;
	// System.String Mapbox.Platform.Response::ContentType
	String_t* ___ContentType_4;
	// System.Nullable`1<System.Int32> Mapbox.Platform.Response::XRateLimitInterval
	Nullable_1_t660714893  ___XRateLimitInterval_5;
	// System.Nullable`1<System.Int64> Mapbox.Platform.Response::XRateLimitLimit
	Nullable_1_t3575497134  ___XRateLimitLimit_6;
	// System.Nullable`1<System.DateTime> Mapbox.Platform.Response::XRateLimitReset
	Nullable_1_t2603771240  ___XRateLimitReset_7;
	// System.Collections.Generic.List`1<System.Exception> Mapbox.Platform.Response::_exceptions
	List_1_t275767896 * ____exceptions_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Mapbox.Platform.Response::Headers
	Dictionary_2_t3603125510 * ___Headers_9;
	// System.Byte[] Mapbox.Platform.Response::Data
	ByteU5BU5D_t2085045523* ___Data_10;

public:
	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___U3CRequestU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CRequestU3Ek__BackingField_0() const { return ___U3CRequestU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CRequestU3Ek__BackingField_0() { return &___U3CRequestU3Ek__BackingField_0; }
	inline void set_U3CRequestU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CRequestU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRequestU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_LoadedFromCache_1() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___LoadedFromCache_1)); }
	inline bool get_LoadedFromCache_1() const { return ___LoadedFromCache_1; }
	inline bool* get_address_of_LoadedFromCache_1() { return &___LoadedFromCache_1; }
	inline void set_LoadedFromCache_1(bool value)
	{
		___LoadedFromCache_1 = value;
	}

	inline static int32_t get_offset_of_RequestUrl_2() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___RequestUrl_2)); }
	inline String_t* get_RequestUrl_2() const { return ___RequestUrl_2; }
	inline String_t** get_address_of_RequestUrl_2() { return &___RequestUrl_2; }
	inline void set_RequestUrl_2(String_t* value)
	{
		___RequestUrl_2 = value;
		Il2CppCodeGenWriteBarrier((&___RequestUrl_2), value);
	}

	inline static int32_t get_offset_of_StatusCode_3() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___StatusCode_3)); }
	inline Nullable_1_t660714893  get_StatusCode_3() const { return ___StatusCode_3; }
	inline Nullable_1_t660714893 * get_address_of_StatusCode_3() { return &___StatusCode_3; }
	inline void set_StatusCode_3(Nullable_1_t660714893  value)
	{
		___StatusCode_3 = value;
	}

	inline static int32_t get_offset_of_ContentType_4() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___ContentType_4)); }
	inline String_t* get_ContentType_4() const { return ___ContentType_4; }
	inline String_t** get_address_of_ContentType_4() { return &___ContentType_4; }
	inline void set_ContentType_4(String_t* value)
	{
		___ContentType_4 = value;
		Il2CppCodeGenWriteBarrier((&___ContentType_4), value);
	}

	inline static int32_t get_offset_of_XRateLimitInterval_5() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___XRateLimitInterval_5)); }
	inline Nullable_1_t660714893  get_XRateLimitInterval_5() const { return ___XRateLimitInterval_5; }
	inline Nullable_1_t660714893 * get_address_of_XRateLimitInterval_5() { return &___XRateLimitInterval_5; }
	inline void set_XRateLimitInterval_5(Nullable_1_t660714893  value)
	{
		___XRateLimitInterval_5 = value;
	}

	inline static int32_t get_offset_of_XRateLimitLimit_6() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___XRateLimitLimit_6)); }
	inline Nullable_1_t3575497134  get_XRateLimitLimit_6() const { return ___XRateLimitLimit_6; }
	inline Nullable_1_t3575497134 * get_address_of_XRateLimitLimit_6() { return &___XRateLimitLimit_6; }
	inline void set_XRateLimitLimit_6(Nullable_1_t3575497134  value)
	{
		___XRateLimitLimit_6 = value;
	}

	inline static int32_t get_offset_of_XRateLimitReset_7() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___XRateLimitReset_7)); }
	inline Nullable_1_t2603771240  get_XRateLimitReset_7() const { return ___XRateLimitReset_7; }
	inline Nullable_1_t2603771240 * get_address_of_XRateLimitReset_7() { return &___XRateLimitReset_7; }
	inline void set_XRateLimitReset_7(Nullable_1_t2603771240  value)
	{
		___XRateLimitReset_7 = value;
	}

	inline static int32_t get_offset_of__exceptions_8() { return static_cast<int32_t>(offsetof(Response_t3116104221, ____exceptions_8)); }
	inline List_1_t275767896 * get__exceptions_8() const { return ____exceptions_8; }
	inline List_1_t275767896 ** get_address_of__exceptions_8() { return &____exceptions_8; }
	inline void set__exceptions_8(List_1_t275767896 * value)
	{
		____exceptions_8 = value;
		Il2CppCodeGenWriteBarrier((&____exceptions_8), value);
	}

	inline static int32_t get_offset_of_Headers_9() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___Headers_9)); }
	inline Dictionary_2_t3603125510 * get_Headers_9() const { return ___Headers_9; }
	inline Dictionary_2_t3603125510 ** get_address_of_Headers_9() { return &___Headers_9; }
	inline void set_Headers_9(Dictionary_2_t3603125510 * value)
	{
		___Headers_9 = value;
		Il2CppCodeGenWriteBarrier((&___Headers_9), value);
	}

	inline static int32_t get_offset_of_Data_10() { return static_cast<int32_t>(offsetof(Response_t3116104221, ___Data_10)); }
	inline ByteU5BU5D_t2085045523* get_Data_10() const { return ___Data_10; }
	inline ByteU5BU5D_t2085045523** get_address_of_Data_10() { return &___Data_10; }
	inline void set_Data_10(ByteU5BU5D_t2085045523* value)
	{
		___Data_10 = value;
		Il2CppCodeGenWriteBarrier((&___Data_10), value);
	}
};

struct Response_t3116104221_StaticFields
{
public:
	// System.Func`2<System.Exception,System.String> Mapbox.Platform.Response::<>f__am$cache0
	Func_2_t3844551957 * ___U3CU3Ef__amU24cache0_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(Response_t3116104221_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t3844551957 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t3844551957 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t3844551957 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSE_T3116104221_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3100 = { sizeof (MemoryCache_t943603236), -1, sizeof(MemoryCache_t943603236_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3100[4] = 
{
	MemoryCache_t943603236::get_offset_of__maxCacheSize_0(),
	MemoryCache_t943603236::get_offset_of__lock_1(),
	MemoryCache_t943603236::get_offset_of__cachedResponses_2(),
	MemoryCache_t943603236_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3101 = { sizeof (CacheItem_t2723714911)+ sizeof (RuntimeObject), sizeof(CacheItem_t2723714911_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3101[2] = 
{
	CacheItem_t2723714911::get_offset_of_Timestamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CacheItem_t2723714911::get_offset_of_Data_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3102 = { sizeof (U3CClearU3Ec__AnonStorey0_t1028582550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3102[1] = 
{
	U3CClearU3Ec__AnonStorey0_t1028582550::get_offset_of_mapId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3103 = { sizeof (FileSource_t3240410936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3103[6] = 
{
	FileSource_t3240410936::get_offset_of__requests_0(),
	FileSource_t3240410936::get_offset_of__accessToken_1(),
	FileSource_t3240410936::get_offset_of__lock_2(),
	FileSource_t3240410936::get_offset_of_XRateLimitInterval_3(),
	FileSource_t3240410936::get_offset_of_XRateLimitLimit_4(),
	FileSource_t3240410936::get_offset_of_XRateLimitReset_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3104 = { sizeof (U3CproxyResponseU3Ec__AnonStorey1_t2543089549), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3104[2] = 
{
	U3CproxyResponseU3Ec__AnonStorey1_t2543089549::get_offset_of_callback_0(),
	U3CproxyResponseU3Ec__AnonStorey1_t2543089549::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3105 = { sizeof (U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3105[5] = 
{
	U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784::get_offset_of_U24locvar0_0(),
	U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784::get_offset_of_U24this_1(),
	U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784::get_offset_of_U24current_2(),
	U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784::get_offset_of_U24disposing_3(),
	U3CWaitForAllRequestsU3Ec__Iterator0_t1808505784::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3106 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3107 = { sizeof (IAsyncRequestFactory_t2188610507), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3108 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3109 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3110 = { sizeof (MbTilesDb_t3038525224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3110[6] = 
{
	MbTilesDb_t3038525224::get_offset_of__disposed_0(),
	MbTilesDb_t3038525224::get_offset_of__dbPath_1(),
	MbTilesDb_t3038525224::get_offset_of__sqlite_2(),
	MbTilesDb_t3038525224::get_offset_of__maxTileCount_3(),
	0,
	MbTilesDb_t3038525224::get_offset_of__pruneCacheCounter_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3111 = { sizeof (U3CGetTileU3Ec__AnonStorey0_t3757461847), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3111[1] = 
{
	U3CGetTileU3Ec__AnonStorey0_t3757461847::get_offset_of_tileId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3112 = { sizeof (U3CTileExistsU3Ec__AnonStorey1_t1072699741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3112[1] = 
{
	U3CTileExistsU3Ec__AnonStorey1_t1072699741::get_offset_of_tileId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3113 = { sizeof (metadata_t1501991648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3113[2] = 
{
	metadata_t1501991648::get_offset_of_U3CnameU3Ek__BackingField_0(),
	metadata_t1501991648::get_offset_of_U3CvalueU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3114 = { sizeof (MetaDataRequired_t2054535199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3114[5] = 
{
	MetaDataRequired_t2054535199::get_offset_of_U3CTilesetNameU3Ek__BackingField_0(),
	MetaDataRequired_t2054535199::get_offset_of_U3CTypeU3Ek__BackingField_1(),
	MetaDataRequired_t2054535199::get_offset_of_U3CVersionU3Ek__BackingField_2(),
	MetaDataRequired_t2054535199::get_offset_of_U3CDescriptionU3Ek__BackingField_3(),
	MetaDataRequired_t2054535199::get_offset_of_U3CFormatU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3115 = { sizeof (tiles_t3504664305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3115[5] = 
{
	tiles_t3504664305::get_offset_of_U3Czoom_levelU3Ek__BackingField_0(),
	tiles_t3504664305::get_offset_of_U3Ctile_columnU3Ek__BackingField_1(),
	tiles_t3504664305::get_offset_of_U3Ctile_rowU3Ek__BackingField_2(),
	tiles_t3504664305::get_offset_of_U3Ctile_dataU3Ek__BackingField_3(),
	tiles_t3504664305::get_offset_of_U3CtimestampU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3116 = { sizeof (Resource_t2483720500), -1, sizeof(Resource_t2483720500_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3116[4] = 
{
	Resource_t2483720500_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	Resource_t2483720500_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
	Resource_t2483720500_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_2(),
	Resource_t2483720500_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3117 = { sizeof (Response_t3116104221), -1, sizeof(Response_t3116104221_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3117[12] = 
{
	Response_t3116104221::get_offset_of_U3CRequestU3Ek__BackingField_0(),
	Response_t3116104221::get_offset_of_LoadedFromCache_1(),
	Response_t3116104221::get_offset_of_RequestUrl_2(),
	Response_t3116104221::get_offset_of_StatusCode_3(),
	Response_t3116104221::get_offset_of_ContentType_4(),
	Response_t3116104221::get_offset_of_XRateLimitInterval_5(),
	Response_t3116104221::get_offset_of_XRateLimitLimit_6(),
	Response_t3116104221::get_offset_of_XRateLimitReset_7(),
	Response_t3116104221::get_offset_of__exceptions_8(),
	Response_t3116104221::get_offset_of_Headers_9(),
	Response_t3116104221::get_offset_of_Data_10(),
	Response_t3116104221_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3118 = { sizeof (SQLiteException_t57950495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3118[1] = 
{
	SQLiteException_t57950495::get_offset_of_U3CResultU3Ek__BackingField_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3119 = { sizeof (NotNullConstraintViolationException_t1159713205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3119[1] = 
{
	NotNullConstraintViolationException_t1159713205::get_offset_of_U3CColumnsU3Ek__BackingField_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3120 = { sizeof (U3CNotNullConstraintViolationExceptionU3Ec__AnonStorey0_t1381194285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3120[1] = 
{
	U3CNotNullConstraintViolationExceptionU3Ec__AnonStorey0_t1381194285::get_offset_of_obj_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3121 = { sizeof (SQLiteOpenFlags_t2769278808)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3121[12] = 
{
	SQLiteOpenFlags_t2769278808::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3122 = { sizeof (CreateFlags_t2850693561)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3122[6] = 
{
	CreateFlags_t2850693561::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3123 = { sizeof (SQLiteConnection_t363421307), -1, sizeof(SQLiteConnection_t363421307_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3123[18] = 
{
	SQLiteConnection_t363421307::get_offset_of__open_0(),
	SQLiteConnection_t363421307::get_offset_of__busyTimeout_1(),
	SQLiteConnection_t363421307::get_offset_of__mappings_2(),
	SQLiteConnection_t363421307::get_offset_of__tables_3(),
	SQLiteConnection_t363421307::get_offset_of__sw_4(),
	SQLiteConnection_t363421307::get_offset_of__elapsedMilliseconds_5(),
	SQLiteConnection_t363421307::get_offset_of__transactionDepth_6(),
	SQLiteConnection_t363421307::get_offset_of__rand_7(),
	SQLiteConnection_t363421307::get_offset_of_U3CHandleU3Ek__BackingField_8(),
	SQLiteConnection_t363421307_StaticFields::get_offset_of_NullHandle_9(),
	SQLiteConnection_t363421307::get_offset_of_U3CDatabasePathU3Ek__BackingField_10(),
	SQLiteConnection_t363421307::get_offset_of_U3CTimeExecutionU3Ek__BackingField_11(),
	SQLiteConnection_t363421307::get_offset_of_U3CTraceU3Ek__BackingField_12(),
	SQLiteConnection_t363421307::get_offset_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_13(),
	SQLiteConnection_t363421307_StaticFields::get_offset_of__preserveDuringLinkMagic_14(),
	SQLiteConnection_t363421307_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_15(),
	SQLiteConnection_t363421307_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_16(),
	SQLiteConnection_t363421307_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3124 = { sizeof (IndexedColumn_t4051292507)+ sizeof (RuntimeObject), sizeof(IndexedColumn_t4051292507_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3124[2] = 
{
	IndexedColumn_t4051292507::get_offset_of_Order_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IndexedColumn_t4051292507::get_offset_of_ColumnName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3125 = { sizeof (IndexInfo_t474914895)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3125[4] = 
{
	IndexInfo_t474914895::get_offset_of_IndexName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IndexInfo_t474914895::get_offset_of_TableName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IndexInfo_t474914895::get_offset_of_Unique_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IndexInfo_t474914895::get_offset_of_Columns_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3126 = { sizeof (ColumnInfo_t768380545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3126[2] = 
{
	ColumnInfo_t768380545::get_offset_of_U3CNameU3Ek__BackingField_0(),
	ColumnInfo_t768380545::get_offset_of_U3CnotnullU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3127 = { sizeof (U3CInsertAllU3Ec__AnonStorey0_t2367456201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3127[3] = 
{
	U3CInsertAllU3Ec__AnonStorey0_t2367456201::get_offset_of_objects_0(),
	U3CInsertAllU3Ec__AnonStorey0_t2367456201::get_offset_of_c_1(),
	U3CInsertAllU3Ec__AnonStorey0_t2367456201::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3128 = { sizeof (U3CInsertAllU3Ec__AnonStorey1_t2914658587), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3128[4] = 
{
	U3CInsertAllU3Ec__AnonStorey1_t2914658587::get_offset_of_objects_0(),
	U3CInsertAllU3Ec__AnonStorey1_t2914658587::get_offset_of_extra_1(),
	U3CInsertAllU3Ec__AnonStorey1_t2914658587::get_offset_of_c_2(),
	U3CInsertAllU3Ec__AnonStorey1_t2914658587::get_offset_of_U24this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3129 = { sizeof (U3CInsertAllU3Ec__AnonStorey2_t2355627383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3129[4] = 
{
	U3CInsertAllU3Ec__AnonStorey2_t2355627383::get_offset_of_objects_0(),
	U3CInsertAllU3Ec__AnonStorey2_t2355627383::get_offset_of_objType_1(),
	U3CInsertAllU3Ec__AnonStorey2_t2355627383::get_offset_of_c_2(),
	U3CInsertAllU3Ec__AnonStorey2_t2355627383::get_offset_of_U24this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3130 = { sizeof (U3CUpdateU3Ec__AnonStorey3_t657726530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3130[2] = 
{
	U3CUpdateU3Ec__AnonStorey3_t657726530::get_offset_of_pk_0(),
	U3CUpdateU3Ec__AnonStorey3_t657726530::get_offset_of_obj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3131 = { sizeof (U3CUpdateAllU3Ec__AnonStorey4_t2636548924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3131[3] = 
{
	U3CUpdateAllU3Ec__AnonStorey4_t2636548924::get_offset_of_objects_0(),
	U3CUpdateAllU3Ec__AnonStorey4_t2636548924::get_offset_of_c_1(),
	U3CUpdateAllU3Ec__AnonStorey4_t2636548924::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3132 = { sizeof (SQLiteConnectionString_t1317844915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3132[3] = 
{
	SQLiteConnectionString_t1317844915::get_offset_of_U3CConnectionStringU3Ek__BackingField_0(),
	SQLiteConnectionString_t1317844915::get_offset_of_U3CDatabasePathU3Ek__BackingField_1(),
	SQLiteConnectionString_t1317844915::get_offset_of_U3CStoreDateTimeAsTicksU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3133 = { sizeof (TableAttribute_t4122574923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3133[1] = 
{
	TableAttribute_t4122574923::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3134 = { sizeof (ColumnAttribute_t3970719066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3134[1] = 
{
	ColumnAttribute_t3970719066::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3135 = { sizeof (PrimaryKeyAttribute_t2483723465), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3136 = { sizeof (AutoIncrementAttribute_t2229500047), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3137 = { sizeof (IndexedAttribute_t4180924783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3137[3] = 
{
	IndexedAttribute_t4180924783::get_offset_of_U3CNameU3Ek__BackingField_0(),
	IndexedAttribute_t4180924783::get_offset_of_U3COrderU3Ek__BackingField_1(),
	IndexedAttribute_t4180924783::get_offset_of_U3CUniqueU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3138 = { sizeof (IgnoreAttribute_t1379192568), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3139 = { sizeof (UniqueAttribute_t234610737), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3140 = { sizeof (MaxLengthAttribute_t2589852777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3140[1] = 
{
	MaxLengthAttribute_t2589852777::get_offset_of_U3CValueU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3141 = { sizeof (CollationAttribute_t767046006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3141[1] = 
{
	CollationAttribute_t767046006::get_offset_of_U3CValueU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3142 = { sizeof (NotNullAttribute_t3370137287), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3143 = { sizeof (TableMapping_t257246211), -1, sizeof(TableMapping_t257246211_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3143[14] = 
{
	TableMapping_t257246211::get_offset_of_U3CMappedTypeU3Ek__BackingField_0(),
	TableMapping_t257246211::get_offset_of_U3CTableNameU3Ek__BackingField_1(),
	TableMapping_t257246211::get_offset_of_U3CColumnsU3Ek__BackingField_2(),
	TableMapping_t257246211::get_offset_of_U3CPKU3Ek__BackingField_3(),
	TableMapping_t257246211::get_offset_of_U3CGetByPrimaryKeySqlU3Ek__BackingField_4(),
	TableMapping_t257246211::get_offset_of__autoPk_5(),
	TableMapping_t257246211::get_offset_of__insertColumns_6(),
	TableMapping_t257246211::get_offset_of__insertOrReplaceColumns_7(),
	TableMapping_t257246211::get_offset_of_U3CHasAutoIncPKU3Ek__BackingField_8(),
	TableMapping_t257246211::get_offset_of__insertCommand_9(),
	TableMapping_t257246211::get_offset_of__insertCommandExtra_10(),
	TableMapping_t257246211_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	TableMapping_t257246211_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
	TableMapping_t257246211_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3144 = { sizeof (Column_t4064576960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3144[10] = 
{
	Column_t4064576960::get_offset_of__prop_0(),
	Column_t4064576960::get_offset_of_U3CNameU3Ek__BackingField_1(),
	Column_t4064576960::get_offset_of_U3CColumnTypeU3Ek__BackingField_2(),
	Column_t4064576960::get_offset_of_U3CCollationU3Ek__BackingField_3(),
	Column_t4064576960::get_offset_of_U3CIsAutoIncU3Ek__BackingField_4(),
	Column_t4064576960::get_offset_of_U3CIsAutoGuidU3Ek__BackingField_5(),
	Column_t4064576960::get_offset_of_U3CIsPKU3Ek__BackingField_6(),
	Column_t4064576960::get_offset_of_U3CIndicesU3Ek__BackingField_7(),
	Column_t4064576960::get_offset_of_U3CIsNullableU3Ek__BackingField_8(),
	Column_t4064576960::get_offset_of_U3CMaxStringLengthU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3145 = { sizeof (U3CFindColumnWithPropertyNameU3Ec__AnonStorey0_t1854264506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3145[1] = 
{
	U3CFindColumnWithPropertyNameU3Ec__AnonStorey0_t1854264506::get_offset_of_propertyName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3146 = { sizeof (U3CFindColumnU3Ec__AnonStorey1_t347023015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3146[1] = 
{
	U3CFindColumnU3Ec__AnonStorey1_t347023015::get_offset_of_columnName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3147 = { sizeof (Orm_t911138220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3147[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3148 = { sizeof (SQLiteCommand_t775869909), -1, sizeof(SQLiteCommand_t775869909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3148[4] = 
{
	SQLiteCommand_t775869909::get_offset_of__conn_0(),
	SQLiteCommand_t775869909::get_offset_of__bindings_1(),
	SQLiteCommand_t775869909::get_offset_of_U3CCommandTextU3Ek__BackingField_2(),
	SQLiteCommand_t775869909_StaticFields::get_offset_of_NegativePointer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3149 = { sizeof (Binding_t3421539738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3149[3] = 
{
	Binding_t3421539738::get_offset_of_U3CNameU3Ek__BackingField_0(),
	Binding_t3421539738::get_offset_of_U3CValueU3Ek__BackingField_1(),
	Binding_t3421539738::get_offset_of_U3CIndexU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3150 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3150[8] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3151 = { sizeof (PreparedSqlLiteInsertCommand_t2868954573), -1, sizeof(PreparedSqlLiteInsertCommand_t2868954573_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3151[5] = 
{
	PreparedSqlLiteInsertCommand_t2868954573::get_offset_of_U3CInitializedU3Ek__BackingField_0(),
	PreparedSqlLiteInsertCommand_t2868954573::get_offset_of_U3CConnectionU3Ek__BackingField_1(),
	PreparedSqlLiteInsertCommand_t2868954573::get_offset_of_U3CCommandTextU3Ek__BackingField_2(),
	PreparedSqlLiteInsertCommand_t2868954573::get_offset_of_U3CStatementU3Ek__BackingField_3(),
	PreparedSqlLiteInsertCommand_t2868954573_StaticFields::get_offset_of_NullStatement_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3152 = { sizeof (BaseTableQuery_t247962011), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3153 = { sizeof (Ordering_t3667274934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3153[2] = 
{
	Ordering_t3667274934::get_offset_of_U3CColumnNameU3Ek__BackingField_0(),
	Ordering_t3667274934::get_offset_of_U3CAscendingU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3154 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3154[15] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3155 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3155[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3156 = { sizeof (SQLite3_t695450772), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3157 = { sizeof (Result_t2258912984)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3157[32] = 
{
	Result_t2258912984::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3158 = { sizeof (ExtendedResult_t396092144)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3158[46] = 
{
	ExtendedResult_t396092144::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3159 = { sizeof (ConfigOption_t3975792956)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3159[4] = 
{
	ConfigOption_t3975792956::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3160 = { sizeof (ColType_t1511198891)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3160[6] = 
{
	ColType_t1511198891::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3161 = { sizeof (BearingFilter_t244852089)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3161[2] = 
{
	BearingFilter_t244852089::get_offset_of_Bearing_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BearingFilter_t244852089::get_offset_of_Range_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3162 = { sizeof (Compression_t896673825), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3163 = { sizeof (Constants_t2877589745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3163[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3164 = { sizeof (Vector2dBounds_t1770528815)+ sizeof (RuntimeObject), sizeof(Vector2dBounds_t1770528815 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3164[2] = 
{
	Vector2dBounds_t1770528815::get_offset_of_SouthWest_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2dBounds_t1770528815::get_offset_of_NorthEast_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3165 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3166 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3167 = { sizeof (BboxToVector2dBoundsConverter_t3016122343), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3168 = { sizeof (JsonConverters_t1733012709), -1, sizeof(JsonConverters_t1733012709_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3168[1] = 
{
	JsonConverters_t1733012709_StaticFields::get_offset_of_converters_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3169 = { sizeof (LonLatToVector2dConverter_t4008054295), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3170 = { sizeof (PolylineToVector2dListConverter_t3158638371), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3171 = { sizeof (PolylineUtils_t1831646503), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3172 = { sizeof (UnixTimestampUtils_t3849602352), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3173 = { sizeof (Mathd_t2225564787)+ sizeof (RuntimeObject), sizeof(Mathd_t2225564787 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3173[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3174 = { sizeof (RectD_t2740685974)+ sizeof (RuntimeObject), sizeof(RectD_t2740685974 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3174[4] = 
{
	RectD_t2740685974::get_offset_of_U3CMinU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RectD_t2740685974::get_offset_of_U3CMaxU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RectD_t2740685974::get_offset_of_U3CSizeU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RectD_t2740685974::get_offset_of_U3CCenterU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3175 = { sizeof (Vector2d_t2412030077)+ sizeof (RuntimeObject), sizeof(Vector2d_t2412030077 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3175[3] = 
{
	0,
	Vector2d_t2412030077::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2d_t2412030077::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3176 = { sizeof (EnumExtensions_t852550954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3177 = { sizeof (VectorTileExtensions_t1447007237), -1, sizeof(VectorTileExtensions_t1447007237_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3177[6] = 
{
	VectorTileExtensions_t1447007237_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	VectorTileExtensions_t1447007237_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
	VectorTileExtensions_t1447007237_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_2(),
	VectorTileExtensions_t1447007237_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_3(),
	VectorTileExtensions_t1447007237_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_4(),
	VectorTileExtensions_t1447007237_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3178 = { sizeof (VectorTileFeatureExtensions_t72068974), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3179 = { sizeof (U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3179[4] = 
{
	U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804::get_offset_of_zoom_0(),
	U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804::get_offset_of_tileColumn_1(),
	U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804::get_offset_of_tileRow_2(),
	U3CGeometryAsWgs84U3Ec__AnonStorey0_t2798544804::get_offset_of_feature_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3180 = { sizeof (InternalClipper_t340204332), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3181 = { sizeof (DoublePoint_t3808997226)+ sizeof (RuntimeObject), sizeof(DoublePoint_t3808997226 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3181[2] = 
{
	DoublePoint_t3808997226::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DoublePoint_t3808997226::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3182 = { sizeof (PolyTree_t2349856017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3182[1] = 
{
	PolyTree_t2349856017::get_offset_of_m_AllPolys_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3183 = { sizeof (PolyNode_t316195436), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3183[7] = 
{
	PolyNode_t316195436::get_offset_of_m_Parent_0(),
	PolyNode_t316195436::get_offset_of_m_polygon_1(),
	PolyNode_t316195436::get_offset_of_m_Index_2(),
	PolyNode_t316195436::get_offset_of_m_jointype_3(),
	PolyNode_t316195436::get_offset_of_m_endtype_4(),
	PolyNode_t316195436::get_offset_of_m_Childs_5(),
	PolyNode_t316195436::get_offset_of_U3CIsOpenU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3184 = { sizeof (Int128_t3790056640)+ sizeof (RuntimeObject), sizeof(Int128_t3790056640 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3184[2] = 
{
	Int128_t3790056640::get_offset_of_hi_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Int128_t3790056640::get_offset_of_lo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3185 = { sizeof (IntPoint_t3569634576)+ sizeof (RuntimeObject), sizeof(IntPoint_t3569634576 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3185[2] = 
{
	IntPoint_t3569634576::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntPoint_t3569634576::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3186 = { sizeof (IntRect_t2881388650)+ sizeof (RuntimeObject), sizeof(IntRect_t2881388650 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3186[4] = 
{
	IntRect_t2881388650::get_offset_of_left_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntRect_t2881388650::get_offset_of_top_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntRect_t2881388650::get_offset_of_right_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntRect_t2881388650::get_offset_of_bottom_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3187 = { sizeof (ClipType_t3137199462)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3187[5] = 
{
	ClipType_t3137199462::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3188 = { sizeof (PolyType_t2098605919)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3188[3] = 
{
	PolyType_t2098605919::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3189 = { sizeof (PolyFillType_t1589120019)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3189[5] = 
{
	PolyFillType_t1589120019::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3190 = { sizeof (JoinType_t707909600)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3190[4] = 
{
	JoinType_t707909600::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3191 = { sizeof (EndType_t2269235238)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3191[6] = 
{
	EndType_t2269235238::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3192 = { sizeof (EdgeSide_t3850731799)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3192[3] = 
{
	EdgeSide_t3850731799::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3193 = { sizeof (Direction_t266154771)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3193[3] = 
{
	Direction_t266154771::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3194 = { sizeof (TEdge_t941134437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3194[18] = 
{
	TEdge_t941134437::get_offset_of_Bot_0(),
	TEdge_t941134437::get_offset_of_Curr_1(),
	TEdge_t941134437::get_offset_of_Top_2(),
	TEdge_t941134437::get_offset_of_Delta_3(),
	TEdge_t941134437::get_offset_of_Dx_4(),
	TEdge_t941134437::get_offset_of_PolyTyp_5(),
	TEdge_t941134437::get_offset_of_Side_6(),
	TEdge_t941134437::get_offset_of_WindDelta_7(),
	TEdge_t941134437::get_offset_of_WindCnt_8(),
	TEdge_t941134437::get_offset_of_WindCnt2_9(),
	TEdge_t941134437::get_offset_of_OutIdx_10(),
	TEdge_t941134437::get_offset_of_Next_11(),
	TEdge_t941134437::get_offset_of_Prev_12(),
	TEdge_t941134437::get_offset_of_NextInLML_13(),
	TEdge_t941134437::get_offset_of_NextInAEL_14(),
	TEdge_t941134437::get_offset_of_PrevInAEL_15(),
	TEdge_t941134437::get_offset_of_NextInSEL_16(),
	TEdge_t941134437::get_offset_of_PrevInSEL_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3195 = { sizeof (IntersectNode_t3153246009), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3195[3] = 
{
	IntersectNode_t3153246009::get_offset_of_Edge1_0(),
	IntersectNode_t3153246009::get_offset_of_Edge2_1(),
	IntersectNode_t3153246009::get_offset_of_Pt_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3196 = { sizeof (MyIntersectNodeSort_t3910898002), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3197 = { sizeof (LocalMinima_t1650670650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3197[4] = 
{
	LocalMinima_t1650670650::get_offset_of_Y_0(),
	LocalMinima_t1650670650::get_offset_of_LeftBound_1(),
	LocalMinima_t1650670650::get_offset_of_RightBound_2(),
	LocalMinima_t1650670650::get_offset_of_Next_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3198 = { sizeof (Scanbeam_t2078220396), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3198[2] = 
{
	Scanbeam_t2078220396::get_offset_of_Y_0(),
	Scanbeam_t2078220396::get_offset_of_Next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3199 = { sizeof (Maxima_t4289495226), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3199[3] = 
{
	Maxima_t4289495226::get_offset_of_X_0(),
	Maxima_t4289495226::get_offset_of_Next_1(),
	Maxima_t4289495226::get_offset_of_Prev_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
