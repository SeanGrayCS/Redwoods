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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Int64[][]
struct Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// ZXing.QrCode.Internal.DataMask[]
struct DataMaskU5BU5D_tD4ABA90247638600E3F77EBF01827B47EFA86D62;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// ZXing.Datamatrix.Encoder.SymbolInfo[]
struct SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0;
// ZXing.Datamatrix.Internal.Version/ECB[]
struct ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884;
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44;
// ZXing.Common.BitMatrix
struct BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27;
// ZXing.Datamatrix.Encoder.C40Encoder
struct C40Encoder_t7D0E2BF44C0B0F786737DC48CCE079E45893BBFA;
// ZXing.QrCode.Internal.DataMask
struct DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1;
// ZXing.Dimension
struct Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43;
// ZXing.Datamatrix.Encoder.EncoderContext
struct EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// ZXing.QrCode.Internal.FinderPattern
struct FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ZXing.ResultPoint
struct ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ZXing.Datamatrix.Encoder.SymbolInfo
struct SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ZXing.Common.Detector.WhiteRectangleDetector
struct WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5;
// ZXing.WriterException
struct WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113;
// ZXing.Datamatrix.Encoder.X12Encoder
struct X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7;
// BigIntegerLibrary.Base10BigInteger/DigitContainer
struct DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4;
// BigIntegerLibrary.BigInteger/DigitContainer
struct DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A;
// ZXing.QrCode.Internal.DataMask/DataMask000
struct DataMask000_tB7D9A96154906CEEA05569EE720C1FD1A0BBC160;
// ZXing.QrCode.Internal.DataMask/DataMask001
struct DataMask001_t5DEC848C94B6CC708EB62C9B47A548C5B5CCB1FB;
// ZXing.QrCode.Internal.DataMask/DataMask010
struct DataMask010_tDC7F707EB8576881899F8F8CAC0F6FA0B6ABD346;
// ZXing.QrCode.Internal.DataMask/DataMask011
struct DataMask011_tEB6241E8DE17300C0171FBDD57E1D4DBC4B17B75;
// ZXing.QrCode.Internal.DataMask/DataMask100
struct DataMask100_t930E9C48681C8C4A8D16220A24F11BCA79255325;
// ZXing.QrCode.Internal.DataMask/DataMask101
struct DataMask101_t22F6FD0C3E833CC623FA00DB32E633758B9DCAF8;
// ZXing.QrCode.Internal.DataMask/DataMask110
struct DataMask110_tE3491C60412158400F2111AEAE2D10D7A2409D98;
// ZXing.QrCode.Internal.DataMask/DataMask111
struct DataMask111_t871F4260B77CC64A34F4460D953A5F041D9829B2;
// ZXing.Aztec.Internal.Detector/Point
struct Point_tFAAD81D86B7232B372EF81799A98C2488F68127D;
// ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions
struct ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32;
// ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitionsComparator
struct ResultPointsAndTransitionsComparator_t62A8B240651428EF5F5E621E2EDF7361489AB0AF;
// ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator
struct CenterComparator_t6DBBFA99C6D5673E07F6C181D9692D8E6F3F084B;
// ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator
struct FurthestFromAverageComparator_t7FE1F57CCFE8447EA714E81AD70E55AF25014AB0;
// ZXing.Datamatrix.Internal.Version/ECB
struct ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31;
// ZXing.Datamatrix.Internal.Version/ECBlocks
struct ECBlocks_tC3295C9DC633FC5A71E2E88652917CCA881C3105;
// ZXing.QrCode.Internal.Version/ECB
struct ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8;
// ZXing.QrCode.Internal.Version/ECBlocks
struct ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC;

IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08;
struct ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884;
struct ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// ZXing.Common.BitMatrix
struct  BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Common.BitMatrix::width
	int32_t ___width_0;
	// System.Int32 ZXing.Common.BitMatrix::height
	int32_t ___height_1;
	// System.Int32 ZXing.Common.BitMatrix::rowSize
	int32_t ___rowSize_2;
	// System.Int32[] ZXing.Common.BitMatrix::bits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bits_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_rowSize_2() { return static_cast<int32_t>(offsetof(BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27, ___rowSize_2)); }
	inline int32_t get_rowSize_2() const { return ___rowSize_2; }
	inline int32_t* get_address_of_rowSize_2() { return &___rowSize_2; }
	inline void set_rowSize_2(int32_t value)
	{
		___rowSize_2 = value;
	}

	inline static int32_t get_offset_of_bits_3() { return static_cast<int32_t>(offsetof(BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27, ___bits_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bits_3() const { return ___bits_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bits_3() { return &___bits_3; }
	inline void set_bits_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bits_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bits_3), (void*)value);
	}
};


// ZXing.Datamatrix.Encoder.C40Encoder
struct  C40Encoder_t7D0E2BF44C0B0F786737DC48CCE079E45893BBFA  : public RuntimeObject
{
public:

public:
};


// ZXing.QrCode.Internal.DataMask
struct  DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1  : public RuntimeObject
{
public:

public:
};

struct DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_StaticFields
{
public:
	// ZXing.QrCode.Internal.DataMask[] ZXing.QrCode.Internal.DataMask::DATA_MASKS
	DataMaskU5BU5D_tD4ABA90247638600E3F77EBF01827B47EFA86D62* ___DATA_MASKS_0;

public:
	inline static int32_t get_offset_of_DATA_MASKS_0() { return static_cast<int32_t>(offsetof(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_StaticFields, ___DATA_MASKS_0)); }
	inline DataMaskU5BU5D_tD4ABA90247638600E3F77EBF01827B47EFA86D62* get_DATA_MASKS_0() const { return ___DATA_MASKS_0; }
	inline DataMaskU5BU5D_tD4ABA90247638600E3F77EBF01827B47EFA86D62** get_address_of_DATA_MASKS_0() { return &___DATA_MASKS_0; }
	inline void set_DATA_MASKS_0(DataMaskU5BU5D_tD4ABA90247638600E3F77EBF01827B47EFA86D62* value)
	{
		___DATA_MASKS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DATA_MASKS_0), (void*)value);
	}
};


// ZXing.ResultPoint
struct  ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11  : public RuntimeObject
{
public:
	// System.Single ZXing.ResultPoint::x
	float ___x_0;
	// System.Single ZXing.ResultPoint::y
	float ___y_1;
	// System.Byte[] ZXing.ResultPoint::bytesX
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesX_2;
	// System.Byte[] ZXing.ResultPoint::bytesY
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesY_3;
	// System.String ZXing.ResultPoint::toString
	String_t* ___toString_4;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_bytesX_2() { return static_cast<int32_t>(offsetof(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11, ___bytesX_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytesX_2() const { return ___bytesX_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytesX_2() { return &___bytesX_2; }
	inline void set_bytesX_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytesX_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytesX_2), (void*)value);
	}

	inline static int32_t get_offset_of_bytesY_3() { return static_cast<int32_t>(offsetof(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11, ___bytesY_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytesY_3() const { return ___bytesY_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytesY_3() { return &___bytesY_3; }
	inline void set_bytesY_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytesY_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytesY_3), (void*)value);
	}

	inline static int32_t get_offset_of_toString_4() { return static_cast<int32_t>(offsetof(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11, ___toString_4)); }
	inline String_t* get_toString_4() const { return ___toString_4; }
	inline String_t** get_address_of_toString_4() { return &___toString_4; }
	inline void set_toString_4(String_t* value)
	{
		___toString_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toString_4), (void*)value);
	}
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// ZXing.Datamatrix.Encoder.SymbolInfo
struct  SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5  : public RuntimeObject
{
public:
	// System.Boolean ZXing.Datamatrix.Encoder.SymbolInfo::rectangular
	bool ___rectangular_2;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::dataCapacity
	int32_t ___dataCapacity_3;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::errorCodewords
	int32_t ___errorCodewords_4;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::matrixWidth
	int32_t ___matrixWidth_5;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::matrixHeight
	int32_t ___matrixHeight_6;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::dataRegions
	int32_t ___dataRegions_7;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::rsBlockData
	int32_t ___rsBlockData_8;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::rsBlockError
	int32_t ___rsBlockError_9;

public:
	inline static int32_t get_offset_of_rectangular_2() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___rectangular_2)); }
	inline bool get_rectangular_2() const { return ___rectangular_2; }
	inline bool* get_address_of_rectangular_2() { return &___rectangular_2; }
	inline void set_rectangular_2(bool value)
	{
		___rectangular_2 = value;
	}

	inline static int32_t get_offset_of_dataCapacity_3() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___dataCapacity_3)); }
	inline int32_t get_dataCapacity_3() const { return ___dataCapacity_3; }
	inline int32_t* get_address_of_dataCapacity_3() { return &___dataCapacity_3; }
	inline void set_dataCapacity_3(int32_t value)
	{
		___dataCapacity_3 = value;
	}

	inline static int32_t get_offset_of_errorCodewords_4() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___errorCodewords_4)); }
	inline int32_t get_errorCodewords_4() const { return ___errorCodewords_4; }
	inline int32_t* get_address_of_errorCodewords_4() { return &___errorCodewords_4; }
	inline void set_errorCodewords_4(int32_t value)
	{
		___errorCodewords_4 = value;
	}

	inline static int32_t get_offset_of_matrixWidth_5() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___matrixWidth_5)); }
	inline int32_t get_matrixWidth_5() const { return ___matrixWidth_5; }
	inline int32_t* get_address_of_matrixWidth_5() { return &___matrixWidth_5; }
	inline void set_matrixWidth_5(int32_t value)
	{
		___matrixWidth_5 = value;
	}

	inline static int32_t get_offset_of_matrixHeight_6() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___matrixHeight_6)); }
	inline int32_t get_matrixHeight_6() const { return ___matrixHeight_6; }
	inline int32_t* get_address_of_matrixHeight_6() { return &___matrixHeight_6; }
	inline void set_matrixHeight_6(int32_t value)
	{
		___matrixHeight_6 = value;
	}

	inline static int32_t get_offset_of_dataRegions_7() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___dataRegions_7)); }
	inline int32_t get_dataRegions_7() const { return ___dataRegions_7; }
	inline int32_t* get_address_of_dataRegions_7() { return &___dataRegions_7; }
	inline void set_dataRegions_7(int32_t value)
	{
		___dataRegions_7 = value;
	}

	inline static int32_t get_offset_of_rsBlockData_8() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___rsBlockData_8)); }
	inline int32_t get_rsBlockData_8() const { return ___rsBlockData_8; }
	inline int32_t* get_address_of_rsBlockData_8() { return &___rsBlockData_8; }
	inline void set_rsBlockData_8(int32_t value)
	{
		___rsBlockData_8 = value;
	}

	inline static int32_t get_offset_of_rsBlockError_9() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___rsBlockError_9)); }
	inline int32_t get_rsBlockError_9() const { return ___rsBlockError_9; }
	inline int32_t* get_address_of_rsBlockError_9() { return &___rsBlockError_9; }
	inline void set_rsBlockError_9(int32_t value)
	{
		___rsBlockError_9 = value;
	}
};

struct SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5_StaticFields
{
public:
	// ZXing.Datamatrix.Encoder.SymbolInfo[] ZXing.Datamatrix.Encoder.SymbolInfo::PROD_SYMBOLS
	SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* ___PROD_SYMBOLS_0;
	// ZXing.Datamatrix.Encoder.SymbolInfo[] ZXing.Datamatrix.Encoder.SymbolInfo::symbols
	SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* ___symbols_1;

public:
	inline static int32_t get_offset_of_PROD_SYMBOLS_0() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5_StaticFields, ___PROD_SYMBOLS_0)); }
	inline SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* get_PROD_SYMBOLS_0() const { return ___PROD_SYMBOLS_0; }
	inline SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0** get_address_of_PROD_SYMBOLS_0() { return &___PROD_SYMBOLS_0; }
	inline void set_PROD_SYMBOLS_0(SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* value)
	{
		___PROD_SYMBOLS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PROD_SYMBOLS_0), (void*)value);
	}

	inline static int32_t get_offset_of_symbols_1() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5_StaticFields, ___symbols_1)); }
	inline SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* get_symbols_1() const { return ___symbols_1; }
	inline SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0** get_address_of_symbols_1() { return &___symbols_1; }
	inline void set_symbols_1(SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* value)
	{
		___symbols_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbols_1), (void*)value);
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

