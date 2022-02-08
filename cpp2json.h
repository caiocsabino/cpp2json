#ifndef CPP2JSON_H
#define CPP2JSON_H

// Supports most common-built in types, containers, references, raw pointers and std::shared_ptr.

#define SERIALISE(x) 	template<class R> void serialise(R& r) const { r x; }
#define DESERIALISE(x) 	template<class R> void deserialise(R& r) { r x; }

// Macros for declaring fields as serialisable.
// Supports 100 entries, more can be added if needed.
// check code generation at: https://onecompiler.com/python/3xsb5tjw6

//<generated_code>
#define PP_NARG(...) PP_NARG_(__VA_ARGS__,PP_RSEQ_N())
#define PP_NARG_(...) PP_ARG_N(__VA_ARGS__)
#define PP_ARG_N(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98,_99,_100,N,...) N
#define PP_RSEQ_N() 100,99,98,97,96,95,94,93,92,91,90,89,88,87,86,85,84,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,65,64,63,62,61,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0
#define Paste(a,b) a ## b
#define XPASTE(a,b) Paste(a,b)
#define c1(attr) ("" #attr "", attr)
#define c2(arg0,arg1) c1(arg0) c1(arg1)
#define c3(arg0,arg1,arg2) c1(arg0) c2(arg1,arg2)
#define c4(arg0,arg1,arg2,arg3) c1(arg0) c3(arg1,arg2,arg3)
#define c5(arg0,arg1,arg2,arg3,arg4) c1(arg0) c4(arg1,arg2,arg3,arg4)
#define c6(arg0,arg1,arg2,arg3,arg4,arg5) c1(arg0) c5(arg1,arg2,arg3,arg4,arg5)
#define c7(arg0,arg1,arg2,arg3,arg4,arg5,arg6) c1(arg0) c6(arg1,arg2,arg3,arg4,arg5,arg6)
#define c8(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7) c1(arg0) c7(arg1,arg2,arg3,arg4,arg5,arg6,arg7)
#define c9(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) c1(arg0) c8(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8)
#define c10(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9) c1(arg0) c9(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9)
#define c11(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10) c1(arg0) c10(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10)
#define c12(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11) c1(arg0) c11(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11)
#define c13(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12) c1(arg0) c12(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12)
#define c14(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13) c1(arg0) c13(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13)
#define c15(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14) c1(arg0) c14(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14)
#define c16(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15) c1(arg0) c15(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15)
#define c17(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16) c1(arg0) c16(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16)
#define c18(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17) c1(arg0) c17(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17)
#define c19(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18) c1(arg0) c18(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18)
#define c20(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19) c1(arg0) c19(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19)
#define c21(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20) c1(arg0) c20(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20)
#define c22(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21) c1(arg0) c21(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21)
#define c23(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22) c1(arg0) c22(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22)
#define c24(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23) c1(arg0) c23(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23)
#define c25(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24) c1(arg0) c24(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24)
#define c26(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25) c1(arg0) c25(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25)
#define c27(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26) c1(arg0) c26(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26)
#define c28(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27) c1(arg0) c27(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27)
#define c29(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28) c1(arg0) c28(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28)
#define c30(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29) c1(arg0) c29(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29)
#define c31(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30) c1(arg0) c30(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30)
#define c32(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31) c1(arg0) c31(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31)
#define c33(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32) c1(arg0) c32(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32)
#define c34(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33) c1(arg0) c33(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33)
#define c35(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34) c1(arg0) c34(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34)
#define c36(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35) c1(arg0) c35(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35)
#define c37(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36) c1(arg0) c36(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36)
#define c38(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37) c1(arg0) c37(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37)
#define c39(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38) c1(arg0) c38(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38)
#define c40(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39) c1(arg0) c39(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39)
#define c41(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40) c1(arg0) c40(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40)
#define c42(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41) c1(arg0) c41(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41)
#define c43(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42) c1(arg0) c42(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42)
#define c44(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43) c1(arg0) c43(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43)
#define c45(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44) c1(arg0) c44(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44)
#define c46(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45) c1(arg0) c45(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45)
#define c47(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46) c1(arg0) c46(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46)
#define c48(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47) c1(arg0) c47(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47)
#define c49(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48) c1(arg0) c48(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48)
#define c50(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49) c1(arg0) c49(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49)
#define c51(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50) c1(arg0) c50(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50)
#define c52(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51) c1(arg0) c51(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51)
#define c53(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52) c1(arg0) c52(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52)
#define c54(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53) c1(arg0) c53(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53)
#define c55(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54) c1(arg0) c54(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54)
#define c56(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55) c1(arg0) c55(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55)
#define c57(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56) c1(arg0) c56(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56)
#define c58(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57) c1(arg0) c57(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57)
#define c59(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58) c1(arg0) c58(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58)
#define c60(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59) c1(arg0) c59(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59)
#define c61(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60) c1(arg0) c60(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60)
#define c62(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61) c1(arg0) c61(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61)
#define c63(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62) c1(arg0) c62(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62)
#define c64(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63) c1(arg0) c63(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63)
#define c65(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64) c1(arg0) c64(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64)
#define c66(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65) c1(arg0) c65(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65)
#define c67(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66) c1(arg0) c66(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66)
#define c68(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67) c1(arg0) c67(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67)
#define c69(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68) c1(arg0) c68(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68)
#define c70(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69) c1(arg0) c69(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69)
#define c71(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70) c1(arg0) c70(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70)
#define c72(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71) c1(arg0) c71(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71)
#define c73(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72) c1(arg0) c72(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72)
#define c74(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73) c1(arg0) c73(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73)
#define c75(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74) c1(arg0) c74(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74)
#define c76(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75) c1(arg0) c75(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75)
#define c77(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76) c1(arg0) c76(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76)
#define c78(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77) c1(arg0) c77(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77)
#define c79(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78) c1(arg0) c78(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78)
#define c80(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79) c1(arg0) c79(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79)
#define c81(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80) c1(arg0) c80(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80)
#define c82(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81) c1(arg0) c81(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81)
#define c83(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82) c1(arg0) c82(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82)
#define c84(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83) c1(arg0) c83(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83)
#define c85(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84) c1(arg0) c84(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84)
#define c86(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85) c1(arg0) c85(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85)
#define c87(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86) c1(arg0) c86(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86)
#define c88(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87) c1(arg0) c87(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87)
#define c89(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88) c1(arg0) c88(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88)
#define c90(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89) c1(arg0) c89(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89)
#define c91(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90) c1(arg0) c90(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90)
#define c92(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91) c1(arg0) c91(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91)
#define c93(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92) c1(arg0) c92(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92)
#define c94(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93) c1(arg0) c93(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93)
#define c95(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94) c1(arg0) c94(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94)
#define c96(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94,arg95) c1(arg0) c95(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94,arg95)
#define c97(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94,arg95,arg96) c1(arg0) c96(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94,arg95,arg96)
#define c98(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94,arg95,arg96,arg97) c1(arg0) c97(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94,arg95,arg96,arg97)
#define c99(arg0,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94,arg95,arg96,arg97,arg98) c1(arg0) c98(arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8,arg9,arg10,arg11,arg12,arg13,arg14,arg15,arg16,arg17,arg18,arg19,arg20,arg21,arg22,arg23,arg24,arg25,arg26,arg27,arg28,arg29,arg30,arg31,arg32,arg33,arg34,arg35,arg36,arg37,arg38,arg39,arg40,arg41,arg42,arg43,arg44,arg45,arg46,arg47,arg48,arg49,arg50,arg51,arg52,arg53,arg54,arg55,arg56,arg57,arg58,arg59,arg60,arg61,arg62,arg63,arg64,arg65,arg66,arg67,arg68,arg69,arg70,arg71,arg72,arg73,arg74,arg75,arg76,arg77,arg78,arg79,arg80,arg81,arg82,arg83,arg84,arg85,arg86,arg87,arg88,arg89,arg90,arg91,arg92,arg93,arg94,arg95,arg96,arg97,arg98)
#define c_(M, ...) M(__VA_ARGS__)
//</generated_code>

