/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(NI64, floorDiv__AhJW2V9aOggsJyHuT9bgq9bug)(NI64 x, NI64 y) {
	NI64 result;
	NI64 r;
	result = (NI64)0;
	result = (NI64)(x / y);
	r = (NI64)(x % y);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T7_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (IL64(0) < r);
		if (!(T4_)) goto LA5_;
		T4_ = (y < IL64(0));
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T7_ = (NIM_BOOL)0;
		T7_ = (r < IL64(0));
		if (!(T7_)) goto LA8_;
		T7_ = (IL64(0) < y);
		LA8_: ;
		T3_ = T7_;
		LA6_: ;
		if (!T3_) goto LA9_;
		result -= ((NI) 1);
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, floorMod__AhJW2V9aOggsJyHuT9bgq9bug_2)(NI64 x, NI64 y) {
	NI64 result;
	result = (NI64)0;
	result = (NI64)(x % y);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T7_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (IL64(0) < result);
		if (!(T4_)) goto LA5_;
		T4_ = (y < IL64(0));
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T7_ = (NIM_BOOL)0;
		T7_ = (result < IL64(0));
		if (!(T7_)) goto LA8_;
		T7_ = (IL64(0) < y);
		LA8_: ;
		T3_ = T7_;
		LA6_: ;
		if (!T3_) goto LA9_;
		result += y;
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__v2qC0V55wqa9bmqc7eHTz8A)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 32))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 16))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 8))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 4))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 2))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 1))));
	result += (NI)(((NI) 1) + (x <= ((NI) 0)));
	return result;
}