// ZXing.Common.Detector.WhiteRectangleDetector
struct  WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.Common.Detector.WhiteRectangleDetector::image
	BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * ___image_0;
	// System.Int32 ZXing.Common.Detector.WhiteRectangleDetector::height
	int32_t ___height_1;
	// System.Int32 ZXing.Common.Detector.WhiteRectangleDetector::width
	int32_t ___width_2;
	// System.Int32 ZXing.Common.Detector.WhiteRectangleDetector::leftInit
	int32_t ___leftInit_3;
	// System.Int32 ZXing.Common.Detector.WhiteRectangleDetector::rightInit
	int32_t ___rightInit_4;
	// System.Int32 ZXing.Common.Detector.WhiteRectangleDetector::downInit
	int32_t ___downInit_5;
	// System.Int32 ZXing.Common.Detector.WhiteRectangleDetector::upInit
	int32_t ___upInit_6;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5, ___image_0)); }
	inline BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_0), (void*)value);
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_leftInit_3() { return static_cast<int32_t>(offsetof(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5, ___leftInit_3)); }
	inline int32_t get_leftInit_3() const { return ___leftInit_3; }
	inline int32_t* get_address_of_leftInit_3() { return &___leftInit_3; }
	inline void set_leftInit_3(int32_t value)
	{
		___leftInit_3 = value;
	}

	inline static int32_t get_offset_of_rightInit_4() { return static_cast<int32_t>(offsetof(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5, ___rightInit_4)); }
	inline int32_t get_rightInit_4() const { return ___rightInit_4; }
	inline int32_t* get_address_of_rightInit_4() { return &___rightInit_4; }
	inline void set_rightInit_4(int32_t value)
	{
		___rightInit_4 = value;
	}

	inline static int32_t get_offset_of_downInit_5() { return static_cast<int32_t>(offsetof(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5, ___downInit_5)); }
	inline int32_t get_downInit_5() const { return ___downInit_5; }
	inline int32_t* get_address_of_downInit_5() { return &___downInit_5; }
	inline void set_downInit_5(int32_t value)
	{
		___downInit_5 = value;
	}

	inline static int32_t get_offset_of_upInit_6() { return static_cast<int32_t>(offsetof(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5, ___upInit_6)); }
	inline int32_t get_upInit_6() const { return ___upInit_6; }
	inline int32_t* get_address_of_upInit_6() { return &___upInit_6; }
	inline void set_upInit_6(int32_t value)
	{
		___upInit_6 = value;
	}
};


// BigIntegerLibrary.Base10BigInteger/DigitContainer
struct  DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4  : public RuntimeObject
{
public:
	// System.Int64[][] BigIntegerLibrary.Base10BigInteger/DigitContainer::digits
	Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* ___digits_0;

public:
	inline static int32_t get_offset_of_digits_0() { return static_cast<int32_t>(offsetof(DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4, ___digits_0)); }
	inline Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* get_digits_0() const { return ___digits_0; }
	inline Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC** get_address_of_digits_0() { return &___digits_0; }
	inline void set_digits_0(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* value)
	{
		___digits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digits_0), (void*)value);
	}
};


// BigIntegerLibrary.BigInteger/DigitContainer
struct  DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A  : public RuntimeObject
{
public:
	// System.Int64[][] BigIntegerLibrary.BigInteger/DigitContainer::digits
	Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* ___digits_0;

public:
	inline static int32_t get_offset_of_digits_0() { return static_cast<int32_t>(offsetof(DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A, ___digits_0)); }
	inline Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* get_digits_0() const { return ___digits_0; }
	inline Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC** get_address_of_digits_0() { return &___digits_0; }
	inline void set_digits_0(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* value)
	{
		___digits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digits_0), (void*)value);
	}
};


// ZXing.Aztec.Internal.Detector/Point
struct  Point_tFAAD81D86B7232B372EF81799A98C2488F68127D  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Aztec.Internal.Detector/Point::<X>k__BackingField
	int32_t ___U3CXU3Ek__BackingField_0;
	// System.Int32 ZXing.Aztec.Internal.Detector/Point::<Y>k__BackingField
	int32_t ___U3CYU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Point_tFAAD81D86B7232B372EF81799A98C2488F68127D, ___U3CXU3Ek__BackingField_0)); }
	inline int32_t get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(int32_t value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Point_tFAAD81D86B7232B372EF81799A98C2488F68127D, ___U3CYU3Ek__BackingField_1)); }
	inline int32_t get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(int32_t value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}
};


// ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions
struct  ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32  : public RuntimeObject
{
public:
	// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::<From>k__BackingField
	ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___U3CFromU3Ek__BackingField_0;
	// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::<To>k__BackingField
	ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___U3CToU3Ek__BackingField_1;
	// System.Int32 ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::<Transitions>k__BackingField
	int32_t ___U3CTransitionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFromU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32, ___U3CFromU3Ek__BackingField_0)); }
	inline ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * get_U3CFromU3Ek__BackingField_0() const { return ___U3CFromU3Ek__BackingField_0; }
	inline ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 ** get_address_of_U3CFromU3Ek__BackingField_0() { return &___U3CFromU3Ek__BackingField_0; }
	inline void set_U3CFromU3Ek__BackingField_0(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * value)
	{
		___U3CFromU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFromU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CToU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32, ___U3CToU3Ek__BackingField_1)); }
	inline ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * get_U3CToU3Ek__BackingField_1() const { return ___U3CToU3Ek__BackingField_1; }
	inline ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 ** get_address_of_U3CToU3Ek__BackingField_1() { return &___U3CToU3Ek__BackingField_1; }
	inline void set_U3CToU3Ek__BackingField_1(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * value)
	{
		___U3CToU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CToU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransitionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32, ___U3CTransitionsU3Ek__BackingField_2)); }
	inline int32_t get_U3CTransitionsU3Ek__BackingField_2() const { return ___U3CTransitionsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTransitionsU3Ek__BackingField_2() { return &___U3CTransitionsU3Ek__BackingField_2; }
	inline void set_U3CTransitionsU3Ek__BackingField_2(int32_t value)
	{
		___U3CTransitionsU3Ek__BackingField_2 = value;
	}
};


// ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitionsComparator
struct  ResultPointsAndTransitionsComparator_t62A8B240651428EF5F5E621E2EDF7361489AB0AF  : public RuntimeObject
{
public:

public:
};


// ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator
struct  CenterComparator_t6DBBFA99C6D5673E07F6C181D9692D8E6F3F084B  : public RuntimeObject
{
public:
	// System.Single ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator::average
	float ___average_0;

public:
	inline static int32_t get_offset_of_average_0() { return static_cast<int32_t>(offsetof(CenterComparator_t6DBBFA99C6D5673E07F6C181D9692D8E6F3F084B, ___average_0)); }
	inline float get_average_0() const { return ___average_0; }
	inline float* get_address_of_average_0() { return &___average_0; }
	inline void set_average_0(float value)
	{
		___average_0 = value;
	}
};


// ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator
struct  FurthestFromAverageComparator_t7FE1F57CCFE8447EA714E81AD70E55AF25014AB0  : public RuntimeObject
{
public:
	// System.Single ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator::average
	float ___average_0;

public:
	inline static int32_t get_offset_of_average_0() { return static_cast<int32_t>(offsetof(FurthestFromAverageComparator_t7FE1F57CCFE8447EA714E81AD70E55AF25014AB0, ___average_0)); }
	inline float get_average_0() const { return ___average_0; }
	inline float* get_address_of_average_0() { return &___average_0; }
	inline void set_average_0(float value)
	{
		___average_0 = value;
	}
};


// ZXing.Datamatrix.Internal.Version/ECB
struct  ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Datamatrix.Internal.Version/ECB::count
	int32_t ___count_0;
	// System.Int32 ZXing.Datamatrix.Internal.Version/ECB::dataCodewords
	int32_t ___dataCodewords_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_dataCodewords_1() { return static_cast<int32_t>(offsetof(ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31, ___dataCodewords_1)); }
	inline int32_t get_dataCodewords_1() const { return ___dataCodewords_1; }
	inline int32_t* get_address_of_dataCodewords_1() { return &___dataCodewords_1; }
	inline void set_dataCodewords_1(int32_t value)
	{
		___dataCodewords_1 = value;
	}
};


// ZXing.Datamatrix.Internal.Version/ECBlocks
struct  ECBlocks_tC3295C9DC633FC5A71E2E88652917CCA881C3105  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Datamatrix.Internal.Version/ECBlocks::ecCodewords
	int32_t ___ecCodewords_0;
	// ZXing.Datamatrix.Internal.Version/ECB[] ZXing.Datamatrix.Internal.Version/ECBlocks::_ecBlocksValue
	ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* ____ecBlocksValue_1;

public:
	inline static int32_t get_offset_of_ecCodewords_0() { return static_cast<int32_t>(offsetof(ECBlocks_tC3295C9DC633FC5A71E2E88652917CCA881C3105, ___ecCodewords_0)); }
	inline int32_t get_ecCodewords_0() const { return ___ecCodewords_0; }
	inline int32_t* get_address_of_ecCodewords_0() { return &___ecCodewords_0; }
	inline void set_ecCodewords_0(int32_t value)
	{
		___ecCodewords_0 = value;
	}

	inline static int32_t get_offset_of__ecBlocksValue_1() { return static_cast<int32_t>(offsetof(ECBlocks_tC3295C9DC633FC5A71E2E88652917CCA881C3105, ____ecBlocksValue_1)); }
	inline ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* get__ecBlocksValue_1() const { return ____ecBlocksValue_1; }
	inline ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884** get_address_of__ecBlocksValue_1() { return &____ecBlocksValue_1; }
	inline void set__ecBlocksValue_1(ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* value)
	{
		____ecBlocksValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ecBlocksValue_1), (void*)value);
	}
};


// ZXing.QrCode.Internal.Version/ECB
struct  ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::count
	int32_t ___count_0;
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::dataCodewords
	int32_t ___dataCodewords_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_dataCodewords_1() { return static_cast<int32_t>(offsetof(ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8, ___dataCodewords_1)); }
	inline int32_t get_dataCodewords_1() const { return ___dataCodewords_1; }
	inline int32_t* get_address_of_dataCodewords_1() { return &___dataCodewords_1; }
	inline void set_dataCodewords_1(int32_t value)
	{
		___dataCodewords_1 = value;
	}
};


// ZXing.QrCode.Internal.Version/ECBlocks
struct  ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::ecCodewordsPerBlock
	int32_t ___ecCodewordsPerBlock_0;
	// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::ecBlocks
	ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* ___ecBlocks_1;

