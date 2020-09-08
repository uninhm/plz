/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
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

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg {
NI i;
NI prev;
NIM_BOOL notFirst;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__am1q4dBd9cls9au5CcmkX5oA)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__Sl9c33djPmHfV9bnZbQf0QBw)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringDesc* s, NI i);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__Sl9c33djPmHfV9bnZbQf0QBw_2)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__Sl9c33djPmHfV9bnZbQf0QBw_3)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__bx9csIXjBBeHkYSkIUixO1g)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__DfU0iuayCGwHDN1Exp9cbKg_2, ".", 1);

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringDesc* x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (it.i < (x ? x->Sup.len : 0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__am1q4dBd9cls9au5CcmkX5oA)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringDesc* x) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	(*it).prev = (*it).i;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((*it).notFirst);
		if (!(T3_)) goto LA4_;
		T3_ = (((NU8)(x->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		(*it).i += ((NI) 1);
		{
			NIM_BOOL T9_;
			NIM_BOOL T10_;
			NIM_BOOL T11_;
			T9_ = (NIM_BOOL)0;
			T10_ = (NIM_BOOL)0;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ((*it), x);
			if (!(T11_)) goto LA12_;
			T11_ = ((NU8)(x->data[(*it).i]) == (NU8)(92));
			LA12_: ;
			T10_ = T11_;
			if (!(T10_)) goto LA13_;
			T10_ = ((NI)((*it).i + ((NI) 1)) < (x ? x->Sup.len : 0));
			LA13_: ;
			T9_ = T10_;
			if (!(T9_)) goto LA14_;
			T9_ = !(((NU8)(x->data[(NI)((*it).i + ((NI) 1))]) == (NU8)(92)));
			LA14_: ;
			if (!T9_) goto LA15_;
			(*it).i += ((NI) 1);
		}
		LA15_: ;
	}
	goto LA1_;
	LA5_: ;
	{
		{
			while (1) {
				NIM_BOOL T20_;
				T20_ = (NIM_BOOL)0;
				T20_ = ((*it).i < (x ? x->Sup.len : 0));
				if (!(T20_)) goto LA21_;
				T20_ = !((((NU8)(x->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47))));
				LA21_: ;
				if (!T20_) goto LA19;
				(*it).i += ((NI) 1);
			} LA19: ;
		}
	}
	LA1_: ;
	{
		NI colontmp_;
		NI colontmp__2;
		if (!((*it).prev < (*it).i)) goto LA24_;
		colontmp_ = (*it).prev;
		colontmp__2 = (NI)((*it).i - ((NI) 1));
		result.Field0 = colontmp_;
		result.Field1 = colontmp__2;
	}
	goto LA22_;
	LA24_: ;
	{
		NIM_BOOL T27_;
		T27_ = (NIM_BOOL)0;
		T27_ = hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ((*it), x);
		if (!T27_) goto LA28_;
		result = next__am1q4dBd9cls9au5CcmkX5oA(it, x);
	}
	goto LA22_;
	LA28_: ;
	LA22_: ;
	{
		while (1) {
			NIM_BOOL T32_;
			T32_ = (NIM_BOOL)0;
			T32_ = ((*it).i < (x ? x->Sup.len : 0));
			if (!(T32_)) goto LA33_;
			T32_ = (((NU8)(x->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
			LA33_: ;
			if (!T32_) goto LA31;
			(*it).i += ((NI) 1);
		} LA31: ;
	}
	(*it).notFirst = NIM_TRUE;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__Sl9c33djPmHfV9bnZbQf0QBw)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	T1_ = (((NU8)(x->data[bounds.Field0])) == ((NU8)(92)) || ((NU8)(x->data[bounds.Field0])) == ((NU8)(47)));
	LA2_: ;
	result = T1_;
	return result;
}
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringDesc* s, NI i) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	result = s->data[(NI)((s ? s->Sup.len : 0) - i)];
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__Sl9c33djPmHfV9bnZbQf0QBw_2)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (bounds.Field1 == (NI)(bounds.Field0 + ((NI) 1)));
	if (!(T2_)) goto LA3_;
	T2_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	T1_ = ((NU8)(x->data[(NI)(bounds.Field0 + ((NI) 1))]) == (NU8)(46));
	LA4_: ;
	result = T1_;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__Sl9c33djPmHfV9bnZbQf0QBw_3)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	T1_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__bx9csIXjBBeHkYSkIUixO1g)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep) {
	tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it;
	nimZeroMem((void*)(&it), sizeof(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg));
	it.notFirst = (((NI) 0) < (NI)((NI64)((*state)) >> (NU64)(((NI) 1))));
	{
		if (!it.notFirst) goto LA3_;
		{
			while (1) {
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = (it.i < (x ? x->Sup.len : 0));
				if (!(T7_)) goto LA8_;
				T7_ = (((NU8)(x->data[it.i])) == ((NU8)(92)) || ((NU8)(x->data[it.i])) == ((NU8)(47)));
				LA8_: ;
				if (!T7_) goto LA6;
				it.i += ((NI) 1);
			} LA6: ;
		}
	}
	LA3_: ;
	{
		while (1) {
			NIM_BOOL T11_;
			tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ b;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ(it, x);
			if (!T11_) goto LA10;
			b = next__am1q4dBd9cls9au5CcmkX5oA((&it), x);
			{
				NIM_BOOL T14_;
				T14_ = (NIM_BOOL)0;
				T14_ = ((NI)((NI64)((*state)) >> (NU64)(((NI) 1))) == ((NI) 0));
				if (!(T14_)) goto LA15_;
				T14_ = isSlash__Sl9c33djPmHfV9bnZbQf0QBw(x, b);
				LA15_: ;
				if (!T14_) goto LA16_;
				{
					NIM_BOOL T20_;
					NIM_CHAR T22_;
					T20_ = (NIM_BOOL)0;
					T20_ = (((*result) ? (*result)->Sup.len : 0) == ((NI) 0));
					if (T20_) goto LA21_;
					T22_ = (NIM_CHAR)0;
					T22_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*result), ((NI) 1));
					T20_ = !((((NU8)(T22_)) == ((NU8)(92)) || ((NU8)(T22_)) == ((NU8)(47))));
					LA21_: ;
					if (!T20_) goto LA23_;
					(*result) = addChar((*result), dirSep);
				}
				LA23_: ;
				(*state) = (NI)((*state) | ((NI) 1));
			}
			goto LA12_;
			LA16_: ;
			{
				NIM_BOOL T26_;
				T26_ = (NIM_BOOL)0;
				T26_ = isDotDot__Sl9c33djPmHfV9bnZbQf0QBw_2(x, b);
				if (!T26_) goto LA27_;
				{
					NI d;
					if (!(((NI) 1) <= (NI)((NI64)((*state)) >> (NU64)(((NI) 1))))) goto LA31_;
					d = ((*result) ? (*result)->Sup.len : 0);
					{
						while (1) {
							NIM_BOOL T35_;
							T35_ = (NIM_BOOL)0;
							T35_ = ((NI)((*state) & ((NI) 1)) < (NI)(d - ((NI) 1)));
							if (!(T35_)) goto LA36_;
							T35_ = !((((NU8)((*result)->data[(NI)(d - ((NI) 1))])) == ((NU8)(92)) || ((NU8)((*result)->data[(NI)(d - ((NI) 1))])) == ((NU8)(47))));
							LA36_: ;
							if (!T35_) goto LA34;
							d -= ((NI) 1);
						} LA34: ;
					}
					{
						if (!(((NI) 0) < d)) goto LA39_;
						(*result) = setLengthStr((*result), ((NI) ((NI)(d - ((NI) 1)))));
						(*state) -= ((NI) 2);
					}
					LA39_: ;
				}
				goto LA29_;
				LA31_: ;
				{
					NimStringDesc* T49_;
					{
						NIM_BOOL T44_;
						NIM_CHAR T46_;
						T44_ = (NIM_BOOL)0;
						T44_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
						if (!(T44_)) goto LA45_;
						T46_ = (NIM_CHAR)0;
						T46_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*result), ((NI) 1));
						T44_ = !((((NU8)(T46_)) == ((NU8)(92)) || ((NU8)(T46_)) == ((NU8)(47))));
						LA45_: ;
						if (!T44_) goto LA47_;
						(*result) = addChar((*result), dirSep);
					}
					LA47_: ;
					T49_ = (NimStringDesc*)0;
					T49_ = substr__2yh9cer0ymNRHlOOg8P7IuA(x, b.Field0, b.Field1);
					(*result) = resizeString((*result), (T49_ ? T49_->Sup.len : 0) + 0);
appendString((*result), T49_);
				}
				LA29_: ;
			}
			goto LA12_;
			LA27_: ;
			{
				NIM_BOOL T51_;
				T51_ = (NIM_BOOL)0;
				T51_ = isDot__Sl9c33djPmHfV9bnZbQf0QBw_3(x, b);
				if (!T51_) goto LA52_;
			}
			goto LA12_;
			LA52_: ;
			{
				NimStringDesc* T64_;
				if (!(b.Field0 <= b.Field1)) goto LA55_;
				{
					NIM_BOOL T59_;
					NIM_CHAR T61_;
					T59_ = (NIM_BOOL)0;
					T59_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
					if (!(T59_)) goto LA60_;
					T61_ = (NIM_CHAR)0;
					T61_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*result), ((NI) 1));
					T59_ = !((((NU8)(T61_)) == ((NU8)(92)) || ((NU8)(T61_)) == ((NU8)(47))));
					LA60_: ;
					if (!T59_) goto LA62_;
					(*result) = addChar((*result), dirSep);
				}
				LA62_: ;
				T64_ = (NimStringDesc*)0;
				T64_ = substr__2yh9cer0ymNRHlOOg8P7IuA(x, b.Field0, b.Field1);
				(*result) = resizeString((*result), (T64_ ? T64_->Sup.len : 0) + 0);
appendString((*result), T64_);
				(*state) += ((NI) 2);
			}
			goto LA12_;
			LA55_: ;
			LA12_: ;
		} LA10: ;
	}
	{
		NIM_BOOL T67_;
		T67_ = (NIM_BOOL)0;
		T67_ = (((*result) ? (*result)->Sup.len : 0) == 0);
		if (!(T67_)) goto LA68_;
		T67_ = !(((x ? x->Sup.len : 0) == 0));
		LA68_: ;
		if (!T67_) goto LA69_;
		(*result) = copyString(((NimStringDesc*) &TM__DfU0iuayCGwHDN1Exp9cbKg_2));
	}
	LA69_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, normalizePath__gol9aBbIZpJYUPc6xBOBJDQ)(NimStringDesc* path, NIM_CHAR dirSep) {
	NimStringDesc* result;
	NI state;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((path ? path->Sup.len : 0))));
	state = ((NI) 0);
	addNormalizePath__bx9csIXjBBeHkYSkIUixO1g(path, (&result), (&state), dirSep);
	return result;
}