#define SERIALISATION(...)	SERIALISE 																	\
							(    																		\
								c_(XPASTE(c, PP_NARG(__VA_ARGS__)), __VA_ARGS__) 						\
							)																			\
							DESERIALISE																	\
							(    																		\
								c_(XPASTE(c, PP_NARG(__VA_ARGS__)), __VA_ARGS__) 						\
							)																			\
							friend class Cpp2JsonReader;												\
							friend class Cpp2JsonWriter;												\


#define JSON_MAP_KEY_TAG "_json_map_key_"
#define JSON_MAP_VALUE_TAG "_json_map_value_"

#include "rapidjson/document.h"

#include <sstream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include <stack>

class Cpp2JsonReader
{
public:

	Cpp2JsonReader(const std::string& inputStr, rapidjson::Document* const document)
	{
		if (document->Parse<0>(inputStr.c_str()).HasParseError())
        {
            assert(false);
        }

		documentToParse.push(document);

	}

	template<class T>
	auto read(T& obj) -> decltype(obj.deserialise(*this), void())
	{
		obj = T();

		obj.deserialise(*this);

		documentToParse.pop();
	}

	template<class T>
	Cpp2JsonReader& operator()(const char* name, T& field)
	{
		auto document = documentToParse.top();

		if (document->HasMember(name))
		{
			if ((*document)[name].IsObject())
			{
				const rapidjson::Value& itemElement = (*document)[name];
				documentToParse.push(&itemElement);
			}

			read(field, name, *document);
		}
		else
		{
			assert(false);
		}

		return *this;
	}

private:

	template<class T>
	auto read(T& obj, const char*  fieldName, const rapidjson::Value& document) -> decltype(obj.deserialise(*this), void())
	{
		obj = T();

		obj.deserialise(*this);

		documentToParse.pop();
	}

	template<class T>
	auto read(T* obj, const char*  fieldName, const rapidjson::Value& document) -> decltype(obj->serialise(*this), void())
	{
		obj->deserialise(*this);

		documentToParse.pop();
	}

	template<class T>
	auto read(std::shared_ptr<T> obj, const char*  fieldName, const rapidjson::Value& document) -> decltype(obj->serialise(*this), void())
	{
		obj->deserialise(*this);

		documentToParse.pop();
	}

	void read(std::string& value, const char*  fieldName, const rapidjson::Value& document) 
	{
		value = document[fieldName].GetString();
	}

	void read(int& value, const char*  fieldName, const rapidjson::Value& document)
	{
		value = document[fieldName].GetInt();
	}

	void read(float& value, const char* fieldName, const rapidjson::Value& document) 
	{
		value = document[fieldName].GetDouble();
	}

	void read(double& value, const char* fieldName, const rapidjson::Value& document) 
	{
		value = document[fieldName].GetDouble();
	}

	void readFromVectorEntry(std::string& value, const rapidjson::Value& document) 
	{
		value = document.GetString();
	}

	void readFromVectorEntry(int& value, const rapidjson::Value& document)
	{
		value = document.GetInt();
	}

	void readFromVectorEntry(float& value, const rapidjson::Value& document) 
	{
		value = document.GetDouble();
	}

	void readFromVectorEntry(double& value, const rapidjson::Value& document) 
	{
		value = document.GetDouble();
	}

	template<class T>
	auto readFromVectorEntry(T& obj, const rapidjson::Value& document) -> decltype(obj.deserialise(*this), void())
	{
		obj.deserialise(*this);
	}

	template<class T>
	void addNewVectorEntry(std::vector<T>& vector, const rapidjson::Value& document) 
	{
		T newEntry = T();

		readFromVectorEntry(newEntry, document);

		vector.push_back(newEntry);
	}

	template<class T>
	void addNewVectorEntry(std::vector<T*>& vector, const rapidjson::Value& document) 
	{
		T* newEntry = new T();

		newEntry->deserialise(*this);

		vector.push_back(newEntry);
	}

	template<class T>
	void addNewVectorEntry(std::vector<std::shared_ptr<T>>& vector, const rapidjson::Value& document) 
	{
		std::shared_ptr<T> newEntry = std::make_shared<T>();

		newEntry->deserialise(*this);

		vector.push_back(newEntry);
	}

	template<typename T, typename R>
	void addNewMapEntry(std::map<T, R>& map, T& key, const rapidjson::Value& document) 
	{
		R newValue = R();

		read(newValue, JSON_MAP_VALUE_TAG, document);

		map[key] = newValue;
	}

	template<typename T, typename R>
	void addNewMapEntry(std::map<T, R*>& map, T& key, const rapidjson::Value& document) 
	{
		R* newValue = new R();

		read(newValue, JSON_MAP_VALUE_TAG, document);

		map[key] = newValue;
	}

	template<typename T, typename R>
	void addNewMapEntry(std::map<T, std::shared_ptr<R>>& map, T& key, const rapidjson::Value& document) 
	{
		std::shared_ptr<R> newValue = std::make_shared<R>();

		read(newValue, JSON_MAP_VALUE_TAG, document);

		map[key] = newValue;
	}