public:
	inline static int32_t get_offset_of_ecCodewordsPerBlock_0() { return static_cast<int32_t>(offsetof(ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC, ___ecCodewordsPerBlock_0)); }
	inline int32_t get_ecCodewordsPerBlock_0() const { return ___ecCodewordsPerBlock_0; }
	inline int32_t* get_address_of_ecCodewordsPerBlock_0() { return &___ecCodewordsPerBlock_0; }
	inline void set_ecCodewordsPerBlock_0(int32_t value)
	{
		___ecCodewordsPerBlock_0 = value;
	}

	inline static int32_t get_offset_of_ecBlocks_1() { return static_cast<int32_t>(offsetof(ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC, ___ecBlocks_1)); }
	inline ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* get_ecBlocks_1() const { return ___ecBlocks_1; }
	inline ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44** get_address_of_ecBlocks_1() { return &___ecBlocks_1; }
	inline void set_ecBlocks_1(ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* value)
	{
		___ecBlocks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ecBlocks_1), (void*)value);
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// ZXing.QrCode.Internal.FinderPattern
struct  FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2  : public ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11
{
public:
	// System.Single ZXing.QrCode.Internal.FinderPattern::estimatedModuleSize
	float ___estimatedModuleSize_5;
	// System.Int32 ZXing.QrCode.Internal.FinderPattern::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_estimatedModuleSize_5() { return static_cast<int32_t>(offsetof(FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2, ___estimatedModuleSize_5)); }
	inline float get_estimatedModuleSize_5() const { return ___estimatedModuleSize_5; }
	inline float* get_address_of_estimatedModuleSize_5() { return &___estimatedModuleSize_5; }
	inline void set_estimatedModuleSize_5(float value)
	{
		___estimatedModuleSize_5 = value;
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
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


// ZXing.Datamatrix.Encoder.X12Encoder
struct  X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7  : public C40Encoder_t7D0E2BF44C0B0F786737DC48CCE079E45893BBFA
{
public:

public:
};


// <PrivateImplementationDetails>/$ArrayType=1024
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D1024_t7693012E6367F7121FA31EB86E6E07E2C6218B95 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D1024_t7693012E6367F7121FA31EB86E6E07E2C6218B95__padding[1024];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=11148
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D11148_t8A1702F56A31C6E48E9BE269FB36282B59B8FB6F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D11148_t8A1702F56A31C6E48E9BE269FB36282B59B8FB6F__padding[11148];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=112
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D112_t7C0E3A5351B53F452740018E4B9DB57BBAE38864 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D112_t7C0E3A5351B53F452740018E4B9DB57BBAE38864__padding[112];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t403A4024085E4EE65C2A43F83A039EBC57AA9F08 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t403A4024085E4EE65C2A43F83A039EBC57AA9F08__padding[12];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=120
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D120_t6D5AE9F51FA0023BEA4854B5BD797EE9C6BAFF07 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D120_t6D5AE9F51FA0023BEA4854B5BD797EE9C6BAFF07__padding[120];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=124
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D124_t042B9D45856380DAA3AB5CEA032858D4FF74F805 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D124_t042B9D45856380DAA3AB5CEA032858D4FF74F805__padding[124];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=128
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D128_t37003523DBE59C7BE57A811FA1F75B417D1193AB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D128_t37003523DBE59C7BE57A811FA1F75B417D1193AB__padding[128];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=132
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D132_t725967F6BB396E2D1E295AF18DCBC0062C54546D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D132_t725967F6BB396E2D1E295AF18DCBC0062C54546D__padding[132];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=136
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D136_t353294BE2B6087D33801D4923ED8A2D314FE3036 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D136_t353294BE2B6087D33801D4923ED8A2D314FE3036__padding[136];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=144
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D144_tAF4162306194E457F2E29B6F9BB4B23F8857EE71 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D144_tAF4162306194E457F2E29B6F9BB4B23F8857EE71__padding[144];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=148
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D148_tA4FF8F78BE05A2C4D505B88ABA6B2B3C75F603EB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D148_tA4FF8F78BE05A2C4D505B88ABA6B2B3C75F603EB__padding[148];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D16_tF226523630B16A33308F6D6A2071CB69D03A461C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_tF226523630B16A33308F6D6A2071CB69D03A461C__padding[16];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=168
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D168_t9653B116C542CC7AED6FD6B788C5A3017AD25825 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D168_t9653B116C542CC7AED6FD6B788C5A3017AD25825__padding[168];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=176
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D176_t449093094E7800E3144449E71E016A8988A55EBA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D176_t449093094E7800E3144449E71E016A8988A55EBA__padding[176];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=192
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D192_t5B638340E237898251FA88C1B25108396CB7B0C2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D192_t5B638340E237898251FA88C1B25108396CB7B0C2__padding[192];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_tC164E398CE66229E5F15DF1BA3AD320E096B2640 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_tC164E398CE66229E5F15DF1BA3AD320E096B2640__padding[20];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=2048
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D2048_t3BAB63718A1DE4886C03B8D34EE0986E75BDCAA7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D2048_t3BAB63718A1DE4886C03B8D34EE0986E75BDCAA7__padding[2048];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=224
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D224_tB2FF68FA53BEDDA41DDB309DB399D6B3ED79192A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D224_tB2FF68FA53BEDDA41DDB309DB399D6B3ED79192A__padding[224];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_tE219676D3B3A7093F2FBC9FDA3A8A02B6D0042A3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_tE219676D3B3A7093F2FBC9FDA3A8A02B6D0042A3__padding[24];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=248
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D248_tFCC2288B397135D55F0398D7DEFC581AFC818D92 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D248_tFCC2288B397135D55F0398D7DEFC581AFC818D92__padding[248];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=256
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D256_tED6D3698B1DECCA5D0E3280D6005442BD246C878 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D256_tED6D3698B1DECCA5D0E3280D6005442BD246C878__padding[256];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=272
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D272_tF84EDA5DC9E719E8C6E2BACB18C9DF15C222B497 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D272_tF84EDA5DC9E719E8C6E2BACB18C9DF15C222B497__padding[272];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=28
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D28_t99C75E2B3F8BA9AAE6DE08206DCBE16F255A0459 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D28_t99C75E2B3F8BA9AAE6DE08206DCBE16F255A0459__padding[28];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t33C2AA5D3A3A73D4B0DE86BF5F9565C2B5497E7D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t33C2AA5D3A3A73D4B0DE86BF5F9565C2B5497E7D__padding[32];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=36
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D36_tAF991855EC768664F08EEA158B868F9528FFDBAB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D36_tAF991855EC768664F08EEA158B868F9528FFDBAB__padding[36];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=3716
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D3716_t5DF9653C4FB4B8933D20876DB298BDE1C8AE4C46 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D3716_t5DF9653C4FB4B8933D20876DB298BDE1C8AE4C46__padding[3716];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=384
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D384_tFA2072E4A506E207768F79CFB4B18D35243C6C95 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D384_tFA2072E4A506E207768F79CFB4B18D35243C6C95__padding[384];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=40
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D40_t4C51D593423F95386F68D12AD793F7E7FC729101 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D40_t4C51D593423F95386F68D12AD793F7E7FC729101__padding[40];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=44
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D44_tA8E02A800DCE963F00F54BC1651A48C68B855CA5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D44_tA8E02A800DCE963F00F54BC1651A48C68B855CA5__padding[44];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=48
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D48_t4ADC4DA4DC2088F5A7157C9FD6F1B6BE95A4EEA3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D48_t4ADC4DA4DC2088F5A7157C9FD6F1B6BE95A4EEA3__padding[48];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=512
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D512_tEB33FFEDDAE550CF767321093613D7316CA88AB5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D512_tEB33FFEDDAE550CF767321093613D7316CA88AB5__padding[512];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=52
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D52_tBFCBF0C8F2A1508BF7959388D745091F4CC81A56 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D52_tBFCBF0C8F2A1508BF7959388D745091F4CC81A56__padding[52];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=56
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D56_tEEFC79EE75F743080C56664A18690F2E993F3317 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D56_tEEFC79EE75F743080C56664A18690F2E993F3317__padding[56];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=60
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D60_tF499BEC3BF5DBC62E740DD911808684C756EE651 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D60_tF499BEC3BF5DBC62E740DD911808684C756EE651__padding[60];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=64
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D64_t26AB96AEDC10F5FEFD4C62C51B0AF5738BB6834E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D64_t26AB96AEDC10F5FEFD4C62C51B0AF5738BB6834E__padding[64];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=72
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D72_tD33427B610C106D24597B8840F2F1DB02DD20882 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D72_tD33427B610C106D24597B8840F2F1DB02DD20882__padding[72];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=8
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D8_t985BEC7BC1AF5191E793AB8FDBD5C4777463CC45 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D8_t985BEC7BC1AF5191E793AB8FDBD5C4777463CC45__padding[8];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=80
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D80_t7591FBABD8FE2388B2BC983AA6C3DD43CE9C031C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D80_t7591FBABD8FE2388B2BC983AA6C3DD43CE9C031C__padding[80];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=92
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D92_t17A1E9EFAE16E73D3C24B35098C990F909F5ACA3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D92_t17A1E9EFAE16E73D3C24B35098C990F909F5ACA3__padding[92];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=96
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D96_tDE47F2A3172540EFCDB5C6768F86D32730EABAA5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D96_tDE47F2A3172540EFCDB5C6768F86D32730EABAA5__padding[96];
	};

public:
};
#pragma pack(pop, tp)


// ZXing.QrCode.Internal.DataMask/DataMask000
struct  DataMask000_tB7D9A96154906CEEA05569EE720C1FD1A0BBC160  : public DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1
{
public:

public:
};


// ZXing.QrCode.Internal.DataMask/DataMask001
struct  DataMask001_t5DEC848C94B6CC708EB62C9B47A548C5B5CCB1FB  : public DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1
{
public:

public:
};


// ZXing.QrCode.Internal.DataMask/DataMask010
struct  DataMask010_tDC7F707EB8576881899F8F8CAC0F6FA0B6ABD346  : public DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1
{
public:

public:
};


// ZXing.QrCode.Internal.DataMask/DataMask011
struct  DataMask011_tEB6241E8DE17300C0171FBDD57E1D4DBC4B17B75  : public DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1
{
public:

public:
};


// ZXing.QrCode.Internal.DataMask/DataMask100
struct  DataMask100_t930E9C48681C8C4A8D16220A24F11BCA79255325  : public DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1
{
public:

public:
};


// ZXing.QrCode.Internal.DataMask/DataMask101
struct  DataMask101_t22F6FD0C3E833CC623FA00DB32E633758B9DCAF8  : public DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1
{
public:

public:
};


// ZXing.QrCode.Internal.DataMask/DataMask110
struct  DataMask110_tE3491C60412158400F2111AEAE2D10D7A2409D98  : public DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1
{
public:

public:
};


// ZXing.QrCode.Internal.DataMask/DataMask111
struct  DataMask111_t871F4260B77CC64A34F4460D953A5F041D9829B2  : public DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1
{
public:

public:
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

// ZXing.Datamatrix.Encoder.SymbolShapeHint
struct  SymbolShapeHint_tD0CF48CCAF1EE479A812D3267B4244AAD23D01AA 
{
public:
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolShapeHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SymbolShapeHint_tD0CF48CCAF1EE479A812D3267B4244AAD23D01AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.OneD.RSS.Expanded.Decoders.CurrentParsingState/State
struct  State_t9DF2E3765801CA99827EF17C8E85A4BA0C00E8F7 
{
public:
	// System.Int32 ZXing.OneD.RSS.Expanded.Decoders.CurrentParsingState/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t9DF2E3765801CA99827EF17C8E85A4BA0C00E8F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.Datamatrix.Internal.DecodedBitStreamParser/Mode
struct  Mode_tEC506A646324E2382BE830A2D66071813C9408E4 
{
public:
	// System.Int32 ZXing.Datamatrix.Internal.DecodedBitStreamParser/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tEC506A646324E2382BE830A2D66071813C9408E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.PDF417.Internal.DecodedBitStreamParser/Mode
struct  Mode_tA74F0D909B38F3181603109994CFD9B461377183 
{
public:
	// System.Int32 ZXing.PDF417.Internal.DecodedBitStreamParser/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tA74F0D909B38F3181603109994CFD9B461377183, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.Aztec.Internal.Decoder/Table
struct  Table_tDF37CF0ED701EB85DE9F634EFB11585AF4819773 
{
public:
	// System.Int32 ZXing.Aztec.Internal.Decoder/Table::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Table_tDF37CF0ED701EB85DE9F634EFB11585AF4819773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.RGBLuminanceSource/BitmapFormat
struct  BitmapFormat_tA4B8B5D4EC8498B897DB7BF98B1058B1BD256C4D 
{
public:
	// System.Int32 ZXing.RGBLuminanceSource/BitmapFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitmapFormat_tA4B8B5D4EC8498B897DB7BF98B1058B1BD256C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.Datamatrix.Encoder.EncoderContext
struct  EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404  : public RuntimeObject
{
public:
	// System.String ZXing.Datamatrix.Encoder.EncoderContext::msg
	String_t* ___msg_0;
	// ZXing.Datamatrix.Encoder.SymbolShapeHint ZXing.Datamatrix.Encoder.EncoderContext::shape
	int32_t ___shape_1;
	// ZXing.Dimension ZXing.Datamatrix.Encoder.EncoderContext::minSize
	Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * ___minSize_2;
	// ZXing.Dimension ZXing.Datamatrix.Encoder.EncoderContext::maxSize
	Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * ___maxSize_3;
	// System.Text.StringBuilder ZXing.Datamatrix.Encoder.EncoderContext::codewords
	StringBuilder_t * ___codewords_4;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::pos
	int32_t ___pos_5;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::newEncoding
	int32_t ___newEncoding_6;
	// ZXing.Datamatrix.Encoder.SymbolInfo ZXing.Datamatrix.Encoder.EncoderContext::symbolInfo
	SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * ___symbolInfo_7;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::skipAtEnd
	int32_t ___skipAtEnd_8;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}

	inline static int32_t get_offset_of_shape_1() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___shape_1)); }
	inline int32_t get_shape_1() const { return ___shape_1; }
	inline int32_t* get_address_of_shape_1() { return &___shape_1; }
	inline void set_shape_1(int32_t value)
	{
		___shape_1 = value;
	}

	inline static int32_t get_offset_of_minSize_2() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___minSize_2)); }
	inline Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * get_minSize_2() const { return ___minSize_2; }
	inline Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 ** get_address_of_minSize_2() { return &___minSize_2; }
	inline void set_minSize_2(Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * value)
	{
		___minSize_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minSize_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___maxSize_3)); }
	inline Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * get_maxSize_3() const { return ___maxSize_3; }
	inline Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 ** get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * value)
	{
		___maxSize_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxSize_3), (void*)value);
	}

	inline static int32_t get_offset_of_codewords_4() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___codewords_4)); }
	inline StringBuilder_t * get_codewords_4() const { return ___codewords_4; }
	inline StringBuilder_t ** get_address_of_codewords_4() { return &___codewords_4; }
	inline void set_codewords_4(StringBuilder_t * value)
	{
		___codewords_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codewords_4), (void*)value);
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___pos_5)); }
	inline int32_t get_pos_5() const { return ___pos_5; }
	inline int32_t* get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(int32_t value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_newEncoding_6() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___newEncoding_6)); }
	inline int32_t get_newEncoding_6() const { return ___newEncoding_6; }
	inline int32_t* get_address_of_newEncoding_6() { return &___newEncoding_6; }
	inline void set_newEncoding_6(int32_t value)
	{
		___newEncoding_6 = value;
	}

	inline static int32_t get_offset_of_symbolInfo_7() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___symbolInfo_7)); }
	inline SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * get_symbolInfo_7() const { return ___symbolInfo_7; }
	inline SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 ** get_address_of_symbolInfo_7() { return &___symbolInfo_7; }
	inline void set_symbolInfo_7(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * value)
	{
		___symbolInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbolInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_skipAtEnd_8() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___skipAtEnd_8)); }
	inline int32_t get_skipAtEnd_8() const { return ___skipAtEnd_8; }
	inline int32_t* get_address_of_skipAtEnd_8() { return &___skipAtEnd_8; }
	inline void set_skipAtEnd_8(int32_t value)
	{
		___skipAtEnd_8 = value;
	}
};

