/* Generated by Nim Compiler v1.3.7 */
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

/* section: NIM_merge_FORWARD_TYPES */
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__phjbYJtsbOIAYa9be34hhZg tySequence__phjbYJtsbOIAYa9be34hhZg;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__phjbYJtsbOIAYa9be34hhZg {
  TGenericSeq Sup;
  tySequence__sM4lkSb7zS6F7OVMvW9cffQ* data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__phjbYJtsbOIAYa9be34hhZg)(void* p, NI op);

/* section: NIM_merge_DATA */
extern TNimType NTI__sM4lkSb7zS6F7OVMvW9cffQ_;
N_LIB_PRIVATE TNimType NTI__phjbYJtsbOIAYa9be34hhZg_;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__phjbYJtsbOIAYa9be34hhZg)(void* p, NI op) {
	tySequence__phjbYJtsbOIAYa9be34hhZg* a;
	NI T1_;
	a = (tySequence__phjbYJtsbOIAYa9be34hhZg*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
N_LIB_PRIVATE N_NIMCALL(void, requirementstxt_requirementstxtDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT3 */
NTI__phjbYJtsbOIAYa9be34hhZg_.size = sizeof(tySequence__phjbYJtsbOIAYa9be34hhZg*);
NTI__phjbYJtsbOIAYa9be34hhZg_.align = NIM_ALIGNOF(tySequence__phjbYJtsbOIAYa9be34hhZg*);
NTI__phjbYJtsbOIAYa9be34hhZg_.kind = 24;
NTI__phjbYJtsbOIAYa9be34hhZg_.base = (&NTI__sM4lkSb7zS6F7OVMvW9cffQ_);
NTI__phjbYJtsbOIAYa9be34hhZg_.flags = 2;
NTI__phjbYJtsbOIAYa9be34hhZg_.marker = Marker_tySequence__phjbYJtsbOIAYa9be34hhZg;
}