	template<class T>
	void read(std::vector<T>& value, const char* fieldName, const rapidjson::Value& document) 
	{
		value = std::vector<T>();

		if (document[fieldName].IsArray())
		{
			const rapidjson::Value& itemsArray = document[fieldName];
			for (rapidjson::SizeType i = 0; i < itemsArray.Size(); i++)
			{
				const rapidjson::Value& itemElement = itemsArray[i];

				bool isObject = itemElement.IsObject();

				if (isObject)
				{
					documentToParse.push(&itemElement);
				}

				addNewVectorEntry(value, itemElement);

				if (isObject)
				{
					documentToParse.pop();	
				}

			}
		}
		else
		{
			assert(false);
		}

	}

	template<typename T, typename R>
	void read(std::map<T,R>& value, const char* fieldName, const rapidjson::Value& document) 
	{
		value = std::map<T,R>();

		if (document[fieldName].IsArray())
		{
			const rapidjson::Value& itemsArray = document[fieldName];
			for (rapidjson::SizeType i = 0; i < itemsArray.Size(); i++)
			{
				const rapidjson::Value& itemElement = itemsArray[i];

				if (itemElement.IsObject())
				{
					if (!(itemElement.HasMember(JSON_MAP_KEY_TAG) && itemElement.HasMember(JSON_MAP_VALUE_TAG)))
					{
						assert(false);
					}
					else
					{
						T newKey = T();
						R newValue = R();

						read(newKey, JSON_MAP_KEY_TAG, itemElement);

						if (itemElement[JSON_MAP_VALUE_TAG].IsObject())
						{
							const rapidjson::Value& objToPush = itemElement[JSON_MAP_VALUE_TAG];
							documentToParse.push(&objToPush);
						}

						addNewMapEntry(value, newKey, itemElement);
						
					}
				}
				else
				{
					assert(false);
				}
				
			}
		}
		else
		{
			assert(false);
		}
	}

	std::stack<const rapidjson::Value* const> documentToParse;

};

// Copied from:
// https://gist.github.com/judofyr/18cc1e9e4f48a13483c00d1c86e34cf5

class Cpp2JsonWriter 
{

public:

	Cpp2JsonWriter(std::stringstream& output) 
		: m_output(output)
	{

	}

	template<class T>
	auto write(const T& obj) -> decltype(obj.serialise(*this), void())
	{
		m_output << "{";
		m_needsComma = false;
		obj.serialise(*this);
		m_output << "}";
	}

	template<class T>
	Cpp2JsonWriter& operator()(const char* name, const T& field)
	{
		if (m_needsComma) 
		{
			m_output << ",";
		}
		m_needsComma = true;
		m_output << "\"" << name << "\"" << ":";
		write(field);
		return *this;
	}

private:

	template<class T>
	auto write(const T* obj) -> decltype(obj->serialise(*this), void())
	{
		m_output << "{";
		m_needsComma = false;
		obj->serialise(*this);
		m_output << "}";
	}

	template<class T>
	auto write(const std::shared_ptr<T> obj) -> decltype(obj->serialise(*this), void())
	{
		m_output << "{";
		m_needsComma = false;
		obj->serialise(*this);
		m_output << "}";
	}

	void write(int value)
	{
		m_output << value;
	}

	void write(float value) 
	{
		m_output << value;
	}

	void write(double value) 
	{
		m_output << value;
	}

	void write(const std::string& value) 
	{
		m_output << '"' << value << '"';
	}

	template<class T>
	void write(const std::vector<T>& value) 
	{
		m_output << "[";

		for (size_t i = 0; i < value.size(); ++i)
		{
			write(value.at(i));

			if (i < value.size() - 1)
			{
				m_output << ",";
			}
		}

		m_output << "]";
	}

	template<typename T, typename R>
	void write(const std::map<T,R>& value) 
	{
		m_output << "[";

		for( auto it = value.begin(); it != value.end();)
		{
			m_output << "{ \"" << JSON_MAP_KEY_TAG << "\": ";
			write(it->first);

			m_output << ", \"" << JSON_MAP_VALUE_TAG << "\": ";
			write(it->second);

			m_output << "}";

			++it;

			if (it != value.end())
			{
				m_output << ",";
			}
		}

		m_output << "]";
	}

	std::stringstream& m_output;
	bool m_needsComma;
};

#endif