struct EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404_StaticFields
{
public:
	// System.Text.Encoding ZXing.Datamatrix.Encoder.EncoderContext::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_9;

public:
	inline static int32_t get_offset_of_encoding_9() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404_StaticFields, ___encoding_9)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_9() const { return ___encoding_9; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_9() { return &___encoding_9; }
	inline void set_encoding_9(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_9), (void*)value);
	}
};


// ZXing.WriterException
struct  WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * m_Items[1];

public:
	inline ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * value)
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
// System.Int64[][]
struct Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* m_Items[1];

public:
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
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
// ZXing.Datamatrix.Internal.Version/ECB[]
struct ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * m_Items[1];

public:
	inline ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * m_Items[1];

public:
	inline ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Int32 ZXing.Common.BitMatrix::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_mB8D50284B8905D16958738C2564BBDF8C6C998E4_inline (BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.BitMatrix::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_m8B8828EB8ECCC753AA9CC27AD212D2BA40345368_inline (BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * __this, const RuntimeMethod* method);
// System.Void ZXing.Common.Detector.WhiteRectangleDetector::.ctor(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteRectangleDetector__ctor_mDED5257374F35CF79AD5D82F17BA178AC8E4EC79 (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * ___image0, int32_t ___initSize1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ZXing.Common.Detector.WhiteRectangleDetector::.ctor(ZXing.Common.BitMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteRectangleDetector__ctor_mCC227F92A27DD67DDC949CE8AE5E1D7A4ADD757F (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * ___image0, const RuntimeMethod* method);
// System.Boolean ZXing.Common.Detector.WhiteRectangleDetector::containsBlackPoint(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhiteRectangleDetector_containsBlackPoint_m47678F46343106CE1469B962F7B4F2D95F08440A (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, int32_t ___a0, int32_t ___b1, int32_t ___fixed2, bool ___horizontal3, const RuntimeMethod* method);
// ZXing.ResultPoint ZXing.Common.Detector.WhiteRectangleDetector::getBlackPointOnSegment(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * WhiteRectangleDetector_getBlackPointOnSegment_m6F10F29A770C344EF0E932ED413CFBAB40B9C3E5 (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, float ___aX0, float ___aY1, float ___bX2, float ___bY3, const RuntimeMethod* method);
// ZXing.ResultPoint[] ZXing.Common.Detector.WhiteRectangleDetector::centerEdges(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* WhiteRectangleDetector_centerEdges_m54DE9A4196637D5D5404ADDFBE1E8B846FA10F68 (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___y0, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___z1, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___x2, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___t3, const RuntimeMethod* method);
// System.Single ZXing.Common.Detector.MathUtils::distance(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_distance_mD3FA7B14A1C19A5D7CBF48BC1CB6642E13837189 (float ___aX0, float ___aY1, float ___bX2, float ___bY3, const RuntimeMethod* method);
// System.Int32 ZXing.Common.Detector.MathUtils::round(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MathUtils_round_m98015AE84E002E5E0A7EA8830DA6906FE85C6B68 (float ___d0, const RuntimeMethod* method);
// System.Boolean ZXing.Common.BitMatrix::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitMatrix_get_Item_mC2EFD12FF157DD1B4C42113EE81EF54540C44E29 (BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void ZXing.ResultPoint::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98 (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.C40Encoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C40Encoder__ctor_m9ABA44AD70FE2A71AC16D94C01F5FE6948EC6505 (C40Encoder_t7D0E2BF44C0B0F786737DC48CCE079E45893BBFA * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char ZXing.Datamatrix.Encoder.EncoderContext::get_CurrentChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar EncoderContext_get_CurrentChar_mC3AB70066172BCEBAC6401C98A23DAE8E0F6BD56 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::get_Pos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.EncoderContext::set_Pos(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.C40Encoder::writeNextTriplet(ZXing.Datamatrix.Encoder.EncoderContext,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C40Encoder_writeNextTriplet_m40F5CC8D1421623885A6617FB5A97136517DA36E (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * ___context0, StringBuilder_t * ___buffer1, const RuntimeMethod* method);
// System.String ZXing.Datamatrix.Encoder.EncoderContext::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EncoderContext_get_Message_m9E796FA953C8DB0F71A14B01F4BA34D1E93AD60E_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Datamatrix.Encoder.HighLevelEncoder::lookAheadTest(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HighLevelEncoder_lookAheadTest_mF1855D967606F852207943F687165596895498AD (String_t* ___msg0, int32_t ___startpos1, int32_t ___currentMode2, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.EncoderContext::signalEncoderChange(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, int32_t ___encoding0, const RuntimeMethod* method);
// System.Boolean ZXing.Datamatrix.Encoder.EncoderContext::get_HasMoreCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncoderContext_get_HasMoreCharacters_mCA69CD64E2F10917382F3DBEC7921041512F52A4 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.HighLevelEncoder::illegalCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_illegalCharacter_m4FAE344A8B52D234C240B208FA6BC8CBFD426F73 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.EncoderContext::updateSymbolInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderContext_updateSymbolInfo_mF782DEE02931A243840D9E5BA1C60C774346BE24 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// ZXing.Datamatrix.Encoder.SymbolInfo ZXing.Datamatrix.Encoder.EncoderContext::get_SymbolInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * EncoderContext_get_SymbolInfo_m61D7CE6AB824BC77A620E764E169C4631C5A0DA9_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::get_CodewordCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncoderContext_get_CodewordCount_mFD0D2EC327035BF43EB45D506F3EAD0B9B8EFFB1 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.EncoderContext::writeCodeword(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderContext_writeCodeword_mED1E24415DDEBD40831B02FCF780B5CEEAD76422 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, Il2CppChar ___codeword0, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.DataMask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575 (DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1 * __this, const RuntimeMethod* method);
// System.Void ZXing.Aztec.Internal.Detector/Point::set_X(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_m616AD1E814DE3F2D3EE7F16A266942A7D28EE12F_inline (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ZXing.Aztec.Internal.Detector/Point::set_Y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m97E75208C4323268BE5D98A368F6FDE2ECE5B5B2_inline (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_m0C7A97A4C65347E9F352650E16EA3B3E2DF76D81_inline (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_mEE2CDFE3BDBE26D95F4C1F8E46C702D5C87F0A88_inline (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::set_From(ZXing.ResultPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_From_mBF8B41923E54A017DBEA8AAB26A142CCDCE63726_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___value0, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::set_To(ZXing.ResultPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_To_mCE0E42AE6E7A83DB761194499A39F43975D8D443_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___value0, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::set_Transitions(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_Transitions_mEBB59893D3010A1EEE2AC0BA9FF6D99F5C046577_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, int32_t ___value0, const RuntimeMethod* method);
// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::get_From()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ResultPointsAndTransitions_get_From_mCA5DEA093BF2DF39D80DB6EBB809D97895E0C1A3_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method);
// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::get_To()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ResultPointsAndTransitions_get_To_m32EB84FED92621C8C3F22F71A71E6A351655F9CE_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::get_Transitions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResultPointsAndTransitions_get_Transitions_m9060097003A9942565FF65D936A95BB2B6F8F4DD_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.FinderPattern::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FinderPattern_get_Count_m86C1A1E94EDD8ADF74C3379DF915B3185AAA48EF_inline (FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * __this, const RuntimeMethod* method);
// System.Single ZXing.QrCode.Internal.FinderPattern::get_EstimatedModuleSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FinderPattern_get_EstimatedModuleSize_m7947E55BECA4CA1D3B7D20F1B6AD58A49845FF87_inline (FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECB_get_Count_mBBB7DF65CF817061A3B11EDBF5E4DA8408B11031_inline (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_NumBlocks_mC805639DC2E4BE500A74BAB84E03658FF495FE8A (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Common.Detector.WhiteRectangleDetector::.ctor(ZXing.Common.BitMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteRectangleDetector__ctor_mCC227F92A27DD67DDC949CE8AE5E1D7A4ADD757F (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * ___image0, const RuntimeMethod* method)
{
	{
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_0 = ___image0;
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_1 = ___image0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitMatrix_get_Width_mB8D50284B8905D16958738C2564BBDF8C6C998E4_inline(L_1, /*hidden argument*/NULL);
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_3 = ___image0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BitMatrix_get_Height_m8B8828EB8ECCC753AA9CC27AD212D2BA40345368_inline(L_3, /*hidden argument*/NULL);
		WhiteRectangleDetector__ctor_mDED5257374F35CF79AD5D82F17BA178AC8E4EC79(__this, L_0, ((int32_t)10), ((int32_t)((int32_t)L_2/(int32_t)2)), ((int32_t)((int32_t)L_4/(int32_t)2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.Common.Detector.WhiteRectangleDetector::.ctor(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteRectangleDetector__ctor_mDED5257374F35CF79AD5D82F17BA178AC8E4EC79 (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * ___image0, int32_t ___initSize1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_0 = ___image0;
		__this->set_image_0(L_0);
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_1 = ___image0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitMatrix_get_Height_m8B8828EB8ECCC753AA9CC27AD212D2BA40345368_inline(L_1, /*hidden argument*/NULL);
		__this->set_height_1(L_2);
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_3 = ___image0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BitMatrix_get_Width_mB8D50284B8905D16958738C2564BBDF8C6C998E4_inline(L_3, /*hidden argument*/NULL);
		__this->set_width_2(L_4);
		int32_t L_5 = ___initSize1;
		V_0 = ((int32_t)((int32_t)L_5/(int32_t)2));
		int32_t L_6 = ___x2;
		int32_t L_7 = V_0;
		__this->set_leftInit_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)));
		int32_t L_8 = ___x2;
		int32_t L_9 = V_0;
		__this->set_rightInit_4(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		int32_t L_10 = ___y3;
		int32_t L_11 = V_0;
		__this->set_upInit_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)));
		int32_t L_12 = ___y3;
		int32_t L_13 = V_0;
		__this->set_downInit_5(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)));
		return;
	}
}
// ZXing.Common.Detector.WhiteRectangleDetector ZXing.Common.Detector.WhiteRectangleDetector::Create(ZXing.Common.BitMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * WhiteRectangleDetector_Create_m0F25C2FE00678690FB9DA53415FEE42789501938 (BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * V_0 = NULL;
	{
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_0 = ___image0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 *)NULL;
	}

IL_0008:
	{
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_1 = ___image0;
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_2 = (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 *)il2cpp_codegen_object_new(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5_il2cpp_TypeInfo_var);
		WhiteRectangleDetector__ctor_mCC227F92A27DD67DDC949CE8AE5E1D7A4ADD757F(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_upInit_6();
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_leftInit_3();
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_downInit_5();
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_height_1();
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_rightInit_4();
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_width_2();
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 *)NULL;
	}

IL_004b:
	{
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_15 = V_0;
		return L_15;
	}
}
// ZXing.Common.Detector.WhiteRectangleDetector ZXing.Common.Detector.WhiteRectangleDetector::Create(ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * WhiteRectangleDetector_Create_m51BFC5EDA7549D681439B40814BDDB19717DEC03 (BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * ___image0, int32_t ___initSize1, int32_t ___x2, int32_t ___y3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * V_0 = NULL;
	{
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_0 = ___image0;
		int32_t L_1 = ___initSize1;
		int32_t L_2 = ___x2;
		int32_t L_3 = ___y3;
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_4 = (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 *)il2cpp_codegen_object_new(WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5_il2cpp_TypeInfo_var);
		WhiteRectangleDetector__ctor_mDED5257374F35CF79AD5D82F17BA178AC8E4EC79(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_upInit_6();
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_leftInit_3();
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_downInit_5();
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_height_1();
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_rightInit_4();
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_width_2();
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
		return (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 *)NULL;
	}

IL_0046:
	{
		WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * L_17 = V_0;
		return L_17;
	}
}
// ZXing.ResultPoint[] ZXing.Common.Detector.WhiteRectangleDetector::detect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* WhiteRectangleDetector_detect_m734C85C88B9AE92774BD008D28F982EA03E1A7A2 (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * V_16 = NULL;
	int32_t V_17 = 0;
	ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * V_18 = NULL;
	int32_t V_19 = 0;
	ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * V_20 = NULL;
	int32_t V_21 = 0;
	ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * V_22 = NULL;
	int32_t V_23 = 0;
	{
		int32_t L_0 = __this->get_leftInit_3();
		V_0 = L_0;
		int32_t L_1 = __this->get_rightInit_4();
		V_1 = L_1;
		int32_t L_2 = __this->get_upInit_6();
		V_2 = L_2;
		int32_t L_3 = __this->get_downInit_5();
		V_3 = L_3;
		V_4 = (bool)0;
		V_5 = (bool)1;
		V_6 = (bool)0;
		V_7 = (bool)0;
		V_8 = (bool)0;
		V_9 = (bool)0;
		V_10 = (bool)0;
		goto IL_01bb;
	}

IL_0036:
	{
		V_5 = (bool)0;
		V_11 = (bool)1;
		goto IL_006e;
	}

IL_0041:
	{
		int32_t L_4 = V_2;
		int32_t L_5 = V_3;
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = WhiteRectangleDetector_containsBlackPoint_m47678F46343106CE1469B962F7B4F2D95F08440A(__this, L_4, L_5, L_6, (bool)0, /*hidden argument*/NULL);
		V_11 = L_7;
		bool L_8 = V_11;
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		V_5 = (bool)1;
		V_7 = (bool)1;
		goto IL_006e;
	}

IL_0063:
	{
		bool L_10 = V_7;
		if (L_10)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_006e:
	{
		bool L_12 = V_11;
		if (L_12)
		{
			goto IL_007c;
		}
	}
	{
		bool L_13 = V_7;
		if (L_13)
		{
			goto IL_0088;
		}
	}

IL_007c:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->get_width_2();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}

IL_0088:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_width_2();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_009c;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_01c2;
	}

IL_009c:
	{
		V_12 = (bool)1;
		goto IL_00d1;
	}

IL_00a4:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = V_3;
		bool L_21;
		L_21 = WhiteRectangleDetector_containsBlackPoint_m47678F46343106CE1469B962F7B4F2D95F08440A(__this, L_18, L_19, L_20, (bool)1, /*hidden argument*/NULL);
		V_12 = L_21;
		bool L_22 = V_12;
		if (!L_22)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		V_5 = (bool)1;
		V_8 = (bool)1;
		goto IL_00d1;
	}

IL_00c6:
	{
		bool L_24 = V_8;
		if (L_24)
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00d1:
	{
		bool L_26 = V_12;
		if (L_26)
		{
			goto IL_00df;
		}
	}
	{
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_00eb;
		}
	}

IL_00df:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = __this->get_height_1();
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_00a4;
		}
	}

IL_00eb:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = __this->get_height_1();
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00ff;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_01c2;
	}

IL_00ff:
	{
		V_13 = (bool)1;
		goto IL_0134;
	}

IL_0107:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		int32_t L_34 = V_0;
		bool L_35;
		L_35 = WhiteRectangleDetector_containsBlackPoint_m47678F46343106CE1469B962F7B4F2D95F08440A(__this, L_32, L_33, L_34, (bool)0, /*hidden argument*/NULL);
		V_13 = L_35;
		bool L_36 = V_13;
		if (!L_36)
		{
			goto IL_0129;
		}
	}
	{
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		V_5 = (bool)1;
		V_9 = (bool)1;
		goto IL_0134;
	}

IL_0129:
	{
		bool L_38 = V_9;
		if (L_38)
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_0134:
	{
		bool L_40 = V_13;
		if (L_40)
		{
			goto IL_0142;
		}
	}
	{
		bool L_41 = V_9;
		if (L_41)
		{
			goto IL_0149;
		}
	}

IL_0142:
	{
		int32_t L_42 = V_0;
		if ((((int32_t)L_42) >= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}

IL_0149:
	{
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_0158;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_01c2;
	}

IL_0158:
	{
		V_14 = (bool)1;
		goto IL_018d;
	}

IL_0160:
	{
		int32_t L_44 = V_0;
		int32_t L_45 = V_1;
		int32_t L_46 = V_2;
		bool L_47;
		L_47 = WhiteRectangleDetector_containsBlackPoint_m47678F46343106CE1469B962F7B4F2D95F08440A(__this, L_44, L_45, L_46, (bool)1, /*hidden argument*/NULL);
		V_14 = L_47;
		bool L_48 = V_14;
		if (!L_48)
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
		V_5 = (bool)1;
		V_10 = (bool)1;
		goto IL_018d;
	}

IL_0182:
	{
		bool L_50 = V_10;
		if (L_50)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
	}

IL_018d:
	{
		bool L_52 = V_14;
		if (L_52)
		{
			goto IL_019b;
		}
	}
	{
		bool L_53 = V_10;
		if (L_53)
		{
			goto IL_01a2;
		}
	}

IL_019b:
	{
		int32_t L_54 = V_2;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_0160;
		}
	}

IL_01a2:
	{
		int32_t L_55 = V_2;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_01b1;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_01c2;
	}

IL_01b1:
	{
		bool L_56 = V_5;
		if (!L_56)
		{
			goto IL_01bb;
		}
	}
	{
		V_6 = (bool)1;
	}

IL_01bb:
	{
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_0036;
		}
	}

IL_01c2:
	{
		bool L_58 = V_4;
		if (L_58)
		{
			goto IL_02f8;
		}
	}
	{
		bool L_59 = V_6;
		if (!L_59)
		{
			goto IL_02f8;
		}
	}
	{
		int32_t L_60 = V_1;
		int32_t L_61 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)L_61));
		V_16 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)NULL;
		V_17 = 1;
		goto IL_0208;
	}

IL_01e0:
	{
		int32_t L_62 = V_0;
		int32_t L_63 = V_3;
		int32_t L_64 = V_17;
		int32_t L_65 = V_0;
		int32_t L_66 = V_17;
		int32_t L_67 = V_3;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_68;
		L_68 = WhiteRectangleDetector_getBlackPointOnSegment_m6F10F29A770C344EF0E932ED413CFBAB40B9C3E5(__this, ((float)((float)L_62)), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)L_64)))), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)))), ((float)((float)L_67)), /*hidden argument*/NULL);
		V_16 = L_68;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_69 = V_16;
		if (!L_69)
		{
			goto IL_0202;
		}
	}
	{
		goto IL_0211;
	}

IL_0202:
	{
		int32_t L_70 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0208:
	{
		int32_t L_71 = V_17;
		int32_t L_72 = V_15;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_01e0;
		}
	}

IL_0211:
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_73 = V_16;
		if (L_73)
		{
			goto IL_021a;
		}
	}
	{
		return (ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)NULL;
	}

IL_021a:
	{
		V_18 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)NULL;
		V_19 = 1;
		goto IL_024d;
	}

IL_0225:
	{
		int32_t L_74 = V_0;
		int32_t L_75 = V_2;
		int32_t L_76 = V_19;
		int32_t L_77 = V_0;
		int32_t L_78 = V_19;
		int32_t L_79 = V_2;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_80;
		L_80 = WhiteRectangleDetector_getBlackPointOnSegment_m6F10F29A770C344EF0E932ED413CFBAB40B9C3E5(__this, ((float)((float)L_74)), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)L_76)))), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)L_78)))), ((float)((float)L_79)), /*hidden argument*/NULL);
		V_18 = L_80;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_81 = V_18;
		if (!L_81)
		{
			goto IL_0247;
		}
	}
	{
		goto IL_0256;
	}

IL_0247:
	{
		int32_t L_82 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_024d:
	{
		int32_t L_83 = V_19;
		int32_t L_84 = V_15;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_0225;
		}
	}

IL_0256:
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_85 = V_18;
		if (L_85)
		{
			goto IL_025f;
		}
	}
	{
		return (ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)NULL;
	}

IL_025f:
	{
		V_20 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)NULL;
		V_21 = 1;
		goto IL_0292;
	}

IL_026a:
	{
		int32_t L_86 = V_1;
		int32_t L_87 = V_2;
		int32_t L_88 = V_21;
		int32_t L_89 = V_1;
		int32_t L_90 = V_21;
		int32_t L_91 = V_2;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_92;
		L_92 = WhiteRectangleDetector_getBlackPointOnSegment_m6F10F29A770C344EF0E932ED413CFBAB40B9C3E5(__this, ((float)((float)L_86)), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88)))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)L_90)))), ((float)((float)L_91)), /*hidden argument*/NULL);
		V_20 = L_92;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_93 = V_20;
		if (!L_93)
		{
			goto IL_028c;
		}
	}
	{
		goto IL_029b;
	}

IL_028c:
	{
		int32_t L_94 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_0292:
	{
		int32_t L_95 = V_21;
		int32_t L_96 = V_15;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_026a;
		}
	}

IL_029b:
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_97 = V_20;
		if (L_97)
		{
			goto IL_02a4;
		}
	}
	{
		return (ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)NULL;
	}

IL_02a4:
	{
		V_22 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)NULL;
		V_23 = 1;
		goto IL_02d7;
	}

IL_02af:
	{
		int32_t L_98 = V_1;
		int32_t L_99 = V_3;
		int32_t L_100 = V_23;
		int32_t L_101 = V_1;
		int32_t L_102 = V_23;
		int32_t L_103 = V_3;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_104;
		L_104 = WhiteRectangleDetector_getBlackPointOnSegment_m6F10F29A770C344EF0E932ED413CFBAB40B9C3E5(__this, ((float)((float)L_98)), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)L_100)))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)L_102)))), ((float)((float)L_103)), /*hidden argument*/NULL);
		V_22 = L_104;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_105 = V_22;
		if (!L_105)
		{
			goto IL_02d1;
		}
	}
	{
		goto IL_02e0;
	}

IL_02d1:
	{
		int32_t L_106 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_02d7:
	{
		int32_t L_107 = V_23;
		int32_t L_108 = V_15;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_02af;
		}
	}

IL_02e0:
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_109 = V_22;
		if (L_109)
		{
			goto IL_02e9;
		}
	}
	{
		return (ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)NULL;
	}

IL_02e9:
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_110 = V_22;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_111 = V_16;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_112 = V_20;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_113 = V_18;
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_114;
		L_114 = WhiteRectangleDetector_centerEdges_m54DE9A4196637D5D5404ADDFBE1E8B846FA10F68(__this, L_110, L_111, L_112, L_113, /*hidden argument*/NULL);
		return L_114;
	}

IL_02f8:
	{
		return (ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)NULL;
	}
}
// ZXing.ResultPoint ZXing.Common.Detector.WhiteRectangleDetector::getBlackPointOnSegment(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * WhiteRectangleDetector_getBlackPointOnSegment_m6F10F29A770C344EF0E932ED413CFBAB40B9C3E5 (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, float ___aX0, float ___aY1, float ___bX2, float ___bY3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		float L_0 = ___aX0;
		float L_1 = ___aY1;
		float L_2 = ___bX2;
		float L_3 = ___bY3;
		float L_4;
		L_4 = MathUtils_distance_mD3FA7B14A1C19A5D7CBF48BC1CB6642E13837189(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = MathUtils_round_m98015AE84E002E5E0A7EA8830DA6906FE85C6B68(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = ___bX2;
		float L_7 = ___aX0;
		int32_t L_8 = V_0;
		V_1 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_7))/(float)((float)((float)L_8))));
		float L_9 = ___bY3;
		float L_10 = ___aY1;
		int32_t L_11 = V_0;
		V_2 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_10))/(float)((float)((float)L_11))));
		V_3 = 0;
		goto IL_0064;
	}

IL_0026:
	{
		float L_12 = ___aX0;
		int32_t L_13 = V_3;
		float L_14 = V_1;
		int32_t L_15;
		L_15 = MathUtils_round_m98015AE84E002E5E0A7EA8830DA6906FE85C6B68(((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_13)), (float)L_14)))), /*hidden argument*/NULL);
		V_4 = L_15;
		float L_16 = ___aY1;
		int32_t L_17 = V_3;
		float L_18 = V_2;
		int32_t L_19;
		L_19 = MathUtils_round_m98015AE84E002E5E0A7EA8830DA6906FE85C6B68(((float)il2cpp_codegen_add((float)L_16, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_17)), (float)L_18)))), /*hidden argument*/NULL);
		V_5 = L_19;
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_20 = __this->get_image_0();
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		NullCheck(L_20);
		bool L_23;
		L_23 = BitMatrix_get_Item_mC2EFD12FF157DD1B4C42113EE81EF54540C44E29(L_20, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_24 = V_4;
		int32_t L_25 = V_5;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_26 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_26, ((float)((float)L_24)), ((float)((float)L_25)), /*hidden argument*/NULL);
		return L_26;
	}

IL_0060:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0026;
		}
	}
	{
		return (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)NULL;
	}
}
// ZXing.ResultPoint[] ZXing.Common.Detector.WhiteRectangleDetector::centerEdges(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* WhiteRectangleDetector_centerEdges_m54DE9A4196637D5D5404ADDFBE1E8B846FA10F68 (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___y0, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___z1, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___x2, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___t3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = ___y0;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(4 /* System.Single ZXing.ResultPoint::get_X() */, L_0);
		V_0 = L_1;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_2 = ___y0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single ZXing.ResultPoint::get_Y() */, L_2);
		V_1 = L_3;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_4 = ___z1;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtFuncInvoker0< float >::Invoke(4 /* System.Single ZXing.ResultPoint::get_X() */, L_4);
		V_2 = L_5;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_6 = ___z1;
		NullCheck(L_6);
		float L_7;
		L_7 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single ZXing.ResultPoint::get_Y() */, L_6);
		V_3 = L_7;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_8 = ___x2;
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(4 /* System.Single ZXing.ResultPoint::get_X() */, L_8);
		V_4 = L_9;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_10 = ___x2;
		NullCheck(L_10);
		float L_11;
		L_11 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single ZXing.ResultPoint::get_Y() */, L_10);
		V_5 = L_11;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_12 = ___t3;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(4 /* System.Single ZXing.ResultPoint::get_X() */, L_12);
		V_6 = L_13;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_14 = ___t3;
		NullCheck(L_14);
		float L_15;
		L_15 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single ZXing.ResultPoint::get_Y() */, L_14);
		V_7 = L_15;
		float L_16 = V_0;
		int32_t L_17 = __this->get_width_2();
		if ((!(((float)L_16) < ((float)((float)((float)((float)((float)L_17))/(float)(2.0f)))))))
		{
			goto IL_00b4;
		}
	}
	{
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_18 = (ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)(ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)SZArrayNew(ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08_il2cpp_TypeInfo_var, (uint32_t)4);
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_19 = L_18;
		float L_20 = V_6;
		float L_21 = V_7;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_22 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_22, ((float)il2cpp_codegen_subtract((float)L_20, (float)(1.0f))), ((float)il2cpp_codegen_add((float)L_21, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)L_22);
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_23 = L_19;
		float L_24 = V_2;
		float L_25 = V_3;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_26 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_26, ((float)il2cpp_codegen_add((float)L_24, (float)(1.0f))), ((float)il2cpp_codegen_add((float)L_25, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)L_26);
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_27 = L_23;
		float L_28 = V_4;
		float L_29 = V_5;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_30 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_30, ((float)il2cpp_codegen_subtract((float)L_28, (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)L_29, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)L_30);
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_31 = L_27;
		float L_32 = V_0;
		float L_33 = V_1;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_34 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_34, ((float)il2cpp_codegen_add((float)L_32, (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)L_33, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)L_34);
		return L_31;
	}

IL_00b4:
	{
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_35 = (ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)(ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08*)SZArrayNew(ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08_il2cpp_TypeInfo_var, (uint32_t)4);
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_36 = L_35;
		float L_37 = V_6;
		float L_38 = V_7;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_39 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_39, ((float)il2cpp_codegen_add((float)L_37, (float)(1.0f))), ((float)il2cpp_codegen_add((float)L_38, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)L_39);
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_40 = L_36;
		float L_41 = V_2;
		float L_42 = V_3;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_43 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_43, ((float)il2cpp_codegen_add((float)L_41, (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)L_42, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)L_43);
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_44 = L_40;
		float L_45 = V_4;
		float L_46 = V_5;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_47 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_47, ((float)il2cpp_codegen_subtract((float)L_45, (float)(1.0f))), ((float)il2cpp_codegen_add((float)L_46, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)L_47);
		ResultPointU5BU5D_t1BE48601D794AFD6561E68AC3B1D2F7A82E77E08* L_48 = L_44;
		float L_49 = V_0;
		float L_50 = V_1;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_51 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_51, ((float)il2cpp_codegen_subtract((float)L_49, (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)L_50, (float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)L_51);
		return L_48;
	}
}
// System.Boolean ZXing.Common.Detector.WhiteRectangleDetector::containsBlackPoint(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhiteRectangleDetector_containsBlackPoint_m47678F46343106CE1469B962F7B4F2D95F08440A (WhiteRectangleDetector_tE28D9A22AA61BCE5C17ABE0844D575FCF53EBFD5 * __this, int32_t ___a0, int32_t ___b1, int32_t ___fixed2, bool ___horizontal3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = ___horizontal3;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1 = ___a0;
		V_0 = L_1;
		goto IL_0026;
	}

IL_000e:
	{
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_2 = __this->get_image_0();
		int32_t L_3 = V_0;
		int32_t L_4 = ___fixed2;
		NullCheck(L_2);
		bool L_5;
		L_5 = BitMatrix_get_Item_mC2EFD12FF157DD1B4C42113EE81EF54540C44E29(L_2, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		return (bool)1;
	}

IL_0022:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___b1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0058;
	}

IL_0032:
	{
		int32_t L_9 = ___a0;
		V_1 = L_9;
		goto IL_0051;
	}

IL_0039:
	{
		BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * L_10 = __this->get_image_0();
		int32_t L_11 = ___fixed2;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		bool L_13;
		L_13 = BitMatrix_get_Item_mC2EFD12FF157DD1B4C42113EE81EF54540C44E29(L_10, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		return (bool)1;
	}

IL_004d:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = ___b1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0039;
		}
	}

IL_0058:
	{
		return (bool)0;
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
// System.Void ZXing.WriterException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_m6358D236E80C4B4524F5EDEAA33D7EE1F9EBB9CD (WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_m3C38C0DA83C0D29AE75C76C21EBBC47F7DAF9F80 (WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_mB6E23AFF75BEF72F31AD43C3825E530A5D5849D3 (WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113 * __this, String_t* ___message0, Exception_t * ___innerExc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerExc1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void ZXing.Datamatrix.Encoder.X12Encoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X12Encoder__ctor_mC343661286DF8760B13970F0D1EF2A663447CB07 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, const RuntimeMethod* method)
{
	{
		C40Encoder__ctor_m9ABA44AD70FE2A71AC16D94C01F5FE6948EC6505(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ZXing.Datamatrix.Encoder.X12Encoder::get_EncodingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X12Encoder_get_EncodingMode_mDF843D74902A8E2C617E0B06F86A759C2816A846 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, const RuntimeMethod* method)
{
	{
		return 3;
	}
}
// System.Void ZXing.Datamatrix.Encoder.X12Encoder::encode(ZXing.Datamatrix.Encoder.EncoderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X12Encoder_encode_mD26859D2005498B6DA0432608257174BD948FF40 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_006f;
	}

IL_000b:
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_1 = ___context0;
		NullCheck(L_1);
		Il2CppChar L_2;
		L_2 = EncoderContext_get_CurrentChar_mC3AB70066172BCEBAC6401C98A23DAE8E0F6BD56(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_3 = ___context0;
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		Il2CppChar L_6 = V_1;
		StringBuilder_t * L_7 = V_0;
		int32_t L_8;
		L_8 = VirtFuncInvoker2< int32_t, Il2CppChar, StringBuilder_t * >::Invoke(8 /* System.Int32 ZXing.Datamatrix.Encoder.C40Encoder::encodeChar(System.Char,System.Text.StringBuilder) */, __this, L_6, L_7);
		StringBuilder_t * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11%(int32_t)3)))
		{
			goto IL_006f;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_12 = ___context0;
		StringBuilder_t * L_13 = V_0;
		C40Encoder_writeNextTriplet_m40F5CC8D1421623885A6617FB5A97136517DA36E(L_12, L_13, /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_14 = ___context0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = EncoderContext_get_Message_m9E796FA953C8DB0F71A14B01F4BA34D1E93AD60E_inline(L_14, /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_16 = ___context0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 ZXing.Datamatrix.Encoder.C40Encoder::get_EncodingMode() */, __this);
		int32_t L_19;
		L_19 = HighLevelEncoder_lookAheadTest_mF1855D967606F852207943F687165596895498AD(L_15, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		int32_t L_20 = V_3;
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 ZXing.Datamatrix.Encoder.C40Encoder::get_EncodingMode() */, __this);
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_006f;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_22 = ___context0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline(L_22, L_23, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_006f:
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_24 = ___context0;
		NullCheck(L_24);
		bool L_25;
		L_25 = EncoderContext_get_HasMoreCharacters_mCA69CD64E2F10917382F3DBEC7921041512F52A4(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_000b;
		}
	}

IL_007a:
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_26 = ___context0;
		StringBuilder_t * L_27 = V_0;
		VirtActionInvoker2< EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 *, StringBuilder_t * >::Invoke(7 /* System.Void ZXing.Datamatrix.Encoder.C40Encoder::handleEOD(ZXing.Datamatrix.Encoder.EncoderContext,System.Text.StringBuilder) */, __this, L_26, L_27);
		return;
	}
}
// System.Int32 ZXing.Datamatrix.Encoder.X12Encoder::encodeChar(System.Char,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X12Encoder_encodeChar_m194B3456E0655C85F5149006219FDC2D2A0EFC70 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, Il2CppChar ___c0, StringBuilder_t * ___sb1, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___c0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_1 = ___sb1;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, 0, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0015:
	{
		Il2CppChar L_3 = ___c0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_4 = ___sb1;
		NullCheck(L_4);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_4, 1, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_002a:
	{
		Il2CppChar L_6 = ___c0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_003f;
		}
	}
	{
		StringBuilder_t * L_7 = ___sb1;
		NullCheck(L_7);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, 2, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_003f:
	{
		Il2CppChar L_9 = ___c0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_10 = ___sb1;
		NullCheck(L_10);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_10, 3, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0054:
	{
		Il2CppChar L_12 = ___c0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)48))))
		{
			goto IL_0077;
		}
	}
	{
		Il2CppChar L_13 = ___c0;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)57))))
		{
			goto IL_0077;
		}
	}
	{
		StringBuilder_t * L_14 = ___sb1;
		Il2CppChar L_15 = ___c0;
		NullCheck(L_14);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_14, ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)48))), (int32_t)4)))), /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0077:
	{
		Il2CppChar L_17 = ___c0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)65))))
		{
			goto IL_009b;
		}
	}
	{
		Il2CppChar L_18 = ___c0;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)90))))
		{
			goto IL_009b;
		}
	}
	{
		StringBuilder_t * L_19 = ___sb1;
		Il2CppChar L_20 = ___c0;
		NullCheck(L_19);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)65))), (int32_t)((int32_t)14))))), /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_009b:
	{
		Il2CppChar L_22 = ___c0;
		HighLevelEncoder_illegalCharacter_m4FAE344A8B52D234C240B208FA6BC8CBFD426F73(L_22, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return 1;
	}
}
// System.Void ZXing.Datamatrix.Encoder.X12Encoder::handleEOD(ZXing.Datamatrix.Encoder.EncoderContext,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X12Encoder_handleEOD_m3EBAFA077AD6A90BFEE0C790A96EB6A1755F7F24 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * ___context0, StringBuilder_t * ___buffer1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_0 = ___context0;
		NullCheck(L_0);
		EncoderContext_updateSymbolInfo_mF782DEE02931A243840D9E5BA1C60C774346BE24(L_0, /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_1 = ___context0;
		NullCheck(L_1);
		SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * L_2;
		L_2 = EncoderContext_get_SymbolInfo_m61D7CE6AB824BC77A620E764E169C4631C5A0DA9_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->get_dataCapacity_3();
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_4 = ___context0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = EncoderContext_get_CodewordCount_mFD0D2EC327035BF43EB45D506F3EAD0B9B8EFFB1(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_5));
		StringBuilder_t * L_6 = ___buffer1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_9 = ___context0;
		NullCheck(L_9);
		EncoderContext_writeCodeword_mED1E24415DDEBD40831B02FCF780B5CEEAD76422(L_9, ((int32_t)254), /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_10 = ___context0;
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_11);
		EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline(L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)2)), /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_13 = ___context0;
		NullCheck(L_13);
		EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline(L_13, 0, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_004c:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_15 = ___context0;
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_16);
		EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline(L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_0073;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_19 = ___context0;
		NullCheck(L_19);
		EncoderContext_writeCodeword_mED1E24415DDEBD40831B02FCF780B5CEEAD76422(L_19, ((int32_t)254), /*hidden argument*/NULL);
	}

IL_0073:
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_20 = ___context0;
		NullCheck(L_20);
		EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline(L_20, 0, /*hidden argument*/NULL);
	}

IL_007a:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BigIntegerLibrary.Base10BigInteger/DigitContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer__ctor_m230B52206BC1ADE7F834E9777EF377B87E38DC42 (DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_0 = (Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC*)(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC*)SZArrayNew(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)200));
		__this->set_digits_0(L_0);
		return;
	}
}
// System.Int64 BigIntegerLibrary.Base10BigInteger/DigitContainer::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DigitContainer_get_Item_m8B1251A814D0D3B96749FC70B71BC2D5DFEECEA7 (DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_1 = __this->get_digits_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = V_1;
		if (L_5)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((int64_t)((int64_t)0));
		goto IL_0020;
	}

IL_001a:
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_6 = V_1;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((int32_t)L_7%(int32_t)((int32_t)32)));
		int64_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Void BigIntegerLibrary.Base10BigInteger/DigitContainer::set_Item(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer_set_Item_m20AFD976244E4F8F0FC12449C03433CCD01D8C88 (DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4 * __this, int32_t ___index0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_2 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* G_B2_0 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* G_B1_0 = NULL;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_1 = __this->get_digits_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0025;
		}
	}
	{
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_6 = __this->get_digits_0();
		int32_t L_7 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_8 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_9 = L_8;
		V_2 = L_9;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_9);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_10 = V_2;
		G_B2_0 = L_10;
	}

IL_0025:
	{
		V_1 = G_B2_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_11 = V_1;
		int32_t L_12 = ___index0;
		int64_t L_13 = ___value1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_12%(int32_t)((int32_t)32)))), (int64_t)L_13);
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
// System.Void BigIntegerLibrary.BigInteger/DigitContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer__ctor_mD900B194398651DB37B21253AC63C071C00825ED (DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_0 = (Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC*)(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC*)SZArrayNew(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->set_digits_0(L_0);
		return;
	}
}
// System.Int64 BigIntegerLibrary.BigInteger/DigitContainer::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DigitContainer_get_Item_mD77F58DE1DD8B3E5E9CFEED56899705BAE20772E (DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)4));
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_1 = __this->get_digits_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = V_1;
		if (L_5)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((int64_t)((int64_t)0));
		goto IL_0020;
	}

IL_001a:
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_6 = V_1;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((int32_t)L_7%(int32_t)((int32_t)16)));
		int64_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Void BigIntegerLibrary.BigInteger/DigitContainer::set_Item(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer_set_Item_mB4F325090699CDFE556583313C55AE1C3DD32DCD (DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A * __this, int32_t ___index0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_2 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* G_B2_0 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* G_B1_0 = NULL;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)4));
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_1 = __this->get_digits_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0025;
		}
	}
	{
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_6 = __this->get_digits_0();
		int32_t L_7 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_8 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_9 = L_8;
		V_2 = L_9;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_9);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_10 = V_2;
		G_B2_0 = L_10;
	}

IL_0025:
	{
		V_1 = G_B2_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_11 = V_1;
		int32_t L_12 = ___index0;
		int64_t L_13 = ___value1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_12%(int32_t)((int32_t)16)))), (int64_t)L_13);
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
// System.Void ZXing.QrCode.Internal.DataMask/DataMask000::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask000__ctor_m03B9BEDC000E888B9476DD0E768449A6B7231567 (DataMask000_tB7D9A96154906CEEA05569EE720C1FD1A0BBC160 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZXing.QrCode.Internal.DataMask/DataMask000::isMasked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMask000_isMasked_mE39A505CE0E48CDC20549571248275DB0477BF65 (DataMask000_tB7D9A96154906CEEA05569EE720C1FD1A0BBC160 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = ___j1;
		return (bool)((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))&(int32_t)1))) == ((int32_t)0))? 1 : 0);
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
// System.Void ZXing.QrCode.Internal.DataMask/DataMask001::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask001__ctor_m4CDC8B7EC1E50963905AF6598AA890CD794146E8 (DataMask001_t5DEC848C94B6CC708EB62C9B47A548C5B5CCB1FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZXing.QrCode.Internal.DataMask/DataMask001::isMasked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMask001_isMasked_m3EB01BD8987BCC105BA3E8FB85AC0BAE7AD2BA24 (DataMask001_t5DEC848C94B6CC708EB62C9B47A548C5B5CCB1FB * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0);
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
// System.Void ZXing.QrCode.Internal.DataMask/DataMask010::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask010__ctor_mFB3B33369BA8E6F02E9BDE59E8B5923A18BD9064 (DataMask010_tDC7F707EB8576881899F8F8CAC0F6FA0B6ABD346 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZXing.QrCode.Internal.DataMask/DataMask010::isMasked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMask010_isMasked_m94B14E38D8421CAA544A942B8ADC20EB7885086E (DataMask010_tDC7F707EB8576881899F8F8CAC0F6FA0B6ABD346 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___j1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0%(int32_t)3))) == ((int32_t)0))? 1 : 0);
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
// System.Void ZXing.QrCode.Internal.DataMask/DataMask011::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask011__ctor_m9CDC6945C05086745EFD1DBFCF93D72746EE2049 (DataMask011_tEB6241E8DE17300C0171FBDD57E1D4DBC4B17B75 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZXing.QrCode.Internal.DataMask/DataMask011::isMasked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMask011_isMasked_mB8981638663AC40E063168AE97A5679CD5BFD7AE (DataMask011_tEB6241E8DE17300C0171FBDD57E1D4DBC4B17B75 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = ___j1;
		return (bool)((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))%(int32_t)3))) == ((int32_t)0))? 1 : 0);
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
// System.Void ZXing.QrCode.Internal.DataMask/DataMask100::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask100__ctor_m2C37A06EFA03BC9E09C47E88C0EACDE6E7A04BDF (DataMask100_t930E9C48681C8C4A8D16220A24F11BCA79255325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZXing.QrCode.Internal.DataMask/DataMask100::isMasked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMask100_isMasked_mC33A78764EC20571F4794F22EF897EB72F0A6627 (DataMask100_t930E9C48681C8C4A8D16220A24F11BCA79255325 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = ___j1;
		return (bool)((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((uint32_t)L_0>>1)), (int32_t)((int32_t)((int32_t)L_1/(int32_t)3))))&(int32_t)1))) == ((int32_t)0))? 1 : 0);
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
// System.Void ZXing.QrCode.Internal.DataMask/DataMask101::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask101__ctor_mE3221320E0EFE7FF3B1B76AD799B627F46B49C1C (DataMask101_t22F6FD0C3E833CC623FA00DB32E633758B9DCAF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZXing.QrCode.Internal.DataMask/DataMask101::isMasked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMask101_isMasked_m2F9CA7854F1F001041B2AED8BDF168F11AB3F700 (DataMask101_t22F6FD0C3E833CC623FA00DB32E633758B9DCAF8 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = ___j1;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2&(int32_t)1)), (int32_t)((int32_t)((int32_t)L_3%(int32_t)3))))) == ((int32_t)0))? 1 : 0);
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
// System.Void ZXing.QrCode.Internal.DataMask/DataMask110::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask110__ctor_m88357FFA223E35CD8EB717D08BDF163B5949A3F7 (DataMask110_tE3491C60412158400F2111AEAE2D10D7A2409D98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZXing.QrCode.Internal.DataMask/DataMask110::isMasked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMask110_isMasked_mADCC4D696EE26EB53A807C0CC15E7D345DB65374 (DataMask110_tE3491C60412158400F2111AEAE2D10D7A2409D98 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = ___j1;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		return (bool)((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2&(int32_t)1)), (int32_t)((int32_t)((int32_t)L_3%(int32_t)3))))&(int32_t)1))) == ((int32_t)0))? 1 : 0);
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
// System.Void ZXing.QrCode.Internal.DataMask/DataMask111::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataMask111__ctor_m4CA5F8B169A4DFBCA55097A783DAF17523967EC4 (DataMask111_t871F4260B77CC64A34F4460D953A5F041D9829B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataMask_t263DD8FC7556D7E25C15013423AE412AA2D2C2D1_il2cpp_TypeInfo_var);
		DataMask__ctor_mE8C128E2255BCC09428C41735D6CEAA3C1220575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ZXing.QrCode.Internal.DataMask/DataMask111::isMasked(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataMask111_isMasked_m6B73E81AC7F36A70705307E2C11B2A250C4E2E05 (DataMask111_t871F4260B77CC64A34F4460D953A5F041D9829B2 * __this, int32_t ___i0, int32_t ___j1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = ___j1;
		int32_t L_2 = ___i0;
		int32_t L_3 = ___j1;
		return (bool)((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))&(int32_t)1)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))%(int32_t)3))))&(int32_t)1))) == ((int32_t)0))? 1 : 0);
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
// System.Void ZXing.Aztec.Internal.Detector/Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mF8ADFD4D1DB627CFC9E2D99451E5BAD78FC424C1 (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___x0;
		Point_set_X_m616AD1E814DE3F2D3EE7F16A266942A7D28EE12F_inline(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___y1;
		Point_set_Y_m97E75208C4323268BE5D98A368F6FDE2ECE5B5B2_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_X_m0C7A97A4C65347E9F352650E16EA3B3E2DF76D81 (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CXU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.Detector/Point::set_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_X_m616AD1E814DE3F2D3EE7F16A266942A7D28EE12F (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CXU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ZXing.Aztec.Internal.Detector/Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_get_Y_mEE2CDFE3BDBE26D95F4C1F8E46C702D5C87F0A88 (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CYU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ZXing.Aztec.Internal.Detector/Point::set_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point_set_Y_m97E75208C4323268BE5D98A368F6FDE2ECE5B5B2 (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CYU3Ek__BackingField_1(L_0);
		return;
	}
}
// ZXing.ResultPoint ZXing.Aztec.Internal.Detector/Point::toResultPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * Point_toResultPoint_m1187717A7A22E5E98FBA024C0C1A089CFC2A59BF (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Point_get_X_m0C7A97A4C65347E9F352650E16EA3B3E2DF76D81_inline(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Point_get_Y_mEE2CDFE3BDBE26D95F4C1F8E46C702D5C87F0A88_inline(__this, /*hidden argument*/NULL);
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_2 = (ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 *)il2cpp_codegen_object_new(ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11_il2cpp_TypeInfo_var);
		ResultPoint__ctor_mCB397BBD73DA1EFB7B12F6897157D63160C03D98(L_2, ((float)((float)L_0)), ((float)((float)L_1)), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String ZXing.Aztec.Internal.Detector/Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mE2946FB77A346DD520535336BF13FB488A6B7F63 (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		int32_t L_3;
		L_3 = Point_get_X_m0C7A97A4C65347E9F352650E16EA3B3E2DF76D81_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		Il2CppChar L_7 = ((Il2CppChar)((int32_t)32));
		RuntimeObject * L_8 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_6;
		int32_t L_10;
		L_10 = Point_get_Y_mEE2CDFE3BDBE26D95F4C1F8E46C702D5C87F0A88_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		Il2CppChar L_14 = ((Il2CppChar)((int32_t)62));
		RuntimeObject * L_15 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_15);
		String_t* L_16;
		L_16 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_13, /*hidden argument*/NULL);
		return L_16;
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
// System.Void ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::.ctor(ZXing.ResultPoint,ZXing.ResultPoint,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointsAndTransitions__ctor_mDDA1307DED6B7DA15EB73C181EC90C738EAB9FBA (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___from0, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___to1, int32_t ___transitions2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = ___from0;
		ResultPointsAndTransitions_set_From_mBF8B41923E54A017DBEA8AAB26A142CCDCE63726_inline(__this, L_0, /*hidden argument*/NULL);
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_1 = ___to1;
		ResultPointsAndTransitions_set_To_mCE0E42AE6E7A83DB761194499A39F43975D8D443_inline(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___transitions2;
		ResultPointsAndTransitions_set_Transitions_mEBB59893D3010A1EEE2AC0BA9FF6D99F5C046577_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::get_From()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ResultPointsAndTransitions_get_From_mCA5DEA093BF2DF39D80DB6EBB809D97895E0C1A3 (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method)
{
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = __this->get_U3CFromU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::set_From(ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_From_mBF8B41923E54A017DBEA8AAB26A142CCDCE63726 (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___value0, const RuntimeMethod* method)
{
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = ___value0;
		__this->set_U3CFromU3Ek__BackingField_0(L_0);
		return;
	}
}
// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::get_To()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ResultPointsAndTransitions_get_To_m32EB84FED92621C8C3F22F71A71E6A351655F9CE (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method)
{
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = __this->get_U3CToU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::set_To(ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_To_mCE0E42AE6E7A83DB761194499A39F43975D8D443 (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___value0, const RuntimeMethod* method)
{
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = ___value0;
		__this->set_U3CToU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::get_Transitions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResultPointsAndTransitions_get_Transitions_m9060097003A9942565FF65D936A95BB2B6F8F4DD (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTransitionsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::set_Transitions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_Transitions_mEBB59893D3010A1EEE2AC0BA9FF6D99F5C046577 (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTransitionsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResultPointsAndTransitions_ToString_m9E73A704DBB484CE1468C4DD25C0B17478C6B80D (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_2;
		L_2 = ResultPointsAndTransitions_get_From_mCA5DEA093BF2DF39D80DB6EBB809D97895E0C1A3_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_5;
		L_5 = ResultPointsAndTransitions_get_To_m32EB84FED92621C8C3F22F71A71E6A351655F9CE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_4;
		Il2CppChar L_7 = ((Il2CppChar)((int32_t)47));
		RuntimeObject * L_8 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_6;
		int32_t L_10;
		L_10 = ResultPointsAndTransitions_get_Transitions_m9060097003A9942565FF65D936A95BB2B6F8F4DD_inline(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_9, /*hidden argument*/NULL);
		return L_13;
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
// System.Void ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitionsComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointsAndTransitionsComparator__ctor_m982CF3390F3DAB4FBD7F62E5D8FDDCE5CF3FEB8C (ResultPointsAndTransitionsComparator_t62A8B240651428EF5F5E621E2EDF7361489AB0AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitionsComparator::Compare(ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions,ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResultPointsAndTransitionsComparator_Compare_mC39BAF5B22CB295AA8D5F3BAFC58D3867457C46D (ResultPointsAndTransitionsComparator_t62A8B240651428EF5F5E621E2EDF7361489AB0AF * __this, ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * ___o10, ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * ___o21, const RuntimeMethod* method)
{
	{
		ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * L_0 = ___o10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ResultPointsAndTransitions_get_Transitions_m9060097003A9942565FF65D936A95BB2B6F8F4DD_inline(L_0, /*hidden argument*/NULL);
		ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * L_2 = ___o21;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ResultPointsAndTransitions_get_Transitions_m9060097003A9942565FF65D936A95BB2B6F8F4DD_inline(L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3));
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
// System.Void ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CenterComparator__ctor_m1EC7A32ABAC2C610E0BAA7D7EA3E85B22300DA3B (CenterComparator_t6DBBFA99C6D5673E07F6C181D9692D8E6F3F084B * __this, float ___f0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		float L_0 = ___f0;
		__this->set_average_0(L_0);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator::Compare(ZXing.QrCode.Internal.FinderPattern,ZXing.QrCode.Internal.FinderPattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CenterComparator_Compare_m8707CDEE4C65F4F8D23CA5734277732CFE09A6BA (CenterComparator_t6DBBFA99C6D5673E07F6C181D9692D8E6F3F084B * __this, FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * ___x0, FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * L_0 = ___y1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = FinderPattern_get_Count_m86C1A1E94EDD8ADF74C3379DF915B3185AAA48EF_inline(L_0, /*hidden argument*/NULL);
		FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * L_2 = ___x0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = FinderPattern_get_Count_m86C1A1E94EDD8ADF74C3379DF915B3185AAA48EF_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0053;
		}
	}
	{
		FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * L_4 = ___y1;
		NullCheck(L_4);
		float L_5;
		L_5 = FinderPattern_get_EstimatedModuleSize_m7947E55BECA4CA1D3B7D20F1B6AD58A49845FF87_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_average_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		V_0 = L_7;
		FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * L_8 = ___x0;
		NullCheck(L_8);
		float L_9;
		L_9 = FinderPattern_get_EstimatedModuleSize_m7947E55BECA4CA1D3B7D20F1B6AD58A49845FF87_inline(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_average_0();
		float L_11;
		L_11 = fabsf(((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)));
		V_1 = L_11;
		float L_12 = V_0;
		float L_13 = V_1;
		if ((!(((float)L_12) < ((float)L_13))))
		{
			goto IL_0044;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_0052;
	}

IL_0044:
	{
		float L_14 = V_0;
		float L_15 = V_1;
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0051;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0052;
	}

IL_0051:
	{
		G_B6_0 = (-1);
	}

IL_0052:
	{
		return G_B6_0;
	}

IL_0053:
	{
		FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * L_16 = ___y1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = FinderPattern_get_Count_m86C1A1E94EDD8ADF74C3379DF915B3185AAA48EF_inline(L_16, /*hidden argument*/NULL);
		FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * L_18 = ___x0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = FinderPattern_get_Count_m86C1A1E94EDD8ADF74C3379DF915B3185AAA48EF_inline(L_18, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_19));
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
// System.Void ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FurthestFromAverageComparator__ctor_mFD0BCC969A73155347DE6BFB40B1152ACDB1AF5B (FurthestFromAverageComparator_t7FE1F57CCFE8447EA714E81AD70E55AF25014AB0 * __this, float ___f0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		float L_0 = ___f0;
		__this->set_average_0(L_0);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator::Compare(ZXing.QrCode.Internal.FinderPattern,ZXing.QrCode.Internal.FinderPattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FurthestFromAverageComparator_Compare_mEF586BBE451F6ADBF1806710C02A810A35A0A435 (FurthestFromAverageComparator_t7FE1F57CCFE8447EA714E81AD70E55AF25014AB0 * __this, FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * ___x0, FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t G_B5_0 = 0;
	{
		FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * L_0 = ___y1;
		NullCheck(L_0);
		float L_1;
		L_1 = FinderPattern_get_EstimatedModuleSize_m7947E55BECA4CA1D3B7D20F1B6AD58A49845FF87_inline(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_average_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = fabsf(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		V_0 = L_3;
		FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * L_4 = ___x0;
		NullCheck(L_4);
		float L_5;
		L_5 = FinderPattern_get_EstimatedModuleSize_m7947E55BECA4CA1D3B7D20F1B6AD58A49845FF87_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_average_0();
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		V_1 = L_7;
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0033;
		}
	}
	{
		G_B5_0 = (-1);
		goto IL_0041;
	}

IL_0033:
	{
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0040;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0041;
	}

IL_0040:
	{
		G_B5_0 = 1;
	}

IL_0041:
	{
		return G_B5_0;
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
// System.Void ZXing.Datamatrix.Internal.Version/ECB::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECB__ctor_m41ABC29328A77F7C38BCC855303245EBA9B91DD5 (ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * __this, int32_t ___count0, int32_t ___dataCodewords1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		__this->set_count_0(L_0);
		int32_t L_1 = ___dataCodewords1;
		__this->set_dataCodewords_1(L_1);
		return;
	}
}
// System.Int32 ZXing.Datamatrix.Internal.Version/ECB::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECB_get_Count_m92F990086BC5CBB776E1CE60282F27E9E3D7E62D (ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		return L_0;
	}
}
// System.Int32 ZXing.Datamatrix.Internal.Version/ECB::get_DataCodewords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECB_get_DataCodewords_mBDFA074B5E1304CC8F43E22BE245A84600AC32E9 (ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dataCodewords_1();
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
// System.Void ZXing.Datamatrix.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.Datamatrix.Internal.Version/ECB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECBlocks__ctor_mA4331ED0C3DE088752C92F63A9C2446D77CDB8D9 (ECBlocks_tC3295C9DC633FC5A71E2E88652917CCA881C3105 * __this, int32_t ___ecCodewords0, ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * ___ecBlocks1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ecCodewords0;
		__this->set_ecCodewords_0(L_0);
		ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* L_1 = (ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884*)(ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884*)SZArrayNew(ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884_il2cpp_TypeInfo_var, (uint32_t)1);
		ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* L_2 = L_1;
		ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * L_3 = ___ecBlocks1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 *)L_3);
		__this->set__ecBlocksValue_1(L_2);
		return;
	}
}
// System.Void ZXing.Datamatrix.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.Datamatrix.Internal.Version/ECB,ZXing.Datamatrix.Internal.Version/ECB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECBlocks__ctor_mFDE0C38CAAC7819B92C0FFCF1D4A66C308F42EAC (ECBlocks_tC3295C9DC633FC5A71E2E88652917CCA881C3105 * __this, int32_t ___ecCodewords0, ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * ___ecBlocks11, ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * ___ecBlocks22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ecCodewords0;
		__this->set_ecCodewords_0(L_0);
		ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* L_1 = (ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884*)(ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884*)SZArrayNew(ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884_il2cpp_TypeInfo_var, (uint32_t)2);
		ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* L_2 = L_1;
		ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * L_3 = ___ecBlocks11;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 *)L_3);
		ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* L_4 = L_2;
		ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 * L_5 = ___ecBlocks22;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (ECB_tC7982AC49CD68F830EE9EBB3345BD0C0ACDD1E31 *)L_5);
		__this->set__ecBlocksValue_1(L_4);
		return;
	}
}
// System.Int32 ZXing.Datamatrix.Internal.Version/ECBlocks::get_ECCodewords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_ECCodewords_m30CD5893EC042F3FC99A6698B6FF73400A25BB89 (ECBlocks_tC3295C9DC633FC5A71E2E88652917CCA881C3105 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewords_0();
		return L_0;
	}
}
// ZXing.Datamatrix.Internal.Version/ECB[] ZXing.Datamatrix.Internal.Version/ECBlocks::get_ECBlocksValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* ECBlocks_get_ECBlocksValue_mCFD0B69EE702D08F5F9E2C7AC5B048B0C28A2628 (ECBlocks_tC3295C9DC633FC5A71E2E88652917CCA881C3105 * __this, const RuntimeMethod* method)
{
	{
		ECBU5BU5D_t7D7AA62026AC94FA56662A7FAF771D310AB93884* L_0 = __this->get__ecBlocksValue_1();
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
// System.Void ZXing.QrCode.Internal.Version/ECB::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECB__ctor_m5C75DC266AD2E78931438579B12443D66B2F80C7 (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, int32_t ___count0, int32_t ___dataCodewords1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		__this->set_count_0(L_0);
		int32_t L_1 = ___dataCodewords1;
		__this->set_dataCodewords_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECB_get_Count_mBBB7DF65CF817061A3B11EDBF5E4DA8408B11031 (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_DataCodewords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECB_get_DataCodewords_m6025220557C7EC66208D3CFEF2FB92E55A1D5C2B (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dataCodewords_1();
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
// System.Void ZXing.QrCode.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.QrCode.Internal.Version/ECB[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECBlocks__ctor_m76F39A48F9CE2A4785B5879FB9E1A5B4C66AD3BE (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, int32_t ___ecCodewordsPerBlock0, ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* ___ecBlocks1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ecCodewordsPerBlock0;
		__this->set_ecCodewordsPerBlock_0(L_0);
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_1 = ___ecBlocks1;
		__this->set_ecBlocks_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_ECCodewordsPerBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_ECCodewordsPerBlock_m26C8D6DCD80B7B59559352471D1B64F45C5666B7 (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_NumBlocks_mC805639DC2E4BE500A74BAB84E03658FF495FE8A (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * V_1 = NULL;
	ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_0 = __this->get_ecBlocks_1();
		V_2 = L_0;
		V_3 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ECB_get_Count_mBBB7DF65CF817061A3B11EDBF5E4DA8408B11031_inline(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_3;
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_TotalECCodewords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_TotalECCodewords_mCD4A6620A46E9224714F43957A181484EB9B170B (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		int32_t L_1;
		L_1 = ECBlocks_get_NumBlocks_mC805639DC2E4BE500A74BAB84E03658FF495FE8A(__this, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
	}
}
// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::getECBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* ECBlocks_getECBlocks_mB947E2C8EC8B7BACD93095A73EBA4BEBAE4C1E94 (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method)
{
	{
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_0 = __this->get_ecBlocks_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_mB8D50284B8905D16958738C2564BBDF8C6C998E4_inline (BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_width_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_m8B8828EB8ECCC753AA9CC27AD212D2BA40345368_inline (BitMatrix_t897FF32285A0ED98A9E37ED1239AF244CEDEAF27 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_height_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_pos_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_pos_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EncoderContext_get_Message_m9E796FA953C8DB0F71A14B01F4BA34D1E93AD60E_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_msg_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, int32_t ___encoding0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___encoding0;
		__this->set_newEncoding_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * EncoderContext_get_SymbolInfo_m61D7CE6AB824BC77A620E764E169C4631C5A0DA9_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method)
{
	{
		SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * L_0 = __this->get_symbolInfo_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_X_m616AD1E814DE3F2D3EE7F16A266942A7D28EE12F_inline (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CXU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Point_set_Y_m97E75208C4323268BE5D98A368F6FDE2ECE5B5B2_inline (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CYU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_X_m0C7A97A4C65347E9F352650E16EA3B3E2DF76D81_inline (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CXU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Point_get_Y_mEE2CDFE3BDBE26D95F4C1F8E46C702D5C87F0A88_inline (Point_tFAAD81D86B7232B372EF81799A98C2488F68127D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CYU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_From_mBF8B41923E54A017DBEA8AAB26A142CCDCE63726_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___value0, const RuntimeMethod* method)
{
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = ___value0;
		__this->set_U3CFromU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_To_mCE0E42AE6E7A83DB761194499A39F43975D8D443_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ___value0, const RuntimeMethod* method)
{
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = ___value0;
		__this->set_U3CToU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResultPointsAndTransitions_set_Transitions_mEBB59893D3010A1EEE2AC0BA9FF6D99F5C046577_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTransitionsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ResultPointsAndTransitions_get_From_mCA5DEA093BF2DF39D80DB6EBB809D97895E0C1A3_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method)
{
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = __this->get_U3CFromU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * ResultPointsAndTransitions_get_To_m32EB84FED92621C8C3F22F71A71E6A351655F9CE_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method)
{
	{
		ResultPoint_t63AB2A36D1EA4C8B319417E1B9E56DDE3F724E11 * L_0 = __this->get_U3CToU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResultPointsAndTransitions_get_Transitions_m9060097003A9942565FF65D936A95BB2B6F8F4DD_inline (ResultPointsAndTransitions_tB0E5F79AE91957BF9B3ED185B687F06506A2BC32 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTransitionsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FinderPattern_get_Count_m86C1A1E94EDD8ADF74C3379DF915B3185AAA48EF_inline (FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FinderPattern_get_EstimatedModuleSize_m7947E55BECA4CA1D3B7D20F1B6AD58A49845FF87_inline (FinderPattern_t7EF0486F577BCD99143075D5CD23DA8E6F47DAD2 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_estimatedModuleSize_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECB_get_Count_mBBB7DF65CF817061A3B11EDBF5E4DA8408B11031_inline (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		return L_0;
	}
}
