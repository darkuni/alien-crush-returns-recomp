#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GXSetCurrentMtx
void f_8016B81C(Ctx* __restrict c) {
  trace_call(0x8016B81Cu);
  c->r[4]=R32(c->r[2]+0xFFFFA9F0u); // 8016B81C
  c->r[0]=R32(c->r[4]+0x00000080u); // 8016B820
  c->r[0]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 8016B824
  W32(c->r[4]+0x00000080u,c->r[0]); // 8016B828
  c->r[0]=R32(c->r[4]+0x000005FCu); // 8016B82C
  c->r[0]=c->r[0]|0x04000000u; // 8016B830
  W32(c->r[4]+0x000005FCu,c->r[0]); // 8016B834
  return; // 8016B838
}

// GXLoadTexMtxImm
void f_8016B83C(Ctx* __restrict c) {
  trace_call(0x8016B83Cu);
  cmpu(c,0,c->r[4],0x00000040u); // 8016B83C
  if (crb(c,0)) { goto L_8016B854; } // 8016B840
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 8016B844
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016B848
  c->r[7]=c->r[4]+0x00000500u; // 8016B84C
  goto L_8016B858; // 8016B850
L_8016B854:;
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8016B854
L_8016B858:;
  cmps(c,0,(int32_t)c->r[5],1); // 8016B858
  if (!crb(c,2)) { goto L_8016B868; } // 8016B85C
  c->r[4]=0u+0x00000008u; // 8016B860
  goto L_8016B86C; // 8016B864
L_8016B868:;
  c->r[4]=0u+0x0000000Cu; // 8016B868
L_8016B86C:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 8016B86C
  c->r[4]=0u+0xCC010000u; // 8016B870
  c->r[0]=0u+0x00000010u; // 8016B874
  cmps(c,0,(int32_t)c->r[5],0); // 8016B878
  c->r[5]=rotl(c->r[6],16)&0xFFFF0000u; // 8016B87C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016B880
  c->r[0]=c->r[7]|c->r[5]; // 8016B884
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016B888
  if (!crb(c,2)) { goto L_8016B8C8; } // 8016B88C
  c->r[4]=c->r[4]+0xFFFF8000u; // 8016B890
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 8016B894
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 8016B898
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 8016B89C
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8016B8A0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 8016B8A4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 8016B8A8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 8016B8AC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 8016B8B0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 8016B8B4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 8016B8B8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 8016B8BC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8016B8C0
  return; // 8016B8C4
L_8016B8C8:;
  c->r[4]=c->r[4]+0xFFFF8000u; // 8016B8C8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 8016B8CC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 8016B8D0
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 8016B8D4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 8016B8D8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 8016B8DC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 8016B8E0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 8016B8E4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8016B8E8
  return; // 8016B8EC
}

// __GXSetViewport
void f_8016B8F0(Ctx* __restrict c) {
  trace_call(0x8016B8F0u);
  c->r[6]=R32(c->r[2]+0xFFFFA9F0u); // 8016B8F0
  c->r[3]=0u+0x00050000u; // 8016B8F4
  {uint32_t ea=c->r[2]+0xFFFFAAF8u; c->f[6]=c->ps1[6]=RF32(ea);} // 8016B8F8
  c->r[4]=0u+0xCC010000u; // 8016B8FC
  {uint32_t ea=c->r[6]+0x00000550u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016B900
  c->r[5]=0u+0x00000010u; // 8016B904
  {uint32_t ea=c->r[6]+0x0000054Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8016B908
  c->r[0]=c->r[3]+0x0000101Au; // 8016B90C
  c->f[1]=-c->f[2]; // 8016B910
  {uint32_t ea=c->r[6]+0x00000544u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016B914
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[6]); // 8016B918
  {uint32_t ea=c->r[6]+0x00000548u; c->f[4]=c->ps1[4]=RF32(ea);} // 8016B91C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[6]); // 8016B920
  {uint32_t ea=c->r[6]+0x00000554u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016B924
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[6]); // 8016B928
  {uint32_t ea=c->r[6]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016B92C
  {uint32_t ea=c->r[6]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016B930
  c->f[6]=c->ps1[6]=S(c->f[0]+c->f[7]); // 8016B934
  {uint32_t ea=c->r[6]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016B938
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 8016B93C
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[2]); // 8016B940
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 8016B944
  {uint32_t ea=c->r[2]+0xFFFFAAFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8016B948
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 8016B94C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016B950
  c->f[3]=c->ps1[3]=S(c->f[9]-c->f[3]); // 8016B954
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[7]);} // 8016B958
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[6]); // 8016B95C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8016B960
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[8]);} // 8016B964
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[0]); // 8016B968
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 8016B96C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 8016B970
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 8016B974
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 8016B978
  return; // 8016B97C
}

// GXSetViewportJitter
void f_8016B980(Ctx* __restrict c) {
  trace_call(0x8016B980u);
  cmps(c,0,(int32_t)c->r[3],0); // 8016B980
  if (!crb(c,2)) { goto L_8016B990; } // 8016B984
  {uint32_t ea=c->r[2]+0xFFFFAAF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016B988
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8016B98C
L_8016B990:;
  c->r[3]=R32(c->r[2]+0xFFFFA9F0u); // 8016B990
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 8016B994
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 8016B998
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 8016B99C
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 8016B9A0
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 8016B9A4
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 8016B9A8
  c->r[0]=R32(c->r[3]+0x000005FCu); // 8016B9AC
  c->r[0]=c->r[0]|0x10000000u; // 8016B9B0
  W32(c->r[3]+0x000005FCu,c->r[0]); // 8016B9B4
  return; // 8016B9B8
}

// GXSetViewport
void f_8016B9BC(Ctx* __restrict c) {
  trace_call(0x8016B9BCu);
  c->r[3]=R32(c->r[2]+0xFFFFA9F0u); // 8016B9BC
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 8016B9C0
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 8016B9C4
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 8016B9C8
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 8016B9CC
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 8016B9D0
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 8016B9D4
  c->r[0]=R32(c->r[3]+0x000005FCu); // 8016B9D8
  c->r[0]=c->r[0]|0x10000000u; // 8016B9DC
  W32(c->r[3]+0x000005FCu,c->r[0]); // 8016B9E0
  return; // 8016B9E4
}

// GXGetViewportv
void f_8016B9E8(Ctx* __restrict c) {
  trace_call(0x8016B9E8u);
  c->r[4]=R32(c->r[2]+0xFFFFA9F0u); // 8016B9E8
  {uint32_t ea=c->r[4]+0x00000544u; psq_load(c,2,ea,0,0);} // 8016B9EC
  {uint32_t ea=c->r[4]+0x0000054Cu; psq_load(c,1,ea,0,0);} // 8016B9F0
  {uint32_t ea=c->r[4]+0x00000554u; psq_load(c,0,ea,0,0);} // 8016B9F4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 8016B9F8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 8016B9FC
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 8016BA00
  return; // 8016BA04
}

// GXSetZScaleOffset
void f_8016BA08(Ctx* __restrict c) {
  trace_call(0x8016BA08u);
  {uint32_t ea=c->r[2]+0xFFFFAB00u; c->f[3]=c->ps1[3]=RF32(ea);} // 8016BA08
  {uint32_t ea=c->r[2]+0xFFFFAAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016BA0C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8016BA10
  c->r[3]=R32(c->r[2]+0xFFFFA9F0u); // 8016BA14
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8016BA18
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8016BA1C
  {uint32_t ea=c->r[3]+0x0000055Cu; WF32(ea,c->f[2]);} // 8016BA20
  {uint32_t ea=c->r[3]+0x00000560u; WF32(ea,c->f[0]);} // 8016BA24
  c->r[0]=R32(c->r[3]+0x000005FCu); // 8016BA28
  c->r[0]=c->r[0]|0x10000000u; // 8016BA2C
  W32(c->r[3]+0x000005FCu,c->r[0]); // 8016BA30
  return; // 8016BA34
}

// GXSetScissor
void f_8016BA38(Ctx* __restrict c) {
  trace_call(0x8016BA38u);
  c->r[8]=R32(c->r[2]+0xFFFFA9F0u); // 8016BA38
  c->r[4]=c->r[4]+0x00000156u; // 8016BA3C
  c->r[9]=c->r[3]+0x00000156u; // 8016BA40
  c->r[7]=0u+0xCC010000u; // 8016BA44
  c->r[0]=R32(c->r[8]+0x00000148u); // 8016BA48
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 8016BA4C
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 8016BA50
  c->r[6]=c->r[4]+c->r[6]; // 8016BA54
  W32(c->r[8]+0x00000148u,c->r[0]); // 8016BA58
  c->r[3]=c->r[9]+c->r[5]; // 8016BA5C
  c->r[5]=c->r[6]+0xFFFFFFFFu; // 8016BA60
  c->r[4]=0u+0x00000061u; // 8016BA64
  c->r[6]=R32(c->r[8]+0x0000014Cu); // 8016BA68
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8016BA6C
  c->r[6]=(rotl(c->r[5],0)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 8016BA70
  c->r[0]=0u+0x00000000u; // 8016BA74
  c->r[6]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[6]&~0x007FF000u); // 8016BA78
  W32(c->r[8]+0x0000014Cu,c->r[6]); // 8016BA7C
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 8016BA80
  c->r[3]=R32(c->r[8]+0x00000148u); // 8016BA84
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 8016BA88
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 8016BA8C
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 8016BA90
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 8016BA94
  W16(c->r[8]+0x00000002u,c->r[0]); // 8016BA98
  return; // 8016BA9C
}

// GXSetScissorBoxOffset
void f_8016BAA0(Ctx* __restrict c) {
  trace_call(0x8016BAA0u);
  c->r[0]=c->r[3]+0x00000156u; // 8016BAA0
  c->r[6]=0u+0x00000000u; // 8016BAA4
  c->r[6]=(rotl(c->r[0],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 8016BAA8
  c->r[5]=0u+0xCC010000u; // 8016BAAC
  c->r[0]=0u+0x00000061u; // 8016BAB0
  c->r[3]=c->r[4]+0x00000156u; // 8016BAB4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BAB8
  c->r[6]=(rotl(c->r[3],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 8016BABC
  c->r[0]=0u+0x00000059u; // 8016BAC0
  c->r[3]=R32(c->r[2]+0xFFFFA9F0u); // 8016BAC4
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8016BAC8
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 8016BACC
  c->r[0]=0u+0x00000000u; // 8016BAD0
  W16(c->r[3]+0x00000002u,c->r[0]); // 8016BAD4
  return; // 8016BAD8
}

// GXSetClipMode
void f_8016BADC(Ctx* __restrict c) {
  trace_call(0x8016BADCu);
  c->r[6]=0u+0xCC010000u; // 8016BADC
  c->r[0]=0u+0x00000010u; // 8016BAE0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BAE4
  c->r[5]=0u+0x00001005u; // 8016BAE8
  c->r[4]=R32(c->r[2]+0xFFFFA9F0u); // 8016BAEC
  c->r[0]=0u+0x00000001u; // 8016BAF0
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 8016BAF4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BAF8
  W16(c->r[4]+0x00000002u,c->r[0]); // 8016BAFC
  return; // 8016BB00
}

// __GXSetMatrixIndex
void f_8016BB04(Ctx* __restrict c) {
  trace_call(0x8016BB04u);
  cmps(c,0,(int32_t)c->r[3],5); // 8016BB04
  if (!crb(c,0)) { goto L_8016BB48; } // 8016BB08
  c->r[5]=0u+0xCC010000u; // 8016BB0C
  c->r[0]=0u+0x00000008u; // 8016BB10
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BB14
  c->r[0]=0u+0x00000030u; // 8016BB18
  c->r[6]=R32(c->r[2]+0xFFFFA9F0u); // 8016BB1C
  c->r[3]=0u+0x00000010u; // 8016BB20
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BB24
  c->r[0]=0u+0x00001018u; // 8016BB28
  c->r[4]=R32(c->r[6]+0x00000080u); // 8016BB2C
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 8016BB30
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 8016BB34
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BB38
  c->r[0]=R32(c->r[6]+0x00000080u); // 8016BB3C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BB40
  goto L_8016BB80; // 8016BB44
L_8016BB48:;
  c->r[5]=0u+0xCC010000u; // 8016BB48
  c->r[0]=0u+0x00000008u; // 8016BB4C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BB50
  c->r[0]=0u+0x00000040u; // 8016BB54
  c->r[6]=R32(c->r[2]+0xFFFFA9F0u); // 8016BB58
  c->r[3]=0u+0x00000010u; // 8016BB5C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BB60
  c->r[0]=0u+0x00001019u; // 8016BB64
  c->r[4]=R32(c->r[6]+0x00000084u); // 8016BB68
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 8016BB6C
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 8016BB70
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BB74
  c->r[0]=R32(c->r[6]+0x00000084u); // 8016BB78
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 8016BB7C
L_8016BB80:;
  c->r[0]=0u+0x00000001u; // 8016BB80
  W16(c->r[6]+0x00000002u,c->r[0]); // 8016BB84
  return; // 8016BB88
}

// GXSetGPMetric
void f_8016BB8C(Ctx* __restrict c) {
  trace_call(0x8016BB8Cu);
  c->r[5]=R32(c->r[2]+0xFFFFA9F0u); // 8016BB8C
  c->r[0]=R32(c->r[5]+0x000005ECu); // 8016BB90
  cmps(c,0,(int32_t)c->r[0],34); // 8016BB94
  if (crb(c,2)) { goto L_8016BBC4; } // 8016BB98
  if (!crb(c,0)) { goto L_8016BC10; } // 8016BB9C
  cmps(c,0,(int32_t)c->r[0],11); // 8016BBA0
  if (!crb(c,0)) { goto L_8016BBB4; } // 8016BBA4
  cmps(c,0,(int32_t)c->r[0],0); // 8016BBA8
  if (!crb(c,0)) { goto L_8016BBC4; } // 8016BBAC
  goto L_8016BC10; // 8016BBB0
L_8016BBB4:;
  cmps(c,0,(int32_t)c->r[0],27); // 8016BBB4
  if (!crb(c,0)) { goto L_8016BBFC; } // 8016BBB8
  goto L_8016BBE4; // 8016BBBC
  goto L_8016BC10; // 8016BBC0
L_8016BBC4:;
  c->r[7]=0u+0xCC010000u; // 8016BBC4
  c->r[0]=0u+0x00000010u; // 8016BBC8
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 8016BBCC
  c->r[6]=0u+0x00001006u; // 8016BBD0
  c->r[0]=0u+0x00000000u; // 8016BBD4
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 8016BBD8
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 8016BBDC
  goto L_8016BC10; // 8016BBE0
L_8016BBE4:;
  c->r[6]=0u+0xCC010000u; // 8016BBE4
  c->r[0]=0u+0x00000061u; // 8016BBE8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BBEC
  c->r[0]=0u+0x23000000u; // 8016BBF0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BBF4
  goto L_8016BC10; // 8016BBF8
L_8016BBFC:;
  c->r[6]=0u+0xCC010000u; // 8016BBFC
  c->r[0]=0u+0x00000061u; // 8016BC00
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BC04
  c->r[0]=0u+0x24000000u; // 8016BC08
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BC0C
L_8016BC10:;
  c->r[0]=R32(c->r[5]+0x000005F0u); // 8016BC10
  cmps(c,0,(int32_t)c->r[0],21); // 8016BC14
  if (crb(c,2)) { goto L_8016BC44; } // 8016BC18
  if (!crb(c,0)) { goto L_8016BC94; } // 8016BC1C
  cmps(c,0,(int32_t)c->r[0],9); // 8016BC20
  if (!crb(c,0)) { goto L_8016BC34; } // 8016BC24
  cmps(c,0,(int32_t)c->r[0],0); // 8016BC28
  if (!crb(c,0)) { goto L_8016BC44; } // 8016BC2C
  goto L_8016BC94; // 8016BC30
L_8016BC34:;
  cmps(c,0,(int32_t)c->r[0],17); // 8016BC34
  if (!crb(c,0)) { goto L_8016BC88; } // 8016BC38
  goto L_8016BC5C; // 8016BC3C
  goto L_8016BC94; // 8016BC40
L_8016BC44:;
  c->r[6]=0u+0xCC010000u; // 8016BC44
  c->r[0]=0u+0x00000061u; // 8016BC48
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BC4C
  c->r[0]=0u+0x67000000u; // 8016BC50
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BC54
  goto L_8016BC94; // 8016BC58
L_8016BC5C:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 8016BC5C
  c->r[6]=0u+0xCC010000u; // 8016BC60
  c->r[7]=0u+0x00000008u; // 8016BC64
  c->r[0]=0u+0x00000020u; // 8016BC68
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 8016BC6C
  W32(c->r[5]+0x000005F4u,c->r[8]); // 8016BC70
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 8016BC74
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BC78
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016BC7C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BC80
  goto L_8016BC94; // 8016BC84
L_8016BC88:;
  c->r[6]=R32(c->r[13]+0xFFFFABDCu); // 8016BC88
  c->r[0]=0u+0x00000000u; // 8016BC8C
  W16(c->r[6]+0x00000006u,c->r[0]); // 8016BC90
L_8016BC94:;
  cmpu(c,0,c->r[3],0x00000023u); // 8016BC94
  W32(c->r[5]+0x000005ECu,c->r[3]); // 8016BC98
  if (crb(c,1)) { goto L_8016C0B8; } // 8016BC9C
  c->r[6]=0u+0x802D0000u; // 8016BCA0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8016BCA4
  c->r[6]=c->r[6]+0x000059FCu; // 8016BCA8
  c->r[6]=R32(c->r[6]+c->r[0]); // 8016BCAC
  c->ctr=c->r[6]; // 8016BCB0
  if (true) { switch (c->ctr) { case 0x8016BCB8u: goto L_8016BCB8; case 0x8016BCD8u: goto L_8016BCD8; case 0x8016BCF8u: goto L_8016BCF8; case 0x8016BD18u: goto L_8016BD18; case 0x8016BD38u: goto L_8016BD38; case 0x8016BD58u: goto L_8016BD58; case 0x8016BD78u: goto L_8016BD78; case 0x8016BD98u: goto L_8016BD98; case 0x8016BDB8u: goto L_8016BDB8; case 0x8016BDD8u: goto L_8016BDD8; case 0x8016BDF8u: goto L_8016BDF8; case 0x8016BE18u: goto L_8016BE18; case 0x8016BE38u: goto L_8016BE38; case 0x8016BE54u: goto L_8016BE54; case 0x8016BE70u: goto L_8016BE70; case 0x8016BE8Cu: goto L_8016BE8C; case 0x8016BEA8u: goto L_8016BEA8; case 0x8016BEC4u: goto L_8016BEC4; case 0x8016BEE0u: goto L_8016BEE0; case 0x8016BEFCu: goto L_8016BEFC; case 0x8016BF18u: goto L_8016BF18; case 0x8016BF34u: goto L_8016BF34; case 0x8016BF50u: goto L_8016BF50; case 0x8016BF6Cu: goto L_8016BF6C; case 0x8016BF88u: goto L_8016BF88; case 0x8016BFA4u: goto L_8016BFA4; case 0x8016BFC0u: goto L_8016BFC0; case 0x8016BFDCu: goto L_8016BFDC; case 0x8016BFF8u: goto L_8016BFF8; case 0x8016C014u: goto L_8016C014; case 0x8016C030u: goto L_8016C030; case 0x8016C04Cu: goto L_8016C04C; case 0x8016C068u: goto L_8016C068; case 0x8016C084u: goto L_8016C084; case 0x8016C0A0u: goto L_8016C0A0; case 0x8016C0B8u: goto L_8016C0B8; case 0x8016C0DCu: goto L_8016C0DC; case 0x8016C0F8u: goto L_8016C0F8; case 0x8016C114u: goto L_8016C114; case 0x8016C130u: goto L_8016C130; case 0x8016C14Cu: goto L_8016C14C; case 0x8016C168u: goto L_8016C168; case 0x8016C184u: goto L_8016C184; case 0x8016C1A0u: goto L_8016C1A0; case 0x8016C1BCu: goto L_8016C1BC; case 0x8016C1D8u: goto L_8016C1D8; case 0x8016C1F4u: goto L_8016C1F4; case 0x8016C224u: goto L_8016C224; case 0x8016C254u: goto L_8016C254; case 0x8016C284u: goto L_8016C284; case 0x8016C2B4u: goto L_8016C2B4; case 0x8016C2E4u: goto L_8016C2E4; case 0x8016C314u: goto L_8016C314; case 0x8016C344u: goto L_8016C344; case 0x8016C370u: goto L_8016C370; case 0x8016C380u: goto L_8016C380; case 0x8016C390u: goto L_8016C390; case 0x8016C3A0u: goto L_8016C3A0; case 0x8016C3ACu: goto L_8016C3AC; default: break; } dispatch(c,c->ctr); return; } // 8016BCB4
L_8016BCB8:;
  c->r[6]=0u+0xCC010000u; // 8016BCB8
  c->r[0]=0u+0x00000010u; // 8016BCBC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BCC0
  c->r[3]=0u+0x00001006u; // 8016BCC4
  c->r[0]=0u+0x00000273u; // 8016BCC8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BCCC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BCD0
  goto L_8016C0B8; // 8016BCD4
L_8016BCD8:;
  c->r[6]=0u+0xCC010000u; // 8016BCD8
  c->r[0]=0u+0x00000010u; // 8016BCDC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BCE0
  c->r[3]=0u+0x00001006u; // 8016BCE4
  c->r[0]=0u+0x0000014Au; // 8016BCE8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BCEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BCF0
  goto L_8016C0B8; // 8016BCF4
L_8016BCF8:;
  c->r[6]=0u+0xCC010000u; // 8016BCF8
  c->r[0]=0u+0x00000010u; // 8016BCFC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD00
  c->r[3]=0u+0x00001006u; // 8016BD04
  c->r[0]=0u+0x0000016Bu; // 8016BD08
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BD0C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD10
  goto L_8016C0B8; // 8016BD14
L_8016BD18:;
  c->r[6]=0u+0xCC010000u; // 8016BD18
  c->r[0]=0u+0x00000010u; // 8016BD1C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD20
  c->r[3]=0u+0x00001006u; // 8016BD24
  c->r[0]=0u+0x00000084u; // 8016BD28
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BD2C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD30
  goto L_8016C0B8; // 8016BD34
L_8016BD38:;
  c->r[6]=0u+0xCC010000u; // 8016BD38
  c->r[0]=0u+0x00000010u; // 8016BD3C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD40
  c->r[3]=0u+0x00001006u; // 8016BD44
  c->r[0]=0u+0x000000C6u; // 8016BD48
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BD4C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD50
  goto L_8016C0B8; // 8016BD54
L_8016BD58:;
  c->r[6]=0u+0xCC010000u; // 8016BD58
  c->r[0]=0u+0x00000010u; // 8016BD5C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD60
  c->r[3]=0u+0x00001006u; // 8016BD64
  c->r[0]=0u+0x00000210u; // 8016BD68
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BD6C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD70
  goto L_8016C0B8; // 8016BD74
L_8016BD78:;
  c->r[6]=0u+0xCC010000u; // 8016BD78
  c->r[0]=0u+0x00000010u; // 8016BD7C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD80
  c->r[3]=0u+0x00001006u; // 8016BD84
  c->r[0]=0u+0x00000252u; // 8016BD88
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BD8C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BD90
  goto L_8016C0B8; // 8016BD94
L_8016BD98:;
  c->r[6]=0u+0xCC010000u; // 8016BD98
  c->r[0]=0u+0x00000010u; // 8016BD9C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BDA0
  c->r[3]=0u+0x00001006u; // 8016BDA4
  c->r[0]=0u+0x00000231u; // 8016BDA8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BDAC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BDB0
  goto L_8016C0B8; // 8016BDB4
L_8016BDB8:;
  c->r[6]=0u+0xCC010000u; // 8016BDB8
  c->r[0]=0u+0x00000010u; // 8016BDBC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BDC0
  c->r[3]=0u+0x00001006u; // 8016BDC4
  c->r[0]=0u+0x000001ADu; // 8016BDC8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BDCC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BDD0
  goto L_8016C0B8; // 8016BDD4
L_8016BDD8:;
  c->r[6]=0u+0xCC010000u; // 8016BDD8
  c->r[0]=0u+0x00000010u; // 8016BDDC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BDE0
  c->r[3]=0u+0x00001006u; // 8016BDE4
  c->r[0]=0u+0x000001CEu; // 8016BDE8
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BDEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BDF0
  goto L_8016C0B8; // 8016BDF4
L_8016BDF8:;
  c->r[6]=0u+0xCC010000u; // 8016BDF8
  c->r[0]=0u+0x00000010u; // 8016BDFC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE00
  c->r[3]=0u+0x00001006u; // 8016BE04
  c->r[0]=0u+0x00000021u; // 8016BE08
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BE0C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE10
  goto L_8016C0B8; // 8016BE14
L_8016BE18:;
  c->r[6]=0u+0xCC010000u; // 8016BE18
  c->r[0]=0u+0x00000010u; // 8016BE1C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE20
  c->r[3]=0u+0x00001006u; // 8016BE24
  c->r[0]=0u+0x00000153u; // 8016BE28
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 8016BE2C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE30
  goto L_8016C0B8; // 8016BE34
L_8016BE38:;
  c->r[6]=0u+0xCC010000u; // 8016BE38
  c->r[0]=0u+0x00000061u; // 8016BE3C
  c->r[3]=0u+0x23010000u; // 8016BE40
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE44
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 8016BE48
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE4C
  goto L_8016C0B8; // 8016BE50
L_8016BE54:;
  c->r[6]=0u+0xCC010000u; // 8016BE54
  c->r[0]=0u+0x00000061u; // 8016BE58
  c->r[3]=0u+0x23010000u; // 8016BE5C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE60
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 8016BE64
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE68
  goto L_8016C0B8; // 8016BE6C
L_8016BE70:;
  c->r[6]=0u+0xCC010000u; // 8016BE70
  c->r[0]=0u+0x00000061u; // 8016BE74
  c->r[3]=0u+0x23010000u; // 8016BE78
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE7C
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 8016BE80
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE84
  goto L_8016C0B8; // 8016BE88
L_8016BE8C:;
  c->r[6]=0u+0xCC010000u; // 8016BE8C
  c->r[0]=0u+0x00000061u; // 8016BE90
  c->r[3]=0u+0x23000000u; // 8016BE94
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BE98
  c->r[0]=c->r[3]+0x00001E7Fu; // 8016BE9C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BEA0
  goto L_8016C0B8; // 8016BEA4
L_8016BEA8:;
  c->r[6]=0u+0xCC010000u; // 8016BEA8
  c->r[0]=0u+0x00000061u; // 8016BEAC
  c->r[3]=0u+0x23010000u; // 8016BEB0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BEB4
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 8016BEB8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BEBC
  goto L_8016C0B8; // 8016BEC0
L_8016BEC4:;
  c->r[6]=0u+0xCC010000u; // 8016BEC4
  c->r[0]=0u+0x00000061u; // 8016BEC8
  c->r[3]=0u+0x23010000u; // 8016BECC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BED0
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 8016BED4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BED8
  goto L_8016C0B8; // 8016BEDC
L_8016BEE0:;
  c->r[6]=0u+0xCC010000u; // 8016BEE0
  c->r[0]=0u+0x00000061u; // 8016BEE4
  c->r[3]=0u+0x23010000u; // 8016BEE8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BEEC
  c->r[0]=c->r[3]+0xFFFFACBFu; // 8016BEF0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BEF4
  goto L_8016C0B8; // 8016BEF8
L_8016BEFC:;
  c->r[6]=0u+0xCC010000u; // 8016BEFC
  c->r[0]=0u+0x00000061u; // 8016BF00
  c->r[3]=0u+0x23010000u; // 8016BF04
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF08
  c->r[0]=c->r[3]+0xFFFFACFFu; // 8016BF0C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF10
  goto L_8016C0B8; // 8016BF14
L_8016BF18:;
  c->r[6]=0u+0xCC010000u; // 8016BF18
  c->r[0]=0u+0x00000061u; // 8016BF1C
  c->r[3]=0u+0x23010000u; // 8016BF20
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF24
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 8016BF28
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF2C
  goto L_8016C0B8; // 8016BF30
L_8016BF34:;
  c->r[6]=0u+0xCC010000u; // 8016BF34
  c->r[0]=0u+0x00000061u; // 8016BF38
  c->r[3]=0u+0x23010000u; // 8016BF3C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF40
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 8016BF44
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF48
  goto L_8016C0B8; // 8016BF4C
L_8016BF50:;
  c->r[6]=0u+0xCC010000u; // 8016BF50
  c->r[0]=0u+0x00000061u; // 8016BF54
  c->r[3]=0u+0x23010000u; // 8016BF58
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF5C
  c->r[0]=c->r[3]+0xFFFFADBFu; // 8016BF60
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF64
  goto L_8016C0B8; // 8016BF68
L_8016BF6C:;
  c->r[6]=0u+0xCC010000u; // 8016BF6C
  c->r[0]=0u+0x00000061u; // 8016BF70
  c->r[3]=0u+0x23010000u; // 8016BF74
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF78
  c->r[0]=c->r[3]+0xFFFFADFFu; // 8016BF7C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF80
  goto L_8016C0B8; // 8016BF84
L_8016BF88:;
  c->r[6]=0u+0xCC010000u; // 8016BF88
  c->r[0]=0u+0x00000061u; // 8016BF8C
  c->r[3]=0u+0x23010000u; // 8016BF90
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF94
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 8016BF98
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BF9C
  goto L_8016C0B8; // 8016BFA0
L_8016BFA4:;
  c->r[6]=0u+0xCC010000u; // 8016BFA4
  c->r[0]=0u+0x00000061u; // 8016BFA8
  c->r[3]=0u+0x23010000u; // 8016BFAC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BFB0
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 8016BFB4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BFB8
  goto L_8016C0B8; // 8016BFBC
L_8016BFC0:;
  c->r[6]=0u+0xCC010000u; // 8016BFC0
  c->r[0]=0u+0x00000061u; // 8016BFC4
  c->r[3]=0u+0x23010000u; // 8016BFC8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BFCC
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 8016BFD0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BFD4
  goto L_8016C0B8; // 8016BFD8
L_8016BFDC:;
  c->r[6]=0u+0xCC010000u; // 8016BFDC
  c->r[0]=0u+0x00000061u; // 8016BFE0
  c->r[3]=0u+0x23010000u; // 8016BFE4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BFE8
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 8016BFEC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016BFF0
  goto L_8016C0B8; // 8016BFF4
L_8016BFF8:;
  c->r[6]=0u+0xCC010000u; // 8016BFF8
  c->r[0]=0u+0x00000061u; // 8016BFFC
  c->r[3]=0u+0x24030000u; // 8016C000
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C004
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 8016C008
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C00C
  goto L_8016C0B8; // 8016C010
L_8016C014:;
  c->r[6]=0u+0xCC010000u; // 8016C014
  c->r[0]=0u+0x00000061u; // 8016C018
  c->r[3]=0u+0x24030000u; // 8016C01C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C020
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 8016C024
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C028
  goto L_8016C0B8; // 8016C02C
L_8016C030:;
  c->r[6]=0u+0xCC010000u; // 8016C030
  c->r[0]=0u+0x00000061u; // 8016C034
  c->r[3]=0u+0x24030000u; // 8016C038
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C03C
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 8016C040
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C044
  goto L_8016C0B8; // 8016C048
L_8016C04C:;
  c->r[6]=0u+0xCC010000u; // 8016C04C
  c->r[0]=0u+0x00000061u; // 8016C050
  c->r[3]=0u+0x24030000u; // 8016C054
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C058
  c->r[0]=c->r[3]+0xFFFFC108u; // 8016C05C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C060
  goto L_8016C0B8; // 8016C064
L_8016C068:;
  c->r[6]=0u+0xCC010000u; // 8016C068
  c->r[0]=0u+0x00000061u; // 8016C06C
  c->r[3]=0u+0x24030000u; // 8016C070
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C074
  c->r[0]=c->r[3]+0xFFFFC129u; // 8016C078
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C07C
  goto L_8016C0B8; // 8016C080
L_8016C084:;
  c->r[6]=0u+0xCC010000u; // 8016C084
  c->r[0]=0u+0x00000061u; // 8016C088
  c->r[3]=0u+0x24030000u; // 8016C08C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C090
  c->r[0]=c->r[3]+0xFFFFC14Au; // 8016C094
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C098
  goto L_8016C0B8; // 8016C09C
L_8016C0A0:;
  c->r[6]=0u+0xCC010000u; // 8016C0A0
  c->r[0]=0u+0x00000061u; // 8016C0A4
  c->r[3]=0u+0x24030000u; // 8016C0A8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C0AC
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 8016C0B0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 8016C0B4
L_8016C0B8:;
  cmpu(c,0,c->r[4],0x00000016u); // 8016C0B8
  W32(c->r[5]+0x000005F0u,c->r[4]); // 8016C0BC
  if (crb(c,1)) { goto L_8016C3AC; } // 8016C0C0
  c->r[3]=0u+0x802D0000u; // 8016C0C4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8016C0C8
  c->r[3]=c->r[3]+0x000059A0u; // 8016C0CC
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016C0D0
  c->ctr=c->r[3]; // 8016C0D4
  if (true) { switch (c->ctr) { case 0x8016BCB8u: goto L_8016BCB8; case 0x8016BCD8u: goto L_8016BCD8; case 0x8016BCF8u: goto L_8016BCF8; case 0x8016BD18u: goto L_8016BD18; case 0x8016BD38u: goto L_8016BD38; case 0x8016BD58u: goto L_8016BD58; case 0x8016BD78u: goto L_8016BD78; case 0x8016BD98u: goto L_8016BD98; case 0x8016BDB8u: goto L_8016BDB8; case 0x8016BDD8u: goto L_8016BDD8; case 0x8016BDF8u: goto L_8016BDF8; case 0x8016BE18u: goto L_8016BE18; case 0x8016BE38u: goto L_8016BE38; case 0x8016BE54u: goto L_8016BE54; case 0x8016BE70u: goto L_8016BE70; case 0x8016BE8Cu: goto L_8016BE8C; case 0x8016BEA8u: goto L_8016BEA8; case 0x8016BEC4u: goto L_8016BEC4; case 0x8016BEE0u: goto L_8016BEE0; case 0x8016BEFCu: goto L_8016BEFC; case 0x8016BF18u: goto L_8016BF18; case 0x8016BF34u: goto L_8016BF34; case 0x8016BF50u: goto L_8016BF50; case 0x8016BF6Cu: goto L_8016BF6C; case 0x8016BF88u: goto L_8016BF88; case 0x8016BFA4u: goto L_8016BFA4; case 0x8016BFC0u: goto L_8016BFC0; case 0x8016BFDCu: goto L_8016BFDC; case 0x8016BFF8u: goto L_8016BFF8; case 0x8016C014u: goto L_8016C014; case 0x8016C030u: goto L_8016C030; case 0x8016C04Cu: goto L_8016C04C; case 0x8016C068u: goto L_8016C068; case 0x8016C084u: goto L_8016C084; case 0x8016C0A0u: goto L_8016C0A0; case 0x8016C0B8u: goto L_8016C0B8; case 0x8016C0DCu: goto L_8016C0DC; case 0x8016C0F8u: goto L_8016C0F8; case 0x8016C114u: goto L_8016C114; case 0x8016C130u: goto L_8016C130; case 0x8016C14Cu: goto L_8016C14C; case 0x8016C168u: goto L_8016C168; case 0x8016C184u: goto L_8016C184; case 0x8016C1A0u: goto L_8016C1A0; case 0x8016C1BCu: goto L_8016C1BC; case 0x8016C1D8u: goto L_8016C1D8; case 0x8016C1F4u: goto L_8016C1F4; case 0x8016C224u: goto L_8016C224; case 0x8016C254u: goto L_8016C254; case 0x8016C284u: goto L_8016C284; case 0x8016C2B4u: goto L_8016C2B4; case 0x8016C2E4u: goto L_8016C2E4; case 0x8016C314u: goto L_8016C314; case 0x8016C344u: goto L_8016C344; case 0x8016C370u: goto L_8016C370; case 0x8016C380u: goto L_8016C380; case 0x8016C390u: goto L_8016C390; case 0x8016C3A0u: goto L_8016C3A0; case 0x8016C3ACu: goto L_8016C3AC; default: break; } dispatch(c,c->ctr); return; } // 8016C0D8
L_8016C0DC:;
  c->r[4]=0u+0xCC010000u; // 8016C0DC
  c->r[0]=0u+0x00000061u; // 8016C0E0
  c->r[3]=0u+0x67000000u; // 8016C0E4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C0E8
  c->r[0]=c->r[3]+0x00000042u; // 8016C0EC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C0F0
  goto L_8016C3AC; // 8016C0F4
L_8016C0F8:;
  c->r[4]=0u+0xCC010000u; // 8016C0F8
  c->r[0]=0u+0x00000061u; // 8016C0FC
  c->r[3]=0u+0x67000000u; // 8016C100
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C104
  c->r[0]=c->r[3]+0x00000084u; // 8016C108
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C10C
  goto L_8016C3AC; // 8016C110
L_8016C114:;
  c->r[4]=0u+0xCC010000u; // 8016C114
  c->r[0]=0u+0x00000061u; // 8016C118
  c->r[3]=0u+0x67000000u; // 8016C11C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C120
  c->r[0]=c->r[3]+0x00000063u; // 8016C124
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C128
  goto L_8016C3AC; // 8016C12C
L_8016C130:;
  c->r[4]=0u+0xCC010000u; // 8016C130
  c->r[0]=0u+0x00000061u; // 8016C134
  c->r[3]=0u+0x67000000u; // 8016C138
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C13C
  c->r[0]=c->r[3]+0x00000129u; // 8016C140
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C144
  goto L_8016C3AC; // 8016C148
L_8016C14C:;
  c->r[4]=0u+0xCC010000u; // 8016C14C
  c->r[0]=0u+0x00000061u; // 8016C150
  c->r[3]=0u+0x67000000u; // 8016C154
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C158
  c->r[0]=c->r[3]+0x00000252u; // 8016C15C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C160
  goto L_8016C3AC; // 8016C164
L_8016C168:;
  c->r[4]=0u+0xCC010000u; // 8016C168
  c->r[0]=0u+0x00000061u; // 8016C16C
  c->r[3]=0u+0x67000000u; // 8016C170
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C174
  c->r[0]=c->r[3]+0x00000021u; // 8016C178
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C17C
  goto L_8016C3AC; // 8016C180
L_8016C184:;
  c->r[4]=0u+0xCC010000u; // 8016C184
  c->r[0]=0u+0x00000061u; // 8016C188
  c->r[3]=0u+0x67000000u; // 8016C18C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C190
  c->r[0]=c->r[3]+0x0000014Bu; // 8016C194
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C198
  goto L_8016C3AC; // 8016C19C
L_8016C1A0:;
  c->r[4]=0u+0xCC010000u; // 8016C1A0
  c->r[0]=0u+0x00000061u; // 8016C1A4
  c->r[3]=0u+0x67000000u; // 8016C1A8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C1AC
  c->r[0]=c->r[3]+0x0000018Du; // 8016C1B0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C1B4
  goto L_8016C3AC; // 8016C1B8
L_8016C1BC:;
  c->r[4]=0u+0xCC010000u; // 8016C1BC
  c->r[0]=0u+0x00000061u; // 8016C1C0
  c->r[3]=0u+0x67000000u; // 8016C1C4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C1C8
  c->r[0]=c->r[3]+0x000001CFu; // 8016C1CC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C1D0
  goto L_8016C3AC; // 8016C1D4
L_8016C1D8:;
  c->r[4]=0u+0xCC010000u; // 8016C1D8
  c->r[0]=0u+0x00000061u; // 8016C1DC
  c->r[3]=0u+0x67000000u; // 8016C1E0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C1E4
  c->r[0]=c->r[3]+0x00000211u; // 8016C1E8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 8016C1EC
  goto L_8016C3AC; // 8016C1F0
L_8016C1F4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8016C1F4
  c->r[0]=0u+0x00000002u; // 8016C1F8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8016C1FC
  c->r[3]=0u+0xCC010000u; // 8016C200
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8016C204
  c->r[4]=0u+0x00000008u; // 8016C208
  c->r[0]=0u+0x00000020u; // 8016C20C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8016C210
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C214
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C218
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C21C
  goto L_8016C3AC; // 8016C220
L_8016C224:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8016C224
  c->r[0]=0u+0x00000003u; // 8016C228
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8016C22C
  c->r[3]=0u+0xCC010000u; // 8016C230
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8016C234
  c->r[4]=0u+0x00000008u; // 8016C238
  c->r[0]=0u+0x00000020u; // 8016C23C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8016C240
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C244
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C248
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C24C
  goto L_8016C3AC; // 8016C250
L_8016C254:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8016C254
  c->r[0]=0u+0x00000004u; // 8016C258
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8016C25C
  c->r[3]=0u+0xCC010000u; // 8016C260
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8016C264
  c->r[4]=0u+0x00000008u; // 8016C268
  c->r[0]=0u+0x00000020u; // 8016C26C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8016C270
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C274
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C278
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C27C
  goto L_8016C3AC; // 8016C280
L_8016C284:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8016C284
  c->r[0]=0u+0x00000005u; // 8016C288
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8016C28C
  c->r[3]=0u+0xCC010000u; // 8016C290
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8016C294
  c->r[4]=0u+0x00000008u; // 8016C298
  c->r[0]=0u+0x00000020u; // 8016C29C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8016C2A0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C2A4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C2A8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C2AC
  goto L_8016C3AC; // 8016C2B0
L_8016C2B4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8016C2B4
  c->r[0]=0u+0x00000006u; // 8016C2B8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8016C2BC
  c->r[3]=0u+0xCC010000u; // 8016C2C0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8016C2C4
  c->r[4]=0u+0x00000008u; // 8016C2C8
  c->r[0]=0u+0x00000020u; // 8016C2CC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8016C2D0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C2D4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C2D8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C2DC
  goto L_8016C3AC; // 8016C2E0
L_8016C2E4:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8016C2E4
  c->r[0]=0u+0x00000007u; // 8016C2E8
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8016C2EC
  c->r[3]=0u+0xCC010000u; // 8016C2F0
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8016C2F4
  c->r[4]=0u+0x00000008u; // 8016C2F8
  c->r[0]=0u+0x00000020u; // 8016C2FC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8016C300
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C304
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C308
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C30C
  goto L_8016C3AC; // 8016C310
L_8016C314:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 8016C314
  c->r[0]=0u+0x00000009u; // 8016C318
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 8016C31C
  c->r[3]=0u+0xCC010000u; // 8016C320
  W32(c->r[5]+0x000005F4u,c->r[4]); // 8016C324
  c->r[4]=0u+0x00000008u; // 8016C328
  c->r[0]=0u+0x00000020u; // 8016C32C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8016C330
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C334
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C338
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C33C
  goto L_8016C3AC; // 8016C340
L_8016C344:;
  c->r[4]=0u+0x00000008u; // 8016C344
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C348
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8016C34C
  c->r[3]=0u+0xCC010000u; // 8016C350
  W32(c->r[5]+0x000005F4u,c->r[0]); // 8016C354
  c->r[0]=0u+0x00000020u; // 8016C358
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 8016C35C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C360
  c->r[0]=R32(c->r[5]+0x000005F4u); // 8016C364
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 8016C368
  goto L_8016C3AC; // 8016C36C
L_8016C370:;
  c->r[3]=R32(c->r[13]+0xFFFFABDCu); // 8016C370
  c->r[0]=0u+0x00000002u; // 8016C374
  W16(c->r[3]+0x00000006u,c->r[0]); // 8016C378
  goto L_8016C3AC; // 8016C37C
L_8016C380:;
  c->r[3]=R32(c->r[13]+0xFFFFABDCu); // 8016C380
  c->r[0]=0u+0x00000003u; // 8016C384
  W16(c->r[3]+0x00000006u,c->r[0]); // 8016C388
  goto L_8016C3AC; // 8016C38C
L_8016C390:;
  c->r[3]=R32(c->r[13]+0xFFFFABDCu); // 8016C390
  c->r[0]=0u+0x00000004u; // 8016C394
  W16(c->r[3]+0x00000006u,c->r[0]); // 8016C398
  goto L_8016C3AC; // 8016C39C
L_8016C3A0:;
  c->r[3]=R32(c->r[13]+0xFFFFABDCu); // 8016C3A0
  c->r[0]=0u+0x00000005u; // 8016C3A4
  W16(c->r[3]+0x00000006u,c->r[0]); // 8016C3A8
L_8016C3AC:;
  c->r[0]=0u+0x00000000u; // 8016C3AC
  W16(c->r[5]+0x00000002u,c->r[0]); // 8016C3B0
  return; // 8016C3B4
}

// GXClearGPMetric
void f_8016C3B8(Ctx* __restrict c) {
  trace_call(0x8016C3B8u);
  c->r[3]=R32(c->r[13]+0xFFFFABDCu); // 8016C3B8
  c->r[0]=0u+0x00000004u; // 8016C3BC
  W16(c->r[3]+0x00000004u,c->r[0]); // 8016C3C0
  return; // 8016C3C4
}

// __DVDFSInit
void f_8016C3C8(Ctx* __restrict c) {
  trace_call(0x8016C3C8u);
  c->r[3]=0u+0x80000000u; // 8016C3C8
  W32(c->r[13]+0xFFFFAC4Cu,c->r[3]); // 8016C3CC
  c->r[4]=R32(c->r[3]+0x00000038u); // 8016C3D0
  cmps(c,0,(int32_t)c->r[4],0); // 8016C3D4
  W32(c->r[13]+0xFFFFAC48u,c->r[4]); // 8016C3D8
  if (crb(c,2)) return; // 8016C3DC
  c->r[3]=R32(c->r[4]+0x00000008u); // 8016C3E0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8016C3E4
  W32(c->r[13]+0xFFFFAC40u,c->r[3]); // 8016C3E8
  c->r[0]=c->r[4]+c->r[0]; // 8016C3EC
  W32(c->r[13]+0xFFFFAC44u,c->r[0]); // 8016C3F0
  return; // 8016C3F4
}

// DVDFastOpen
void f_8016C3F8(Ctx* __restrict c) {
  trace_call(0x8016C3F8u);
  cmps(c,0,(int32_t)c->r[3],0); // 8016C3F8
  if (crb(c,0)) { goto L_8016C420; } // 8016C3FC
  c->r[0]=R32(c->r[13]+0xFFFFAC40u); // 8016C400
  cmpu(c,0,c->r[3],c->r[0]); // 8016C404
  if (!crb(c,0)) { goto L_8016C420; } // 8016C408
  c->r[7]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8016C40C
  c->r[3]=R32(c->r[13]+0xFFFFAC48u); // 8016C410
  c->r[0]=R32(c->r[3]+c->r[7]); // 8016C414
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 8016C418
  if (crb(c,2)) { goto L_8016C428; } // 8016C41C
L_8016C420:;
  c->r[3]=0u+0x00000000u; // 8016C420
  return; // 8016C424
L_8016C428:;
  c->r[3]=c->r[3]+c->r[7]; // 8016C428
  c->r[5]=R32(c->r[13]+0xFFFFAC98u); // 8016C42C
  c->r[6]=R32(c->r[3]+0x00000004u); // 8016C430
  c->r[0]=0u+0x00000000u; // 8016C434
  c->r[3]=0u+0x00000001u; // 8016C438
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]>>((c->r[5])&31)); // 8016C43C
  W32(c->r[4]+0x00000030u,c->r[5]); // 8016C440
  c->r[5]=R32(c->r[13]+0xFFFFAC48u); // 8016C444
  c->r[5]=c->r[5]+c->r[7]; // 8016C448
  c->r[5]=R32(c->r[5]+0x00000008u); // 8016C44C
  W32(c->r[4]+0x00000034u,c->r[5]); // 8016C450
  W32(c->r[4]+0x00000038u,c->r[0]); // 8016C454
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016C458
  return; // 8016C45C
}

// fn_8016C460
void f_8016C460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C460
  c->r[0]=c->lr; // 8016C464
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016C468
  c->lr=0x8016C470u; f_80170C0C(c); // 8016C46C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016C470
  c->r[3]=0u+0x00000001u; // 8016C474
  c->lr=c->r[0]; // 8016C478
  c->r[1]=c->r[1]+0x00000010u; // 8016C47C
  return; // 8016C480
}

// DVDReadPrio
void f_8016C484(Ctx* __restrict c) {
  trace_call(0x8016C484u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C484
  c->r[0]=c->lr; // 8016C488
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016C48C
  c->r[11]=c->r[1]+0x00000020u; // 8016C490
  c->lr=0x8016C498u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8016C494
  cmps(c,0,(int32_t)c->r[6],0); // 8016C498
  c->r[27]=c->r[3]|c->r[3]; // 8016C49C
  c->r[28]=c->r[4]|c->r[4]; // 8016C4A0
  c->r[29]=c->r[5]|c->r[5]; // 8016C4A4
  c->r[31]=c->r[6]|c->r[6]; // 8016C4A8
  c->r[30]=c->r[7]|c->r[7]; // 8016C4AC
  if (crb(c,0)) { goto L_8016C4C0; } // 8016C4B0
  c->r[0]=R32(c->r[3]+0x00000034u); // 8016C4B4
  cmpu(c,0,c->r[6],c->r[0]); // 8016C4B8
  if (!crb(c,1)) { goto L_8016C4D8; } // 8016C4BC
L_8016C4C0:;
  c->r[5]=0u+0x802D0000u; // 8016C4C0
  c->r[3]=c->r[13]+0xFFFF90D8u; // 8016C4C4
  c->r[5]=c->r[5]+0x00005A90u; // 8016C4C8
  c->r[4]=0u+0x0000037Du; // 8016C4CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8016C4D0
  c->lr=0x8016C4D8u; f_80150744(c); // 8016C4D4
L_8016C4D8:;
  c->r[4]=c->r[31]+c->r[29]; cr0(c,c->r[4]); // 8016C4D8
  if (crb(c,0)) { goto L_8016C4F0; } // 8016C4DC
  c->r[3]=R32(c->r[27]+0x00000034u); // 8016C4E0
  c->r[0]=c->r[3]+0x00000020u; // 8016C4E4
  cmpu(c,0,c->r[4],c->r[0]); // 8016C4E8
  if (crb(c,0)) { goto L_8016C508; } // 8016C4EC
L_8016C4F0:;
  c->r[5]=0u+0x802D0000u; // 8016C4F0
  c->r[3]=c->r[13]+0xFFFF90D8u; // 8016C4F4
  c->r[5]=c->r[5]+0x00005A90u; // 8016C4F8
  c->r[4]=0u+0x00000383u; // 8016C4FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8016C500
  c->lr=0x8016C508u; f_80150744(c); // 8016C504
L_8016C508:;
  c->r[6]=R32(c->r[27]+0x00000030u); // 8016C508
  c->r[0]=sraw(c,c->r[31],2); // 8016C50C
  c->r[7]=0u+0x80170000u; // 8016C510
  c->r[3]=c->r[27]|c->r[27]; // 8016C514
  c->r[4]=c->r[28]|c->r[28]; // 8016C518
  c->r[5]=c->r[29]|c->r[29]; // 8016C51C
  c->r[8]=c->r[30]|c->r[30]; // 8016C520
  c->r[6]=c->r[6]+c->r[0]; // 8016C524
  c->r[7]=c->r[7]+0xFFFFC5ACu; // 8016C528
  c->lr=0x8016C530u; f_80170528(c); // 8016C52C
  cmps(c,0,(int32_t)c->r[3],0); // 8016C530
  if (!crb(c,2)) { goto L_8016C540; } // 8016C534
  c->r[3]=0u+0xFFFFFFFFu; // 8016C538
  goto L_8016C594; // 8016C53C
L_8016C540:;
  c->lr=0x8016C544u; f_80154410(c); // 8016C540
  c->r[31]=c->r[3]|c->r[3]; // 8016C544
L_8016C548:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8016C548
  cmps(c,0,(int32_t)c->r[0],0); // 8016C54C
  if (!crb(c,2)) { goto L_8016C55C; } // 8016C550
  c->r[30]=R32(c->r[27]+0x00000020u); // 8016C554
  goto L_8016C588; // 8016C558
L_8016C55C:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8016C55C
  if (!crb(c,2)) { goto L_8016C56C; } // 8016C560
  c->r[30]=0u+0xFFFFFFFFu; // 8016C564
  goto L_8016C588; // 8016C568
L_8016C56C:;
  cmps(c,0,(int32_t)c->r[0],10); // 8016C56C
  if (!crb(c,2)) { goto L_8016C57C; } // 8016C570
  c->r[30]=0u+0xFFFFFFFDu; // 8016C574
  goto L_8016C588; // 8016C578
L_8016C57C:;
  c->r[3]=c->r[13]+0xFFFFAC38u; // 8016C57C
  c->lr=0x8016C584u; f_801581D4(c); // 8016C580
  IRQCHK(c); goto L_8016C548; // 8016C584
L_8016C588:;
  c->r[3]=c->r[31]|c->r[31]; // 8016C588
  c->lr=0x8016C590u; f_80154438(c); // 8016C58C
  c->r[3]=c->r[30]|c->r[30]; // 8016C590
L_8016C594:;
  c->r[11]=c->r[1]+0x00000020u; // 8016C594
  c->lr=0x8016C59Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8016C598
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016C59C
  c->lr=c->r[0]; // 8016C5A0
  c->r[1]=c->r[1]+0x00000020u; // 8016C5A4
  return; // 8016C5A8
}

// fn_8016C5AC
void f_8016C5AC(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFAC38u; // 8016C5AC
  f_801582C0(c); return; // 8016C5B0
}

// fn_8016C5B4
void f_8016C5B4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFAC4Cu); // 8016C5B4
  c->r[3]=R32(c->r[3]+0x00000038u); // 8016C5B8
  return; // 8016C5BC
}

// dvd_StampCommand
void f_8016C5C0(Ctx* __restrict c) {
  trace_call(0x8016C5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C5C0
  c->r[0]=c->lr; // 8016C5C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016C5C8
  c->r[11]=c->r[1]+0x00000020u; // 8016C5CC
  c->lr=0x8016C5D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8016C5D0
  c->r[27]=c->r[3]|c->r[3]; // 8016C5D4
  c->r[28]=c->r[4]|c->r[4]; // 8016C5D8
  c->r[29]=c->r[5]|c->r[5]; // 8016C5DC
  c->lr=0x8016C5E4u; f_80154410(c); // 8016C5E0
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C5E4
  c->r[31]=c->r[3]|c->r[3]; // 8016C5E8
  cmpu(c,0,c->r[0],0x00000005u); // 8016C5EC
  if (crb(c,0)) { goto L_8016C5FC; } // 8016C5F0
  c->r[0]=0u+0x00000000u; // 8016C5F4
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016C5F8
L_8016C5FC:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C5FC
  c->r[30]=0u+0x80440000u; // 8016C600
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016C604
  c->r[30]=c->r[30]+0x00004C40u; // 8016C608
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016C60C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C610
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016C614
  c->r[4]=c->r[30]+c->r[4]; // 8016C618
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 8016C61C
  c->r[3]=c->r[30]+c->r[3]; // 8016C620
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016C624
  W32(c->r[3]+0x00000020u,c->r[28]); // 8016C628
  c->r[3]=c->r[30]+c->r[0]; // 8016C62C
  W32(c->r[3]+0x00000024u,c->r[29]); // 8016C630
  c->lr=0x8016C638u; f_801584A4(c); // 8016C634
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C638
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016C63C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016C640
  c->r[0]=c->r[4]+0x00000001u; // 8016C644
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016C648
  c->r[4]=c->r[30]+c->r[5]; // 8016C64C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016C650
  c->r[3]=c->r[31]|c->r[31]; // 8016C654
  c->lr=0x8016C65Cu; f_80154438(c); // 8016C658
  c->r[11]=c->r[1]+0x00000020u; // 8016C65C
  c->lr=0x8016C664u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8016C660
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016C664
  c->lr=c->r[0]; // 8016C668
  c->r[1]=c->r[1]+0x00000020u; // 8016C66C
  return; // 8016C670
}

// dvd_defaultOptionalCommandChecker
void f_8016C674(Ctx* __restrict c) {
  trace_call(0x8016C674u);
  return; // 8016C674
}

// DVDInit
void f_8016C678(Ctx* __restrict c) {
  trace_call(0x8016C678u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C678
  c->r[0]=c->lr; // 8016C67C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016C680
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016C684
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016C688
  c->r[0]=R32(c->r[13]+0xFFFFAC9Cu); // 8016C68C
  cmps(c,0,(int32_t)c->r[0],0); // 8016C690
  if (!crb(c,2)) { goto L_8016C7B4; } // 8016C694
  c->r[3]=R32(c->r[13]+0xFFFF90E0u); // 8016C698
  c->lr=0x8016C6A0u; f_8014E714(c); // 8016C69C
  c->r[0]=0u+0x00000001u; // 8016C6A0
  W32(c->r[13]+0xFFFFAC9Cu,c->r[0]); // 8016C6A4
  c->lr=0x8016C6ACu; f_80172294(c); // 8016C6A8
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8016C6AC
  cmps(c,0,(int32_t)c->r[0],0); // 8016C6B0
  if (!crb(c,2)) { goto L_8016C714; } // 8016C6B4
  c->r[3]=0u+0x80000000u; // 8016C6B8
  c->r[0]=R8(c->r[3]+0x00003187u); // 8016C6BC
  cmpu(c,0,c->r[0],0x00000080u); // 8016C6C0
  if (!crb(c,2)) { goto L_8016C714; } // 8016C6C4
  c->lr=0x8016C6CCu; f_80185008(c); // 8016C6C8
  cmps(c,0,(int32_t)c->r[3],0); // 8016C6CC
  if (!crb(c,2)) { goto L_8016C6E4; } // 8016C6D0
  c->r[4]=0u+0x80440000u; // 8016C6D4
  c->r[3]=0u+0x00000000u; // 8016C6D8
  c->r[4]=c->r[4]+0xFFFFFE00u; // 8016C6DC
  c->lr=0x8016C6E4u; f_8018545C(c); // 8016C6E0
L_8016C6E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016C6E4
  if (!crb(c,2)) { goto L_8016C6F8; } // 8016C6E8
  c->r[3]=0u+0x00000000u; // 8016C6EC
  c->r[4]=c->r[13]+0xFFFFACC0u; // 8016C6F0
  c->lr=0x8016C6F8u; f_80185500(c); // 8016C6F4
L_8016C6F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016C6F8
  if (!crb(c,2)) { goto L_8016C710; } // 8016C6FC
  c->r[3]=0u+0x80440000u; // 8016C700
  c->r[4]=c->r[13]+0xFFFFACC0u; // 8016C704
  c->r[3]=c->r[3]+0xFFFFFF00u; // 8016C708
  c->lr=0x8016C710u; f_80185500(c); // 8016C70C
L_8016C710:;
  c->lr=0x8016C714u; f_8018505C(c); // 8016C710
L_8016C714:;
  c->lr=0x8016C718u; f_8016C3C8(c); // 8016C714
  c->lr=0x8016C71Cu; f_80171094(c); // 8016C718
  c->r[0]=0u+0x80000000u; // 8016C71C
  c->r[3]=0u+0x00000000u; // 8016C720
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 8016C724
  c->r[3]=c->r[13]+0xFFFFAC38u; // 8016C728
  W32(c->r[13]+0xFFFFACE8u,c->r[0]); // 8016C72C
  W32(c->r[13]+0xFFFFACECu,c->r[0]); // 8016C730
  c->lr=0x8016C738u; f_8015715C(c); // 8016C734
  c->lr=0x8016C73Cu; f_801743A0(c); // 8016C738
  c->lr=0x8016C740u; f_801743A8(c); // 8016C73C
  c->r[3]=R32(c->r[13]+0xFFFFACE8u); // 8016C740
  c->r[3]=R32(c->r[3]+0x00000020u); // 8016C744
  c->r[0]=c->r[3]+0x1AE00000u; // 8016C748
  cmpu(c,0,c->r[0],0x00007C22u); // 8016C74C
  if (crb(c,2)) { goto L_8016C768; } // 8016C750
  c->r[0]=c->r[3]+0xF2EB0000u; // 8016C754
  cmpu(c,0,c->r[0],0x0000EA5Eu); // 8016C758
  if (crb(c,2)) { goto L_8016C768; } // 8016C75C
  c->r[0]=0u+0x00000001u; // 8016C760
  W32(c->r[13]+0xFFFFAC7Cu,c->r[0]); // 8016C764
L_8016C768:;
  c->r[31]=0u+0x80440000u; // 8016C768
  c->r[4]=0u+0x00000000u; // 8016C76C
  c->r[3]=c->r[31]+0x00004C40u; // 8016C770
  c->r[5]=0u+0x00000080u; // 8016C774
  c->lr=0x8016C77Cu; f_8000443C(c); // 8016C778
  c->r[30]=0u+0x80000000u; // 8016C77C
  c->r[3]=c->r[31]+0x00004C40u; // 8016C780
  c->r[4]=c->r[30]|c->r[30]; // 8016C784
  c->r[5]=0u+0x00000004u; // 8016C788
  c->lr=0x8016C790u; f_80004338(c); // 8016C78C
  c->r[4]=R8(c->r[30]+0x00000006u); // 8016C790
  c->r[5]=c->r[31]+0x00004C40u; // 8016C794
  c->r[0]=0u+0x00000000u; // 8016C798
  c->r[3]=0u+0x00000001u; // 8016C79C
  W8(c->r[5]+0x00000004u,c->r[4]); // 8016C7A0
  c->r[4]=R8(c->r[30]+0x00000007u); // 8016C7A4
  W8(c->r[5]+0x00000005u,c->r[4]); // 8016C7A8
  W32(c->r[13]+0xFFFFAC98u,c->r[0]); // 8016C7AC
  c->lr=0x8016C7B4u; f_80171DB0(c); // 8016C7B0
L_8016C7B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016C7B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016C7B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016C7BC
  c->lr=c->r[0]; // 8016C7C0
  c->r[1]=c->r[1]+0x00000010u; // 8016C7C4
  return; // 8016C7C8
}

// dvd_stateReadingFST
void f_8016C7CC(Ctx* __restrict c) {
  trace_call(0x8016C7CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C7CC
  c->r[0]=c->lr; // 8016C7D0
  c->r[5]=0u+0x80170000u; // 8016C7D4
  c->r[3]=0u+0x80440000u; // 8016C7D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016C7DC
  c->r[5]=c->r[5]+0xFFFFC7CCu; // 8016C7E0
  c->r[3]=c->r[3]+0x00004900u; // 8016C7E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016C7E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016C7EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016C7F0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016C7F4
  c->r[4]=R32(c->r[13]+0xFFFFACE8u); // 8016C7F8
  W32(c->r[13]+0xFFFFACF4u,c->r[5]); // 8016C7FC
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016C800
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 8016C804
  cmpu(c,0,c->r[3],c->r[0]); // 8016C808
  if (!crb(c,0)) { goto L_8016C828; } // 8016C80C
  c->r[5]=0u+0x802D0000u; // 8016C810
  c->r[3]=c->r[13]+0xFFFF90ECu; // 8016C814
  c->r[5]=c->r[5]+0x00005B08u; // 8016C818
  c->r[4]=0u+0x0000043Bu; // 8016C81C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8016C820
  c->lr=0x8016C828u; f_80150744(c); // 8016C824
L_8016C828:;
  c->r[3]=0u+0x00000000u; // 8016C828
  c->lr=0x8016C830u; f_801743B0(c); // 8016C82C
  c->r[3]=R32(c->r[13]+0xFFFFAC98u); // 8016C830
  c->r[6]=0u+0x80440000u; // 8016C834
  c->r[6]=c->r[6]+0x00004900u; // 8016C838
  c->r[0]=R32(c->r[13]+0xFFFFAC98u); // 8016C83C
  c->r[3]=~(c->r[3]|c->r[3]); // 8016C840
  c->r[5]=R32(c->r[6]+0x00000008u); // 8016C844
  c->r[4]=rotl(c->r[3],0)&0x00000002u; // 8016C848
  c->r[3]=R32(c->r[6]+0x00000004u); // 8016C84C
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 8016C850
  c->r[4]=c->r[4]+0x0000001Fu; // 8016C854
  c->r[29]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 8016C858
  c->r[28]=rotl(c->r[4],0)&0xFFFFFFE0u; // 8016C85C
  c->lr=0x8016C864u; f_80154410(c); // 8016C860
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C864
  c->r[31]=c->r[3]|c->r[3]; // 8016C868
  cmpu(c,0,c->r[0],0x00000005u); // 8016C86C
  if (crb(c,0)) { goto L_8016C87C; } // 8016C870
  c->r[0]=0u+0x00000000u; // 8016C874
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016C878
L_8016C87C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C87C
  c->r[30]=0u+0x80440000u; // 8016C880
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016C884
  c->r[30]=c->r[30]+0x00004C40u; // 8016C888
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016C88C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C890
  c->r[5]=0u+0x00000001u; // 8016C894
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016C898
  c->r[4]=c->r[30]+c->r[4]; // 8016C89C
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 8016C8A0
  c->r[3]=c->r[30]+c->r[3]; // 8016C8A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016C8A8
  W32(c->r[3]+0x00000020u,c->r[29]); // 8016C8AC
  c->r[3]=c->r[30]+c->r[0]; // 8016C8B0
  W32(c->r[3]+0x00000024u,c->r[28]); // 8016C8B4
  c->lr=0x8016C8BCu; f_801584A4(c); // 8016C8B8
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C8BC
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016C8C0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016C8C4
  c->r[0]=c->r[4]+0x00000001u; // 8016C8C8
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016C8CC
  c->r[4]=c->r[30]+c->r[5]; // 8016C8D0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016C8D4
  c->r[3]=c->r[31]|c->r[31]; // 8016C8D8
  c->lr=0x8016C8E0u; f_80154438(c); // 8016C8DC
  c->r[0]=R32(c->r[13]+0xFFFFAC98u); // 8016C8E0
  c->r[4]=0u+0x80440000u; // 8016C8E4
  c->r[4]=c->r[4]+0x00004900u; // 8016C8E8
  c->r[6]=0u+0x80170000u; // 8016C8EC
  c->r[0]=~(c->r[0]|c->r[0]); // 8016C8F0
  c->r[3]=R32(c->r[4]+0x00000008u); // 8016C8F4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 8016C8F8
  c->r[7]=R32(c->r[13]+0xFFFFACE8u); // 8016C8FC
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8016C900
  c->r[5]=R32(c->r[4]+0x00000004u); // 8016C904
  c->r[4]=c->r[3]+0x0000001Fu; // 8016C908
  c->r[0]=R32(c->r[13]+0xFFFFAC98u); // 8016C90C
  c->r[3]=R32(c->r[7]+0x00000038u); // 8016C910
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 8016C914
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 8016C918
  c->r[6]=c->r[6]+0xFFFFC944u; // 8016C91C
  c->lr=0x8016C924u; f_80173D7C(c); // 8016C920
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016C924
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016C928
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016C92C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016C930
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016C934
  c->lr=c->r[0]; // 8016C938
  c->r[1]=c->r[1]+0x00000020u; // 8016C93C
  return; // 8016C940
}

// cbForStateReadingFST
void f_8016C944(Ctx* __restrict c) {
  trace_call(0x8016C944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C944
  c->r[0]=c->lr; // 8016C948
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016C94C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016C950
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016C954
  c->r[30]=c->r[3]|c->r[3]; // 8016C958
  c->lr=0x8016C960u; f_80154410(c); // 8016C95C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C960
  cmps(c,0,(int32_t)c->r[0],0); // 8016C964
  if (!crb(c,2)) { goto L_8016C97C; } // 8016C968
  c->r[4]=0u+0x80440000u; // 8016C96C
  c->r[4]=c->r[4]+0x00004C40u; // 8016C970
  W32(c->r[4]+0x00000078u,c->r[30]); // 8016C974
  goto L_8016C994; // 8016C978
L_8016C97C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016C97C
  c->r[4]=0u+0x80440000u; // 8016C980
  c->r[4]=c->r[4]+0x00004C40u; // 8016C984
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016C988
  c->r[4]=c->r[4]+c->r[0]; // 8016C98C
  W32(c->r[4]+0x00000014u,c->r[30]); // 8016C990
L_8016C994:;
  c->lr=0x8016C998u; f_80154438(c); // 8016C994
  cmpu(c,0,c->r[30],0x00000010u); // 8016C998
  if (!crb(c,2)) { goto L_8016C9B8; } // 8016C99C
  c->r[3]=0u+0x01230000u; // 8016C9A0
  c->r[4]=0u+0x80170000u; // 8016C9A4
  c->r[3]=c->r[3]+0x00004568u; // 8016C9A8
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016C9AC
  c->lr=0x8016C9B4u; f_80171B88(c); // 8016C9B0
  goto L_8016CAB0; // 8016C9B4
L_8016C9B8:;
  cmpu(c,0,c->r[30],0x00000020u); // 8016C9B8
  if (!crb(c,2)) { goto L_8016C9D8; } // 8016C9BC
  c->r[3]=0u+0x01230000u; // 8016C9C0
  c->r[4]=0u+0x80170000u; // 8016C9C4
  c->r[3]=c->r[3]+0x00004569u; // 8016C9C8
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016C9CC
  c->lr=0x8016C9D4u; f_80171B88(c); // 8016C9D0
  goto L_8016CAB0; // 8016C9D4
L_8016C9D8:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 8016C9D8
  if (crb(c,2)) { goto L_8016CA20; } // 8016C9DC
  c->r[30]=0u+0x00000000u; // 8016C9E0
  W32(c->r[13]+0xFFFFAC78u,c->r[30]); // 8016C9E4
  c->lr=0x8016C9ECu; f_8016C3C8(c); // 8016C9E8
  c->r[3]=0u+0x80440000u; // 8016C9EC
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016C9F0
  c->r[3]=c->r[3]+0x00004920u; // 8016C9F4
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016C9F8
  W32(c->r[4]+0x0000000Cu,c->r[30]); // 8016C9FC
  c->r[12]=R32(c->r[4]+0x00000028u); // 8016CA00
  cmps(c,0,(int32_t)c->r[12],0); // 8016CA04
  if (crb(c,2)) { goto L_8016CA18; } // 8016CA08
  c->r[3]=0u+0x00000000u; // 8016CA0C
  c->ctr=c->r[12]; // 8016CA10
  if (true) { c->lr=0x8016CA18u; dispatch(c,c->ctr); } // 8016CA14
L_8016CA18:;
  c->lr=0x8016CA1Cu; f_8016F270(c); // 8016CA18
  goto L_8016CAB0; // 8016CA1C
L_8016CA20:;
  c->lr=0x8016CA24u; f_80154410(c); // 8016CA20
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CA24
  c->r[31]=c->r[3]|c->r[3]; // 8016CA28
  cmpu(c,0,c->r[0],0x00000005u); // 8016CA2C
  if (crb(c,0)) { goto L_8016CA3C; } // 8016CA30
  c->r[0]=0u+0x00000000u; // 8016CA34
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016CA38
L_8016CA3C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CA3C
  c->r[30]=0u+0x80440000u; // 8016CA40
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016CA44
  c->r[30]=c->r[30]+0x00004C40u; // 8016CA48
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016CA4C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CA50
  c->r[6]=0u+0x00000027u; // 8016CA54
  c->r[4]=0u+0x00000000u; // 8016CA58
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016CA5C
  c->r[5]=c->r[30]+c->r[5]; // 8016CA60
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016CA64
  c->r[3]=c->r[30]+c->r[3]; // 8016CA68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016CA6C
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016CA70
  c->r[3]=c->r[30]+c->r[0]; // 8016CA74
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016CA78
  c->lr=0x8016CA80u; f_801584A4(c); // 8016CA7C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CA80
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016CA84
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016CA88
  c->r[0]=c->r[4]+0x00000001u; // 8016CA8C
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016CA90
  c->r[4]=c->r[30]+c->r[5]; // 8016CA94
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016CA98
  c->r[3]=c->r[31]|c->r[31]; // 8016CA9C
  c->lr=0x8016CAA4u; f_80154438(c); // 8016CAA0
  c->r[3]=0u+0x80170000u; // 8016CAA4
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016CAA8
  c->lr=0x8016CAB0u; f_801735E4(c); // 8016CAAC
L_8016CAB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016CAB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016CAB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016CAB8
  c->lr=c->r[0]; // 8016CABC
  c->r[1]=c->r[1]+0x00000010u; // 8016CAC0
  return; // 8016CAC4
}

// fn_8016CAC8
void f_8016CAC8(Ctx* __restrict c) {
  f_80171E20(c); return; // 8016CAC8
}

// dvd_cbForStateError
void f_8016CACC(Ctx* __restrict c) {
  trace_call(0x8016CACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CACC
  c->r[0]=c->lr; // 8016CAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016CAD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016CAD8
  c->r[31]=c->r[3]|c->r[3]; // 8016CADC
  c->lr=0x8016CAE4u; f_80171E0C(c); // 8016CAE0
  cmps(c,0,(int32_t)c->r[3],0); // 8016CAE4
  if (crb(c,2)) { goto L_8016CB14; } // 8016CAE8
  c->r[31]=0u+0x80440000u; // 8016CAEC
  c->r[3]=c->r[31]+0x00004950u; // 8016CAF0
  c->lr=0x8016CAF8u; f_8014E820(c); // 8016CAF4
  c->r[7]=0u+0x80170000u; // 8016CAF8
  c->r[3]=c->r[31]+0x00004950u; // 8016CAFC
  c->r[7]=c->r[7]+0xFFFFCAC8u; // 8016CB00
  c->r[6]=0u+0x00000001u; // 8016CB04
  c->r[5]=0u+0x00000000u; // 8016CB08
  c->lr=0x8016CB10u; f_8014EA80(c); // 8016CB0C
  goto L_8016CBC8; // 8016CB10
L_8016CB14:;
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016CB14
  c->r[0]=0u+0xFFFFFFFFu; // 8016CB18
  cmpu(c,0,c->r[31],0x00000010u); // 8016CB1C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016CB20
  if (!crb(c,2)) { goto L_8016CB40; } // 8016CB24
  c->r[3]=0u+0x01230000u; // 8016CB28
  c->r[4]=0u+0x80170000u; // 8016CB2C
  c->r[3]=c->r[3]+0x00004568u; // 8016CB30
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016CB34
  c->lr=0x8016CB3Cu; f_80171B88(c); // 8016CB38
  goto L_8016CBC8; // 8016CB3C
L_8016CB40:;
  cmpu(c,0,c->r[31],0x00000020u); // 8016CB40
  if (!crb(c,2)) { goto L_8016CB60; } // 8016CB44
  c->r[3]=0u+0x01230000u; // 8016CB48
  c->r[4]=0u+0x80170000u; // 8016CB4C
  c->r[3]=c->r[3]+0x00004569u; // 8016CB50
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016CB54
  c->lr=0x8016CB5Cu; f_80171B88(c); // 8016CB58
  goto L_8016CBC8; // 8016CB5C
L_8016CB60:;
  c->r[3]=0u+0x80440000u; // 8016CB60
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016CB64
  c->r[3]=c->r[3]+0x00004920u; // 8016CB68
  c->r[0]=0u+0x00000001u; // 8016CB6C
  W32(c->r[13]+0xFFFFAC6Cu,c->r[0]); // 8016CB70
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016CB74
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016CB78
  cmps(c,0,(int32_t)c->r[12],0); // 8016CB7C
  if (crb(c,2)) { goto L_8016CB94; } // 8016CB80
  c->r[4]=c->r[31]|c->r[31]; // 8016CB84
  c->r[3]=0u+0xFFFFFFFFu; // 8016CB88
  c->ctr=c->r[12]; // 8016CB8C
  if (true) { c->lr=0x8016CB94u; dispatch(c,c->ctr); } // 8016CB90
L_8016CB94:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016CB94
  cmps(c,0,(int32_t)c->r[0],0); // 8016CB98
  if (crb(c,2)) { goto L_8016CBC4; } // 8016CB9C
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016CBA0
  c->r[0]=0u+0x00000000u; // 8016CBA4
  W32(c->r[13]+0xFFFFAC70u,c->r[0]); // 8016CBA8
  cmps(c,0,(int32_t)c->r[12],0); // 8016CBAC
  if (crb(c,2)) { goto L_8016CBC4; } // 8016CBB0
  c->r[4]=c->r[31]|c->r[31]; // 8016CBB4
  c->r[3]=0u+0x00000000u; // 8016CBB8
  c->ctr=c->r[12]; // 8016CBBC
  if (true) { c->lr=0x8016CBC4u; dispatch(c,c->ctr); } // 8016CBC0
L_8016CBC4:;
  c->lr=0x8016CBC8u; f_8016F270(c); // 8016CBC4
L_8016CBC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016CBC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016CBCC
  c->lr=c->r[0]; // 8016CBD0
  c->r[1]=c->r[1]+0x00000010u; // 8016CBD4
  return; // 8016CBD8
}

// cbForStoreErrorCode1
void f_8016CBDC(Ctx* __restrict c) {
  trace_call(0x8016CBDCu);
  c->r[5]=0u+0x80170000u; // 8016CBDC
  c->r[3]=0u+0x00000000u; // 8016CBE0
  c->r[5]=c->r[5]+0xFFFFCACCu; // 8016CBE4
  c->r[4]=0u+0x00000000u; // 8016CBE8
  f_801732E8(c); return; // 8016CBEC
}

// dvd_cbForStoreErrorCode2
void f_8016CBF0(Ctx* __restrict c) {
  trace_call(0x8016CBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CBF0
  c->r[0]=c->lr; // 8016CBF4
  c->r[3]=0u+0x00000000u; // 8016CBF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016CBFC
  c->lr=0x8016CC04u; f_8017374C(c); // 8016CC00
  c->r[3]=0u+0x80170000u; // 8016CC04
  c->r[3]=c->r[3]+0xFFFFCACCu; // 8016CC08
  c->lr=0x8016CC10u; f_80173758(c); // 8016CC0C
  c->r[0]=0u+0x00000000u; // 8016CC10
  W32(c->r[13]+0xFFFFACD4u,c->r[0]); // 8016CC14
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016CC18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016CC1C
  c->lr=c->r[0]; // 8016CC20
  c->r[1]=c->r[1]+0x00000010u; // 8016CC24
  return; // 8016CC28
}

// fn_8016CC2C
void f_8016CC2C(Ctx* __restrict c) {
  c->r[0]=c->r[3]+0xFFFE0000u; // 8016CC2C
  cmpu(c,0,c->r[0],0x00000400u); // 8016CC30
  if (!crb(c,2)) { goto L_8016CC44; } // 8016CC34
  W32(c->r[13]+0xFFFFACD8u,c->r[3]); // 8016CC38
  c->r[3]=0u+0x00000001u; // 8016CC3C
  return; // 8016CC40
L_8016CC44:;
  c->r[4]=rotl(c->r[3],0)&0x00FFFFFFu; // 8016CC44
  c->r[0]=c->r[4]+0xFFFA0000u; // 8016CC48
  cmpu(c,0,c->r[0],0x00002800u); // 8016CC4C
  if (crb(c,2)) { goto L_8016CC78; } // 8016CC50
  c->r[0]=c->r[4]+0xFFFE0000u; // 8016CC54
  cmpu(c,0,c->r[0],0x00003A00u); // 8016CC58
  if (crb(c,2)) { goto L_8016CC78; } // 8016CC5C
  c->r[3]=c->r[4]+0xFFFB0000u; // 8016CC60
  cmpu(c,0,c->r[3],0x00003000u); // 8016CC64
  if (crb(c,2)) { goto L_8016CC78; } // 8016CC68
  c->r[0]=c->r[4]+0xFFF50000u; // 8016CC6C
  cmpu(c,0,c->r[0],0x00005A01u); // 8016CC70
  if (!crb(c,2)) { goto L_8016CC80; } // 8016CC74
L_8016CC78:;
  c->r[3]=0u+0x00000000u; // 8016CC78
  return; // 8016CC7C
L_8016CC80:;
  cmpu(c,0,c->r[3],0x00002000u); // 8016CC80
  if (!crb(c,2)) { goto L_8016CCB4; } // 8016CC84
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016CC88
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016CC8C
  cmpu(c,0,c->r[0],0x00000025u); // 8016CC90
  if (crb(c,2)) { goto L_8016CCAC; } // 8016CC94
  c->r[3]=0u+0x80170000u; // 8016CC98
  c->r[0]=R32(c->r[13]+0xFFFFACF4u); // 8016CC9C
  c->r[3]=c->r[3]+0xFFFFEB6Cu; // 8016CCA0
  cmpu(c,0,c->r[0],c->r[3]); // 8016CCA4
  if (!crb(c,2)) { goto L_8016CCB4; } // 8016CCA8
L_8016CCAC:;
  c->r[3]=0u+0x00000000u; // 8016CCAC
  return; // 8016CCB0
L_8016CCB4:;
  c->r[3]=R32(c->r[13]+0xFFFFAC78u); // 8016CCB4
  c->r[0]=c->r[3]+0x00000001u; // 8016CCB8
  W32(c->r[13]+0xFFFFAC78u,c->r[0]); // 8016CCBC
  c->r[0]=R32(c->r[13]+0xFFFFAC78u); // 8016CCC0
  cmps(c,0,(int32_t)c->r[0],2); // 8016CCC4
  if (!crb(c,2)) { goto L_8016CCF0; } // 8016CCC8
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 8016CCCC
  cmpu(c,0,c->r[4],c->r[0]); // 8016CCD0
  if (!crb(c,2)) { goto L_8016CCE4; } // 8016CCD4
  W32(c->r[13]+0xFFFFACD8u,c->r[4]); // 8016CCD8
  c->r[3]=0u+0x00000001u; // 8016CCDC
  return; // 8016CCE0
L_8016CCE4:;
  W32(c->r[13]+0xFFFFACD8u,c->r[4]); // 8016CCE4
  c->r[3]=0u+0x00000002u; // 8016CCE8
  return; // 8016CCEC
L_8016CCF0:;
  c->r[0]=c->r[4]+0xFFFD0000u; // 8016CCF0
  W32(c->r[13]+0xFFFFACD8u,c->r[4]); // 8016CCF4
  cmpu(c,0,c->r[0],0x00001100u); // 8016CCF8
  if (crb(c,2)) { goto L_8016CD10; } // 8016CCFC
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016CD00
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016CD04
  cmpu(c,0,c->r[0],0x00000005u); // 8016CD08
  if (!crb(c,2)) { goto L_8016CD18; } // 8016CD0C
L_8016CD10:;
  c->r[3]=0u+0x00000002u; // 8016CD10
  return; // 8016CD14
L_8016CD18:;
  c->r[3]=0u+0x00000003u; // 8016CD18
  return; // 8016CD1C
}

// dvd_cbForStoreErrorCode3
void f_8016CD20(Ctx* __restrict c) {
  trace_call(0x8016CD20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CD20
  c->r[0]=c->lr; // 8016CD24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016CD28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016CD2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016CD30
  c->lr=0x8016CD38u; f_80154410(c); // 8016CD34
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CD38
  c->r[31]=c->r[3]|c->r[3]; // 8016CD3C
  cmpu(c,0,c->r[0],0x00000005u); // 8016CD40
  if (crb(c,0)) { goto L_8016CD50; } // 8016CD44
  c->r[0]=0u+0x00000000u; // 8016CD48
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016CD4C
L_8016CD50:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CD50
  c->r[30]=0u+0x80440000u; // 8016CD54
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016CD58
  c->r[30]=c->r[30]+0x00004C40u; // 8016CD5C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016CD60
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CD64
  c->r[6]=0u+0x00000010u; // 8016CD68
  c->r[4]=0u+0x00000000u; // 8016CD6C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016CD70
  c->r[5]=c->r[30]+c->r[5]; // 8016CD74
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016CD78
  c->r[3]=c->r[30]+c->r[3]; // 8016CD7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016CD80
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016CD84
  c->r[3]=c->r[30]+c->r[0]; // 8016CD88
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016CD8C
  c->lr=0x8016CD94u; f_801584A4(c); // 8016CD90
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CD94
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016CD98
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016CD9C
  c->r[0]=c->r[4]+0x00000001u; // 8016CDA0
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016CDA4
  c->r[4]=c->r[30]+c->r[5]; // 8016CDA8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016CDAC
  c->r[3]=c->r[31]|c->r[31]; // 8016CDB0
  c->lr=0x8016CDB8u; f_80154438(c); // 8016CDB4
  c->r[5]=0u+0x80170000u; // 8016CDB8
  c->r[3]=0u+0x00000000u; // 8016CDBC
  c->r[5]=c->r[5]+0xFFFFD59Cu; // 8016CDC0
  c->r[4]=0u+0x00000000u; // 8016CDC4
  c->lr=0x8016CDCCu; f_801732E8(c); // 8016CDC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016CDCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016CDD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016CDD4
  c->lr=c->r[0]; // 8016CDD8
  c->r[1]=c->r[1]+0x00000010u; // 8016CDDC
  return; // 8016CDE0
}

// dvd_cbForStateGettingError
void f_8016CDE4(Ctx* __restrict c) {
  trace_call(0x8016CDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CDE4
  c->r[0]=c->lr; // 8016CDE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016CDEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016CDF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016CDF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016CDF8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016CDFC
  c->r[28]=c->r[3]|c->r[3]; // 8016CE00
  c->lr=0x8016CE08u; f_80154410(c); // 8016CE04
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CE08
  cmps(c,0,(int32_t)c->r[0],0); // 8016CE0C
  if (!crb(c,2)) { goto L_8016CE24; } // 8016CE10
  c->r[4]=0u+0x80440000u; // 8016CE14
  c->r[4]=c->r[4]+0x00004C40u; // 8016CE18
  W32(c->r[4]+0x00000078u,c->r[28]); // 8016CE1C
  goto L_8016CE3C; // 8016CE20
L_8016CE24:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016CE24
  c->r[4]=0u+0x80440000u; // 8016CE28
  c->r[4]=c->r[4]+0x00004C40u; // 8016CE2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016CE30
  c->r[4]=c->r[4]+c->r[0]; // 8016CE34
  W32(c->r[4]+0x00000014u,c->r[28]); // 8016CE38
L_8016CE3C:;
  c->lr=0x8016CE40u; f_80154438(c); // 8016CE3C
  cmpu(c,0,c->r[28],0x00000010u); // 8016CE40
  if (!crb(c,2)) { goto L_8016CE60; } // 8016CE44
  c->r[3]=0u+0x01230000u; // 8016CE48
  c->r[4]=0u+0x80170000u; // 8016CE4C
  c->r[3]=c->r[3]+0x00004568u; // 8016CE50
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016CE54
  c->lr=0x8016CE5Cu; f_80171B88(c); // 8016CE58
  goto L_8016D2C8; // 8016CE5C
L_8016CE60:;
  cmpu(c,0,c->r[28],0x00000020u); // 8016CE60
  if (!crb(c,2)) { goto L_8016CE80; } // 8016CE64
  c->r[3]=0u+0x01230000u; // 8016CE68
  c->r[4]=0u+0x80170000u; // 8016CE6C
  c->r[3]=c->r[3]+0x00004569u; // 8016CE70
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016CE74
  c->lr=0x8016CE7Cu; f_80171B88(c); // 8016CE78
  goto L_8016D2C8; // 8016CE7C
L_8016CE80:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 8016CE80
  if (crb(c,2)) { goto L_8016CEA0; } // 8016CE84
  c->r[3]=0u+0x01230000u; // 8016CE88
  c->r[4]=0u+0x80170000u; // 8016CE8C
  c->r[3]=c->r[3]+0x00004567u; // 8016CE90
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016CE94
  c->lr=0x8016CE9Cu; f_80171B88(c); // 8016CE98
  goto L_8016D2C8; // 8016CE9C
L_8016CEA0:;
  c->lr=0x8016CEA4u; f_80174394(c); // 8016CEA0
  c->r[29]=c->r[3]|c->r[3]; // 8016CEA4
  c->r[28]=rotl(c->r[3],0)&0xFF000000u; // 8016CEA8
  c->lr=0x8016CEB0u; f_8016CC2C(c); // 8016CEAC
  cmpu(c,0,c->r[3],0x00000001u); // 8016CEB0
  c->r[30]=c->r[3]|c->r[3]; // 8016CEB4
  if (!crb(c,2)) { goto L_8016CED0; } // 8016CEB8
  c->r[4]=0u+0x80170000u; // 8016CEBC
  c->r[3]=c->r[29]|c->r[29]; // 8016CEC0
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016CEC4
  c->lr=0x8016CECCu; f_80171B88(c); // 8016CEC8
  goto L_8016D2C8; // 8016CECC
L_8016CED0:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8016CED0
  cmpu(c,0,c->r[0],0x00000001u); // 8016CED4
  if (crb(c,1)) { goto L_8016CEE4; } // 8016CED8
  c->r[5]=0u+0x00000000u; // 8016CEDC
  goto L_8016CF48; // 8016CEE0
L_8016CEE4:;
  c->r[0]=c->r[28]+0xFF000000u; // 8016CEE4
  cmpu(c,0,c->r[0],0x00000000u); // 8016CEE8
  if (!crb(c,2)) { goto L_8016CEF8; } // 8016CEEC
  c->r[5]=0u+0x00000004u; // 8016CEF0
  goto L_8016CF48; // 8016CEF4
L_8016CEF8:;
  c->r[0]=c->r[28]+0xFE000000u; // 8016CEF8
  cmpu(c,0,c->r[0],0x00000000u); // 8016CEFC
  if (!crb(c,2)) { goto L_8016CF0C; } // 8016CF00
  c->r[5]=0u+0x00000006u; // 8016CF04
  goto L_8016CF48; // 8016CF08
L_8016CF0C:;
  c->r[0]=c->r[28]+0xFD000000u; // 8016CF0C
  cmpu(c,0,c->r[0],0x00000000u); // 8016CF10
  if (!crb(c,2)) { goto L_8016CF20; } // 8016CF14
  c->r[5]=0u+0x00000003u; // 8016CF18
  goto L_8016CF48; // 8016CF1C
L_8016CF20:;
  cmps(c,0,(int32_t)c->r[28],0); // 8016CF20
  if (!crb(c,2)) { goto L_8016CF44; } // 8016CF24
  c->r[0]=c->r[29]+0xFFFB0000u; // 8016CF28
  cmpu(c,0,c->r[0],0x00003000u); // 8016CF2C
  if (!crb(c,2)) { goto L_8016CF3C; } // 8016CF30
  c->r[5]=0u+0x00000001u; // 8016CF34
  goto L_8016CF48; // 8016CF38
L_8016CF3C:;
  c->r[5]=0u+0x00000005u; // 8016CF3C
  goto L_8016CF48; // 8016CF40
L_8016CF44:;
  c->r[5]=0u+0x00000005u; // 8016CF44
L_8016CF48:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016CF48
  cmps(c,0,(int32_t)c->r[0],0); // 8016CF4C
  if (crb(c,2)) { goto L_8016CFBC; } // 8016CF50
  c->r[3]=0u+0x80440000u; // 8016CF54
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016CF58
  c->r[3]=c->r[3]+0x00004920u; // 8016CF5C
  c->r[4]=0u+0x00000000u; // 8016CF60
  W32(c->r[13]+0xFFFFAC74u,c->r[5]); // 8016CF64
  c->r[0]=0u+0x0000000Au; // 8016CF68
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016CF6C
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016CF70
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016CF74
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016CF78
  cmps(c,0,(int32_t)c->r[12],0); // 8016CF7C
  if (crb(c,2)) { goto L_8016CF94; } // 8016CF80
  c->r[4]=c->r[31]|c->r[31]; // 8016CF84
  c->r[3]=0u+0xFFFFFFFDu; // 8016CF88
  c->ctr=c->r[12]; // 8016CF8C
  if (true) { c->lr=0x8016CF94u; dispatch(c,c->ctr); } // 8016CF90
L_8016CF94:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016CF94
  cmps(c,0,(int32_t)c->r[12],0); // 8016CF98
  if (crb(c,2)) { goto L_8016CFB0; } // 8016CF9C
  c->r[4]=c->r[31]|c->r[31]; // 8016CFA0
  c->r[3]=0u+0x00000000u; // 8016CFA4
  c->ctr=c->r[12]; // 8016CFA8
  if (true) { c->lr=0x8016CFB0u; dispatch(c,c->ctr); } // 8016CFAC
L_8016CFB0:;
  c->lr=0x8016CFB4u; f_8016F270(c); // 8016CFB0
  c->r[0]=0u+0x00000001u; // 8016CFB4
  goto L_8016CFC0; // 8016CFB8
L_8016CFBC:;
  c->r[0]=0u+0x00000000u; // 8016CFBC
L_8016CFC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016CFC0
  if (!crb(c,2)) { goto L_8016D2C8; } // 8016CFC4
  cmpu(c,0,c->r[30],0x00000002u); // 8016CFC8
  if (!crb(c,2)) { goto L_8016CFE4; } // 8016CFCC
  c->r[4]=0u+0x80170000u; // 8016CFD0
  c->r[3]=c->r[29]|c->r[29]; // 8016CFD4
  c->r[4]=c->r[4]+0xFFFFCD20u; // 8016CFD8
  c->lr=0x8016CFE0u; f_80171B88(c); // 8016CFDC
  goto L_8016D2C8; // 8016CFE0
L_8016CFE4:;
  cmpu(c,0,c->r[30],0x00000003u); // 8016CFE4
  if (!crb(c,2)) { goto L_8016D0B4; } // 8016CFE8
  c->r[3]=rotl(c->r[29],0)&0x00FFFFFFu; // 8016CFEC
  c->r[0]=c->r[3]+0xFFFD0000u; // 8016CFF0
  cmpu(c,0,c->r[0],0x00001100u); // 8016CFF4
  if (!crb(c,2)) { goto L_8016D0A0; } // 8016CFF8
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016CFFC
  c->r[29]=R32(c->r[3]+0x00000010u); // 8016D000
  c->lr=0x8016D008u; f_80154410(c); // 8016D004
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D008
  c->r[31]=c->r[3]|c->r[3]; // 8016D00C
  cmpu(c,0,c->r[0],0x00000005u); // 8016D010
  if (crb(c,0)) { goto L_8016D020; } // 8016D014
  c->r[0]=0u+0x00000000u; // 8016D018
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D01C
L_8016D020:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D020
  c->r[30]=0u+0x80440000u; // 8016D024
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016D028
  c->r[30]=c->r[30]+0x00004C40u; // 8016D02C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D030
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D034
  c->r[6]=0u+0x00000002u; // 8016D038
  c->r[4]=0u+0x00000000u; // 8016D03C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016D040
  c->r[5]=c->r[30]+c->r[5]; // 8016D044
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016D048
  c->r[3]=c->r[30]+c->r[3]; // 8016D04C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D050
  W32(c->r[3]+0x00000020u,c->r[29]); // 8016D054
  c->r[3]=c->r[30]+c->r[0]; // 8016D058
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016D05C
  c->lr=0x8016D064u; f_801584A4(c); // 8016D060
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D064
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016D068
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D06C
  c->r[0]=c->r[4]+0x00000001u; // 8016D070
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D074
  c->r[4]=c->r[30]+c->r[5]; // 8016D078
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016D07C
  c->r[3]=c->r[31]|c->r[31]; // 8016D080
  c->lr=0x8016D088u; f_80154438(c); // 8016D084
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016D088
  c->r[4]=0u+0x80170000u; // 8016D08C
  c->r[4]=c->r[4]+0xFFFFD2E8u; // 8016D090
  c->r[3]=R32(c->r[3]+0x00000010u); // 8016D094
  c->lr=0x8016D09Cu; f_80173F2C(c); // 8016D098
  goto L_8016D2C8; // 8016D09C
L_8016D0A0:;
  c->r[12]=R32(c->r[13]+0xFFFFACF4u); // 8016D0A0
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016D0A4
  c->ctr=c->r[12]; // 8016D0A8
  if (true) { c->lr=0x8016D0B0u; dispatch(c,c->ctr); } // 8016D0AC
  goto L_8016D2C8; // 8016D0B0
L_8016D0B4:;
  c->r[0]=c->r[28]+0xFF000000u; // 8016D0B4
  cmpu(c,0,c->r[0],0x00000000u); // 8016D0B8
  if (!crb(c,2)) { goto L_8016D140; } // 8016D0BC
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016D0C0
  c->r[0]=0u+0x00000005u; // 8016D0C4
  c->r[3]=0u+0x00000001u; // 8016D0C8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016D0CC
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016D0D0
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 8016D0D4
  cmps(c,0,(int32_t)c->r[0],0); // 8016D0D8
  if (!crb(c,2)) { goto L_8016D2C8; } // 8016D0DC
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016D0E0
  cmps(c,0,(int32_t)c->r[0],0); // 8016D0E4
  if (!crb(c,2)) { goto L_8016D2C8; } // 8016D0E8
  c->r[30]=0u+0x80440000u; // 8016D0EC
  W32(c->r[13]+0xFFFFAC84u,c->r[3]); // 8016D0F0
  c->r[3]=c->r[30]+0x00004980u; // 8016D0F4
  c->lr=0x8016D0FCu; f_8014E820(c); // 8016D0F8
  c->lr=0x8016D100u; f_801584A4(c); // 8016D0FC
  c->r[5]=0u+0x80000000u; // 8016D100
  c->r[4]=0u+0x10620000u; // 8016D104
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016D108
  c->r[9]=0u+0x80170000u; // 8016D10C
  c->r[6]=c->r[3]|c->r[3]; // 8016D110
  c->r[4]=c->r[4]+0x00004DD3u; // 8016D114
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016D118
  c->r[3]=c->r[30]+0x00004980u; // 8016D11C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016D120
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016D124
  c->r[5]=0u+0x00000000u; // 8016D128
  c->r[7]=0u+0x00000000u; // 8016D12C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016D130
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016D134
  c->lr=0x8016D13Cu; f_8014EAF0(c); // 8016D138
  goto L_8016D2C8; // 8016D13C
L_8016D140:;
  c->r[0]=c->r[28]+0xFE000000u; // 8016D140
  cmpu(c,0,c->r[0],0x00000000u); // 8016D144
  if (!crb(c,2)) { goto L_8016D160; } // 8016D148
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016D14C
  c->r[0]=0u+0x00000003u; // 8016D150
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016D154
  c->lr=0x8016D15Cu; f_8016E774(c); // 8016D158
  goto L_8016D2C8; // 8016D15C
L_8016D160:;
  c->r[0]=c->r[28]+0xFD000000u; // 8016D160
  cmpu(c,0,c->r[0],0x00000000u); // 8016D164
  if (!crb(c,2)) { goto L_8016D1EC; } // 8016D168
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016D16C
  c->r[0]=0u+0x00000004u; // 8016D170
  c->r[3]=0u+0x00000001u; // 8016D174
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016D178
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016D17C
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 8016D180
  cmps(c,0,(int32_t)c->r[0],0); // 8016D184
  if (!crb(c,2)) { goto L_8016D2C8; } // 8016D188
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016D18C
  cmps(c,0,(int32_t)c->r[0],0); // 8016D190
  if (!crb(c,2)) { goto L_8016D2C8; } // 8016D194
  c->r[30]=0u+0x80440000u; // 8016D198
  W32(c->r[13]+0xFFFFAC84u,c->r[3]); // 8016D19C
  c->r[3]=c->r[30]+0x00004980u; // 8016D1A0
  c->lr=0x8016D1A8u; f_8014E820(c); // 8016D1A4
  c->lr=0x8016D1ACu; f_801584A4(c); // 8016D1A8
  c->r[5]=0u+0x80000000u; // 8016D1AC
  c->r[4]=0u+0x10620000u; // 8016D1B0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016D1B4
  c->r[9]=0u+0x80170000u; // 8016D1B8
  c->r[6]=c->r[3]|c->r[3]; // 8016D1BC
  c->r[4]=c->r[4]+0x00004DD3u; // 8016D1C0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016D1C4
  c->r[3]=c->r[30]+0x00004980u; // 8016D1C8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016D1CC
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016D1D0
  c->r[5]=0u+0x00000000u; // 8016D1D4
  c->r[7]=0u+0x00000000u; // 8016D1D8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016D1DC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016D1E0
  c->lr=0x8016D1E8u; f_8014EAF0(c); // 8016D1E4
  goto L_8016D2C8; // 8016D1E8
L_8016D1EC:;
  cmps(c,0,(int32_t)c->r[28],0); // 8016D1EC
  if (!crb(c,2)) { goto L_8016D2B4; } // 8016D1F0
  c->r[0]=c->r[29]+0xFFFB0000u; // 8016D1F4
  cmpu(c,0,c->r[0],0x00003000u); // 8016D1F8
  if (!crb(c,2)) { goto L_8016D29C; } // 8016D1FC
  c->lr=0x8016D204u; f_80154410(c); // 8016D200
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D204
  c->r[31]=c->r[3]|c->r[3]; // 8016D208
  cmpu(c,0,c->r[0],0x00000005u); // 8016D20C
  if (crb(c,0)) { goto L_8016D21C; } // 8016D210
  c->r[0]=0u+0x00000000u; // 8016D214
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D218
L_8016D21C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D21C
  c->r[30]=0u+0x80440000u; // 8016D220
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016D224
  c->r[30]=c->r[30]+0x00004C40u; // 8016D228
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D22C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D230
  c->r[6]=0u+0x00000010u; // 8016D234
  c->r[4]=0u+0x00000000u; // 8016D238
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016D23C
  c->r[5]=c->r[30]+c->r[5]; // 8016D240
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016D244
  c->r[3]=c->r[30]+c->r[3]; // 8016D248
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D24C
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016D250
  c->r[3]=c->r[30]+c->r[0]; // 8016D254
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016D258
  c->lr=0x8016D260u; f_801584A4(c); // 8016D25C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D260
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016D264
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D268
  c->r[0]=c->r[4]+0x00000001u; // 8016D26C
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D270
  c->r[4]=c->r[30]+c->r[5]; // 8016D274
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016D278
  c->r[3]=c->r[31]|c->r[31]; // 8016D27C
  c->lr=0x8016D284u; f_80154438(c); // 8016D280
  c->r[5]=0u+0x80170000u; // 8016D284
  c->r[3]=0u+0x00000000u; // 8016D288
  c->r[5]=c->r[5]+0xFFFFE418u; // 8016D28C
  c->r[4]=0u+0x00000000u; // 8016D290
  c->lr=0x8016D298u; f_801732E8(c); // 8016D294
  goto L_8016D2C8; // 8016D298
L_8016D29C:;
  c->r[3]=0u+0x01230000u; // 8016D29C
  c->r[4]=0u+0x80170000u; // 8016D2A0
  c->r[3]=c->r[3]+0x00004567u; // 8016D2A4
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016D2A8
  c->lr=0x8016D2B0u; f_80171B88(c); // 8016D2AC
  goto L_8016D2C8; // 8016D2B0
L_8016D2B4:;
  c->r[3]=0u+0x01230000u; // 8016D2B4
  c->r[4]=0u+0x80170000u; // 8016D2B8
  c->r[3]=c->r[3]+0x00004567u; // 8016D2BC
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016D2C0
  c->lr=0x8016D2C8u; f_80171B88(c); // 8016D2C4
L_8016D2C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016D2C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016D2CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016D2D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016D2D4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016D2D8
  c->lr=c->r[0]; // 8016D2DC
  c->r[1]=c->r[1]+0x00000020u; // 8016D2E0
  return; // 8016D2E4
}

// dvd_cbForUnrecoveredError
void f_8016D2E8(Ctx* __restrict c) {
  trace_call(0x8016D2E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D2E8
  c->r[0]=c->lr; // 8016D2EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D2F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016D2F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016D2F8
  c->r[30]=c->r[3]|c->r[3]; // 8016D2FC
  c->lr=0x8016D304u; f_80154410(c); // 8016D300
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D304
  cmps(c,0,(int32_t)c->r[0],0); // 8016D308
  if (!crb(c,2)) { goto L_8016D320; } // 8016D30C
  c->r[4]=0u+0x80440000u; // 8016D310
  c->r[4]=c->r[4]+0x00004C40u; // 8016D314
  W32(c->r[4]+0x00000078u,c->r[30]); // 8016D318
  goto L_8016D338; // 8016D31C
L_8016D320:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D320
  c->r[4]=0u+0x80440000u; // 8016D324
  c->r[4]=c->r[4]+0x00004C40u; // 8016D328
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D32C
  c->r[4]=c->r[4]+c->r[0]; // 8016D330
  W32(c->r[4]+0x00000014u,c->r[30]); // 8016D334
L_8016D338:;
  c->lr=0x8016D33Cu; f_80154438(c); // 8016D338
  cmpu(c,0,c->r[30],0x00000010u); // 8016D33C
  if (!crb(c,2)) { goto L_8016D35C; } // 8016D340
  c->r[3]=0u+0x01230000u; // 8016D344
  c->r[4]=0u+0x80170000u; // 8016D348
  c->r[3]=c->r[3]+0x00004568u; // 8016D34C
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016D350
  c->lr=0x8016D358u; f_80171B88(c); // 8016D354
  goto L_8016D4B0; // 8016D358
L_8016D35C:;
  cmpu(c,0,c->r[30],0x00000020u); // 8016D35C
  if (!crb(c,2)) { goto L_8016D37C; } // 8016D360
  c->r[3]=0u+0x01230000u; // 8016D364
  c->r[4]=0u+0x80170000u; // 8016D368
  c->r[3]=c->r[3]+0x00004569u; // 8016D36C
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016D370
  c->lr=0x8016D378u; f_80171B88(c); // 8016D374
  goto L_8016D4B0; // 8016D378
L_8016D37C:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 8016D37C
  if (crb(c,2)) { goto L_8016D420; } // 8016D380
  c->lr=0x8016D388u; f_80154410(c); // 8016D384
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D388
  c->r[31]=c->r[3]|c->r[3]; // 8016D38C
  cmpu(c,0,c->r[0],0x00000005u); // 8016D390
  if (crb(c,0)) { goto L_8016D3A0; } // 8016D394
  c->r[0]=0u+0x00000000u; // 8016D398
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D39C
L_8016D3A0:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D3A0
  c->r[30]=0u+0x80440000u; // 8016D3A4
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016D3A8
  c->r[30]=c->r[30]+0x00004C40u; // 8016D3AC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D3B0
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D3B4
  c->r[6]=0u+0x00000010u; // 8016D3B8
  c->r[4]=0u+0x00000000u; // 8016D3BC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016D3C0
  c->r[5]=c->r[30]+c->r[5]; // 8016D3C4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016D3C8
  c->r[3]=c->r[30]+c->r[3]; // 8016D3CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D3D0
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016D3D4
  c->r[3]=c->r[30]+c->r[0]; // 8016D3D8
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016D3DC
  c->lr=0x8016D3E4u; f_801584A4(c); // 8016D3E0
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D3E4
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016D3E8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D3EC
  c->r[0]=c->r[4]+0x00000001u; // 8016D3F0
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D3F4
  c->r[4]=c->r[30]+c->r[5]; // 8016D3F8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016D3FC
  c->r[3]=c->r[31]|c->r[31]; // 8016D400
  c->lr=0x8016D408u; f_80154438(c); // 8016D404
  c->r[5]=0u+0x80170000u; // 8016D408
  c->r[3]=0u+0x00000000u; // 8016D40C
  c->r[5]=c->r[5]+0xFFFFD59Cu; // 8016D410
  c->r[4]=0u+0x00000000u; // 8016D414
  c->lr=0x8016D41Cu; f_801732E8(c); // 8016D418
  goto L_8016D4B0; // 8016D41C
L_8016D420:;
  c->lr=0x8016D424u; f_80154410(c); // 8016D420
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D424
  c->r[31]=c->r[3]|c->r[3]; // 8016D428
  cmpu(c,0,c->r[0],0x00000005u); // 8016D42C
  if (crb(c,0)) { goto L_8016D43C; } // 8016D430
  c->r[0]=0u+0x00000000u; // 8016D434
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D438
L_8016D43C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D43C
  c->r[30]=0u+0x80440000u; // 8016D440
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016D444
  c->r[30]=c->r[30]+0x00004C40u; // 8016D448
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D44C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D450
  c->r[6]=0u+0x00000027u; // 8016D454
  c->r[4]=0u+0x00000000u; // 8016D458
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016D45C
  c->r[5]=c->r[30]+c->r[5]; // 8016D460
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016D464
  c->r[3]=c->r[30]+c->r[3]; // 8016D468
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D46C
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016D470
  c->r[3]=c->r[30]+c->r[0]; // 8016D474
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016D478
  c->lr=0x8016D480u; f_801584A4(c); // 8016D47C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D480
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016D484
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D488
  c->r[0]=c->r[4]+0x00000001u; // 8016D48C
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D490
  c->r[4]=c->r[30]+c->r[5]; // 8016D494
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016D498
  c->r[3]=c->r[31]|c->r[31]; // 8016D49C
  c->lr=0x8016D4A4u; f_80154438(c); // 8016D4A0
  c->r[3]=0u+0x80170000u; // 8016D4A4
  c->r[3]=c->r[3]+0xFFFFD4C8u; // 8016D4A8
  c->lr=0x8016D4B0u; f_801735E4(c); // 8016D4AC
L_8016D4B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D4B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D4B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016D4B8
  c->lr=c->r[0]; // 8016D4BC
  c->r[1]=c->r[1]+0x00000010u; // 8016D4C0
  return; // 8016D4C4
}

// dvd_cbForUnrecoveredErrorRetry
void f_8016D4C8(Ctx* __restrict c) {
  trace_call(0x8016D4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D4C8
  c->r[0]=c->lr; // 8016D4CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D4D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016D4D4
  c->r[31]=c->r[3]|c->r[3]; // 8016D4D8
  c->lr=0x8016D4E0u; f_80154410(c); // 8016D4DC
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D4E0
  cmps(c,0,(int32_t)c->r[0],0); // 8016D4E4
  if (!crb(c,2)) { goto L_8016D4FC; } // 8016D4E8
  c->r[4]=0u+0x80440000u; // 8016D4EC
  c->r[4]=c->r[4]+0x00004C40u; // 8016D4F0
  W32(c->r[4]+0x00000078u,c->r[31]); // 8016D4F4
  goto L_8016D514; // 8016D4F8
L_8016D4FC:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D4FC
  c->r[4]=0u+0x80440000u; // 8016D500
  c->r[4]=c->r[4]+0x00004C40u; // 8016D504
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D508
  c->r[4]=c->r[4]+c->r[0]; // 8016D50C
  W32(c->r[4]+0x00000014u,c->r[31]); // 8016D510
L_8016D514:;
  c->lr=0x8016D518u; f_80154438(c); // 8016D514
  cmpu(c,0,c->r[31],0x00000010u); // 8016D518
  if (!crb(c,2)) { goto L_8016D538; } // 8016D51C
  c->r[3]=0u+0x01230000u; // 8016D520
  c->r[4]=0u+0x80170000u; // 8016D524
  c->r[3]=c->r[3]+0x00004568u; // 8016D528
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016D52C
  c->lr=0x8016D534u; f_80171B88(c); // 8016D530
  goto L_8016D588; // 8016D534
L_8016D538:;
  cmpu(c,0,c->r[31],0x00000020u); // 8016D538
  if (!crb(c,2)) { goto L_8016D558; } // 8016D53C
  c->r[3]=0u+0x01230000u; // 8016D540
  c->r[4]=0u+0x80170000u; // 8016D544
  c->r[3]=c->r[3]+0x00004569u; // 8016D548
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016D54C
  c->lr=0x8016D554u; f_80171B88(c); // 8016D550
  goto L_8016D588; // 8016D554
L_8016D558:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8016D558
  if (crb(c,2)) { goto L_8016D578; } // 8016D55C
  c->r[3]=0u+0x01230000u; // 8016D560
  c->r[4]=0u+0x80170000u; // 8016D564
  c->r[3]=c->r[3]+0x00004567u; // 8016D568
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016D56C
  c->lr=0x8016D574u; f_80171B88(c); // 8016D570
  goto L_8016D588; // 8016D574
L_8016D578:;
  c->lr=0x8016D57Cu; f_80174394(c); // 8016D578
  c->r[4]=0u+0x80170000u; // 8016D57C
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016D580
  c->lr=0x8016D588u; f_80171B88(c); // 8016D584
L_8016D588:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D588
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D58C
  c->lr=c->r[0]; // 8016D590
  c->r[1]=c->r[1]+0x00000010u; // 8016D594
  return; // 8016D598
}

// dvd_cbForStateGoToRetry
void f_8016D59C(Ctx* __restrict c) {
  trace_call(0x8016D59Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D59C
  c->r[0]=c->lr; // 8016D5A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D5A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016D5A8
  c->r[31]=c->r[3]|c->r[3]; // 8016D5AC
  c->lr=0x8016D5B4u; f_80154410(c); // 8016D5B0
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D5B4
  cmps(c,0,(int32_t)c->r[0],0); // 8016D5B8
  if (!crb(c,2)) { goto L_8016D5D0; } // 8016D5BC
  c->r[4]=0u+0x80440000u; // 8016D5C0
  c->r[4]=c->r[4]+0x00004C40u; // 8016D5C4
  W32(c->r[4]+0x00000078u,c->r[31]); // 8016D5C8
  goto L_8016D5E8; // 8016D5CC
L_8016D5D0:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D5D0
  c->r[4]=0u+0x80440000u; // 8016D5D4
  c->r[4]=c->r[4]+0x00004C40u; // 8016D5D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D5DC
  c->r[4]=c->r[4]+c->r[0]; // 8016D5E0
  W32(c->r[4]+0x00000014u,c->r[31]); // 8016D5E4
L_8016D5E8:;
  c->lr=0x8016D5ECu; f_80154438(c); // 8016D5E8
  cmpu(c,0,c->r[31],0x00000010u); // 8016D5EC
  if (!crb(c,2)) { goto L_8016D60C; } // 8016D5F0
  c->r[3]=0u+0x01230000u; // 8016D5F4
  c->r[4]=0u+0x80170000u; // 8016D5F8
  c->r[3]=c->r[3]+0x00004568u; // 8016D5FC
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016D600
  c->lr=0x8016D608u; f_80171B88(c); // 8016D604
  goto L_8016D7C8; // 8016D608
L_8016D60C:;
  cmpu(c,0,c->r[31],0x00000020u); // 8016D60C
  if (!crb(c,2)) { goto L_8016D62C; } // 8016D610
  c->r[3]=0u+0x01230000u; // 8016D614
  c->r[4]=0u+0x80170000u; // 8016D618
  c->r[3]=c->r[3]+0x00004569u; // 8016D61C
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016D620
  c->lr=0x8016D628u; f_80171B88(c); // 8016D624
  goto L_8016D7C8; // 8016D628
L_8016D62C:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8016D62C
  if (crb(c,2)) { goto L_8016D64C; } // 8016D630
  c->r[3]=0u+0x01230000u; // 8016D634
  c->r[4]=0u+0x80170000u; // 8016D638
  c->r[3]=c->r[3]+0x00004567u; // 8016D63C
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016D640
  c->lr=0x8016D648u; f_80171B88(c); // 8016D644
  goto L_8016D7C8; // 8016D648
L_8016D64C:;
  c->r[0]=0u+0x00000000u; // 8016D64C
  W32(c->r[13]+0xFFFFAC78u,c->r[0]); // 8016D650
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D654
  cmpu(c,0,c->r[0],0x00000004u); // 8016D658
  if (crb(c,2)) { goto L_8016D6C0; } // 8016D65C
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D660
  cmpu(c,0,c->r[0],0x00000005u); // 8016D664
  if (crb(c,2)) { goto L_8016D6C0; } // 8016D668
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D66C
  cmpu(c,0,c->r[0],0x0000000Du); // 8016D670
  if (crb(c,2)) { goto L_8016D6C0; } // 8016D674
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D678
  cmpu(c,0,c->r[0],0x00000021u); // 8016D67C
  if (crb(c,2)) { goto L_8016D6C0; } // 8016D680
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D684
  cmpu(c,0,c->r[0],0x00000022u); // 8016D688
  if (crb(c,2)) { goto L_8016D6C0; } // 8016D68C
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D690
  cmpu(c,0,c->r[0],0x00000029u); // 8016D694
  if (crb(c,2)) { goto L_8016D6C0; } // 8016D698
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D69C
  cmpu(c,0,c->r[0],0x0000002Au); // 8016D6A0
  if (crb(c,2)) { goto L_8016D6C0; } // 8016D6A4
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D6A8
  cmpu(c,0,c->r[0],0x0000000Fu); // 8016D6AC
  if (crb(c,2)) { goto L_8016D6C0; } // 8016D6B0
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D6B4
  cmpu(c,0,c->r[0],0x00000025u); // 8016D6B8
  if (!crb(c,2)) { goto L_8016D6C8; } // 8016D6BC
L_8016D6C0:;
  c->r[0]=0u+0x00000001u; // 8016D6C0
  W32(c->r[13]+0xFFFFACD4u,c->r[0]); // 8016D6C4
L_8016D6C8:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016D6C8
  cmps(c,0,(int32_t)c->r[0],0); // 8016D6CC
  if (crb(c,2)) { goto L_8016D740; } // 8016D6D0
  c->r[3]=0u+0x80440000u; // 8016D6D4
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016D6D8
  c->r[3]=c->r[3]+0x00004920u; // 8016D6DC
  c->r[0]=0u+0x00000002u; // 8016D6E0
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016D6E4
  c->r[4]=0u+0x00000000u; // 8016D6E8
  c->r[0]=0u+0x0000000Au; // 8016D6EC
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016D6F0
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016D6F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016D6F8
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016D6FC
  cmps(c,0,(int32_t)c->r[12],0); // 8016D700
  if (crb(c,2)) { goto L_8016D718; } // 8016D704
  c->r[4]=c->r[31]|c->r[31]; // 8016D708
  c->r[3]=0u+0xFFFFFFFDu; // 8016D70C
  c->ctr=c->r[12]; // 8016D710
  if (true) { c->lr=0x8016D718u; dispatch(c,c->ctr); } // 8016D714
L_8016D718:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016D718
  cmps(c,0,(int32_t)c->r[12],0); // 8016D71C
  if (crb(c,2)) { goto L_8016D734; } // 8016D720
  c->r[4]=c->r[31]|c->r[31]; // 8016D724
  c->r[3]=0u+0x00000000u; // 8016D728
  c->ctr=c->r[12]; // 8016D72C
  if (true) { c->lr=0x8016D734u; dispatch(c,c->ctr); } // 8016D730
L_8016D734:;
  c->lr=0x8016D738u; f_8016F270(c); // 8016D734
  c->r[0]=0u+0x00000001u; // 8016D738
  goto L_8016D744; // 8016D73C
L_8016D740:;
  c->r[0]=0u+0x00000000u; // 8016D740
L_8016D744:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016D744
  if (!crb(c,2)) { goto L_8016D7C8; } // 8016D748
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016D74C
  c->r[0]=0u+0x0000000Bu; // 8016D750
  c->r[3]=0u+0x00000001u; // 8016D754
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016D758
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016D75C
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 8016D760
  cmps(c,0,(int32_t)c->r[0],0); // 8016D764
  if (!crb(c,2)) { goto L_8016D7C8; } // 8016D768
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016D76C
  cmps(c,0,(int32_t)c->r[0],0); // 8016D770
  if (!crb(c,2)) { goto L_8016D7C8; } // 8016D774
  c->r[31]=0u+0x80440000u; // 8016D778
  W32(c->r[13]+0xFFFFAC84u,c->r[3]); // 8016D77C
  c->r[3]=c->r[31]+0x00004980u; // 8016D780
  c->lr=0x8016D788u; f_8014E820(c); // 8016D784
  c->lr=0x8016D78Cu; f_801584A4(c); // 8016D788
  c->r[5]=0u+0x80000000u; // 8016D78C
  c->r[4]=0u+0x10620000u; // 8016D790
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016D794
  c->r[9]=0u+0x80170000u; // 8016D798
  c->r[6]=c->r[3]|c->r[3]; // 8016D79C
  c->r[4]=c->r[4]+0x00004DD3u; // 8016D7A0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016D7A4
  c->r[3]=c->r[31]+0x00004980u; // 8016D7A8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016D7AC
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016D7B0
  c->r[5]=0u+0x00000000u; // 8016D7B4
  c->r[7]=0u+0x00000000u; // 8016D7B8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016D7BC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016D7C0
  c->lr=0x8016D7C8u; f_8014EAF0(c); // 8016D7C4
L_8016D7C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D7C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D7CC
  c->lr=c->r[0]; // 8016D7D0
  c->r[1]=c->r[1]+0x00000010u; // 8016D7D4
  return; // 8016D7D8
}

// dvd_stateCheckID
void f_8016D7DC(Ctx* __restrict c) {
  trace_call(0x8016D7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D7DC
  c->r[0]=c->lr; // 8016D7E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D7E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016D7E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016D7EC
  c->r[30]=0u+0x80440000u; // 8016D7F0
  c->r[30]=c->r[30]+0xFFFFFE00u; // 8016D7F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016D7F8
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016D7FC
  cmps(c,0,(int32_t)c->r[0],3); // 8016D800
  if (crb(c,2)) { goto L_8016D80C; } // 8016D804
  goto L_8016D998; // 8016D808
L_8016D80C:;
  c->r[31]=0u+0x00000000u; // 8016D80C
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016D810
  W32(c->r[13]+0xFFFFAC90u,c->r[31]); // 8016D814
  c->r[3]=c->r[30]+0x00004BC0u; // 8016D818
  c->r[4]=R32(c->r[4]+0x00000024u); // 8016D81C
  c->lr=0x8016D824u; f_80171BF0(c); // 8016D820
  cmps(c,0,(int32_t)c->r[3],0); // 8016D824
  if (crb(c,2)) { goto L_8016D900; } // 8016D828
  c->r[3]=R32(c->r[13]+0xFFFFACECu); // 8016D82C
  c->r[4]=c->r[30]+0x00004BC0u; // 8016D830
  c->r[5]=0u+0x00000020u; // 8016D834
  c->lr=0x8016D83Cu; f_80004338(c); // 8016D838
  c->r[5]=R32(c->r[13]+0xFFFFACF0u); // 8016D83C
  c->r[0]=0u+0x00000001u; // 8016D840
  c->r[3]=c->r[30]+0x00004B00u; // 8016D844
  c->r[4]=0u+0x00000020u; // 8016D848
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8016D84C
  c->lr=0x8016D854u; f_8014F810(c); // 8016D850
  W32(c->r[13]+0xFFFFAC78u,c->r[31]); // 8016D854
  c->r[3]=0u+0x00000000u; // 8016D858
  c->lr=0x8016D860u; f_801743B0(c); // 8016D85C
  c->lr=0x8016D864u; f_80154410(c); // 8016D860
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D864
  c->r[29]=c->r[3]|c->r[3]; // 8016D868
  cmpu(c,0,c->r[0],0x00000005u); // 8016D86C
  if (crb(c,0)) { goto L_8016D878; } // 8016D870
  W32(c->r[13]+0xFFFFAC60u,c->r[31]); // 8016D874
L_8016D878:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D878
  c->r[31]=0u+0x80440000u; // 8016D87C
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016D880
  c->r[31]=c->r[31]+0x00004C40u; // 8016D884
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D888
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D88C
  c->r[7]=0u+0x00000021u; // 8016D890
  c->r[5]=0u+0x00010000u; // 8016D894
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016D898
  c->r[4]=0u+0x00000020u; // 8016D89C
  c->r[6]=c->r[31]+c->r[6]; // 8016D8A0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 8016D8A4
  c->r[3]=c->r[31]+c->r[3]; // 8016D8A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D8AC
  W32(c->r[3]+0x00000020u,c->r[5]); // 8016D8B0
  c->r[3]=c->r[31]+c->r[0]; // 8016D8B4
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016D8B8
  c->lr=0x8016D8C0u; f_801584A4(c); // 8016D8BC
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D8C0
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016D8C4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D8C8
  c->r[0]=c->r[4]+0x00000001u; // 8016D8CC
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D8D0
  c->r[4]=c->r[31]+c->r[5]; // 8016D8D4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016D8D8
  c->r[3]=c->r[29]|c->r[29]; // 8016D8DC
  c->lr=0x8016D8E4u; f_80154438(c); // 8016D8E0
  c->r[6]=0u+0x80170000u; // 8016D8E4
  c->r[3]=c->r[30]+0x00004BE0u; // 8016D8E8
  c->r[6]=c->r[6]+0xFFFFDB14u; // 8016D8EC
  c->r[4]=0u+0x00000020u; // 8016D8F0
  c->r[5]=0u+0x00010000u; // 8016D8F4
  c->lr=0x8016D8FCu; f_80173154(c); // 8016D8F8
  goto L_8016DAF8; // 8016D8FC
L_8016D900:;
  c->lr=0x8016D904u; f_80154410(c); // 8016D900
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D904
  c->r[29]=c->r[3]|c->r[3]; // 8016D908
  cmpu(c,0,c->r[0],0x00000005u); // 8016D90C
  if (crb(c,0)) { goto L_8016D918; } // 8016D910
  W32(c->r[13]+0xFFFFAC60u,c->r[31]); // 8016D914
L_8016D918:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D918
  c->r[30]=0u+0x80440000u; // 8016D91C
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016D920
  c->r[30]=c->r[30]+0x00004C40u; // 8016D924
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D928
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D92C
  c->r[6]=0u+0x00000010u; // 8016D930
  c->r[4]=0u+0x00000000u; // 8016D934
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016D938
  c->r[5]=c->r[30]+c->r[5]; // 8016D93C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016D940
  c->r[3]=c->r[30]+c->r[3]; // 8016D944
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D948
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016D94C
  c->r[3]=c->r[30]+c->r[0]; // 8016D950
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016D954
  c->lr=0x8016D95Cu; f_801584A4(c); // 8016D958
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D95C
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016D960
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D964
  c->r[0]=c->r[4]+0x00000001u; // 8016D968
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D96C
  c->r[4]=c->r[30]+c->r[5]; // 8016D970
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016D974
  c->r[3]=c->r[29]|c->r[29]; // 8016D978
  c->lr=0x8016D980u; f_80154438(c); // 8016D97C
  c->r[5]=0u+0x80170000u; // 8016D980
  c->r[3]=0u+0x00000000u; // 8016D984
  c->r[5]=c->r[5]+0xFFFFE418u; // 8016D988
  c->r[4]=0u+0x00000000u; // 8016D98C
  c->lr=0x8016D994u; f_801732E8(c); // 8016D990
  goto L_8016DAF8; // 8016D994
L_8016D998:;
  c->r[4]=R32(c->r[13]+0xFFFFACECu); // 8016D998
  c->r[3]=c->r[30]+0x00004BC0u; // 8016D99C
  c->r[5]=0u+0x00000020u; // 8016D9A0
  c->lr=0x8016D9A8u; f_802583D8(c); // 8016D9A4
  cmps(c,0,(int32_t)c->r[3],0); // 8016D9A8
  if (crb(c,2)) { goto L_8016DA4C; } // 8016D9AC
  c->lr=0x8016D9B4u; f_80154410(c); // 8016D9B0
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D9B4
  c->r[29]=c->r[3]|c->r[3]; // 8016D9B8
  cmpu(c,0,c->r[0],0x00000005u); // 8016D9BC
  if (crb(c,0)) { goto L_8016D9CC; } // 8016D9C0
  c->r[0]=0u+0x00000000u; // 8016D9C4
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016D9C8
L_8016D9CC:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D9CC
  c->r[30]=0u+0x80440000u; // 8016D9D0
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016D9D4
  c->r[30]=c->r[30]+0x00004C40u; // 8016D9D8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D9DC
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016D9E0
  c->r[6]=0u+0x00000010u; // 8016D9E4
  c->r[4]=0u+0x00000000u; // 8016D9E8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016D9EC
  c->r[5]=c->r[30]+c->r[5]; // 8016D9F0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016D9F4
  c->r[3]=c->r[30]+c->r[3]; // 8016D9F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016D9FC
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016DA00
  c->r[3]=c->r[30]+c->r[0]; // 8016DA04
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016DA08
  c->lr=0x8016DA10u; f_801584A4(c); // 8016DA0C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DA10
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016DA14
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DA18
  c->r[0]=c->r[4]+0x00000001u; // 8016DA1C
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016DA20
  c->r[4]=c->r[30]+c->r[5]; // 8016DA24
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016DA28
  c->r[3]=c->r[29]|c->r[29]; // 8016DA2C
  c->lr=0x8016DA34u; f_80154438(c); // 8016DA30
  c->r[5]=0u+0x80170000u; // 8016DA34
  c->r[3]=0u+0x00000000u; // 8016DA38
  c->r[5]=c->r[5]+0xFFFFE418u; // 8016DA3C
  c->r[4]=0u+0x00000000u; // 8016DA40
  c->lr=0x8016DA48u; f_801732E8(c); // 8016DA44
  goto L_8016DAF8; // 8016DA48
L_8016DA4C:;
  c->r[31]=0u+0x00000000u; // 8016DA4C
  c->r[3]=0u+0x00000000u; // 8016DA50
  W32(c->r[13]+0xFFFFAC78u,c->r[31]); // 8016DA54
  c->lr=0x8016DA5Cu; f_801743B0(c); // 8016DA58
  c->lr=0x8016DA60u; f_80154410(c); // 8016DA5C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DA60
  c->r[29]=c->r[3]|c->r[3]; // 8016DA64
  cmpu(c,0,c->r[0],0x00000005u); // 8016DA68
  if (crb(c,0)) { goto L_8016DA74; } // 8016DA6C
  W32(c->r[13]+0xFFFFAC60u,c->r[31]); // 8016DA70
L_8016DA74:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DA74
  c->r[31]=0u+0x80440000u; // 8016DA78
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016DA7C
  c->r[31]=c->r[31]+0x00004C40u; // 8016DA80
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DA84
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DA88
  c->r[7]=0u+0x00000021u; // 8016DA8C
  c->r[5]=0u+0x00010000u; // 8016DA90
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016DA94
  c->r[4]=0u+0x00000020u; // 8016DA98
  c->r[6]=c->r[31]+c->r[6]; // 8016DA9C
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 8016DAA0
  c->r[3]=c->r[31]+c->r[3]; // 8016DAA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DAA8
  W32(c->r[3]+0x00000020u,c->r[5]); // 8016DAAC
  c->r[3]=c->r[31]+c->r[0]; // 8016DAB0
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016DAB4
  c->lr=0x8016DABCu; f_801584A4(c); // 8016DAB8
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DABC
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016DAC0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DAC4
  c->r[0]=c->r[4]+0x00000001u; // 8016DAC8
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016DACC
  c->r[4]=c->r[31]+c->r[5]; // 8016DAD0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016DAD4
  c->r[3]=c->r[29]|c->r[29]; // 8016DAD8
  c->lr=0x8016DAE0u; f_80154438(c); // 8016DADC
  c->r[6]=0u+0x80170000u; // 8016DAE0
  c->r[3]=c->r[30]+0x00004BE0u; // 8016DAE4
  c->r[6]=c->r[6]+0xFFFFDB14u; // 8016DAE8
  c->r[4]=0u+0x00000020u; // 8016DAEC
  c->r[5]=0u+0x00010000u; // 8016DAF0
  c->lr=0x8016DAF8u; f_80173154(c); // 8016DAF4
L_8016DAF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016DAF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016DAFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016DB00
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016DB04
  c->lr=c->r[0]; // 8016DB08
  c->r[1]=c->r[1]+0x00000020u; // 8016DB0C
  return; // 8016DB10
}

// dvd_cbForStateReadingTOC
void f_8016DB14(Ctx* __restrict c) {
  trace_call(0x8016DB14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DB14
  c->r[0]=c->lr; // 8016DB18
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016DB1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016DB20
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016DB24
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016DB28
  c->r[29]=c->r[3]|c->r[3]; // 8016DB2C
  c->lr=0x8016DB34u; f_80154410(c); // 8016DB30
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DB34
  cmps(c,0,(int32_t)c->r[0],0); // 8016DB38
  if (!crb(c,2)) { goto L_8016DB50; } // 8016DB3C
  c->r[4]=0u+0x80440000u; // 8016DB40
  c->r[4]=c->r[4]+0x00004C40u; // 8016DB44
  W32(c->r[4]+0x00000078u,c->r[29]); // 8016DB48
  goto L_8016DB6C; // 8016DB4C
L_8016DB50:;
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016DB50
  c->r[5]=0u+0x80440000u; // 8016DB54
  c->r[5]=c->r[5]+0x00004C40u; // 8016DB58
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8016DB5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DB60
  c->r[4]=c->r[5]+c->r[0]; // 8016DB64
  W32(c->r[4]+0x00000028u,c->r[29]); // 8016DB68
L_8016DB6C:;
  c->lr=0x8016DB70u; f_80154438(c); // 8016DB6C
  cmpu(c,0,c->r[29],0x00000010u); // 8016DB70
  if (!crb(c,2)) { goto L_8016DB90; } // 8016DB74
  c->r[3]=0u+0x01230000u; // 8016DB78
  c->r[4]=0u+0x80170000u; // 8016DB7C
  c->r[3]=c->r[3]+0x00004568u; // 8016DB80
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016DB84
  c->lr=0x8016DB8Cu; f_80171B88(c); // 8016DB88
  goto L_8016DC98; // 8016DB8C
L_8016DB90:;
  cmpu(c,0,c->r[29],0x00000020u); // 8016DB90
  if (!crb(c,2)) { goto L_8016DBB0; } // 8016DB94
  c->r[3]=0u+0x01230000u; // 8016DB98
  c->r[4]=0u+0x80170000u; // 8016DB9C
  c->r[3]=c->r[3]+0x00004569u; // 8016DBA0
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016DBA4
  c->lr=0x8016DBACu; f_80171B88(c); // 8016DBA8
  goto L_8016DC98; // 8016DBAC
L_8016DBB0:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 8016DBB0
  if (crb(c,2)) { goto L_8016DC7C; } // 8016DBB4
  c->r[4]=0u+0x80440000u; // 8016DBB8
  c->r[29]=0u+0x00000000u; // 8016DBBC
  c->r[4]=c->r[4]+0x000049E0u; // 8016DBC0
  W32(c->r[13]+0xFFFFAC78u,c->r[29]); // 8016DBC4
  c->r[3]=0u+0x00000000u; // 8016DBC8
  W32(c->r[13]+0xFFFFACB0u,c->r[4]); // 8016DBCC
  c->lr=0x8016DBD4u; f_801743B0(c); // 8016DBD0
  c->lr=0x8016DBD8u; f_80154410(c); // 8016DBD4
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DBD8
  c->r[30]=c->r[3]|c->r[3]; // 8016DBDC
  cmpu(c,0,c->r[0],0x00000005u); // 8016DBE0
  if (crb(c,0)) { goto L_8016DBEC; } // 8016DBE4
  W32(c->r[13]+0xFFFFAC60u,c->r[29]); // 8016DBE8
L_8016DBEC:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DBEC
  c->r[31]=0u+0x80440000u; // 8016DBF0
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016DBF4
  c->r[29]=0u+0x00010000u; // 8016DBF8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DBFC
  c->r[31]=c->r[31]+0x00004C40u; // 8016DC00
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DC04
  c->r[6]=0u+0x00000021u; // 8016DC08
  c->r[5]=c->r[29]+0x00000008u; // 8016DC0C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016DC10
  c->r[4]=c->r[31]+c->r[4]; // 8016DC14
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 8016DC18
  c->r[3]=c->r[31]+c->r[3]; // 8016DC1C
  c->r[4]=0u+0x00000020u; // 8016DC20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DC24
  W32(c->r[3]+0x00000020u,c->r[5]); // 8016DC28
  c->r[3]=c->r[31]+c->r[0]; // 8016DC2C
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016DC30
  c->lr=0x8016DC38u; f_801584A4(c); // 8016DC34
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DC38
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016DC3C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DC40
  c->r[0]=c->r[4]+0x00000001u; // 8016DC44
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016DC48
  c->r[4]=c->r[31]+c->r[5]; // 8016DC4C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016DC50
  c->r[3]=c->r[30]|c->r[30]; // 8016DC54
  c->lr=0x8016DC5Cu; f_80154438(c); // 8016DC58
  c->r[3]=0u+0x80440000u; // 8016DC5C
  c->r[6]=0u+0x80170000u; // 8016DC60
  c->r[5]=c->r[29]+0x00000008u; // 8016DC64
  c->r[4]=0u+0x00000020u; // 8016DC68
  c->r[3]=c->r[3]+0x00004A00u; // 8016DC6C
  c->r[6]=c->r[6]+0xFFFFDCB4u; // 8016DC70
  c->lr=0x8016DC78u; f_80173154(c); // 8016DC74
  goto L_8016DC98; // 8016DC78
L_8016DC7C:;
  c->r[3]=0u+0x00000027u; // 8016DC7C
  c->r[4]=0u+0x00000000u; // 8016DC80
  c->r[5]=0u+0x00000000u; // 8016DC84
  c->lr=0x8016DC8Cu; f_8016C5C0(c); // 8016DC88
  c->r[3]=0u+0x80170000u; // 8016DC8C
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016DC90
  c->lr=0x8016DC98u; f_801735E4(c); // 8016DC94
L_8016DC98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016DC98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016DC9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016DCA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016DCA4
  c->lr=c->r[0]; // 8016DCA8
  c->r[1]=c->r[1]+0x00000020u; // 8016DCAC
  return; // 8016DCB0
}

// dvd_cbForStateReadingPartitionInfo
void f_8016DCB4(Ctx* __restrict c) {
  trace_call(0x8016DCB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DCB4
  c->r[0]=c->lr; // 8016DCB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016DCBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016DCC0
  c->r[31]=0u+0x80440000u; // 8016DCC4
  c->r[31]=c->r[31]+0xFFFFFE00u; // 8016DCC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016DCCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016DCD0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016DCD4
  c->r[28]=c->r[3]|c->r[3]; // 8016DCD8
  c->lr=0x8016DCE0u; f_80154410(c); // 8016DCDC
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DCE0
  cmps(c,0,(int32_t)c->r[0],0); // 8016DCE4
  if (!crb(c,2)) { goto L_8016DCFC; } // 8016DCE8
  c->r[4]=0u+0x80440000u; // 8016DCEC
  c->r[4]=c->r[4]+0x00004C40u; // 8016DCF0
  W32(c->r[4]+0x00000078u,c->r[28]); // 8016DCF4
  goto L_8016DD18; // 8016DCF8
L_8016DCFC:;
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016DCFC
  c->r[5]=0u+0x80440000u; // 8016DD00
  c->r[5]=c->r[5]+0x00004C40u; // 8016DD04
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8016DD08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DD0C
  c->r[4]=c->r[5]+c->r[0]; // 8016DD10
  W32(c->r[4]+0x00000028u,c->r[28]); // 8016DD14
L_8016DD18:;
  c->lr=0x8016DD1Cu; f_80154438(c); // 8016DD18
  cmpu(c,0,c->r[28],0x00000010u); // 8016DD1C
  if (!crb(c,2)) { goto L_8016DD3C; } // 8016DD20
  c->r[3]=0u+0x01230000u; // 8016DD24
  c->r[4]=0u+0x80170000u; // 8016DD28
  c->r[3]=c->r[3]+0x00004568u; // 8016DD2C
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016DD30
  c->lr=0x8016DD38u; f_80171B88(c); // 8016DD34
  goto L_8016E10C; // 8016DD38
L_8016DD3C:;
  cmpu(c,0,c->r[28],0x00000020u); // 8016DD3C
  if (!crb(c,2)) { goto L_8016DD5C; } // 8016DD40
  c->r[3]=0u+0x01230000u; // 8016DD44
  c->r[4]=0u+0x80170000u; // 8016DD48
  c->r[3]=c->r[3]+0x00004569u; // 8016DD4C
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016DD50
  c->lr=0x8016DD58u; f_80171B88(c); // 8016DD54
  goto L_8016E10C; // 8016DD58
L_8016DD5C:;
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 8016DD5C
  if (crb(c,2)) { goto L_8016E0F0; } // 8016DD60
  c->r[0]=0u+0x00000000u; // 8016DD64
  c->r[6]=c->r[31]+0x00004C00u; // 8016DD68
  W32(c->r[13]+0xFFFFAC78u,c->r[0]); // 8016DD6C
  c->r[5]=0u+0x80000000u; // 8016DD70
  W32(c->r[13]+0xFFFFACACu,c->r[6]); // 8016DD74
  W32(c->r[13]+0xFFFFACA8u,c->r[0]); // 8016DD78
  c->r[0]=R32(c->r[5]+0x00003198u); // 8016DD7C
  cmps(c,0,(int32_t)c->r[0],0); // 8016DD80
  if (crb(c,2)) { goto L_8016DDA4; } // 8016DD84
  W32(c->r[13]+0xFFFFACA8u,c->r[6]); // 8016DD88
  c->r[0]=R32(c->r[5]+0x00003194u); // 8016DD8C
  W32(c->r[6]+0x00000004u,c->r[0]); // 8016DD90
  c->r[0]=R32(c->r[5]+0x00003198u); // 8016DD94
  c->r[3]=R32(c->r[13]+0xFFFFACA8u); // 8016DD98
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016DD9C
  goto L_8016DDE0; // 8016DDA0
L_8016DDA4:;
  c->r[3]=R32(c->r[13]+0xFFFFACB0u); // 8016DDA4
  c->r[7]=0u+0x00000000u; // 8016DDA8
  goto L_8016DDD0; // 8016DDAC
L_8016DDB0:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 8016DDB0
  c->r[0]=R32(c->r[5]+0x00003194u); // 8016DDB4
  cmpu(c,0,c->r[4],c->r[0]); // 8016DDB8
  if (!crb(c,2)) { goto L_8016DDC4; } // 8016DDBC
  W32(c->r[13]+0xFFFFACA8u,c->r[6]); // 8016DDC0
L_8016DDC4:;
  c->r[6]=c->r[6]+0x00000008u; // 8016DDC4
  c->r[7]=c->r[7]+0x00000001u; // 8016DDC8
  W32(c->r[13]+0xFFFFACACu,c->r[6]); // 8016DDCC
L_8016DDD0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016DDD0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 8016DDD4
  cmpu(c,0,c->r[4],c->r[0]); // 8016DDD8
  if (crb(c,0)) { IRQCHK(c); goto L_8016DDB0; } // 8016DDDC
L_8016DDE0:;
  c->r[0]=R32(c->r[13]+0xFFFFACA8u); // 8016DDE0
  cmps(c,0,(int32_t)c->r[0],0); // 8016DDE4
  if (crb(c,2)) { goto L_8016DFF4; } // 8016DDE8
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016DDEC
  cmps(c,0,(int32_t)c->r[0],3); // 8016DDF0
  if (crb(c,2)) { goto L_8016DDFC; } // 8016DDF4
  goto L_8016DEF8; // 8016DDF8
L_8016DDFC:;
  c->r[29]=0u+0x00000000u; // 8016DDFC
  c->r[3]=0u+0x00000000u; // 8016DE00
  W32(c->r[13]+0xFFFFAC78u,c->r[29]); // 8016DE04
  c->lr=0x8016DE0Cu; f_801743B0(c); // 8016DE08
  c->r[3]=R32(c->r[13]+0xFFFFACA8u); // 8016DE0C
  c->r[28]=R32(c->r[3]+0x00000000u); // 8016DE10
  c->lr=0x8016DE18u; f_80154410(c); // 8016DE14
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DE18
  c->r[30]=c->r[3]|c->r[3]; // 8016DE1C
  cmpu(c,0,c->r[0],0x00000005u); // 8016DE20
  if (crb(c,0)) { goto L_8016DE2C; } // 8016DE24
  W32(c->r[13]+0xFFFFAC60u,c->r[29]); // 8016DE28
L_8016DE2C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DE2C
  c->r[29]=0u+0x80440000u; // 8016DE30
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016DE34
  c->r[29]=c->r[29]+0x00004C40u; // 8016DE38
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DE3C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DE40
  c->r[6]=0u+0x00000022u; // 8016DE44
  c->r[4]=0u+0x00000000u; // 8016DE48
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016DE4C
  c->r[5]=c->r[29]+c->r[5]; // 8016DE50
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016DE54
  c->r[3]=c->r[29]+c->r[3]; // 8016DE58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DE5C
  W32(c->r[3]+0x00000020u,c->r[28]); // 8016DE60
  c->r[3]=c->r[29]+c->r[0]; // 8016DE64
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016DE68
  c->lr=0x8016DE70u; f_801584A4(c); // 8016DE6C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DE70
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016DE74
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DE78
  c->r[0]=c->r[4]+0x00000001u; // 8016DE7C
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016DE80
  c->r[4]=c->r[29]+c->r[5]; // 8016DE84
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016DE88
  c->r[3]=c->r[30]|c->r[30]; // 8016DE8C
  c->lr=0x8016DE94u; f_80154438(c); // 8016DE90
  c->r[3]=0u+0x80000000u; // 8016DE94
  c->r[0]=R8(c->r[3]+0x00003187u); // 8016DE98
  cmpu(c,0,c->r[0],0x00000080u); // 8016DE9C
  if (!crb(c,2)) { goto L_8016DED0; } // 8016DEA0
  c->r[3]=R32(c->r[13]+0xFFFFACA8u); // 8016DEA4
  c->r[9]=0u+0x80170000u; // 8016DEA8
  c->r[5]=R32(c->r[13]+0xFFFFACC0u); // 8016DEAC
  c->r[4]=c->r[31]+0x00000000u; // 8016DEB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8016DEB4
  c->r[6]=c->r[31]+0x00000100u; // 8016DEB8
  c->r[9]=c->r[9]+0xFFFFE12Cu; // 8016DEBC
  c->r[7]=0u+0x00000000u; // 8016DEC0
  c->r[8]=0u+0x00000000u; // 8016DEC4
  c->lr=0x8016DECCu; f_801728E8(c); // 8016DEC8
  goto L_8016E10C; // 8016DECC
L_8016DED0:;
  c->r[3]=R32(c->r[13]+0xFFFFACA8u); // 8016DED0
  c->r[8]=0u+0x80170000u; // 8016DED4
  c->r[7]=c->r[31]+0x00000100u; // 8016DED8
  c->r[4]=0u+0x00000000u; // 8016DEDC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8016DEE0
  c->r[8]=c->r[8]+0xFFFFE12Cu; // 8016DEE4
  c->r[5]=0u+0x00000000u; // 8016DEE8
  c->r[6]=0u+0x00000000u; // 8016DEEC
  c->lr=0x8016DEF4u; f_80172680(c); // 8016DEF0
  goto L_8016E10C; // 8016DEF4
L_8016DEF8:;
  c->r[29]=0u+0x00000000u; // 8016DEF8
  c->r[3]=0u+0x00000000u; // 8016DEFC
  W32(c->r[13]+0xFFFFAC78u,c->r[29]); // 8016DF00
  c->lr=0x8016DF08u; f_801743B0(c); // 8016DF04
  c->r[3]=R32(c->r[13]+0xFFFFACA8u); // 8016DF08
  c->r[28]=R32(c->r[3]+0x00000000u); // 8016DF0C
  c->lr=0x8016DF14u; f_80154410(c); // 8016DF10
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DF14
  c->r[30]=c->r[3]|c->r[3]; // 8016DF18
  cmpu(c,0,c->r[0],0x00000005u); // 8016DF1C
  if (crb(c,0)) { goto L_8016DF28; } // 8016DF20
  W32(c->r[13]+0xFFFFAC60u,c->r[29]); // 8016DF24
L_8016DF28:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DF28
  c->r[29]=0u+0x80440000u; // 8016DF2C
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016DF30
  c->r[29]=c->r[29]+0x00004C40u; // 8016DF34
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DF38
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DF3C
  c->r[6]=0u+0x00000022u; // 8016DF40
  c->r[4]=0u+0x00000000u; // 8016DF44
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016DF48
  c->r[5]=c->r[29]+c->r[5]; // 8016DF4C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016DF50
  c->r[3]=c->r[29]+c->r[3]; // 8016DF54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DF58
  W32(c->r[3]+0x00000020u,c->r[28]); // 8016DF5C
  c->r[3]=c->r[29]+c->r[0]; // 8016DF60
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016DF64
  c->lr=0x8016DF6Cu; f_801584A4(c); // 8016DF68
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016DF6C
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016DF70
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016DF74
  c->r[0]=c->r[4]+0x00000001u; // 8016DF78
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016DF7C
  c->r[4]=c->r[29]+c->r[5]; // 8016DF80
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016DF84
  c->r[3]=c->r[30]|c->r[30]; // 8016DF88
  c->lr=0x8016DF90u; f_80154438(c); // 8016DF8C
  c->r[3]=0u+0x80000000u; // 8016DF90
  c->r[0]=R8(c->r[3]+0x00003187u); // 8016DF94
  cmpu(c,0,c->r[0],0x00000080u); // 8016DF98
  if (!crb(c,2)) { goto L_8016DFCC; } // 8016DF9C
  c->r[3]=R32(c->r[13]+0xFFFFACA8u); // 8016DFA0
  c->r[9]=0u+0x80170000u; // 8016DFA4
  c->r[5]=R32(c->r[13]+0xFFFFACC0u); // 8016DFA8
  c->r[4]=c->r[31]+0x00000000u; // 8016DFAC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8016DFB0
  c->r[6]=c->r[31]+0x00000100u; // 8016DFB4
  c->r[9]=c->r[9]+0xFFFFE2B4u; // 8016DFB8
  c->r[7]=0u+0x00000000u; // 8016DFBC
  c->r[8]=0u+0x00000000u; // 8016DFC0
  c->lr=0x8016DFC8u; f_801728E8(c); // 8016DFC4
  goto L_8016E10C; // 8016DFC8
L_8016DFCC:;
  c->r[3]=R32(c->r[13]+0xFFFFACA8u); // 8016DFCC
  c->r[8]=0u+0x80170000u; // 8016DFD0
  c->r[7]=c->r[31]+0x00000100u; // 8016DFD4
  c->r[4]=0u+0x00000000u; // 8016DFD8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8016DFDC
  c->r[8]=c->r[8]+0xFFFFE2B4u; // 8016DFE0
  c->r[5]=0u+0x00000000u; // 8016DFE4
  c->r[6]=0u+0x00000000u; // 8016DFE8
  c->lr=0x8016DFF0u; f_80172680(c); // 8016DFEC
  goto L_8016E10C; // 8016DFF0
L_8016DFF4:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016DFF4
  cmps(c,0,(int32_t)c->r[0],0); // 8016DFF8
  if (crb(c,2)) { goto L_8016E068; } // 8016DFFC
  c->r[28]=R32(c->r[13]+0xFFFFACF0u); // 8016E000
  c->r[3]=c->r[31]+0x00004B20u; // 8016E004
  c->r[0]=0u+0x00000001u; // 8016E008
  c->r[4]=0u+0x00000000u; // 8016E00C
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016E010
  c->r[0]=0u+0x0000000Au; // 8016E014
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016E018
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016E01C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8016E020
  c->r[12]=R32(c->r[28]+0x00000028u); // 8016E024
  cmps(c,0,(int32_t)c->r[12],0); // 8016E028
  if (crb(c,2)) { goto L_8016E040; } // 8016E02C
  c->r[4]=c->r[28]|c->r[28]; // 8016E030
  c->r[3]=0u+0xFFFFFFFDu; // 8016E034
  c->ctr=c->r[12]; // 8016E038
  if (true) { c->lr=0x8016E040u; dispatch(c,c->ctr); } // 8016E03C
L_8016E040:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016E040
  cmps(c,0,(int32_t)c->r[12],0); // 8016E044
  if (crb(c,2)) { goto L_8016E05C; } // 8016E048
  c->r[4]=c->r[28]|c->r[28]; // 8016E04C
  c->r[3]=0u+0x00000000u; // 8016E050
  c->ctr=c->r[12]; // 8016E054
  if (true) { c->lr=0x8016E05Cu; dispatch(c,c->ctr); } // 8016E058
L_8016E05C:;
  c->lr=0x8016E060u; f_8016F270(c); // 8016E05C
  c->r[0]=0u+0x00000001u; // 8016E060
  goto L_8016E06C; // 8016E064
L_8016E068:;
  c->r[0]=0u+0x00000000u; // 8016E068
L_8016E06C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016E06C
  if (!crb(c,2)) { goto L_8016E10C; } // 8016E070
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016E074
  c->r[0]=0u+0x00000006u; // 8016E078
  c->r[3]=0u+0x00000001u; // 8016E07C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016E080
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016E084
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 8016E088
  cmps(c,0,(int32_t)c->r[0],0); // 8016E08C
  if (!crb(c,2)) { goto L_8016E10C; } // 8016E090
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016E094
  cmps(c,0,(int32_t)c->r[0],0); // 8016E098
  if (!crb(c,2)) { goto L_8016E10C; } // 8016E09C
  W32(c->r[13]+0xFFFFAC84u,c->r[3]); // 8016E0A0
  c->r[3]=c->r[31]+0x00004B80u; // 8016E0A4
  c->lr=0x8016E0ACu; f_8014E820(c); // 8016E0A8
  c->lr=0x8016E0B0u; f_801584A4(c); // 8016E0AC
  c->r[5]=0u+0x80000000u; // 8016E0B0
  c->r[4]=0u+0x10620000u; // 8016E0B4
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016E0B8
  c->r[9]=0u+0x80170000u; // 8016E0BC
  c->r[6]=c->r[3]|c->r[3]; // 8016E0C0
  c->r[4]=c->r[4]+0x00004DD3u; // 8016E0C4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016E0C8
  c->r[3]=c->r[31]+0x00004B80u; // 8016E0CC
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016E0D0
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016E0D4
  c->r[5]=0u+0x00000000u; // 8016E0D8
  c->r[7]=0u+0x00000000u; // 8016E0DC
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016E0E0
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016E0E4
  c->lr=0x8016E0ECu; f_8014EAF0(c); // 8016E0E8
  goto L_8016E10C; // 8016E0EC
L_8016E0F0:;
  c->r[3]=0u+0x00000027u; // 8016E0F0
  c->r[4]=0u+0x00000000u; // 8016E0F4
  c->r[5]=0u+0x00000000u; // 8016E0F8
  c->lr=0x8016E100u; f_8016C5C0(c); // 8016E0FC
  c->r[3]=0u+0x80170000u; // 8016E100
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016E104
  c->lr=0x8016E10Cu; f_801735E4(c); // 8016E108
L_8016E10C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016E10C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016E110
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016E114
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016E118
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016E11C
  c->lr=c->r[0]; // 8016E120
  c->r[1]=c->r[1]+0x00000020u; // 8016E124
  return; // 8016E128
}

// dvd_cbForStateOpenPartition
void f_8016E12C(Ctx* __restrict c) {
  trace_call(0x8016E12Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E12C
  c->r[0]=c->lr; // 8016E130
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E138
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016E13C
  c->r[30]=c->r[3]|c->r[3]; // 8016E140
  c->lr=0x8016E148u; f_80154410(c); // 8016E144
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E148
  cmps(c,0,(int32_t)c->r[0],0); // 8016E14C
  if (!crb(c,2)) { goto L_8016E164; } // 8016E150
  c->r[4]=0u+0x80440000u; // 8016E154
  c->r[4]=c->r[4]+0x00004C40u; // 8016E158
  W32(c->r[4]+0x00000078u,c->r[30]); // 8016E15C
  goto L_8016E180; // 8016E160
L_8016E164:;
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016E164
  c->r[5]=0u+0x80440000u; // 8016E168
  c->r[5]=c->r[5]+0x00004C40u; // 8016E16C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8016E170
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E174
  c->r[4]=c->r[5]+c->r[0]; // 8016E178
  W32(c->r[4]+0x00000028u,c->r[30]); // 8016E17C
L_8016E180:;
  c->lr=0x8016E184u; f_80154438(c); // 8016E180
  cmpu(c,0,c->r[30],0x00000010u); // 8016E184
  if (!crb(c,2)) { goto L_8016E1A4; } // 8016E188
  c->r[3]=0u+0x01230000u; // 8016E18C
  c->r[4]=0u+0x80170000u; // 8016E190
  c->r[3]=c->r[3]+0x00004568u; // 8016E194
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016E198
  c->lr=0x8016E1A0u; f_80171B88(c); // 8016E19C
  goto L_8016E29C; // 8016E1A0
L_8016E1A4:;
  cmpu(c,0,c->r[30],0x00000020u); // 8016E1A4
  if (!crb(c,2)) { goto L_8016E1C4; } // 8016E1A8
  c->r[3]=0u+0x01230000u; // 8016E1AC
  c->r[4]=0u+0x80170000u; // 8016E1B0
  c->r[3]=c->r[3]+0x00004569u; // 8016E1B4
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016E1B8
  c->lr=0x8016E1C0u; f_80171B88(c); // 8016E1BC
  goto L_8016E29C; // 8016E1C0
L_8016E1C4:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 8016E1C4
  if (crb(c,2)) { goto L_8016E280; } // 8016E1C8
  c->r[30]=0u+0x00000000u; // 8016E1CC
  c->r[3]=0u+0x00000000u; // 8016E1D0
  W32(c->r[13]+0xFFFFAC78u,c->r[30]); // 8016E1D4
  c->lr=0x8016E1DCu; f_801743B0(c); // 8016E1D8
  c->lr=0x8016E1E0u; f_80154410(c); // 8016E1DC
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E1E0
  c->r[31]=c->r[3]|c->r[3]; // 8016E1E4
  cmpu(c,0,c->r[0],0x00000005u); // 8016E1E8
  if (crb(c,0)) { goto L_8016E1F4; } // 8016E1EC
  W32(c->r[13]+0xFFFFAC60u,c->r[30]); // 8016E1F0
L_8016E1F4:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E1F4
  c->r[30]=0u+0x80440000u; // 8016E1F8
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016E1FC
  c->r[30]=c->r[30]+0x00004C40u; // 8016E200
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E204
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E208
  c->r[7]=0u+0x00000001u; // 8016E20C
  c->r[5]=0u+0x00000108u; // 8016E210
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016E214
  c->r[4]=0u+0x00000020u; // 8016E218
  c->r[6]=c->r[30]+c->r[6]; // 8016E21C
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 8016E220
  c->r[3]=c->r[30]+c->r[3]; // 8016E224
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E228
  W32(c->r[3]+0x00000020u,c->r[5]); // 8016E22C
  c->r[3]=c->r[30]+c->r[0]; // 8016E230
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016E234
  c->lr=0x8016E23Cu; f_801584A4(c); // 8016E238
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E23C
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016E240
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E244
  c->r[0]=c->r[4]+0x00000001u; // 8016E248
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016E24C
  c->r[4]=c->r[30]+c->r[5]; // 8016E250
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016E254
  c->r[3]=c->r[31]|c->r[31]; // 8016E258
  c->lr=0x8016E260u; f_80154438(c); // 8016E25C
  c->r[3]=0u+0x80440000u; // 8016E260
  c->r[6]=0u+0x80170000u; // 8016E264
  c->r[3]=c->r[3]+0x00004900u; // 8016E268
  c->r[4]=0u+0x00000020u; // 8016E26C
  c->r[6]=c->r[6]+0xFFFFE5E0u; // 8016E270
  c->r[5]=0u+0x00000108u; // 8016E274
  c->lr=0x8016E27Cu; f_80173D7C(c); // 8016E278
  goto L_8016E29C; // 8016E27C
L_8016E280:;
  c->r[3]=0u+0x00000027u; // 8016E280
  c->r[4]=0u+0x00000000u; // 8016E284
  c->r[5]=0u+0x00000000u; // 8016E288
  c->lr=0x8016E290u; f_8016C5C0(c); // 8016E28C
  c->r[3]=0u+0x80170000u; // 8016E290
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016E294
  c->lr=0x8016E29Cu; f_801735E4(c); // 8016E298
L_8016E29C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E29C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E2A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016E2A4
  c->lr=c->r[0]; // 8016E2A8
  c->r[1]=c->r[1]+0x00000010u; // 8016E2AC
  return; // 8016E2B0
}

// dvd_cbForStateOpenPartition2
void f_8016E2B4(Ctx* __restrict c) {
  trace_call(0x8016E2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E2B4
  c->r[0]=c->lr; // 8016E2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E2BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E2C0
  c->r[31]=c->r[3]|c->r[3]; // 8016E2C4
  c->lr=0x8016E2CCu; f_80154410(c); // 8016E2C8
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E2CC
  cmps(c,0,(int32_t)c->r[0],0); // 8016E2D0
  if (!crb(c,2)) { goto L_8016E2E8; } // 8016E2D4
  c->r[4]=0u+0x80440000u; // 8016E2D8
  c->r[4]=c->r[4]+0x00004C40u; // 8016E2DC
  W32(c->r[4]+0x00000078u,c->r[31]); // 8016E2E0
  goto L_8016E300; // 8016E2E4
L_8016E2E8:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E2E8
  c->r[4]=0u+0x80440000u; // 8016E2EC
  c->r[4]=c->r[4]+0x00004C40u; // 8016E2F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E2F4
  c->r[4]=c->r[4]+c->r[0]; // 8016E2F8
  W32(c->r[4]+0x00000014u,c->r[31]); // 8016E2FC
L_8016E300:;
  c->lr=0x8016E304u; f_80154438(c); // 8016E300
  cmpu(c,0,c->r[31],0x00000010u); // 8016E304
  if (!crb(c,2)) { goto L_8016E324; } // 8016E308
  c->r[3]=0u+0x01230000u; // 8016E30C
  c->r[4]=0u+0x80170000u; // 8016E310
  c->r[3]=c->r[3]+0x00004568u; // 8016E314
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016E318
  c->lr=0x8016E320u; f_80171B88(c); // 8016E31C
  goto L_8016E404; // 8016E320
L_8016E324:;
  cmpu(c,0,c->r[31],0x00000020u); // 8016E324
  if (!crb(c,2)) { goto L_8016E344; } // 8016E328
  c->r[3]=0u+0x01230000u; // 8016E32C
  c->r[4]=0u+0x80170000u; // 8016E330
  c->r[3]=c->r[3]+0x00004569u; // 8016E334
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016E338
  c->lr=0x8016E340u; f_80171B88(c); // 8016E33C
  goto L_8016E404; // 8016E340
L_8016E344:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8016E344
  if (crb(c,2)) { goto L_8016E3E8; } // 8016E348
  c->r[4]=0u+0x00000000u; // 8016E34C
  W32(c->r[13]+0xFFFFAC78u,c->r[4]); // 8016E350
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016E354
  cmps(c,0,(int32_t)c->r[0],0); // 8016E358
  if (crb(c,2)) { goto L_8016E3C4; } // 8016E35C
  c->r[3]=0u+0x80440000u; // 8016E360
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016E364
  c->r[3]=c->r[3]+0x00004920u; // 8016E368
  W32(c->r[13]+0xFFFFAC74u,c->r[4]); // 8016E36C
  c->r[0]=0u+0x0000000Au; // 8016E370
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016E374
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016E378
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016E37C
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016E380
  cmps(c,0,(int32_t)c->r[12],0); // 8016E384
  if (crb(c,2)) { goto L_8016E39C; } // 8016E388
  c->r[4]=c->r[31]|c->r[31]; // 8016E38C
  c->r[3]=0u+0xFFFFFFFDu; // 8016E390
  c->ctr=c->r[12]; // 8016E394
  if (true) { c->lr=0x8016E39Cu; dispatch(c,c->ctr); } // 8016E398
L_8016E39C:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016E39C
  cmps(c,0,(int32_t)c->r[12],0); // 8016E3A0
  if (crb(c,2)) { goto L_8016E3B8; } // 8016E3A4
  c->r[4]=c->r[31]|c->r[31]; // 8016E3A8
  c->r[3]=0u+0x00000000u; // 8016E3AC
  c->ctr=c->r[12]; // 8016E3B0
  if (true) { c->lr=0x8016E3B8u; dispatch(c,c->ctr); } // 8016E3B4
L_8016E3B8:;
  c->lr=0x8016E3BCu; f_8016F270(c); // 8016E3B8
  c->r[0]=0u+0x00000001u; // 8016E3BC
  goto L_8016E3C8; // 8016E3C0
L_8016E3C4:;
  c->r[0]=0u+0x00000000u; // 8016E3C4
L_8016E3C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016E3C8
  if (!crb(c,2)) { goto L_8016E404; } // 8016E3CC
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016E3D0
  c->r[0]=0u+0x00000001u; // 8016E3D4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016E3D8
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016E3DC
  c->lr=0x8016E3E4u; f_8016F598(c); // 8016E3E0
  goto L_8016E404; // 8016E3E4
L_8016E3E8:;
  c->r[3]=0u+0x00000027u; // 8016E3E8
  c->r[4]=0u+0x00000000u; // 8016E3EC
  c->r[5]=0u+0x00000000u; // 8016E3F0
  c->lr=0x8016E3F8u; f_8016C5C0(c); // 8016E3F4
  c->r[3]=0u+0x80170000u; // 8016E3F8
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016E3FC
  c->lr=0x8016E404u; f_801735E4(c); // 8016E400
L_8016E404:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E404
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E408
  c->lr=c->r[0]; // 8016E40C
  c->r[1]=c->r[1]+0x00000010u; // 8016E410
  return; // 8016E414
}

// dvd_cbForStateCheckID1
void f_8016E418(Ctx* __restrict c) {
  trace_call(0x8016E418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E418
  c->r[0]=c->lr; // 8016E41C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E420
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E424
  c->r[31]=c->r[3]|c->r[3]; // 8016E428
  c->lr=0x8016E430u; f_80154410(c); // 8016E42C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E430
  cmps(c,0,(int32_t)c->r[0],0); // 8016E434
  if (!crb(c,2)) { goto L_8016E44C; } // 8016E438
  c->r[4]=0u+0x80440000u; // 8016E43C
  c->r[4]=c->r[4]+0x00004C40u; // 8016E440
  W32(c->r[4]+0x00000078u,c->r[31]); // 8016E444
  goto L_8016E464; // 8016E448
L_8016E44C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E44C
  c->r[4]=0u+0x80440000u; // 8016E450
  c->r[4]=c->r[4]+0x00004C40u; // 8016E454
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E458
  c->r[4]=c->r[4]+c->r[0]; // 8016E45C
  W32(c->r[4]+0x00000014u,c->r[31]); // 8016E460
L_8016E464:;
  c->lr=0x8016E468u; f_80154438(c); // 8016E464
  cmpu(c,0,c->r[31],0x00000010u); // 8016E468
  if (!crb(c,2)) { goto L_8016E488; } // 8016E46C
  c->r[3]=0u+0x01230000u; // 8016E470
  c->r[4]=0u+0x80170000u; // 8016E474
  c->r[3]=c->r[3]+0x00004568u; // 8016E478
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016E47C
  c->lr=0x8016E484u; f_80171B88(c); // 8016E480
  goto L_8016E5CC; // 8016E484
L_8016E488:;
  cmpu(c,0,c->r[31],0x00000020u); // 8016E488
  if (!crb(c,2)) { goto L_8016E4A8; } // 8016E48C
  c->r[3]=0u+0x01230000u; // 8016E490
  c->r[4]=0u+0x80170000u; // 8016E494
  c->r[3]=c->r[3]+0x00004569u; // 8016E498
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016E49C
  c->lr=0x8016E4A4u; f_80171B88(c); // 8016E4A0
  goto L_8016E5CC; // 8016E4A4
L_8016E4A8:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8016E4A8
  if (crb(c,2)) { goto L_8016E4C8; } // 8016E4AC
  c->r[3]=0u+0x01230000u; // 8016E4B0
  c->r[4]=0u+0x80170000u; // 8016E4B4
  c->r[3]=c->r[3]+0x00004567u; // 8016E4B8
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016E4BC
  c->lr=0x8016E4C4u; f_80171B88(c); // 8016E4C0
  goto L_8016E5CC; // 8016E4C4
L_8016E4C8:;
  c->r[4]=0u+0x00000000u; // 8016E4C8
  W32(c->r[13]+0xFFFFAC78u,c->r[4]); // 8016E4CC
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016E4D0
  cmps(c,0,(int32_t)c->r[0],0); // 8016E4D4
  if (crb(c,2)) { goto L_8016E544; } // 8016E4D8
  c->r[3]=0u+0x80440000u; // 8016E4DC
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016E4E0
  c->r[3]=c->r[3]+0x00004920u; // 8016E4E4
  c->r[0]=0u+0x00000001u; // 8016E4E8
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016E4EC
  c->r[0]=0u+0x0000000Au; // 8016E4F0
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016E4F4
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016E4F8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016E4FC
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016E500
  cmps(c,0,(int32_t)c->r[12],0); // 8016E504
  if (crb(c,2)) { goto L_8016E51C; } // 8016E508
  c->r[4]=c->r[31]|c->r[31]; // 8016E50C
  c->r[3]=0u+0xFFFFFFFDu; // 8016E510
  c->ctr=c->r[12]; // 8016E514
  if (true) { c->lr=0x8016E51Cu; dispatch(c,c->ctr); } // 8016E518
L_8016E51C:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016E51C
  cmps(c,0,(int32_t)c->r[12],0); // 8016E520
  if (crb(c,2)) { goto L_8016E538; } // 8016E524
  c->r[4]=c->r[31]|c->r[31]; // 8016E528
  c->r[3]=0u+0x00000000u; // 8016E52C
  c->ctr=c->r[12]; // 8016E530
  if (true) { c->lr=0x8016E538u; dispatch(c,c->ctr); } // 8016E534
L_8016E538:;
  c->lr=0x8016E53Cu; f_8016F270(c); // 8016E538
  c->r[0]=0u+0x00000001u; // 8016E53C
  goto L_8016E548; // 8016E540
L_8016E544:;
  c->r[0]=0u+0x00000000u; // 8016E544
L_8016E548:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016E548
  if (!crb(c,2)) { goto L_8016E5CC; } // 8016E54C
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016E550
  c->r[0]=0u+0x00000006u; // 8016E554
  c->r[3]=0u+0x00000001u; // 8016E558
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016E55C
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016E560
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 8016E564
  cmps(c,0,(int32_t)c->r[0],0); // 8016E568
  if (!crb(c,2)) { goto L_8016E5CC; } // 8016E56C
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016E570
  cmps(c,0,(int32_t)c->r[0],0); // 8016E574
  if (!crb(c,2)) { goto L_8016E5CC; } // 8016E578
  c->r[31]=0u+0x80440000u; // 8016E57C
  W32(c->r[13]+0xFFFFAC84u,c->r[3]); // 8016E580
  c->r[3]=c->r[31]+0x00004980u; // 8016E584
  c->lr=0x8016E58Cu; f_8014E820(c); // 8016E588
  c->lr=0x8016E590u; f_801584A4(c); // 8016E58C
  c->r[5]=0u+0x80000000u; // 8016E590
  c->r[4]=0u+0x10620000u; // 8016E594
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016E598
  c->r[9]=0u+0x80170000u; // 8016E59C
  c->r[6]=c->r[3]|c->r[3]; // 8016E5A0
  c->r[4]=c->r[4]+0x00004DD3u; // 8016E5A4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016E5A8
  c->r[3]=c->r[31]+0x00004980u; // 8016E5AC
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016E5B0
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016E5B4
  c->r[5]=0u+0x00000000u; // 8016E5B8
  c->r[7]=0u+0x00000000u; // 8016E5BC
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016E5C0
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016E5C4
  c->lr=0x8016E5CCu; f_8014EAF0(c); // 8016E5C8
L_8016E5CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E5CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E5D0
  c->lr=c->r[0]; // 8016E5D4
  c->r[1]=c->r[1]+0x00000010u; // 8016E5D8
  return; // 8016E5DC
}

// dvd_cbForStateCheckID2
void f_8016E5E0(Ctx* __restrict c) {
  trace_call(0x8016E5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E5E0
  c->r[0]=c->lr; // 8016E5E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E5E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E5EC
  c->r[31]=c->r[3]|c->r[3]; // 8016E5F0
  c->lr=0x8016E5F8u; f_80154410(c); // 8016E5F4
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E5F8
  cmps(c,0,(int32_t)c->r[0],0); // 8016E5FC
  if (!crb(c,2)) { goto L_8016E614; } // 8016E600
  c->r[4]=0u+0x80440000u; // 8016E604
  c->r[4]=c->r[4]+0x00004C40u; // 8016E608
  W32(c->r[4]+0x00000078u,c->r[31]); // 8016E60C
  goto L_8016E630; // 8016E610
L_8016E614:;
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016E614
  c->r[5]=0u+0x80440000u; // 8016E618
  c->r[5]=c->r[5]+0x00004C40u; // 8016E61C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8016E620
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E624
  c->r[4]=c->r[5]+c->r[0]; // 8016E628
  W32(c->r[4]+0x00000028u,c->r[31]); // 8016E62C
L_8016E630:;
  c->lr=0x8016E634u; f_80154438(c); // 8016E630
  cmpu(c,0,c->r[31],0x00000010u); // 8016E634
  if (!crb(c,2)) { goto L_8016E654; } // 8016E638
  c->r[3]=0u+0x01230000u; // 8016E63C
  c->r[4]=0u+0x80170000u; // 8016E640
  c->r[3]=c->r[3]+0x00004568u; // 8016E644
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016E648
  c->lr=0x8016E650u; f_80171B88(c); // 8016E64C
  goto L_8016E760; // 8016E650
L_8016E654:;
  cmpu(c,0,c->r[31],0x00000020u); // 8016E654
  if (!crb(c,2)) { goto L_8016E674; } // 8016E658
  c->r[3]=0u+0x01230000u; // 8016E65C
  c->r[4]=0u+0x80170000u; // 8016E660
  c->r[3]=c->r[3]+0x00004569u; // 8016E664
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016E668
  c->lr=0x8016E670u; f_80171B88(c); // 8016E66C
  goto L_8016E760; // 8016E670
L_8016E674:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8016E674
  if (crb(c,2)) { goto L_8016E744; } // 8016E678
  c->r[5]=0u+0x80170000u; // 8016E67C
  c->r[0]=0u+0x00000000u; // 8016E680
  c->r[5]=c->r[5]+0xFFFFC7CCu; // 8016E684
  c->r[3]=0u+0x80440000u; // 8016E688
  W32(c->r[13]+0xFFFFAC78u,c->r[0]); // 8016E68C
  c->r[3]=c->r[3]+0x00004900u; // 8016E690
  c->r[4]=R32(c->r[13]+0xFFFFACE8u); // 8016E694
  W32(c->r[13]+0xFFFFACF4u,c->r[5]); // 8016E698
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016E69C
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 8016E6A0
  cmpu(c,0,c->r[3],c->r[0]); // 8016E6A4
  if (!crb(c,0)) { goto L_8016E6C4; } // 8016E6A8
  c->r[5]=0u+0x802D0000u; // 8016E6AC
  c->r[3]=c->r[13]+0xFFFF90ECu; // 8016E6B0
  c->r[5]=c->r[5]+0x00005B08u; // 8016E6B4
  c->r[4]=0u+0x0000043Bu; // 8016E6B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8016E6BC
  c->lr=0x8016E6C4u; f_80150744(c); // 8016E6C0
L_8016E6C4:;
  c->r[3]=0u+0x00000000u; // 8016E6C4
  c->lr=0x8016E6CCu; f_801743B0(c); // 8016E6C8
  c->r[6]=R32(c->r[13]+0xFFFFAC98u); // 8016E6CC
  c->r[31]=0u+0x80440000u; // 8016E6D0
  c->r[31]=c->r[31]+0x00004900u; // 8016E6D4
  c->r[0]=R32(c->r[13]+0xFFFFAC98u); // 8016E6D8
  c->r[4]=R32(c->r[31]+0x00000008u); // 8016E6DC
  c->r[3]=0u+0x00000001u; // 8016E6E0
  c->r[0]=~(c->r[0]|c->r[0]); // 8016E6E4
  c->r[7]=R32(c->r[31]+0x00000004u); // 8016E6E8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 8016E6EC
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8016E6F0
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 8016E6F4
  c->r[0]=c->r[5]+0x0000001Fu; // 8016E6F8
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8016E6FC
  c->lr=0x8016E704u; f_8016C5C0(c); // 8016E700
  c->r[0]=R32(c->r[13]+0xFFFFAC98u); // 8016E704
  c->r[6]=0u+0x80170000u; // 8016E708
  c->r[3]=R32(c->r[31]+0x00000008u); // 8016E70C
  c->r[6]=c->r[6]+0xFFFFC944u; // 8016E710
  c->r[0]=~(c->r[0]|c->r[0]); // 8016E714
  c->r[7]=R32(c->r[13]+0xFFFFACE8u); // 8016E718
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 8016E71C
  c->r[5]=R32(c->r[31]+0x00000004u); // 8016E720
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8016E724
  c->r[0]=R32(c->r[13]+0xFFFFAC98u); // 8016E728
  c->r[4]=c->r[3]+0x0000001Fu; // 8016E72C
  c->r[3]=R32(c->r[7]+0x00000038u); // 8016E730
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 8016E734
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 8016E738
  c->lr=0x8016E740u; f_80173D7C(c); // 8016E73C
  goto L_8016E760; // 8016E740
L_8016E744:;
  c->r[3]=0u+0x00000027u; // 8016E744
  c->r[4]=0u+0x00000000u; // 8016E748
  c->r[5]=0u+0x00000000u; // 8016E74C
  c->lr=0x8016E754u; f_8016C5C0(c); // 8016E750
  c->r[3]=0u+0x80170000u; // 8016E754
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016E758
  c->lr=0x8016E760u; f_801735E4(c); // 8016E75C
L_8016E760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E764
  c->lr=c->r[0]; // 8016E768
  c->r[1]=c->r[1]+0x00000010u; // 8016E76C
  return; // 8016E770
}

// dvd_stateCoverClosed
void f_8016E774(Ctx* __restrict c) {
  trace_call(0x8016E774u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E774
  c->r[0]=c->lr; // 8016E778
  c->r[3]=0u+0x00000001u; // 8016E77C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E780
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016E784
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 8016E788
  cmpu(c,0,c->r[0],0x0000002Au); // 8016E78C
  if (crb(c,1)) { goto L_8016E80C; } // 8016E790
  c->r[3]=0u+0x802D0000u; // 8016E794
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016E798
  c->r[3]=c->r[3]+0x00005B3Cu; // 8016E79C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016E7A0
  c->ctr=c->r[3]; // 8016E7A4
  if (true) { switch (c->ctr) { case 0x8016E7ACu: goto L_8016E7AC; case 0x8016E7E0u: goto L_8016E7E0; case 0x8016E7E8u: goto L_8016E7E8; case 0x8016E800u: goto L_8016E800; case 0x8016E80Cu: goto L_8016E80C; default: break; } dispatch(c,c->ctr); return; } // 8016E7A8
L_8016E7AC:;
  c->lr=0x8016E7B0u; f_80171094(c); // 8016E7AC
  c->r[3]=0u+0x80440000u; // 8016E7B0
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016E7B4
  c->r[3]=c->r[3]+0x00004920u; // 8016E7B8
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016E7BC
  c->r[12]=R32(c->r[4]+0x00000028u); // 8016E7C0
  cmps(c,0,(int32_t)c->r[12],0); // 8016E7C4
  if (crb(c,2)) { goto L_8016E7D8; } // 8016E7C8
  c->r[3]=0u+0xFFFFFFFCu; // 8016E7CC
  c->ctr=c->r[12]; // 8016E7D0
  if (true) { c->lr=0x8016E7D8u; dispatch(c,c->ctr); } // 8016E7D4
L_8016E7D8:;
  c->lr=0x8016E7DCu; f_8016F270(c); // 8016E7D8
  goto L_8016E828; // 8016E7DC
L_8016E7E0:;
  c->r[0]=0u+0x00000000u; // 8016E7E0
  W32(c->r[13]+0xFFFFACD0u,c->r[0]); // 8016E7E4
L_8016E7E8:;
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016E7E8
  c->r[0]=0u+0x00000001u; // 8016E7EC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016E7F0
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016E7F4
  c->lr=0x8016E7FCu; f_8016F598(c); // 8016E7F8
  goto L_8016E828; // 8016E7FC
L_8016E800:;
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 8016E800
  cmps(c,0,(int32_t)c->r[0],0); // 8016E804
  if (!crb(c,2)) { goto L_8016E828; } // 8016E808
L_8016E80C:;
  c->r[0]=0u+0x00000000u; // 8016E80C
  c->r[3]=0u+0x00000001u; // 8016E810
  W32(c->r[13]+0xFFFFACD0u,c->r[0]); // 8016E814
  c->lr=0x8016E81Cu; f_8017374C(c); // 8016E818
  c->r[3]=0u+0x80170000u; // 8016E81C
  c->r[3]=c->r[3]+0xFFFFEA88u; // 8016E820
  c->lr=0x8016E828u; f_80173758(c); // 8016E824
L_8016E828:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E828
  c->lr=c->r[0]; // 8016E82C
  c->r[1]=c->r[1]+0x00000010u; // 8016E830
  return; // 8016E834
}

// dvd_ResetAlarmHandler
void f_8016E838(Ctx* __restrict c) {
  trace_call(0x8016E838u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E838
  c->r[0]=c->lr; // 8016E83C
  c->r[3]=0u+0x80000000u; // 8016E840
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E848
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016E84C
  c->r[0]=R16(c->r[3]+0x000030E6u); // 8016E850
  cmpu(c,0,c->r[0],0x00008003u); // 8016E854
  if (!crb(c,2)) { goto L_8016E908; } // 8016E858
  c->r[4]=0u+0x80170000u; // 8016E85C
  c->r[3]=0u+0x00000000u; // 8016E860
  c->r[4]=c->r[4]+0xFFFFEB6Cu; // 8016E864
  W32(c->r[13]+0xFFFFACF4u,c->r[4]); // 8016E868
  c->lr=0x8016E870u; f_801743B0(c); // 8016E86C
  c->lr=0x8016E874u; f_80154410(c); // 8016E870
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E874
  c->r[31]=c->r[3]|c->r[3]; // 8016E878
  cmpu(c,0,c->r[0],0x00000005u); // 8016E87C
  if (crb(c,0)) { goto L_8016E88C; } // 8016E880
  c->r[0]=0u+0x00000000u; // 8016E884
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016E888
L_8016E88C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E88C
  c->r[30]=0u+0x80440000u; // 8016E890
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016E894
  c->r[30]=c->r[30]+0x00004C40u; // 8016E898
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E89C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E8A0
  c->r[6]=0u+0x00000025u; // 8016E8A4
  c->r[4]=0u+0x00000000u; // 8016E8A8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016E8AC
  c->r[5]=c->r[30]+c->r[5]; // 8016E8B0
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016E8B4
  c->r[3]=c->r[30]+c->r[3]; // 8016E8B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E8BC
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016E8C0
  c->r[3]=c->r[30]+c->r[0]; // 8016E8C4
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016E8C8
  c->lr=0x8016E8D0u; f_801584A4(c); // 8016E8CC
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E8D0
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016E8D4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016E8D8
  c->r[0]=c->r[4]+0x00000001u; // 8016E8DC
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016E8E0
  c->r[4]=c->r[30]+c->r[5]; // 8016E8E4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016E8E8
  c->r[3]=c->r[31]|c->r[31]; // 8016E8EC
  c->lr=0x8016E8F4u; f_80154438(c); // 8016E8F0
  c->r[4]=0u+0x80170000u; // 8016E8F4
  c->r[3]=0u+0x00020000u; // 8016E8F8
  c->r[4]=c->r[4]+0xFFFFEC34u; // 8016E8FC
  c->lr=0x8016E904u; f_80173BFC(c); // 8016E900
  goto L_8016EA70; // 8016E904
L_8016E908:;
  c->r[3]=0u+0x80440000u; // 8016E908
  c->r[4]=0u+0x00000020u; // 8016E90C
  c->r[3]=c->r[3]+0x000049C0u; // 8016E910
  c->lr=0x8016E918u; f_8014F810(c); // 8016E914
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016E918
  c->r[3]=0u+0x80170000u; // 8016E91C
  c->r[3]=c->r[3]+0xFFFFEE74u; // 8016E920
  cmpu(c,0,c->r[0],0x00000028u); // 8016E924
  W32(c->r[13]+0xFFFFACF4u,c->r[3]); // 8016E928
  if (!crb(c,2)) { goto L_8016E9CC; } // 8016E92C
  c->r[4]=0u+0x00000000u; // 8016E930
  W32(c->r[13]+0xFFFFAC78u,c->r[4]); // 8016E934
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016E938
  cmps(c,0,(int32_t)c->r[0],0); // 8016E93C
  if (crb(c,2)) { goto L_8016E9A8; } // 8016E940
  c->r[3]=0u+0x80440000u; // 8016E944
  c->r[30]=R32(c->r[13]+0xFFFFACF0u); // 8016E948
  c->r[3]=c->r[3]+0x00004920u; // 8016E94C
  W32(c->r[13]+0xFFFFAC74u,c->r[4]); // 8016E950
  c->r[0]=0u+0x0000000Au; // 8016E954
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016E958
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016E95C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8016E960
  c->r[12]=R32(c->r[30]+0x00000028u); // 8016E964
  cmps(c,0,(int32_t)c->r[12],0); // 8016E968
  if (crb(c,2)) { goto L_8016E980; } // 8016E96C
  c->r[4]=c->r[30]|c->r[30]; // 8016E970
  c->r[3]=0u+0xFFFFFFFDu; // 8016E974
  c->ctr=c->r[12]; // 8016E978
  if (true) { c->lr=0x8016E980u; dispatch(c,c->ctr); } // 8016E97C
L_8016E980:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016E980
  cmps(c,0,(int32_t)c->r[12],0); // 8016E984
  if (crb(c,2)) { goto L_8016E99C; } // 8016E988
  c->r[4]=c->r[30]|c->r[30]; // 8016E98C
  c->r[3]=0u+0x00000000u; // 8016E990
  c->ctr=c->r[12]; // 8016E994
  if (true) { c->lr=0x8016E99Cu; dispatch(c,c->ctr); } // 8016E998
L_8016E99C:;
  c->lr=0x8016E9A0u; f_8016F270(c); // 8016E99C
  c->r[0]=0u+0x00000001u; // 8016E9A0
  goto L_8016E9AC; // 8016E9A4
L_8016E9A8:;
  c->r[0]=0u+0x00000000u; // 8016E9A8
L_8016E9AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016E9AC
  if (!crb(c,2)) { goto L_8016EA70; } // 8016E9B0
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016E9B4
  c->r[0]=0u+0x00000001u; // 8016E9B8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016E9BC
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016E9C0
  c->lr=0x8016E9C8u; f_8016F598(c); // 8016E9C4
  goto L_8016EA70; // 8016E9C8
L_8016E9CC:;
  c->r[3]=0u+0x00000000u; // 8016E9CC
  c->lr=0x8016E9D4u; f_801743B0(c); // 8016E9D0
  c->lr=0x8016E9D8u; f_80154410(c); // 8016E9D4
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E9D8
  c->r[31]=c->r[3]|c->r[3]; // 8016E9DC
  cmpu(c,0,c->r[0],0x00000005u); // 8016E9E0
  if (crb(c,0)) { goto L_8016E9F0; } // 8016E9E4
  c->r[0]=0u+0x00000000u; // 8016E9E8
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016E9EC
L_8016E9F0:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016E9F0
  c->r[30]=0u+0x80440000u; // 8016E9F4
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016E9F8
  c->r[30]=c->r[30]+0x00004C40u; // 8016E9FC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EA00
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EA04
  c->r[7]=0u+0x00000005u; // 8016EA08
  c->r[5]=0u+0x00000000u; // 8016EA0C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016EA10
  c->r[4]=0u+0x00000020u; // 8016EA14
  c->r[6]=c->r[30]+c->r[6]; // 8016EA18
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 8016EA1C
  c->r[3]=c->r[30]+c->r[3]; // 8016EA20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EA24
  W32(c->r[3]+0x00000020u,c->r[5]); // 8016EA28
  c->r[3]=c->r[30]+c->r[0]; // 8016EA2C
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016EA30
  c->lr=0x8016EA38u; f_801584A4(c); // 8016EA34
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EA38
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016EA3C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EA40
  c->r[0]=c->r[4]+0x00000001u; // 8016EA44
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016EA48
  c->r[4]=c->r[30]+c->r[5]; // 8016EA4C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016EA50
  c->r[3]=c->r[31]|c->r[31]; // 8016EA54
  c->lr=0x8016EA5Cu; f_80154438(c); // 8016EA58
  c->r[3]=0u+0x80440000u; // 8016EA5C
  c->r[4]=0u+0x80170000u; // 8016EA60
  c->r[3]=c->r[3]+0x000049C0u; // 8016EA64
  c->r[4]=c->r[4]+0xFFFFEFECu; // 8016EA68
  c->lr=0x8016EA70u; f_801724F8(c); // 8016EA6C
L_8016EA70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EA70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016EA74
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016EA78
  c->lr=c->r[0]; // 8016EA7C
  c->r[1]=c->r[1]+0x00000010u; // 8016EA80
  return; // 8016EA84
}

// dvd_cbForStateReset
void f_8016EA88(Ctx* __restrict c) {
  trace_call(0x8016EA88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EA88
  c->r[0]=c->lr; // 8016EA8C
  cmpu(c,0,c->r[3],0x00000010u); // 8016EA90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EA94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EA98
  if (!crb(c,2)) { goto L_8016EAB8; } // 8016EA9C
  c->r[3]=0u+0x01230000u; // 8016EAA0
  c->r[4]=0u+0x80170000u; // 8016EAA4
  c->r[3]=c->r[3]+0x00004568u; // 8016EAA8
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016EAAC
  c->lr=0x8016EAB4u; f_80171B88(c); // 8016EAB0
  goto L_8016EB58; // 8016EAB4
L_8016EAB8:;
  cmpu(c,0,c->r[3],0x00000020u); // 8016EAB8
  if (!crb(c,2)) { goto L_8016EAD8; } // 8016EABC
  c->r[3]=0u+0x01230000u; // 8016EAC0
  c->r[4]=0u+0x80170000u; // 8016EAC4
  c->r[3]=c->r[3]+0x00004569u; // 8016EAC8
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016EACC
  c->lr=0x8016EAD4u; f_80171B88(c); // 8016EAD0
  goto L_8016EB58; // 8016EAD4
L_8016EAD8:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8016EAD8
  if (crb(c,2)) { goto L_8016EB3C; } // 8016EADC
  c->lr=0x8016EAE4u; f_801584AC(c); // 8016EAE0
  c->r[0]=0u+0x00000000u; // 8016EAE4
  W32(c->r[13]+0xFFFFACCCu,c->r[4]); // 8016EAE8
  c->r[31]=0u+0x80440000u; // 8016EAEC
  W32(c->r[13]+0xFFFFACC8u,c->r[3]); // 8016EAF0
  c->r[3]=c->r[31]+0x00004A20u; // 8016EAF4
  W32(c->r[13]+0xFFFFACD4u,c->r[0]); // 8016EAF8
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016EAFC
  c->lr=0x8016EB04u; f_8014E820(c); // 8016EB00
  c->r[4]=0u+0x80000000u; // 8016EB04
  c->r[7]=0u+0x80170000u; // 8016EB08
  c->r[0]=R32(c->r[4]+0x000000F8u); // 8016EB0C
  c->r[3]=0u+0x10620000u; // 8016EB10
  c->r[4]=c->r[3]+0x00004DD3u; // 8016EB14
  c->r[7]=c->r[7]+0xFFFFE838u; // 8016EB18
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016EB1C
  c->r[3]=c->r[31]+0x00004A20u; // 8016EB20
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016EB24
  c->r[5]=0u+0x00000000u; // 8016EB28
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016EB2C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016EB30
  c->lr=0x8016EB38u; f_8014EA80(c); // 8016EB34
  goto L_8016EB58; // 8016EB38
L_8016EB3C:;
  c->r[3]=0u+0x00000027u; // 8016EB3C
  c->r[4]=0u+0x00000000u; // 8016EB40
  c->r[5]=0u+0x00000000u; // 8016EB44
  c->lr=0x8016EB4Cu; f_8016C5C0(c); // 8016EB48
  c->r[3]=0u+0x80170000u; // 8016EB4C
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016EB50
  c->lr=0x8016EB58u; f_801735E4(c); // 8016EB54
L_8016EB58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EB58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016EB5C
  c->lr=c->r[0]; // 8016EB60
  c->r[1]=c->r[1]+0x00000010u; // 8016EB64
  return; // 8016EB68
}

// dvd_stateDownRotation
void f_8016EB6C(Ctx* __restrict c) {
  trace_call(0x8016EB6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EB6C
  c->r[0]=c->lr; // 8016EB70
  c->r[3]=0u+0x00000000u; // 8016EB74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EB78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EB7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016EB80
  c->lr=0x8016EB88u; f_801743B0(c); // 8016EB84
  c->lr=0x8016EB8Cu; f_80154410(c); // 8016EB88
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EB8C
  c->r[31]=c->r[3]|c->r[3]; // 8016EB90
  cmpu(c,0,c->r[0],0x00000005u); // 8016EB94
  if (crb(c,0)) { goto L_8016EBA4; } // 8016EB98
  c->r[0]=0u+0x00000000u; // 8016EB9C
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016EBA0
L_8016EBA4:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EBA4
  c->r[30]=0u+0x80440000u; // 8016EBA8
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016EBAC
  c->r[30]=c->r[30]+0x00004C40u; // 8016EBB0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EBB4
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EBB8
  c->r[6]=0u+0x00000025u; // 8016EBBC
  c->r[4]=0u+0x00000000u; // 8016EBC0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016EBC4
  c->r[5]=c->r[30]+c->r[5]; // 8016EBC8
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8016EBCC
  c->r[3]=c->r[30]+c->r[3]; // 8016EBD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EBD4
  W32(c->r[3]+0x00000020u,c->r[4]); // 8016EBD8
  c->r[3]=c->r[30]+c->r[0]; // 8016EBDC
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016EBE0
  c->lr=0x8016EBE8u; f_801584A4(c); // 8016EBE4
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EBE8
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016EBEC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EBF0
  c->r[0]=c->r[4]+0x00000001u; // 8016EBF4
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016EBF8
  c->r[4]=c->r[30]+c->r[5]; // 8016EBFC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016EC00
  c->r[3]=c->r[31]|c->r[31]; // 8016EC04
  c->lr=0x8016EC0Cu; f_80154438(c); // 8016EC08
  c->r[4]=0u+0x80170000u; // 8016EC0C
  c->r[3]=0u+0x00020000u; // 8016EC10
  c->r[4]=c->r[4]+0xFFFFEC34u; // 8016EC14
  c->lr=0x8016EC1Cu; f_80173BFC(c); // 8016EC18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EC1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016EC20
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016EC24
  c->lr=c->r[0]; // 8016EC28
  c->r[1]=c->r[1]+0x00000010u; // 8016EC2C
  return; // 8016EC30
}

// dvd_cbForStateDownRotation
void f_8016EC34(Ctx* __restrict c) {
  trace_call(0x8016EC34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EC34
  c->r[0]=c->lr; // 8016EC38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EC3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EC40
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016EC44
  c->r[30]=c->r[3]|c->r[3]; // 8016EC48
  c->lr=0x8016EC50u; f_80154410(c); // 8016EC4C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EC50
  cmps(c,0,(int32_t)c->r[0],0); // 8016EC54
  if (!crb(c,2)) { goto L_8016EC6C; } // 8016EC58
  c->r[4]=0u+0x80440000u; // 8016EC5C
  c->r[4]=c->r[4]+0x00004C40u; // 8016EC60
  W32(c->r[4]+0x00000078u,c->r[30]); // 8016EC64
  goto L_8016EC88; // 8016EC68
L_8016EC6C:;
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016EC6C
  c->r[5]=0u+0x80440000u; // 8016EC70
  c->r[5]=c->r[5]+0x00004C40u; // 8016EC74
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8016EC78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EC7C
  c->r[4]=c->r[5]+c->r[0]; // 8016EC80
  W32(c->r[4]+0x00000028u,c->r[30]); // 8016EC84
L_8016EC88:;
  c->lr=0x8016EC8Cu; f_80154438(c); // 8016EC88
  cmpu(c,0,c->r[30],0x00000010u); // 8016EC8C
  if (!crb(c,2)) { goto L_8016ECAC; } // 8016EC90
  c->r[3]=0u+0x01230000u; // 8016EC94
  c->r[4]=0u+0x80170000u; // 8016EC98
  c->r[3]=c->r[3]+0x00004568u; // 8016EC9C
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016ECA0
  c->lr=0x8016ECA8u; f_80171B88(c); // 8016ECA4
  goto L_8016EE5C; // 8016ECA8
L_8016ECAC:;
  cmpu(c,0,c->r[30],0x00000020u); // 8016ECAC
  if (!crb(c,2)) { goto L_8016ECCC; } // 8016ECB0
  c->r[3]=0u+0x01230000u; // 8016ECB4
  c->r[4]=0u+0x80170000u; // 8016ECB8
  c->r[3]=c->r[3]+0x00004569u; // 8016ECBC
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016ECC0
  c->lr=0x8016ECC8u; f_80171B88(c); // 8016ECC4
  goto L_8016EE5C; // 8016ECC8
L_8016ECCC:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 8016ECCC
  if (crb(c,2)) { goto L_8016EE40; } // 8016ECD0
  c->r[3]=0u+0x80440000u; // 8016ECD4
  c->r[4]=0u+0x00000020u; // 8016ECD8
  c->r[3]=c->r[3]+0x000049C0u; // 8016ECDC
  c->lr=0x8016ECE4u; f_8014F810(c); // 8016ECE0
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016ECE4
  c->r[3]=0u+0x80170000u; // 8016ECE8
  c->r[3]=c->r[3]+0xFFFFEE74u; // 8016ECEC
  cmpu(c,0,c->r[0],0x00000028u); // 8016ECF0
  W32(c->r[13]+0xFFFFACF4u,c->r[3]); // 8016ECF4
  if (!crb(c,2)) { goto L_8016ED98; } // 8016ECF8
  c->r[4]=0u+0x00000000u; // 8016ECFC
  W32(c->r[13]+0xFFFFAC78u,c->r[4]); // 8016ED00
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016ED04
  cmps(c,0,(int32_t)c->r[0],0); // 8016ED08
  if (crb(c,2)) { goto L_8016ED74; } // 8016ED0C
  c->r[3]=0u+0x80440000u; // 8016ED10
  c->r[30]=R32(c->r[13]+0xFFFFACF0u); // 8016ED14
  c->r[3]=c->r[3]+0x00004920u; // 8016ED18
  W32(c->r[13]+0xFFFFAC74u,c->r[4]); // 8016ED1C
  c->r[0]=0u+0x0000000Au; // 8016ED20
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016ED24
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016ED28
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8016ED2C
  c->r[12]=R32(c->r[30]+0x00000028u); // 8016ED30
  cmps(c,0,(int32_t)c->r[12],0); // 8016ED34
  if (crb(c,2)) { goto L_8016ED4C; } // 8016ED38
  c->r[4]=c->r[30]|c->r[30]; // 8016ED3C
  c->r[3]=0u+0xFFFFFFFDu; // 8016ED40
  c->ctr=c->r[12]; // 8016ED44
  if (true) { c->lr=0x8016ED4Cu; dispatch(c,c->ctr); } // 8016ED48
L_8016ED4C:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016ED4C
  cmps(c,0,(int32_t)c->r[12],0); // 8016ED50
  if (crb(c,2)) { goto L_8016ED68; } // 8016ED54
  c->r[4]=c->r[30]|c->r[30]; // 8016ED58
  c->r[3]=0u+0x00000000u; // 8016ED5C
  c->ctr=c->r[12]; // 8016ED60
  if (true) { c->lr=0x8016ED68u; dispatch(c,c->ctr); } // 8016ED64
L_8016ED68:;
  c->lr=0x8016ED6Cu; f_8016F270(c); // 8016ED68
  c->r[0]=0u+0x00000001u; // 8016ED6C
  goto L_8016ED78; // 8016ED70
L_8016ED74:;
  c->r[0]=0u+0x00000000u; // 8016ED74
L_8016ED78:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016ED78
  if (!crb(c,2)) { goto L_8016EE5C; } // 8016ED7C
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016ED80
  c->r[0]=0u+0x00000001u; // 8016ED84
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016ED88
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016ED8C
  c->lr=0x8016ED94u; f_8016F598(c); // 8016ED90
  goto L_8016EE5C; // 8016ED94
L_8016ED98:;
  c->r[3]=0u+0x00000000u; // 8016ED98
  c->lr=0x8016EDA0u; f_801743B0(c); // 8016ED9C
  c->lr=0x8016EDA4u; f_80154410(c); // 8016EDA0
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EDA4
  c->r[31]=c->r[3]|c->r[3]; // 8016EDA8
  cmpu(c,0,c->r[0],0x00000005u); // 8016EDAC
  if (crb(c,0)) { goto L_8016EDBC; } // 8016EDB0
  c->r[0]=0u+0x00000000u; // 8016EDB4
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016EDB8
L_8016EDBC:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EDBC
  c->r[30]=0u+0x80440000u; // 8016EDC0
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016EDC4
  c->r[30]=c->r[30]+0x00004C40u; // 8016EDC8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EDCC
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EDD0
  c->r[7]=0u+0x00000005u; // 8016EDD4
  c->r[5]=0u+0x00000000u; // 8016EDD8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016EDDC
  c->r[4]=0u+0x00000020u; // 8016EDE0
  c->r[6]=c->r[30]+c->r[6]; // 8016EDE4
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 8016EDE8
  c->r[3]=c->r[30]+c->r[3]; // 8016EDEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EDF0
  W32(c->r[3]+0x00000020u,c->r[5]); // 8016EDF4
  c->r[3]=c->r[30]+c->r[0]; // 8016EDF8
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016EDFC
  c->lr=0x8016EE04u; f_801584A4(c); // 8016EE00
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EE04
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016EE08
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EE0C
  c->r[0]=c->r[4]+0x00000001u; // 8016EE10
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016EE14
  c->r[4]=c->r[30]+c->r[5]; // 8016EE18
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016EE1C
  c->r[3]=c->r[31]|c->r[31]; // 8016EE20
  c->lr=0x8016EE28u; f_80154438(c); // 8016EE24
  c->r[3]=0u+0x80440000u; // 8016EE28
  c->r[4]=0u+0x80170000u; // 8016EE2C
  c->r[3]=c->r[3]+0x000049C0u; // 8016EE30
  c->r[4]=c->r[4]+0xFFFFEFECu; // 8016EE34
  c->lr=0x8016EE3Cu; f_801724F8(c); // 8016EE38
  goto L_8016EE5C; // 8016EE3C
L_8016EE40:;
  c->r[3]=0u+0x00000027u; // 8016EE40
  c->r[4]=0u+0x00000000u; // 8016EE44
  c->r[5]=0u+0x00000000u; // 8016EE48
  c->lr=0x8016EE50u; f_8016C5C0(c); // 8016EE4C
  c->r[3]=0u+0x80170000u; // 8016EE50
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016EE54
  c->lr=0x8016EE5Cu; f_801735E4(c); // 8016EE58
L_8016EE5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EE5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016EE60
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016EE64
  c->lr=c->r[0]; // 8016EE68
  c->r[1]=c->r[1]+0x00000010u; // 8016EE6C
  return; // 8016EE70
}

// dvd_stateCoverClosed_CMD
void f_8016EE74(Ctx* __restrict c) {
  trace_call(0x8016EE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EE74
  c->r[0]=c->lr; // 8016EE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EE7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EE80
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016EE84
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016EE88
  cmpu(c,0,c->r[0],0x00000028u); // 8016EE8C
  if (!crb(c,2)) { goto L_8016EF30; } // 8016EE90
  c->r[4]=0u+0x00000000u; // 8016EE94
  W32(c->r[13]+0xFFFFAC78u,c->r[4]); // 8016EE98
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016EE9C
  cmps(c,0,(int32_t)c->r[0],0); // 8016EEA0
  if (crb(c,2)) { goto L_8016EF0C; } // 8016EEA4
  c->r[3]=0u+0x80440000u; // 8016EEA8
  c->r[30]=R32(c->r[13]+0xFFFFACF0u); // 8016EEAC
  c->r[3]=c->r[3]+0x00004920u; // 8016EEB0
  W32(c->r[13]+0xFFFFAC74u,c->r[4]); // 8016EEB4
  c->r[0]=0u+0x0000000Au; // 8016EEB8
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016EEBC
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016EEC0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8016EEC4
  c->r[12]=R32(c->r[30]+0x00000028u); // 8016EEC8
  cmps(c,0,(int32_t)c->r[12],0); // 8016EECC
  if (crb(c,2)) { goto L_8016EEE4; } // 8016EED0
  c->r[4]=c->r[30]|c->r[30]; // 8016EED4
  c->r[3]=0u+0xFFFFFFFDu; // 8016EED8
  c->ctr=c->r[12]; // 8016EEDC
  if (true) { c->lr=0x8016EEE4u; dispatch(c,c->ctr); } // 8016EEE0
L_8016EEE4:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016EEE4
  cmps(c,0,(int32_t)c->r[12],0); // 8016EEE8
  if (crb(c,2)) { goto L_8016EF00; } // 8016EEEC
  c->r[4]=c->r[30]|c->r[30]; // 8016EEF0
  c->r[3]=0u+0x00000000u; // 8016EEF4
  c->ctr=c->r[12]; // 8016EEF8
  if (true) { c->lr=0x8016EF00u; dispatch(c,c->ctr); } // 8016EEFC
L_8016EF00:;
  c->lr=0x8016EF04u; f_8016F270(c); // 8016EF00
  c->r[0]=0u+0x00000001u; // 8016EF04
  goto L_8016EF10; // 8016EF08
L_8016EF0C:;
  c->r[0]=0u+0x00000000u; // 8016EF0C
L_8016EF10:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016EF10
  if (!crb(c,2)) { goto L_8016EFD4; } // 8016EF14
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016EF18
  c->r[0]=0u+0x00000001u; // 8016EF1C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016EF20
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016EF24
  c->lr=0x8016EF2Cu; f_8016F598(c); // 8016EF28
  goto L_8016EFD4; // 8016EF2C
L_8016EF30:;
  c->r[3]=0u+0x00000000u; // 8016EF30
  c->lr=0x8016EF38u; f_801743B0(c); // 8016EF34
  c->lr=0x8016EF3Cu; f_80154410(c); // 8016EF38
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EF3C
  c->r[31]=c->r[3]|c->r[3]; // 8016EF40
  cmpu(c,0,c->r[0],0x00000005u); // 8016EF44
  if (crb(c,0)) { goto L_8016EF54; } // 8016EF48
  c->r[0]=0u+0x00000000u; // 8016EF4C
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016EF50
L_8016EF54:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EF54
  c->r[30]=0u+0x80440000u; // 8016EF58
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016EF5C
  c->r[30]=c->r[30]+0x00004C40u; // 8016EF60
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EF64
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EF68
  c->r[7]=0u+0x00000005u; // 8016EF6C
  c->r[5]=0u+0x00000000u; // 8016EF70
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016EF74
  c->r[4]=0u+0x00000020u; // 8016EF78
  c->r[6]=c->r[30]+c->r[6]; // 8016EF7C
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 8016EF80
  c->r[3]=c->r[30]+c->r[3]; // 8016EF84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EF88
  W32(c->r[3]+0x00000020u,c->r[5]); // 8016EF8C
  c->r[3]=c->r[30]+c->r[0]; // 8016EF90
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016EF94
  c->lr=0x8016EF9Cu; f_801584A4(c); // 8016EF98
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016EF9C
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016EFA0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016EFA4
  c->r[0]=c->r[4]+0x00000001u; // 8016EFA8
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016EFAC
  c->r[4]=c->r[30]+c->r[5]; // 8016EFB0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016EFB4
  c->r[3]=c->r[31]|c->r[31]; // 8016EFB8
  c->lr=0x8016EFC0u; f_80154438(c); // 8016EFBC
  c->r[3]=0u+0x80440000u; // 8016EFC0
  c->r[4]=0u+0x80170000u; // 8016EFC4
  c->r[3]=c->r[3]+0x000049C0u; // 8016EFC8
  c->r[4]=c->r[4]+0xFFFFEFECu; // 8016EFCC
  c->lr=0x8016EFD4u; f_801724F8(c); // 8016EFD0
L_8016EFD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EFD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016EFD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016EFDC
  c->lr=c->r[0]; // 8016EFE0
  c->r[1]=c->r[1]+0x00000010u; // 8016EFE4
  return; // 8016EFE8
}

// dvd_cbForStateCoverClosed
void f_8016EFEC(Ctx* __restrict c) {
  trace_call(0x8016EFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EFEC
  c->r[0]=c->lr; // 8016EFF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EFF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EFF8
  c->r[31]=c->r[3]|c->r[3]; // 8016EFFC
  c->lr=0x8016F004u; f_80154410(c); // 8016F000
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F004
  cmps(c,0,(int32_t)c->r[0],0); // 8016F008
  if (!crb(c,2)) { goto L_8016F020; } // 8016F00C
  c->r[4]=0u+0x80440000u; // 8016F010
  c->r[4]=c->r[4]+0x00004C40u; // 8016F014
  W32(c->r[4]+0x00000078u,c->r[31]); // 8016F018
  goto L_8016F038; // 8016F01C
L_8016F020:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F020
  c->r[4]=0u+0x80440000u; // 8016F024
  c->r[4]=c->r[4]+0x00004C40u; // 8016F028
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F02C
  c->r[4]=c->r[4]+c->r[0]; // 8016F030
  W32(c->r[4]+0x00000014u,c->r[31]); // 8016F034
L_8016F038:;
  c->lr=0x8016F03Cu; f_80154438(c); // 8016F038
  cmpu(c,0,c->r[31],0x00000010u); // 8016F03C
  if (!crb(c,2)) { goto L_8016F05C; } // 8016F040
  c->r[3]=0u+0x01230000u; // 8016F044
  c->r[4]=0u+0x80170000u; // 8016F048
  c->r[3]=c->r[3]+0x00004568u; // 8016F04C
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016F050
  c->lr=0x8016F058u; f_80171B88(c); // 8016F054
  goto L_8016F0B0; // 8016F058
L_8016F05C:;
  cmpu(c,0,c->r[31],0x00000020u); // 8016F05C
  if (!crb(c,2)) { goto L_8016F07C; } // 8016F060
  c->r[3]=0u+0x01230000u; // 8016F064
  c->r[4]=0u+0x80170000u; // 8016F068
  c->r[3]=c->r[3]+0x00004569u; // 8016F06C
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016F070
  c->lr=0x8016F078u; f_80171B88(c); // 8016F074
  goto L_8016F0B0; // 8016F078
L_8016F07C:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8016F07C
  if (crb(c,2)) { goto L_8016F094; } // 8016F080
  c->r[0]=0u+0x00000000u; // 8016F084
  W32(c->r[13]+0xFFFFAC78u,c->r[0]); // 8016F088
  c->lr=0x8016F090u; f_8016D7DC(c); // 8016F08C
  goto L_8016F0B0; // 8016F090
L_8016F094:;
  c->r[3]=0u+0x00000027u; // 8016F094
  c->r[4]=0u+0x00000000u; // 8016F098
  c->r[5]=0u+0x00000000u; // 8016F09C
  c->lr=0x8016F0A4u; f_8016C5C0(c); // 8016F0A0
  c->r[3]=0u+0x80170000u; // 8016F0A4
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 8016F0A8
  c->lr=0x8016F0B0u; f_801735E4(c); // 8016F0AC
L_8016F0B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F0B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F0B4
  c->lr=c->r[0]; // 8016F0B8
  c->r[1]=c->r[1]+0x00000010u; // 8016F0BC
  return; // 8016F0C0
}

// dvd_cbForPrepareCoverRegister
void f_8016F0C4(Ctx* __restrict c) {
  trace_call(0x8016F0C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F0C4
  c->r[0]=c->lr; // 8016F0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F0CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016F0D0
  c->r[31]=0u+0x00000000u; // 8016F0D4
  W32(c->r[13]+0xFFFFAC94u,c->r[31]); // 8016F0D8
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016F0DC
  cmps(c,0,(int32_t)c->r[0],0); // 8016F0E0
  if (crb(c,2)) { goto L_8016F16C; } // 8016F0E4
  c->lr=0x8016F0ECu; f_801740A8(c); // 8016F0E8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8016F0EC
  if (!crb(c,2)) { goto L_8016F238; } // 8016F0F0
  c->r[3]=0u+0x80440000u; // 8016F0F4
  c->r[3]=c->r[3]+0x00004980u; // 8016F0F8
  c->lr=0x8016F100u; f_8014EB74(c); // 8016F0FC
  W32(c->r[13]+0xFFFFAC88u,c->r[31]); // 8016F100
  W32(c->r[13]+0xFFFFAC88u,c->r[31]); // 8016F104
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016F108
  cmpu(c,0,c->r[0],0x00000003u); // 8016F10C
  if (!crb(c,2)) { goto L_8016F11C; } // 8016F110
  c->r[0]=0u+0x00000001u; // 8016F114
  W32(c->r[13]+0xFFFFAC90u,c->r[0]); // 8016F118
L_8016F11C:;
  c->r[0]=R32(c->r[13]+0xFFFFACD0u); // 8016F11C
  cmpu(c,0,c->r[0],0x00000002u); // 8016F120
  if (!crb(c,2)) { goto L_8016F140; } // 8016F124
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016F128
  cmps(c,0,(int32_t)c->r[3],0); // 8016F12C
  if (crb(c,2)) { goto L_8016F238; } // 8016F130
  c->r[0]=0u+0x0000000Cu; // 8016F134
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F138
  goto L_8016F238; // 8016F13C
L_8016F140:;
  c->lr=0x8016F144u; f_801743A8(c); // 8016F140
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016F144
  cmps(c,0,(int32_t)c->r[3],0); // 8016F148
  if (crb(c,2)) { goto L_8016F160; } // 8016F14C
  c->r[0]=0u+0x00000003u; // 8016F150
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F154
  c->lr=0x8016F15Cu; f_8016E774(c); // 8016F158
  goto L_8016F238; // 8016F15C
L_8016F160:;
  c->r[0]=0u+0x00000007u; // 8016F160
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016F164
  goto L_8016F238; // 8016F168
L_8016F16C:;
  c->lr=0x8016F170u; f_801740A8(c); // 8016F16C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8016F170
  if (crb(c,2)) { goto L_8016F1B0; } // 8016F174
  c->r[0]=R32(c->r[13]+0xFFFFACD0u); // 8016F178
  c->r[3]=0u+0x00000001u; // 8016F17C
  W32(c->r[13]+0xFFFFAC84u,c->r[31]); // 8016F180
  cmpu(c,0,c->r[0],0x00000002u); // 8016F184
  W32(c->r[13]+0xFFFFAC88u,c->r[3]); // 8016F188
  if (!crb(c,2)) { goto L_8016F1A0; } // 8016F18C
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016F190
  c->r[0]=0u+0x0000000Cu; // 8016F194
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F198
  goto L_8016F238; // 8016F19C
L_8016F1A0:;
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016F1A0
  c->r[0]=0u+0x00000005u; // 8016F1A4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F1A8
  goto L_8016F238; // 8016F1AC
L_8016F1B0:;
  c->lr=0x8016F1B4u; f_801740A8(c); // 8016F1B0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8016F1B4
  if (crb(c,2)) { goto L_8016F238; } // 8016F1B8
  c->r[3]=0u+0x80440000u; // 8016F1BC
  c->r[3]=c->r[3]+0x00004980u; // 8016F1C0
  c->lr=0x8016F1C8u; f_8014EB74(c); // 8016F1C4
  W32(c->r[13]+0xFFFFAC84u,c->r[31]); // 8016F1C8
  c->r[3]=0u+0x00000000u; // 8016F1CC
  c->lr=0x8016F1D4u; f_801743B0(c); // 8016F1D0
  W32(c->r[13]+0xFFFFAC88u,c->r[31]); // 8016F1D4
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016F1D8
  cmpu(c,0,c->r[0],0x00000003u); // 8016F1DC
  if (!crb(c,2)) { goto L_8016F1EC; } // 8016F1E0
  c->r[0]=0u+0x00000001u; // 8016F1E4
  W32(c->r[13]+0xFFFFAC90u,c->r[0]); // 8016F1E8
L_8016F1EC:;
  c->r[0]=R32(c->r[13]+0xFFFFACD0u); // 8016F1EC
  cmpu(c,0,c->r[0],0x00000002u); // 8016F1F0
  if (!crb(c,2)) { goto L_8016F210; } // 8016F1F4
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016F1F8
  cmps(c,0,(int32_t)c->r[3],0); // 8016F1FC
  if (crb(c,2)) { goto L_8016F238; } // 8016F200
  c->r[0]=0u+0x0000000Cu; // 8016F204
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F208
  goto L_8016F238; // 8016F20C
L_8016F210:;
  c->lr=0x8016F214u; f_801743A8(c); // 8016F210
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016F214
  cmps(c,0,(int32_t)c->r[3],0); // 8016F218
  if (crb(c,2)) { goto L_8016F230; } // 8016F21C
  c->r[0]=0u+0x00000003u; // 8016F220
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F224
  c->lr=0x8016F22Cu; f_8016E774(c); // 8016F228
  goto L_8016F238; // 8016F22C
L_8016F230:;
  c->r[0]=0u+0x00000007u; // 8016F230
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016F234
L_8016F238:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F238
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F23C
  c->lr=c->r[0]; // 8016F240
  c->r[1]=c->r[1]+0x00000010u; // 8016F244
  return; // 8016F248
}

// CoverAlarmHandler
void f_8016F24C(Ctx* __restrict c) {
  trace_call(0x8016F24Cu);
  c->r[0]=R32(c->r[13]+0xFFFFAC94u); // 8016F24C
  cmps(c,0,(int32_t)c->r[0],0); // 8016F250
  if (!crb(c,2)) return; // 8016F254
  c->r[0]=0u+0x00000001u; // 8016F258
  c->r[3]=0u+0x80170000u; // 8016F25C
  W32(c->r[13]+0xFFFFAC94u,c->r[0]); // 8016F260
  c->r[3]=c->r[3]+0xFFFFF0C4u; // 8016F264
  f_801740C4(c); return; // 8016F268
  return; // 8016F26C
}

// stateReady
void f_8016F270(Ctx* __restrict c) {
  trace_call(0x8016F270u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F270
  c->r[0]=c->lr; // 8016F274
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016F27C
  c->lr=0x8016F284u; f_801711D4(c); // 8016F280
  cmps(c,0,(int32_t)c->r[3],0); // 8016F284
  if (!crb(c,2)) { goto L_8016F298; } // 8016F288
  c->r[0]=0u+0x00000000u; // 8016F28C
  W32(c->r[13]+0xFFFFACF0u,c->r[0]); // 8016F290
  goto L_8016F584; // 8016F294
L_8016F298:;
  c->r[0]=R32(c->r[13]+0xFFFFAC64u); // 8016F298
  cmps(c,0,(int32_t)c->r[0],0); // 8016F29C
  if (crb(c,2)) { goto L_8016F2B8; } // 8016F2A0
  c->r[3]=0u+0x00000001u; // 8016F2A4
  c->r[0]=0u+0x00000000u; // 8016F2A8
  W32(c->r[13]+0xFFFFAC68u,c->r[3]); // 8016F2AC
  W32(c->r[13]+0xFFFFACF0u,c->r[0]); // 8016F2B0
  goto L_8016F584; // 8016F2B4
L_8016F2B8:;
  c->lr=0x8016F2BCu; f_80171134(c); // 8016F2B8
  c->r[0]=R32(c->r[13]+0xFFFFAC6Cu); // 8016F2BC
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016F2C0
  cmps(c,0,(int32_t)c->r[0],0); // 8016F2C4
  if (crb(c,2)) { goto L_8016F304; } // 8016F2C8
  c->r[0]=0u+0xFFFFFFFFu; // 8016F2CC
  c->r[5]=0u+0x80440000u; // 8016F2D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F2D4
  c->r[5]=c->r[5]+0x00004920u; // 8016F2D8
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016F2DC
  W32(c->r[13]+0xFFFFACF0u,c->r[5]); // 8016F2E0
  c->r[12]=R32(c->r[4]+0x00000028u); // 8016F2E4
  cmps(c,0,(int32_t)c->r[12],0); // 8016F2E8
  if (crb(c,2)) { goto L_8016F2FC; } // 8016F2EC
  c->r[3]=0u+0xFFFFFFFFu; // 8016F2F0
  c->ctr=c->r[12]; // 8016F2F4
  if (true) { c->lr=0x8016F2FCu; dispatch(c,c->ctr); } // 8016F2F8
L_8016F2FC:;
  c->lr=0x8016F300u; f_8016F270(c); // 8016F2FC
  goto L_8016F584; // 8016F300
L_8016F304:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016F304
  W32(c->r[13]+0xFFFFACE4u,c->r[0]); // 8016F308
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016F30C
  cmpu(c,0,c->r[0],0x00000020u); // 8016F310
  if (crb(c,2)) { goto L_8016F330; } // 8016F314
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016F318
  cmpu(c,0,c->r[0],0x0000000Eu); // 8016F31C
  if (crb(c,2)) { goto L_8016F330; } // 8016F320
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016F324
  cmpu(c,0,c->r[0],0x00000023u); // 8016F328
  if (!crb(c,2)) { goto L_8016F338; } // 8016F32C
L_8016F330:;
  c->r[0]=0u+0x00000000u; // 8016F330
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016F334
L_8016F338:;
  c->r[0]=R32(c->r[13]+0xFFFFAC74u); // 8016F338
  cmps(c,0,(int32_t)c->r[0],0); // 8016F33C
  if (crb(c,2)) { goto L_8016F520; } // 8016F340
  c->r[0]=R32(c->r[13]+0xFFFFAC74u); // 8016F344
  cmps(c,0,(int32_t)c->r[0],4); // 8016F348
  if (crb(c,2)) { goto L_8016F478; } // 8016F34C
  if (!crb(c,0)) { goto L_8016F36C; } // 8016F350
  cmps(c,0,(int32_t)c->r[0],2); // 8016F354
  if (crb(c,2)) { goto L_8016F380; } // 8016F358
  if (!crb(c,0)) { goto L_8016F3FC; } // 8016F35C
  cmps(c,0,(int32_t)c->r[0],1); // 8016F360
  if (!crb(c,0)) { goto L_8016F4F4; } // 8016F364
  goto L_8016F514; // 8016F368
L_8016F36C:;
  cmps(c,0,(int32_t)c->r[0],8); // 8016F36C
  if (!crb(c,0)) { goto L_8016F514; } // 8016F370
  cmps(c,0,(int32_t)c->r[0],6); // 8016F374
  if (!crb(c,0)) { goto L_8016F4F4; } // 8016F378
  goto L_8016F504; // 8016F37C
L_8016F380:;
  c->r[0]=0u+0x0000000Bu; // 8016F380
  c->r[4]=0u+0x00000001u; // 8016F384
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F388
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016F38C
  W32(c->r[13]+0xFFFFACD0u,c->r[4]); // 8016F390
  cmps(c,0,(int32_t)c->r[0],0); // 8016F394
  if (!crb(c,2)) { goto L_8016F514; } // 8016F398
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016F39C
  cmps(c,0,(int32_t)c->r[0],0); // 8016F3A0
  if (!crb(c,2)) { goto L_8016F514; } // 8016F3A4
  c->r[31]=0u+0x80440000u; // 8016F3A8
  W32(c->r[13]+0xFFFFAC84u,c->r[4]); // 8016F3AC
  c->r[3]=c->r[31]+0x00004980u; // 8016F3B0
  c->lr=0x8016F3B8u; f_8014E820(c); // 8016F3B4
  c->lr=0x8016F3BCu; f_801584A4(c); // 8016F3B8
  c->r[5]=0u+0x80000000u; // 8016F3BC
  c->r[4]=0u+0x10620000u; // 8016F3C0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016F3C4
  c->r[9]=0u+0x80170000u; // 8016F3C8
  c->r[6]=c->r[3]|c->r[3]; // 8016F3CC
  c->r[4]=c->r[4]+0x00004DD3u; // 8016F3D0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016F3D4
  c->r[3]=c->r[31]+0x00004980u; // 8016F3D8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016F3DC
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016F3E0
  c->r[5]=0u+0x00000000u; // 8016F3E4
  c->r[7]=0u+0x00000000u; // 8016F3E8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016F3EC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016F3F0
  c->lr=0x8016F3F8u; f_8014EAF0(c); // 8016F3F4
  goto L_8016F514; // 8016F3F8
L_8016F3FC:;
  c->r[0]=0u+0x00000004u; // 8016F3FC
  c->r[4]=0u+0x00000001u; // 8016F400
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F404
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016F408
  W32(c->r[13]+0xFFFFACD0u,c->r[4]); // 8016F40C
  cmps(c,0,(int32_t)c->r[0],0); // 8016F410
  if (!crb(c,2)) { goto L_8016F514; } // 8016F414
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016F418
  cmps(c,0,(int32_t)c->r[0],0); // 8016F41C
  if (!crb(c,2)) { goto L_8016F514; } // 8016F420
  c->r[31]=0u+0x80440000u; // 8016F424
  W32(c->r[13]+0xFFFFAC84u,c->r[4]); // 8016F428
  c->r[3]=c->r[31]+0x00004980u; // 8016F42C
  c->lr=0x8016F434u; f_8014E820(c); // 8016F430
  c->lr=0x8016F438u; f_801584A4(c); // 8016F434
  c->r[5]=0u+0x80000000u; // 8016F438
  c->r[4]=0u+0x10620000u; // 8016F43C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016F440
  c->r[9]=0u+0x80170000u; // 8016F444
  c->r[6]=c->r[3]|c->r[3]; // 8016F448
  c->r[4]=c->r[4]+0x00004DD3u; // 8016F44C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016F450
  c->r[3]=c->r[31]+0x00004980u; // 8016F454
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016F458
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016F45C
  c->r[5]=0u+0x00000000u; // 8016F460
  c->r[7]=0u+0x00000000u; // 8016F464
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016F468
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016F46C
  c->lr=0x8016F474u; f_8014EAF0(c); // 8016F470
  goto L_8016F514; // 8016F474
L_8016F478:;
  c->r[0]=0u+0x00000005u; // 8016F478
  c->r[4]=0u+0x00000001u; // 8016F47C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F480
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016F484
  W32(c->r[13]+0xFFFFACD0u,c->r[4]); // 8016F488
  cmps(c,0,(int32_t)c->r[0],0); // 8016F48C
  if (!crb(c,2)) { goto L_8016F514; } // 8016F490
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016F494
  cmps(c,0,(int32_t)c->r[0],0); // 8016F498
  if (!crb(c,2)) { goto L_8016F514; } // 8016F49C
  c->r[31]=0u+0x80440000u; // 8016F4A0
  W32(c->r[13]+0xFFFFAC84u,c->r[4]); // 8016F4A4
  c->r[3]=c->r[31]+0x00004980u; // 8016F4A8
  c->lr=0x8016F4B0u; f_8014E820(c); // 8016F4AC
  c->lr=0x8016F4B4u; f_801584A4(c); // 8016F4B0
  c->r[5]=0u+0x80000000u; // 8016F4B4
  c->r[4]=0u+0x10620000u; // 8016F4B8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016F4BC
  c->r[9]=0u+0x80170000u; // 8016F4C0
  c->r[6]=c->r[3]|c->r[3]; // 8016F4C4
  c->r[4]=c->r[4]+0x00004DD3u; // 8016F4C8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016F4CC
  c->r[3]=c->r[31]+0x00004980u; // 8016F4D0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016F4D4
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016F4D8
  c->r[5]=0u+0x00000000u; // 8016F4DC
  c->r[7]=0u+0x00000000u; // 8016F4E0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016F4E4
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016F4E8
  c->lr=0x8016F4F0u; f_8014EAF0(c); // 8016F4EC
  goto L_8016F514; // 8016F4F0
L_8016F4F4:;
  c->r[0]=0u+0x00000003u; // 8016F4F4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F4F8
  c->lr=0x8016F500u; f_8016E774(c); // 8016F4FC
  goto L_8016F514; // 8016F500
L_8016F504:;
  c->r[4]=0u+0x80170000u; // 8016F504
  c->r[3]=R32(c->r[13]+0xFFFFACDCu); // 8016F508
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016F50C
  c->lr=0x8016F514u; f_80171B88(c); // 8016F510
L_8016F514:;
  c->r[0]=0u+0x00000000u; // 8016F514
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016F518
  goto L_8016F584; // 8016F51C
L_8016F520:;
  c->r[0]=R32(c->r[13]+0xFFFFACD0u); // 8016F520
  cmps(c,0,(int32_t)c->r[0],1); // 8016F524
  if (crb(c,2)) { goto L_8016F580; } // 8016F528
  if (!crb(c,0)) { goto L_8016F53C; } // 8016F52C
  cmps(c,0,(int32_t)c->r[0],0); // 8016F530
  if (!crb(c,0)) { goto L_8016F56C; } // 8016F534
  goto L_8016F580; // 8016F538
L_8016F53C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8016F53C
  if (!crb(c,0)) { goto L_8016F580; } // 8016F540
  c->r[0]=R32(c->r[13]+0xFFFFAC8Cu); // 8016F544
  cmps(c,0,(int32_t)c->r[0],0); // 8016F548
  if (crb(c,2)) { goto L_8016F55C; } // 8016F54C
  c->r[0]=0u+0x0000000Cu; // 8016F550
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F554
  goto L_8016F584; // 8016F558
L_8016F55C:;
  c->r[0]=0u+0x00000003u; // 8016F55C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F560
  c->lr=0x8016F568u; f_8016E774(c); // 8016F564
  goto L_8016F584; // 8016F568
L_8016F56C:;
  c->r[0]=0u+0x00000001u; // 8016F56C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016F570
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016F574
  c->lr=0x8016F57Cu; f_8016F598(c); // 8016F578
  goto L_8016F584; // 8016F57C
L_8016F580:;
  c->lr=0x8016F584u; f_8016E774(c); // 8016F580
L_8016F584:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F588
  c->lr=c->r[0]; // 8016F58C
  c->r[1]=c->r[1]+0x00000010u; // 8016F590
  return; // 8016F594
}

// stateBusy
void f_8016F598(Ctx* __restrict c) {
  trace_call(0x8016F598u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F598
  c->r[0]=c->lr; // 8016F59C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016F5A0
  c->r[11]=c->r[1]+0x00000030u; // 8016F5A4
  c->lr=0x8016F5ACu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8016F5A8
  c->r[4]=0u+0x80170000u; // 8016F5AC
  c->r[29]=c->r[3]|c->r[3]; // 8016F5B0
  c->r[4]=c->r[4]+0xFFFFF598u; // 8016F5B4
  W32(c->r[13]+0xFFFFACF4u,c->r[4]); // 8016F5B8
  c->r[30]=R32(c->r[3]+0x00000008u); // 8016F5BC
  cmpu(c,0,c->r[30],0x0000002Au); // 8016F5C0
  if (crb(c,1)) { goto L_8016F664; } // 8016F5C4
  c->r[4]=0u+0x802D0000u; // 8016F5C8
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8016F5CC
  c->r[4]=c->r[4]+0x00005C94u; // 8016F5D0
  c->r[4]=R32(c->r[4]+c->r[0]); // 8016F5D4
  c->ctr=c->r[4]; // 8016F5D8
  if (true) { switch (c->ctr) { case 0x8016F5E0u: goto L_8016F5E0; case 0x8016F664u: goto L_8016F664; case 0x8016F688u: goto L_8016F688; case 0x8016F6ACu: goto L_8016F6AC; case 0x8016F7D4u: goto L_8016F7D4; case 0x8016F7F0u: goto L_8016F7F0; case 0x8016F808u: goto L_8016F808; case 0x8016F820u: goto L_8016F820; case 0x8016F840u: goto L_8016F840; case 0x8016F864u: goto L_8016F864; case 0x8016F884u: goto L_8016F884; case 0x8016F89Cu: goto L_8016F89C; case 0x8016F9C4u: goto L_8016F9C4; case 0x8016F9F0u: goto L_8016F9F0; case 0x8016FA08u: goto L_8016FA08; case 0x8016FA18u: goto L_8016FA18; case 0x8016FA28u: goto L_8016FA28; case 0x8016FA44u: goto L_8016FA44; case 0x8016FA70u: goto L_8016FA70; case 0x8016FAE4u: goto L_8016FAE4; case 0x8016FB18u: goto L_8016FB18; default: break; } dispatch(c,c->ctr); return; } // 8016F5DC
L_8016F5E0:;
  c->r[26]=R32(c->r[3]+0x00000014u); // 8016F5E0
  c->r[27]=R32(c->r[3]+0x00000010u); // 8016F5E4
  c->lr=0x8016F5ECu; f_80154410(c); // 8016F5E8
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F5EC
  c->r[31]=c->r[3]|c->r[3]; // 8016F5F0
  cmpu(c,0,c->r[0],0x00000005u); // 8016F5F4
  if (crb(c,0)) { goto L_8016F604; } // 8016F5F8
  c->r[0]=0u+0x00000000u; // 8016F5FC
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016F600
L_8016F604:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F604
  c->r[28]=0u+0x80440000u; // 8016F608
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016F60C
  c->r[28]=c->r[28]+0x00004C40u; // 8016F610
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F614
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F618
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016F61C
  c->r[4]=c->r[28]+c->r[4]; // 8016F620
  W32(c->r[4]+0x0000001Cu,c->r[30]); // 8016F624
  c->r[3]=c->r[28]+c->r[3]; // 8016F628
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F62C
  W32(c->r[3]+0x00000020u,c->r[27]); // 8016F630
  c->r[3]=c->r[28]+c->r[0]; // 8016F634
  W32(c->r[3]+0x00000024u,c->r[26]); // 8016F638
  c->lr=0x8016F640u; f_801584A4(c); // 8016F63C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F640
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016F644
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F648
  c->r[0]=c->r[4]+0x00000001u; // 8016F64C
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016F650
  c->r[4]=c->r[28]+c->r[5]; // 8016F654
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016F658
  c->r[3]=c->r[31]|c->r[31]; // 8016F65C
  c->lr=0x8016F664u; f_80154438(c); // 8016F660
L_8016F664:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8016F664
  cmpu(c,0,c->r[0],0x0000002Au); // 8016F668
  if (crb(c,1)) { goto L_8016FB18; } // 8016F66C
  c->r[3]=0u+0x802D0000u; // 8016F670
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016F674
  c->r[3]=c->r[3]+0x00005BE8u; // 8016F678
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016F67C
  c->ctr=c->r[3]; // 8016F680
  if (true) { switch (c->ctr) { case 0x8016F5E0u: goto L_8016F5E0; case 0x8016F664u: goto L_8016F664; case 0x8016F688u: goto L_8016F688; case 0x8016F6ACu: goto L_8016F6AC; case 0x8016F7D4u: goto L_8016F7D4; case 0x8016F7F0u: goto L_8016F7F0; case 0x8016F808u: goto L_8016F808; case 0x8016F820u: goto L_8016F820; case 0x8016F840u: goto L_8016F840; case 0x8016F864u: goto L_8016F864; case 0x8016F884u: goto L_8016F884; case 0x8016F89Cu: goto L_8016F89C; case 0x8016F9C4u: goto L_8016F9C4; case 0x8016F9F0u: goto L_8016F9F0; case 0x8016FA08u: goto L_8016FA08; case 0x8016FA18u: goto L_8016FA18; case 0x8016FA28u: goto L_8016FA28; case 0x8016FA44u: goto L_8016FA44; case 0x8016FA70u: goto L_8016FA70; case 0x8016FAE4u: goto L_8016FAE4; case 0x8016FB18u: goto L_8016FB18; default: break; } dispatch(c,c->ctr); return; } // 8016F684
L_8016F688:;
  c->r[3]=0u+0x00000000u; // 8016F688
  c->lr=0x8016F690u; f_801743B0(c); // 8016F68C
  c->r[0]=0u+0x00000020u; // 8016F690
  c->r[4]=0u+0x80170000u; // 8016F694
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8016F698
  c->r[4]=c->r[4]+0xFFFFFB48u; // 8016F69C
  c->r[3]=R32(c->r[29]+0x00000018u); // 8016F6A0
  c->lr=0x8016F6A8u; f_801724F8(c); // 8016F6A4
  goto L_8016FB30; // 8016F6A8
L_8016F6AC:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 8016F6AC
  cmps(c,0,(int32_t)c->r[0],0); // 8016F6B0
  if (!crb(c,2)) { goto L_8016F6F0; } // 8016F6B4
  c->r[3]=0u+0x80440000u; // 8016F6B8
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016F6BC
  c->r[3]=c->r[3]+0x00004920u; // 8016F6C0
  c->r[0]=0u+0x00000000u; // 8016F6C4
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016F6C8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016F6CC
  c->r[12]=R32(c->r[4]+0x00000028u); // 8016F6D0
  cmps(c,0,(int32_t)c->r[12],0); // 8016F6D4
  if (crb(c,2)) { goto L_8016F6E8; } // 8016F6D8
  c->r[3]=0u+0x00000000u; // 8016F6DC
  c->ctr=c->r[12]; // 8016F6E0
  if (true) { c->lr=0x8016F6E8u; dispatch(c,c->ctr); } // 8016F6E4
L_8016F6E8:;
  c->lr=0x8016F6ECu; f_8016F270(c); // 8016F6E8
  goto L_8016FB30; // 8016F6EC
L_8016F6F0:;
  c->r[3]=0u+0x00000000u; // 8016F6F0
  c->lr=0x8016F6F8u; f_801743B0(c); // 8016F6F4
  c->r[4]=R32(c->r[29]+0x00000020u); // 8016F6F8
  c->r[0]=0u+0x00080000u; // 8016F6FC
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016F700
  c->r[30]=c->r[3]-c->r[4]; // 8016F704
  cmpu(c,0,c->r[30],c->r[0]); // 8016F708
  if (!crb(c,1)) { goto L_8016F714; } // 8016F70C
  c->r[30]=0u+0x00080000u; // 8016F710
L_8016F714:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 8016F714
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016F718
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016F71C
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 8016F720
  c->r[26]=R32(c->r[29]+0x00000008u); // 8016F724
  c->r[27]=c->r[3]+c->r[0]; // 8016F728
  c->lr=0x8016F730u; f_80154410(c); // 8016F72C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F730
  c->r[31]=c->r[3]|c->r[3]; // 8016F734
  cmpu(c,0,c->r[0],0x00000005u); // 8016F738
  if (crb(c,0)) { goto L_8016F748; } // 8016F73C
  c->r[0]=0u+0x00000000u; // 8016F740
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016F744
L_8016F748:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F748
  c->r[28]=0u+0x80440000u; // 8016F74C
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016F750
  c->r[28]=c->r[28]+0x00004C40u; // 8016F754
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F758
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F75C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016F760
  c->r[4]=c->r[28]+c->r[4]; // 8016F764
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 8016F768
  c->r[3]=c->r[28]+c->r[3]; // 8016F76C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F770
  W32(c->r[3]+0x00000020u,c->r[27]); // 8016F774
  c->r[3]=c->r[28]+c->r[0]; // 8016F778
  W32(c->r[3]+0x00000024u,c->r[30]); // 8016F77C
  c->lr=0x8016F784u; f_801584A4(c); // 8016F780
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F784
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016F788
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F78C
  c->r[0]=c->r[4]+0x00000001u; // 8016F790
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016F794
  c->r[4]=c->r[28]+c->r[5]; // 8016F798
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016F79C
  c->r[3]=c->r[31]|c->r[31]; // 8016F7A0
  c->lr=0x8016F7A8u; f_80154438(c); // 8016F7A4
  c->r[3]=R32(c->r[29]+0x00000020u); // 8016F7A8
  c->r[6]=0u+0x80170000u; // 8016F7AC
  c->r[7]=R32(c->r[29]+0x00000018u); // 8016F7B0
  c->r[6]=c->r[6]+0xFFFFFB48u; // 8016F7B4
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 8016F7B8
  c->r[5]=R32(c->r[29]+0x00000010u); // 8016F7BC
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 8016F7C0
  c->r[3]=c->r[7]+c->r[3]; // 8016F7C4
  c->r[5]=c->r[5]+c->r[0]; // 8016F7C8
  c->lr=0x8016F7D0u; f_80173D7C(c); // 8016F7CC
  goto L_8016FB30; // 8016F7D0
L_8016F7D4:;
  c->r[3]=0u+0x00000000u; // 8016F7D4
  c->lr=0x8016F7DCu; f_801743B0(c); // 8016F7D8
  c->r[4]=0u+0x80170000u; // 8016F7DC
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016F7E0
  c->r[4]=c->r[4]+0xFFFFFB48u; // 8016F7E4
  c->lr=0x8016F7ECu; f_80173F2C(c); // 8016F7E8
  goto L_8016FB30; // 8016F7EC
L_8016F7F0:;
  c->r[5]=0u+0x80170000u; // 8016F7F0
  c->r[3]=0u+0x00000000u; // 8016F7F4
  c->r[5]=c->r[5]+0xFFFFFB48u; // 8016F7F8
  c->r[4]=0u+0x00000000u; // 8016F7FC
  c->lr=0x8016F804u; f_801732E8(c); // 8016F800
  goto L_8016FB30; // 8016F804
L_8016F808:;
  c->r[5]=0u+0x80170000u; // 8016F808
  c->r[3]=0u+0x00000000u; // 8016F80C
  c->r[5]=c->r[5]+0xFFFFFB48u; // 8016F810
  c->r[4]=0u+0x00000000u; // 8016F814
  c->lr=0x8016F81Cu; f_801732E8(c); // 8016F818
  goto L_8016FB30; // 8016F81C
L_8016F820:;
  c->r[3]=0u+0x00000000u; // 8016F820
  c->lr=0x8016F828u; f_801743B0(c); // 8016F824
  c->r[5]=0u+0x80170000u; // 8016F828
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016F82C
  c->r[4]=R32(c->r[29]+0x00000014u); // 8016F830
  c->r[5]=c->r[5]+0xFFFFFB48u; // 8016F834
  c->lr=0x8016F83Cu; f_801738D4(c); // 8016F838
  goto L_8016FB30; // 8016F83C
L_8016F840:;
  c->r[3]=0u+0x00000000u; // 8016F840
  c->lr=0x8016F848u; f_801743B0(c); // 8016F844
  c->r[0]=0u+0x00000020u; // 8016F848
  c->r[4]=0u+0x80170000u; // 8016F84C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8016F850
  c->r[4]=c->r[4]+0xFFFFFB48u; // 8016F854
  c->r[3]=R32(c->r[29]+0x00000018u); // 8016F858
  c->lr=0x8016F860u; f_8017347C(c); // 8016F85C
  goto L_8016FB30; // 8016F860
L_8016F864:;
  c->r[3]=0u+0x00000000u; // 8016F864
  c->lr=0x8016F86Cu; f_801743B0(c); // 8016F868
  c->r[5]=0u+0x80170000u; // 8016F86C
  c->r[3]=0u+0x00000000u; // 8016F870
  c->r[5]=c->r[5]+0xFFFFFB48u; // 8016F874
  c->r[4]=0u+0x00000000u; // 8016F878
  c->lr=0x8016F880u; f_801732E8(c); // 8016F87C
  goto L_8016FB30; // 8016F880
L_8016F884:;
  c->r[3]=0u+0x00000001u; // 8016F884
  c->lr=0x8016F88Cu; f_8017374C(c); // 8016F888
  c->r[3]=0u+0x80170000u; // 8016F88C
  c->r[3]=c->r[3]+0xFFFFFB48u; // 8016F890
  c->lr=0x8016F898u; f_80173758(c); // 8016F894
  goto L_8016FB30; // 8016F898
L_8016F89C:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 8016F89C
  cmps(c,0,(int32_t)c->r[0],0); // 8016F8A0
  if (!crb(c,2)) { goto L_8016F8E0; } // 8016F8A4
  c->r[3]=0u+0x80440000u; // 8016F8A8
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016F8AC
  c->r[3]=c->r[3]+0x00004920u; // 8016F8B0
  c->r[0]=0u+0x00000000u; // 8016F8B4
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016F8B8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016F8BC
  c->r[12]=R32(c->r[4]+0x00000028u); // 8016F8C0
  cmps(c,0,(int32_t)c->r[12],0); // 8016F8C4
  if (crb(c,2)) { goto L_8016F8D8; } // 8016F8C8
  c->r[3]=0u+0x00000000u; // 8016F8CC
  c->ctr=c->r[12]; // 8016F8D0
  if (true) { c->lr=0x8016F8D8u; dispatch(c,c->ctr); } // 8016F8D4
L_8016F8D8:;
  c->lr=0x8016F8DCu; f_8016F270(c); // 8016F8D8
  goto L_8016FB30; // 8016F8DC
L_8016F8E0:;
  c->r[3]=0u+0x00000000u; // 8016F8E0
  c->lr=0x8016F8E8u; f_801743B0(c); // 8016F8E4
  c->r[4]=R32(c->r[29]+0x00000020u); // 8016F8E8
  c->r[0]=0u+0x00080000u; // 8016F8EC
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016F8F0
  c->r[30]=c->r[3]-c->r[4]; // 8016F8F4
  cmpu(c,0,c->r[30],c->r[0]); // 8016F8F8
  if (!crb(c,1)) { goto L_8016F904; } // 8016F8FC
  c->r[30]=0u+0x00080000u; // 8016F900
L_8016F904:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 8016F904
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016F908
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016F90C
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 8016F910
  c->r[26]=R32(c->r[29]+0x00000008u); // 8016F914
  c->r[27]=c->r[3]+c->r[0]; // 8016F918
  c->lr=0x8016F920u; f_80154410(c); // 8016F91C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F920
  c->r[31]=c->r[3]|c->r[3]; // 8016F924
  cmpu(c,0,c->r[0],0x00000005u); // 8016F928
  if (crb(c,0)) { goto L_8016F938; } // 8016F92C
  c->r[0]=0u+0x00000000u; // 8016F930
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016F934
L_8016F938:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F938
  c->r[28]=0u+0x80440000u; // 8016F93C
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 8016F940
  c->r[28]=c->r[28]+0x00004C40u; // 8016F944
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F948
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F94C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8016F950
  c->r[4]=c->r[28]+c->r[4]; // 8016F954
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 8016F958
  c->r[3]=c->r[28]+c->r[3]; // 8016F95C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F960
  W32(c->r[3]+0x00000020u,c->r[27]); // 8016F964
  c->r[3]=c->r[28]+c->r[0]; // 8016F968
  W32(c->r[3]+0x00000024u,c->r[30]); // 8016F96C
  c->lr=0x8016F974u; f_801584A4(c); // 8016F970
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016F974
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016F978
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F97C
  c->r[0]=c->r[4]+0x00000001u; // 8016F980
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8016F984
  c->r[4]=c->r[28]+c->r[5]; // 8016F988
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8016F98C
  c->r[3]=c->r[31]|c->r[31]; // 8016F990
  c->lr=0x8016F998u; f_80154438(c); // 8016F994
  c->r[3]=R32(c->r[29]+0x00000020u); // 8016F998
  c->r[6]=0u+0x80170000u; // 8016F99C
  c->r[7]=R32(c->r[29]+0x00000018u); // 8016F9A0
  c->r[6]=c->r[6]+0xFFFFFB48u; // 8016F9A4
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 8016F9A8
  c->r[5]=R32(c->r[29]+0x00000010u); // 8016F9AC
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 8016F9B0
  c->r[3]=c->r[7]+c->r[3]; // 8016F9B4
  c->r[5]=c->r[5]+c->r[0]; // 8016F9B8
  c->lr=0x8016F9C0u; f_80173154(c); // 8016F9BC
  goto L_8016FB30; // 8016F9C0
L_8016F9C4:;
  c->r[3]=0u+0x00000000u; // 8016F9C4
  c->lr=0x8016F9CCu; f_801743B0(c); // 8016F9C8
  c->r[8]=0u+0x80170000u; // 8016F9CC
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016F9D0
  c->r[7]=R32(c->r[29]+0x00000018u); // 8016F9D4
  c->r[8]=c->r[8]+0xFFFFFB48u; // 8016F9D8
  c->r[4]=0u+0x00000000u; // 8016F9DC
  c->r[5]=0u+0x00000000u; // 8016F9E0
  c->r[6]=0u+0x00000000u; // 8016F9E4
  c->lr=0x8016F9ECu; f_80172680(c); // 8016F9E8
  goto L_8016FB30; // 8016F9EC
L_8016F9F0:;
  c->r[3]=0u+0x00000000u; // 8016F9F0
  c->lr=0x8016F9F8u; f_801743B0(c); // 8016F9F4
  c->r[3]=0u+0x80170000u; // 8016F9F8
  c->r[3]=c->r[3]+0xFFFFFB48u; // 8016F9FC
  c->lr=0x8016FA04u; f_80172FF0(c); // 8016FA00
  goto L_8016FB30; // 8016FA04
L_8016FA08:;
  c->r[3]=0u+0x80170000u; // 8016FA08
  c->r[3]=c->r[3]+0xFFFFFB48u; // 8016FA0C
  c->lr=0x8016FA14u; f_801740C4(c); // 8016FA10
  goto L_8016FB30; // 8016FA14
L_8016FA18:;
  c->r[3]=0u+0x80170000u; // 8016FA18
  c->r[3]=c->r[3]+0xFFFFFB48u; // 8016FA1C
  c->lr=0x8016FA24u; f_801740C4(c); // 8016FA20
  goto L_8016FB30; // 8016FA24
L_8016FA28:;
  c->r[3]=0u+0x00000000u; // 8016FA28
  c->lr=0x8016FA30u; f_801743B0(c); // 8016FA2C
  c->r[4]=0u+0x80170000u; // 8016FA30
  c->r[3]=0u+0x00020000u; // 8016FA34
  c->r[4]=c->r[4]+0xFFFFFB48u; // 8016FA38
  c->lr=0x8016FA40u; f_80173BFC(c); // 8016FA3C
  goto L_8016FB30; // 8016FA40
L_8016FA44:;
  c->r[3]=0u+0x00000000u; // 8016FA44
  c->lr=0x8016FA4Cu; f_801743B0(c); // 8016FA48
  c->r[3]=0u+0x80440000u; // 8016FA4C
  c->r[0]=0u+0x00000020u; // 8016FA50
  c->r[3]=c->r[3]+0x000049C0u; // 8016FA54
  c->r[4]=0u+0x80170000u; // 8016FA58
  W32(c->r[29]+0x00000018u,c->r[3]); // 8016FA5C
  c->r[4]=c->r[4]+0xFFFFFB48u; // 8016FA60
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8016FA64
  c->lr=0x8016FA6Cu; f_801724F8(c); // 8016FA68
  goto L_8016FB30; // 8016FA6C
L_8016FA70:;
  c->r[3]=0u+0x00000000u; // 8016FA70
  c->lr=0x8016FA78u; f_801743B0(c); // 8016FA74
  c->r[10]=R32(c->r[29]+0x00000018u); // 8016FA78
  c->r[0]=R32(c->r[10]+0x000003A0u); // 8016FA7C
  cmps(c,0,(int32_t)c->r[0],0); // 8016FA80
  if (!crb(c,2)) { goto L_8016FAB0; } // 8016FA84
  c->r[0]=R32(c->r[10]+0x00004DC0u); // 8016FA88
  cmps(c,0,(int32_t)c->r[0],0); // 8016FA8C
  if (!crb(c,2)) { goto L_8016FAB0; } // 8016FA90
  c->r[6]=0u+0x80170000u; // 8016FA94
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016FA98
  c->r[4]=c->r[10]+0x000003A0u; // 8016FA9C
  c->r[5]=c->r[10]+0x00004DC0u; // 8016FAA0
  c->r[6]=c->r[6]+0xFFFFFB48u; // 8016FAA4
  c->lr=0x8016FAACu; f_80172B4C(c); // 8016FAA8
  goto L_8016FB30; // 8016FAAC
L_8016FAB0:;
  c->r[3]=0u+0x80170000u; // 8016FAB0
  c->r[4]=c->r[10]|c->r[10]; // 8016FAB4
  c->r[3]=c->r[3]+0xFFFFFB48u; // 8016FAB8
  c->r[5]=c->r[10]+0x000003A0u; // 8016FABC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8016FAC0
  c->r[6]=c->r[10]+0x000003C0u; // 8016FAC4
  c->r[7]=c->r[10]+0x00004DC0u; // 8016FAC8
  c->r[8]=c->r[10]+0x00004DE0u; // 8016FACC
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016FAD0
  c->r[9]=c->r[10]+0x00005DE0u; // 8016FAD4
  c->r[10]=c->r[10]+0x00005E00u; // 8016FAD8
  c->lr=0x8016FAE0u; f_80172D58(c); // 8016FADC
  goto L_8016FB30; // 8016FAE0
L_8016FAE4:;
  c->r[3]=0u+0x00000000u; // 8016FAE4
  c->lr=0x8016FAECu; f_801743B0(c); // 8016FAE8
  c->r[8]=R32(c->r[29]+0x00000018u); // 8016FAEC
  c->r[9]=0u+0x80170000u; // 8016FAF0
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016FAF4
  c->r[9]=c->r[9]+0xFFFFFB48u; // 8016FAF8
  c->r[5]=R32(c->r[8]+0x000003A0u); // 8016FAFC
  c->r[4]=c->r[8]+0x000002C0u; // 8016FB00
  c->r[7]=R32(c->r[8]+0x00004DC0u); // 8016FB04
  c->r[6]=c->r[8]+0x000003C0u; // 8016FB08
  c->r[8]=c->r[8]+0x00004DE0u; // 8016FB0C
  c->lr=0x8016FB14u; f_801728E8(c); // 8016FB10
  goto L_8016FB30; // 8016FB14
L_8016FB18:;
  c->r[12]=R32(c->r[13]+0xFFFF90E8u); // 8016FB18
  c->r[4]=0u+0x80170000u; // 8016FB1C
  c->r[3]=c->r[29]|c->r[29]; // 8016FB20
  c->r[4]=c->r[4]+0xFFFFFB48u; // 8016FB24
  c->ctr=c->r[12]; // 8016FB28
  if (true) { c->lr=0x8016FB30u; dispatch(c,c->ctr); } // 8016FB2C
L_8016FB30:;
  c->r[11]=c->r[1]+0x00000030u; // 8016FB30
  c->lr=0x8016FB38u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8016FB34
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016FB38
  c->lr=c->r[0]; // 8016FB3C
  c->r[1]=c->r[1]+0x00000030u; // 8016FB40
  return; // 8016FB44
}

// dvd_cbForStateBusy
void f_8016FB48(Ctx* __restrict c) {
  trace_call(0x8016FB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FB48
  c->r[0]=c->lr; // 8016FB4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016FB50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016FB54
  c->r[31]=c->r[3]|c->r[3]; // 8016FB58
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016FB5C
  c->r[30]=0u+0x80440000u; // 8016FB60
  c->r[30]=c->r[30]+0xFFFFFE00u; // 8016FB64
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016FB68
  c->lr=0x8016FB70u; f_80154410(c); // 8016FB6C
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 8016FB70
  cmps(c,0,(int32_t)c->r[0],0); // 8016FB74
  if (!crb(c,2)) { goto L_8016FB8C; } // 8016FB78
  c->r[4]=0u+0x80440000u; // 8016FB7C
  c->r[4]=c->r[4]+0x00004C40u; // 8016FB80
  W32(c->r[4]+0x00000078u,c->r[31]); // 8016FB84
  goto L_8016FBA8; // 8016FB88
L_8016FB8C:;
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 8016FB8C
  c->r[5]=0u+0x80440000u; // 8016FB90
  c->r[5]=c->r[5]+0x00004C40u; // 8016FB94
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8016FB98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016FB9C
  c->r[4]=c->r[5]+c->r[0]; // 8016FBA0
  W32(c->r[4]+0x00000028u,c->r[31]); // 8016FBA4
L_8016FBA8:;
  c->lr=0x8016FBACu; f_80154438(c); // 8016FBA8
  cmpu(c,0,c->r[31],0x00000010u); // 8016FBAC
  if (!crb(c,2)) { goto L_8016FBCC; } // 8016FBB0
  c->r[3]=0u+0x01230000u; // 8016FBB4
  c->r[4]=0u+0x80170000u; // 8016FBB8
  c->r[3]=c->r[3]+0x00004568u; // 8016FBBC
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016FBC0
  c->lr=0x8016FBC8u; f_80171B88(c); // 8016FBC4
  goto L_8017050C; // 8016FBC8
L_8016FBCC:;
  cmpu(c,0,c->r[31],0x00000020u); // 8016FBCC
  if (!crb(c,2)) { goto L_8016FBEC; } // 8016FBD0
  c->r[3]=0u+0x01230000u; // 8016FBD4
  c->r[4]=0u+0x80170000u; // 8016FBD8
  c->r[3]=c->r[3]+0x00004569u; // 8016FBDC
  c->r[4]=c->r[4]+0xFFFFCBF0u; // 8016FBE0
  c->lr=0x8016FBE8u; f_80171B88(c); // 8016FBE4
  goto L_8017050C; // 8016FBE8
L_8016FBEC:;
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016FBEC
  cmpu(c,0,c->r[0],0x00000003u); // 8016FBF0
  if (crb(c,2)) { goto L_8016FC04; } // 8016FBF4
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016FBF8
  cmpu(c,0,c->r[0],0x0000000Fu); // 8016FBFC
  if (!crb(c,2)) { goto L_8016FD48; } // 8016FC00
L_8016FC04:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8016FC04
  if (crb(c,2)) { goto L_8016FC24; } // 8016FC08
  c->r[3]=0u+0x01230000u; // 8016FC0C
  c->r[4]=0u+0x80170000u; // 8016FC10
  c->r[3]=c->r[3]+0x00004567u; // 8016FC14
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 8016FC18
  c->lr=0x8016FC20u; f_80171B88(c); // 8016FC1C
  goto L_8017050C; // 8016FC20
L_8016FC24:;
  c->r[0]=0u+0x00000000u; // 8016FC24
  W32(c->r[13]+0xFFFFAC78u,c->r[0]); // 8016FC28
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016FC2C
  cmpu(c,0,c->r[0],0x0000000Fu); // 8016FC30
  if (!crb(c,2)) { goto L_8016FC40; } // 8016FC34
  c->r[0]=0u+0x00000001u; // 8016FC38
  W32(c->r[13]+0xFFFFACD4u,c->r[0]); // 8016FC3C
L_8016FC40:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016FC40
  cmps(c,0,(int32_t)c->r[0],0); // 8016FC44
  if (crb(c,2)) { goto L_8016FCB4; } // 8016FC48
  c->r[29]=R32(c->r[13]+0xFFFFACF0u); // 8016FC4C
  c->r[3]=c->r[30]+0x00004B20u; // 8016FC50
  c->r[0]=0u+0x00000007u; // 8016FC54
  c->r[4]=0u+0x00000000u; // 8016FC58
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 8016FC5C
  c->r[0]=0u+0x0000000Au; // 8016FC60
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016FC64
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016FC68
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8016FC6C
  c->r[12]=R32(c->r[29]+0x00000028u); // 8016FC70
  cmps(c,0,(int32_t)c->r[12],0); // 8016FC74
  if (crb(c,2)) { goto L_8016FC8C; } // 8016FC78
  c->r[4]=c->r[29]|c->r[29]; // 8016FC7C
  c->r[3]=0u+0xFFFFFFFDu; // 8016FC80
  c->ctr=c->r[12]; // 8016FC84
  if (true) { c->lr=0x8016FC8Cu; dispatch(c,c->ctr); } // 8016FC88
L_8016FC8C:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016FC8C
  cmps(c,0,(int32_t)c->r[12],0); // 8016FC90
  if (crb(c,2)) { goto L_8016FCA8; } // 8016FC94
  c->r[4]=c->r[29]|c->r[29]; // 8016FC98
  c->r[3]=0u+0x00000000u; // 8016FC9C
  c->ctr=c->r[12]; // 8016FCA0
  if (true) { c->lr=0x8016FCA8u; dispatch(c,c->ctr); } // 8016FCA4
L_8016FCA8:;
  c->lr=0x8016FCACu; f_8016F270(c); // 8016FCA8
  c->r[0]=0u+0x00000001u; // 8016FCAC
  goto L_8016FCB8; // 8016FCB0
L_8016FCB4:;
  c->r[0]=0u+0x00000000u; // 8016FCB4
L_8016FCB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016FCB8
  if (!crb(c,2)) { goto L_8017050C; } // 8016FCBC
  c->r[0]=R32(c->r[13]+0xFFFFACD0u); // 8016FCC0
  cmpu(c,0,c->r[0],0x00000002u); // 8016FCC4
  if (crb(c,2)) { goto L_8017050C; } // 8016FCC8
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 8016FCCC
  c->r[0]=0u+0x00000007u; // 8016FCD0
  c->r[3]=0u+0x00000001u; // 8016FCD4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8016FCD8
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 8016FCDC
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 8016FCE0
  cmps(c,0,(int32_t)c->r[0],0); // 8016FCE4
  if (!crb(c,2)) { goto L_8017050C; } // 8016FCE8
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 8016FCEC
  cmps(c,0,(int32_t)c->r[0],0); // 8016FCF0
  if (!crb(c,2)) { goto L_8017050C; } // 8016FCF4
  W32(c->r[13]+0xFFFFAC84u,c->r[3]); // 8016FCF8
  c->r[3]=c->r[30]+0x00004B80u; // 8016FCFC
  c->lr=0x8016FD04u; f_8014E820(c); // 8016FD00
  c->lr=0x8016FD08u; f_801584A4(c); // 8016FD04
  c->r[5]=0u+0x80000000u; // 8016FD08
  c->r[4]=0u+0x10620000u; // 8016FD0C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8016FD10
  c->r[9]=0u+0x80170000u; // 8016FD14
  c->r[6]=c->r[3]|c->r[3]; // 8016FD18
  c->r[4]=c->r[4]+0x00004DD3u; // 8016FD1C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8016FD20
  c->r[3]=c->r[30]+0x00004B80u; // 8016FD24
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8016FD28
  c->r[9]=c->r[9]+0xFFFFF24Cu; // 8016FD2C
  c->r[5]=0u+0x00000000u; // 8016FD30
  c->r[7]=0u+0x00000000u; // 8016FD34
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016FD38
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8016FD3C
  c->lr=0x8016FD44u; f_8014EAF0(c); // 8016FD40
  goto L_8017050C; // 8016FD44
L_8016FD48:;
  c->r[4]=R32(c->r[13]+0xFFFFACE4u); // 8016FD48
  cmpu(c,0,c->r[4],0x00000001u); // 8016FD4C
  if (crb(c,2)) { goto L_8016FD74; } // 8016FD50
  cmpu(c,0,c->r[4],0x00000004u); // 8016FD54
  if (crb(c,2)) { goto L_8016FD74; } // 8016FD58
  cmpu(c,0,c->r[4],0x00000005u); // 8016FD5C
  if (crb(c,2)) { goto L_8016FD74; } // 8016FD60
  cmpu(c,0,c->r[4],0x00000021u); // 8016FD64
  if (crb(c,2)) { goto L_8016FD74; } // 8016FD68
  cmpu(c,0,c->r[4],0x0000000Eu); // 8016FD6C
  if (!crb(c,2)) { goto L_8016FD7C; } // 8016FD70
L_8016FD74:;
  c->r[0]=0u+0x00000001u; // 8016FD74
  goto L_8016FD94; // 8016FD78
L_8016FD7C:;
  c->r[0]=R32(c->r[13]+0xFFFF90F4u); // 8016FD7C
  cmpu(c,0,c->r[4],c->r[0]); // 8016FD80
  if (!crb(c,2)) { goto L_8016FD90; } // 8016FD84
  c->r[0]=0u+0x00000001u; // 8016FD88
  goto L_8016FD94; // 8016FD8C
L_8016FD90:;
  c->r[0]=0u+0x00000000u; // 8016FD90
L_8016FD94:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016FD94
  if (crb(c,2)) { goto L_8016FDC4; } // 8016FD98
  c->r[0]=c->r[31]&0x00000009u; cr0(c,c->r[0]); // 8016FD9C
  if (crb(c,2)) { goto L_8016FDB0; } // 8016FDA0
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016FDA4
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8016FDA8
  goto L_8016FDB4; // 8016FDAC
L_8016FDB0:;
  c->r[4]=0u+0x00000000u; // 8016FDB0
L_8016FDB4:;
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016FDB4
  c->r[0]=R32(c->r[3]+0x00000020u); // 8016FDB8
  c->r[0]=c->r[0]+c->r[4]; // 8016FDBC
  W32(c->r[3]+0x00000020u,c->r[0]); // 8016FDC0
L_8016FDC4:;
  c->r[0]=R32(c->r[13]+0xFFFFAC80u); // 8016FDC4
  cmps(c,0,(int32_t)c->r[0],0); // 8016FDC8
  if (crb(c,2)) { goto L_8016FE30; } // 8016FDCC
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016FDD0
  c->r[4]=0u+0x00000000u; // 8016FDD4
  c->r[3]=c->r[30]+0x00004B20u; // 8016FDD8
  W32(c->r[13]+0xFFFFAC80u,c->r[4]); // 8016FDDC
  c->r[0]=0u+0x0000000Au; // 8016FDE0
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8016FDE4
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016FDE8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016FDEC
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016FDF0
  cmps(c,0,(int32_t)c->r[12],0); // 8016FDF4
  if (crb(c,2)) { goto L_8016FE0C; } // 8016FDF8
  c->r[4]=c->r[31]|c->r[31]; // 8016FDFC
  c->r[3]=0u+0xFFFFFFFDu; // 8016FE00
  c->ctr=c->r[12]; // 8016FE04
  if (true) { c->lr=0x8016FE0Cu; dispatch(c,c->ctr); } // 8016FE08
L_8016FE0C:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016FE0C
  cmps(c,0,(int32_t)c->r[12],0); // 8016FE10
  if (crb(c,2)) { goto L_8016FE28; } // 8016FE14
  c->r[4]=c->r[31]|c->r[31]; // 8016FE18
  c->r[3]=0u+0x00000000u; // 8016FE1C
  c->ctr=c->r[12]; // 8016FE20
  if (true) { c->lr=0x8016FE28u; dispatch(c,c->ctr); } // 8016FE24
L_8016FE28:;
  c->lr=0x8016FE2Cu; f_8016F270(c); // 8016FE28
  goto L_8017050C; // 8016FE2C
L_8016FE30:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8016FE30
  if (crb(c,2)) { goto L_801703CC; } // 8016FE34
  c->r[29]=0u+0x00000000u; // 8016FE38
  W32(c->r[13]+0xFFFFAC78u,c->r[29]); // 8016FE3C
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016FE40
  cmpu(c,0,c->r[0],0x00000010u); // 8016FE44
  if (!crb(c,2)) { goto L_8016FEA8; } // 8016FE48
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 8016FE4C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8016FE50
  cmps(c,0,(int32_t)c->r[0],0); // 8016FE54
  if (crb(c,2)) { goto L_8016FE68; } // 8016FE58
  c->r[0]=0u+0x00000002u; // 8016FE5C
  W32(c->r[13]+0xFFFFACD0u,c->r[0]); // 8016FE60
  goto L_8016FE70; // 8016FE64
L_8016FE68:;
  c->r[0]=0u+0x00000001u; // 8016FE68
  W32(c->r[13]+0xFFFFACD0u,c->r[0]); // 8016FE6C
L_8016FE70:;
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016FE70
  c->r[3]=c->r[30]+0x00004B20u; // 8016FE74
  c->r[0]=0u+0x00000000u; // 8016FE78
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016FE7C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016FE80
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016FE84
  cmps(c,0,(int32_t)c->r[12],0); // 8016FE88
  if (crb(c,2)) { goto L_8016FEA0; } // 8016FE8C
  c->r[4]=c->r[31]|c->r[31]; // 8016FE90
  c->r[3]=0u+0x00000000u; // 8016FE94
  c->ctr=c->r[12]; // 8016FE98
  if (true) { c->lr=0x8016FEA0u; dispatch(c,c->ctr); } // 8016FE9C
L_8016FEA0:;
  c->lr=0x8016FEA4u; f_8016F270(c); // 8016FEA0
  goto L_8017050C; // 8016FEA4
L_8016FEA8:;
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016FEA8
  cmpu(c,0,c->r[0],0x00000020u); // 8016FEAC
  if (!crb(c,2)) { goto L_8016FEFC; } // 8016FEB0
  c->lr=0x8016FEB8u; f_801584AC(c); // 8016FEB4
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016FEB8
  c->r[0]=c->r[30]+0x00004B20u; // 8016FEBC
  W32(c->r[13]+0xFFFFACCCu,c->r[4]); // 8016FEC0
  W32(c->r[13]+0xFFFFACC8u,c->r[3]); // 8016FEC4
  W32(c->r[13]+0xFFFFACD4u,c->r[29]); // 8016FEC8
  W32(c->r[13]+0xFFFFAC74u,c->r[29]); // 8016FECC
  W32(c->r[13]+0xFFFFACF0u,c->r[0]); // 8016FED0
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 8016FED4
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016FED8
  cmps(c,0,(int32_t)c->r[12],0); // 8016FEDC
  if (crb(c,2)) { goto L_8016FEF4; } // 8016FEE0
  c->r[4]=c->r[31]|c->r[31]; // 8016FEE4
  c->r[3]=0u+0x00000000u; // 8016FEE8
  c->ctr=c->r[12]; // 8016FEEC
  if (true) { c->lr=0x8016FEF4u; dispatch(c,c->ctr); } // 8016FEF0
L_8016FEF4:;
  c->lr=0x8016FEF8u; f_8016F270(c); // 8016FEF4
  goto L_8017050C; // 8016FEF8
L_8016FEFC:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 8016FEFC
  cmps(c,0,(int32_t)c->r[0],0); // 8016FF00
  if (crb(c,2)) { goto L_8016FF68; } // 8016FF04
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016FF08
  c->r[3]=c->r[30]+0x00004B20u; // 8016FF0C
  W32(c->r[13]+0xFFFFAC74u,c->r[29]); // 8016FF10
  c->r[0]=0u+0x0000000Au; // 8016FF14
  W32(c->r[13]+0xFFFFAC70u,c->r[29]); // 8016FF18
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 8016FF1C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016FF20
  c->r[12]=R32(c->r[31]+0x00000028u); // 8016FF24
  cmps(c,0,(int32_t)c->r[12],0); // 8016FF28
  if (crb(c,2)) { goto L_8016FF40; } // 8016FF2C
  c->r[4]=c->r[31]|c->r[31]; // 8016FF30
  c->r[3]=0u+0xFFFFFFFDu; // 8016FF34
  c->ctr=c->r[12]; // 8016FF38
  if (true) { c->lr=0x8016FF40u; dispatch(c,c->ctr); } // 8016FF3C
L_8016FF40:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 8016FF40
  cmps(c,0,(int32_t)c->r[12],0); // 8016FF44
  if (crb(c,2)) { goto L_8016FF5C; } // 8016FF48
  c->r[4]=c->r[31]|c->r[31]; // 8016FF4C
  c->r[3]=0u+0x00000000u; // 8016FF50
  c->ctr=c->r[12]; // 8016FF54
  if (true) { c->lr=0x8016FF5Cu; dispatch(c,c->ctr); } // 8016FF58
L_8016FF5C:;
  c->lr=0x8016FF60u; f_8016F270(c); // 8016FF5C
  c->r[0]=0u+0x00000001u; // 8016FF60
  goto L_8016FF6C; // 8016FF64
L_8016FF68:;
  c->r[0]=0u+0x00000000u; // 8016FF68
L_8016FF6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016FF6C
  if (!crb(c,2)) { goto L_8017050C; } // 8016FF70
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 8016FF74
  cmpu(c,0,c->r[0],0x00000026u); // 8016FF78
  if (!crb(c,2)) { goto L_80170030; } // 8016FF7C
  c->lr=0x8016FF84u; f_801740A8(c); // 8016FF80
  c->r[31]=c->r[3]|c->r[3]; // 8016FF84
  c->lr=0x8016FF8Cu; f_801584AC(c); // 8016FF88
  c->r[6]=0u+0x80000000u; // 8016FF8C
  c->r[5]=0u+0x10620000u; // 8016FF90
  c->r[6]=R32(c->r[6]+0x000000F8u); // 8016FF94
  c->r[7]=c->r[5]+0x00004DD3u; // 8016FF98
  c->r[8]=R32(c->r[13]+0xFFFFACC8u); // 8016FF9C
  c->r[0]=0u+0x00000000u; // 8016FFA0
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 8016FFA4
  c->r[9]=R32(c->r[13]+0xFFFFACCCu); // 8016FFA8
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 8016FFAC
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 8016FFB0
  c->r[5]=c->r[0]^0x80000000u; // 8016FFB4
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 8016FFB8
  c->r[0]=c->r[0]^0x80000000u; // 8016FFBC
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 8016FFC0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 8016FFC4
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 8016FFC8
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 8016FFCC
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8016FFD0
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 8016FFD4
  if (crb(c,2)) { goto L_8016FFE4; } // 8016FFD8
  c->r[3]=0u+0x00000000u; // 8016FFDC
  goto L_8016FFF8; // 8016FFE0
L_8016FFE4:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8016FFE4
  if (crb(c,2)) { goto L_8016FFF4; } // 8016FFE8
  c->r[3]=0u+0x00000001u; // 8016FFEC
  goto L_8016FFF8; // 8016FFF0
L_8016FFF4:;
  c->r[3]=0u+0x00000002u; // 8016FFF4
L_8016FFF8:;
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 8016FFF8
  c->r[4]=c->r[30]+0x00004B20u; // 8016FFFC
  c->r[0]=0u+0x00000000u; // 80170000
  W32(c->r[13]+0xFFFFACF0u,c->r[4]); // 80170004
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80170008
  W32(c->r[31]+0x00000010u,c->r[3]); // 8017000C
  c->r[12]=R32(c->r[31]+0x00000028u); // 80170010
  cmps(c,0,(int32_t)c->r[12],0); // 80170014
  if (crb(c,2)) { goto L_80170028; } // 80170018
  c->r[4]=c->r[31]|c->r[31]; // 8017001C
  c->ctr=c->r[12]; // 80170020
  if (true) { c->lr=0x80170028u; dispatch(c,c->ctr); } // 80170024
L_80170028:;
  c->lr=0x8017002Cu; f_8016F270(c); // 80170028
  goto L_8017050C; // 8017002C
L_80170030:;
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 80170030
  cmpu(c,0,c->r[0],0x00000024u); // 80170034
  if (!crb(c,2)) { goto L_801700A8; } // 80170038
  c->lr=0x80170040u; f_801740A8(c); // 8017003C
  c->r[0]=rotl(c->r[3],30)&0x00000001u; cr0(c,c->r[0]); // 80170040
  if (!crb(c,2)) { goto L_80170050; } // 80170044
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80170048
  if (crb(c,2)) { goto L_80170058; } // 8017004C
L_80170050:;
  c->r[3]=0u+0x00000000u; // 80170050
  goto L_80170070; // 80170054
L_80170058:;
  c->r[0]=R32(c->r[13]+0xFFFFAC74u); // 80170058
  cmps(c,0,(int32_t)c->r[0],0); // 8017005C
  if (crb(c,2)) { goto L_8017006C; } // 80170060
  c->r[3]=0u+0x00000000u; // 80170064
  goto L_80170070; // 80170068
L_8017006C:;
  c->r[3]=0u+0x00000001u; // 8017006C
L_80170070:;
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 80170070
  c->r[4]=c->r[30]+0x00004B20u; // 80170074
  c->r[0]=0u+0x00000000u; // 80170078
  W32(c->r[13]+0xFFFFACF0u,c->r[4]); // 8017007C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80170080
  W32(c->r[31]+0x00000010u,c->r[3]); // 80170084
  c->r[12]=R32(c->r[31]+0x00000028u); // 80170088
  cmps(c,0,(int32_t)c->r[12],0); // 8017008C
  if (crb(c,2)) { goto L_801700A0; } // 80170090
  c->r[4]=c->r[31]|c->r[31]; // 80170094
  c->ctr=c->r[12]; // 80170098
  if (true) { c->lr=0x801700A0u; dispatch(c,c->ctr); } // 8017009C
L_801700A0:;
  c->lr=0x801700A4u; f_8016F270(c); // 801700A0
  goto L_8017050C; // 801700A4
L_801700A8:;
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 801700A8
  cmpu(c,0,c->r[0],0x00000028u); // 801700AC
  if (!crb(c,2)) { goto L_801701C0; } // 801700B0
  c->r[4]=R32(c->r[13]+0xFFFFACF0u); // 801700B4
  c->r[3]=c->r[30]+0x00004BC0u; // 801700B8
  c->r[4]=R32(c->r[4]+0x00000024u); // 801700BC
  c->lr=0x801700C4u; f_80171BF0(c); // 801700C0
  cmps(c,0,(int32_t)c->r[3],0); // 801700C4
  if (crb(c,2)) { goto L_80170124; } // 801700C8
  c->r[3]=R32(c->r[13]+0xFFFFACECu); // 801700CC
  c->r[4]=c->r[30]+0x00004BC0u; // 801700D0
  c->r[5]=0u+0x00000020u; // 801700D4
  c->lr=0x801700DCu; f_80004338(c); // 801700D8
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 801700DC
  c->r[4]=c->r[30]+0x00004B20u; // 801700E0
  c->r[3]=0u+0x00000000u; // 801700E4
  c->r[0]=0u+0x00000001u; // 801700E8
  W32(c->r[13]+0xFFFFACF0u,c->r[4]); // 801700EC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801700F0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801700F4
  c->r[12]=R32(c->r[31]+0x00000028u); // 801700F8
  cmps(c,0,(int32_t)c->r[12],0); // 801700FC
  if (crb(c,2)) { goto L_80170114; } // 80170100
  c->r[4]=c->r[31]|c->r[31]; // 80170104
  c->r[3]=0u+0x00000001u; // 80170108
  c->ctr=c->r[12]; // 8017010C
  if (true) { c->lr=0x80170114u; dispatch(c,c->ctr); } // 80170110
L_80170114:;
  c->r[0]=0u+0x00000000u; // 80170114
  W32(c->r[13]+0xFFFFAC78u,c->r[0]); // 80170118
  c->lr=0x80170120u; f_8016F270(c); // 8017011C
  goto L_8017050C; // 80170120
L_80170124:;
  c->lr=0x80170128u; f_80154410(c); // 80170124
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 80170128
  c->r[30]=c->r[3]|c->r[3]; // 8017012C
  cmpu(c,0,c->r[0],0x00000005u); // 80170130
  if (crb(c,0)) { goto L_80170140; } // 80170134
  c->r[0]=0u+0x00000000u; // 80170138
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 8017013C
L_80170140:;
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 80170140
  c->r[31]=0u+0x80440000u; // 80170144
  c->r[3]=R32(c->r[13]+0xFFFFAC60u); // 80170148
  c->r[31]=c->r[31]+0x00004C40u; // 8017014C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80170150
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 80170154
  c->r[6]=0u+0x00000010u; // 80170158
  c->r[4]=0u+0x00000000u; // 8017015C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80170160
  c->r[5]=c->r[31]+c->r[5]; // 80170164
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80170168
  c->r[3]=c->r[31]+c->r[3]; // 8017016C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80170170
  W32(c->r[3]+0x00000020u,c->r[4]); // 80170174
  c->r[3]=c->r[31]+c->r[0]; // 80170178
  W32(c->r[3]+0x00000024u,c->r[4]); // 8017017C
  c->lr=0x80170184u; f_801584A4(c); // 80170180
  c->r[0]=R32(c->r[13]+0xFFFFAC60u); // 80170184
  c->r[4]=R32(c->r[13]+0xFFFFAC60u); // 80170188
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8017018C
  c->r[0]=c->r[4]+0x00000001u; // 80170190
  W32(c->r[13]+0xFFFFAC60u,c->r[0]); // 80170194
  c->r[4]=c->r[31]+c->r[5]; // 80170198
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8017019C
  c->r[3]=c->r[30]|c->r[30]; // 801701A0
  c->lr=0x801701A8u; f_80154438(c); // 801701A4
  c->r[5]=0u+0x80170000u; // 801701A8
  c->r[3]=0u+0x00000000u; // 801701AC
  c->r[5]=c->r[5]+0xFFFFE418u; // 801701B0
  c->r[4]=0u+0x00000000u; // 801701B4
  c->lr=0x801701BCu; f_801732E8(c); // 801701B8
  goto L_8017050C; // 801701BC
L_801701C0:;
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 801701C0
  cmpu(c,0,c->r[0],0x00000029u); // 801701C4
  if (!crb(c,2)) { goto L_8017021C; } // 801701C8
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 801701CC
  c->r[4]=R32(c->r[3]+0x00000018u); // 801701D0
  c->r[0]=R32(c->r[4]+0x00005DE0u); // 801701D4
  cmps(c,0,(int32_t)c->r[0],0); // 801701D8
  if (!crb(c,2)) { goto L_801701E8; } // 801701DC
  c->lr=0x801701E4u; f_8016F598(c); // 801701E0
  goto L_8017050C; // 801701E4
L_801701E8:;
  c->r[4]=c->r[30]+0x00004B20u; // 801701E8
  c->r[0]=0u+0x00000000u; // 801701EC
  W32(c->r[13]+0xFFFFACF0u,c->r[4]); // 801701F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801701F4
  c->r[12]=R32(c->r[3]+0x00000028u); // 801701F8
  cmps(c,0,(int32_t)c->r[12],0); // 801701FC
  if (crb(c,2)) { goto L_80170214; } // 80170200
  c->r[4]=c->r[3]|c->r[3]; // 80170204
  c->r[3]=0u+0x00000000u; // 80170208
  c->ctr=c->r[12]; // 8017020C
  if (true) { c->lr=0x80170214u; dispatch(c,c->ctr); } // 80170210
L_80170214:;
  c->lr=0x80170218u; f_8016F270(c); // 80170214
  goto L_8017050C; // 80170218
L_8017021C:;
  c->r[4]=R32(c->r[13]+0xFFFFACE4u); // 8017021C
  cmpu(c,0,c->r[4],0x00000001u); // 80170220
  if (crb(c,2)) { goto L_80170248; } // 80170224
  cmpu(c,0,c->r[4],0x00000004u); // 80170228
  if (crb(c,2)) { goto L_80170248; } // 8017022C
  cmpu(c,0,c->r[4],0x00000005u); // 80170230
  if (crb(c,2)) { goto L_80170248; } // 80170234
  cmpu(c,0,c->r[4],0x00000021u); // 80170238
  if (crb(c,2)) { goto L_80170248; } // 8017023C
  cmpu(c,0,c->r[4],0x0000000Eu); // 80170240
  if (!crb(c,2)) { goto L_80170250; } // 80170244
L_80170248:;
  c->r[0]=0u+0x00000001u; // 80170248
  goto L_80170268; // 8017024C
L_80170250:;
  c->r[0]=R32(c->r[13]+0xFFFF90F4u); // 80170250
  cmpu(c,0,c->r[4],c->r[0]); // 80170254
  if (!crb(c,2)) { goto L_80170264; } // 80170258
  c->r[0]=0u+0x00000001u; // 8017025C
  goto L_80170268; // 80170260
L_80170264:;
  c->r[0]=0u+0x00000000u; // 80170264
L_80170268:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170268
  if (crb(c,2)) { goto L_801702C0; } // 8017026C
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 80170270
  c->r[4]=R32(c->r[3]+0x00000020u); // 80170274
  c->r[0]=R32(c->r[3]+0x00000014u); // 80170278
  cmpu(c,0,c->r[4],c->r[0]); // 8017027C
  if (crb(c,2)) { goto L_8017028C; } // 80170280
  c->lr=0x80170288u; f_8016F598(c); // 80170284
  goto L_8017050C; // 80170288
L_8017028C:;
  c->r[4]=c->r[30]+0x00004B20u; // 8017028C
  c->r[0]=0u+0x00000000u; // 80170290
  W32(c->r[13]+0xFFFFACF0u,c->r[4]); // 80170294
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80170298
  c->r[12]=R32(c->r[3]+0x00000028u); // 8017029C
  cmps(c,0,(int32_t)c->r[12],0); // 801702A0
  if (crb(c,2)) { goto L_801702B8; } // 801702A4
  c->r[4]=c->r[3]|c->r[3]; // 801702A8
  c->r[3]=R32(c->r[3]+0x00000020u); // 801702AC
  c->ctr=c->r[12]; // 801702B0
  if (true) { c->lr=0x801702B8u; dispatch(c,c->ctr); } // 801702B4
L_801702B8:;
  c->lr=0x801702BCu; f_8016F270(c); // 801702B8
  goto L_8017050C; // 801702BC
L_801702C0:;
  c->r[4]=R32(c->r[13]+0xFFFFACE4u); // 801702C0
  cmpu(c,0,c->r[4],0x00000009u); // 801702C4
  if (crb(c,2)) { goto L_801702E4; } // 801702C8
  cmpu(c,0,c->r[4],0x0000000Au); // 801702CC
  if (crb(c,2)) { goto L_801702E4; } // 801702D0
  cmpu(c,0,c->r[4],0x0000000Bu); // 801702D4
  if (crb(c,2)) { goto L_801702E4; } // 801702D8
  cmpu(c,0,c->r[4],0x0000000Cu); // 801702DC
  if (!crb(c,2)) { goto L_801702EC; } // 801702E0
L_801702E4:;
  c->r[0]=0u+0x00000001u; // 801702E4
  goto L_80170330; // 801702E8
L_801702EC:;
  c->r[3]=0u+0x802D0000u; // 801702EC
  {uint32_t ea=c->r[3]+0x00005D40u; c->r[0]=R32(ea); c->r[3]=ea;} // 801702F0
  cmpu(c,0,c->r[4],c->r[0]); // 801702F4
  if (!crb(c,2)) { goto L_80170304; } // 801702F8
  c->r[0]=0u+0x00000001u; // 801702FC
  goto L_80170330; // 80170300
L_80170304:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80170304
  cmpu(c,0,c->r[4],c->r[0]); // 80170308
  if (!crb(c,2)) { goto L_80170318; } // 8017030C
  c->r[0]=0u+0x00000001u; // 80170310
  goto L_80170330; // 80170314
L_80170318:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80170318
  cmpu(c,0,c->r[4],c->r[0]); // 8017031C
  if (!crb(c,2)) { goto L_8017032C; } // 80170320
  c->r[0]=0u+0x00000001u; // 80170324
  goto L_80170330; // 80170328
L_8017032C:;
  c->r[0]=0u+0x00000000u; // 8017032C
L_80170330:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170330
  if (crb(c,2)) { goto L_80170394; } // 80170334
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 80170338
  cmpu(c,0,c->r[0],0x0000000Bu); // 8017033C
  if (crb(c,2)) { goto L_80170350; } // 80170340
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 80170344
  cmpu(c,0,c->r[0],0x0000000Au); // 80170348
  if (!crb(c,2)) { goto L_8017035C; } // 8017034C
L_80170350:;
  c->lr=0x80170354u; f_80174394(c); // 80170350
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80170354
  goto L_80170360; // 80170358
L_8017035C:;
  c->lr=0x80170360u; f_80174394(c); // 8017035C
L_80170360:;
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 80170360
  c->r[4]=c->r[30]+0x00004B20u; // 80170364
  c->r[0]=0u+0x00000000u; // 80170368
  W32(c->r[13]+0xFFFFACF0u,c->r[4]); // 8017036C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80170370
  c->r[12]=R32(c->r[31]+0x00000028u); // 80170374
  cmps(c,0,(int32_t)c->r[12],0); // 80170378
  if (crb(c,2)) { goto L_8017038C; } // 8017037C
  c->r[4]=c->r[31]|c->r[31]; // 80170380
  c->ctr=c->r[12]; // 80170384
  if (true) { c->lr=0x8017038Cu; dispatch(c,c->ctr); } // 80170388
L_8017038C:;
  c->lr=0x80170390u; f_8016F270(c); // 8017038C
  goto L_8017050C; // 80170390
L_80170394:;
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 80170394
  c->r[3]=c->r[30]+0x00004B20u; // 80170398
  c->r[0]=0u+0x00000000u; // 8017039C
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 801703A0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801703A4
  c->r[12]=R32(c->r[31]+0x00000028u); // 801703A8
  cmps(c,0,(int32_t)c->r[12],0); // 801703AC
  if (crb(c,2)) { goto L_801703C4; } // 801703B0
  c->r[4]=c->r[31]|c->r[31]; // 801703B4
  c->r[3]=0u+0x00000000u; // 801703B8
  c->ctr=c->r[12]; // 801703BC
  if (true) { c->lr=0x801703C4u; dispatch(c,c->ctr); } // 801703C0
L_801703C4:;
  c->lr=0x801703C8u; f_8016F270(c); // 801703C4
  goto L_8017050C; // 801703C8
L_801703CC:;
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 801703CC
  cmpu(c,0,c->r[0],0x0000000Eu); // 801703D0
  if (!crb(c,2)) { goto L_801703F0; } // 801703D4
  c->r[3]=0u+0x01230000u; // 801703D8
  c->r[4]=0u+0x80170000u; // 801703DC
  c->r[3]=c->r[3]+0x00004567u; // 801703E0
  c->r[4]=c->r[4]+0xFFFFCBDCu; // 801703E4
  c->lr=0x801703ECu; f_80171B88(c); // 801703E8
  goto L_8017050C; // 801703EC
L_801703F0:;
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 801703F0
  cmpu(c,0,c->r[0],0x00000001u); // 801703F4
  if (crb(c,2)) { goto L_8017042C; } // 801703F8
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 801703FC
  cmpu(c,0,c->r[0],0x00000004u); // 80170400
  if (crb(c,2)) { goto L_8017042C; } // 80170404
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 80170408
  cmpu(c,0,c->r[0],0x00000005u); // 8017040C
  if (crb(c,2)) { goto L_8017042C; } // 80170410
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 80170414
  cmpu(c,0,c->r[0],0x00000021u); // 80170418
  if (crb(c,2)) { goto L_8017042C; } // 8017041C
  c->r[0]=R32(c->r[13]+0xFFFFACE4u); // 80170420
  cmpu(c,0,c->r[0],0x0000000Eu); // 80170424
  if (!crb(c,2)) { goto L_801704F0; } // 80170428
L_8017042C:;
  c->r[29]=R32(c->r[13]+0xFFFFACF0u); // 8017042C
  c->r[3]=R32(c->r[29]+0x00000020u); // 80170430
  c->r[0]=R32(c->r[29]+0x00000014u); // 80170434
  cmpu(c,0,c->r[3],c->r[0]); // 80170438
  if (!crb(c,2)) { goto L_801704F0; } // 8017043C
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 80170440
  cmps(c,0,(int32_t)c->r[0],0); // 80170444
  if (crb(c,2)) { goto L_801704AC; } // 80170448
  c->r[4]=0u+0x00000000u; // 8017044C
  c->r[3]=c->r[30]+0x00004B20u; // 80170450
  W32(c->r[13]+0xFFFFAC74u,c->r[4]); // 80170454
  c->r[0]=0u+0x0000000Au; // 80170458
  W32(c->r[13]+0xFFFFAC70u,c->r[4]); // 8017045C
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 80170460
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80170464
  c->r[12]=R32(c->r[29]+0x00000028u); // 80170468
  cmps(c,0,(int32_t)c->r[12],0); // 8017046C
  if (crb(c,2)) { goto L_80170484; } // 80170470
  c->r[4]=c->r[29]|c->r[29]; // 80170474
  c->r[3]=0u+0xFFFFFFFDu; // 80170478
  c->ctr=c->r[12]; // 8017047C
  if (true) { c->lr=0x80170484u; dispatch(c,c->ctr); } // 80170480
L_80170484:;
  c->r[12]=R32(c->r[13]+0xFFFFACE0u); // 80170484
  cmps(c,0,(int32_t)c->r[12],0); // 80170488
  if (crb(c,2)) { goto L_801704A0; } // 8017048C
  c->r[4]=c->r[29]|c->r[29]; // 80170490
  c->r[3]=0u+0x00000000u; // 80170494
  c->ctr=c->r[12]; // 80170498
  if (true) { c->lr=0x801704A0u; dispatch(c,c->ctr); } // 8017049C
L_801704A0:;
  c->lr=0x801704A4u; f_8016F270(c); // 801704A0
  c->r[0]=0u+0x00000001u; // 801704A4
  goto L_801704B0; // 801704A8
L_801704AC:;
  c->r[0]=0u+0x00000000u; // 801704AC
L_801704B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801704B0
  if (!crb(c,2)) { goto L_8017050C; } // 801704B4
  c->r[31]=R32(c->r[13]+0xFFFFACF0u); // 801704B8
  c->r[3]=c->r[30]+0x00004B20u; // 801704BC
  c->r[0]=0u+0x00000000u; // 801704C0
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 801704C4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801704C8
  c->r[12]=R32(c->r[31]+0x00000028u); // 801704CC
  cmps(c,0,(int32_t)c->r[12],0); // 801704D0
  if (crb(c,2)) { goto L_801704E8; } // 801704D4
  c->r[4]=c->r[31]|c->r[31]; // 801704D8
  c->r[3]=R32(c->r[31]+0x00000020u); // 801704DC
  c->ctr=c->r[12]; // 801704E0
  if (true) { c->lr=0x801704E8u; dispatch(c,c->ctr); } // 801704E4
L_801704E8:;
  c->lr=0x801704ECu; f_8016F270(c); // 801704E8
  goto L_8017050C; // 801704EC
L_801704F0:;
  c->r[3]=0u+0x00000027u; // 801704F0
  c->r[4]=0u+0x00000000u; // 801704F4
  c->r[5]=0u+0x00000000u; // 801704F8
  c->lr=0x80170500u; f_8016C5C0(c); // 801704FC
  c->r[3]=0u+0x80170000u; // 80170500
  c->r[3]=c->r[3]+0xFFFFCDE4u; // 80170504
  c->lr=0x8017050Cu; f_801735E4(c); // 80170508
L_8017050C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017050C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80170510
  c->r[30]=R32(c->r[1]+0x00000018u); // 80170514
  c->r[29]=R32(c->r[1]+0x00000014u); // 80170518
  c->lr=c->r[0]; // 8017051C
  c->r[1]=c->r[1]+0x00000020u; // 80170520
  return; // 80170524
}

// DVDReadAbsAsyncPrio
void f_80170528(Ctx* __restrict c) {
  trace_call(0x80170528u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170528
  c->r[0]=c->lr; // 8017052C
  c->r[9]=0u+0x00000001u; // 80170530
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170534
  c->r[0]=0u+0x00000000u; // 80170538
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017053C
  c->r[31]=c->r[8]|c->r[8]; // 80170540
  W32(c->r[1]+0x00000018u,c->r[30]); // 80170544
  W32(c->r[1]+0x00000014u,c->r[29]); // 80170548
  c->r[29]=c->r[3]|c->r[3]; // 8017054C
  W32(c->r[3]+0x00000008u,c->r[9]); // 80170550
  W32(c->r[3]+0x00000018u,c->r[4]); // 80170554
  W32(c->r[3]+0x00000014u,c->r[5]); // 80170558
  W32(c->r[3]+0x00000010u,c->r[6]); // 8017055C
  W32(c->r[3]+0x00000020u,c->r[0]); // 80170560
  W32(c->r[3]+0x00000028u,c->r[7]); // 80170564
  c->r[0]=R32(c->r[13]+0xFFFF90E4u); // 80170568
  cmps(c,0,(int32_t)c->r[0],0); // 8017056C
  if (crb(c,2)) { goto L_801705A8; } // 80170570
  cmpu(c,0,c->r[9],0x00000001u); // 80170574
  if (crb(c,2)) { goto L_8017059C; } // 80170578
  cmpu(c,0,c->r[9],0x00000004u); // 8017057C
  if (crb(c,2)) { goto L_8017059C; } // 80170580
  cmpu(c,0,c->r[9],0x00000005u); // 80170584
  if (crb(c,2)) { goto L_8017059C; } // 80170588
  cmpu(c,0,c->r[9],0x00000021u); // 8017058C
  if (crb(c,2)) { goto L_8017059C; } // 80170590
  cmpu(c,0,c->r[9],0x0000000Eu); // 80170594
  if (!crb(c,2)) { goto L_801705A8; } // 80170598
L_8017059C:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 8017059C
  c->r[4]=R32(c->r[29]+0x00000014u); // 801705A0
  c->lr=0x801705A8u; f_8014F810(c); // 801705A4
L_801705A8:;
  c->lr=0x801705ACu; f_80154410(c); // 801705A8
  c->r[0]=0u+0x00000002u; // 801705AC
  c->r[30]=c->r[3]|c->r[3]; // 801705B0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801705B4
  c->r[3]=c->r[31]|c->r[31]; // 801705B8
  c->r[4]=c->r[29]|c->r[29]; // 801705BC
  c->lr=0x801705C4u; f_801710CC(c); // 801705C0
  c->r[0]=R32(c->r[13]+0xFFFFACF0u); // 801705C4
  c->r[31]=c->r[3]|c->r[3]; // 801705C8
  cmps(c,0,(int32_t)c->r[0],0); // 801705CC
  if (!crb(c,2)) { goto L_801705E4; } // 801705D0
  c->r[0]=R32(c->r[13]+0xFFFFAC64u); // 801705D4
  cmps(c,0,(int32_t)c->r[0],0); // 801705D8
  if (!crb(c,2)) { goto L_801705E4; } // 801705DC
  c->lr=0x801705E4u; f_8016F270(c); // 801705E0
L_801705E4:;
  c->r[3]=c->r[30]|c->r[30]; // 801705E4
  c->lr=0x801705ECu; f_80154438(c); // 801705E8
  c->r[3]=c->r[31]|c->r[31]; // 801705EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801705F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801705F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801705F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801705FC
  c->lr=c->r[0]; // 80170600
  c->r[1]=c->r[1]+0x00000020u; // 80170604
  return; // 80170608
}

// DVDInquiryAsync
void f_8017060C(Ctx* __restrict c) {
  trace_call(0x8017060Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017060C
  c->r[0]=c->lr; // 80170610
  c->r[7]=0u+0x0000000Eu; // 80170614
  c->r[6]=0u+0x00000020u; // 80170618
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017061C
  c->r[0]=0u+0x00000000u; // 80170620
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170624
  c->r[31]=c->r[3]|c->r[3]; // 80170628
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017062C
  W32(c->r[3]+0x00000008u,c->r[7]); // 80170630
  W32(c->r[3]+0x00000018u,c->r[4]); // 80170634
  W32(c->r[3]+0x00000014u,c->r[6]); // 80170638
  W32(c->r[3]+0x00000020u,c->r[0]); // 8017063C
  W32(c->r[3]+0x00000028u,c->r[5]); // 80170640
  c->r[0]=R32(c->r[13]+0xFFFF90E4u); // 80170644
  cmps(c,0,(int32_t)c->r[0],0); // 80170648
  if (crb(c,2)) { goto L_80170684; } // 8017064C
  cmpu(c,0,c->r[7],0x00000001u); // 80170650
  if (crb(c,2)) { goto L_80170678; } // 80170654
  cmpu(c,0,c->r[7],0x00000004u); // 80170658
  if (crb(c,2)) { goto L_80170678; } // 8017065C
  cmpu(c,0,c->r[7],0x00000005u); // 80170660
  if (crb(c,2)) { goto L_80170678; } // 80170664
  cmpu(c,0,c->r[7],0x00000021u); // 80170668
  if (crb(c,2)) { goto L_80170678; } // 8017066C
  cmpu(c,0,c->r[7],0x0000000Eu); // 80170670
  if (!crb(c,2)) { goto L_80170684; } // 80170674
L_80170678:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80170678
  c->r[4]=R32(c->r[31]+0x00000014u); // 8017067C
  c->lr=0x80170684u; f_8014F810(c); // 80170680
L_80170684:;
  c->lr=0x80170688u; f_80154410(c); // 80170684
  c->r[0]=0u+0x00000002u; // 80170688
  c->r[30]=c->r[3]|c->r[3]; // 8017068C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80170690
  c->r[4]=c->r[31]|c->r[31]; // 80170694
  c->r[3]=0u+0x00000002u; // 80170698
  c->lr=0x801706A0u; f_801710CC(c); // 8017069C
  c->r[0]=R32(c->r[13]+0xFFFFACF0u); // 801706A0
  c->r[31]=c->r[3]|c->r[3]; // 801706A4
  cmps(c,0,(int32_t)c->r[0],0); // 801706A8
  if (!crb(c,2)) { goto L_801706C0; } // 801706AC
  c->r[0]=R32(c->r[13]+0xFFFFAC64u); // 801706B0
  cmps(c,0,(int32_t)c->r[0],0); // 801706B4
  if (!crb(c,2)) { goto L_801706C0; } // 801706B8
  c->lr=0x801706C0u; f_8016F270(c); // 801706BC
L_801706C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801706C0
  c->lr=0x801706C8u; f_80154438(c); // 801706C4
  c->r[3]=c->r[31]|c->r[31]; // 801706C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801706CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801706D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801706D4
  c->lr=c->r[0]; // 801706D8
  c->r[1]=c->r[1]+0x00000010u; // 801706DC
  return; // 801706E0
}

// DVDGetCommandBlockStatus
void f_801706E4(Ctx* __restrict c) {
  trace_call(0x801706E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801706E4
  c->r[0]=c->lr; // 801706E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801706EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801706F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801706F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801706F8
  c->r[29]=c->r[3]|c->r[3]; // 801706FC
  c->lr=0x80170704u; f_80154410(c); // 80170700
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80170704
  c->r[30]=c->r[3]|c->r[3]; // 80170708
  cmps(c,0,(int32_t)c->r[0],3); // 8017070C
  if (!crb(c,2)) { goto L_8017071C; } // 80170710
  c->r[31]=0u+0x00000001u; // 80170714
  goto L_80170784; // 80170718
L_8017071C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8017071C
  cmps(c,0,(int32_t)c->r[0],5); // 80170720
  if (!crb(c,2)) { goto L_80170730; } // 80170724
  c->r[31]=0u+0x00000004u; // 80170728
  goto L_80170784; // 8017072C
L_80170730:;
  c->r[31]=0u+0x80440000u; // 80170730
  c->r[0]=R32(c->r[13]+0xFFFFACF0u); // 80170734
  c->r[31]=c->r[31]+0x00004A50u; // 80170738
  cmpu(c,0,c->r[0],c->r[31]); // 8017073C
  if (!crb(c,2)) { goto L_80170780; } // 80170740
  c->lr=0x80170748u; f_8017122C(c); // 80170744
  cmps(c,0,(int32_t)c->r[3],0); // 80170748
  if (crb(c,2)) { goto L_80170768; } // 8017074C
  cmpu(c,0,c->r[29],c->r[3]); // 80170750
  if (!crb(c,2)) { goto L_80170760; } // 80170754
  c->r[31]=0u+0x00000001u; // 80170758
  goto L_80170784; // 8017075C
L_80170760:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 80170760
  goto L_80170784; // 80170764
L_80170768:;
  cmpu(c,0,c->r[29],c->r[31]); // 80170768
  if (!crb(c,2)) { goto L_80170778; } // 8017076C
  c->r[31]=0u+0x00000000u; // 80170770
  goto L_80170784; // 80170774
L_80170778:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 80170778
  goto L_80170784; // 8017077C
L_80170780:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 80170780
L_80170784:;
  c->r[3]=c->r[30]|c->r[30]; // 80170784
  c->lr=0x8017078Cu; f_80154438(c); // 80170788
  c->r[3]=c->r[31]|c->r[31]; // 8017078C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80170790
  c->r[30]=R32(c->r[1]+0x00000018u); // 80170794
  c->r[29]=R32(c->r[1]+0x00000014u); // 80170798
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017079C
  c->lr=c->r[0]; // 801707A0
  c->r[1]=c->r[1]+0x00000020u; // 801707A4
  return; // 801707A8
}

// DVDGetDriveStatus
void f_801707AC(Ctx* __restrict c) {
  trace_call(0x801707ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801707AC
  c->r[0]=c->lr; // 801707B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801707B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801707B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801707BC
  c->lr=0x801707C4u; f_80154410(c); // 801707C0
  c->r[0]=R32(c->r[13]+0xFFFFAC6Cu); // 801707C4
  c->r[31]=c->r[3]|c->r[3]; // 801707C8
  cmps(c,0,(int32_t)c->r[0],0); // 801707CC
  if (crb(c,2)) { goto L_801707DC; } // 801707D0
  c->r[30]=0u+0xFFFFFFFFu; // 801707D4
  goto L_80170824; // 801707D8
L_801707DC:;
  c->r[0]=R32(c->r[13]+0xFFFFAC68u); // 801707DC
  cmps(c,0,(int32_t)c->r[0],0); // 801707E0
  if (crb(c,2)) { goto L_801707F0; } // 801707E4
  c->r[30]=0u+0x00000008u; // 801707E8
  goto L_80170824; // 801707EC
L_801707F0:;
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 801707F0
  cmps(c,0,(int32_t)c->r[3],0); // 801707F4
  if (!crb(c,2)) { goto L_80170804; } // 801707F8
  c->r[30]=0u+0x00000000u; // 801707FC
  goto L_80170824; // 80170800
L_80170804:;
  c->r[4]=0u+0x80440000u; // 80170804
  c->r[4]=c->r[4]+0x00004920u; // 80170808
  cmpu(c,0,c->r[3],c->r[4]); // 8017080C
  if (!crb(c,2)) { goto L_8017081C; } // 80170810
  c->r[3]=0u+0x00000000u; // 80170814
  goto L_80170820; // 80170818
L_8017081C:;
  c->lr=0x80170820u; f_801706E4(c); // 8017081C
L_80170820:;
  c->r[30]=c->r[3]|c->r[3]; // 80170820
L_80170824:;
  c->r[3]=c->r[31]|c->r[31]; // 80170824
  c->lr=0x8017082Cu; f_80154438(c); // 80170828
  c->r[3]=c->r[30]|c->r[30]; // 8017082C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170830
  c->r[30]=R32(c->r[1]+0x00000008u); // 80170834
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170838
  c->lr=c->r[0]; // 8017083C
  c->r[1]=c->r[1]+0x00000010u; // 80170840
  return; // 80170844
}

// DVDSetAutoInvalidation
void f_80170848(Ctx* __restrict c) {
  trace_call(0x80170848u);
  c->r[0]=c->r[3]|c->r[3]; // 80170848
  c->r[3]=R32(c->r[13]+0xFFFF90E4u); // 8017084C
  W32(c->r[13]+0xFFFF90E4u,c->r[0]); // 80170850
  return; // 80170854
}

// DVDResume
void f_80170858(Ctx* __restrict c) {
  trace_call(0x80170858u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170858
  c->r[0]=c->lr; // 8017085C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170864
  c->lr=0x8017086Cu; f_80154410(c); // 80170868
  c->r[4]=0u+0x00000000u; // 8017086C
  c->r[31]=c->r[3]|c->r[3]; // 80170870
  W32(c->r[13]+0xFFFFAC64u,c->r[4]); // 80170874
  c->r[0]=R32(c->r[13]+0xFFFFAC68u); // 80170878
  cmps(c,0,(int32_t)c->r[0],0); // 8017087C
  if (crb(c,2)) { goto L_8017088C; } // 80170880
  W32(c->r[13]+0xFFFFAC68u,c->r[4]); // 80170884
  c->lr=0x8017088Cu; f_8016F270(c); // 80170888
L_8017088C:;
  c->r[3]=c->r[31]|c->r[31]; // 8017088C
  c->lr=0x80170894u; f_80154438(c); // 80170890
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170894
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170898
  c->lr=c->r[0]; // 8017089C
  c->r[1]=c->r[1]+0x00000010u; // 801708A0
  return; // 801708A4
}

// DVDCancelAsync
void f_801708A8(Ctx* __restrict c) {
  trace_call(0x801708A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801708A8
  c->r[0]=c->lr; // 801708AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801708B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801708B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801708B8
  c->r[30]=c->r[4]|c->r[4]; // 801708BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801708C0
  c->r[29]=c->r[3]|c->r[3]; // 801708C4
  c->lr=0x801708CCu; f_80154410(c); // 801708C8
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801708CC
  c->r[31]=c->r[3]|c->r[3]; // 801708D0
  c->r[0]=c->r[4]+0x00000001u; // 801708D4
  cmpu(c,0,c->r[0],0x0000000Du); // 801708D8
  if (crb(c,1)) { goto L_80170BE4; } // 801708DC
  c->r[4]=0u+0x802D0000u; // 801708E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801708E4
  c->r[4]=c->r[4]+0x00005DF8u; // 801708E8
  c->r[4]=R32(c->r[4]+c->r[0]); // 801708EC
  c->ctr=c->r[4]; // 801708F0
  if (true) { switch (c->ctr) { case 0x801708F8u: goto L_801708F8; case 0x80170918u: goto L_80170918; case 0x8017097Cu: goto L_8017097C; case 0x801709C8u: goto L_801709C8; case 0x801709ECu: goto L_801709EC; case 0x80170A0Cu: goto L_80170A0C; case 0x80170A6Cu: goto L_80170A6C; case 0x80170A98u: goto L_80170A98; case 0x80170B94u: goto L_80170B94; case 0x80170BE4u: goto L_80170BE4; default: break; } dispatch(c,c->ctr); return; } // 801708F4
L_801708F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801708F8
  if (crb(c,2)) { goto L_80170BE4; } // 801708FC
  c->r[12]=c->r[30]|c->r[30]; // 80170900
  c->r[4]=c->r[29]|c->r[29]; // 80170904
  c->r[3]=0u+0x00000000u; // 80170908
  c->ctr=c->r[12]; // 8017090C
  if (true) { c->lr=0x80170914u; dispatch(c,c->ctr); } // 80170910
  goto L_80170BE4; // 80170914
L_80170918:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 80170918
  cmps(c,0,(int32_t)c->r[0],0); // 8017091C
  if (crb(c,2)) { goto L_80170930; } // 80170920
  c->lr=0x80170928u; f_80154438(c); // 80170924
  c->r[3]=0u+0x00000000u; // 80170928
  goto L_80170BF0; // 8017092C
L_80170930:;
  c->r[0]=0u+0x00000001u; // 80170930
  W32(c->r[13]+0xFFFFACE0u,c->r[30]); // 80170934
  W32(c->r[13]+0xFFFFAC70u,c->r[0]); // 80170938
  c->r[0]=R32(c->r[29]+0x00000008u); // 8017093C
  cmpu(c,0,c->r[0],0x00000004u); // 80170940
  if (crb(c,2)) { goto L_80170970; } // 80170944
  cmpu(c,0,c->r[0],0x00000021u); // 80170948
  if (crb(c,2)) { goto L_80170970; } // 8017094C
  cmpu(c,0,c->r[0],0x00000022u); // 80170950
  if (crb(c,2)) { goto L_80170970; } // 80170954
  cmpu(c,0,c->r[0],0x00000029u); // 80170958
  if (crb(c,2)) { goto L_80170970; } // 8017095C
  cmpu(c,0,c->r[0],0x0000002Au); // 80170960
  if (crb(c,2)) { goto L_80170970; } // 80170964
  cmpu(c,0,c->r[0],0x00000001u); // 80170968
  if (!crb(c,2)) { goto L_80170BE4; } // 8017096C
L_80170970:;
  c->r[0]=0u+0x00000001u; // 80170970
  W32(c->r[13]+0xFFFFAC80u,c->r[0]); // 80170974
  goto L_80170BE4; // 80170978
L_8017097C:;
  c->r[3]=c->r[29]|c->r[29]; // 8017097C
  c->lr=0x80170984u; f_8017128C(c); // 80170980
  c->r[12]=R32(c->r[29]+0x00000028u); // 80170984
  c->r[0]=0u+0x0000000Au; // 80170988
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8017098C
  cmps(c,0,(int32_t)c->r[12],0); // 80170990
  if (crb(c,2)) { goto L_801709A8; } // 80170994
  c->r[4]=c->r[29]|c->r[29]; // 80170998
  c->r[3]=0u+0xFFFFFFFDu; // 8017099C
  c->ctr=c->r[12]; // 801709A0
  if (true) { c->lr=0x801709A8u; dispatch(c,c->ctr); } // 801709A4
L_801709A8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801709A8
  if (crb(c,2)) { goto L_80170BE4; } // 801709AC
  c->r[12]=c->r[30]|c->r[30]; // 801709B0
  c->r[4]=c->r[29]|c->r[29]; // 801709B4
  c->r[3]=0u+0x00000000u; // 801709B8
  c->ctr=c->r[12]; // 801709BC
  if (true) { c->lr=0x801709C4u; dispatch(c,c->ctr); } // 801709C0
  goto L_80170BE4; // 801709C4
L_801709C8:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801709C8
  cmpu(c,0,c->r[0],0x0000002Au); // 801709CC
  if (crb(c,1)) { goto L_80170A6C; } // 801709D0
  c->r[3]=0u+0x802D0000u; // 801709D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801709D8
  c->r[3]=c->r[3]+0x00005D4Cu; // 801709DC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801709E0
  c->ctr=c->r[3]; // 801709E4
  if (true) { switch (c->ctr) { case 0x801708F8u: goto L_801708F8; case 0x80170918u: goto L_80170918; case 0x8017097Cu: goto L_8017097C; case 0x801709C8u: goto L_801709C8; case 0x801709ECu: goto L_801709EC; case 0x80170A0Cu: goto L_80170A0C; case 0x80170A6Cu: goto L_80170A6C; case 0x80170A98u: goto L_80170A98; case 0x80170B94u: goto L_80170B94; case 0x80170BE4u: goto L_80170BE4; default: break; } dispatch(c,c->ctr); return; } // 801709E8
L_801709EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801709EC
  if (crb(c,2)) { goto L_80170BE4; } // 801709F0
  c->r[12]=c->r[30]|c->r[30]; // 801709F4
  c->r[4]=c->r[29]|c->r[29]; // 801709F8
  c->r[3]=0u+0x00000000u; // 801709FC
  c->ctr=c->r[12]; // 80170A00
  if (true) { c->lr=0x80170A08u; dispatch(c,c->ctr); } // 80170A04
  goto L_80170BE4; // 80170A08
L_80170A0C:;
  c->r[0]=R32(c->r[13]+0xFFFFA990u); // 80170A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80170A10
  if (crb(c,2)) { goto L_80170A6C; } // 80170A14
  c->r[3]=0u+0x80440000u; // 80170A18
  c->r[0]=0u+0x0000000Au; // 80170A1C
  c->r[3]=c->r[3]+0x00004920u; // 80170A20
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 80170A24
  c->r[12]=R32(c->r[29]+0x00000028u); // 80170A28
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80170A2C
  cmps(c,0,(int32_t)c->r[12],0); // 80170A30
  if (crb(c,2)) { goto L_80170A48; } // 80170A34
  c->r[4]=c->r[29]|c->r[29]; // 80170A38
  c->r[3]=0u+0xFFFFFFFDu; // 80170A3C
  c->ctr=c->r[12]; // 80170A40
  if (true) { c->lr=0x80170A48u; dispatch(c,c->ctr); } // 80170A44
L_80170A48:;
  cmps(c,0,(int32_t)c->r[30],0); // 80170A48
  if (crb(c,2)) { goto L_80170A64; } // 80170A4C
  c->r[12]=c->r[30]|c->r[30]; // 80170A50
  c->r[4]=c->r[29]|c->r[29]; // 80170A54
  c->r[3]=0u+0x00000000u; // 80170A58
  c->ctr=c->r[12]; // 80170A5C
  if (true) { c->lr=0x80170A64u; dispatch(c,c->ctr); } // 80170A60
L_80170A64:;
  c->lr=0x80170A68u; f_8016F270(c); // 80170A64
  goto L_80170BE4; // 80170A68
L_80170A6C:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 80170A6C
  cmps(c,0,(int32_t)c->r[0],0); // 80170A70
  if (crb(c,2)) { goto L_80170A88; } // 80170A74
  c->r[3]=c->r[31]|c->r[31]; // 80170A78
  c->lr=0x80170A80u; f_80154438(c); // 80170A7C
  c->r[3]=0u+0x00000000u; // 80170A80
  goto L_80170BF0; // 80170A84
L_80170A88:;
  c->r[0]=0u+0x00000001u; // 80170A88
  W32(c->r[13]+0xFFFFACE0u,c->r[30]); // 80170A8C
  W32(c->r[13]+0xFFFFAC70u,c->r[0]); // 80170A90
  goto L_80170BE4; // 80170A94
L_80170A98:;
  c->r[0]=R32(c->r[13]+0xFFFFAC88u); // 80170A98
  cmps(c,0,(int32_t)c->r[0],0); // 80170A9C
  if (!crb(c,2)) { goto L_80170ABC; } // 80170AA0
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 80170AA4
  cmps(c,0,(int32_t)c->r[0],0); // 80170AA8
  if (!crb(c,2)) { goto L_80170ABC; } // 80170AAC
  c->lr=0x80170AB4u; f_80154438(c); // 80170AB0
  c->r[3]=0u+0x00000000u; // 80170AB4
  goto L_80170BF0; // 80170AB8
L_80170ABC:;
  c->r[0]=R32(c->r[13]+0xFFFFAC84u); // 80170ABC
  cmps(c,0,(int32_t)c->r[0],0); // 80170AC0
  if (crb(c,2)) { goto L_80170ADC; } // 80170AC4
  c->r[3]=0u+0x80440000u; // 80170AC8
  c->r[3]=c->r[3]+0x00004980u; // 80170ACC
  c->lr=0x80170AD4u; f_8014EB74(c); // 80170AD0
  c->r[0]=0u+0x00000000u; // 80170AD4
  W32(c->r[13]+0xFFFFAC84u,c->r[0]); // 80170AD8
L_80170ADC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80170ADC
  cmps(c,0,(int32_t)c->r[0],4); // 80170AE0
  if (!crb(c,2)) { goto L_80170AF0; } // 80170AE4
  c->r[0]=0u+0x00000003u; // 80170AE8
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 80170AEC
L_80170AF0:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80170AF0
  cmps(c,0,(int32_t)c->r[0],5); // 80170AF4
  if (!crb(c,2)) { goto L_80170B04; } // 80170AF8
  c->r[0]=0u+0x00000004u; // 80170AFC
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 80170B00
L_80170B04:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80170B04
  cmps(c,0,(int32_t)c->r[0],6); // 80170B08
  if (!crb(c,2)) { goto L_80170B18; } // 80170B0C
  c->r[0]=0u+0x00000001u; // 80170B10
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 80170B14
L_80170B18:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80170B18
  cmps(c,0,(int32_t)c->r[0],11); // 80170B1C
  if (!crb(c,2)) { goto L_80170B2C; } // 80170B20
  c->r[0]=0u+0x00000002u; // 80170B24
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 80170B28
L_80170B2C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80170B2C
  cmps(c,0,(int32_t)c->r[0],7); // 80170B30
  if (!crb(c,2)) { goto L_80170B40; } // 80170B34
  c->r[0]=0u+0x00000007u; // 80170B38
  W32(c->r[13]+0xFFFFAC74u,c->r[0]); // 80170B3C
L_80170B40:;
  c->r[3]=0u+0x80440000u; // 80170B40
  c->r[0]=0u+0x0000000Au; // 80170B44
  c->r[3]=c->r[3]+0x00004920u; // 80170B48
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 80170B4C
  c->r[12]=R32(c->r[29]+0x00000028u); // 80170B50
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80170B54
  cmps(c,0,(int32_t)c->r[12],0); // 80170B58
  if (crb(c,2)) { goto L_80170B70; } // 80170B5C
  c->r[4]=c->r[29]|c->r[29]; // 80170B60
  c->r[3]=0u+0xFFFFFFFDu; // 80170B64
  c->ctr=c->r[12]; // 80170B68
  if (true) { c->lr=0x80170B70u; dispatch(c,c->ctr); } // 80170B6C
L_80170B70:;
  cmps(c,0,(int32_t)c->r[30],0); // 80170B70
  if (crb(c,2)) { goto L_80170B8C; } // 80170B74
  c->r[12]=c->r[30]|c->r[30]; // 80170B78
  c->r[4]=c->r[29]|c->r[29]; // 80170B7C
  c->r[3]=0u+0x00000000u; // 80170B80
  c->ctr=c->r[12]; // 80170B84
  if (true) { c->lr=0x80170B8Cu; dispatch(c,c->ctr); } // 80170B88
L_80170B8C:;
  c->lr=0x80170B90u; f_8016F270(c); // 80170B8C
  goto L_80170BE4; // 80170B90
L_80170B94:;
  c->r[3]=0u+0x80440000u; // 80170B94
  c->r[0]=0u+0x0000000Au; // 80170B98
  c->r[3]=c->r[3]+0x00004920u; // 80170B9C
  W32(c->r[13]+0xFFFFACF0u,c->r[3]); // 80170BA0
  c->r[12]=R32(c->r[29]+0x00000028u); // 80170BA4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80170BA8
  cmps(c,0,(int32_t)c->r[12],0); // 80170BAC
  if (crb(c,2)) { goto L_80170BC4; } // 80170BB0
  c->r[4]=c->r[29]|c->r[29]; // 80170BB4
  c->r[3]=0u+0xFFFFFFFDu; // 80170BB8
  c->ctr=c->r[12]; // 80170BBC
  if (true) { c->lr=0x80170BC4u; dispatch(c,c->ctr); } // 80170BC0
L_80170BC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80170BC4
  if (crb(c,2)) { goto L_80170BE0; } // 80170BC8
  c->r[12]=c->r[30]|c->r[30]; // 80170BCC
  c->r[4]=c->r[29]|c->r[29]; // 80170BD0
  c->r[3]=0u+0x00000000u; // 80170BD4
  c->ctr=c->r[12]; // 80170BD8
  if (true) { c->lr=0x80170BE0u; dispatch(c,c->ctr); } // 80170BDC
L_80170BE0:;
  c->lr=0x80170BE4u; f_8016F270(c); // 80170BE0
L_80170BE4:;
  c->r[3]=c->r[31]|c->r[31]; // 80170BE4
  c->lr=0x80170BECu; f_80154438(c); // 80170BE8
  c->r[3]=0u+0x00000001u; // 80170BEC
L_80170BF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80170BF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80170BF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80170BF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80170BFC
  c->lr=c->r[0]; // 80170C00
  c->r[1]=c->r[1]+0x00000020u; // 80170C04
  return; // 80170C08
}

// fn_80170C0C
void f_80170C0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170C0C
  c->r[0]=c->lr; // 80170C10
  c->r[4]=0u+0x80170000u; // 80170C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170C18
  c->r[4]=c->r[4]+0x00000CE8u; // 80170C1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170C20
  W32(c->r[1]+0x00000008u,c->r[30]); // 80170C24
  c->r[30]=c->r[3]|c->r[3]; // 80170C28
  c->lr=0x80170C30u; f_801708A8(c); // 80170C2C
  cmps(c,0,(int32_t)c->r[3],0); // 80170C30
  if (!crb(c,2)) { goto L_80170C40; } // 80170C34
  c->r[3]=0u+0xFFFFFFFFu; // 80170C38
  goto L_80170CD0; // 80170C3C
L_80170C40:;
  c->lr=0x80170C44u; f_80154410(c); // 80170C40
  c->r[31]=c->r[3]|c->r[3]; // 80170C44
L_80170C48:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80170C48
  cmps(c,0,(int32_t)c->r[0],0); // 80170C4C
  if (crb(c,2)) { goto L_80170CC4; } // 80170C50
  cmps(c,0,(int32_t)c->r[0],-1); // 80170C54
  if (crb(c,2)) { goto L_80170CC4; } // 80170C58
  cmps(c,0,(int32_t)c->r[0],10); // 80170C5C
  if (crb(c,2)) { goto L_80170CC4; } // 80170C60
  cmps(c,0,(int32_t)c->r[0],3); // 80170C64
  if (!crb(c,2)) { goto L_80170CB8; } // 80170C68
  c->r[0]=R32(c->r[30]+0x00000008u); // 80170C6C
  cmpu(c,0,c->r[0],0x00000004u); // 80170C70
  if (crb(c,2)) { goto L_80170CC4; } // 80170C74
  cmpu(c,0,c->r[0],0x00000005u); // 80170C78
  if (crb(c,2)) { goto L_80170CC4; } // 80170C7C
  cmpu(c,0,c->r[0],0x0000000Du); // 80170C80
  if (crb(c,2)) { goto L_80170CC4; } // 80170C84
  cmpu(c,0,c->r[0],0x00000021u); // 80170C88
  if (crb(c,2)) { goto L_80170CC4; } // 80170C8C
  cmpu(c,0,c->r[0],0x00000022u); // 80170C90
  if (crb(c,2)) { goto L_80170CC4; } // 80170C94
  cmpu(c,0,c->r[0],0x00000029u); // 80170C98
  if (crb(c,2)) { goto L_80170CC4; } // 80170C9C
  cmpu(c,0,c->r[0],0x0000002Au); // 80170CA0
  if (crb(c,2)) { goto L_80170CC4; } // 80170CA4
  cmpu(c,0,c->r[0],0x0000000Fu); // 80170CA8
  if (crb(c,2)) { goto L_80170CC4; } // 80170CAC
  cmpu(c,0,c->r[0],0x00000025u); // 80170CB0
  if (crb(c,2)) { goto L_80170CC4; } // 80170CB4
L_80170CB8:;
  c->r[3]=c->r[13]+0xFFFFAC38u; // 80170CB8
  c->lr=0x80170CC0u; f_801581D4(c); // 80170CBC
  IRQCHK(c); goto L_80170C48; // 80170CC0
L_80170CC4:;
  c->r[3]=c->r[31]|c->r[31]; // 80170CC4
  c->lr=0x80170CCCu; f_80154438(c); // 80170CC8
  c->r[3]=0u+0x00000000u; // 80170CCC
L_80170CD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170CD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170CD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80170CD8
  c->lr=c->r[0]; // 80170CDC
  c->r[1]=c->r[1]+0x00000010u; // 80170CE0
  return; // 80170CE4
}

// fn_80170CE8
void f_80170CE8(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFAC38u; // 80170CE8
  f_801582C0(c); return; // 80170CEC
}

// __BS2DVDLowCallback
void f_80170CF0(Ctx* __restrict c) {
  trace_call(0x80170CF0u);
  c->r[3]=0u+0x80000000u; // 80170CF0
  return; // 80170CF4
}

// __BS2DVDLowCallback_80170CF8
void f_80170CF8(Ctx* __restrict c) {
  trace_call(0x80170CF8u);
  W32(c->r[13]+0xFFFFACA0u,c->r[3]); // 80170CF8
  return; // 80170CFC
}

// __DVDGetCoverStatus
void f_80170D00(Ctx* __restrict c) {
  trace_call(0x80170D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170D00
  c->r[0]=c->lr; // 80170D04
  c->r[3]=0u+0x80170000u; // 80170D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170D0C
  c->r[0]=0u+0x00000000u; // 80170D10
  c->r[3]=c->r[3]+0x00000CF8u; // 80170D14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170D18
  W32(c->r[13]+0xFFFFACA0u,c->r[0]); // 80170D1C
  c->lr=0x80170D24u; f_801740C4(c); // 80170D20
L_80170D24:;
  c->r[0]=R32(c->r[13]+0xFFFFACA0u); // 80170D24
  cmps(c,0,(int32_t)c->r[0],0); // 80170D28
  if (crb(c,2)) { IRQCHK(c); goto L_80170D24; } // 80170D2C
  c->r[0]=R32(c->r[13]+0xFFFFACA0u); // 80170D30
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80170D34
  if (!crb(c,2)) { goto L_80170D44; } // 80170D38
  c->r[3]=0u+0x00000000u; // 80170D3C
  goto L_80170DB4; // 80170D40
L_80170D44:;
  c->lr=0x80170D48u; f_801740A8(c); // 80170D44
  c->r[31]=c->r[3]|c->r[3]; // 80170D48
  c->lr=0x80170D50u; f_801584AC(c); // 80170D4C
  c->r[6]=0u+0x80000000u; // 80170D50
  c->r[5]=0u+0x10620000u; // 80170D54
  c->r[6]=R32(c->r[6]+0x000000F8u); // 80170D58
  c->r[7]=c->r[5]+0x00004DD3u; // 80170D5C
  c->r[8]=R32(c->r[13]+0xFFFFACC8u); // 80170D60
  c->r[0]=0u+0x00000000u; // 80170D64
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 80170D68
  c->r[9]=R32(c->r[13]+0xFFFFACCCu); // 80170D6C
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 80170D70
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 80170D74
  c->r[5]=c->r[0]^0x80000000u; // 80170D78
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 80170D7C
  c->r[0]=c->r[0]^0x80000000u; // 80170D80
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 80170D84
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 80170D88
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 80170D8C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80170D90
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80170D94
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80170D98
  if (crb(c,2)) { goto L_80170DA8; } // 80170D9C
  c->r[3]=0u+0x00000000u; // 80170DA0
  goto L_80170DB4; // 80170DA4
L_80170DA8:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 80170DA8
  c->r[3]=0u-c->r[0]; // 80170DAC
  c->r[3]=c->r[3]+0x00000002u; // 80170DB0
L_80170DB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170DB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80170DB8
  c->lr=c->r[0]; // 80170DBC
  c->r[1]=c->r[1]+0x00000010u; // 80170DC0
  return; // 80170DC4
}

// __DVDResetWithNoSpinup
void f_80170DC8(Ctx* __restrict c) {
  trace_call(0x80170DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170DC8
  c->r[0]=c->lr; // 80170DCC
  c->r[3]=0u+0x00000000u; // 80170DD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170DD4
  c->r[0]=0u+0x00000000u; // 80170DD8
  W32(c->r[13]+0xFFFFACA0u,c->r[0]); // 80170DDC
  c->lr=0x80170DE4u; f_8017374C(c); // 80170DE0
  c->r[3]=0u+0x80170000u; // 80170DE4
  c->r[3]=c->r[3]+0x00000CF8u; // 80170DE8
  c->lr=0x80170DF0u; f_80173758(c); // 80170DEC
L_80170DF0:;
  c->r[0]=R32(c->r[13]+0xFFFFACA0u); // 80170DF0
  cmps(c,0,(int32_t)c->r[0],0); // 80170DF4
  if (crb(c,2)) { IRQCHK(c); goto L_80170DF0; } // 80170DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80170DFC
  c->lr=c->r[0]; // 80170E00
  c->r[1]=c->r[1]+0x00000010u; // 80170E04
  return; // 80170E08
}

// __DVDPrepareResetAsync
void f_80170E0C(Ctx* __restrict c) {
  trace_call(0x80170E0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170E0C
  c->r[0]=c->lr; // 80170E10
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170E14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80170E18
  c->r[31]=c->r[3]|c->r[3]; // 80170E1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80170E20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80170E24
  c->lr=0x80170E2Cu; f_80154410(c); // 80170E28
  c->r[29]=c->r[3]|c->r[3]; // 80170E2C
  c->lr=0x80170E34u; f_80171094(c); // 80170E30
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 80170E34
  cmps(c,0,(int32_t)c->r[0],0); // 80170E38
  if (crb(c,2)) { goto L_80170E48; } // 80170E3C
  W32(c->r[13]+0xFFFFACE0u,c->r[31]); // 80170E40
  goto L_80170F04; // 80170E44
L_80170E48:;
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 80170E48
  cmps(c,0,(int32_t)c->r[3],0); // 80170E4C
  if (crb(c,2)) { goto L_80170E5C; } // 80170E50
  c->r[0]=0u+0x00000000u; // 80170E54
  W32(c->r[3]+0x00000028u,c->r[0]); // 80170E58
L_80170E5C:;
  c->lr=0x80170E60u; f_80154410(c); // 80170E5C
  c->r[30]=c->r[3]|c->r[3]; // 80170E60
  c->lr=0x80170E68u; f_80154410(c); // 80170E64
  c->r[0]=R32(c->r[13]+0xFFFFACF0u); // 80170E68
  c->r[4]=0u+0x00000001u; // 80170E6C
  W32(c->r[13]+0xFFFFAC64u,c->r[4]); // 80170E70
  cmps(c,0,(int32_t)c->r[0],0); // 80170E74
  if (!crb(c,2)) { goto L_80170E80; } // 80170E78
  W32(c->r[13]+0xFFFFAC68u,c->r[4]); // 80170E7C
L_80170E80:;
  c->lr=0x80170E84u; f_80154438(c); // 80170E80
  goto L_80170E90; // 80170E84
L_80170E88:;
  c->r[4]=0u+0x00000000u; // 80170E88
  c->lr=0x80170E90u; f_801708A8(c); // 80170E8C
L_80170E90:;
  c->lr=0x80170E94u; f_80171134(c); // 80170E90
  cmps(c,0,(int32_t)c->r[3],0); // 80170E94
  if (!crb(c,2)) { IRQCHK(c); goto L_80170E88; } // 80170E98
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 80170E9C
  cmps(c,0,(int32_t)c->r[3],0); // 80170EA0
  if (crb(c,2)) { goto L_80170EB4; } // 80170EA4
  c->r[4]=c->r[31]|c->r[31]; // 80170EA8
  c->lr=0x80170EB0u; f_801708A8(c); // 80170EAC
  goto L_80170ED0; // 80170EB0
L_80170EB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80170EB4
  if (crb(c,2)) { goto L_80170ED0; } // 80170EB8
  c->r[12]=c->r[31]|c->r[31]; // 80170EBC
  c->r[3]=0u+0x00000000u; // 80170EC0
  c->r[4]=0u+0x00000000u; // 80170EC4
  c->ctr=c->r[12]; // 80170EC8
  if (true) { c->lr=0x80170ED0u; dispatch(c,c->ctr); } // 80170ECC
L_80170ED0:;
  c->lr=0x80170ED4u; f_80154410(c); // 80170ED0
  c->r[4]=0u+0x00000000u; // 80170ED4
  c->r[31]=c->r[3]|c->r[3]; // 80170ED8
  W32(c->r[13]+0xFFFFAC64u,c->r[4]); // 80170EDC
  c->r[0]=R32(c->r[13]+0xFFFFAC68u); // 80170EE0
  cmps(c,0,(int32_t)c->r[0],0); // 80170EE4
  if (crb(c,2)) { goto L_80170EF4; } // 80170EE8
  W32(c->r[13]+0xFFFFAC68u,c->r[4]); // 80170EEC
  c->lr=0x80170EF4u; f_8016F270(c); // 80170EF0
L_80170EF4:;
  c->r[3]=c->r[31]|c->r[31]; // 80170EF4
  c->lr=0x80170EFCu; f_80154438(c); // 80170EF8
  c->r[3]=c->r[30]|c->r[30]; // 80170EFC
  c->lr=0x80170F04u; f_80154438(c); // 80170F00
L_80170F04:;
  c->r[3]=c->r[29]|c->r[29]; // 80170F04
  c->lr=0x80170F0Cu; f_80154438(c); // 80170F08
  c->r[0]=R32(c->r[1]+0x00000024u); // 80170F0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80170F10
  c->r[30]=R32(c->r[1]+0x00000018u); // 80170F14
  c->r[29]=R32(c->r[1]+0x00000014u); // 80170F18
  c->lr=c->r[0]; // 80170F1C
  c->r[1]=c->r[1]+0x00000020u; // 80170F20
  return; // 80170F24
}

// fn_80170F28
void f_80170F28(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 80170F28
  W32(c->r[13]+0xFFFFACA4u,c->r[0]); // 80170F2C
  return; // 80170F30
}

// __DVDPrepareReset
void f_80170F34(Ctx* __restrict c) {
  trace_call(0x80170F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170F34
  c->r[0]=c->lr; // 80170F38
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170F3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80170F40
  W32(c->r[1]+0x00000018u,c->r[30]); // 80170F44
  W32(c->r[1]+0x00000014u,c->r[29]); // 80170F48
  c->lr=0x80170F50u; f_80154410(c); // 80170F4C
  c->r[31]=0u+0x00000000u; // 80170F50
  W32(c->r[13]+0xFFFFACA4u,c->r[31]); // 80170F54
  c->lr=0x80170F5Cu; f_80154410(c); // 80170F58
  c->r[29]=c->r[3]|c->r[3]; // 80170F5C
  c->lr=0x80170F64u; f_80171094(c); // 80170F60
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 80170F64
  cmps(c,0,(int32_t)c->r[0],0); // 80170F68
  if (crb(c,2)) { goto L_80170F80; } // 80170F6C
  c->r[3]=0u+0x80170000u; // 80170F70
  c->r[3]=c->r[3]+0x00000F28u; // 80170F74
  W32(c->r[13]+0xFFFFACE0u,c->r[3]); // 80170F78
  goto L_80171034; // 80170F7C
L_80170F80:;
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 80170F80
  cmps(c,0,(int32_t)c->r[3],0); // 80170F84
  if (crb(c,2)) { goto L_80170F90; } // 80170F88
  W32(c->r[3]+0x00000028u,c->r[31]); // 80170F8C
L_80170F90:;
  c->lr=0x80170F94u; f_80154410(c); // 80170F90
  c->r[31]=c->r[3]|c->r[3]; // 80170F94
  c->lr=0x80170F9Cu; f_80154410(c); // 80170F98
  c->r[0]=R32(c->r[13]+0xFFFFACF0u); // 80170F9C
  c->r[4]=0u+0x00000001u; // 80170FA0
  W32(c->r[13]+0xFFFFAC64u,c->r[4]); // 80170FA4
  cmps(c,0,(int32_t)c->r[0],0); // 80170FA8
  if (!crb(c,2)) { goto L_80170FB4; } // 80170FAC
  W32(c->r[13]+0xFFFFAC68u,c->r[4]); // 80170FB0
L_80170FB4:;
  c->lr=0x80170FB8u; f_80154438(c); // 80170FB4
  goto L_80170FC4; // 80170FB8
L_80170FBC:;
  c->r[4]=0u+0x00000000u; // 80170FBC
  c->lr=0x80170FC4u; f_801708A8(c); // 80170FC0
L_80170FC4:;
  c->lr=0x80170FC8u; f_80171134(c); // 80170FC4
  cmps(c,0,(int32_t)c->r[3],0); // 80170FC8
  if (!crb(c,2)) { IRQCHK(c); goto L_80170FBC; } // 80170FCC
  c->r[3]=R32(c->r[13]+0xFFFFACF0u); // 80170FD0
  cmps(c,0,(int32_t)c->r[3],0); // 80170FD4
  if (crb(c,2)) { goto L_80170FEC; } // 80170FD8
  c->r[4]=0u+0x80170000u; // 80170FDC
  c->r[4]=c->r[4]+0x00000F28u; // 80170FE0
  c->lr=0x80170FE8u; f_801708A8(c); // 80170FE4
  goto L_80171000; // 80170FE8
L_80170FEC:;
  c->r[0]=0u+0x80170000u; // 80170FEC
  c->r[0]=addc(c,c->r[0],0x00000F28u,0); cr0(c,c->r[0]); // 80170FF0
  if (crb(c,2)) { goto L_80171000; } // 80170FF4
  c->r[0]=0u+0x00000001u; // 80170FF8
  W32(c->r[13]+0xFFFFACA4u,c->r[0]); // 80170FFC
L_80171000:;
  c->lr=0x80171004u; f_80154410(c); // 80171000
  c->r[4]=0u+0x00000000u; // 80171004
  c->r[30]=c->r[3]|c->r[3]; // 80171008
  W32(c->r[13]+0xFFFFAC64u,c->r[4]); // 8017100C
  c->r[0]=R32(c->r[13]+0xFFFFAC68u); // 80171010
  cmps(c,0,(int32_t)c->r[0],0); // 80171014
  if (crb(c,2)) { goto L_80171024; } // 80171018
  W32(c->r[13]+0xFFFFAC68u,c->r[4]); // 8017101C
  c->lr=0x80171024u; f_8016F270(c); // 80171020
L_80171024:;
  c->r[3]=c->r[30]|c->r[30]; // 80171024
  c->lr=0x8017102Cu; f_80154438(c); // 80171028
  c->r[3]=c->r[31]|c->r[31]; // 8017102C
  c->lr=0x80171034u; f_80154438(c); // 80171030
L_80171034:;
  c->r[3]=c->r[29]|c->r[29]; // 80171034
  c->lr=0x8017103Cu; f_80154438(c); // 80171038
  c->lr=0x80171040u; f_80154424(c); // 8017103C
L_80171040:;
  c->r[0]=R32(c->r[13]+0xFFFFACA4u); // 80171040
  cmps(c,0,(int32_t)c->r[0],1); // 80171044
  if (!crb(c,2)) { IRQCHK(c); goto L_80171040; } // 80171048
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017104C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80171050
  c->r[30]=R32(c->r[1]+0x00000018u); // 80171054
  c->r[29]=R32(c->r[1]+0x00000014u); // 80171058
  c->lr=c->r[0]; // 8017105C
  c->r[1]=c->r[1]+0x00000020u; // 80171060
  return; // 80171064
}

// __DVDTestAlarm
void f_80171068(Ctx* __restrict c) {
  trace_call(0x80171068u);
  c->r[4]=0u+0x80440000u; // 80171068
  c->r[4]=c->r[4]+0x00004A20u; // 8017106C
  cmpu(c,0,c->r[3],c->r[4]); // 80171070
  if (!crb(c,2)) { goto L_80171080; } // 80171074
  c->r[3]=0u+0x00000001u; // 80171078
  return; // 8017107C
L_80171080:;
  f_80174514(c); return; // 80171080
  return; // 80171084
}

// __DVDStopMotorAsync
void f_80171088(Ctx* __restrict c) {
  trace_call(0x80171088u);
  c->r[3]=0u+0x00000001u; // 80171088
  return; // 8017108C
}

// __DVDRestartMotor
void f_80171090(Ctx* __restrict c) {
  trace_call(0x80171090u);
  return; // 80171090
}

// __DVDClearWaitingQueue
void f_80171094(Ctx* __restrict c) {
  trace_call(0x80171094u);
  c->r[6]=0u+0x80440000u; // 80171094
  c->r[6]=c->r[6]+0x00004AB0u; // 80171098
  c->r[5]=c->r[6]+0x00000008u; // 8017109C
  W32(c->r[6]+0x00000000u,c->r[6]); // 801710A0
  c->r[4]=c->r[6]+0x00000010u; // 801710A4
  c->r[3]=c->r[6]+0x00000018u; // 801710A8
  W32(c->r[6]+0x00000004u,c->r[6]); // 801710AC
  W32(c->r[6]+0x00000008u,c->r[5]); // 801710B0
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801710B4
  W32(c->r[6]+0x00000010u,c->r[4]); // 801710B8
  W32(c->r[6]+0x00000014u,c->r[4]); // 801710BC
  W32(c->r[6]+0x00000018u,c->r[3]); // 801710C0
  W32(c->r[6]+0x0000001Cu,c->r[3]); // 801710C4
  return; // 801710C8
}

// __DVDPushWaitingQueue
void f_801710CC(Ctx* __restrict c) {
  trace_call(0x801710CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801710CC
  c->r[0]=c->lr; // 801710D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801710D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801710D8
  c->r[31]=c->r[4]|c->r[4]; // 801710DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801710E0
  c->r[30]=c->r[3]|c->r[3]; // 801710E4
  c->lr=0x801710ECu; f_80154410(c); // 801710E8
  c->r[4]=0u+0x80440000u; // 801710EC
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801710F0
  c->r[4]=c->r[4]+0x00004AB0u; // 801710F4
  c->r[5]=c->r[4]+c->r[0]; // 801710F8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801710FC
  W32(c->r[4]+0x00000000u,c->r[31]); // 80171100
  c->r[0]=R32(c->r[5]+0x00000004u); // 80171104
  W32(c->r[31]+0x00000004u,c->r[0]); // 80171108
  W32(c->r[31]+0x00000000u,c->r[5]); // 8017110C
  W32(c->r[5]+0x00000004u,c->r[31]); // 80171110
  c->lr=0x80171118u; f_80154438(c); // 80171114
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171118
  c->r[3]=0u+0x00000001u; // 8017111C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80171120
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171124
  c->lr=c->r[0]; // 80171128
  c->r[1]=c->r[1]+0x00000010u; // 8017112C
  return; // 80171130
}

// __DVDPopWaitingQueue
void f_80171134(Ctx* __restrict c) {
  trace_call(0x80171134u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171134
  c->r[0]=c->lr; // 80171138
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017113C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171140
  c->lr=0x80171148u; f_80154410(c); // 80171144
  c->r[4]=0u+0x80440000u; // 80171148
  c->r[0]=0u+0x00000004u; // 8017114C
  c->r[31]=0u+0x00000000u; // 80171150
  c->r[4]=c->r[4]+0x00004AB0u; // 80171154
  c->ctr=c->r[0]; // 80171158
L_8017115C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017115C
  cmpu(c,0,c->r[0],c->r[4]); // 80171160
  if (crb(c,2)) { goto L_801711AC; } // 80171164
  c->lr=0x8017116Cu; f_80154438(c); // 80171168
  c->lr=0x80171170u; f_80154410(c); // 8017116C
  c->r[4]=0u+0x80440000u; // 80171170
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80171174
  c->r[4]=c->r[4]+0x00004AB0u; // 80171178
  c->r[31]=R32(c->r[4]+c->r[0]); // 8017117C
  c->r[5]=c->r[4]+c->r[0]; // 80171180
  c->r[0]=R32(c->r[31]+0x00000000u); // 80171184
  W32(c->r[5]+0x00000000u,c->r[0]); // 80171188
  c->r[4]=R32(c->r[31]+0x00000000u); // 8017118C
  W32(c->r[4]+0x00000004u,c->r[5]); // 80171190
  c->lr=0x80171198u; f_80154438(c); // 80171194
  c->r[0]=0u+0x00000000u; // 80171198
  c->r[3]=c->r[31]|c->r[31]; // 8017119C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801711A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801711A4
  goto L_801711C0; // 801711A8
L_801711AC:;
  c->r[4]=c->r[4]+0x00000008u; // 801711AC
  c->r[31]=c->r[31]+0x00000001u; // 801711B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017115C; } // 801711B4
  c->lr=0x801711BCu; f_80154438(c); // 801711B8
  c->r[3]=0u+0x00000000u; // 801711BC
L_801711C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801711C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801711C4
  c->lr=c->r[0]; // 801711C8
  c->r[1]=c->r[1]+0x00000010u; // 801711CC
  return; // 801711D0
}

// __DVDCheckWaitingQueue
void f_801711D4(Ctx* __restrict c) {
  trace_call(0x801711D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801711D4
  c->r[0]=c->lr; // 801711D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801711DC
  c->lr=0x801711E4u; f_80154410(c); // 801711E0
  c->r[4]=0u+0x80440000u; // 801711E4
  c->r[0]=0u+0x00000004u; // 801711E8
  c->r[4]=c->r[4]+0x00004AB0u; // 801711EC
  c->ctr=c->r[0]; // 801711F0
L_801711F4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801711F4
  cmpu(c,0,c->r[0],c->r[4]); // 801711F8
  if (crb(c,2)) { goto L_8017120C; } // 801711FC
  c->lr=0x80171204u; f_80154438(c); // 80171200
  c->r[3]=0u+0x00000001u; // 80171204
  goto L_8017121C; // 80171208
L_8017120C:;
  c->r[4]=c->r[4]+0x00000008u; // 8017120C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801711F4; } // 80171210
  c->lr=0x80171218u; f_80154438(c); // 80171214
  c->r[3]=0u+0x00000000u; // 80171218
L_8017121C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017121C
  c->lr=c->r[0]; // 80171220
  c->r[1]=c->r[1]+0x00000010u; // 80171224
  return; // 80171228
}

// __DVDGetNextWaitingQueue
void f_8017122C(Ctx* __restrict c) {
  trace_call(0x8017122Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017122C
  c->r[0]=c->lr; // 80171230
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171238
  c->lr=0x80171240u; f_80154410(c); // 8017123C
  c->r[4]=0u+0x80440000u; // 80171240
  c->r[0]=0u+0x00000004u; // 80171244
  c->r[4]=c->r[4]+0x00004AB0u; // 80171248
  c->ctr=c->r[0]; // 8017124C
L_80171250:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 80171250
  cmpu(c,0,c->r[31],c->r[4]); // 80171254
  if (crb(c,2)) { goto L_80171268; } // 80171258
  c->lr=0x80171260u; f_80154438(c); // 8017125C
  c->r[3]=c->r[31]|c->r[31]; // 80171260
  goto L_80171278; // 80171264
L_80171268:;
  c->r[4]=c->r[4]+0x00000008u; // 80171268
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80171250; } // 8017126C
  c->lr=0x80171274u; f_80154438(c); // 80171270
  c->r[3]=0u+0x00000000u; // 80171274
L_80171278:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017127C
  c->lr=c->r[0]; // 80171280
  c->r[1]=c->r[1]+0x00000010u; // 80171284
  return; // 80171288
}

// __DVDDequeueWaitingQueue
void f_8017128C(Ctx* __restrict c) {
  trace_call(0x8017128Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017128C
  c->r[0]=c->lr; // 80171290
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171298
  c->r[31]=c->r[3]|c->r[3]; // 8017129C
  c->lr=0x801712A4u; f_80154410(c); // 801712A0
  c->r[4]=R32(c->r[31]+0x00000004u); // 801712A4
  c->r[5]=R32(c->r[31]+0x00000000u); // 801712A8
  cmps(c,0,(int32_t)c->r[4],0); // 801712AC
  if (crb(c,2)) { goto L_801712BC; } // 801712B0
  cmps(c,0,(int32_t)c->r[5],0); // 801712B4
  if (!crb(c,2)) { goto L_801712C8; } // 801712B8
L_801712BC:;
  c->lr=0x801712C0u; f_80154438(c); // 801712BC
  c->r[3]=0u+0x00000000u; // 801712C0
  goto L_801712D8; // 801712C4
L_801712C8:;
  W32(c->r[4]+0x00000000u,c->r[5]); // 801712C8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801712CC
  c->lr=0x801712D4u; f_80154438(c); // 801712D0
  c->r[3]=0u+0x00000001u; // 801712D4
L_801712D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801712D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801712DC
  c->lr=c->r[0]; // 801712E0
  c->r[1]=c->r[1]+0x00000010u; // 801712E4
  return; // 801712E8
}

// dvd_cbForNandClose
void f_801712EC(Ctx* __restrict c) {
  trace_call(0x801712ECu);
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 801712EC
  cmps(c,0,(int32_t)c->r[12],0); // 801712F0
  if (crb(c,2)) return; // 801712F4
  c->r[0]=cntlz(c->r[3]); // 801712F8
  c->r[4]=0u+0x00000000u; // 801712FC
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 80171300
  c->r[3]=0u-c->r[0]; // 80171304
  c->r[3]=c->r[3]+0x00000002u; // 80171308
  c->ctr=c->r[12]; // 8017130C
  if (true) { dispatch(c,c->ctr); return; } // 80171310
  return; // 80171314
}

// dvd_cbForNandWrite
void f_80171318(Ctx* __restrict c) {
  trace_call(0x80171318u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171318
  c->r[0]=c->lr; // 8017131C
  c->r[3]=0u+0x80440000u; // 80171320
  c->r[4]=0u+0x80170000u; // 80171324
  c->r[5]=0u+0x80440000u; // 80171328
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017132C
  c->r[3]=c->r[3]+0x00004AE0u; // 80171330
  c->r[4]=c->r[4]+0x000012ECu; // 80171334
  c->r[5]=c->r[5]+0x00004B6Cu; // 80171338
  c->lr=0x80171340u; f_8017F340(c); // 8017133C
  cmps(c,0,(int32_t)c->r[3],0); // 80171340
  if (crb(c,2)) { goto L_80171364; } // 80171344
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171348
  cmps(c,0,(int32_t)c->r[12],0); // 8017134C
  if (crb(c,2)) { goto L_80171364; } // 80171350
  c->r[3]=0u+0x00000002u; // 80171354
  c->r[4]=0u+0x00000000u; // 80171358
  c->ctr=c->r[12]; // 8017135C
  if (true) { c->lr=0x80171364u; dispatch(c,c->ctr); } // 80171360
L_80171364:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171364
  c->lr=c->r[0]; // 80171368
  c->r[1]=c->r[1]+0x00000010u; // 8017136C
  return; // 80171370
}

// dvd_cbForNandSeek
void f_80171374(Ctx* __restrict c) {
  trace_call(0x80171374u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171374
  c->r[0]=c->lr; // 80171378
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017137C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171380
  c->r[31]=0u+0x80440000u; // 80171384
  c->r[31]=c->r[31]+0x00004AE0u; // 80171388
  c->r[4]=R32(c->r[13]+0xFFFFACFCu); // 8017138C
  c->r[0]=c->r[4]+0x00000001u; // 80171390
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 80171394
  cmpu(c,0,c->r[3],c->r[0]); // 80171398
  if (!crb(c,2)) { goto L_8017140C; } // 8017139C
  c->r[3]=c->r[31]+0x00000160u; // 801713A0
  c->r[4]=0u+0x00000080u; // 801713A4
  c->lr=0x801713ACu; f_8014F83C(c); // 801713A8
  c->r[6]=0u+0x80170000u; // 801713AC
  c->r[3]=c->r[31]+0x00000000u; // 801713B0
  c->r[4]=c->r[31]+0x00000160u; // 801713B4
  c->r[7]=c->r[31]+0x0000008Cu; // 801713B8
  c->r[6]=c->r[6]+0x00001318u; // 801713BC
  c->r[5]=0u+0x00000080u; // 801713C0
  c->lr=0x801713C8u; f_8017E534(c); // 801713C4
  cmps(c,0,(int32_t)c->r[3],0); // 801713C8
  if (crb(c,2)) { goto L_80171428; } // 801713CC
  c->r[4]=0u+0x80170000u; // 801713D0
  c->r[3]=c->r[31]+0x00000000u; // 801713D4
  c->r[4]=c->r[4]+0x000012ECu; // 801713D8
  c->r[5]=c->r[31]+0x0000008Cu; // 801713DC
  c->lr=0x801713E4u; f_8017F340(c); // 801713E0
  cmps(c,0,(int32_t)c->r[3],0); // 801713E4
  if (crb(c,2)) { goto L_80171428; } // 801713E8
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 801713EC
  cmps(c,0,(int32_t)c->r[12],0); // 801713F0
  if (crb(c,2)) { goto L_80171428; } // 801713F4
  c->r[3]=0u+0x00000002u; // 801713F8
  c->r[4]=0u+0x00000000u; // 801713FC
  c->ctr=c->r[12]; // 80171400
  if (true) { c->lr=0x80171408u; dispatch(c,c->ctr); } // 80171404
  goto L_80171428; // 80171408
L_8017140C:;
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 8017140C
  cmps(c,0,(int32_t)c->r[12],0); // 80171410
  if (crb(c,2)) { goto L_80171428; } // 80171414
  c->r[3]=0u+0x00000002u; // 80171418
  c->r[4]=0u+0x00000000u; // 8017141C
  c->ctr=c->r[12]; // 80171420
  if (true) { c->lr=0x80171428u; dispatch(c,c->ctr); } // 80171424
L_80171428:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171428
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017142C
  c->lr=c->r[0]; // 80171430
  c->r[1]=c->r[1]+0x00000010u; // 80171434
  return; // 80171438
}

// dvd_cbForNandWrite0
void f_8017143C(Ctx* __restrict c) {
  trace_call(0x8017143Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017143C
  c->r[0]=c->lr; // 80171440
  cmpu(c,0,c->r[3],0x00000080u); // 80171444
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017144C
  c->r[31]=0u+0x80440000u; // 80171450
  c->r[31]=c->r[31]+0x00004AE0u; // 80171454
  if (!crb(c,2)) { goto L_8017152C; } // 80171458
  c->r[4]=R32(c->r[13]+0xFFFFACFCu); // 8017145C
  c->r[6]=0u+0x80170000u; // 80171460
  c->r[3]=c->r[31]+0x00000000u; // 80171464
  c->r[7]=c->r[31]+0x0000008Cu; // 80171468
  c->r[0]=c->r[4]+0x00000001u; // 8017146C
  c->r[6]=c->r[6]+0x00001374u; // 80171470
  c->r[4]=rotl(c->r[0],7)&0xFFFFFF80u; // 80171474
  c->r[5]=0u+0x00000000u; // 80171478
  c->lr=0x80171480u; f_8017E64C(c); // 8017147C
  cmps(c,0,(int32_t)c->r[3],0); // 80171480
  if (crb(c,2)) { goto L_80171548; } // 80171484
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 80171488
  c->r[0]=c->r[3]+0x00000001u; // 8017148C
  c->r[3]=rotl(c->r[0],7)&0xFFFFFF80u; // 80171490
  c->r[0]=c->r[3]+0x00010000u; // 80171494
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80171498
  if (!crb(c,2)) { goto L_8017150C; } // 8017149C
  c->r[3]=c->r[31]+0x00000160u; // 801714A0
  c->r[4]=0u+0x00000080u; // 801714A4
  c->lr=0x801714ACu; f_8014F83C(c); // 801714A8
  c->r[6]=0u+0x80170000u; // 801714AC
  c->r[3]=c->r[31]+0x00000000u; // 801714B0
  c->r[4]=c->r[31]+0x00000160u; // 801714B4
  c->r[7]=c->r[31]+0x0000008Cu; // 801714B8
  c->r[6]=c->r[6]+0x00001318u; // 801714BC
  c->r[5]=0u+0x00000080u; // 801714C0
  c->lr=0x801714C8u; f_8017E534(c); // 801714C4
  cmps(c,0,(int32_t)c->r[3],0); // 801714C8
  if (crb(c,2)) { goto L_80171548; } // 801714CC
  c->r[4]=0u+0x80170000u; // 801714D0
  c->r[3]=c->r[31]+0x00000000u; // 801714D4
  c->r[4]=c->r[4]+0x000012ECu; // 801714D8
  c->r[5]=c->r[31]+0x0000008Cu; // 801714DC
  c->lr=0x801714E4u; f_8017F340(c); // 801714E0
  cmps(c,0,(int32_t)c->r[3],0); // 801714E4
  if (crb(c,2)) { goto L_80171548; } // 801714E8
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 801714EC
  cmps(c,0,(int32_t)c->r[12],0); // 801714F0
  if (crb(c,2)) { goto L_80171548; } // 801714F4
  c->r[3]=0u+0x00000002u; // 801714F8
  c->r[4]=0u+0x00000000u; // 801714FC
  c->ctr=c->r[12]; // 80171500
  if (true) { c->lr=0x80171508u; dispatch(c,c->ctr); } // 80171504
  goto L_80171548; // 80171508
L_8017150C:;
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 8017150C
  cmps(c,0,(int32_t)c->r[12],0); // 80171510
  if (crb(c,2)) { goto L_80171548; } // 80171514
  c->r[3]=0u+0x00000002u; // 80171518
  c->r[4]=0u+0x00000000u; // 8017151C
  c->ctr=c->r[12]; // 80171520
  if (true) { c->lr=0x80171528u; dispatch(c,c->ctr); } // 80171524
  goto L_80171548; // 80171528
L_8017152C:;
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 8017152C
  cmps(c,0,(int32_t)c->r[12],0); // 80171530
  if (crb(c,2)) { goto L_80171548; } // 80171534
  c->r[3]=0u+0x00000002u; // 80171538
  c->r[4]=0u+0x00000000u; // 8017153C
  c->ctr=c->r[12]; // 80171540
  if (true) { c->lr=0x80171548u; dispatch(c,c->ctr); } // 80171544
L_80171548:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171548
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017154C
  c->lr=c->r[0]; // 80171550
  c->r[1]=c->r[1]+0x00000010u; // 80171554
  return; // 80171558
}

// cbForNandSeek2
void f_8017155C(Ctx* __restrict c) {
  trace_call(0x8017155Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017155C
  c->r[0]=c->lr; // 80171560
  cmpu(c,0,c->r[3],0x00000080u); // 80171564
  c->r[7]=0u+0x80440000u; // 80171568
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017156C
  c->r[7]=c->r[7]+0x00004AE0u; // 80171570
  if (!crb(c,2)) { goto L_801715EC; } // 80171574
  c->r[4]=c->r[7]+0x000001E0u; // 80171578
  c->r[3]=0u+0x24920000u; // 8017157C
  c->r[5]=R32(c->r[4]+0x00000018u); // 80171580
  c->r[0]=c->r[3]+0x00004925u; // 80171584
  c->r[6]=0u+0x80170000u; // 80171588
  c->r[3]=c->r[7]+0x00000000u; // 8017158C
  c->r[9]=c->r[5]+0x00000001u; // 80171590
  c->r[7]=c->r[7]+0x0000008Cu; // 80171594
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 80171598
  c->r[6]=c->r[6]+0x0000143Cu; // 8017159C
  c->r[5]=0u+0x00000080u; // 801715A0
  c->r[0]=c->r[9]-c->r[8]; // 801715A4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801715A8
  c->r[0]=c->r[0]+c->r[8]; // 801715AC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801715B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)7); // 801715B4
  c->r[0]=c->r[9]-c->r[0]; // 801715B8
  W32(c->r[4]+0x00000018u,c->r[0]); // 801715BC
  c->lr=0x801715C4u; f_8017E534(c); // 801715C0
  cmps(c,0,(int32_t)c->r[3],0); // 801715C4
  if (crb(c,2)) { goto L_80171608; } // 801715C8
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 801715CC
  cmps(c,0,(int32_t)c->r[12],0); // 801715D0
  if (crb(c,2)) { goto L_80171608; } // 801715D4
  c->r[3]=0u+0x00000002u; // 801715D8
  c->r[4]=0u+0x00000000u; // 801715DC
  c->ctr=c->r[12]; // 801715E0
  if (true) { c->lr=0x801715E8u; dispatch(c,c->ctr); } // 801715E4
  goto L_80171608; // 801715E8
L_801715EC:;
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 801715EC
  cmps(c,0,(int32_t)c->r[12],0); // 801715F0
  if (crb(c,2)) { goto L_80171608; } // 801715F4
  c->r[3]=0u+0x00000002u; // 801715F8
  c->r[4]=0u+0x00000000u; // 801715FC
  c->ctr=c->r[12]; // 80171600
  if (true) { c->lr=0x80171608u; dispatch(c,c->ctr); } // 80171604
L_80171608:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171608
  c->lr=c->r[0]; // 8017160C
  c->r[1]=c->r[1]+0x00000010u; // 80171610
  return; // 80171614
}

// dvd_cbForNandRead
void f_80171618(Ctx* __restrict c) {
  trace_call(0x80171618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171618
  c->r[0]=c->lr; // 8017161C
  cmpu(c,0,c->r[3],0x00000080u); // 80171620
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171628
  c->r[31]=0u+0x80440000u; // 8017162C
  c->r[31]=c->r[31]+0x00004AE0u; // 80171630
  if (!crb(c,2)) { goto L_80171688; } // 80171634
  c->r[3]=c->r[31]+0x000001E0u; // 80171638
  c->r[6]=0u+0x80170000u; // 8017163C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80171640
  c->r[3]=c->r[31]+0x00000000u; // 80171644
  c->r[6]=c->r[6]+0x0000155Cu; // 80171648
  c->r[7]=c->r[31]+0x0000008Cu; // 8017164C
  W32(c->r[13]+0xFFFFACFCu,c->r[0]); // 80171650
  c->r[4]=0u+0x00000080u; // 80171654
  c->r[5]=0u+0x00000000u; // 80171658
  c->lr=0x80171660u; f_8017E64C(c); // 8017165C
  cmps(c,0,(int32_t)c->r[3],0); // 80171660
  if (crb(c,2)) { goto L_801716EC; } // 80171664
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171668
  cmps(c,0,(int32_t)c->r[12],0); // 8017166C
  if (crb(c,2)) { goto L_801716EC; } // 80171670
  c->r[3]=0u+0x00000002u; // 80171674
  c->r[4]=0u+0x00000000u; // 80171678
  c->ctr=c->r[12]; // 8017167C
  if (true) { c->lr=0x80171684u; dispatch(c,c->ctr); } // 80171680
  goto L_801716EC; // 80171684
L_80171688:;
  c->r[4]=c->r[31]+0x00000160u; // 80171688
  c->r[0]=0u+0x00000001u; // 8017168C
  c->r[6]=0u+0x80170000u; // 80171690
  W32(c->r[4]+0x00000018u,c->r[0]); // 80171694
  c->r[3]=c->r[31]+0x00000000u; // 80171698
  c->r[7]=c->r[31]+0x0000008Cu; // 8017169C
  c->r[6]=c->r[6]+0x00001318u; // 801716A0
  c->r[5]=0u+0x00000080u; // 801716A4
  c->lr=0x801716ACu; f_8017E534(c); // 801716A8
  cmps(c,0,(int32_t)c->r[3],0); // 801716AC
  if (crb(c,2)) { goto L_801716EC; } // 801716B0
  c->r[4]=0u+0x80170000u; // 801716B4
  c->r[3]=c->r[31]+0x00000000u; // 801716B8
  c->r[4]=c->r[4]+0x000012ECu; // 801716BC
  c->r[5]=c->r[31]+0x0000008Cu; // 801716C0
  c->lr=0x801716C8u; f_8017F340(c); // 801716C4
  cmps(c,0,(int32_t)c->r[3],0); // 801716C8
  if (crb(c,2)) { goto L_801716EC; } // 801716CC
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 801716D0
  cmps(c,0,(int32_t)c->r[12],0); // 801716D4
  if (crb(c,2)) { goto L_801716EC; } // 801716D8
  c->r[3]=0u+0x00000002u; // 801716DC
  c->r[4]=0u+0x00000000u; // 801716E0
  c->ctr=c->r[12]; // 801716E4
  if (true) { c->lr=0x801716ECu; dispatch(c,c->ctr); } // 801716E8
L_801716EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801716EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801716F0
  c->lr=c->r[0]; // 801716F4
  c->r[1]=c->r[1]+0x00000010u; // 801716F8
  return; // 801716FC
}

// dvd_cbForNandSeek0
void f_80171700(Ctx* __restrict c) {
  trace_call(0x80171700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171700
  c->r[0]=c->lr; // 80171704
  cmps(c,0,(int32_t)c->r[3],0); // 80171708
  c->r[7]=0u+0x80440000u; // 8017170C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171710
  c->r[7]=c->r[7]+0x00004AE0u; // 80171714
  if (!crb(c,2)) { goto L_80171774; } // 80171718
  c->r[3]=0u+0x00000000u; // 8017171C
  c->r[5]=c->r[7]+0x00000160u; // 80171720
  c->r[0]=0u+0x00000001u; // 80171724
  c->r[6]=0u+0x80170000u; // 80171728
  W32(c->r[13]+0xFFFFACFCu,c->r[3]); // 8017172C
  c->r[3]=c->r[7]+0x00000000u; // 80171730
  c->r[4]=c->r[7]+0x000001E0u; // 80171734
  c->r[6]=c->r[6]+0x0000143Cu; // 80171738
  W32(c->r[5]+0x00000018u,c->r[0]); // 8017173C
  c->r[7]=c->r[7]+0x0000008Cu; // 80171740
  c->r[5]=0u+0x00000080u; // 80171744
  c->lr=0x8017174Cu; f_8017E534(c); // 80171748
  cmps(c,0,(int32_t)c->r[3],0); // 8017174C
  if (crb(c,2)) { goto L_80171790; } // 80171750
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171754
  cmps(c,0,(int32_t)c->r[12],0); // 80171758
  if (crb(c,2)) { goto L_80171790; } // 8017175C
  c->r[3]=0u+0x00000002u; // 80171760
  c->r[4]=0u+0x00000000u; // 80171764
  c->ctr=c->r[12]; // 80171768
  if (true) { c->lr=0x80171770u; dispatch(c,c->ctr); } // 8017176C
  goto L_80171790; // 80171770
L_80171774:;
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171774
  cmps(c,0,(int32_t)c->r[12],0); // 80171778
  if (crb(c,2)) { goto L_80171790; } // 8017177C
  c->r[3]=0u+0x00000002u; // 80171780
  c->r[4]=0u+0x00000000u; // 80171784
  c->ctr=c->r[12]; // 80171788
  if (true) { c->lr=0x80171790u; dispatch(c,c->ctr); } // 8017178C
L_80171790:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171790
  c->lr=c->r[0]; // 80171794
  c->r[1]=c->r[1]+0x00000010u; // 80171798
  return; // 8017179C
}

// cbForNandSeek1
void f_801717A0(Ctx* __restrict c) {
  trace_call(0x801717A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801717A0
  c->r[0]=c->lr; // 801717A4
  cmpu(c,0,c->r[3],0x00000080u); // 801717A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801717AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801717B0
  c->r[31]=0u+0x80440000u; // 801717B4
  c->r[31]=c->r[31]+0x00004AE0u; // 801717B8
  if (!crb(c,2)) { goto L_8017184C; } // 801717BC
  c->r[6]=0u+0x80170000u; // 801717C0
  c->r[3]=c->r[31]+0x00000000u; // 801717C4
  c->r[4]=c->r[31]+0x000001E0u; // 801717C8
  c->r[7]=c->r[31]+0x0000008Cu; // 801717CC
  c->r[6]=c->r[6]+0x00001618u; // 801717D0
  c->r[5]=0u+0x00000080u; // 801717D4
  c->lr=0x801717DCu; f_8017E454(c); // 801717D8
  cmps(c,0,(int32_t)c->r[3],0); // 801717DC
  if (crb(c,2)) { goto L_8017188C; } // 801717E0
  c->r[4]=c->r[31]+0x00000160u; // 801717E4
  c->r[0]=0u+0x00000001u; // 801717E8
  c->r[6]=0u+0x80170000u; // 801717EC
  W32(c->r[4]+0x00000018u,c->r[0]); // 801717F0
  c->r[3]=c->r[31]+0x00000000u; // 801717F4
  c->r[7]=c->r[31]+0x0000008Cu; // 801717F8
  c->r[6]=c->r[6]+0x00001318u; // 801717FC
  c->r[5]=0u+0x00000080u; // 80171800
  c->lr=0x80171808u; f_8017E534(c); // 80171804
  cmps(c,0,(int32_t)c->r[3],0); // 80171808
  if (crb(c,2)) { goto L_8017188C; } // 8017180C
  c->r[4]=0u+0x80170000u; // 80171810
  c->r[3]=c->r[31]+0x00000000u; // 80171814
  c->r[4]=c->r[4]+0x000012ECu; // 80171818
  c->r[5]=c->r[31]+0x0000008Cu; // 8017181C
  c->lr=0x80171824u; f_8017F340(c); // 80171820
  cmps(c,0,(int32_t)c->r[3],0); // 80171824
  if (crb(c,2)) { goto L_8017188C; } // 80171828
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 8017182C
  cmps(c,0,(int32_t)c->r[12],0); // 80171830
  if (crb(c,2)) { goto L_8017188C; } // 80171834
  c->r[3]=0u+0x00000002u; // 80171838
  c->r[4]=0u+0x00000000u; // 8017183C
  c->ctr=c->r[12]; // 80171840
  if (true) { c->lr=0x80171848u; dispatch(c,c->ctr); } // 80171844
  goto L_8017188C; // 80171848
L_8017184C:;
  c->r[6]=0u+0x80170000u; // 8017184C
  c->r[3]=c->r[31]+0x00000000u; // 80171850
  c->r[6]=c->r[6]+0x00001700u; // 80171854
  c->r[7]=c->r[31]+0x0000008Cu; // 80171858
  c->r[4]=0u+0x00000000u; // 8017185C
  c->r[5]=0u+0x00000000u; // 80171860
  c->lr=0x80171868u; f_8017E64C(c); // 80171864
  cmps(c,0,(int32_t)c->r[3],0); // 80171868
  if (crb(c,2)) { goto L_8017188C; } // 8017186C
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171870
  cmps(c,0,(int32_t)c->r[12],0); // 80171874
  if (crb(c,2)) { goto L_8017188C; } // 80171878
  c->r[3]=0u+0x00000002u; // 8017187C
  c->r[4]=0u+0x00000000u; // 80171880
  c->ctr=c->r[12]; // 80171884
  if (true) { c->lr=0x8017188Cu; dispatch(c,c->ctr); } // 80171888
L_8017188C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017188C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171890
  c->lr=c->r[0]; // 80171894
  c->r[1]=c->r[1]+0x00000010u; // 80171898
  return; // 8017189C
}

// dvd_cbForNandOpen
void f_801718A0(Ctx* __restrict c) {
  trace_call(0x801718A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801718A0
  c->r[0]=c->lr; // 801718A4
  cmps(c,0,(int32_t)c->r[3],0); // 801718A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801718AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801718B0
  c->r[31]=0u+0x80440000u; // 801718B4
  c->r[31]=c->r[31]+0x00004AE0u; // 801718B8
  if (!crb(c,2)) { goto L_8017198C; } // 801718BC
  c->r[0]=R32(c->r[13]+0xFFFFACF8u); // 801718C0
  cmps(c,0,(int32_t)c->r[0],0); // 801718C4
  if (crb(c,2)) { goto L_80171934; } // 801718C8
  c->r[6]=0u+0x80170000u; // 801718CC
  c->r[3]=c->r[31]+0x00000000u; // 801718D0
  c->r[6]=c->r[6]+0x000017A0u; // 801718D4
  c->r[7]=c->r[31]+0x0000008Cu; // 801718D8
  c->r[4]=0u+0x00000080u; // 801718DC
  c->r[5]=0u+0x00000000u; // 801718E0
  c->lr=0x801718E8u; f_8017E64C(c); // 801718E4
  cmps(c,0,(int32_t)c->r[3],0); // 801718E8
  if (crb(c,2)) { goto L_801719A8; } // 801718EC
  c->r[6]=0u+0x80170000u; // 801718F0
  c->r[3]=c->r[31]+0x00000000u; // 801718F4
  c->r[6]=c->r[6]+0x00001700u; // 801718F8
  c->r[7]=c->r[31]+0x0000008Cu; // 801718FC
  c->r[4]=0u+0x00000000u; // 80171900
  c->r[5]=0u+0x00000000u; // 80171904
  c->lr=0x8017190Cu; f_8017E64C(c); // 80171908
  cmps(c,0,(int32_t)c->r[3],0); // 8017190C
  if (crb(c,2)) { goto L_801719A8; } // 80171910
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171914
  cmps(c,0,(int32_t)c->r[12],0); // 80171918
  if (crb(c,2)) { goto L_801719A8; } // 8017191C
  c->r[3]=0u+0x00000002u; // 80171920
  c->r[4]=0u+0x00000000u; // 80171924
  c->ctr=c->r[12]; // 80171928
  if (true) { c->lr=0x80171930u; dispatch(c,c->ctr); } // 8017192C
  goto L_801719A8; // 80171930
L_80171934:;
  c->r[3]=0u+0x00000000u; // 80171934
  c->r[5]=c->r[31]+0x00000160u; // 80171938
  c->r[0]=0u+0x00000001u; // 8017193C
  c->r[6]=0u+0x80170000u; // 80171940
  W32(c->r[13]+0xFFFFACFCu,c->r[3]); // 80171944
  c->r[3]=c->r[31]+0x00000000u; // 80171948
  c->r[4]=c->r[31]+0x000001E0u; // 8017194C
  c->r[6]=c->r[6]+0x0000143Cu; // 80171950
  W32(c->r[5]+0x00000018u,c->r[0]); // 80171954
  c->r[7]=c->r[31]+0x0000008Cu; // 80171958
  c->r[5]=0u+0x00000080u; // 8017195C
  c->lr=0x80171964u; f_8017E534(c); // 80171960
  cmps(c,0,(int32_t)c->r[3],0); // 80171964
  if (crb(c,2)) { goto L_801719A8; } // 80171968
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 8017196C
  cmps(c,0,(int32_t)c->r[12],0); // 80171970
  if (crb(c,2)) { goto L_801719A8; } // 80171974
  c->r[3]=0u+0x00000002u; // 80171978
  c->r[4]=0u+0x00000000u; // 8017197C
  c->ctr=c->r[12]; // 80171980
  if (true) { c->lr=0x80171988u; dispatch(c,c->ctr); } // 80171984
  goto L_801719A8; // 80171988
L_8017198C:;
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 8017198C
  cmps(c,0,(int32_t)c->r[12],0); // 80171990
  if (crb(c,2)) { goto L_801719A8; } // 80171994
  c->r[3]=0u+0x00000002u; // 80171998
  c->r[4]=0u+0x00000000u; // 8017199C
  c->ctr=c->r[12]; // 801719A0
  if (true) { c->lr=0x801719A8u; dispatch(c,c->ctr); } // 801719A4
L_801719A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801719A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801719AC
  c->lr=c->r[0]; // 801719B0
  c->r[1]=c->r[1]+0x00000010u; // 801719B4
  return; // 801719B8
}

// dvd_cbForNandCreate
void f_801719BC(Ctx* __restrict c) {
  trace_call(0x801719BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801719BC
  c->r[0]=c->lr; // 801719C0
  cmps(c,0,(int32_t)c->r[3],0); // 801719C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801719C8
  if (crb(c,2)) { goto L_801719D8; } // 801719CC
  cmps(c,0,(int32_t)c->r[3],-6); // 801719D0
  if (!crb(c,2)) { goto L_80171A38; } // 801719D4
L_801719D8:;
  cmps(c,0,(int32_t)c->r[3],-6); // 801719D8
  if (!crb(c,2)) { goto L_801719E8; } // 801719DC
  c->r[0]=0u+0x00000001u; // 801719E0
  W32(c->r[13]+0xFFFFACF8u,c->r[0]); // 801719E4
L_801719E8:;
  c->r[3]=0u+0x802D0000u; // 801719E8
  c->r[4]=0u+0x80440000u; // 801719EC
  c->r[6]=0u+0x80170000u; // 801719F0
  c->r[7]=0u+0x80440000u; // 801719F4
  c->r[3]=c->r[3]+0x00005E30u; // 801719F8
  c->r[4]=c->r[4]+0x00004AE0u; // 801719FC
  c->r[6]=c->r[6]+0x000018A0u; // 80171A00
  c->r[7]=c->r[7]+0x00004B6Cu; // 80171A04
  c->r[5]=0u+0x00000003u; // 80171A08
  c->lr=0x80171A10u; f_8017F1E4(c); // 80171A0C
  cmps(c,0,(int32_t)c->r[3],0); // 80171A10
  if (crb(c,2)) { goto L_80171A54; } // 80171A14
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171A18
  cmps(c,0,(int32_t)c->r[12],0); // 80171A1C
  if (crb(c,2)) { goto L_80171A54; } // 80171A20
  c->r[3]=0u+0x00000002u; // 80171A24
  c->r[4]=0u+0x00000000u; // 80171A28
  c->ctr=c->r[12]; // 80171A2C
  if (true) { c->lr=0x80171A34u; dispatch(c,c->ctr); } // 80171A30
  goto L_80171A54; // 80171A34
L_80171A38:;
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171A38
  cmps(c,0,(int32_t)c->r[12],0); // 80171A3C
  if (crb(c,2)) { goto L_80171A54; } // 80171A40
  c->r[3]=0u+0x00000002u; // 80171A44
  c->r[4]=0u+0x00000000u; // 80171A48
  c->ctr=c->r[12]; // 80171A4C
  if (true) { c->lr=0x80171A54u; dispatch(c,c->ctr); } // 80171A50
L_80171A54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171A54
  c->lr=c->r[0]; // 80171A58
  c->r[1]=c->r[1]+0x00000010u; // 80171A5C
  return; // 80171A60
}

// dvd_cbForNandCreateDir
void f_80171A64(Ctx* __restrict c) {
  trace_call(0x80171A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171A64
  c->r[0]=c->lr; // 80171A68
  cmps(c,0,(int32_t)c->r[3],0); // 80171A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171A70
  if (crb(c,2)) { goto L_80171A80; } // 80171A74
  cmps(c,0,(int32_t)c->r[3],-6); // 80171A78
  if (!crb(c,2)) { goto L_80171ACC; } // 80171A7C
L_80171A80:;
  c->r[3]=0u+0x802D0000u; // 80171A80
  c->r[6]=0u+0x80170000u; // 80171A84
  c->r[7]=0u+0x80440000u; // 80171A88
  c->r[4]=0u+0x0000003Fu; // 80171A8C
  c->r[3]=c->r[3]+0x00005E30u; // 80171A90
  c->r[6]=c->r[6]+0x000019BCu; // 80171A94
  c->r[7]=c->r[7]+0x00004B6Cu; // 80171A98
  c->r[5]=0u+0x00000000u; // 80171A9C
  c->lr=0x80171AA4u; f_8017E094(c); // 80171AA0
  cmps(c,0,(int32_t)c->r[3],0); // 80171AA4
  if (crb(c,2)) { goto L_80171AE8; } // 80171AA8
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171AAC
  cmps(c,0,(int32_t)c->r[12],0); // 80171AB0
  if (crb(c,2)) { goto L_80171AE8; } // 80171AB4
  c->r[3]=0u+0x00000002u; // 80171AB8
  c->r[4]=0u+0x00000000u; // 80171ABC
  c->ctr=c->r[12]; // 80171AC0
  if (true) { c->lr=0x80171AC8u; dispatch(c,c->ctr); } // 80171AC4
  goto L_80171AE8; // 80171AC8
L_80171ACC:;
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171ACC
  cmps(c,0,(int32_t)c->r[12],0); // 80171AD0
  if (crb(c,2)) { goto L_80171AE8; } // 80171AD4
  c->r[3]=0u+0x00000002u; // 80171AD8
  c->r[4]=0u+0x00000000u; // 80171ADC
  c->ctr=c->r[12]; // 80171AE0
  if (true) { c->lr=0x80171AE8u; dispatch(c,c->ctr); } // 80171AE4
L_80171AE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171AE8
  c->lr=c->r[0]; // 80171AEC
  c->r[1]=c->r[1]+0x00000010u; // 80171AF0
  return; // 80171AF4
}

// cbForPrepareControlRegister
void f_80171AF8(Ctx* __restrict c) {
  trace_call(0x80171AF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171AF8
  c->r[0]=c->lr; // 80171AFC
  cmpu(c,0,c->r[3],0x00000001u); // 80171B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171B04
  if (!crb(c,2)) { goto L_80171B20; } // 80171B08
  c->lr=0x80171B10u; f_801740B8(c); // 80171B0C
  c->r[4]=0u+0x80440000u; // 80171B10
  c->r[4]=c->r[4]+0x00004C40u; // 80171B14
  W32(c->r[4]+0x00000010u,c->r[3]); // 80171B18
  goto L_80171B30; // 80171B1C
L_80171B20:;
  c->r[3]=0u+0x80440000u; // 80171B20
  c->r[0]=0u+0xFFFFFFFFu; // 80171B24
  c->r[3]=c->r[3]+0x00004C40u; // 80171B28
  W32(c->r[3]+0x00000010u,c->r[0]); // 80171B2C
L_80171B30:;
  c->r[3]=0u+0x802D0000u; // 80171B30
  c->r[6]=0u+0x80170000u; // 80171B34
  c->r[7]=0u+0x80440000u; // 80171B38
  c->r[4]=0u+0x0000003Fu; // 80171B3C
  c->r[3]=c->r[3]+0x00005E4Cu; // 80171B40
  c->r[6]=c->r[6]+0x00001A64u; // 80171B44
  c->r[7]=c->r[7]+0x00004B6Cu; // 80171B48
  c->r[5]=0u+0x00000000u; // 80171B4C
  c->lr=0x80171B54u; f_8017E89C(c); // 80171B50
  cmps(c,0,(int32_t)c->r[3],0); // 80171B54
  if (crb(c,2)) { goto L_80171B78; } // 80171B58
  c->r[12]=R32(c->r[13]+0xFFFFAD00u); // 80171B5C
  cmps(c,0,(int32_t)c->r[12],0); // 80171B60
  if (crb(c,2)) { goto L_80171B78; } // 80171B64
  c->r[3]=0u+0x00000002u; // 80171B68
  c->r[4]=0u+0x00000000u; // 80171B6C
  c->ctr=c->r[12]; // 80171B70
  if (true) { c->lr=0x80171B78u; dispatch(c,c->ctr); } // 80171B74
L_80171B78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171B78
  c->lr=c->r[0]; // 80171B7C
  c->r[1]=c->r[1]+0x00000010u; // 80171B80
  return; // 80171B84
}

// __DVDStoreErrorCode
void f_80171B88(Ctx* __restrict c) {
  trace_call(0x80171B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171B88
  c->r[0]=c->lr; // 80171B8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171B90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171B94
  c->r[31]=0u+0x80440000u; // 80171B98
  c->r[31]=c->r[31]+0x00004C40u; // 80171B9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80171BA0
  c->r[30]=c->r[4]|c->r[4]; // 80171BA4
  W32(c->r[31]+0x00000008u,c->r[3]); // 80171BA8
  c->lr=0x80171BB0u; f_8015848C(c); // 80171BAC
  c->r[6]=0u+0x80000000u; // 80171BB0
  c->r[5]=0u+0x00000000u; // 80171BB4
  c->r[0]=R32(c->r[6]+0x000000F8u); // 80171BB8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80171BBC
  c->lr=0x80171BC4u; f_80252CF4(c); // 80171BC0
  c->r[3]=0u+0x80170000u; // 80171BC4
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80171BC8
  c->r[3]=c->r[3]+0x00001AF8u; // 80171BCC
  W32(c->r[13]+0xFFFFAD00u,c->r[30]); // 80171BD0
  c->lr=0x80171BD8u; f_8017422C(c); // 80171BD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171BD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171BDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80171BE0
  c->lr=c->r[0]; // 80171BE4
  c->r[1]=c->r[1]+0x00000010u; // 80171BE8
  return; // 80171BEC
}

// DVDCompareDiskID
void f_80171BF0(Ctx* __restrict c) {
  trace_call(0x80171BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171BF0
  c->r[0]=c->lr; // 80171BF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171BF8
  c->r[0]=R8(c->r[3]+0x00000000u); // 80171BFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171C00
  c->r[31]=c->r[4]|c->r[4]; // 80171C04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171C08
  W32(c->r[1]+0x00000008u,c->r[30]); // 80171C0C
  c->r[30]=c->r[3]|c->r[3]; // 80171C10
  if (crb(c,2)) { goto L_80171C3C; } // 80171C14
  c->r[0]=R8(c->r[4]+0x00000000u); // 80171C18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171C1C
  if (crb(c,2)) { goto L_80171C3C; } // 80171C20
  c->r[5]=0u+0x00000004u; // 80171C24
  c->lr=0x80171C2Cu; f_8025C6DC(c); // 80171C28
  cmps(c,0,(int32_t)c->r[3],0); // 80171C2C
  if (crb(c,2)) { goto L_80171C3C; } // 80171C30
  c->r[3]=0u+0x00000000u; // 80171C34
  goto L_80171CC8; // 80171C38
L_80171C3C:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 80171C3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171C40
  if (crb(c,2)) { goto L_80171C6C; } // 80171C44
  c->r[0]=R8(c->r[31]+0x00000004u); // 80171C48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80171C4C
  if (crb(c,2)) { goto L_80171C6C; } // 80171C50
  c->r[3]=c->r[30]+0x00000004u; // 80171C54
  c->r[4]=c->r[31]+0x00000004u; // 80171C58
  c->r[5]=0u+0x00000002u; // 80171C5C
  c->lr=0x80171C64u; f_8025C6DC(c); // 80171C60
  cmps(c,0,(int32_t)c->r[3],0); // 80171C64
  if (crb(c,2)) { goto L_80171C74; } // 80171C68
L_80171C6C:;
  c->r[3]=0u+0x00000000u; // 80171C6C
  goto L_80171CC8; // 80171C70
L_80171C74:;
  c->r[3]=R8(c->r[30]+0x00000006u); // 80171C74
  cmpu(c,0,c->r[3],0x000000FFu); // 80171C78
  if (crb(c,2)) { goto L_80171C9C; } // 80171C7C
  c->r[0]=R8(c->r[31]+0x00000006u); // 80171C80
  cmpu(c,0,c->r[0],0x000000FFu); // 80171C84
  if (crb(c,2)) { goto L_80171C9C; } // 80171C88
  cmpu(c,0,c->r[3],c->r[0]); // 80171C8C
  if (crb(c,2)) { goto L_80171C9C; } // 80171C90
  c->r[3]=0u+0x00000000u; // 80171C94
  goto L_80171CC8; // 80171C98
L_80171C9C:;
  c->r[3]=R8(c->r[30]+0x00000007u); // 80171C9C
  cmpu(c,0,c->r[3],0x000000FFu); // 80171CA0
  if (crb(c,2)) { goto L_80171CC4; } // 80171CA4
  c->r[0]=R8(c->r[31]+0x00000007u); // 80171CA8
  cmpu(c,0,c->r[0],0x000000FFu); // 80171CAC
  if (crb(c,2)) { goto L_80171CC4; } // 80171CB0
  cmpu(c,0,c->r[3],c->r[0]); // 80171CB4
  if (crb(c,2)) { goto L_80171CC4; } // 80171CB8
  c->r[3]=0u+0x00000000u; // 80171CBC
  goto L_80171CC8; // 80171CC0
L_80171CC4:;
  c->r[3]=0u+0x00000001u; // 80171CC4
L_80171CC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171CC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171CCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80171CD0
  c->lr=c->r[0]; // 80171CD4
  c->r[1]=c->r[1]+0x00000010u; // 80171CD8
  return; // 80171CDC
}

// __DVDShowFatalMessage
void f_80171CE0(Ctx* __restrict c) {
  trace_call(0x80171CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171CE0
  c->r[0]=c->lr; // 80171CE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80171CE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80171CEC
  c->r[31]=0u+0x00000000u; // 80171CF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80171CF4
  c->r[5]=R8(c->r[2]+0xFFFFAB08u); // 80171CF8
  c->r[4]=R8(c->r[2]+0xFFFFAB09u); // 80171CFC
  c->r[3]=R8(c->r[2]+0xFFFFAB0Au); // 80171D00
  c->r[0]=R8(c->r[2]+0xFFFFAB0Bu); // 80171D04
  W8(c->r[1]+0x00000010u,c->r[5]); // 80171D08
  W8(c->r[1]+0x00000011u,c->r[4]); // 80171D0C
  W8(c->r[1]+0x00000012u,c->r[3]); // 80171D10
  W8(c->r[1]+0x00000013u,c->r[0]); // 80171D14
  c->lr=0x80171D1Cu; f_80183208(c); // 80171D18
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80171D1C
  if (!crb(c,2)) { goto L_80171D30; } // 80171D20
  c->r[3]=0u+0x00000001u; // 80171D24
  c->lr=0x80171D2Cu; f_801533BC(c); // 80171D28
  goto L_80171D38; // 80171D2C
L_80171D30:;
  c->r[3]=0u+0x00000000u; // 80171D30
  c->lr=0x80171D38u; f_801533BC(c); // 80171D34
L_80171D38:;
  c->lr=0x80171D3Cu; f_801838D0(c); // 80171D38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80171D3C
  cmps(c,0,(int32_t)c->r[0],2); // 80171D40
  if (crb(c,2)) { goto L_80171D54; } // 80171D44
  c->r[30]=0u+0x80270000u; // 80171D48
  c->r[30]=c->r[30]+0x000065E0u; // 80171D4C
  goto L_80171D5C; // 80171D50
L_80171D54:;
  c->r[30]=0u+0x80270000u; // 80171D54
  c->r[30]=c->r[30]+0x000065FCu; // 80171D58
L_80171D5C:;
  c->lr=0x80171D60u; f_80183208(c); // 80171D5C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80171D60
  cmpu(c,0,c->r[0],0x00000006u); // 80171D64
  if (!crb(c,1)) { goto L_80171D74; } // 80171D68
  c->r[5]=R32(c->r[30]+0x00000004u); // 80171D6C
  goto L_80171D80; // 80171D70
L_80171D74:;
  c->lr=0x80171D78u; f_80183208(c); // 80171D74
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80171D78
  c->r[5]=R32(c->r[30]+c->r[0]); // 80171D7C
L_80171D80:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 80171D80
  c->r[3]=c->r[1]+0x0000000Cu; // 80171D84
  W32(c->r[1]+0x00000008u,c->r[31]); // 80171D88
  c->r[4]=c->r[1]+0x00000008u; // 80171D8C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80171D90
  c->lr=0x80171D98u; f_80152878(c); // 80171D94
  c->r[0]=R32(c->r[1]+0x00000024u); // 80171D98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80171D9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80171DA0
  c->lr=c->r[0]; // 80171DA4
  c->r[1]=c->r[1]+0x00000020u; // 80171DA8
  return; // 80171DAC
}

// DVDSetAutoFatalMessaging
void f_80171DB0(Ctx* __restrict c) {
  trace_call(0x80171DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171DB0
  c->r[0]=c->lr; // 80171DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80171DBC
  c->r[31]=c->r[3]|c->r[3]; // 80171DC0
  c->lr=0x80171DC8u; f_80154410(c); // 80171DC4
  c->r[5]=R32(c->r[13]+0xFFFFAD08u); // 80171DC8
  cmps(c,0,(int32_t)c->r[31],0); // 80171DCC
  c->r[4]=0u+0x00000000u; // 80171DD0
  c->r[0]=0u-c->r[5]; // 80171DD4
  c->r[0]=c->r[0]|c->r[5]; // 80171DD8
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 80171DDC
  if (crb(c,2)) { goto L_80171DEC; } // 80171DE0
  c->r[4]=0u+0x80170000u; // 80171DE4
  c->r[4]=c->r[4]+0x00001CE0u; // 80171DE8
L_80171DEC:;
  W32(c->r[13]+0xFFFFAD08u,c->r[4]); // 80171DEC
  c->lr=0x80171DF4u; f_80154438(c); // 80171DF0
  c->r[3]=c->r[31]|c->r[31]; // 80171DF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80171DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80171DFC
  c->lr=c->r[0]; // 80171E00
  c->r[1]=c->r[1]+0x00000010u; // 80171E04
  return; // 80171E08
}

// __DVDGetAutoFatalMessaging
void f_80171E0C(Ctx* __restrict c) {
  trace_call(0x80171E0Cu);
  c->r[3]=R32(c->r[13]+0xFFFFAD08u); // 80171E0C
  c->r[0]=0u-c->r[3]; // 80171E10
  c->r[0]=c->r[0]|c->r[3]; // 80171E14
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80171E18
  return; // 80171E1C
}

// __DVDPrintFatalMessage
void f_80171E20(Ctx* __restrict c) {
  trace_call(0x80171E20u);
  c->r[12]=R32(c->r[13]+0xFFFFAD08u); // 80171E20
  cmps(c,0,(int32_t)c->r[12],0); // 80171E24
  if (crb(c,2)) return; // 80171E28
  c->ctr=c->r[12]; // 80171E2C
  if (true) { dispatch(c,c->ctr); return; } // 80171E30
  return; // 80171E34
}

// lowCallback
void f_80171E38(Ctx* __restrict c) {
  trace_call(0x80171E38u);
  c->r[0]=0u+0x00000001u; // 80171E38
  W32(c->r[13]+0xFFFFAD10u,c->r[3]); // 80171E3C
  W32(c->r[13]+0xFFFF90F8u,c->r[0]); // 80171E40
  return; // 80171E44
}

// __DVDCheckDevice
void f_80171E48(Ctx* __restrict c) {
  trace_call(0x80171E48u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80171E48
  c->r[0]=c->lr; // 80171E4C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80171E50
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80171E54
  W32(c->r[1]+0x00000028u,c->r[30]); // 80171E58
  c->r[30]=0u+0x460A0000u; // 80171E5C
  c->lr=0x80171E64u; f_80154E8C(c); // 80171E60
  c->r[0]=c->r[3]+0xF8000000u; // 80171E64
  cmpu(c,0,c->r[0],0x00000000u); // 80171E68
  if (!crb(c,2)) { goto L_80171E78; } // 80171E6C
  c->r[3]=0u+0x00000001u; // 80171E70
  goto L_801720B8; // 80171E74
L_80171E78:;
  c->r[3]=c->r[1]+0x00000018u; // 80171E78
  c->lr=0x80171E80u; f_8014D4E0(c); // 80171E7C
  c->r[0]=R8(c->r[1]+0x00000019u); // 80171E80
  cmpu(c,0,c->r[0],0x0000001Eu); // 80171E84
  if (crb(c,0)) { goto L_80171E94; } // 80171E88
  cmpu(c,0,c->r[0],0x000000FEu); // 80171E8C
  if (crb(c,0)) { goto L_80171E9C; } // 80171E90
L_80171E94:;
  c->r[3]=0u+0x00000001u; // 80171E94
  goto L_801720B8; // 80171E98
L_80171E9C:;
  c->r[3]=0u+0x80000000u; // 80171E9C
  c->r[0]=R8(c->r[3]+0x0000319Cu); // 80171EA0
  cmpu(c,0,c->r[0],0x00000081u); // 80171EA4
  if (!crb(c,2)) { goto L_80171EB0; } // 80171EA8
  c->r[30]=0u+0x7ED40000u; // 80171EAC
L_80171EB0:;
  c->r[0]=0u+0x00000000u; // 80171EB0
  c->r[3]=0u+0x80440000u; // 80171EB4
  c->r[6]=0u+0x80170000u; // 80171EB8
  W32(c->r[13]+0xFFFF90F8u,c->r[0]); // 80171EBC
  c->r[5]=c->r[30]|c->r[30]; // 80171EC0
  c->r[3]=c->r[3]+0x00004D40u; // 80171EC4
  c->r[6]=c->r[6]+0x00001E38u; // 80171EC8
  c->r[4]=0u+0x00000020u; // 80171ECC
  c->lr=0x80171ED4u; f_80173154(c); // 80171ED0
L_80171ED4:;
  c->r[0]=R32(c->r[13]+0xFFFF90F8u); // 80171ED4
  cmps(c,0,(int32_t)c->r[0],0); // 80171ED8
  if (crb(c,2)) { IRQCHK(c); goto L_80171ED4; } // 80171EDC
  c->r[0]=R32(c->r[13]+0xFFFFAD10u); // 80171EE0
  cmps(c,0,(int32_t)c->r[0],2); // 80171EE4
  if (crb(c,2)) { goto L_80171EFC; } // 80171EE8
  if (!crb(c,0)) { goto L_801720B0; } // 80171EEC
  cmps(c,0,(int32_t)c->r[0],1); // 80171EF0
  if (!crb(c,0)) { goto L_80172018; } // 80171EF4
  goto L_801720B0; // 80171EF8
L_80171EFC:;
  c->r[0]=0u+0x00000000u; // 80171EFC
  c->r[3]=0u+0x80170000u; // 80171F00
  W32(c->r[13]+0xFFFF90F8u,c->r[0]); // 80171F04
  c->r[3]=c->r[3]+0x00001E38u; // 80171F08
  c->lr=0x80171F10u; f_801735E4(c); // 80171F0C
L_80171F10:;
  c->r[0]=R32(c->r[13]+0xFFFF90F8u); // 80171F10
  cmps(c,0,(int32_t)c->r[0],0); // 80171F14
  if (crb(c,2)) { IRQCHK(c); goto L_80171F10; } // 80171F18
  c->lr=0x80171F20u; f_80174394(c); // 80171F1C
  c->r[0]=R32(c->r[13]+0xFFFFAD10u); // 80171F20
  cmps(c,0,(int32_t)c->r[0],1); // 80171F24
  if (crb(c,2)) { goto L_80171F30; } // 80171F28
  goto L_801720B0; // 80171F2C
L_80171F30:;
  c->lr=0x80171F34u; f_80174394(c); // 80171F30
  c->r[0]=rotl(c->r[3],0)&0xFF000000u; cr0(c,c->r[0]); // 80171F34
  if (!crb(c,2)) { goto L_801720A8; } // 80171F38
  c->lr=0x80171F40u; f_80174394(c); // 80171F3C
  c->r[4]=0u+0x00050000u; // 80171F40
  c->r[3]=rotl(c->r[3],0)&0x00FFFFFFu; // 80171F44
  c->r[0]=c->r[4]+0x00002100u; // 80171F48
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80171F4C
  if (crb(c,2)) { goto L_80171F58; } // 80171F50
  goto L_80172018; // 80171F54
L_80171F58:;
  c->r[0]=0u+0x00000000u; // 80171F58
  c->r[3]=0u+0x80440000u; // 80171F5C
  c->r[6]=0u+0x80170000u; // 80171F60
  W32(c->r[13]+0xFFFF90F8u,c->r[0]); // 80171F64
  c->r[3]=c->r[3]+0x00004D40u; // 80171F68
  c->r[4]=0u+0x00040000u; // 80171F6C
  c->r[6]=c->r[6]+0x00001E38u; // 80171F70
  c->r[5]=0u+0x00000000u; // 80171F74
  c->lr=0x80171F7Cu; f_80173A68(c); // 80171F78
L_80171F7C:;
  c->r[0]=R32(c->r[13]+0xFFFF90F8u); // 80171F7C
  cmps(c,0,(int32_t)c->r[0],0); // 80171F80
  if (crb(c,2)) { IRQCHK(c); goto L_80171F7C; } // 80171F84
  c->r[0]=R32(c->r[13]+0xFFFFAD10u); // 80171F88
  cmps(c,0,(int32_t)c->r[0],2); // 80171F8C
  if (crb(c,2)) { goto L_80171FA4; } // 80171F90
  if (!crb(c,0)) { goto L_801720B0; } // 80171F94
  cmps(c,0,(int32_t)c->r[0],1); // 80171F98
  if (!crb(c,0)) { goto L_80172018; } // 80171F9C
  goto L_801720B0; // 80171FA0
L_80171FA4:;
  c->r[0]=0u+0x00000000u; // 80171FA4
  c->r[3]=0u+0x80170000u; // 80171FA8
  W32(c->r[13]+0xFFFF90F8u,c->r[0]); // 80171FAC
  c->r[3]=c->r[3]+0x00001E38u; // 80171FB0
  c->lr=0x80171FB8u; f_801735E4(c); // 80171FB4
L_80171FB8:;
  c->r[0]=R32(c->r[13]+0xFFFF90F8u); // 80171FB8
  cmps(c,0,(int32_t)c->r[0],0); // 80171FBC
  if (crb(c,2)) { IRQCHK(c); goto L_80171FB8; } // 80171FC0
  c->lr=0x80171FC8u; f_80174394(c); // 80171FC4
  c->r[0]=R32(c->r[13]+0xFFFFAD10u); // 80171FC8
  cmps(c,0,(int32_t)c->r[0],1); // 80171FCC
  if (crb(c,2)) { goto L_80171FD8; } // 80171FD0
  goto L_801720B0; // 80171FD4
L_80171FD8:;
  c->lr=0x80171FDCu; f_80174394(c); // 80171FD8
  c->r[0]=rotl(c->r[3],0)&0xFF000000u; cr0(c,c->r[0]); // 80171FDC
  if (!crb(c,2)) { goto L_801720A8; } // 80171FE0
  c->lr=0x80171FE8u; f_80174394(c); // 80171FE4
  c->r[4]=0u+0x00050000u; // 80171FE8
  c->r[3]=rotl(c->r[3],0)&0x00FFFFFFu; // 80171FEC
  c->r[0]=c->r[4]+0x00003100u; // 80171FF0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80171FF4
  if (crb(c,2)) { goto L_80172010; } // 80171FF8
  if (!crb(c,0)) { goto L_80172018; } // 80171FFC
  c->r[0]=c->r[4]+0x00002000u; // 80172000
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80172004
  if (crb(c,2)) { goto L_80172010; } // 80172008
  goto L_80172018; // 8017200C
L_80172010:;
  c->r[3]=0u+0x00000001u; // 80172010
  goto L_801720B8; // 80172014
L_80172018:;
  c->r[5]=R8(c->r[13]+0xFFFF90FCu); // 80172018
  c->r[31]=0u+0x00000000u; // 8017201C
  c->r[4]=R8(c->r[13]+0xFFFF90FDu); // 80172020
  c->r[3]=R8(c->r[13]+0xFFFF90FEu); // 80172024
  c->r[0]=R8(c->r[13]+0xFFFF90FFu); // 80172028
  W8(c->r[1]+0x00000008u,c->r[5]); // 8017202C
  W8(c->r[1]+0x00000009u,c->r[4]); // 80172030
  W8(c->r[1]+0x0000000Au,c->r[3]); // 80172034
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80172038
  c->lr=0x80172040u; f_80183208(c); // 8017203C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80172040
  if (!crb(c,2)) { goto L_80172054; } // 80172044
  c->r[3]=0u+0x00000001u; // 80172048
  c->lr=0x80172050u; f_801533BC(c); // 8017204C
  goto L_8017205C; // 80172050
L_80172054:;
  c->r[3]=0u+0x00000000u; // 80172054
  c->lr=0x8017205Cu; f_801533BC(c); // 80172058
L_8017205C:;
  c->r[30]=0u+0x80270000u; // 8017205C
  c->r[30]=c->r[30]+0x00006618u; // 80172060
  c->lr=0x80172068u; f_80183208(c); // 80172064
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80172068
  cmpu(c,0,c->r[0],0x00000006u); // 8017206C
  if (!crb(c,1)) { goto L_8017207C; } // 80172070
  c->r[5]=R32(c->r[30]+0x00000004u); // 80172074
  goto L_80172088; // 80172078
L_8017207C:;
  c->lr=0x80172080u; f_80183208(c); // 8017207C
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80172080
  c->r[5]=R32(c->r[30]+c->r[0]); // 80172084
L_80172088:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80172088
  c->r[4]=c->r[1]+0x00000010u; // 8017208C
  W32(c->r[1]+0x00000010u,c->r[31]); // 80172090
  c->r[3]=c->r[1]+0x0000000Cu; // 80172094
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80172098
  c->lr=0x801720A0u; f_80152878(c); // 8017209C
  c->r[3]=0u+0x00000000u; // 801720A0
  goto L_801720B8; // 801720A4
L_801720A8:;
  c->r[3]=0u+0x00000000u; // 801720A8
  goto L_801720B8; // 801720AC
L_801720B0:;
  c->lr=0x801720B4u; f_80171CE0(c); // 801720B0
  c->r[3]=0u+0x00000000u; // 801720B4
L_801720B8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801720B8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801720BC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801720C0
  c->lr=c->r[0]; // 801720C4
  c->r[1]=c->r[1]+0x00000030u; // 801720C8
  return; // 801720CC
}

// doTransactionCallback
void f_801720D0(Ctx* __restrict c) {
  trace_call(0x801720D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801720D0
  c->r[0]=c->lr; // 801720D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801720D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801720DC
  c->r[31]=c->r[4]|c->r[4]; // 801720E0
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801720E4
  c->r[0]=c->r[5]+0x01150000u; // 801720E8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801720EC
  if (crb(c,2)) { goto L_80172114; } // 801720F0
  c->r[3]=0u+0x802D0000u; // 801720F4
  c->r[3]=c->r[3]+0x00006508u; // 801720F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801720FC
  c->lr=0x80172104u; f_801506B4(c); // 80172100
  c->r[3]=0u+0xFEEC0000u; // 80172104
  c->r[0]=c->r[3]+0xFFFFDAEDu; // 80172108
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017210C
  goto L_80172168; // 80172110
L_80172114:;
  c->r[6]=0u+0x00000000u; // 80172114
  W8(c->r[13]+0xFFFFAD18u,c->r[6]); // 80172118
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017211C
  cmps(c,0,(int32_t)c->r[0],0); // 80172120
  if (crb(c,2)) { goto L_80172168; } // 80172124
  c->r[0]=R8(c->r[13]+0xFFFFAD38u); // 80172128
  c->r[5]=0u+0x00000001u; // 8017212C
  W8(c->r[13]+0xFFFFAD19u,c->r[5]); // 80172130
  cmpu(c,0,c->r[0],0x00000001u); // 80172134
  if (!crb(c,2)) { goto L_80172144; } // 80172138
  W8(c->r[13]+0xFFFFAD38u,c->r[6]); // 8017213C
  c->r[3]=c->r[3]|0x00000008u; // 80172140
L_80172144:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80172144
  if (crb(c,2)) { goto L_80172154; } // 80172148
  c->r[0]=0u+0x00000000u; // 8017214C
  W32(c->r[13]+0xFFFFAD2Cu,c->r[0]); // 80172150
L_80172154:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 80172154
  c->ctr=c->r[12]; // 80172158
  if (true) { c->lr=0x80172160u; dispatch(c,c->ctr); } // 8017215C
  c->r[0]=0u+0x00000000u; // 80172160
  W8(c->r[13]+0xFFFFAD19u,c->r[0]); // 80172164
L_80172168:;
  c->r[0]=0u+0x00000000u; // 80172168
  c->r[3]=0u+0x00000000u; // 8017216C
  W8(c->r[31]+0x00000008u,c->r[0]); // 80172170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172174
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172178
  c->lr=c->r[0]; // 8017217C
  c->r[1]=c->r[1]+0x00000010u; // 80172180
  return; // 80172184
}

// doPrepareCoverRegisterCallback
void f_80172188(Ctx* __restrict c) {
  trace_call(0x80172188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172188
  c->r[0]=c->lr; // 8017218C
  c->r[5]=0u+0x80440000u; // 80172190
  c->r[6]=0u+0x80440000u; // 80172194
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172198
  c->r[5]=c->r[5]+0x00004DE0u; // 8017219C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801721A0
  c->r[31]=c->r[4]|c->r[4]; // 801721A4
  c->r[0]=R32(c->r[6]+0x00004E00u); // 801721A8
  c->r[6]=0u+0x00000000u; // 801721AC
  W8(c->r[13]+0xFFFFAD18u,c->r[6]); // 801721B0
  W32(c->r[5]+0x00000004u,c->r[0]); // 801721B4
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801721B8
  c->r[0]=c->r[5]+0x01150000u; // 801721BC
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801721C0
  if (crb(c,2)) { goto L_801721E8; } // 801721C4
  c->r[3]=0u+0x802D0000u; // 801721C8
  c->r[3]=c->r[3]+0x00006508u; // 801721CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801721D0
  c->lr=0x801721D8u; f_801506B4(c); // 801721D4
  c->r[3]=0u+0xFEEC0000u; // 801721D8
  c->r[0]=c->r[3]+0xFFFFDAEDu; // 801721DC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801721E0
  goto L_80172224; // 801721E4
L_801721E8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801721E8
  cmps(c,0,(int32_t)c->r[0],0); // 801721EC
  if (crb(c,2)) { goto L_80172224; } // 801721F0
  c->r[0]=R8(c->r[13]+0xFFFFAD38u); // 801721F4
  c->r[5]=0u+0x00000001u; // 801721F8
  W8(c->r[13]+0xFFFFAD19u,c->r[5]); // 801721FC
  cmpu(c,0,c->r[0],0x00000001u); // 80172200
  if (!crb(c,2)) { goto L_80172210; } // 80172204
  W8(c->r[13]+0xFFFFAD38u,c->r[6]); // 80172208
  c->r[3]=c->r[3]|0x00000008u; // 8017220C
L_80172210:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 80172210
  c->ctr=c->r[12]; // 80172214
  if (true) { c->lr=0x8017221Cu; dispatch(c,c->ctr); } // 80172218
  c->r[0]=0u+0x00000000u; // 8017221C
  W8(c->r[13]+0xFFFFAD19u,c->r[0]); // 80172220
L_80172224:;
  c->r[0]=0u+0x00000000u; // 80172224
  c->r[3]=0u+0x00000000u; // 80172228
  W8(c->r[31]+0x00000008u,c->r[0]); // 8017222C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172230
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172234
  c->lr=c->r[0]; // 80172238
  c->r[1]=c->r[1]+0x00000010u; // 8017223C
  return; // 80172240
}

// DVDLowFinalize
void f_80172244(Ctx* __restrict c) {
  trace_call(0x80172244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172244
  c->r[0]=c->lr; // 80172248
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017224C
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80172250
  c->lr=0x80172258u; f_80186464(c); // 80172254
  cmps(c,0,(int32_t)c->r[3],0); // 80172258
  if (crb(c,2)) { goto L_80172278; } // 8017225C
  c->r[3]=0u+0x802D0000u; // 80172260
  c->r[3]=c->r[3]+0x00006568u; // 80172264
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172268
  c->lr=0x80172270u; f_801506B4(c); // 8017226C
  c->r[3]=0u+0x00000000u; // 80172270
  goto L_80172284; // 80172274
L_80172278:;
  c->r[0]=0u+0x00000000u; // 80172278
  c->r[3]=0u+0x00000001u; // 8017227C
  W8(c->r[13]+0xFFFFAD25u,c->r[0]); // 80172280
L_80172284:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172284
  c->lr=c->r[0]; // 80172288
  c->r[1]=c->r[1]+0x00000010u; // 8017228C
  return; // 80172290
}

// DVDLowInit
void f_80172294(Ctx* __restrict c) {
  trace_call(0x80172294u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172294
  c->r[0]=c->lr; // 80172298
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017229C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801722A0
  c->r[31]=0u+0x802D0000u; // 801722A4
  c->r[31]=c->r[31]+0x00006508u; // 801722A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801722AC
  c->r[0]=R8(c->r[13]+0xFFFFAD25u); // 801722B0
  cmps(c,0,(int32_t)c->r[0],0); // 801722B4
  if (!crb(c,2)) { goto L_8017243C; } // 801722B8
  c->r[0]=0u+0x00000001u; // 801722BC
  W8(c->r[13]+0xFFFFAD25u,c->r[0]); // 801722C0
  c->lr=0x801722C8u; f_80185E04(c); // 801722C4
  cmps(c,0,(int32_t)c->r[3],0); // 801722C8
  if (crb(c,2)) { goto L_801722E8; } // 801722CC
  c->r[4]=c->r[3]|c->r[3]; // 801722D0
  c->r[3]=c->r[31]+0x00000088u; // 801722D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801722D8
  c->lr=0x801722E0u; f_801506B4(c); // 801722DC
  c->r[3]=0u+0x00000000u; // 801722E0
  goto L_801724E0; // 801722E4
L_801722E8:;
  c->lr=0x801722ECu; f_801859C4(c); // 801722E8
  c->r[30]=c->r[3]|c->r[3]; // 801722EC
  c->lr=0x801722F4u; f_801859BC(c); // 801722F0
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 801722F4
  if (crb(c,2)) { goto L_80172304; } // 801722F8
  c->r[0]=c->r[30]+0x0000001Fu; // 801722FC
  c->r[30]=rotl(c->r[0],0)&0x0000001Fu; // 80172300
L_80172304:;
  c->r[0]=c->r[30]+0x00000080u; // 80172304
  cmpu(c,0,c->r[0],c->r[3]); // 80172308
  if (!crb(c,1)) { goto L_80172320; } // 8017230C
  c->r[3]=c->r[31]+0x000000A8u; // 80172310
  c->r[4]=0u+0x00000080u; // 80172314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172318
  c->lr=0x80172320u; f_801506B4(c); // 8017231C
L_80172320:;
  c->r[3]=c->r[30]+0x00000080u; // 80172320
  c->lr=0x80172328u; f_801859CC(c); // 80172324
  cmps(c,0,(int32_t)c->r[30],0); // 80172328
  W32(c->r[13]+0xFFFFAD34u,c->r[30]); // 8017232C
  if (!crb(c,2)) { goto L_80172348; } // 80172330
  c->r[3]=c->r[31]+0x000000E4u; // 80172334
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172338
  c->lr=0x80172340u; f_801506B4(c); // 8017233C
  c->r[0]=0u+0x00000000u; // 80172340
  goto L_801723AC; // 80172344
L_80172348:;
  c->lr=0x8017234Cu; f_801859C4(c); // 80172348
  c->r[30]=c->r[3]|c->r[3]; // 8017234C
  c->lr=0x80172354u; f_801859BC(c); // 80172350
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172354
  if (crb(c,2)) { goto L_80172364; } // 80172358
  c->r[0]=c->r[30]+0x0000001Fu; // 8017235C
  c->r[30]=rotl(c->r[0],0)&0x0000001Fu; // 80172360
L_80172364:;
  c->r[0]=c->r[30]+0x00000020u; // 80172364
  cmpu(c,0,c->r[0],c->r[3]); // 80172368
  if (!crb(c,1)) { goto L_80172380; } // 8017236C
  c->r[3]=c->r[31]+0x000000A8u; // 80172370
  c->r[4]=0u+0x00000020u; // 80172374
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172378
  c->lr=0x80172380u; f_801506B4(c); // 8017237C
L_80172380:;
  c->r[3]=c->r[30]+0x00000020u; // 80172380
  c->lr=0x80172388u; f_801859CC(c); // 80172384
  cmps(c,0,(int32_t)c->r[30],0); // 80172388
  W32(c->r[13]+0xFFFFAD30u,c->r[30]); // 8017238C
  if (!crb(c,2)) { goto L_801723A8; } // 80172390
  c->r[3]=c->r[31]+0x0000010Cu; // 80172394
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172398
  c->lr=0x801723A0u; f_801506B4(c); // 8017239C
  c->r[0]=0u+0x00000000u; // 801723A0
  goto L_801723AC; // 801723A4
L_801723A8:;
  c->r[0]=0u+0x00000001u; // 801723A8
L_801723AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801723AC
  if (!crb(c,2)) { goto L_801723BC; } // 801723B0
  c->r[3]=0u+0x00000000u; // 801723B4
  goto L_801724E0; // 801723B8
L_801723BC:;
  c->r[0]=R8(c->r[13]+0xFFFFAD24u); // 801723BC
  cmps(c,0,(int32_t)c->r[0],0); // 801723C0
  if (!crb(c,2)) { goto L_8017243C; } // 801723C4
  c->r[5]=0u+0x00000000u; // 801723C8
  c->r[4]=0u+0x80440000u; // 801723CC
  {uint32_t ea=c->r[4]+0x00004D60u; W32(ea,c->r[5]); c->r[4]=ea;} // 801723D0
  c->r[3]=0u+0xFEEC0000u; // 801723D4
  c->r[0]=0u+0x00000001u; // 801723D8
  c->r[6]=0u+0x00000002u; // 801723DC
  W32(c->r[4]+0x00000004u,c->r[5]); // 801723E0
  c->r[3]=c->r[3]+0xFFFFDAEDu; // 801723E4
  W8(c->r[4]+0x00000008u,c->r[5]); // 801723E8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801723EC
  W32(c->r[4]+0x00000010u,c->r[5]); // 801723F0
  W32(c->r[4]+0x00000020u,c->r[5]); // 801723F4
  W32(c->r[4]+0x00000024u,c->r[5]); // 801723F8
  W8(c->r[4]+0x00000028u,c->r[5]); // 801723FC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80172400
  W32(c->r[4]+0x00000030u,c->r[0]); // 80172404
  W32(c->r[4]+0x00000040u,c->r[5]); // 80172408
  W32(c->r[4]+0x00000044u,c->r[5]); // 8017240C
  W8(c->r[4]+0x00000048u,c->r[5]); // 80172410
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 80172414
  W32(c->r[4]+0x00000050u,c->r[6]); // 80172418
  c->r[6]=0u+0x00000003u; // 8017241C
  W32(c->r[4]+0x00000060u,c->r[5]); // 80172420
  W32(c->r[4]+0x00000064u,c->r[5]); // 80172424
  W8(c->r[4]+0x00000068u,c->r[5]); // 80172428
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 8017242C
  W32(c->r[4]+0x00000070u,c->r[6]); // 80172430
  W32(c->r[13]+0xFFFFAD20u,c->r[5]); // 80172434
  W8(c->r[13]+0xFFFFAD24u,c->r[0]); // 80172438
L_8017243C:;
  c->r[3]=R32(c->r[13]+0xFFFFAD30u); // 8017243C
  c->r[4]=c->r[13]+0xFFFF9108u; // 80172440
  c->r[5]=0u+0x00000020u; // 80172444
  c->lr=0x8017244Cu; f_8025C504(c); // 80172448
  c->r[3]=R32(c->r[13]+0xFFFFAD30u); // 8017244C
  c->r[4]=0u+0x00000000u; // 80172450
  c->lr=0x80172458u; f_80186284(c); // 80172454
  cmps(c,0,(int32_t)c->r[3],0); // 80172458
  W32(c->r[13]+0xFFFF9100u,c->r[3]); // 8017245C
  if (crb(c,0)) { goto L_8017246C; } // 80172460
  c->r[3]=0u+0x00000001u; // 80172464
  goto L_801724E0; // 80172468
L_8017246C:;
  cmps(c,0,(int32_t)c->r[3],-5); // 8017246C
  if (crb(c,2)) { goto L_801724B8; } // 80172470
  if (!crb(c,0)) { goto L_80172484; } // 80172474
  cmps(c,0,(int32_t)c->r[3],-6); // 80172478
  if (!crb(c,0)) { goto L_80172490; } // 8017247C
  goto L_801724CC; // 80172480
L_80172484:;
  cmps(c,0,(int32_t)c->r[3],-1); // 80172484
  if (crb(c,2)) { goto L_801724A4; } // 80172488
  goto L_801724CC; // 8017248C
L_80172490:;
  c->r[3]=c->r[31]+0x0000012Cu; // 80172490
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172494
  c->lr=0x8017249Cu; f_801506B4(c); // 80172498
  c->r[3]=0u+0x00000000u; // 8017249C
  goto L_801724E0; // 801724A0
L_801724A4:;
  c->r[3]=c->r[31]+0x00000178u; // 801724A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801724A8
  c->lr=0x801724B0u; f_801506B4(c); // 801724AC
  c->r[3]=0u+0x00000000u; // 801724B0
  goto L_801724E0; // 801724B4
L_801724B8:;
  c->r[3]=c->r[31]+0x000001C0u; // 801724B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801724BC
  c->lr=0x801724C4u; f_801506B4(c); // 801724C0
  c->r[3]=0u+0x00000000u; // 801724C4
  goto L_801724E0; // 801724C8
L_801724CC:;
  c->r[4]=c->r[3]|c->r[3]; // 801724CC
  c->r[3]=c->r[31]+0x0000020Cu; // 801724D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801724D4
  c->lr=0x801724DCu; f_801506B4(c); // 801724D8
  c->r[3]=0u+0x00000000u; // 801724DC
L_801724E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801724E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801724E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801724E8
  c->lr=c->r[0]; // 801724EC
  c->r[1]=c->r[1]+0x00000010u; // 801724F0
  return; // 801724F4
}

// DVDLowReadDiskID
void f_801724F8(Ctx* __restrict c) {
  trace_call(0x801724F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801724F8
  c->r[0]=c->lr; // 801724FC
  c->r[7]=0u+0x80440000u; // 80172500
  c->r[10]=0u+0x00000001u; // 80172504
  W32(c->r[1]+0x00000024u,c->r[0]); // 80172508
  c->r[7]=c->r[7]+0x00004D60u; // 8017250C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80172510
  c->r[31]=0u+0x802D0000u; // 80172514
  c->r[31]=c->r[31]+0x00006508u; // 80172518
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017251C
  c->r[30]=c->r[3]|c->r[3]; // 80172520
  W32(c->r[1]+0x00000014u,c->r[29]); // 80172524
  c->r[9]=R32(c->r[13]+0xFFFFAD20u); // 80172528
  W8(c->r[13]+0xFFFFAD18u,c->r[10]); // 8017252C
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 80172530
  c->r[6]=c->r[7]+c->r[8]; // 80172534
  c->r[5]=R8(c->r[6]+0x00000008u); // 80172538
  c->r[0]=0u-c->r[5]; // 8017253C
  c->r[0]=c->r[0]|c->r[5]; // 80172540
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80172544
  cmpu(c,0,c->r[0],0x00000001u); // 80172548
  if (!crb(c,2)) { goto L_80172570; } // 8017254C
  c->r[4]=c->r[9]|c->r[9]; // 80172550
  c->r[3]=c->r[31]+0x00000240u; // 80172554
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172558
  c->lr=0x80172560u; f_801506B4(c); // 8017255C
  c->r[3]=c->r[31]+0x00000278u; // 80172560
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172564
  c->lr=0x8017256Cu; f_801506B4(c); // 80172568
L_8017256C:;
  IRQCHK(c); goto L_8017256C; // 8017256C
L_80172570:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 80172570
  c->r[0]=c->r[5]+0x01150000u; // 80172574
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80172578
  if (crb(c,2)) { goto L_80172590; } // 8017257C
  c->r[3]=c->r[31]+0x000002A8u; // 80172580
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172584
  c->lr=0x8017258Cu; f_801506B4(c); // 80172588
L_8017258C:;
  IRQCHK(c); goto L_8017258C; // 8017258C
L_80172590:;
  W32(c->r[7]+c->r[8],c->r[4]); // 80172590
  c->r[0]=c->r[9]+0x00000001u; // 80172594
  cmps(c,0,(int32_t)c->r[0],4); // 80172598
  W32(c->r[6]+0x00000004u,c->r[10]); // 8017259C
  W8(c->r[6]+0x00000008u,c->r[10]); // 801725A0
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 801725A4
  if (crb(c,0)) { goto L_801725B4; } // 801725A8
  c->r[0]=0u+0x00000000u; // 801725AC
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 801725B0
L_801725B4:;
  c->r[4]=0u+0x80440000u; // 801725B4
  cmps(c,0,(int32_t)c->r[3],0); // 801725B8
  c->r[0]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801725BC
  c->r[4]=c->r[4]+0x00004D60u; // 801725C0
  c->r[29]=c->r[4]+c->r[0]; // 801725C4
  if (!crb(c,2)) { goto L_801725D8; } // 801725C8
  c->r[3]=c->r[31]+0x000002E8u; // 801725CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801725D0
  c->lr=0x801725D8u; f_801506B4(c); // 801725D4
L_801725D8:;
  c->r[3]=R32(c->r[13]+0xFFFFAD1Cu); // 801725D8
  c->r[0]=c->r[3]+0x00000001u; // 801725DC
  cmps(c,0,(int32_t)c->r[0],4); // 801725E0
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801725E4
  if (crb(c,0)) { goto L_801725F4; } // 801725E8
  c->r[0]=0u+0x00000000u; // 801725EC
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801725F0
L_801725F4:;
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 801725F4
  c->r[9]=0u+0x80170000u; // 801725F8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801725FC
  c->r[4]=0u+0x00000070u; // 80172600
  W8(c->r[3]+c->r[0],c->r[4]); // 80172604
  c->r[7]=c->r[30]|c->r[30]; // 80172608
  c->r[10]=c->r[29]|c->r[29]; // 8017260C
  c->r[9]=c->r[9]+0x000020D0u; // 80172610
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80172614
  c->r[4]=0u+0x00000070u; // 80172618
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 8017261C
  c->r[6]=0u+0x00000020u; // 80172620
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80172624
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80172628
  c->r[5]=c->r[5]+c->r[0]; // 8017262C
  c->r[8]=0u+0x00000020u; // 80172630
  c->lr=0x80172638u; f_80186AE4(c); // 80172634
  cmps(c,0,(int32_t)c->r[3],0); // 80172638
  if (crb(c,2)) { goto L_80172660; } // 8017263C
  c->r[4]=c->r[3]|c->r[3]; // 80172640
  c->r[3]=c->r[31]+0x00000324u; // 80172644
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172648
  c->lr=0x80172650u; f_801506B4(c); // 8017264C
  c->r[0]=0u+0x00000000u; // 80172650
  c->r[3]=0u+0x00000000u; // 80172654
  W8(c->r[29]+0x00000008u,c->r[0]); // 80172658
  goto L_80172664; // 8017265C
L_80172660:;
  c->r[3]=0u+0x00000001u; // 80172660
L_80172664:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80172664
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80172668
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017266C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80172670
  c->lr=c->r[0]; // 80172674
  c->r[1]=c->r[1]+0x00000020u; // 80172678
  return; // 8017267C
}

// DVDLowOpenPartition
void f_80172680(Ctx* __restrict c) {
  trace_call(0x80172680u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172680
  c->r[0]=c->lr; // 80172684
  c->r[9]=0u+0x80440000u; // 80172688
  cmps(c,0,(int32_t)c->r[4],0); // 8017268C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80172690
  c->r[9]=c->r[9]+0x00004D60u; // 80172694
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80172698
  c->r[31]=0u+0x802D0000u; // 8017269C
  c->r[31]=c->r[31]+0x00006508u; // 801726A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801726A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801726A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801726AC
  if (crb(c,2)) { goto L_801726D0; } // 801726B0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801726B4
  if (crb(c,2)) { goto L_801726D0; } // 801726B8
  c->r[3]=c->r[31]+0x00000360u; // 801726BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801726C0
  c->lr=0x801726C8u; f_801506B4(c); // 801726C4
  c->r[3]=0u+0x00000000u; // 801726C8
  goto L_801728C8; // 801726CC
L_801726D0:;
  cmps(c,0,(int32_t)c->r[6],0); // 801726D0
  if (crb(c,2)) { goto L_801726F4; } // 801726D4
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801726D8
  if (crb(c,2)) { goto L_801726F4; } // 801726DC
  c->r[3]=c->r[31]+0x00000398u; // 801726E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801726E4
  c->lr=0x801726ECu; f_801506B4(c); // 801726E8
  c->r[3]=0u+0x00000000u; // 801726EC
  goto L_801728C8; // 801726F0
L_801726F4:;
  cmps(c,0,(int32_t)c->r[7],0); // 801726F4
  if (crb(c,2)) { goto L_80172718; } // 801726F8
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 801726FC
  if (crb(c,2)) { goto L_80172718; } // 80172700
  c->r[3]=c->r[31]+0x00000398u; // 80172704
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172708
  c->lr=0x80172710u; f_801506B4(c); // 8017270C
  c->r[3]=0u+0x00000000u; // 80172710
  goto L_801728C8; // 80172714
L_80172718:;
  c->r[29]=R32(c->r[13]+0xFFFFAD20u); // 80172718
  c->r[28]=0u+0x00000001u; // 8017271C
  c->r[12]=c->r[9]+0x00000000u; // 80172720
  W8(c->r[13]+0xFFFFAD18u,c->r[28]); // 80172724
  c->r[30]=rotl(c->r[29],5)&0xFFFFFFE0u; // 80172728
  c->r[11]=c->r[12]+c->r[30]; // 8017272C
  c->r[10]=R8(c->r[11]+0x00000008u); // 80172730
  c->r[0]=0u-c->r[10]; // 80172734
  c->r[0]=c->r[0]|c->r[10]; // 80172738
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8017273C
  cmpu(c,0,c->r[0],0x00000001u); // 80172740
  if (!crb(c,2)) { goto L_80172768; } // 80172744
  c->r[4]=c->r[29]|c->r[29]; // 80172748
  c->r[3]=c->r[31]+0x00000240u; // 8017274C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172750
  c->lr=0x80172758u; f_801506B4(c); // 80172754
  c->r[3]=c->r[31]+0x00000278u; // 80172758
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017275C
  c->lr=0x80172764u; f_801506B4(c); // 80172760
L_80172764:;
  IRQCHK(c); goto L_80172764; // 80172764
L_80172768:;
  c->r[10]=R32(c->r[11]+0x0000000Cu); // 80172768
  c->r[0]=c->r[10]+0x01150000u; // 8017276C
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80172770
  if (crb(c,2)) { goto L_80172788; } // 80172774
  c->r[3]=c->r[31]+0x000002A8u; // 80172778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017277C
  c->lr=0x80172784u; f_801506B4(c); // 80172780
L_80172784:;
  IRQCHK(c); goto L_80172784; // 80172784
L_80172788:;
  W32(c->r[12]+c->r[30],c->r[8]); // 80172788
  c->r[0]=c->r[29]+0x00000001u; // 8017278C
  cmps(c,0,(int32_t)c->r[0],4); // 80172790
  W32(c->r[11]+0x00000004u,c->r[28]); // 80172794
  W8(c->r[11]+0x00000008u,c->r[28]); // 80172798
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 8017279C
  if (crb(c,0)) { goto L_801727AC; } // 801727A0
  c->r[0]=0u+0x00000000u; // 801727A4
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 801727A8
L_801727AC:;
  c->r[8]=R32(c->r[13]+0xFFFFAD1Cu); // 801727AC
  c->r[11]=rotl(c->r[29],5)&0xFFFFFFE0u; // 801727B0
  c->r[10]=c->r[9]+0x00000000u; // 801727B4
  c->r[0]=c->r[8]+0x00000001u; // 801727B8
  cmps(c,0,(int32_t)c->r[0],4); // 801727BC
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801727C0
  c->r[30]=c->r[10]+c->r[11]; // 801727C4
  if (crb(c,0)) { goto L_801727D4; } // 801727C8
  c->r[0]=0u+0x00000000u; // 801727CC
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801727D0
L_801727D4:;
  c->r[8]=R32(c->r[13]+0xFFFFAD34u); // 801727D4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801727D8
  c->r[10]=0u+0x0000008Bu; // 801727DC
  cmps(c,0,(int32_t)c->r[4],0); // 801727E0
  W8(c->r[8]+c->r[0],c->r[10]); // 801727E4
  c->r[8]=c->r[9]+0x000000C0u; // 801727E8
  c->r[0]=0u+0x00000020u; // 801727EC
  c->r[10]=R32(c->r[13]+0xFFFFAD1Cu); // 801727F0
  c->r[11]=R32(c->r[13]+0xFFFFAD34u); // 801727F4
  c->r[10]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801727F8
  c->r[10]=c->r[11]+c->r[10]; // 801727FC
  W32(c->r[10]+0x00000004u,c->r[3]); // 80172800
  c->r[3]=R32(c->r[13]+0xFFFFAD1Cu); // 80172804
  c->r[10]=R32(c->r[13]+0xFFFFAD34u); // 80172808
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 8017280C
  W32(c->r[8]+0x00000004u,c->r[0]); // 80172810
  c->r[0]=c->r[10]+c->r[3]; // 80172814
  W32(c->r[9]+0x000000C0u,c->r[0]); // 80172818
  W32(c->r[8]+0x00000008u,c->r[4]); // 8017281C
  if (!crb(c,2)) { goto L_80172830; } // 80172820
  c->r[0]=0u+0x00000000u; // 80172824
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 80172828
  goto L_80172838; // 8017282C
L_80172830:;
  c->r[0]=0u+0x000002A4u; // 80172830
  W32(c->r[8]+0x0000000Cu,c->r[0]); // 80172834
L_80172838:;
  c->r[3]=c->r[9]+0x000000C0u; // 80172838
  cmps(c,0,(int32_t)c->r[6],0); // 8017283C
  W32(c->r[3]+0x00000010u,c->r[6]); // 80172840
  if (!crb(c,2)) { goto L_80172854; } // 80172844
  c->r[0]=0u+0x00000000u; // 80172848
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017284C
  goto L_80172858; // 80172850
L_80172854:;
  W32(c->r[3]+0x00000014u,c->r[5]); // 80172854
L_80172858:;
  c->r[10]=c->r[9]+0x000000C0u; // 80172858
  c->r[5]=c->r[9]+0x00000120u; // 8017285C
  c->r[4]=0u+0x000049E4u; // 80172860
  c->r[0]=0u+0x00000020u; // 80172864
  W32(c->r[10]+0x00000018u,c->r[7]); // 80172868
  c->r[8]=0u+0x80170000u; // 8017286C
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80172870
  c->r[7]=c->r[10]|c->r[10]; // 80172874
  W32(c->r[10]+0x0000001Cu,c->r[4]); // 80172878
  c->r[9]=c->r[30]|c->r[30]; // 8017287C
  c->r[8]=c->r[8]+0x000020D0u; // 80172880
  c->r[4]=0u+0x0000008Bu; // 80172884
  W32(c->r[10]+0x00000020u,c->r[5]); // 80172888
  c->r[5]=0u+0x00000003u; // 8017288C
  c->r[6]=0u+0x00000002u; // 80172890
  W32(c->r[10]+0x00000024u,c->r[0]); // 80172894
  c->lr=0x8017289Cu; f_80186E88(c); // 80172898
  cmps(c,0,(int32_t)c->r[3],0); // 8017289C
  if (crb(c,2)) { goto L_801728C4; } // 801728A0
  c->r[4]=c->r[3]|c->r[3]; // 801728A4
  c->r[3]=c->r[31]+0x000003D0u; // 801728A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801728AC
  c->lr=0x801728B4u; f_801506B4(c); // 801728B0
  c->r[0]=0u+0x00000000u; // 801728B4
  c->r[3]=0u+0x00000000u; // 801728B8
  W8(c->r[30]+0x00000008u,c->r[0]); // 801728BC
  goto L_801728C8; // 801728C0
L_801728C4:;
  c->r[3]=0u+0x00000001u; // 801728C4
L_801728C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801728C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801728CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801728D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801728D4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801728D8
  c->lr=c->r[0]; // 801728DC
  c->r[1]=c->r[1]+0x00000020u; // 801728E0
  return; // 801728E4
}

// DVDLowOpenPartitionWithTmdAndTicketView
void f_801728E8(Ctx* __restrict c) {
  trace_call(0x801728E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801728E8
  c->r[0]=c->lr; // 801728EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801728F0
  c->r[11]=c->r[1]+0x00000020u; // 801728F4
  c->lr=0x801728FCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801728F8
  cmps(c,0,(int32_t)c->r[8],0); // 801728FC
  c->r[10]=0u+0x80440000u; // 80172900
  c->r[31]=0u+0x802D0000u; // 80172904
  c->r[10]=c->r[10]+0x00004D60u; // 80172908
  c->r[31]=c->r[31]+0x00006508u; // 8017290C
  if (crb(c,2)) { goto L_80172924; } // 80172910
  c->r[0]=rotl(c->r[8],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172914
  if (crb(c,2)) { goto L_80172924; } // 80172918
  c->r[3]=0u+0x00000000u; // 8017291C
  goto L_80172B34; // 80172920
L_80172924:;
  cmps(c,0,(int32_t)c->r[6],0); // 80172924
  if (!crb(c,2)) { goto L_80172944; } // 80172928
  c->r[3]=c->r[31]+0x00000458u; // 8017292C
  c->r[4]=c->r[31]+0x000004C8u; // 80172930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172934
  c->lr=0x8017293Cu; f_801506B4(c); // 80172938
  c->r[3]=0u+0x00000000u; // 8017293C
  goto L_80172B34; // 80172940
L_80172944:;
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172944
  if (crb(c,2)) { goto L_80172964; } // 80172948
  c->r[3]=c->r[31]+0x0000047Cu; // 8017294C
  c->r[4]=c->r[31]+0x000004C8u; // 80172950
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172954
  c->lr=0x8017295Cu; f_801506B4(c); // 80172958
  c->r[3]=0u+0x00000000u; // 8017295C
  goto L_80172B34; // 80172960
L_80172964:;
  cmps(c,0,(int32_t)c->r[4],0); // 80172964
  if (!crb(c,2)) { goto L_80172984; } // 80172968
  c->r[3]=c->r[31]+0x000004F0u; // 8017296C
  c->r[4]=c->r[31]+0x000004C8u; // 80172970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172974
  c->lr=0x8017297Cu; f_801506B4(c); // 80172978
  c->r[3]=0u+0x00000000u; // 8017297C
  goto L_80172B34; // 80172980
L_80172984:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172984
  if (crb(c,2)) { goto L_801729A4; } // 80172988
  c->r[3]=c->r[31]+0x0000051Cu; // 8017298C
  c->r[4]=c->r[31]+0x000004C8u; // 80172990
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172994
  c->lr=0x8017299Cu; f_801506B4(c); // 80172998
  c->r[3]=0u+0x00000000u; // 8017299C
  goto L_80172B34; // 801729A0
L_801729A4:;
  c->r[28]=R32(c->r[13]+0xFFFFAD20u); // 801729A4
  c->r[27]=0u+0x00000001u; // 801729A8
  c->r[29]=c->r[10]+0x00000000u; // 801729AC
  W8(c->r[13]+0xFFFFAD18u,c->r[27]); // 801729B0
  c->r[30]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801729B4
  c->r[12]=c->r[29]+c->r[30]; // 801729B8
  c->r[11]=R8(c->r[12]+0x00000008u); // 801729BC
  c->r[0]=0u-c->r[11]; // 801729C0
  c->r[0]=c->r[0]|c->r[11]; // 801729C4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801729C8
  cmpu(c,0,c->r[0],0x00000001u); // 801729CC
  if (!crb(c,2)) { goto L_801729F4; } // 801729D0
  c->r[4]=c->r[28]|c->r[28]; // 801729D4
  c->r[3]=c->r[31]+0x00000240u; // 801729D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801729DC
  c->lr=0x801729E4u; f_801506B4(c); // 801729E0
  c->r[3]=c->r[31]+0x00000278u; // 801729E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801729E8
  c->lr=0x801729F0u; f_801506B4(c); // 801729EC
L_801729F0:;
  IRQCHK(c); goto L_801729F0; // 801729F0
L_801729F4:;
  c->r[11]=R32(c->r[12]+0x0000000Cu); // 801729F4
  c->r[0]=c->r[11]+0x01150000u; // 801729F8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801729FC
  if (crb(c,2)) { goto L_80172A14; } // 80172A00
  c->r[3]=c->r[31]+0x000002A8u; // 80172A04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172A08
  c->lr=0x80172A10u; f_801506B4(c); // 80172A0C
L_80172A10:;
  IRQCHK(c); goto L_80172A10; // 80172A10
L_80172A14:;
  W32(c->r[29]+c->r[30],c->r[9]); // 80172A14
  c->r[0]=c->r[28]+0x00000001u; // 80172A18
  cmps(c,0,(int32_t)c->r[0],4); // 80172A1C
  W32(c->r[12]+0x00000004u,c->r[27]); // 80172A20
  W8(c->r[12]+0x00000008u,c->r[27]); // 80172A24
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80172A28
  if (crb(c,0)) { goto L_80172A38; } // 80172A2C
  c->r[0]=0u+0x00000000u; // 80172A30
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80172A34
L_80172A38:;
  c->r[9]=R32(c->r[13]+0xFFFFAD1Cu); // 80172A38
  c->r[12]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80172A3C
  c->r[11]=c->r[10]+0x00000000u; // 80172A40
  c->r[0]=c->r[9]+0x00000001u; // 80172A44
  cmps(c,0,(int32_t)c->r[0],4); // 80172A48
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80172A4C
  c->r[30]=c->r[11]+c->r[12]; // 80172A50
  if (crb(c,0)) { goto L_80172A60; } // 80172A54
  c->r[0]=0u+0x00000000u; // 80172A58
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80172A5C
L_80172A60:;
  c->r[9]=R32(c->r[13]+0xFFFFAD34u); // 80172A60
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80172A64
  c->r[11]=0u+0x00000094u; // 80172A68
  cmps(c,0,(int32_t)c->r[8],0); // 80172A6C
  W8(c->r[9]+c->r[0],c->r[11]); // 80172A70
  c->r[9]=c->r[10]+0x000000C0u; // 80172A74
  c->r[11]=0u+0x00000020u; // 80172A78
  c->r[0]=0u+0x000000D8u; // 80172A7C
  c->r[12]=R32(c->r[13]+0xFFFFAD1Cu); // 80172A80
  c->r[29]=R32(c->r[13]+0xFFFFAD34u); // 80172A84
  c->r[12]=rotl(c->r[12],5)&0xFFFFFFE0u; // 80172A88
  c->r[12]=c->r[29]+c->r[12]; // 80172A8C
  W32(c->r[12]+0x00000004u,c->r[3]); // 80172A90
  c->r[3]=R32(c->r[13]+0xFFFFAD1Cu); // 80172A94
  c->r[12]=R32(c->r[13]+0xFFFFAD34u); // 80172A98
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 80172A9C
  W32(c->r[9]+0x00000004u,c->r[11]); // 80172AA0
  c->r[3]=c->r[12]+c->r[3]; // 80172AA4
  W32(c->r[10]+0x000000C0u,c->r[3]); // 80172AA8
  W32(c->r[9]+0x00000008u,c->r[4]); // 80172AAC
  W32(c->r[9]+0x0000000Cu,c->r[0]); // 80172AB0
  W32(c->r[9]+0x00000010u,c->r[6]); // 80172AB4
  W32(c->r[9]+0x00000014u,c->r[5]); // 80172AB8
  W32(c->r[9]+0x00000018u,c->r[8]); // 80172ABC
  if (!crb(c,2)) { goto L_80172AD0; } // 80172AC0
  c->r[0]=0u+0x00000000u; // 80172AC4
  W32(c->r[9]+0x0000001Cu,c->r[0]); // 80172AC8
  goto L_80172AD4; // 80172ACC
L_80172AD0:;
  W32(c->r[9]+0x0000001Cu,c->r[7]); // 80172AD0
L_80172AD4:;
  c->r[7]=c->r[10]+0x000000C0u; // 80172AD4
  c->r[3]=c->r[10]+0x00000120u; // 80172AD8
  c->r[0]=0u+0x00000020u; // 80172ADC
  c->r[8]=0u+0x80170000u; // 80172AE0
  W32(c->r[7]+0x00000020u,c->r[3]); // 80172AE4
  c->r[9]=c->r[30]|c->r[30]; // 80172AE8
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80172AEC
  c->r[8]=c->r[8]+0x000020D0u; // 80172AF0
  W32(c->r[7]+0x00000024u,c->r[0]); // 80172AF4
  c->r[4]=0u+0x00000094u; // 80172AF8
  c->r[5]=0u+0x00000004u; // 80172AFC
  c->r[6]=0u+0x00000001u; // 80172B00
  c->lr=0x80172B08u; f_80186E88(c); // 80172B04
  cmps(c,0,(int32_t)c->r[3],0); // 80172B08
  if (crb(c,2)) { goto L_80172B30; } // 80172B0C
  c->r[4]=c->r[3]|c->r[3]; // 80172B10
  c->r[3]=c->r[31]+0x000003D0u; // 80172B14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172B18
  c->lr=0x80172B20u; f_801506B4(c); // 80172B1C
  c->r[0]=0u+0x00000000u; // 80172B20
  c->r[3]=0u+0x00000000u; // 80172B24
  W8(c->r[30]+0x00000008u,c->r[0]); // 80172B28
  goto L_80172B34; // 80172B2C
L_80172B30:;
  c->r[3]=0u+0x00000001u; // 80172B30
L_80172B34:;
  c->r[11]=c->r[1]+0x00000020u; // 80172B34
  c->lr=0x80172B3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80172B38
  c->r[0]=R32(c->r[1]+0x00000024u); // 80172B3C
  c->lr=c->r[0]; // 80172B40
  c->r[1]=c->r[1]+0x00000020u; // 80172B44
  return; // 80172B48
}

// DVDLowGetNoDiscBufferSizes
void f_80172B4C(Ctx* __restrict c) {
  trace_call(0x80172B4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172B4C
  c->r[0]=c->lr; // 80172B50
  cmps(c,0,(int32_t)c->r[4],0); // 80172B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80172B5C
  c->r[31]=0u+0x802D0000u; // 80172B60
  c->r[31]=c->r[31]+0x00006508u; // 80172B64
  W32(c->r[1]+0x00000008u,c->r[30]); // 80172B68
  if (crb(c,2)) { goto L_80172B78; } // 80172B6C
  cmps(c,0,(int32_t)c->r[5],0); // 80172B70
  if (!crb(c,2)) { goto L_80172B90; } // 80172B74
L_80172B78:;
  c->r[3]=c->r[31]+0x00000560u; // 80172B78
  c->r[4]=c->r[31]+0x00000544u; // 80172B7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172B80
  c->lr=0x80172B88u; f_801506B4(c); // 80172B84
  c->r[3]=0u+0x00000000u; // 80172B88
  goto L_80172D40; // 80172B8C
L_80172B90:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172B90
  if (crb(c,2)) { goto L_80172BB0; } // 80172B94
  c->r[3]=c->r[31]+0x00000584u; // 80172B98
  c->r[4]=c->r[31]+0x00000544u; // 80172B9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172BA0
  c->lr=0x80172BA8u; f_801506B4(c); // 80172BA4
  c->r[3]=0u+0x00000000u; // 80172BA8
  goto L_80172D40; // 80172BAC
L_80172BB0:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172BB0
  if (crb(c,2)) { goto L_80172BD0; } // 80172BB4
  c->r[3]=c->r[31]+0x000005ACu; // 80172BB8
  c->r[4]=c->r[31]+0x00000544u; // 80172BBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172BC0
  c->lr=0x80172BC8u; f_801506B4(c); // 80172BC4
  c->r[3]=0u+0x00000000u; // 80172BC8
  goto L_80172D40; // 80172BCC
L_80172BD0:;
  c->r[11]=R32(c->r[13]+0xFFFFAD20u); // 80172BD0
  c->r[9]=0u+0x80440000u; // 80172BD4
  c->r[12]=0u+0x00000001u; // 80172BD8
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 80172BDC
  c->r[9]=c->r[9]+0x00004D60u; // 80172BE0
  c->r[8]=c->r[9]+c->r[10]; // 80172BE4
  W8(c->r[13]+0xFFFFAD18u,c->r[12]); // 80172BE8
  c->r[7]=R8(c->r[8]+0x00000008u); // 80172BEC
  c->r[0]=0u-c->r[7]; // 80172BF0
  c->r[0]=c->r[0]|c->r[7]; // 80172BF4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80172BF8
  cmpu(c,0,c->r[0],0x00000001u); // 80172BFC
  if (!crb(c,2)) { goto L_80172C24; } // 80172C00
  c->r[4]=c->r[11]|c->r[11]; // 80172C04
  c->r[3]=c->r[31]+0x00000240u; // 80172C08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172C0C
  c->lr=0x80172C14u; f_801506B4(c); // 80172C10
  c->r[3]=c->r[31]+0x00000278u; // 80172C14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172C18
  c->lr=0x80172C20u; f_801506B4(c); // 80172C1C
L_80172C20:;
  IRQCHK(c); goto L_80172C20; // 80172C20
L_80172C24:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 80172C24
  c->r[0]=c->r[7]+0x01150000u; // 80172C28
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80172C2C
  if (crb(c,2)) { goto L_80172C44; } // 80172C30
  c->r[3]=c->r[31]+0x000002A8u; // 80172C34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172C38
  c->lr=0x80172C40u; f_801506B4(c); // 80172C3C
L_80172C40:;
  IRQCHK(c); goto L_80172C40; // 80172C40
L_80172C44:;
  W32(c->r[9]+c->r[10],c->r[6]); // 80172C44
  c->r[0]=c->r[11]+0x00000001u; // 80172C48
  cmps(c,0,(int32_t)c->r[0],4); // 80172C4C
  W32(c->r[8]+0x00000004u,c->r[12]); // 80172C50
  W8(c->r[8]+0x00000008u,c->r[12]); // 80172C54
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80172C58
  if (crb(c,0)) { goto L_80172C68; } // 80172C5C
  c->r[0]=0u+0x00000000u; // 80172C60
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80172C64
L_80172C68:;
  c->r[6]=R32(c->r[13]+0xFFFFAD1Cu); // 80172C68
  c->r[7]=0u+0x80440000u; // 80172C6C
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 80172C70
  c->r[0]=c->r[6]+0x00000001u; // 80172C74
  c->r[7]=c->r[7]+0x00004D60u; // 80172C78
  cmps(c,0,(int32_t)c->r[0],4); // 80172C7C
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80172C80
  c->r[30]=c->r[7]+c->r[8]; // 80172C84
  if (crb(c,0)) { goto L_80172C94; } // 80172C88
  c->r[0]=0u+0x00000000u; // 80172C8C
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80172C90
L_80172C94:;
  c->r[6]=R32(c->r[13]+0xFFFFAD34u); // 80172C94
  c->r[8]=0u+0x80170000u; // 80172C98
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80172C9C
  c->r[7]=0u+0x00000092u; // 80172CA0
  W8(c->r[6]+c->r[0],c->r[7]); // 80172CA4
  c->r[11]=0u+0x80440000u; // 80172CA8
  c->r[7]=c->r[11]+0x00004E20u; // 80172CAC
  c->r[10]=0u+0x00000020u; // 80172CB0
  c->r[6]=R32(c->r[13]+0xFFFFAD1Cu); // 80172CB4
  c->r[0]=0u+0x00000004u; // 80172CB8
  c->r[12]=R32(c->r[13]+0xFFFFAD34u); // 80172CBC
  c->r[9]=c->r[30]|c->r[30]; // 80172CC0
  c->r[6]=rotl(c->r[6],5)&0xFFFFFFE0u; // 80172CC4
  c->r[8]=c->r[8]+0x000020D0u; // 80172CC8
  c->r[6]=c->r[12]+c->r[6]; // 80172CCC
  W32(c->r[6]+0x00000004u,c->r[3]); // 80172CD0
  c->r[6]=0u+0x00000002u; // 80172CD4
  c->r[3]=R32(c->r[13]+0xFFFFAD1Cu); // 80172CD8
  c->r[12]=R32(c->r[13]+0xFFFFAD34u); // 80172CDC
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 80172CE0
  W32(c->r[7]+0x00000008u,c->r[4]); // 80172CE4
  c->r[12]=c->r[12]+c->r[3]; // 80172CE8
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80172CEC
  W32(c->r[7]+0x00000010u,c->r[5]); // 80172CF0
  c->r[4]=0u+0x00000092u; // 80172CF4
  c->r[5]=0u+0x00000001u; // 80172CF8
  W32(c->r[11]+0x00004E20u,c->r[12]); // 80172CFC
  W32(c->r[7]+0x00000004u,c->r[10]); // 80172D00
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 80172D04
  W32(c->r[7]+0x00000014u,c->r[0]); // 80172D08
  c->lr=0x80172D10u; f_80186E88(c); // 80172D0C
  cmps(c,0,(int32_t)c->r[3],0); // 80172D10
  if (crb(c,2)) { goto L_80172D3C; } // 80172D14
  c->r[5]=c->r[3]|c->r[3]; // 80172D18
  c->r[3]=c->r[31]+0x000005D4u; // 80172D1C
  c->r[4]=c->r[31]+0x00000544u; // 80172D20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172D24
  c->lr=0x80172D2Cu; f_801506B4(c); // 80172D28
  c->r[0]=0u+0x00000000u; // 80172D2C
  c->r[3]=0u+0x00000000u; // 80172D30
  W8(c->r[30]+0x00000008u,c->r[0]); // 80172D34
  goto L_80172D40; // 80172D38
L_80172D3C:;
  c->r[3]=0u+0x00000001u; // 80172D3C
L_80172D40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172D44
  c->r[30]=R32(c->r[1]+0x00000008u); // 80172D48
  c->lr=c->r[0]; // 80172D4C
  c->r[1]=c->r[1]+0x00000010u; // 80172D50
  return; // 80172D54
}

// DVDLowGetNoDiscOpenPartitionParams
void f_80172D58(Ctx* __restrict c) {
  trace_call(0x80172D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172D58
  c->r[0]=c->lr; // 80172D5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80172D60
  c->r[11]=c->r[1]+0x00000030u; // 80172D64
  c->lr=0x80172D6Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80172D68
  cmps(c,0,(int32_t)c->r[4],0); // 80172D6C
  c->r[31]=0u+0x802D0000u; // 80172D70
  c->r[28]=R32(c->r[1]+0x00000038u); // 80172D74
  c->r[31]=c->r[31]+0x00006508u; // 80172D78
  if (crb(c,2)) { goto L_80172DB0; } // 80172D7C
  cmps(c,0,(int32_t)c->r[5],0); // 80172D80
  if (crb(c,2)) { goto L_80172DB0; } // 80172D84
  cmps(c,0,(int32_t)c->r[6],0); // 80172D88
  if (crb(c,2)) { goto L_80172DB0; } // 80172D8C
  cmps(c,0,(int32_t)c->r[7],0); // 80172D90
  if (crb(c,2)) { goto L_80172DB0; } // 80172D94
  cmps(c,0,(int32_t)c->r[8],0); // 80172D98
  if (crb(c,2)) { goto L_80172DB0; } // 80172D9C
  cmps(c,0,(int32_t)c->r[9],0); // 80172DA0
  if (crb(c,2)) { goto L_80172DB0; } // 80172DA4
  cmps(c,0,(int32_t)c->r[10],0); // 80172DA8
  if (!crb(c,2)) { goto L_80172DC8; } // 80172DAC
L_80172DB0:;
  c->r[3]=c->r[31]+0x00000560u; // 80172DB0
  c->r[4]=c->r[31]+0x00000604u; // 80172DB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172DB8
  c->lr=0x80172DC0u; f_801506B4(c); // 80172DBC
  c->r[3]=0u+0x00000000u; // 80172DC0
  goto L_80172FD8; // 80172DC4
L_80172DC8:;
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172DC8
  if (!crb(c,2)) { goto L_80172E00; } // 80172DCC
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172DD0
  if (!crb(c,2)) { goto L_80172E00; } // 80172DD4
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172DD8
  if (!crb(c,2)) { goto L_80172E00; } // 80172DDC
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172DE0
  if (!crb(c,2)) { goto L_80172E00; } // 80172DE4
  c->r[0]=rotl(c->r[8],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172DE8
  if (!crb(c,2)) { goto L_80172E00; } // 80172DEC
  c->r[0]=rotl(c->r[9],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172DF0
  if (!crb(c,2)) { goto L_80172E00; } // 80172DF4
  c->r[0]=rotl(c->r[10],0)&0x0000001Fu; cr0(c,c->r[0]); // 80172DF8
  if (crb(c,2)) { goto L_80172E18; } // 80172DFC
L_80172E00:;
  c->r[3]=c->r[31]+0x00000628u; // 80172E00
  c->r[4]=c->r[31]+0x00000604u; // 80172E04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172E08
  c->lr=0x80172E10u; f_801506B4(c); // 80172E0C
  c->r[3]=0u+0x00000000u; // 80172E10
  goto L_80172FD8; // 80172E14
L_80172E18:;
  c->r[26]=R32(c->r[13]+0xFFFFAD20u); // 80172E18
  c->r[24]=0u+0x80440000u; // 80172E1C
  c->r[27]=0u+0x00000001u; // 80172E20
  c->r[25]=rotl(c->r[26],5)&0xFFFFFFE0u; // 80172E24
  c->r[24]=c->r[24]+0x00004D60u; // 80172E28
  c->r[12]=c->r[24]+c->r[25]; // 80172E2C
  W8(c->r[13]+0xFFFFAD18u,c->r[27]); // 80172E30
  c->r[11]=R8(c->r[12]+0x00000008u); // 80172E34
  c->r[0]=0u-c->r[11]; // 80172E38
  c->r[0]=c->r[0]|c->r[11]; // 80172E3C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80172E40
  cmpu(c,0,c->r[0],0x00000001u); // 80172E44
  if (!crb(c,2)) { goto L_80172E6C; } // 80172E48
  c->r[4]=c->r[26]|c->r[26]; // 80172E4C
  c->r[3]=c->r[31]+0x00000240u; // 80172E50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172E54
  c->lr=0x80172E5Cu; f_801506B4(c); // 80172E58
  c->r[3]=c->r[31]+0x00000278u; // 80172E5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172E60
  c->lr=0x80172E68u; f_801506B4(c); // 80172E64
L_80172E68:;
  IRQCHK(c); goto L_80172E68; // 80172E68
L_80172E6C:;
  c->r[11]=R32(c->r[12]+0x0000000Cu); // 80172E6C
  c->r[0]=c->r[11]+0x01150000u; // 80172E70
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80172E74
  if (crb(c,2)) { goto L_80172E8C; } // 80172E78
  c->r[3]=c->r[31]+0x000002A8u; // 80172E7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172E80
  c->lr=0x80172E88u; f_801506B4(c); // 80172E84
L_80172E88:;
  IRQCHK(c); goto L_80172E88; // 80172E88
L_80172E8C:;
  W32(c->r[24]+c->r[25],c->r[28]); // 80172E8C
  c->r[0]=c->r[26]+0x00000001u; // 80172E90
  cmps(c,0,(int32_t)c->r[0],4); // 80172E94
  W32(c->r[12]+0x00000004u,c->r[27]); // 80172E98
  W8(c->r[12]+0x00000008u,c->r[27]); // 80172E9C
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80172EA0
  if (crb(c,0)) { goto L_80172EB0; } // 80172EA4
  c->r[0]=0u+0x00000000u; // 80172EA8
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80172EAC
L_80172EB0:;
  c->r[11]=R32(c->r[13]+0xFFFFAD1Cu); // 80172EB0
  c->r[12]=0u+0x80440000u; // 80172EB4
  c->r[24]=rotl(c->r[26],5)&0xFFFFFFE0u; // 80172EB8
  c->r[0]=c->r[11]+0x00000001u; // 80172EBC
  c->r[12]=c->r[12]+0x00004D60u; // 80172EC0
  cmps(c,0,(int32_t)c->r[0],4); // 80172EC4
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80172EC8
  c->r[30]=c->r[12]+c->r[24]; // 80172ECC
  if (crb(c,0)) { goto L_80172EDC; } // 80172ED0
  c->r[0]=0u+0x00000000u; // 80172ED4
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80172ED8
L_80172EDC:;
  c->r[11]=R32(c->r[13]+0xFFFFAD34u); // 80172EDC
  c->r[26]=0u+0x80440000u; // 80172EE0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80172EE4
  c->r[12]=0u+0x00000090u; // 80172EE8
  W8(c->r[11]+c->r[0],c->r[12]); // 80172EEC
  c->r[28]=c->r[26]+0x00004E20u; // 80172EF0
  c->r[27]=0u+0x00000020u; // 80172EF4
  c->r[29]=0u+0x00000004u; // 80172EF8
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80172EFC
  c->r[12]=0u+0x000002A4u; // 80172F00
  c->r[24]=R32(c->r[13]+0xFFFFAD34u); // 80172F04
  c->r[11]=0u+0x00020000u; // 80172F08
  c->r[25]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80172F0C
  c->r[25]=c->r[24]+c->r[25]; // 80172F10
  c->r[0]=c->r[11]+0xFFFF8000u; // 80172F14
  W32(c->r[25]+0x00000004u,c->r[3]); // 80172F18
  c->r[11]=0u+0x80170000u; // 80172F1C
  c->r[3]=R32(c->r[13]+0xFFFFAD1Cu); // 80172F20
  c->r[25]=R32(c->r[13]+0xFFFFAD34u); // 80172F24
  c->r[3]=rotl(c->r[3],5)&0xFFFFFFE0u; // 80172F28
  W32(c->r[28]+0x00000018u,c->r[4]); // 80172F2C
  c->r[25]=c->r[25]+c->r[3]; // 80172F30
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80172F34
  W32(c->r[28]+0x00000028u,c->r[6]); // 80172F38
  c->r[4]=0u+0x00000090u; // 80172F3C
  c->r[6]=0u+0x00000007u; // 80172F40
  W32(c->r[26]+0x00004E20u,c->r[25]); // 80172F44
  W32(c->r[28]+0x00000004u,c->r[27]); // 80172F48
  W32(c->r[28]+0x00000008u,c->r[5]); // 80172F4C
  W32(c->r[28]+0x0000000Cu,c->r[29]); // 80172F50
  W32(c->r[28]+0x00000010u,c->r[7]); // 80172F54
  W32(c->r[28]+0x00000014u,c->r[29]); // 80172F58
  W32(c->r[28]+0x0000001Cu,c->r[12]); // 80172F5C
  W32(c->r[28]+0x00000020u,c->r[5]); // 80172F60
  W32(c->r[28]+0x00000024u,c->r[29]); // 80172F64
  c->r[12]=R32(c->r[5]+0x00000000u); // 80172F68
  c->r[5]=0u+0x00000003u; // 80172F6C
  W32(c->r[28]+0x00000038u,c->r[8]); // 80172F70
  c->r[8]=c->r[11]+0x000020D0u; // 80172F74
  W32(c->r[28]+0x0000002Cu,c->r[12]); // 80172F78
  W32(c->r[28]+0x00000030u,c->r[7]); // 80172F7C
  W32(c->r[28]+0x00000034u,c->r[29]); // 80172F80
  c->r[11]=R32(c->r[7]+0x00000000u); // 80172F84
  c->r[7]=c->r[28]|c->r[28]; // 80172F88
  W32(c->r[28]+0x00000040u,c->r[9]); // 80172F8C
  c->r[9]=c->r[30]|c->r[30]; // 80172F90
  W32(c->r[28]+0x0000003Cu,c->r[11]); // 80172F94
  W32(c->r[28]+0x00000044u,c->r[29]); // 80172F98
  W32(c->r[28]+0x00000048u,c->r[10]); // 80172F9C
  W32(c->r[28]+0x0000004Cu,c->r[0]); // 80172FA0
  c->lr=0x80172FA8u; f_80186E88(c); // 80172FA4
  cmps(c,0,(int32_t)c->r[3],0); // 80172FA8
  if (crb(c,2)) { goto L_80172FD4; } // 80172FAC
  c->r[5]=c->r[3]|c->r[3]; // 80172FB0
  c->r[3]=c->r[31]+0x000005D4u; // 80172FB4
  c->r[4]=c->r[31]+0x00000604u; // 80172FB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80172FBC
  c->lr=0x80172FC4u; f_801506B4(c); // 80172FC0
  c->r[0]=0u+0x00000000u; // 80172FC4
  c->r[3]=0u+0x00000000u; // 80172FC8
  W8(c->r[30]+0x00000008u,c->r[0]); // 80172FCC
  goto L_80172FD8; // 80172FD0
L_80172FD4:;
  c->r[3]=0u+0x00000001u; // 80172FD4
L_80172FD8:;
  c->r[11]=c->r[1]+0x00000030u; // 80172FD8
  c->lr=0x80172FE0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80172FDC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80172FE0
  c->lr=c->r[0]; // 80172FE4
  c->r[1]=c->r[1]+0x00000030u; // 80172FE8
  return; // 80172FEC
}

// DVDLowClosePartition
void f_80172FF0(Ctx* __restrict c) {
  trace_call(0x80172FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172FF0
  c->r[0]=c->lr; // 80172FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80172FFC
  c->r[31]=0u+0x802D0000u; // 80173000
  c->r[31]=c->r[31]+0x00006508u; // 80173004
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173008
  c->r[4]=R32(c->r[13]+0xFFFFAD1Cu); // 8017300C
  c->r[0]=c->r[4]+0x00000001u; // 80173010
  cmps(c,0,(int32_t)c->r[0],4); // 80173014
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173018
  if (crb(c,0)) { goto L_80173028; } // 8017301C
  c->r[0]=0u+0x00000000u; // 80173020
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173024
L_80173028:;
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 80173028
  c->r[7]=0u+0x80440000u; // 8017302C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173030
  c->r[5]=0u+0x0000008Cu; // 80173034
  W8(c->r[4]+c->r[0],c->r[5]); // 80173038
  c->r[9]=0u+0x00000001u; // 8017303C
  c->r[7]=c->r[7]+0x00004D60u; // 80173040
  c->r[4]=R32(c->r[13]+0xFFFFAD20u); // 80173044
  W8(c->r[13]+0xFFFFAD18u,c->r[9]); // 80173048
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 8017304C
  c->r[6]=c->r[7]+c->r[8]; // 80173050
  c->r[5]=R8(c->r[6]+0x00000008u); // 80173054
  c->r[0]=0u-c->r[5]; // 80173058
  c->r[0]=c->r[0]|c->r[5]; // 8017305C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80173060
  cmpu(c,0,c->r[0],0x00000001u); // 80173064
  if (!crb(c,2)) { goto L_80173088; } // 80173068
  c->r[3]=c->r[31]+0x00000240u; // 8017306C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173070
  c->lr=0x80173078u; f_801506B4(c); // 80173074
  c->r[3]=c->r[31]+0x00000278u; // 80173078
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017307C
  c->lr=0x80173084u; f_801506B4(c); // 80173080
L_80173084:;
  IRQCHK(c); goto L_80173084; // 80173084
L_80173088:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 80173088
  c->r[0]=c->r[5]+0x01150000u; // 8017308C
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80173090
  if (crb(c,2)) { goto L_801730A8; } // 80173094
  c->r[3]=c->r[31]+0x000002A8u; // 80173098
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017309C
  c->lr=0x801730A4u; f_801506B4(c); // 801730A0
L_801730A4:;
  IRQCHK(c); goto L_801730A4; // 801730A4
L_801730A8:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801730A8
  c->r[0]=c->r[4]+0x00000001u; // 801730AC
  cmps(c,0,(int32_t)c->r[0],4); // 801730B0
  W32(c->r[6]+0x00000004u,c->r[9]); // 801730B4
  W8(c->r[6]+0x00000008u,c->r[9]); // 801730B8
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 801730BC
  if (crb(c,0)) { goto L_801730CC; } // 801730C0
  c->r[0]=0u+0x00000000u; // 801730C4
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 801730C8
L_801730CC:;
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 801730CC
  c->r[3]=0u+0x80440000u; // 801730D0
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801730D4
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 801730D8
  c->r[3]=c->r[3]+0x00004D60u; // 801730DC
  c->r[9]=0u+0x80170000u; // 801730E0
  c->r[30]=c->r[3]+c->r[5]; // 801730E4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801730E8
  c->r[5]=c->r[4]+c->r[0]; // 801730EC
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 801730F0
  c->r[10]=c->r[30]|c->r[30]; // 801730F4
  c->r[9]=c->r[9]+0x000020D0u; // 801730F8
  c->r[4]=0u+0x0000008Cu; // 801730FC
  c->r[6]=0u+0x00000020u; // 80173100
  c->r[7]=0u+0x00000000u; // 80173104
  c->r[8]=0u+0x00000000u; // 80173108
  c->lr=0x80173110u; f_80186AE4(c); // 8017310C
  cmps(c,0,(int32_t)c->r[3],0); // 80173110
  if (crb(c,2)) { goto L_80173138; } // 80173114
  c->r[4]=c->r[3]|c->r[3]; // 80173118
  c->r[3]=c->r[31]+0x00000668u; // 8017311C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173120
  c->lr=0x80173128u; f_801506B4(c); // 80173124
  c->r[0]=0u+0x00000000u; // 80173128
  c->r[3]=0u+0x00000000u; // 8017312C
  W8(c->r[30]+0x00000008u,c->r[0]); // 80173130
  goto L_8017313C; // 80173134
L_80173138:;
  c->r[3]=0u+0x00000001u; // 80173138
L_8017313C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017313C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173140
  c->r[30]=R32(c->r[1]+0x00000008u); // 80173144
  c->lr=c->r[0]; // 80173148
  c->r[1]=c->r[1]+0x00000010u; // 8017314C
  return; // 80173150
}

// DVDLowUnencryptedRead
void f_80173154(Ctx* __restrict c) {
  trace_call(0x80173154u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173154
  c->r[0]=c->lr; // 80173158
  c->r[9]=0u+0x80440000u; // 8017315C
  c->r[12]=0u+0x00000001u; // 80173160
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173164
  c->r[9]=c->r[9]+0x00004D60u; // 80173168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017316C
  c->r[31]=0u+0x802D0000u; // 80173170
  c->r[31]=c->r[31]+0x00006508u; // 80173174
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173178
  c->r[11]=R32(c->r[13]+0xFFFFAD20u); // 8017317C
  W8(c->r[13]+0xFFFFAD18u,c->r[12]); // 80173180
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 80173184
  c->r[8]=c->r[9]+c->r[10]; // 80173188
  c->r[7]=R8(c->r[8]+0x00000008u); // 8017318C
  c->r[0]=0u-c->r[7]; // 80173190
  c->r[0]=c->r[0]|c->r[7]; // 80173194
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80173198
  cmpu(c,0,c->r[0],0x00000001u); // 8017319C
  if (!crb(c,2)) { goto L_801731C4; } // 801731A0
  c->r[4]=c->r[11]|c->r[11]; // 801731A4
  c->r[3]=c->r[31]+0x00000240u; // 801731A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801731AC
  c->lr=0x801731B4u; f_801506B4(c); // 801731B0
  c->r[3]=c->r[31]+0x00000278u; // 801731B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801731B8
  c->lr=0x801731C0u; f_801506B4(c); // 801731BC
L_801731C0:;
  IRQCHK(c); goto L_801731C0; // 801731C0
L_801731C4:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801731C4
  c->r[0]=c->r[7]+0x01150000u; // 801731C8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801731CC
  if (crb(c,2)) { goto L_801731E4; } // 801731D0
  c->r[3]=c->r[31]+0x000002A8u; // 801731D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801731D8
  c->lr=0x801731E0u; f_801506B4(c); // 801731DC
L_801731E0:;
  IRQCHK(c); goto L_801731E0; // 801731E0
L_801731E4:;
  W32(c->r[9]+c->r[10],c->r[6]); // 801731E4
  c->r[0]=c->r[11]+0x00000001u; // 801731E8
  cmps(c,0,(int32_t)c->r[0],4); // 801731EC
  W32(c->r[8]+0x00000004u,c->r[12]); // 801731F0
  W8(c->r[8]+0x00000008u,c->r[12]); // 801731F4
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 801731F8
  if (crb(c,0)) { goto L_80173208; } // 801731FC
  c->r[0]=0u+0x00000000u; // 80173200
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173204
L_80173208:;
  c->r[6]=R32(c->r[13]+0xFFFFAD1Cu); // 80173208
  c->r[7]=0u+0x80440000u; // 8017320C
  W32(c->r[13]+0xFFFFAD2Cu,c->r[4]); // 80173210
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 80173214
  c->r[0]=c->r[6]+0x00000001u; // 80173218
  c->r[7]=c->r[7]+0x00004D60u; // 8017321C
  cmps(c,0,(int32_t)c->r[0],4); // 80173220
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173224
  c->r[30]=c->r[7]+c->r[8]; // 80173228
  if (crb(c,0)) { goto L_80173238; } // 8017322C
  c->r[0]=0u+0x00000000u; // 80173230
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173234
L_80173238:;
  c->r[6]=R32(c->r[13]+0xFFFFAD34u); // 80173238
  c->r[9]=0u+0x80170000u; // 8017323C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173240
  c->r[7]=0u+0x0000008Du; // 80173244
  W8(c->r[6]+c->r[0],c->r[7]); // 80173248
  c->r[7]=c->r[3]|c->r[3]; // 8017324C
  c->r[8]=c->r[4]|c->r[4]; // 80173250
  c->r[10]=c->r[30]|c->r[30]; // 80173254
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173258
  c->r[9]=c->r[9]+0x000020D0u; // 8017325C
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 80173260
  c->r[6]=0u+0x00000020u; // 80173264
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173268
  c->r[3]=c->r[3]+c->r[0]; // 8017326C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80173270
  c->r[4]=0u+0x0000008Du; // 80173274
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173278
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 8017327C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173280
  c->r[3]=c->r[3]+c->r[0]; // 80173284
  W32(c->r[3]+0x00000008u,c->r[5]); // 80173288
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 8017328C
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80173290
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173294
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80173298
  c->r[5]=c->r[5]+c->r[0]; // 8017329C
  c->lr=0x801732A4u; f_80186AE4(c); // 801732A0
  cmps(c,0,(int32_t)c->r[3],0); // 801732A4
  if (crb(c,2)) { goto L_801732CC; } // 801732A8
  c->r[4]=c->r[3]|c->r[3]; // 801732AC
  c->r[3]=c->r[31]+0x000006A8u; // 801732B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801732B4
  c->lr=0x801732BCu; f_801506B4(c); // 801732B8
  c->r[0]=0u+0x00000000u; // 801732BC
  c->r[3]=0u+0x00000000u; // 801732C0
  W8(c->r[30]+0x00000008u,c->r[0]); // 801732C4
  goto L_801732D0; // 801732C8
L_801732CC:;
  c->r[3]=0u+0x00000001u; // 801732CC
L_801732D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801732D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801732D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801732D8
  c->lr=c->r[0]; // 801732DC
  c->r[1]=c->r[1]+0x00000010u; // 801732E0
  return; // 801732E4
}

// DVDLowStopMotor
void f_801732E8(Ctx* __restrict c) {
  trace_call(0x801732E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801732E8
  c->r[0]=c->lr; // 801732EC
  c->r[8]=0u+0x80440000u; // 801732F0
  c->r[11]=0u+0x00000001u; // 801732F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801732F8
  c->r[8]=c->r[8]+0x00004D60u; // 801732FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173300
  c->r[31]=0u+0x802D0000u; // 80173304
  c->r[31]=c->r[31]+0x00006508u; // 80173308
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017330C
  c->r[10]=R32(c->r[13]+0xFFFFAD20u); // 80173310
  W8(c->r[13]+0xFFFFAD18u,c->r[11]); // 80173314
  c->r[9]=rotl(c->r[10],5)&0xFFFFFFE0u; // 80173318
  c->r[7]=c->r[8]+c->r[9]; // 8017331C
  c->r[6]=R8(c->r[7]+0x00000008u); // 80173320
  c->r[0]=0u-c->r[6]; // 80173324
  c->r[0]=c->r[0]|c->r[6]; // 80173328
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8017332C
  cmpu(c,0,c->r[0],0x00000001u); // 80173330
  if (!crb(c,2)) { goto L_80173358; } // 80173334
  c->r[4]=c->r[10]|c->r[10]; // 80173338
  c->r[3]=c->r[31]+0x00000240u; // 8017333C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173340
  c->lr=0x80173348u; f_801506B4(c); // 80173344
  c->r[3]=c->r[31]+0x00000278u; // 80173348
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017334C
  c->lr=0x80173354u; f_801506B4(c); // 80173350
L_80173354:;
  IRQCHK(c); goto L_80173354; // 80173354
L_80173358:;
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 80173358
  c->r[0]=c->r[6]+0x01150000u; // 8017335C
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80173360
  if (crb(c,2)) { goto L_80173378; } // 80173364
  c->r[3]=c->r[31]+0x000002A8u; // 80173368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017336C
  c->lr=0x80173374u; f_801506B4(c); // 80173370
L_80173374:;
  IRQCHK(c); goto L_80173374; // 80173374
L_80173378:;
  W32(c->r[8]+c->r[9],c->r[5]); // 80173378
  c->r[0]=c->r[10]+0x00000001u; // 8017337C
  cmps(c,0,(int32_t)c->r[0],4); // 80173380
  W32(c->r[7]+0x00000004u,c->r[11]); // 80173384
  W8(c->r[7]+0x00000008u,c->r[11]); // 80173388
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 8017338C
  if (crb(c,0)) { goto L_8017339C; } // 80173390
  c->r[0]=0u+0x00000000u; // 80173394
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173398
L_8017339C:;
  c->r[5]=R32(c->r[13]+0xFFFFAD1Cu); // 8017339C
  c->r[6]=0u+0x80440000u; // 801733A0
  c->r[7]=rotl(c->r[10],5)&0xFFFFFFE0u; // 801733A4
  c->r[0]=c->r[5]+0x00000001u; // 801733A8
  c->r[6]=c->r[6]+0x00004D60u; // 801733AC
  cmps(c,0,(int32_t)c->r[0],4); // 801733B0
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801733B4
  c->r[30]=c->r[6]+c->r[7]; // 801733B8
  if (crb(c,0)) { goto L_801733C8; } // 801733BC
  c->r[0]=0u+0x00000000u; // 801733C0
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801733C4
L_801733C8:;
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 801733C8
  c->r[7]=0u+0x80440000u; // 801733CC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801733D0
  c->r[6]=0u+0x000000E3u; // 801733D4
  W8(c->r[5]+c->r[0],c->r[6]); // 801733D8
  c->r[9]=0u+0x80170000u; // 801733DC
  c->r[10]=c->r[30]|c->r[30]; // 801733E0
  c->r[7]=c->r[7]+0x00004DE0u; // 801733E4
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 801733E8
  c->r[9]=c->r[9]+0x000020D0u; // 801733EC
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 801733F0
  c->r[6]=0u+0x00000020u; // 801733F4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801733F8
  c->r[8]=0u+0x00000020u; // 801733FC
  c->r[5]=c->r[5]+c->r[0]; // 80173400
  W32(c->r[5]+0x00000004u,c->r[3]); // 80173404
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173408
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 8017340C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173410
  c->r[3]=c->r[3]+c->r[0]; // 80173414
  W32(c->r[3]+0x00000008u,c->r[4]); // 80173418
  c->r[4]=0u+0x000000E3u; // 8017341C
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173420
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80173424
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173428
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8017342C
  c->r[5]=c->r[5]+c->r[0]; // 80173430
  c->lr=0x80173438u; f_80186AE4(c); // 80173434
  cmps(c,0,(int32_t)c->r[3],0); // 80173438
  if (crb(c,2)) { goto L_80173460; } // 8017343C
  c->r[4]=c->r[3]|c->r[3]; // 80173440
  c->r[3]=c->r[31]+0x000006E8u; // 80173444
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173448
  c->lr=0x80173450u; f_801506B4(c); // 8017344C
  c->r[0]=0u+0x00000000u; // 80173450
  c->r[3]=0u+0x00000000u; // 80173454
  W8(c->r[30]+0x00000008u,c->r[0]); // 80173458
  goto L_80173464; // 8017345C
L_80173460:;
  c->r[3]=0u+0x00000001u; // 80173460
L_80173464:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173468
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017346C
  c->lr=c->r[0]; // 80173470
  c->r[1]=c->r[1]+0x00000010u; // 80173474
  return; // 80173478
}

// DVDLowInquiry
void f_8017347C(Ctx* __restrict c) {
  trace_call(0x8017347Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017347C
  c->r[0]=c->lr; // 80173480
  c->r[7]=0u+0x80440000u; // 80173484
  c->r[10]=0u+0x00000001u; // 80173488
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017348C
  c->r[7]=c->r[7]+0x00004D60u; // 80173490
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173494
  c->r[31]=0u+0x802D0000u; // 80173498
  c->r[31]=c->r[31]+0x00006508u; // 8017349C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801734A0
  c->r[9]=R32(c->r[13]+0xFFFFAD20u); // 801734A4
  W8(c->r[13]+0xFFFFAD18u,c->r[10]); // 801734A8
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 801734AC
  c->r[6]=c->r[7]+c->r[8]; // 801734B0
  c->r[5]=R8(c->r[6]+0x00000008u); // 801734B4
  c->r[0]=0u-c->r[5]; // 801734B8
  c->r[0]=c->r[0]|c->r[5]; // 801734BC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801734C0
  cmpu(c,0,c->r[0],0x00000001u); // 801734C4
  if (!crb(c,2)) { goto L_801734EC; } // 801734C8
  c->r[4]=c->r[9]|c->r[9]; // 801734CC
  c->r[3]=c->r[31]+0x00000240u; // 801734D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801734D4
  c->lr=0x801734DCu; f_801506B4(c); // 801734D8
  c->r[3]=c->r[31]+0x00000278u; // 801734DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801734E0
  c->lr=0x801734E8u; f_801506B4(c); // 801734E4
L_801734E8:;
  IRQCHK(c); goto L_801734E8; // 801734E8
L_801734EC:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801734EC
  c->r[0]=c->r[5]+0x01150000u; // 801734F0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801734F4
  if (crb(c,2)) { goto L_8017350C; } // 801734F8
  c->r[3]=c->r[31]+0x000002A8u; // 801734FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173500
  c->lr=0x80173508u; f_801506B4(c); // 80173504
L_80173508:;
  IRQCHK(c); goto L_80173508; // 80173508
L_8017350C:;
  W32(c->r[7]+c->r[8],c->r[4]); // 8017350C
  c->r[0]=c->r[9]+0x00000001u; // 80173510
  cmps(c,0,(int32_t)c->r[0],4); // 80173514
  W32(c->r[6]+0x00000004u,c->r[10]); // 80173518
  W8(c->r[6]+0x00000008u,c->r[10]); // 8017351C
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173520
  if (crb(c,0)) { goto L_80173530; } // 80173524
  c->r[0]=0u+0x00000000u; // 80173528
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 8017352C
L_80173530:;
  c->r[4]=R32(c->r[13]+0xFFFFAD1Cu); // 80173530
  c->r[5]=0u+0x80440000u; // 80173534
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 80173538
  c->r[0]=c->r[4]+0x00000001u; // 8017353C
  c->r[5]=c->r[5]+0x00004D60u; // 80173540
  cmps(c,0,(int32_t)c->r[0],4); // 80173544
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173548
  c->r[30]=c->r[5]+c->r[6]; // 8017354C
  if (crb(c,0)) { goto L_8017355C; } // 80173550
  c->r[0]=0u+0x00000000u; // 80173554
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173558
L_8017355C:;
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 8017355C
  c->r[9]=0u+0x80170000u; // 80173560
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173564
  c->r[5]=0u+0x00000012u; // 80173568
  W8(c->r[4]+c->r[0],c->r[5]); // 8017356C
  c->r[7]=c->r[3]|c->r[3]; // 80173570
  c->r[10]=c->r[30]|c->r[30]; // 80173574
  c->r[9]=c->r[9]+0x000020D0u; // 80173578
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 8017357C
  c->r[4]=0u+0x00000012u; // 80173580
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80173584
  c->r[6]=0u+0x00000020u; // 80173588
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8017358C
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80173590
  c->r[5]=c->r[5]+c->r[0]; // 80173594
  c->r[8]=0u+0x00000020u; // 80173598
  c->lr=0x801735A0u; f_80186AE4(c); // 8017359C
  cmps(c,0,(int32_t)c->r[3],0); // 801735A0
  if (crb(c,2)) { goto L_801735C8; } // 801735A4
  c->r[4]=c->r[3]|c->r[3]; // 801735A8
  c->r[3]=c->r[31]+0x00000768u; // 801735AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801735B0
  c->lr=0x801735B8u; f_801506B4(c); // 801735B4
  c->r[0]=0u+0x00000000u; // 801735B8
  c->r[3]=0u+0x00000000u; // 801735BC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801735C0
  goto L_801735CC; // 801735C4
L_801735C8:;
  c->r[3]=0u+0x00000001u; // 801735C8
L_801735CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801735CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801735D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801735D4
  c->lr=c->r[0]; // 801735D8
  c->r[1]=c->r[1]+0x00000010u; // 801735DC
  return; // 801735E0
}

// DVDLowRequestError
void f_801735E4(Ctx* __restrict c) {
  trace_call(0x801735E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801735E4
  c->r[0]=c->lr; // 801735E8
  c->r[7]=0u+0x80440000u; // 801735EC
  c->r[9]=0u+0x00000001u; // 801735F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801735F4
  c->r[7]=c->r[7]+0x00004D60u; // 801735F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801735FC
  c->r[31]=0u+0x802D0000u; // 80173600
  c->r[31]=c->r[31]+0x00006508u; // 80173604
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173608
  c->r[4]=R32(c->r[13]+0xFFFFAD20u); // 8017360C
  W8(c->r[13]+0xFFFFAD18u,c->r[9]); // 80173610
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80173614
  c->r[6]=c->r[7]+c->r[8]; // 80173618
  c->r[5]=R8(c->r[6]+0x00000008u); // 8017361C
  c->r[0]=0u-c->r[5]; // 80173620
  c->r[0]=c->r[0]|c->r[5]; // 80173624
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80173628
  cmpu(c,0,c->r[0],0x00000001u); // 8017362C
  if (!crb(c,2)) { goto L_80173650; } // 80173630
  c->r[3]=c->r[31]+0x00000240u; // 80173634
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173638
  c->lr=0x80173640u; f_801506B4(c); // 8017363C
  c->r[3]=c->r[31]+0x00000278u; // 80173640
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173644
  c->lr=0x8017364Cu; f_801506B4(c); // 80173648
L_8017364C:;
  IRQCHK(c); goto L_8017364C; // 8017364C
L_80173650:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 80173650
  c->r[0]=c->r[5]+0x01150000u; // 80173654
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80173658
  if (crb(c,2)) { goto L_80173670; } // 8017365C
  c->r[3]=c->r[31]+0x000002A8u; // 80173660
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173664
  c->lr=0x8017366Cu; f_801506B4(c); // 80173668
L_8017366C:;
  IRQCHK(c); goto L_8017366C; // 8017366C
L_80173670:;
  W32(c->r[7]+c->r[8],c->r[3]); // 80173670
  c->r[0]=c->r[4]+0x00000001u; // 80173674
  cmps(c,0,(int32_t)c->r[0],4); // 80173678
  W32(c->r[6]+0x00000004u,c->r[9]); // 8017367C
  W8(c->r[6]+0x00000008u,c->r[9]); // 80173680
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173684
  if (crb(c,0)) { goto L_80173694; } // 80173688
  c->r[0]=0u+0x00000000u; // 8017368C
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173690
L_80173694:;
  c->r[3]=R32(c->r[13]+0xFFFFAD1Cu); // 80173694
  c->r[5]=0u+0x80440000u; // 80173698
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 8017369C
  c->r[0]=c->r[3]+0x00000001u; // 801736A0
  c->r[5]=c->r[5]+0x00004D60u; // 801736A4
  cmps(c,0,(int32_t)c->r[0],4); // 801736A8
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801736AC
  c->r[30]=c->r[5]+c->r[4]; // 801736B0
  if (crb(c,0)) { goto L_801736C0; } // 801736B4
  c->r[0]=0u+0x00000000u; // 801736B8
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801736BC
L_801736C0:;
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 801736C0
  c->r[7]=0u+0x80440000u; // 801736C4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801736C8
  c->r[4]=0u+0x000000E0u; // 801736CC
  W8(c->r[3]+c->r[0],c->r[4]); // 801736D0
  c->r[9]=0u+0x80170000u; // 801736D4
  c->r[10]=c->r[30]|c->r[30]; // 801736D8
  c->r[7]=c->r[7]+0x00004DE0u; // 801736DC
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 801736E0
  c->r[9]=c->r[9]+0x000020D0u; // 801736E4
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 801736E8
  c->r[4]=0u+0x000000E0u; // 801736EC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801736F0
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 801736F4
  c->r[5]=c->r[5]+c->r[0]; // 801736F8
  c->r[6]=0u+0x00000020u; // 801736FC
  c->r[8]=0u+0x00000020u; // 80173700
  c->lr=0x80173708u; f_80186AE4(c); // 80173704
  cmps(c,0,(int32_t)c->r[3],0); // 80173708
  if (crb(c,2)) { goto L_80173730; } // 8017370C
  c->r[4]=c->r[3]|c->r[3]; // 80173710
  c->r[3]=c->r[31]+0x000007A0u; // 80173714
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173718
  c->lr=0x80173720u; f_801506B4(c); // 8017371C
  c->r[0]=0u+0x00000000u; // 80173720
  c->r[3]=0u+0x00000000u; // 80173724
  W8(c->r[30]+0x00000008u,c->r[0]); // 80173728
  goto L_80173734; // 8017372C
L_80173730:;
  c->r[3]=0u+0x00000001u; // 80173730
L_80173734:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173738
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017373C
  c->lr=c->r[0]; // 80173740
  c->r[1]=c->r[1]+0x00000010u; // 80173744
  return; // 80173748
}

// DVDLowSetSpinupFlag
void f_8017374C(Ctx* __restrict c) {
  trace_call(0x8017374Cu);
  W32(c->r[13]+0xFFFFAD28u,c->r[3]); // 8017374C
  c->r[3]=0u+0x00000001u; // 80173750
  return; // 80173754
}

// DVDLowReset
void f_80173758(Ctx* __restrict c) {
  trace_call(0x80173758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173758
  c->r[0]=c->lr; // 8017375C
  c->r[7]=0u+0x80440000u; // 80173760
  c->r[9]=0u+0x00000001u; // 80173764
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173768
  c->r[7]=c->r[7]+0x00004D60u; // 8017376C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173770
  c->r[31]=0u+0x802D0000u; // 80173774
  c->r[31]=c->r[31]+0x00006508u; // 80173778
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017377C
  c->r[4]=R32(c->r[13]+0xFFFFAD20u); // 80173780
  W8(c->r[13]+0xFFFFAD18u,c->r[9]); // 80173784
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80173788
  c->r[6]=c->r[7]+c->r[8]; // 8017378C
  c->r[5]=R8(c->r[6]+0x00000008u); // 80173790
  c->r[0]=0u-c->r[5]; // 80173794
  c->r[0]=c->r[0]|c->r[5]; // 80173798
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8017379C
  cmpu(c,0,c->r[0],0x00000001u); // 801737A0
  if (!crb(c,2)) { goto L_801737C4; } // 801737A4
  c->r[3]=c->r[31]+0x00000240u; // 801737A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801737AC
  c->lr=0x801737B4u; f_801506B4(c); // 801737B0
  c->r[3]=c->r[31]+0x00000278u; // 801737B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801737B8
  c->lr=0x801737C0u; f_801506B4(c); // 801737BC
L_801737C0:;
  IRQCHK(c); goto L_801737C0; // 801737C0
L_801737C4:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801737C4
  c->r[0]=c->r[5]+0x01150000u; // 801737C8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801737CC
  if (crb(c,2)) { goto L_801737E4; } // 801737D0
  c->r[3]=c->r[31]+0x000002A8u; // 801737D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801737D8
  c->lr=0x801737E0u; f_801506B4(c); // 801737DC
L_801737E0:;
  IRQCHK(c); goto L_801737E0; // 801737E0
L_801737E4:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801737E4
  c->r[0]=c->r[4]+0x00000001u; // 801737E8
  cmps(c,0,(int32_t)c->r[0],4); // 801737EC
  W32(c->r[6]+0x00000004u,c->r[9]); // 801737F0
  W8(c->r[6]+0x00000008u,c->r[9]); // 801737F4
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 801737F8
  if (crb(c,0)) { goto L_80173808; } // 801737FC
  c->r[0]=0u+0x00000000u; // 80173800
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173804
L_80173808:;
  c->r[3]=R32(c->r[13]+0xFFFFAD1Cu); // 80173808
  c->r[5]=0u+0x80440000u; // 8017380C
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80173810
  c->r[0]=c->r[3]+0x00000001u; // 80173814
  c->r[5]=c->r[5]+0x00004D60u; // 80173818
  cmps(c,0,(int32_t)c->r[0],4); // 8017381C
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173820
  c->r[30]=c->r[5]+c->r[4]; // 80173824
  if (crb(c,0)) { goto L_80173834; } // 80173828
  c->r[0]=0u+0x00000000u; // 8017382C
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173830
L_80173834:;
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 80173834
  c->r[9]=0u+0x80170000u; // 80173838
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8017383C
  c->r[4]=0u+0x0000008Au; // 80173840
  W8(c->r[3]+c->r[0],c->r[4]); // 80173844
  c->r[10]=c->r[30]|c->r[30]; // 80173848
  c->r[9]=c->r[9]+0x000020D0u; // 8017384C
  c->r[4]=0u+0x0000008Au; // 80173850
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173854
  c->r[6]=0u+0x00000020u; // 80173858
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 8017385C
  c->r[7]=0u+0x00000000u; // 80173860
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173864
  c->r[5]=R32(c->r[13]+0xFFFFAD28u); // 80173868
  c->r[3]=c->r[3]+c->r[0]; // 8017386C
  c->r[8]=0u+0x00000000u; // 80173870
  W32(c->r[3]+0x00000004u,c->r[5]); // 80173874
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173878
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 8017387C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173880
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80173884
  c->r[5]=c->r[5]+c->r[0]; // 80173888
  c->lr=0x80173890u; f_80186AE4(c); // 8017388C
  cmps(c,0,(int32_t)c->r[3],0); // 80173890
  if (crb(c,2)) { goto L_801738B8; } // 80173894
  c->r[4]=c->r[3]|c->r[3]; // 80173898
  c->r[3]=c->r[31]+0x00000860u; // 8017389C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801738A0
  c->lr=0x801738A8u; f_801506B4(c); // 801738A4
  c->r[0]=0u+0x00000000u; // 801738A8
  c->r[3]=0u+0x00000000u; // 801738AC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801738B0
  goto L_801738BC; // 801738B4
L_801738B8:;
  c->r[3]=0u+0x00000001u; // 801738B8
L_801738BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801738BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801738C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801738C4
  c->lr=c->r[0]; // 801738C8
  c->r[1]=c->r[1]+0x00000010u; // 801738CC
  return; // 801738D0
}

// DVDLowAudioBufferConfig
void f_801738D4(Ctx* __restrict c) {
  trace_call(0x801738D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801738D4
  c->r[0]=c->lr; // 801738D8
  c->r[8]=0u+0x80440000u; // 801738DC
  c->r[11]=0u+0x00000001u; // 801738E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801738E4
  c->r[8]=c->r[8]+0x00004D60u; // 801738E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801738EC
  c->r[31]=0u+0x802D0000u; // 801738F0
  c->r[31]=c->r[31]+0x00006508u; // 801738F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801738F8
  c->r[10]=R32(c->r[13]+0xFFFFAD20u); // 801738FC
  W8(c->r[13]+0xFFFFAD18u,c->r[11]); // 80173900
  c->r[9]=rotl(c->r[10],5)&0xFFFFFFE0u; // 80173904
  c->r[7]=c->r[8]+c->r[9]; // 80173908
  c->r[6]=R8(c->r[7]+0x00000008u); // 8017390C
  c->r[0]=0u-c->r[6]; // 80173910
  c->r[0]=c->r[0]|c->r[6]; // 80173914
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80173918
  cmpu(c,0,c->r[0],0x00000001u); // 8017391C
  if (!crb(c,2)) { goto L_80173944; } // 80173920
  c->r[4]=c->r[10]|c->r[10]; // 80173924
  c->r[3]=c->r[31]+0x00000240u; // 80173928
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017392C
  c->lr=0x80173934u; f_801506B4(c); // 80173930
  c->r[3]=c->r[31]+0x00000278u; // 80173934
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173938
  c->lr=0x80173940u; f_801506B4(c); // 8017393C
L_80173940:;
  IRQCHK(c); goto L_80173940; // 80173940
L_80173944:;
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 80173944
  c->r[0]=c->r[6]+0x01150000u; // 80173948
  cmpu(c,0,c->r[0],0x0000DAEDu); // 8017394C
  if (crb(c,2)) { goto L_80173964; } // 80173950
  c->r[3]=c->r[31]+0x000002A8u; // 80173954
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173958
  c->lr=0x80173960u; f_801506B4(c); // 8017395C
L_80173960:;
  IRQCHK(c); goto L_80173960; // 80173960
L_80173964:;
  W32(c->r[8]+c->r[9],c->r[5]); // 80173964
  c->r[0]=c->r[10]+0x00000001u; // 80173968
  cmps(c,0,(int32_t)c->r[0],4); // 8017396C
  W32(c->r[7]+0x00000004u,c->r[11]); // 80173970
  W8(c->r[7]+0x00000008u,c->r[11]); // 80173974
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173978
  if (crb(c,0)) { goto L_80173988; } // 8017397C
  c->r[0]=0u+0x00000000u; // 80173980
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173984
L_80173988:;
  c->r[5]=R32(c->r[13]+0xFFFFAD1Cu); // 80173988
  c->r[6]=0u+0x80440000u; // 8017398C
  c->r[7]=rotl(c->r[10],5)&0xFFFFFFE0u; // 80173990
  c->r[0]=c->r[5]+0x00000001u; // 80173994
  c->r[6]=c->r[6]+0x00004D60u; // 80173998
  cmps(c,0,(int32_t)c->r[0],4); // 8017399C
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801739A0
  c->r[30]=c->r[6]+c->r[7]; // 801739A4
  if (crb(c,0)) { goto L_801739B4; } // 801739A8
  c->r[0]=0u+0x00000000u; // 801739AC
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801739B0
L_801739B4:;
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 801739B4
  c->r[7]=0u+0x80440000u; // 801739B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801739BC
  c->r[6]=0u+0x000000E4u; // 801739C0
  W8(c->r[5]+c->r[0],c->r[6]); // 801739C4
  c->r[9]=0u+0x80170000u; // 801739C8
  c->r[10]=c->r[30]|c->r[30]; // 801739CC
  c->r[7]=c->r[7]+0x00004DE0u; // 801739D0
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 801739D4
  c->r[9]=c->r[9]+0x000020D0u; // 801739D8
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 801739DC
  c->r[6]=0u+0x00000020u; // 801739E0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801739E4
  c->r[8]=0u+0x00000020u; // 801739E8
  c->r[5]=c->r[5]+c->r[0]; // 801739EC
  W32(c->r[5]+0x00000004u,c->r[3]); // 801739F0
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 801739F4
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 801739F8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801739FC
  c->r[3]=c->r[3]+c->r[0]; // 80173A00
  W32(c->r[3]+0x00000008u,c->r[4]); // 80173A04
  c->r[4]=0u+0x000000E4u; // 80173A08
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173A0C
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80173A10
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173A14
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80173A18
  c->r[5]=c->r[5]+c->r[0]; // 80173A1C
  c->lr=0x80173A24u; f_80186AE4(c); // 80173A20
  cmps(c,0,(int32_t)c->r[3],0); // 80173A24
  if (crb(c,2)) { goto L_80173A4C; } // 80173A28
  c->r[4]=c->r[3]|c->r[3]; // 80173A2C
  c->r[3]=c->r[31]+0x00000898u; // 80173A30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173A34
  c->lr=0x80173A3Cu; f_801506B4(c); // 80173A38
  c->r[0]=0u+0x00000000u; // 80173A3C
  c->r[3]=0u+0x00000000u; // 80173A40
  W8(c->r[30]+0x00000008u,c->r[0]); // 80173A44
  goto L_80173A50; // 80173A48
L_80173A4C:;
  c->r[3]=0u+0x00000001u; // 80173A4C
L_80173A50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173A50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173A54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80173A58
  c->lr=c->r[0]; // 80173A5C
  c->r[1]=c->r[1]+0x00000010u; // 80173A60
  return; // 80173A64
}

// DVDLowReportKey
void f_80173A68(Ctx* __restrict c) {
  trace_call(0x80173A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173A68
  c->r[0]=c->lr; // 80173A6C
  c->r[9]=0u+0x80440000u; // 80173A70
  c->r[12]=0u+0x00000001u; // 80173A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173A78
  c->r[9]=c->r[9]+0x00004D60u; // 80173A7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173A80
  c->r[31]=0u+0x802D0000u; // 80173A84
  c->r[31]=c->r[31]+0x00006508u; // 80173A88
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173A8C
  c->r[11]=R32(c->r[13]+0xFFFFAD20u); // 80173A90
  W8(c->r[13]+0xFFFFAD18u,c->r[12]); // 80173A94
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 80173A98
  c->r[8]=c->r[9]+c->r[10]; // 80173A9C
  c->r[7]=R8(c->r[8]+0x00000008u); // 80173AA0
  c->r[0]=0u-c->r[7]; // 80173AA4
  c->r[0]=c->r[0]|c->r[7]; // 80173AA8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80173AAC
  cmpu(c,0,c->r[0],0x00000001u); // 80173AB0
  if (!crb(c,2)) { goto L_80173AD8; } // 80173AB4
  c->r[4]=c->r[11]|c->r[11]; // 80173AB8
  c->r[3]=c->r[31]+0x00000240u; // 80173ABC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173AC0
  c->lr=0x80173AC8u; f_801506B4(c); // 80173AC4
  c->r[3]=c->r[31]+0x00000278u; // 80173AC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173ACC
  c->lr=0x80173AD4u; f_801506B4(c); // 80173AD0
L_80173AD4:;
  IRQCHK(c); goto L_80173AD4; // 80173AD4
L_80173AD8:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 80173AD8
  c->r[0]=c->r[7]+0x01150000u; // 80173ADC
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80173AE0
  if (crb(c,2)) { goto L_80173AF8; } // 80173AE4
  c->r[3]=c->r[31]+0x000002A8u; // 80173AE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173AEC
  c->lr=0x80173AF4u; f_801506B4(c); // 80173AF0
L_80173AF4:;
  IRQCHK(c); goto L_80173AF4; // 80173AF4
L_80173AF8:;
  W32(c->r[9]+c->r[10],c->r[6]); // 80173AF8
  c->r[0]=c->r[11]+0x00000001u; // 80173AFC
  cmps(c,0,(int32_t)c->r[0],4); // 80173B00
  W32(c->r[8]+0x00000004u,c->r[12]); // 80173B04
  W8(c->r[8]+0x00000008u,c->r[12]); // 80173B08
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173B0C
  if (crb(c,0)) { goto L_80173B1C; } // 80173B10
  c->r[0]=0u+0x00000000u; // 80173B14
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173B18
L_80173B1C:;
  c->r[6]=R32(c->r[13]+0xFFFFAD1Cu); // 80173B1C
  c->r[7]=0u+0x80440000u; // 80173B20
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 80173B24
  c->r[0]=c->r[6]+0x00000001u; // 80173B28
  c->r[7]=c->r[7]+0x00004D60u; // 80173B2C
  cmps(c,0,(int32_t)c->r[0],4); // 80173B30
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173B34
  c->r[30]=c->r[7]+c->r[8]; // 80173B38
  if (crb(c,0)) { goto L_80173B48; } // 80173B3C
  c->r[0]=0u+0x00000000u; // 80173B40
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173B44
L_80173B48:;
  c->r[6]=R32(c->r[13]+0xFFFFAD34u); // 80173B48
  c->r[11]=rotl(c->r[4],16)&0x0000FFFFu; // 80173B4C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173B50
  c->r[4]=0u+0x000000A4u; // 80173B54
  W8(c->r[6]+c->r[0],c->r[4]); // 80173B58
  c->r[7]=c->r[3]|c->r[3]; // 80173B5C
  c->r[9]=0u+0x80170000u; // 80173B60
  c->r[10]=c->r[30]|c->r[30]; // 80173B64
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173B68
  c->r[9]=c->r[9]+0x000020D0u; // 80173B6C
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 80173B70
  c->r[4]=0u+0x000000A4u; // 80173B74
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173B78
  c->r[6]=0u+0x00000020u; // 80173B7C
  c->r[3]=c->r[3]+c->r[0]; // 80173B80
  c->r[8]=0u+0x00000020u; // 80173B84
  W32(c->r[3]+0x00000004u,c->r[11]); // 80173B88
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173B8C
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 80173B90
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173B94
  c->r[3]=c->r[3]+c->r[0]; // 80173B98
  W32(c->r[3]+0x00000008u,c->r[5]); // 80173B9C
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173BA0
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80173BA4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173BA8
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80173BAC
  c->r[5]=c->r[5]+c->r[0]; // 80173BB0
  c->lr=0x80173BB8u; f_80186AE4(c); // 80173BB4
  cmps(c,0,(int32_t)c->r[3],0); // 80173BB8
  if (crb(c,2)) { goto L_80173BE0; } // 80173BBC
  c->r[4]=c->r[3]|c->r[3]; // 80173BC0
  c->r[3]=c->r[31]+0x00000A98u; // 80173BC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173BC8
  c->lr=0x80173BD0u; f_801506B4(c); // 80173BCC
  c->r[0]=0u+0x00000000u; // 80173BD0
  c->r[3]=0u+0x00000000u; // 80173BD4
  W8(c->r[30]+0x00000008u,c->r[0]); // 80173BD8
  goto L_80173BE4; // 80173BDC
L_80173BE0:;
  c->r[3]=0u+0x00000001u; // 80173BE0
L_80173BE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173BE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80173BEC
  c->lr=c->r[0]; // 80173BF0
  c->r[1]=c->r[1]+0x00000010u; // 80173BF4
  return; // 80173BF8
}

// DVDLowSetMaximumRotation
void f_80173BFC(Ctx* __restrict c) {
  trace_call(0x80173BFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173BFC
  c->r[0]=c->lr; // 80173C00
  c->r[7]=0u+0x80440000u; // 80173C04
  c->r[10]=0u+0x00000001u; // 80173C08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173C0C
  c->r[7]=c->r[7]+0x00004D60u; // 80173C10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173C14
  c->r[31]=0u+0x802D0000u; // 80173C18
  c->r[31]=c->r[31]+0x00006508u; // 80173C1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173C20
  c->r[9]=R32(c->r[13]+0xFFFFAD20u); // 80173C24
  W8(c->r[13]+0xFFFFAD18u,c->r[10]); // 80173C28
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 80173C2C
  c->r[6]=c->r[7]+c->r[8]; // 80173C30
  c->r[5]=R8(c->r[6]+0x00000008u); // 80173C34
  c->r[0]=0u-c->r[5]; // 80173C38
  c->r[0]=c->r[0]|c->r[5]; // 80173C3C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80173C40
  cmpu(c,0,c->r[0],0x00000001u); // 80173C44
  if (!crb(c,2)) { goto L_80173C6C; } // 80173C48
  c->r[4]=c->r[9]|c->r[9]; // 80173C4C
  c->r[3]=c->r[31]+0x00000240u; // 80173C50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173C54
  c->lr=0x80173C5Cu; f_801506B4(c); // 80173C58
  c->r[3]=c->r[31]+0x00000278u; // 80173C5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173C60
  c->lr=0x80173C68u; f_801506B4(c); // 80173C64
L_80173C68:;
  IRQCHK(c); goto L_80173C68; // 80173C68
L_80173C6C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 80173C6C
  c->r[0]=c->r[5]+0x01150000u; // 80173C70
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80173C74
  if (crb(c,2)) { goto L_80173C8C; } // 80173C78
  c->r[3]=c->r[31]+0x000002A8u; // 80173C7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173C80
  c->lr=0x80173C88u; f_801506B4(c); // 80173C84
L_80173C88:;
  IRQCHK(c); goto L_80173C88; // 80173C88
L_80173C8C:;
  W32(c->r[7]+c->r[8],c->r[4]); // 80173C8C
  c->r[0]=c->r[9]+0x00000001u; // 80173C90
  cmps(c,0,(int32_t)c->r[0],4); // 80173C94
  W32(c->r[6]+0x00000004u,c->r[10]); // 80173C98
  W8(c->r[6]+0x00000008u,c->r[10]); // 80173C9C
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173CA0
  if (crb(c,0)) { goto L_80173CB0; } // 80173CA4
  c->r[0]=0u+0x00000000u; // 80173CA8
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173CAC
L_80173CB0:;
  c->r[4]=R32(c->r[13]+0xFFFFAD1Cu); // 80173CB0
  c->r[5]=0u+0x80440000u; // 80173CB4
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 80173CB8
  c->r[0]=c->r[4]+0x00000001u; // 80173CBC
  c->r[5]=c->r[5]+0x00004D60u; // 80173CC0
  cmps(c,0,(int32_t)c->r[0],4); // 80173CC4
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173CC8
  c->r[30]=c->r[5]+c->r[6]; // 80173CCC
  if (crb(c,0)) { goto L_80173CDC; } // 80173CD0
  c->r[0]=0u+0x00000000u; // 80173CD4
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173CD8
L_80173CDC:;
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 80173CDC
  c->r[9]=0u+0x80170000u; // 80173CE0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173CE4
  c->r[5]=0u+0x000000DDu; // 80173CE8
  W8(c->r[4]+c->r[0],c->r[5]); // 80173CEC
  c->r[5]=rotl(c->r[3],16)&0x00000003u; // 80173CF0
  c->r[10]=c->r[30]|c->r[30]; // 80173CF4
  c->r[9]=c->r[9]+0x000020D0u; // 80173CF8
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173CFC
  c->r[4]=0u+0x000000DDu; // 80173D00
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 80173D04
  c->r[6]=0u+0x00000020u; // 80173D08
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173D0C
  c->r[7]=0u+0x00000000u; // 80173D10
  c->r[3]=c->r[3]+c->r[0]; // 80173D14
  c->r[8]=0u+0x00000000u; // 80173D18
  W32(c->r[3]+0x00000004u,c->r[5]); // 80173D1C
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173D20
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80173D24
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173D28
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80173D2C
  c->r[5]=c->r[5]+c->r[0]; // 80173D30
  c->lr=0x80173D38u; f_80186AE4(c); // 80173D34
  cmps(c,0,(int32_t)c->r[3],0); // 80173D38
  if (crb(c,2)) { goto L_80173D60; } // 80173D3C
  c->r[4]=c->r[3]|c->r[3]; // 80173D40
  c->r[3]=c->r[31]+0x00000C4Cu; // 80173D44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173D48
  c->lr=0x80173D50u; f_801506B4(c); // 80173D4C
  c->r[0]=0u+0x00000000u; // 80173D50
  c->r[3]=0u+0x00000000u; // 80173D54
  W8(c->r[30]+0x00000008u,c->r[0]); // 80173D58
  goto L_80173D64; // 80173D5C
L_80173D60:;
  c->r[3]=0u+0x00000001u; // 80173D60
L_80173D64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173D64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173D68
  c->r[30]=R32(c->r[1]+0x00000008u); // 80173D6C
  c->lr=c->r[0]; // 80173D70
  c->r[1]=c->r[1]+0x00000010u; // 80173D74
  return; // 80173D78
}

// DVDLowRead
void f_80173D7C(Ctx* __restrict c) {
  trace_call(0x80173D7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173D7C
  c->r[0]=c->lr; // 80173D80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173D84
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 80173D88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173D8C
  c->r[31]=0u+0x802D0000u; // 80173D90
  c->r[31]=c->r[31]+0x00006508u; // 80173D94
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173D98
  if (crb(c,2)) { goto L_80173DB4; } // 80173D9C
  c->r[3]=c->r[31]+0x00000C8Cu; // 80173DA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173DA4
  c->lr=0x80173DACu; f_801506B4(c); // 80173DA8
  c->r[3]=0u+0x00000000u; // 80173DAC
  goto L_80173F14; // 80173DB0
L_80173DB4:;
  c->r[11]=R32(c->r[13]+0xFFFFAD20u); // 80173DB4
  c->r[9]=0u+0x80440000u; // 80173DB8
  c->r[12]=0u+0x00000001u; // 80173DBC
  c->r[10]=rotl(c->r[11],5)&0xFFFFFFE0u; // 80173DC0
  c->r[9]=c->r[9]+0x00004D60u; // 80173DC4
  c->r[8]=c->r[9]+c->r[10]; // 80173DC8
  W8(c->r[13]+0xFFFFAD18u,c->r[12]); // 80173DCC
  c->r[7]=R8(c->r[8]+0x00000008u); // 80173DD0
  c->r[0]=0u-c->r[7]; // 80173DD4
  c->r[0]=c->r[0]|c->r[7]; // 80173DD8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80173DDC
  cmpu(c,0,c->r[0],0x00000001u); // 80173DE0
  if (!crb(c,2)) { goto L_80173E08; } // 80173DE4
  c->r[4]=c->r[11]|c->r[11]; // 80173DE8
  c->r[3]=c->r[31]+0x00000240u; // 80173DEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173DF0
  c->lr=0x80173DF8u; f_801506B4(c); // 80173DF4
  c->r[3]=c->r[31]+0x00000278u; // 80173DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173DFC
  c->lr=0x80173E04u; f_801506B4(c); // 80173E00
L_80173E04:;
  IRQCHK(c); goto L_80173E04; // 80173E04
L_80173E08:;
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 80173E08
  c->r[0]=c->r[7]+0x01150000u; // 80173E0C
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80173E10
  if (crb(c,2)) { goto L_80173E28; } // 80173E14
  c->r[3]=c->r[31]+0x000002A8u; // 80173E18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173E1C
  c->lr=0x80173E24u; f_801506B4(c); // 80173E20
L_80173E24:;
  IRQCHK(c); goto L_80173E24; // 80173E24
L_80173E28:;
  W32(c->r[9]+c->r[10],c->r[6]); // 80173E28
  c->r[0]=c->r[11]+0x00000001u; // 80173E2C
  cmps(c,0,(int32_t)c->r[0],4); // 80173E30
  W32(c->r[8]+0x00000004u,c->r[12]); // 80173E34
  W8(c->r[8]+0x00000008u,c->r[12]); // 80173E38
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173E3C
  if (crb(c,0)) { goto L_80173E4C; } // 80173E40
  c->r[0]=0u+0x00000000u; // 80173E44
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173E48
L_80173E4C:;
  c->r[6]=R32(c->r[13]+0xFFFFAD1Cu); // 80173E4C
  c->r[7]=0u+0x80440000u; // 80173E50
  W32(c->r[13]+0xFFFFAD2Cu,c->r[4]); // 80173E54
  c->r[8]=rotl(c->r[11],5)&0xFFFFFFE0u; // 80173E58
  c->r[0]=c->r[6]+0x00000001u; // 80173E5C
  c->r[7]=c->r[7]+0x00004D60u; // 80173E60
  cmps(c,0,(int32_t)c->r[0],4); // 80173E64
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173E68
  c->r[30]=c->r[7]+c->r[8]; // 80173E6C
  if (crb(c,0)) { goto L_80173E7C; } // 80173E70
  c->r[0]=0u+0x00000000u; // 80173E74
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173E78
L_80173E7C:;
  c->r[6]=R32(c->r[13]+0xFFFFAD34u); // 80173E7C
  c->r[9]=0u+0x80170000u; // 80173E80
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173E84
  c->r[7]=0u+0x00000071u; // 80173E88
  W8(c->r[6]+c->r[0],c->r[7]); // 80173E8C
  c->r[7]=c->r[3]|c->r[3]; // 80173E90
  c->r[8]=c->r[4]|c->r[4]; // 80173E94
  c->r[10]=c->r[30]|c->r[30]; // 80173E98
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173E9C
  c->r[9]=c->r[9]+0x000020D0u; // 80173EA0
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 80173EA4
  c->r[6]=0u+0x00000020u; // 80173EA8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173EAC
  c->r[3]=c->r[3]+c->r[0]; // 80173EB0
  W32(c->r[3]+0x00000004u,c->r[4]); // 80173EB4
  c->r[4]=0u+0x00000071u; // 80173EB8
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173EBC
  c->r[3]=R32(c->r[13]+0xFFFFAD34u); // 80173EC0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173EC4
  c->r[3]=c->r[3]+c->r[0]; // 80173EC8
  W32(c->r[3]+0x00000008u,c->r[5]); // 80173ECC
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80173ED0
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80173ED4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80173ED8
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80173EDC
  c->r[5]=c->r[5]+c->r[0]; // 80173EE0
  c->lr=0x80173EE8u; f_80186AE4(c); // 80173EE4
  cmps(c,0,(int32_t)c->r[3],0); // 80173EE8
  if (crb(c,2)) { goto L_80173F10; } // 80173EEC
  c->r[4]=c->r[3]|c->r[3]; // 80173EF0
  c->r[3]=c->r[31]+0x00000CCCu; // 80173EF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173EF8
  c->lr=0x80173F00u; f_801506B4(c); // 80173EFC
  c->r[0]=0u+0x00000000u; // 80173F00
  c->r[3]=0u+0x00000000u; // 80173F04
  W8(c->r[30]+0x00000008u,c->r[0]); // 80173F08
  goto L_80173F14; // 80173F0C
L_80173F10:;
  c->r[3]=0u+0x00000001u; // 80173F10
L_80173F14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173F14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173F18
  c->r[30]=R32(c->r[1]+0x00000008u); // 80173F1C
  c->lr=c->r[0]; // 80173F20
  c->r[1]=c->r[1]+0x00000010u; // 80173F24
  return; // 80173F28
}

// DVDLowSeek
void f_80173F2C(Ctx* __restrict c) {
  trace_call(0x80173F2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173F2C
  c->r[0]=c->lr; // 80173F30
  c->r[7]=0u+0x80440000u; // 80173F34
  c->r[10]=0u+0x00000001u; // 80173F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173F3C
  c->r[7]=c->r[7]+0x00004D60u; // 80173F40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173F44
  c->r[31]=0u+0x802D0000u; // 80173F48
  c->r[31]=c->r[31]+0x00006508u; // 80173F4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80173F50
  c->r[9]=R32(c->r[13]+0xFFFFAD20u); // 80173F54
  W8(c->r[13]+0xFFFFAD18u,c->r[10]); // 80173F58
  c->r[8]=rotl(c->r[9],5)&0xFFFFFFE0u; // 80173F5C
  c->r[6]=c->r[7]+c->r[8]; // 80173F60
  c->r[5]=R8(c->r[6]+0x00000008u); // 80173F64
  c->r[0]=0u-c->r[5]; // 80173F68
  c->r[0]=c->r[0]|c->r[5]; // 80173F6C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80173F70
  cmpu(c,0,c->r[0],0x00000001u); // 80173F74
  if (!crb(c,2)) { goto L_80173F9C; } // 80173F78
  c->r[4]=c->r[9]|c->r[9]; // 80173F7C
  c->r[3]=c->r[31]+0x00000240u; // 80173F80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173F84
  c->lr=0x80173F8Cu; f_801506B4(c); // 80173F88
  c->r[3]=c->r[31]+0x00000278u; // 80173F8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173F90
  c->lr=0x80173F98u; f_801506B4(c); // 80173F94
L_80173F98:;
  IRQCHK(c); goto L_80173F98; // 80173F98
L_80173F9C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 80173F9C
  c->r[0]=c->r[5]+0x01150000u; // 80173FA0
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80173FA4
  if (crb(c,2)) { goto L_80173FBC; } // 80173FA8
  c->r[3]=c->r[31]+0x000002A8u; // 80173FAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80173FB0
  c->lr=0x80173FB8u; f_801506B4(c); // 80173FB4
L_80173FB8:;
  IRQCHK(c); goto L_80173FB8; // 80173FB8
L_80173FBC:;
  W32(c->r[7]+c->r[8],c->r[4]); // 80173FBC
  c->r[0]=c->r[9]+0x00000001u; // 80173FC0
  cmps(c,0,(int32_t)c->r[0],4); // 80173FC4
  W32(c->r[6]+0x00000004u,c->r[10]); // 80173FC8
  W8(c->r[6]+0x00000008u,c->r[10]); // 80173FCC
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173FD0
  if (crb(c,0)) { goto L_80173FE0; } // 80173FD4
  c->r[0]=0u+0x00000000u; // 80173FD8
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80173FDC
L_80173FE0:;
  c->r[4]=R32(c->r[13]+0xFFFFAD1Cu); // 80173FE0
  c->r[5]=0u+0x80440000u; // 80173FE4
  c->r[6]=rotl(c->r[9],5)&0xFFFFFFE0u; // 80173FE8
  c->r[0]=c->r[4]+0x00000001u; // 80173FEC
  c->r[5]=c->r[5]+0x00004D60u; // 80173FF0
  cmps(c,0,(int32_t)c->r[0],4); // 80173FF4
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80173FF8
  c->r[30]=c->r[5]+c->r[6]; // 80173FFC
  if (crb(c,0)) { goto L_8017400C; } // 80174000
  c->r[0]=0u+0x00000000u; // 80174004
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80174008
L_8017400C:;
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 8017400C
  c->r[9]=0u+0x80170000u; // 80174010
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80174014
  c->r[5]=0u+0x000000ABu; // 80174018
  W8(c->r[4]+c->r[0],c->r[5]); // 8017401C
  c->r[10]=c->r[30]|c->r[30]; // 80174020
  c->r[9]=c->r[9]+0x000020D0u; // 80174024
  c->r[4]=0u+0x000000ABu; // 80174028
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 8017402C
  c->r[6]=0u+0x00000020u; // 80174030
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80174034
  c->r[7]=0u+0x00000000u; // 80174038
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8017403C
  c->r[8]=0u+0x00000000u; // 80174040
  c->r[5]=c->r[5]+c->r[0]; // 80174044
  W32(c->r[5]+0x00000004u,c->r[3]); // 80174048
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 8017404C
  c->r[5]=R32(c->r[13]+0xFFFFAD34u); // 80174050
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80174054
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 80174058
  c->r[5]=c->r[5]+c->r[0]; // 8017405C
  c->lr=0x80174064u; f_80186AE4(c); // 80174060
  cmps(c,0,(int32_t)c->r[3],0); // 80174064
  if (crb(c,2)) { goto L_8017408C; } // 80174068
  c->r[4]=c->r[3]|c->r[3]; // 8017406C
  c->r[3]=c->r[31]+0x00000D00u; // 80174070
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80174074
  c->lr=0x8017407Cu; f_801506B4(c); // 80174078
  c->r[0]=0u+0x00000000u; // 8017407C
  c->r[3]=0u+0x00000000u; // 80174080
  W8(c->r[30]+0x00000008u,c->r[0]); // 80174084
  goto L_80174090; // 80174088
L_8017408C:;
  c->r[3]=0u+0x00000001u; // 8017408C
L_80174090:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80174090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80174094
  c->r[30]=R32(c->r[1]+0x00000008u); // 80174098
  c->lr=c->r[0]; // 8017409C
  c->r[1]=c->r[1]+0x00000010u; // 801740A0
  return; // 801740A4
}

// DVDLowGetCoverRegister
void f_801740A8(Ctx* __restrict c) {
  trace_call(0x801740A8u);
  c->r[3]=0u+0x80440000u; // 801740A8
  c->r[3]=c->r[3]+0x00004DE0u; // 801740AC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801740B0
  return; // 801740B4
}

// DVDLowGetControlRegister
void f_801740B8(Ctx* __restrict c) {
  trace_call(0x801740B8u);
  c->r[3]=0u+0x80440000u; // 801740B8
  c->r[3]=R32(c->r[3]+0x00004EE0u); // 801740BC
  return; // 801740C0
}

// DVDLowPrepareCoverRegister
void f_801740C4(Ctx* __restrict c) {
  trace_call(0x801740C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801740C4
  c->r[0]=c->lr; // 801740C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801740CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801740D0
  c->r[31]=0u+0x802D0000u; // 801740D4
  c->r[31]=c->r[31]+0x00006508u; // 801740D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801740DC
  c->r[4]=R32(c->r[13]+0xFFFFAD1Cu); // 801740E0
  c->r[0]=c->r[4]+0x00000001u; // 801740E4
  cmps(c,0,(int32_t)c->r[0],4); // 801740E8
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801740EC
  if (crb(c,0)) { goto L_801740FC; } // 801740F0
  c->r[0]=0u+0x00000000u; // 801740F4
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801740F8
L_801740FC:;
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 801740FC
  c->r[7]=0u+0x80440000u; // 80174100
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80174104
  c->r[5]=0u+0x0000007Au; // 80174108
  W8(c->r[4]+c->r[0],c->r[5]); // 8017410C
  c->r[9]=0u+0x00000001u; // 80174110
  c->r[7]=c->r[7]+0x00004D60u; // 80174114
  c->r[4]=R32(c->r[13]+0xFFFFAD20u); // 80174118
  W8(c->r[13]+0xFFFFAD18u,c->r[9]); // 8017411C
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80174120
  c->r[6]=c->r[7]+c->r[8]; // 80174124
  c->r[5]=R8(c->r[6]+0x00000008u); // 80174128
  c->r[0]=0u-c->r[5]; // 8017412C
  c->r[0]=c->r[0]|c->r[5]; // 80174130
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80174134
  cmpu(c,0,c->r[0],0x00000001u); // 80174138
  if (!crb(c,2)) { goto L_8017415C; } // 8017413C
  c->r[3]=c->r[31]+0x00000240u; // 80174140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80174144
  c->lr=0x8017414Cu; f_801506B4(c); // 80174148
  c->r[3]=c->r[31]+0x00000278u; // 8017414C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80174150
  c->lr=0x80174158u; f_801506B4(c); // 80174154
L_80174158:;
  IRQCHK(c); goto L_80174158; // 80174158
L_8017415C:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 8017415C
  c->r[0]=c->r[5]+0x01150000u; // 80174160
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80174164
  if (crb(c,2)) { goto L_8017417C; } // 80174168
  c->r[3]=c->r[31]+0x000002A8u; // 8017416C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80174170
  c->lr=0x80174178u; f_801506B4(c); // 80174174
L_80174178:;
  IRQCHK(c); goto L_80174178; // 80174178
L_8017417C:;
  W32(c->r[7]+c->r[8],c->r[3]); // 8017417C
  c->r[0]=c->r[4]+0x00000001u; // 80174180
  cmps(c,0,(int32_t)c->r[0],4); // 80174184
  W32(c->r[6]+0x00000004u,c->r[9]); // 80174188
  W8(c->r[6]+0x00000008u,c->r[9]); // 8017418C
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80174190
  if (crb(c,0)) { goto L_801741A0; } // 80174194
  c->r[0]=0u+0x00000000u; // 80174198
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 8017419C
L_801741A0:;
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 801741A0
  c->r[3]=0u+0x80440000u; // 801741A4
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801741A8
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 801741AC
  c->r[3]=c->r[3]+0x00004D60u; // 801741B0
  c->r[7]=0u+0x80440000u; // 801741B4
  c->r[30]=c->r[3]+c->r[5]; // 801741B8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801741BC
  c->r[9]=0u+0x80170000u; // 801741C0
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 801741C4
  c->r[5]=c->r[4]+c->r[0]; // 801741C8
  c->r[10]=c->r[30]|c->r[30]; // 801741CC
  c->r[7]=c->r[7]+0x00004E00u; // 801741D0
  c->r[9]=c->r[9]+0x00002188u; // 801741D4
  c->r[4]=0u+0x0000007Au; // 801741D8
  c->r[6]=0u+0x00000020u; // 801741DC
  c->r[8]=0u+0x00000020u; // 801741E0
  c->lr=0x801741E8u; f_80186AE4(c); // 801741E4
  cmps(c,0,(int32_t)c->r[3],0); // 801741E8
  if (crb(c,2)) { goto L_80174210; } // 801741EC
  c->r[4]=c->r[3]|c->r[3]; // 801741F0
  c->r[3]=c->r[31]+0x00000DB0u; // 801741F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801741F8
  c->lr=0x80174200u; f_801506B4(c); // 801741FC
  c->r[0]=0u+0x00000000u; // 80174200
  c->r[3]=0u+0x00000000u; // 80174204
  W8(c->r[30]+0x00000008u,c->r[0]); // 80174208
  goto L_80174214; // 8017420C
L_80174210:;
  c->r[3]=0u+0x00000001u; // 80174210
L_80174214:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80174214
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80174218
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017421C
  c->lr=c->r[0]; // 80174220
  c->r[1]=c->r[1]+0x00000010u; // 80174224
  return; // 80174228
}

// DVDLowPrepareStatusRegister
void f_8017422C(Ctx* __restrict c) {
  trace_call(0x8017422Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017422C
  c->r[0]=c->lr; // 80174230
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80174238
  c->r[31]=0u+0x802D0000u; // 8017423C
  c->r[31]=c->r[31]+0x00006508u; // 80174240
  W32(c->r[1]+0x00000008u,c->r[30]); // 80174244
  c->r[4]=R32(c->r[13]+0xFFFFAD1Cu); // 80174248
  c->r[0]=c->r[4]+0x00000001u; // 8017424C
  cmps(c,0,(int32_t)c->r[0],4); // 80174250
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80174254
  if (crb(c,0)) { goto L_80174264; } // 80174258
  c->r[0]=0u+0x00000000u; // 8017425C
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 80174260
L_80174264:;
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 80174264
  c->r[7]=0u+0x80440000u; // 80174268
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8017426C
  c->r[5]=0u+0x00000095u; // 80174270
  W8(c->r[4]+c->r[0],c->r[5]); // 80174274
  c->r[9]=0u+0x00000001u; // 80174278
  c->r[7]=c->r[7]+0x00004D60u; // 8017427C
  c->r[4]=R32(c->r[13]+0xFFFFAD20u); // 80174280
  W8(c->r[13]+0xFFFFAD18u,c->r[9]); // 80174284
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80174288
  c->r[6]=c->r[7]+c->r[8]; // 8017428C
  c->r[5]=R8(c->r[6]+0x00000008u); // 80174290
  c->r[0]=0u-c->r[5]; // 80174294
  c->r[0]=c->r[0]|c->r[5]; // 80174298
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8017429C
  cmpu(c,0,c->r[0],0x00000001u); // 801742A0
  if (!crb(c,2)) { goto L_801742C4; } // 801742A4
  c->r[3]=c->r[31]+0x00000240u; // 801742A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801742AC
  c->lr=0x801742B4u; f_801506B4(c); // 801742B0
  c->r[3]=c->r[31]+0x00000278u; // 801742B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801742B8
  c->lr=0x801742C0u; f_801506B4(c); // 801742BC
L_801742C0:;
  IRQCHK(c); goto L_801742C0; // 801742C0
L_801742C4:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801742C4
  c->r[0]=c->r[5]+0x01150000u; // 801742C8
  cmpu(c,0,c->r[0],0x0000DAEDu); // 801742CC
  if (crb(c,2)) { goto L_801742E4; } // 801742D0
  c->r[3]=c->r[31]+0x000002A8u; // 801742D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801742D8
  c->lr=0x801742E0u; f_801506B4(c); // 801742DC
L_801742E0:;
  IRQCHK(c); goto L_801742E0; // 801742E0
L_801742E4:;
  W32(c->r[7]+c->r[8],c->r[3]); // 801742E4
  c->r[0]=c->r[4]+0x00000001u; // 801742E8
  cmps(c,0,(int32_t)c->r[0],4); // 801742EC
  W32(c->r[6]+0x00000004u,c->r[9]); // 801742F0
  W8(c->r[6]+0x00000008u,c->r[9]); // 801742F4
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 801742F8
  if (crb(c,0)) { goto L_80174308; } // 801742FC
  c->r[0]=0u+0x00000000u; // 80174300
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80174304
L_80174308:;
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 80174308
  c->r[3]=0u+0x80440000u; // 8017430C
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80174310
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 80174314
  c->r[3]=c->r[3]+0x00004D60u; // 80174318
  c->r[7]=0u+0x80440000u; // 8017431C
  c->r[30]=c->r[3]+c->r[5]; // 80174320
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80174324
  c->r[9]=0u+0x80170000u; // 80174328
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 8017432C
  c->r[5]=c->r[4]+c->r[0]; // 80174330
  c->r[10]=c->r[30]|c->r[30]; // 80174334
  c->r[7]=c->r[7]+0x00004EE0u; // 80174338
  c->r[9]=c->r[9]+0x000020D0u; // 8017433C
  c->r[4]=0u+0x00000095u; // 80174340
  c->r[6]=0u+0x00000020u; // 80174344
  c->r[8]=0u+0x00000020u; // 80174348
  c->lr=0x80174350u; f_80186AE4(c); // 8017434C
  cmps(c,0,(int32_t)c->r[3],0); // 80174350
  if (crb(c,2)) { goto L_80174378; } // 80174354
  c->r[4]=c->r[3]|c->r[3]; // 80174358
  c->r[3]=c->r[31]+0x00000DF4u; // 8017435C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80174360
  c->lr=0x80174368u; f_801506B4(c); // 80174364
  c->r[0]=0u+0x00000000u; // 80174368
  c->r[3]=0u+0x00000000u; // 8017436C
  W8(c->r[30]+0x00000008u,c->r[0]); // 80174370
  goto L_8017437C; // 80174374
L_80174378:;
  c->r[3]=0u+0x00000001u; // 80174378
L_8017437C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017437C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80174380
  c->r[30]=R32(c->r[1]+0x00000008u); // 80174384
  c->lr=c->r[0]; // 80174388
  c->r[1]=c->r[1]+0x00000010u; // 8017438C
  return; // 80174390
}

// DVDLowGetImmBufferReg
void f_80174394(Ctx* __restrict c) {
  trace_call(0x80174394u);
  c->r[3]=0u+0x80440000u; // 80174394
  c->r[3]=R32(c->r[3]+0x00004DE0u); // 80174398
  return; // 8017439C
}

// DVDLowUnmaskStatusInterrupts
void f_801743A0(Ctx* __restrict c) {
  trace_call(0x801743A0u);
  c->r[3]=0u+0x00000001u; // 801743A0
  return; // 801743A4
}

// DVDLowMaskCoverInterrupt
void f_801743A8(Ctx* __restrict c) {
  trace_call(0x801743A8u);
  c->r[3]=0u+0x00000001u; // 801743A8
  return; // 801743AC
}

// DVDLowClearCoverInterrupt
void f_801743B0(Ctx* __restrict c) {
  trace_call(0x801743B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801743B0
  c->r[0]=c->lr; // 801743B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801743B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801743BC
  c->r[31]=0u+0x802D0000u; // 801743C0
  c->r[31]=c->r[31]+0x00006508u; // 801743C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801743C8
  c->r[4]=R32(c->r[13]+0xFFFFAD1Cu); // 801743CC
  c->r[0]=c->r[4]+0x00000001u; // 801743D0
  cmps(c,0,(int32_t)c->r[0],4); // 801743D4
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801743D8
  if (crb(c,0)) { goto L_801743E8; } // 801743DC
  c->r[0]=0u+0x00000000u; // 801743E0
  W32(c->r[13]+0xFFFFAD1Cu,c->r[0]); // 801743E4
L_801743E8:;
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 801743E8
  c->r[7]=0u+0x80440000u; // 801743EC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801743F0
  c->r[5]=0u+0x00000086u; // 801743F4
  W8(c->r[4]+c->r[0],c->r[5]); // 801743F8
  c->r[9]=0u+0x00000001u; // 801743FC
  c->r[7]=c->r[7]+0x00004D60u; // 80174400
  c->r[4]=R32(c->r[13]+0xFFFFAD20u); // 80174404
  W8(c->r[13]+0xFFFFAD18u,c->r[9]); // 80174408
  c->r[8]=rotl(c->r[4],5)&0xFFFFFFE0u; // 8017440C
  c->r[6]=c->r[7]+c->r[8]; // 80174410
  c->r[5]=R8(c->r[6]+0x00000008u); // 80174414
  c->r[0]=0u-c->r[5]; // 80174418
  c->r[0]=c->r[0]|c->r[5]; // 8017441C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80174420
  cmpu(c,0,c->r[0],0x00000001u); // 80174424
  if (!crb(c,2)) { goto L_80174448; } // 80174428
  c->r[3]=c->r[31]+0x00000240u; // 8017442C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80174430
  c->lr=0x80174438u; f_801506B4(c); // 80174434
  c->r[3]=c->r[31]+0x00000278u; // 80174438
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017443C
  c->lr=0x80174444u; f_801506B4(c); // 80174440
L_80174444:;
  IRQCHK(c); goto L_80174444; // 80174444
L_80174448:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 80174448
  c->r[0]=c->r[5]+0x01150000u; // 8017444C
  cmpu(c,0,c->r[0],0x0000DAEDu); // 80174450
  if (crb(c,2)) { goto L_80174468; } // 80174454
  c->r[3]=c->r[31]+0x000002A8u; // 80174458
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8017445C
  c->lr=0x80174464u; f_801506B4(c); // 80174460
L_80174464:;
  IRQCHK(c); goto L_80174464; // 80174464
L_80174468:;
  W32(c->r[7]+c->r[8],c->r[3]); // 80174468
  c->r[0]=c->r[4]+0x00000001u; // 8017446C
  cmps(c,0,(int32_t)c->r[0],4); // 80174470
  W32(c->r[6]+0x00000004u,c->r[9]); // 80174474
  W8(c->r[6]+0x00000008u,c->r[9]); // 80174478
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 8017447C
  if (crb(c,0)) { goto L_8017448C; } // 80174480
  c->r[0]=0u+0x00000000u; // 80174484
  W32(c->r[13]+0xFFFFAD20u,c->r[0]); // 80174488
L_8017448C:;
  c->r[0]=R32(c->r[13]+0xFFFFAD1Cu); // 8017448C
  c->r[3]=0u+0x80440000u; // 80174490
  c->r[5]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80174494
  c->r[4]=R32(c->r[13]+0xFFFFAD34u); // 80174498
  c->r[3]=c->r[3]+0x00004D60u; // 8017449C
  c->r[9]=0u+0x80170000u; // 801744A0
  c->r[30]=c->r[3]+c->r[5]; // 801744A4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801744A8
  c->r[5]=c->r[4]+c->r[0]; // 801744AC
  c->r[3]=R32(c->r[13]+0xFFFF9100u); // 801744B0
  c->r[10]=c->r[30]|c->r[30]; // 801744B4
  c->r[9]=c->r[9]+0x000020D0u; // 801744B8
  c->r[4]=0u+0x00000086u; // 801744BC
  c->r[6]=0u+0x00000020u; // 801744C0
  c->r[7]=0u+0x00000000u; // 801744C4
  c->r[8]=0u+0x00000000u; // 801744C8
  c->lr=0x801744D0u; f_80186AE4(c); // 801744CC
  cmps(c,0,(int32_t)c->r[3],0); // 801744D0
  if (crb(c,2)) { goto L_801744F8; } // 801744D4
  c->r[4]=c->r[3]|c->r[3]; // 801744D8
  c->r[3]=c->r[31]+0x00000E3Cu; // 801744DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801744E0
  c->lr=0x801744E8u; f_801506B4(c); // 801744E4
  c->r[0]=0u+0x00000000u; // 801744E8
  c->r[3]=0u+0x00000000u; // 801744EC
  W8(c->r[30]+0x00000008u,c->r[0]); // 801744F0
  goto L_801744FC; // 801744F4
L_801744F8:;
  c->r[3]=0u+0x00000001u; // 801744F8
L_801744FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801744FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80174500
  c->r[30]=R32(c->r[1]+0x00000008u); // 80174504
  c->lr=c->r[0]; // 80174508
  c->r[1]=c->r[1]+0x00000010u; // 8017450C
  return; // 80174510
}

// __DVDLowTestAlarm
void f_80174514(Ctx* __restrict c) {
  trace_call(0x80174514u);
  c->r[3]=0u+0x00000000u; // 80174514
  return; // 80174518
}

void hle_AIRegisterDMACallback(Ctx*);
// AIRegisterDMACallback
void f_8017451C(Ctx* __restrict c) {
  hle_AIRegisterDMACallback(c);
}

void hle_AIInitDMA(Ctx*);
// AIInitDMA
void f_80174560(Ctx* __restrict c) {
  hle_AIInitDMA(c);
}

void hle_AIStartDMA(Ctx*);
// AIStartDMA
void f_801745DC(Ctx* __restrict c) {
  hle_AIStartDMA(c);
}

// AIStopDMA
void f_801745F0(Ctx* __restrict c) {
  trace_call(0x801745F0u);
  c->r[3]=0u+0xCC000000u; // 801745F0
  c->r[0]=R16(c->r[3]+0x00005036u); // 801745F4
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801745F8
  W16(c->r[3]+0x00005036u,c->r[0]); // 801745FC
  return; // 80174600
}

// AIGetDMABytesLeft
void f_80174604(Ctx* __restrict c) {
  stub_log(0x80174604u); c->r[3]=0; return;
}

// AIGetDMAStartAddr
void f_80174614(Ctx* __restrict c) {
  trace_call(0x80174614u);
  c->r[3]=0u+0xCC000000u; // 80174614
  c->r[4]=R16(c->r[3]+0x00005030u); // 80174618
  c->r[0]=R16(c->r[3]+0x00005032u); // 8017461C
  c->r[3]=rotl(c->r[0],0)&0x0000FFE0u; // 80174620
  c->r[3]=(rotl(c->r[4],16)&0x1FFF0000u)|(c->r[3]&~0x1FFF0000u); // 80174624
  return; // 80174628
}

// AIGetDMALength
void f_8017462C(Ctx* __restrict c) {
  trace_call(0x8017462Cu);
  c->r[3]=0u+0xCC000000u; // 8017462C
  c->r[0]=R16(c->r[3]+0x00005036u); // 80174630
  c->r[3]=rotl(c->r[0],5)&0x000FFFE0u; // 80174634
  return; // 80174638
}

// fn_8017463C
void f_8017463C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFAD40u); // 8017463C
  return; // 80174640
}

// AIInit
void f_80174644(Ctx* __restrict c) {
  trace_call(0x80174644u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174644
  c->r[0]=c->lr; // 80174648
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017464C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80174650
  c->r[31]=c->r[3]|c->r[3]; // 80174654
  W32(c->r[1]+0x00000018u,c->r[30]); // 80174658
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017465C
  c->r[0]=R32(c->r[13]+0xFFFFAD40u); // 80174660
  cmps(c,0,(int32_t)c->r[0],1); // 80174664
  if (crb(c,2)) { goto L_801747A8; } // 80174668
  c->r[3]=R32(c->r[13]+0xFFFF9110u); // 8017466C
  c->lr=0x80174674u; f_8014E714(c); // 80174670
  c->r[3]=0u+0x80000000u; // 80174674
  c->r[4]=0u+0x431C0000u; // 80174678
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8017467C
  c->r[7]=0u+0x00000000u; // 80174680
  c->r[5]=0u+0x10620000u; // 80174684
  c->r[4]=c->r[4]+0xFFFFDE83u; // 80174688
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8017468C
  c->r[3]=0u+0x00010000u; // 80174690
  c->r[6]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 80174694
  c->r[9]=c->r[5]+0x00004DD3u; // 80174698
  c->r[0]=c->r[3]+0xFFFFA428u; // 8017469C
  W32(c->r[13]+0xFFFFAD68u,c->r[7]); // 801746A0
  c->r[4]=c->r[3]+0xFFFFA410u; // 801746A4
  c->r[3]=c->r[3]+0xFFFFF618u; // 801746A8
  c->r[10]=rotl(c->r[6],17)&0x0001FFFFu; // 801746AC
  W32(c->r[13]+0xFFFFAD60u,c->r[7]); // 801746B0
  c->r[6]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 801746B4
  c->r[30]=0u+0xCD000000u; // 801746B8
  W32(c->r[13]+0xFFFFAD58u,c->r[7]); // 801746BC
  c->r[0]=0u+0xFFFFFFEAu; // 801746C0
  W32(c->r[13]+0xFFFFAD50u,c->r[7]); // 801746C4
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[4]); // 801746C8
  W32(c->r[13]+0xFFFFAD48u,c->r[7]); // 801746CC
  c->r[4]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[3]); // 801746D0
  c->r[8]=(uint32_t)((int32_t)c->r[10]*(int32_t)31524); // 801746D4
  c->r[3]=(uint32_t)((int32_t)c->r[10]*(int32_t)3000); // 801746D8
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[8])>>32); // 801746DC
  c->r[6]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[6])>>32); // 801746E0
  c->r[8]=rotl(c->r[8],23)&0x007FFFFFu; // 801746E4
  W32(c->r[13]+0xFFFFAD6Cu,c->r[8]); // 801746E8
  c->r[5]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[5])>>32); // 801746EC
  c->r[6]=rotl(c->r[6],23)&0x007FFFFFu; // 801746F0
  W32(c->r[13]+0xFFFFAD64u,c->r[6]); // 801746F4
  c->r[4]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[4])>>32); // 801746F8
  c->r[5]=rotl(c->r[5],23)&0x007FFFFFu; // 801746FC
  W32(c->r[13]+0xFFFFAD5Cu,c->r[5]); // 80174700
  c->r[3]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[3])>>32); // 80174704
  c->r[4]=rotl(c->r[4],23)&0x007FFFFFu; // 80174708
  W32(c->r[13]+0xFFFFAD54u,c->r[4]); // 8017470C
  c->r[3]=rotl(c->r[3],23)&0x007FFFFFu; // 80174710
  W32(c->r[13]+0xFFFFAD4Cu,c->r[3]); // 80174714
  c->r[3]=R32(c->r[30]+0x00006C00u); // 80174718
  c->r[0]=c->r[3]&c->r[0]; // 8017471C
  W32(c->r[30]+0x00006C00u,c->r[0]); // 80174720
  W32(c->r[30]+0x00006C04u,c->r[7]); // 80174724
  W32(c->r[30]+0x00006C0Cu,c->r[7]); // 80174728
  c->r[0]=R32(c->r[30]+0x00006C00u); // 8017472C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 80174730
  c->r[0]=c->r[0]|0x00000020u; // 80174734
  W32(c->r[30]+0x00006C00u,c->r[0]); // 80174738
  c->r[0]=R32(c->r[30]+0x00006C00u); // 8017473C
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 80174740
  c->r[0]=c->r[0]^0x00000001u; // 80174744
  cmps(c,0,(int32_t)c->r[0],0); // 80174748
  if (crb(c,2)) { goto L_8017477C; } // 8017474C
  c->r[0]=R32(c->r[30]+0x00006C00u); // 80174750
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 80174754
  W32(c->r[30]+0x00006C00u,c->r[0]); // 80174758
  c->lr=0x80174760u; f_80154410(c); // 8017475C
  c->r[29]=c->r[3]|c->r[3]; // 80174760
  c->lr=0x80174768u; f_801748DC(c); // 80174764
  c->r[0]=R32(c->r[30]+0x00006C00u); // 80174768
  c->r[3]=c->r[29]|c->r[29]; // 8017476C
  c->r[0]=c->r[0]|0x00000040u; // 80174770
  W32(c->r[30]+0x00006C00u,c->r[0]); // 80174774
  c->lr=0x8017477Cu; f_80154438(c); // 80174778
L_8017477C:;
  c->r[0]=0u+0x00000000u; // 8017477C
  c->r[4]=0u+0x80170000u; // 80174780
  W32(c->r[13]+0xFFFFAD78u,c->r[0]); // 80174784
  c->r[4]=c->r[4]+0x000047D0u; // 80174788
  c->r[3]=0u+0x00000005u; // 8017478C
  W32(c->r[13]+0xFFFFAD74u,c->r[31]); // 80174790
  c->lr=0x80174798u; f_8015445C(c); // 80174794
  c->r[3]=0u+0x04000000u; // 80174798
  c->lr=0x801747A0u; f_80154820(c); // 8017479C
  c->r[0]=0u+0x00000001u; // 801747A0
  W32(c->r[13]+0xFFFFAD40u,c->r[0]); // 801747A4
L_801747A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801747A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801747AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801747B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801747B4
  c->lr=c->r[0]; // 801747B8
  c->r[1]=c->r[1]+0x00000020u; // 801747BC
  return; // 801747C0
}

// fn_801747C4
void f_801747C4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801747C4
  W32(c->r[13]+0xFFFFAD40u,c->r[0]); // 801747C8
  return; // 801747CC
}

// __AIDHandler
void f_801747D0(Ctx* __restrict c) {
  trace_call(0x801747D0u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801747D0
  c->r[0]=c->lr; // 801747D4
  c->r[6]=0u+0xCC000000u; // 801747D8
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801747DC
  c->r[0]=0u+0xFFFFFF5Fu; // 801747E0
  c->r[3]=c->r[1]+0x00000008u; // 801747E4
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801747E8
  c->r[31]=c->r[4]|c->r[4]; // 801747EC
  c->r[5]=R16(c->r[6]+0x0000500Au); // 801747F0
  c->r[0]=c->r[5]&c->r[0]; // 801747F4
  c->r[0]=c->r[0]|0x00000008u; // 801747F8
  W16(c->r[6]+0x0000500Au,c->r[0]); // 801747FC
  c->lr=0x80174804u; f_801502A8(c); // 80174800
  c->r[3]=c->r[1]+0x00000008u; // 80174804
  c->lr=0x8017480Cu; f_80150080(c); // 80174808
  c->r[3]=R32(c->r[13]+0xFFFFAD78u); // 8017480C
  cmps(c,0,(int32_t)c->r[3],0); // 80174810
  if (crb(c,2)) { goto L_80174854; } // 80174814
  c->r[0]=R32(c->r[13]+0xFFFFAD44u); // 80174818
  cmps(c,0,(int32_t)c->r[0],0); // 8017481C
  if (!crb(c,2)) { goto L_80174854; } // 80174820
  c->r[0]=R32(c->r[13]+0xFFFFAD74u); // 80174824
  c->r[4]=0u+0x00000001u; // 80174828
  W32(c->r[13]+0xFFFFAD44u,c->r[4]); // 8017482C
  cmps(c,0,(int32_t)c->r[0],0); // 80174830
  if (crb(c,2)) { goto L_80174840; } // 80174834
  c->lr=0x8017483Cu; f_80174878(c); // 80174838
  goto L_8017484C; // 8017483C
L_80174840:;
  c->r[12]=c->r[3]|c->r[3]; // 80174840
  c->ctr=c->r[12]; // 80174844
  if (true) { c->lr=0x8017484Cu; dispatch(c,c->ctr); } // 80174848
L_8017484C:;
  c->r[0]=0u+0x00000000u; // 8017484C
  W32(c->r[13]+0xFFFFAD44u,c->r[0]); // 80174850
L_80174854:;
  c->r[3]=c->r[1]+0x00000008u; // 80174854
  c->lr=0x8017485Cu; f_801502A8(c); // 80174858
  c->r[3]=c->r[31]|c->r[31]; // 8017485C
  c->lr=0x80174864u; f_80150080(c); // 80174860
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80174864
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80174868
  c->lr=c->r[0]; // 8017486C
  c->r[1]=c->r[1]+0x000002E0u; // 80174870
  return; // 80174874
}

// __AICallbackStackSwitch
void f_80174878(Ctx* __restrict c) {
  trace_call(0x80174878u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174878
  c->r[0]=c->lr; // 8017487C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174880
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80174884
  c->r[31]=c->r[1]|c->r[1]; // 80174888
  c->r[31]=c->r[3]|c->r[3]; // 8017488C
  c->r[5]=0u+0x804E0000u; // 80174890
  c->r[5]=c->r[5]+0xFFFF9AB0u; // 80174894
  W32(c->r[5]+0x00000000u,c->r[1]); // 80174898
  c->r[5]=0u+0x804E0000u; // 8017489C
  c->r[5]=c->r[5]+0xFFFF9AB4u; // 801748A0
  c->r[1]=R32(c->r[5]+0x00000000u); // 801748A4
  c->r[1]=c->r[1]+0xFFFFFFF8u; // 801748A8
  c->lr=c->r[31]; // 801748AC
  if (true) { uint32_t t=c->lr; c->lr=0x801748B4u; dispatch(c,t); } // 801748B0
  c->r[5]=0u+0x804E0000u; // 801748B4
  c->r[5]=c->r[5]+0xFFFF9AB0u; // 801748B8
  c->r[1]=R32(c->r[5]+0x00000000u); // 801748BC
  c->r[10]=c->r[1]|c->r[1]; // 801748C0
  c->r[31]=R32(c->r[10]+0x0000000Cu); // 801748C4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801748C8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801748CC
  c->r[1]=c->r[10]|c->r[10]; // 801748D0
  c->lr=c->r[0]; // 801748D4
  return; // 801748D8
}

// __AI_SRC_INIT
void f_801748DC(Ctx* __restrict c) {
  stub_log(0x801748DCu);  return;
}

// AXInit
void f_80174AA0(Ctx* __restrict c) {
  trace_call(0x80174AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174AA0
  c->r[0]=c->lr; // 80174AA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174AA8
  c->r[0]=R32(c->r[13]+0xFFFFAD80u); // 80174AAC
  cmps(c,0,(int32_t)c->r[0],0); // 80174AB0
  if (!crb(c,2)) { goto L_80174AE4; } // 80174AB4
  c->r[3]=R32(c->r[13]+0xFFFF9118u); // 80174AB8
  c->lr=0x80174AC0u; f_8014E714(c); // 80174ABC
  c->lr=0x80174AC4u; f_80174C04(c); // 80174AC0
  c->lr=0x80174AC8u; f_80177894(c); // 80174AC4
  c->lr=0x80174ACCu; f_80176E1C(c); // 80174AC8
  c->lr=0x80174AD0u; f_801750AC(c); // 80174ACC
  c->lr=0x80174AD4u; f_801762D0(c); // 80174AD0
  c->r[3]=0u+0x00000000u; // 80174AD4
  c->lr=0x80174ADCu; f_801767D4(c); // 80174AD8
  c->r[0]=0u+0x00000001u; // 80174ADC
  W32(c->r[13]+0xFFFFAD80u,c->r[0]); // 80174AE0
L_80174AE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80174AE4
  c->lr=c->r[0]; // 80174AE8
  c->r[1]=c->r[1]+0x00000010u; // 80174AEC
  return; // 80174AF0
}

// fn_80174AF4
void f_80174AF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174AF4
  c->r[0]=c->lr; // 80174AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174AFC
  c->r[0]=R32(c->r[13]+0xFFFFAD80u); // 80174B00
  cmps(c,0,(int32_t)c->r[0],0); // 80174B04
  if (crb(c,2)) { goto L_80174B2C; } // 80174B08
  c->lr=0x80174B10u; f_801769CC(c); // 80174B0C
  c->lr=0x80174B14u; f_80174CB4(c); // 80174B10
  c->lr=0x80174B18u; f_80177B4C(c); // 80174B14
  c->lr=0x80174B1Cu; f_80176E74(c); // 80174B18
  c->lr=0x80174B20u; f_801751C0(c); // 80174B1C
  c->lr=0x80174B24u; f_8017630C(c); // 80174B20
  c->r[0]=0u+0x00000000u; // 80174B24
  W32(c->r[13]+0xFFFFAD80u,c->r[0]); // 80174B28
L_80174B2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80174B2C
  c->lr=c->r[0]; // 80174B30
  c->r[1]=c->r[1]+0x00000010u; // 80174B34
  return; // 80174B38
}

// fn_80174B3C
void f_80174B3C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFAD80u); // 80174B3C
  return; // 80174B40
}

// fn_80174B44
void f_80174B44(Ctx* __restrict c) {
  c->r[4]=0u+0x80440000u; // 80174B44
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80174B48
  c->r[4]=c->r[4]+0x00004F00u; // 80174B4C
  c->r[3]=R32(c->r[4]+c->r[0]); // 80174B50
  return; // 80174B54
}

// fn_80174B58
void f_80174B58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174B58
  c->r[0]=c->lr; // 80174B5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80174B60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80174B64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80174B68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80174B6C
  c->r[29]=R32(c->r[13]+0xFFFFAD88u); // 80174B70
  cmps(c,0,(int32_t)c->r[29],0); // 80174B74
  if (crb(c,2)) { goto L_80174B84; } // 80174B78
  c->r[0]=R32(c->r[29]+0x00000008u); // 80174B7C
  W32(c->r[13]+0xFFFFAD88u,c->r[0]); // 80174B80
L_80174B84:;
  c->r[30]=0u+0x80440000u; // 80174B84
  c->r[31]=0u+0x00000000u; // 80174B88
  goto L_80174BE0; // 80174B8C
L_80174B90:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80174B90
  cmps(c,0,(int32_t)c->r[0],0); // 80174B94
  if (crb(c,2)) { goto L_80174BCC; } // 80174B98
  c->r[12]=R32(c->r[29]+0x00000010u); // 80174B9C
  cmps(c,0,(int32_t)c->r[12],0); // 80174BA0
  if (crb(c,2)) { goto L_80174BB4; } // 80174BA4
  c->r[3]=c->r[29]|c->r[29]; // 80174BA8
  c->ctr=c->r[12]; // 80174BAC
  if (true) { c->lr=0x80174BB4u; dispatch(c,c->ctr); } // 80174BB0
L_80174BB4:;
  c->r[3]=c->r[29]|c->r[29]; // 80174BB4
  c->lr=0x80174BBCu; f_80174D90(c); // 80174BB8
  c->r[0]=R32(c->r[30]+0x00004F00u); // 80174BBC
  W32(c->r[29]+0x00000000u,c->r[0]); // 80174BC0
  W32(c->r[30]+0x00004F00u,c->r[29]); // 80174BC4
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 80174BC8
L_80174BCC:;
  c->r[29]=R32(c->r[13]+0xFFFFAD88u); // 80174BCC
  cmps(c,0,(int32_t)c->r[29],0); // 80174BD0
  if (crb(c,2)) { goto L_80174BE0; } // 80174BD4
  c->r[0]=R32(c->r[29]+0x00000008u); // 80174BD8
  W32(c->r[13]+0xFFFFAD88u,c->r[0]); // 80174BDC
L_80174BE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 80174BE0
  if (!crb(c,2)) { IRQCHK(c); goto L_80174B90; } // 80174BE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80174BE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80174BEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80174BF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80174BF4
  c->lr=c->r[0]; // 80174BF8
  c->r[1]=c->r[1]+0x00000020u; // 80174BFC
  return; // 80174C00
}

// fn_80174C04
void f_80174C04(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80174C04
  c->r[4]=0u+0x80440000u; // 80174C08
  c->r[5]=0u+0x80440000u; // 80174C0C
  c->r[0]=0u+0x00000002u; // 80174C10
  W32(c->r[13]+0xFFFFAD88u,c->r[3]); // 80174C14
  c->r[4]=c->r[4]+0x00004F80u; // 80174C18
  c->r[5]=c->r[5]+0x00004F00u; // 80174C1C
  c->ctr=c->r[0]; // 80174C20
L_80174C24:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80174C24
  W32(c->r[5]+0x00000000u,c->r[3]); // 80174C28
  W32(c->r[4]+0x00000004u,c->r[3]); // 80174C2C
  W32(c->r[5]+0x00000004u,c->r[3]); // 80174C30
  W32(c->r[4]+0x00000008u,c->r[3]); // 80174C34
  W32(c->r[5]+0x00000008u,c->r[3]); // 80174C38
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 80174C3C
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 80174C40
  W32(c->r[4]+0x00000010u,c->r[3]); // 80174C44
  W32(c->r[5]+0x00000010u,c->r[3]); // 80174C48
  W32(c->r[4]+0x00000014u,c->r[3]); // 80174C4C
  W32(c->r[5]+0x00000014u,c->r[3]); // 80174C50
  W32(c->r[4]+0x00000018u,c->r[3]); // 80174C54
  W32(c->r[5]+0x00000018u,c->r[3]); // 80174C58
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 80174C5C
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 80174C60
  W32(c->r[4]+0x00000020u,c->r[3]); // 80174C64
  W32(c->r[5]+0x00000020u,c->r[3]); // 80174C68
  W32(c->r[4]+0x00000024u,c->r[3]); // 80174C6C
  W32(c->r[5]+0x00000024u,c->r[3]); // 80174C70
  W32(c->r[4]+0x00000028u,c->r[3]); // 80174C74
  W32(c->r[5]+0x00000028u,c->r[3]); // 80174C78
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80174C7C
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 80174C80
  W32(c->r[4]+0x00000030u,c->r[3]); // 80174C84
  W32(c->r[5]+0x00000030u,c->r[3]); // 80174C88
  W32(c->r[4]+0x00000034u,c->r[3]); // 80174C8C
  W32(c->r[5]+0x00000034u,c->r[3]); // 80174C90
  W32(c->r[4]+0x00000038u,c->r[3]); // 80174C94
  W32(c->r[5]+0x00000038u,c->r[3]); // 80174C98
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 80174C9C
  c->r[4]=c->r[4]+0x00000040u; // 80174CA0
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 80174CA4
  c->r[5]=c->r[5]+0x00000040u; // 80174CA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80174C24; } // 80174CAC
  return; // 80174CB0
}

// fn_80174CB4
void f_80174CB4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80174CB4
  c->r[4]=0u+0x80440000u; // 80174CB8
  c->r[5]=0u+0x80440000u; // 80174CBC
  c->r[0]=0u+0x00000002u; // 80174CC0
  W32(c->r[13]+0xFFFFAD88u,c->r[3]); // 80174CC4
  c->r[4]=c->r[4]+0x00004F80u; // 80174CC8
  c->r[5]=c->r[5]+0x00004F00u; // 80174CCC
  c->ctr=c->r[0]; // 80174CD0
L_80174CD4:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80174CD4
  W32(c->r[5]+0x00000000u,c->r[3]); // 80174CD8
  W32(c->r[4]+0x00000004u,c->r[3]); // 80174CDC
  W32(c->r[5]+0x00000004u,c->r[3]); // 80174CE0
  W32(c->r[4]+0x00000008u,c->r[3]); // 80174CE4
  W32(c->r[5]+0x00000008u,c->r[3]); // 80174CE8
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 80174CEC
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 80174CF0
  W32(c->r[4]+0x00000010u,c->r[3]); // 80174CF4
  W32(c->r[5]+0x00000010u,c->r[3]); // 80174CF8
  W32(c->r[4]+0x00000014u,c->r[3]); // 80174CFC
  W32(c->r[5]+0x00000014u,c->r[3]); // 80174D00
  W32(c->r[4]+0x00000018u,c->r[3]); // 80174D04
  W32(c->r[5]+0x00000018u,c->r[3]); // 80174D08
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 80174D0C
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 80174D10
  W32(c->r[4]+0x00000020u,c->r[3]); // 80174D14
  W32(c->r[5]+0x00000020u,c->r[3]); // 80174D18
  W32(c->r[4]+0x00000024u,c->r[3]); // 80174D1C
  W32(c->r[5]+0x00000024u,c->r[3]); // 80174D20
  W32(c->r[4]+0x00000028u,c->r[3]); // 80174D24
  W32(c->r[5]+0x00000028u,c->r[3]); // 80174D28
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80174D2C
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 80174D30
  W32(c->r[4]+0x00000030u,c->r[3]); // 80174D34
  W32(c->r[5]+0x00000030u,c->r[3]); // 80174D38
  W32(c->r[4]+0x00000034u,c->r[3]); // 80174D3C
  W32(c->r[5]+0x00000034u,c->r[3]); // 80174D40
  W32(c->r[4]+0x00000038u,c->r[3]); // 80174D44
  W32(c->r[5]+0x00000038u,c->r[3]); // 80174D48
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 80174D4C
  c->r[4]=c->r[4]+0x00000040u; // 80174D50
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 80174D54
  c->r[5]=c->r[5]+0x00000040u; // 80174D58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80174CD4; } // 80174D5C
  return; // 80174D60
}

// fn_80174D64
void f_80174D64(Ctx* __restrict c) {
  c->r[5]=0u+0x80440000u; // 80174D64
  c->r[0]=0u+0x00000000u; // 80174D68
  c->r[4]=R32(c->r[5]+0x00004F00u); // 80174D6C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80174D70
  W32(c->r[5]+0x00004F00u,c->r[3]); // 80174D74
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80174D78
  return; // 80174D7C
}

// fn_80174D80
void f_80174D80(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFAD88u); // 80174D80
  W32(c->r[3]+0x00000008u,c->r[0]); // 80174D84
  W32(c->r[13]+0xFFFFAD88u,c->r[3]); // 80174D88
  return; // 80174D8C
}

// fn_80174D90
void f_80174D90(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80174D90
  c->r[5]=0u+0x80440000u; // 80174D94
  c->r[4]=0u+0x80440000u; // 80174D98
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80174D9C
  c->r[5]=c->r[5]+0x00004F00u; // 80174DA0
  c->r[4]=c->r[4]+0x00004F80u; // 80174DA4
  c->r[0]=R32(c->r[5]+c->r[6]); // 80174DA8
  c->r[7]=R32(c->r[4]+c->r[6]); // 80174DAC
  cmpu(c,0,c->r[0],c->r[7]); // 80174DB0
  if (!crb(c,2)) { goto L_80174DC8; } // 80174DB4
  c->r[0]=0u+0x00000000u; // 80174DB8
  W32(c->r[4]+c->r[6],c->r[0]); // 80174DBC
  W32(c->r[5]+c->r[6],c->r[0]); // 80174DC0
  return; // 80174DC4
L_80174DC8:;
  cmpu(c,0,c->r[3],c->r[0]); // 80174DC8
  if (!crb(c,2)) { goto L_80174DE4; } // 80174DCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80174DD0
  c->r[0]=0u+0x00000000u; // 80174DD4
  W32(c->r[5]+c->r[6],c->r[3]); // 80174DD8
  W32(c->r[3]+0x00000004u,c->r[0]); // 80174DDC
  return; // 80174DE0
L_80174DE4:;
  cmpu(c,0,c->r[3],c->r[7]); // 80174DE4
  if (!crb(c,2)) { goto L_80174E00; } // 80174DE8
  c->r[3]=R32(c->r[3]+0x00000004u); // 80174DEC
  c->r[0]=0u+0x00000000u; // 80174DF0
  W32(c->r[4]+c->r[6],c->r[3]); // 80174DF4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174DF8
  return; // 80174DFC
L_80174E00:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80174E00
  c->r[3]=R32(c->r[3]+0x00000000u); // 80174E04
  W32(c->r[4]+0x00000000u,c->r[3]); // 80174E08
  W32(c->r[3]+0x00000004u,c->r[4]); // 80174E0C
  return; // 80174E10
}

// fn_80174E14
void f_80174E14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174E14
  c->r[0]=c->lr; // 80174E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80174E20
  W32(c->r[1]+0x00000008u,c->r[30]); // 80174E24
  c->r[30]=c->r[3]|c->r[3]; // 80174E28
  c->lr=0x80174E30u; f_80154410(c); // 80174E2C
  c->r[31]=c->r[3]|c->r[3]; // 80174E30
  c->r[3]=c->r[30]|c->r[30]; // 80174E34
  c->lr=0x80174E3Cu; f_80174D90(c); // 80174E38
  c->r[0]=R16(c->r[30]+0x00000038u); // 80174E3C
  cmpu(c,0,c->r[0],0x00000001u); // 80174E40
  if (!crb(c,2)) { goto L_80174E50; } // 80174E44
  c->r[0]=0u+0x00000001u; // 80174E48
  W32(c->r[30]+0x00000020u,c->r[0]); // 80174E4C
L_80174E50:;
  c->r[3]=c->r[30]|c->r[30]; // 80174E50
  c->lr=0x80174E58u; f_80177854(c); // 80174E54
  c->r[5]=0u+0x80440000u; // 80174E58
  c->r[0]=0u+0x00000000u; // 80174E5C
  c->r[4]=R32(c->r[5]+0x00004F00u); // 80174E60
  c->r[3]=c->r[31]|c->r[31]; // 80174E64
  W32(c->r[30]+0x00000000u,c->r[4]); // 80174E68
  W32(c->r[5]+0x00004F00u,c->r[30]); // 80174E6C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80174E70
  c->lr=0x80174E78u; f_80154438(c); // 80174E74
  c->r[0]=R32(c->r[1]+0x00000014u); // 80174E78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80174E7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80174E80
  c->lr=c->r[0]; // 80174E84
  c->r[1]=c->r[1]+0x00000010u; // 80174E88
  return; // 80174E8C
}

// fn_80174E90
void f_80174E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174E90
  c->r[0]=c->lr; // 80174E94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80174E98
  c->r[11]=c->r[1]+0x00000020u; // 80174E9C
  c->lr=0x80174EA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80174EA0
  c->r[27]=c->r[3]|c->r[3]; // 80174EA4
  c->r[28]=c->r[4]|c->r[4]; // 80174EA8
  c->r[29]=c->r[5]|c->r[5]; // 80174EAC
  c->lr=0x80174EB4u; f_80154410(c); // 80174EB0
  c->r[4]=0u+0x80440000u; // 80174EB4
  c->r[31]=c->r[3]|c->r[3]; // 80174EB8
  c->r[30]=R32(c->r[4]+0x00004F00u); // 80174EBC
  cmps(c,0,(int32_t)c->r[30],0); // 80174EC0
  if (crb(c,2)) { goto L_80174ED0; } // 80174EC4
  c->r[0]=R32(c->r[30]+0x00000000u); // 80174EC8
  W32(c->r[4]+0x00004F00u,c->r[0]); // 80174ECC
L_80174ED0:;
  cmps(c,0,(int32_t)c->r[30],0); // 80174ED0
  if (!crb(c,2)) { goto L_80174F8C; } // 80174ED4
  c->r[3]=0u+0x80440000u; // 80174ED8
  c->r[4]=0u+0x80440000u; // 80174EDC
  c->r[3]=c->r[3]+0x00004F00u; // 80174EE0
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 80174EE4
  c->r[4]=c->r[4]+0x00004F80u; // 80174EE8
  c->r[5]=c->r[3]+0x00000004u; // 80174EEC
  c->r[3]=0u+0x00000000u; // 80174EF0
  c->r[6]=c->r[4]+0x00000004u; // 80174EF4
  c->ctr=c->r[0]; // 80174EF8
  cmpu(c,0,c->r[27],0x00000001u); // 80174EFC
  if (!crb(c,1)) { goto L_80174F8C; } // 80174F00
L_80174F04:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80174F04
  c->r[30]=0u+0x00000000u; // 80174F08
  cmps(c,0,(int32_t)c->r[0],0); // 80174F0C
  if (crb(c,2)) { goto L_80174F48; } // 80174F10
  c->r[7]=R32(c->r[6]+0x00000000u); // 80174F14
  cmpu(c,0,c->r[0],c->r[7]); // 80174F18
  if (!crb(c,2)) { goto L_80174F30; } // 80174F1C
  W32(c->r[6]+0x00000000u,c->r[3]); // 80174F20
  c->r[30]=c->r[0]|c->r[0]; // 80174F24
  W32(c->r[5]+0x00000000u,c->r[3]); // 80174F28
  goto L_80174F48; // 80174F2C
L_80174F30:;
  cmps(c,0,(int32_t)c->r[7],0); // 80174F30
  if (crb(c,2)) { goto L_80174F48; } // 80174F34
  c->r[4]=R32(c->r[7]+0x00000004u); // 80174F38
  c->r[30]=c->r[7]|c->r[7]; // 80174F3C
  W32(c->r[6]+0x00000000u,c->r[4]); // 80174F40
  W32(c->r[4]+0x00000000u,c->r[3]); // 80174F44
L_80174F48:;
  cmps(c,0,(int32_t)c->r[30],0); // 80174F48
  if (crb(c,2)) { goto L_80174F80; } // 80174F4C
  c->r[0]=R16(c->r[30]+0x00000038u); // 80174F50
  cmpu(c,0,c->r[0],0x00000001u); // 80174F54
  if (!crb(c,2)) { goto L_80174F64; } // 80174F58
  c->r[0]=0u+0x00000001u; // 80174F5C
  W32(c->r[30]+0x00000020u,c->r[0]); // 80174F60
L_80174F64:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 80174F64
  cmps(c,0,(int32_t)c->r[12],0); // 80174F68
  if (crb(c,2)) { goto L_80174F8C; } // 80174F6C
  c->r[3]=c->r[30]|c->r[30]; // 80174F70
  c->ctr=c->r[12]; // 80174F74
  if (true) { c->lr=0x80174F7Cu; dispatch(c,c->ctr); } // 80174F78
  goto L_80174F8C; // 80174F7C
L_80174F80:;
  c->r[5]=c->r[5]+0x00000004u; // 80174F80
  c->r[6]=c->r[6]+0x00000004u; // 80174F84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80174F04; } // 80174F88
L_80174F8C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80174F8C
  if (crb(c,2)) { goto L_80174FEC; } // 80174F90
  c->r[4]=0u+0x80440000u; // 80174F94
  c->r[5]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80174F98
  c->r[4]=c->r[4]+0x00004F00u; // 80174F9C
  c->r[0]=0u+0x00000000u; // 80174FA0
  c->r[3]=R32(c->r[4]+c->r[5]); // 80174FA4
  W32(c->r[30]+0x00000000u,c->r[3]); // 80174FA8
  cmps(c,0,(int32_t)c->r[3],0); // 80174FAC
  W32(c->r[30]+0x00000004u,c->r[0]); // 80174FB0
  if (crb(c,2)) { goto L_80174FC8; } // 80174FB4
  c->r[3]=R32(c->r[4]+c->r[5]); // 80174FB8
  W32(c->r[3]+0x00000004u,c->r[30]); // 80174FBC
  W32(c->r[4]+c->r[5],c->r[30]); // 80174FC0
  goto L_80174FD8; // 80174FC4
L_80174FC8:;
  c->r[3]=0u+0x80440000u; // 80174FC8
  W32(c->r[4]+c->r[5],c->r[30]); // 80174FCC
  c->r[3]=c->r[3]+0x00004F80u; // 80174FD0
  W32(c->r[3]+c->r[5],c->r[30]); // 80174FD4
L_80174FD8:;
  W32(c->r[30]+0x0000000Cu,c->r[27]); // 80174FD8
  c->r[3]=c->r[30]|c->r[30]; // 80174FDC
  W32(c->r[30]+0x00000010u,c->r[28]); // 80174FE0
  W32(c->r[30]+0x00000014u,c->r[29]); // 80174FE4
  c->lr=0x80174FECu; f_80177854(c); // 80174FE8
L_80174FEC:;
  c->r[3]=c->r[31]|c->r[31]; // 80174FEC
  c->lr=0x80174FF4u; f_80154438(c); // 80174FF0
  c->r[11]=c->r[1]+0x00000020u; // 80174FF4
  c->r[3]=c->r[30]|c->r[30]; // 80174FF8
  c->lr=0x80175000u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80174FFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80175000
  c->lr=c->r[0]; // 80175004
  c->r[1]=c->r[1]+0x00000020u; // 80175008
  return; // 8017500C
}

// AXSetVoicePriority
void f_80175010(Ctx* __restrict c) {
  trace_call(0x80175010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175010
  c->r[0]=c->lr; // 80175014
  W32(c->r[1]+0x00000024u,c->r[0]); // 80175018
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017501C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80175020
  c->r[30]=c->r[4]|c->r[4]; // 80175024
  W32(c->r[1]+0x00000014u,c->r[29]); // 80175028
  c->r[29]=c->r[3]|c->r[3]; // 8017502C
  c->lr=0x80175034u; f_80154410(c); // 80175030
  c->r[31]=c->r[3]|c->r[3]; // 80175034
  c->r[3]=c->r[29]|c->r[29]; // 80175038
  c->lr=0x80175040u; f_80174D90(c); // 8017503C
  c->r[4]=0u+0x80440000u; // 80175040
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80175044
  c->r[4]=c->r[4]+0x00004F00u; // 80175048
  c->r[0]=0u+0x00000000u; // 8017504C
  c->r[3]=R32(c->r[4]+c->r[5]); // 80175050
  cmps(c,0,(int32_t)c->r[3],0); // 80175054
  W32(c->r[29]+0x00000000u,c->r[3]); // 80175058
  W32(c->r[29]+0x00000004u,c->r[0]); // 8017505C
  if (crb(c,2)) { goto L_80175074; } // 80175060
  c->r[3]=R32(c->r[4]+c->r[5]); // 80175064
  W32(c->r[3]+0x00000004u,c->r[29]); // 80175068
  W32(c->r[4]+c->r[5],c->r[29]); // 8017506C
  goto L_80175084; // 80175070
L_80175074:;
  c->r[3]=0u+0x80440000u; // 80175074
  W32(c->r[4]+c->r[5],c->r[29]); // 80175078
  c->r[3]=c->r[3]+0x00004F80u; // 8017507C
  W32(c->r[3]+c->r[5],c->r[29]); // 80175080
L_80175084:;
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80175084
  c->r[3]=c->r[31]|c->r[31]; // 80175088
  c->lr=0x80175090u; f_80154438(c); // 8017508C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80175090
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80175094
  c->r[30]=R32(c->r[1]+0x00000018u); // 80175098
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017509C
  c->lr=c->r[0]; // 801750A0
  c->r[1]=c->r[1]+0x00000020u; // 801750A4
  return; // 801750A8
}

// __AXAuxInit
void f_801750AC(Ctx* __restrict c) {
  trace_call(0x801750ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801750AC
  c->r[0]=c->lr; // 801750B0
  c->r[6]=0u+0x80440000u; // 801750B4
  c->r[5]=0u+0x00000000u; // 801750B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801750BC
  c->r[6]=c->r[6]+0x00005000u; // 801750C0
  c->r[4]=0u+0x00000001u; // 801750C4
  c->r[3]=0u+0x00000002u; // 801750C8
  c->r[0]=0u+0x00000020u; // 801750CC
  W32(c->r[13]+0xFFFFADC8u,c->r[5]); // 801750D0
  c->r[7]=c->r[6]+0x00000000u; // 801750D4
  c->r[8]=c->r[6]+0x00001200u; // 801750D8
  W32(c->r[13]+0xFFFFADC4u,c->r[5]); // 801750DC
  c->r[6]=c->r[6]+0x00002400u; // 801750E0
  W32(c->r[13]+0xFFFFADC0u,c->r[5]); // 801750E4
  W32(c->r[13]+0xFFFFADBCu,c->r[5]); // 801750E8
  W32(c->r[13]+0xFFFFADB8u,c->r[5]); // 801750EC
  W32(c->r[13]+0xFFFFADB4u,c->r[5]); // 801750F0
  W32(c->r[13]+0xFFFFAD98u,c->r[5]); // 801750F4
  W32(c->r[13]+0xFFFFAD94u,c->r[4]); // 801750F8
  W32(c->r[13]+0xFFFFAD90u,c->r[3]); // 801750FC
  c->ctr=c->r[0]; // 80175100
L_80175104:;
  W32(c->r[7]+0x00000000u,c->r[5]); // 80175104
  W32(c->r[8]+0x00000000u,c->r[5]); // 80175108
  W32(c->r[6]+0x00000000u,c->r[5]); // 8017510C
  W32(c->r[7]+0x00000004u,c->r[5]); // 80175110
  W32(c->r[8]+0x00000004u,c->r[5]); // 80175114
  W32(c->r[6]+0x00000004u,c->r[5]); // 80175118
  W32(c->r[7]+0x00000008u,c->r[5]); // 8017511C
  W32(c->r[8]+0x00000008u,c->r[5]); // 80175120
  W32(c->r[6]+0x00000008u,c->r[5]); // 80175124
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 80175128
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 8017512C
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 80175130
  W32(c->r[7]+0x00000010u,c->r[5]); // 80175134
  W32(c->r[8]+0x00000010u,c->r[5]); // 80175138
  W32(c->r[6]+0x00000010u,c->r[5]); // 8017513C
  W32(c->r[7]+0x00000014u,c->r[5]); // 80175140
  W32(c->r[8]+0x00000014u,c->r[5]); // 80175144
  W32(c->r[6]+0x00000014u,c->r[5]); // 80175148
  W32(c->r[7]+0x00000018u,c->r[5]); // 8017514C
  W32(c->r[8]+0x00000018u,c->r[5]); // 80175150
  W32(c->r[6]+0x00000018u,c->r[5]); // 80175154
  W32(c->r[7]+0x0000001Cu,c->r[5]); // 80175158
  W32(c->r[8]+0x0000001Cu,c->r[5]); // 8017515C
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 80175160
  W32(c->r[7]+0x00000020u,c->r[5]); // 80175164
  c->r[7]=c->r[7]+0x00000024u; // 80175168
  W32(c->r[8]+0x00000020u,c->r[5]); // 8017516C
  c->r[8]=c->r[8]+0x00000024u; // 80175170
  W32(c->r[6]+0x00000020u,c->r[5]); // 80175174
  c->r[6]=c->r[6]+0x00000024u; // 80175178
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80175104; } // 8017517C
  c->r[3]=c->r[13]+0xFFFFADD4u; // 80175180
  c->r[4]=0u+0x00000000u; // 80175184
  c->r[5]=0u+0x00000003u; // 80175188
  c->lr=0x80175190u; f_8000443C(c); // 8017518C
  c->r[3]=c->r[13]+0xFFFFADD0u; // 80175190
  c->r[4]=0u+0x00000000u; // 80175194
  c->r[5]=0u+0x00000003u; // 80175198
  c->lr=0x801751A0u; f_8000443C(c); // 8017519C
  c->r[3]=c->r[13]+0xFFFFADCCu; // 801751A0
  c->r[4]=0u+0x00000000u; // 801751A4
  c->r[5]=0u+0x00000003u; // 801751A8
  c->lr=0x801751B0u; f_8000443C(c); // 801751AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801751B0
  c->lr=c->r[0]; // 801751B4
  c->r[1]=c->r[1]+0x00000010u; // 801751B8
  return; // 801751BC
}

// __AXAuxQuit
void f_801751C0(Ctx* __restrict c) {
  trace_call(0x801751C0u);
  c->r[0]=0u+0x00000000u; // 801751C0
  W32(c->r[13]+0xFFFFADC8u,c->r[0]); // 801751C4
  W32(c->r[13]+0xFFFFADC4u,c->r[0]); // 801751C8
  W32(c->r[13]+0xFFFFADC0u,c->r[0]); // 801751CC
  return; // 801751D0
}

// __AXGetAuxAInput
void f_801751D4(Ctx* __restrict c) {
  trace_call(0x801751D4u);
  c->r[0]=R32(c->r[13]+0xFFFFADC8u); // 801751D4
  cmps(c,0,(int32_t)c->r[0],0); // 801751D8
  if (crb(c,2)) { goto L_801751FC; } // 801751DC
  c->r[0]=R32(c->r[13]+0xFFFFAD98u); // 801751E0
  c->r[4]=0u+0x80440000u; // 801751E4
  c->r[4]=c->r[4]+0x00005000u; // 801751E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801751EC
  c->r[0]=c->r[4]+c->r[0]; // 801751F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801751F4
  return; // 801751F8
L_801751FC:;
  c->r[0]=0u+0x00000000u; // 801751FC
  W32(c->r[3]+0x00000000u,c->r[0]); // 80175200
  return; // 80175204
}

// __AXGetAuxAOutput
void f_80175208(Ctx* __restrict c) {
  trace_call(0x80175208u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 80175208
  c->r[4]=0u+0x80440000u; // 8017520C
  c->r[4]=c->r[4]+0x00005000u; // 80175210
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175214
  c->r[0]=c->r[4]+c->r[0]; // 80175218
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017521C
  return; // 80175220
}

// __AXGetAuxAInputDpl2
void f_80175224(Ctx* __restrict c) {
  trace_call(0x80175224u);
  c->r[0]=R32(c->r[13]+0xFFFFAD98u); // 80175224
  c->r[4]=0u+0x80440000u; // 80175228
  c->r[4]=c->r[4]+0x00005000u; // 8017522C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175230
  c->r[4]=c->r[4]+c->r[0]; // 80175234
  c->r[0]=c->r[4]+0x00000480u; // 80175238
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017523C
  return; // 80175240
}

// __AXGetAuxAOutputDpl2R
void f_80175244(Ctx* __restrict c) {
  trace_call(0x80175244u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 80175244
  c->r[4]=0u+0x80440000u; // 80175248
  c->r[4]=c->r[4]+0x00005000u; // 8017524C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175250
  c->r[4]=c->r[4]+c->r[0]; // 80175254
  c->r[0]=c->r[4]+0x00000180u; // 80175258
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017525C
  return; // 80175260
}

// __AXGetAuxAOutputDpl2Ls
void f_80175264(Ctx* __restrict c) {
  trace_call(0x80175264u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 80175264
  c->r[4]=0u+0x80440000u; // 80175268
  c->r[4]=c->r[4]+0x00005000u; // 8017526C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175270
  c->r[4]=c->r[4]+c->r[0]; // 80175274
  c->r[0]=c->r[4]+0x00000300u; // 80175278
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017527C
  return; // 80175280
}

// __AXGetAuxAOutputDpl2Rs
void f_80175284(Ctx* __restrict c) {
  trace_call(0x80175284u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 80175284
  c->r[4]=0u+0x80440000u; // 80175288
  c->r[4]=c->r[4]+0x00005000u; // 8017528C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175290
  c->r[4]=c->r[4]+c->r[0]; // 80175294
  c->r[0]=c->r[4]+0x00000480u; // 80175298
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017529C
  return; // 801752A0
}

// __AXGetAuxBInput
void f_801752A4(Ctx* __restrict c) {
  trace_call(0x801752A4u);
  c->r[0]=R32(c->r[13]+0xFFFFADC4u); // 801752A4
  cmps(c,0,(int32_t)c->r[0],0); // 801752A8
  if (crb(c,2)) { goto L_801752CC; } // 801752AC
  c->r[0]=R32(c->r[13]+0xFFFFAD98u); // 801752B0
  c->r[4]=0u+0x80440000u; // 801752B4
  c->r[4]=c->r[4]+0x00006200u; // 801752B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801752BC
  c->r[0]=c->r[4]+c->r[0]; // 801752C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801752C4
  return; // 801752C8
L_801752CC:;
  c->r[0]=0u+0x00000000u; // 801752CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801752D0
  return; // 801752D4
}

// __AXGetAuxBOutput
void f_801752D8(Ctx* __restrict c) {
  trace_call(0x801752D8u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 801752D8
  c->r[4]=0u+0x80440000u; // 801752DC
  c->r[4]=c->r[4]+0x00006200u; // 801752E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801752E4
  c->r[0]=c->r[4]+c->r[0]; // 801752E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801752EC
  return; // 801752F0
}

// __AXGetAuxBInputDpl2
void f_801752F4(Ctx* __restrict c) {
  trace_call(0x801752F4u);
  c->r[0]=R32(c->r[13]+0xFFFFAD98u); // 801752F4
  c->r[4]=0u+0x80440000u; // 801752F8
  c->r[4]=c->r[4]+0x00006200u; // 801752FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175300
  c->r[4]=c->r[4]+c->r[0]; // 80175304
  c->r[0]=c->r[4]+0x00000480u; // 80175308
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017530C
  return; // 80175310
}

// __AXGetAuxBOutputDpl2R
void f_80175314(Ctx* __restrict c) {
  trace_call(0x80175314u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 80175314
  c->r[4]=0u+0x80440000u; // 80175318
  c->r[4]=c->r[4]+0x00006200u; // 8017531C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175320
  c->r[4]=c->r[4]+c->r[0]; // 80175324
  c->r[0]=c->r[4]+0x00000180u; // 80175328
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017532C
  return; // 80175330
}

// __AXGetAuxBOutputDpl2Ls
void f_80175334(Ctx* __restrict c) {
  trace_call(0x80175334u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 80175334
  c->r[4]=0u+0x80440000u; // 80175338
  c->r[4]=c->r[4]+0x00006200u; // 8017533C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175340
  c->r[4]=c->r[4]+c->r[0]; // 80175344
  c->r[0]=c->r[4]+0x00000300u; // 80175348
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017534C
  return; // 80175350
}

// __AXGetAuxBOutputDpl2Rs
void f_80175354(Ctx* __restrict c) {
  trace_call(0x80175354u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 80175354
  c->r[4]=0u+0x80440000u; // 80175358
  c->r[4]=c->r[4]+0x00006200u; // 8017535C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175360
  c->r[4]=c->r[4]+c->r[0]; // 80175364
  c->r[0]=c->r[4]+0x00000480u; // 80175368
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017536C
  return; // 80175370
}

// __AXGetAuxCInput
void f_80175374(Ctx* __restrict c) {
  trace_call(0x80175374u);
  c->r[0]=R32(c->r[13]+0xFFFFADC0u); // 80175374
  cmps(c,0,(int32_t)c->r[0],0); // 80175378
  if (crb(c,2)) { goto L_8017539C; } // 8017537C
  c->r[0]=R32(c->r[13]+0xFFFFAD98u); // 80175380
  c->r[4]=0u+0x80440000u; // 80175384
  c->r[4]=c->r[4]+0x00007400u; // 80175388
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 8017538C
  c->r[0]=c->r[4]+c->r[0]; // 80175390
  W32(c->r[3]+0x00000000u,c->r[0]); // 80175394
  return; // 80175398
L_8017539C:;
  c->r[0]=0u+0x00000000u; // 8017539C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801753A0
  return; // 801753A4
}

// __AXGetAuxCOutput
void f_801753A8(Ctx* __restrict c) {
  trace_call(0x801753A8u);
  c->r[0]=R32(c->r[13]+0xFFFFAD94u); // 801753A8
  c->r[4]=0u+0x80440000u; // 801753AC
  c->r[4]=c->r[4]+0x00007400u; // 801753B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 801753B4
  c->r[0]=c->r[4]+c->r[0]; // 801753B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801753BC
  return; // 801753C0
}

// __AXProcessAux
void f_801753C4(Ctx* __restrict c) {
  trace_call(0x801753C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801753C4
  c->r[0]=c->lr; // 801753C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801753CC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801753D0
  c->r[31]=0u+0x80440000u; // 801753D4
  c->r[31]=c->r[31]+0x00005000u; // 801753D8
  W32(c->r[1]+0x00000058u,c->r[30]); // 801753DC
  c->r[10]=c->r[31]+0x00000000u; // 801753E0
  c->r[6]=c->r[31]+0x00001200u; // 801753E4
  c->r[5]=c->r[31]+0x00002400u; // 801753E8
  W32(c->r[1]+0x00000054u,c->r[29]); // 801753EC
  c->r[7]=R32(c->r[13]+0xFFFFAD98u); // 801753F0
  c->r[9]=R32(c->r[13]+0xFFFFAD94u); // 801753F4
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)1536); // 801753F8
  c->r[0]=R32(c->r[13]+0xFFFFADC8u); // 801753FC
  cmps(c,0,(int32_t)c->r[0],0); // 80175400
  c->r[4]=c->r[10]+c->r[3]; // 80175404
  c->r[3]=c->r[6]+c->r[3]; // 80175408
  W32(c->r[13]+0xFFFFADB0u,c->r[4]); // 8017540C
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)1536); // 80175410
  W32(c->r[13]+0xFFFFADA8u,c->r[3]); // 80175414
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)1152); // 80175418
  c->r[7]=c->r[10]+c->r[8]; // 8017541C
  c->r[6]=c->r[6]+c->r[8]; // 80175420
  W32(c->r[13]+0xFFFFADACu,c->r[7]); // 80175424
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)1152); // 80175428
  c->r[4]=c->r[5]+c->r[4]; // 8017542C
  W32(c->r[13]+0xFFFFADA4u,c->r[6]); // 80175430
  c->r[0]=c->r[5]+c->r[3]; // 80175434
  W32(c->r[13]+0xFFFFADA0u,c->r[4]); // 80175438
  W32(c->r[13]+0xFFFFAD9Cu,c->r[0]); // 8017543C
  if (crb(c,2)) { goto L_801754F0; } // 80175440
  c->r[0]=R32(c->r[13]+0xFFFFADE8u); // 80175444
  cmpu(c,0,c->r[0],0x00000002u); // 80175448
  if (!crb(c,2)) { goto L_801754A4; } // 8017544C
  c->r[0]=R32(c->r[13]+0xFFFFAD90u); // 80175450
  c->r[4]=0u+0x00000600u; // 80175454
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 80175458
  c->r[3]=c->r[10]+c->r[0]; // 8017545C
  c->r[6]=c->r[3]+0x00000180u; // 80175460
  W32(c->r[1]+0x00000040u,c->r[3]); // 80175464
  c->r[5]=c->r[3]+0x00000300u; // 80175468
  c->r[0]=c->r[3]+0x00000480u; // 8017546C
  W32(c->r[1]+0x00000044u,c->r[6]); // 80175470
  W32(c->r[1]+0x00000048u,c->r[5]); // 80175474
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80175478
  c->lr=0x80175480u; f_8014F810(c); // 8017547C
  c->r[12]=R32(c->r[13]+0xFFFFADC8u); // 80175480
  c->r[3]=c->r[1]+0x00000040u; // 80175484
  c->r[4]=R32(c->r[13]+0xFFFFADBCu); // 80175488
  c->ctr=c->r[12]; // 8017548C
  if (true) { c->lr=0x80175494u; dispatch(c,c->ctr); } // 80175490
  c->r[3]=R32(c->r[1]+0x00000040u); // 80175494
  c->r[4]=0u+0x00000600u; // 80175498
  c->lr=0x801754A0u; f_8014F89C(c); // 8017549C
  goto L_80175534; // 801754A0
L_801754A4:;
  c->r[0]=R32(c->r[13]+0xFFFFAD90u); // 801754A4
  c->r[4]=0u+0x00000480u; // 801754A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801754AC
  c->r[3]=c->r[10]+c->r[0]; // 801754B0
  c->r[5]=c->r[3]+0x00000180u; // 801754B4
  W32(c->r[1]+0x00000030u,c->r[3]); // 801754B8
  c->r[0]=c->r[3]+0x00000300u; // 801754BC
  W32(c->r[1]+0x00000034u,c->r[5]); // 801754C0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801754C4
  c->lr=0x801754CCu; f_8014F810(c); // 801754C8
  c->r[12]=R32(c->r[13]+0xFFFFADC8u); // 801754CC
  c->r[3]=c->r[1]+0x00000030u; // 801754D0
  c->r[4]=R32(c->r[13]+0xFFFFADBCu); // 801754D4
  c->ctr=c->r[12]; // 801754D8
  if (true) { c->lr=0x801754E0u; dispatch(c,c->ctr); } // 801754DC
  c->r[3]=R32(c->r[1]+0x00000030u); // 801754E0
  c->r[4]=0u+0x00000480u; // 801754E4
  c->lr=0x801754ECu; f_8014F89C(c); // 801754E8
  goto L_80175534; // 801754EC
L_801754F0:;
  c->r[3]=R32(c->r[13]+0xFFFFAD90u); // 801754F0
  c->r[30]=c->r[13]+0xFFFFADD4u; // 801754F4
  c->r[0]=R8(c->r[30]+c->r[3]); // 801754F8
  cmps(c,0,(int32_t)c->r[0],0); // 801754FC
  if (crb(c,2)) { goto L_80175534; } // 80175500
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 80175504
  c->r[4]=0u+0x00000000u; // 80175508
  c->r[5]=0u+0x00000600u; // 8017550C
  c->r[29]=c->r[10]+c->r[0]; // 80175510
  c->r[3]=c->r[29]|c->r[29]; // 80175514
  c->lr=0x8017551Cu; f_8000443C(c); // 80175518
  c->r[3]=c->r[29]|c->r[29]; // 8017551C
  c->r[4]=0u+0x00000600u; // 80175520
  c->lr=0x80175528u; f_8014F83C(c); // 80175524
  c->r[0]=R32(c->r[13]+0xFFFFAD90u); // 80175528
  c->r[3]=0u+0x00000000u; // 8017552C
  W8(c->r[30]+c->r[0],c->r[3]); // 80175530
L_80175534:;
  c->r[0]=R32(c->r[13]+0xFFFFADC4u); // 80175534
  cmps(c,0,(int32_t)c->r[0],0); // 80175538
  if (crb(c,2)) { goto L_801755F4; } // 8017553C
  c->r[0]=R32(c->r[13]+0xFFFFADE8u); // 80175540
  cmpu(c,0,c->r[0],0x00000002u); // 80175544
  if (!crb(c,2)) { goto L_801755A4; } // 80175548
  c->r[3]=R32(c->r[13]+0xFFFFAD90u); // 8017554C
  c->r[0]=c->r[31]+0x00001200u; // 80175550
  c->r[4]=0u+0x00000600u; // 80175554
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 80175558
  c->r[3]=c->r[0]+c->r[3]; // 8017555C
  c->r[6]=c->r[3]+0x00000180u; // 80175560
  W32(c->r[1]+0x00000020u,c->r[3]); // 80175564
  c->r[5]=c->r[3]+0x00000300u; // 80175568
  c->r[0]=c->r[3]+0x00000480u; // 8017556C
  W32(c->r[1]+0x00000024u,c->r[6]); // 80175570
  W32(c->r[1]+0x00000028u,c->r[5]); // 80175574
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80175578
  c->lr=0x80175580u; f_8014F810(c); // 8017557C
  c->r[12]=R32(c->r[13]+0xFFFFADC4u); // 80175580
  c->r[3]=c->r[1]+0x00000020u; // 80175584
  c->r[4]=R32(c->r[13]+0xFFFFADB8u); // 80175588
  c->ctr=c->r[12]; // 8017558C
  if (true) { c->lr=0x80175594u; dispatch(c,c->ctr); } // 80175590
  c->r[3]=R32(c->r[1]+0x00000020u); // 80175594
  c->r[4]=0u+0x00000600u; // 80175598
  c->lr=0x801755A0u; f_8014F89C(c); // 8017559C
  goto L_8017563C; // 801755A0
L_801755A4:;
  c->r[3]=R32(c->r[13]+0xFFFFAD90u); // 801755A4
  c->r[0]=c->r[31]+0x00001200u; // 801755A8
  c->r[4]=0u+0x00000480u; // 801755AC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801755B0
  c->r[3]=c->r[0]+c->r[3]; // 801755B4
  c->r[5]=c->r[3]+0x00000180u; // 801755B8
  W32(c->r[1]+0x00000014u,c->r[3]); // 801755BC
  c->r[0]=c->r[3]+0x00000300u; // 801755C0
  W32(c->r[1]+0x00000018u,c->r[5]); // 801755C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801755C8
  c->lr=0x801755D0u; f_8014F810(c); // 801755CC
  c->r[12]=R32(c->r[13]+0xFFFFADC4u); // 801755D0
  c->r[3]=c->r[1]+0x00000014u; // 801755D4
  c->r[4]=R32(c->r[13]+0xFFFFADB8u); // 801755D8
  c->ctr=c->r[12]; // 801755DC
  if (true) { c->lr=0x801755E4u; dispatch(c,c->ctr); } // 801755E0
  c->r[3]=R32(c->r[1]+0x00000014u); // 801755E4
  c->r[4]=0u+0x00000480u; // 801755E8
  c->lr=0x801755F0u; f_8014F89C(c); // 801755EC
  goto L_8017563C; // 801755F0
L_801755F4:;
  c->r[3]=R32(c->r[13]+0xFFFFAD90u); // 801755F4
  c->r[30]=c->r[13]+0xFFFFADD0u; // 801755F8
  c->r[0]=R8(c->r[30]+c->r[3]); // 801755FC
  cmps(c,0,(int32_t)c->r[0],0); // 80175600
  if (crb(c,2)) { goto L_8017563C; } // 80175604
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 80175608
  c->r[0]=c->r[31]+0x00001200u; // 8017560C
  c->r[4]=0u+0x00000000u; // 80175610
  c->r[5]=0u+0x00000600u; // 80175614
  c->r[29]=c->r[0]+c->r[3]; // 80175618
  c->r[3]=c->r[29]|c->r[29]; // 8017561C
  c->lr=0x80175624u; f_8000443C(c); // 80175620
  c->r[3]=c->r[29]|c->r[29]; // 80175624
  c->r[4]=0u+0x00000600u; // 80175628
  c->lr=0x80175630u; f_8014F83C(c); // 8017562C
  c->r[0]=R32(c->r[13]+0xFFFFAD90u); // 80175630
  c->r[3]=0u+0x00000000u; // 80175634
  W8(c->r[30]+c->r[0],c->r[3]); // 80175638
L_8017563C:;
  c->r[0]=R32(c->r[13]+0xFFFFADC0u); // 8017563C
  cmps(c,0,(int32_t)c->r[0],0); // 80175640
  if (crb(c,2)) { goto L_801756A4; } // 80175644
  c->r[0]=R32(c->r[13]+0xFFFFADE8u); // 80175648
  cmpu(c,0,c->r[0],0x00000002u); // 8017564C
  if (crb(c,2)) { goto L_801756A4; } // 80175650
  c->r[3]=R32(c->r[13]+0xFFFFAD90u); // 80175654
  c->r[0]=c->r[31]+0x00002400u; // 80175658
  c->r[4]=0u+0x00000480u; // 8017565C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 80175660
  c->r[3]=c->r[0]+c->r[3]; // 80175664
  c->r[5]=c->r[3]+0x00000180u; // 80175668
  W32(c->r[1]+0x00000008u,c->r[3]); // 8017566C
  c->r[0]=c->r[3]+0x00000300u; // 80175670
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80175674
  W32(c->r[1]+0x00000010u,c->r[0]); // 80175678
  c->lr=0x80175680u; f_8014F810(c); // 8017567C
  c->r[12]=R32(c->r[13]+0xFFFFADC0u); // 80175680
  c->r[3]=c->r[1]+0x00000008u; // 80175684
  c->r[4]=R32(c->r[13]+0xFFFFADB4u); // 80175688
  c->ctr=c->r[12]; // 8017568C
  if (true) { c->lr=0x80175694u; dispatch(c,c->ctr); } // 80175690
  c->r[3]=R32(c->r[1]+0x00000008u); // 80175694
  c->r[4]=0u+0x00000480u; // 80175698
  c->lr=0x801756A0u; f_8014F89C(c); // 8017569C
  goto L_801756F8; // 801756A0
L_801756A4:;
  c->r[0]=R32(c->r[13]+0xFFFFADC0u); // 801756A4
  cmps(c,0,(int32_t)c->r[0],0); // 801756A8
  if (!crb(c,2)) { goto L_801756F8; } // 801756AC
  c->r[3]=R32(c->r[13]+0xFFFFAD90u); // 801756B0
  c->r[30]=c->r[13]+0xFFFFADCCu; // 801756B4
  c->r[0]=R8(c->r[30]+c->r[3]); // 801756B8
  cmps(c,0,(int32_t)c->r[0],0); // 801756BC
  if (crb(c,2)) { goto L_801756F8; } // 801756C0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 801756C4
  c->r[0]=c->r[31]+0x00002400u; // 801756C8
  c->r[4]=0u+0x00000000u; // 801756CC
  c->r[5]=0u+0x00000480u; // 801756D0
  c->r[29]=c->r[0]+c->r[3]; // 801756D4
  c->r[3]=c->r[29]|c->r[29]; // 801756D8
  c->lr=0x801756E0u; f_8000443C(c); // 801756DC
  c->r[3]=c->r[29]|c->r[29]; // 801756E0
  c->r[4]=0u+0x00000480u; // 801756E4
  c->lr=0x801756ECu; f_8014F83C(c); // 801756E8
  c->r[0]=R32(c->r[13]+0xFFFFAD90u); // 801756EC
  c->r[3]=0u+0x00000000u; // 801756F0
  W8(c->r[30]+c->r[0],c->r[3]); // 801756F4
L_801756F8:;
  c->r[3]=0u+0xAAAB0000u; // 801756F8
  c->r[5]=R32(c->r[13]+0xFFFFAD98u); // 801756FC
  c->r[0]=c->r[3]+0xFFFFAAABu; // 80175700
  c->r[3]=R32(c->r[13]+0xFFFFAD90u); // 80175704
  c->r[4]=R32(c->r[13]+0xFFFFAD94u); // 80175708
  c->r[7]=c->r[5]+0x00000001u; // 8017570C
  c->r[3]=c->r[3]+0x00000001u; // 80175710
  c->r[5]=c->r[4]+0x00000001u; // 80175714
  c->r[6]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[7])>>32); // 80175718
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 8017571C
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 80175720
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 80175724
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 80175728
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)3); // 8017572C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80175730
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 80175734
  c->r[6]=c->r[7]-c->r[6]; // 80175738
  W32(c->r[13]+0xFFFFAD98u,c->r[6]); // 8017573C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80175740
  c->r[4]=c->r[5]-c->r[4]; // 80175744
  W32(c->r[13]+0xFFFFAD94u,c->r[4]); // 80175748
  c->r[0]=c->r[3]-c->r[0]; // 8017574C
  W32(c->r[13]+0xFFFFAD90u,c->r[0]); // 80175750
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80175754
  c->r[30]=R32(c->r[1]+0x00000058u); // 80175758
  c->r[29]=R32(c->r[1]+0x00000054u); // 8017575C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80175760
  c->lr=c->r[0]; // 80175764
  c->r[1]=c->r[1]+0x00000060u; // 80175768
  return; // 8017576C
}

// AXRegisterAuxACallback
void f_80175770(Ctx* __restrict c) {
  trace_call(0x80175770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175770
  c->r[0]=c->lr; // 80175774
  W32(c->r[1]+0x00000014u,c->r[0]); // 80175778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017577C
  c->r[31]=c->r[3]|c->r[3]; // 80175780
  W32(c->r[1]+0x00000008u,c->r[30]); // 80175784
  c->r[30]=c->r[4]|c->r[4]; // 80175788
  c->lr=0x80175790u; f_80154410(c); // 8017578C
  cmps(c,0,(int32_t)c->r[31],0); // 80175790
  W32(c->r[13]+0xFFFFADC8u,c->r[31]); // 80175794
  c->r[31]=c->r[3]|c->r[3]; // 80175798
  W32(c->r[13]+0xFFFFADBCu,c->r[30]); // 8017579C
  if (!crb(c,2)) { goto L_801757B4; } // 801757A0
  c->r[3]=c->r[13]+0xFFFFADD4u; // 801757A4
  c->r[4]=0u+0x00000001u; // 801757A8
  c->r[5]=0u+0x00000003u; // 801757AC
  c->lr=0x801757B4u; f_8000443C(c); // 801757B0
L_801757B4:;
  c->r[3]=c->r[31]|c->r[31]; // 801757B4
  c->lr=0x801757BCu; f_80154438(c); // 801757B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801757BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801757C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801757C4
  c->lr=c->r[0]; // 801757C8
  c->r[1]=c->r[1]+0x00000010u; // 801757CC
  return; // 801757D0
}

// AXRegisterAuxBCallback
void f_801757D4(Ctx* __restrict c) {
  trace_call(0x801757D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801757D4
  c->r[0]=c->lr; // 801757D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801757DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801757E0
  c->r[31]=c->r[3]|c->r[3]; // 801757E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801757E8
  c->r[30]=c->r[4]|c->r[4]; // 801757EC
  c->lr=0x801757F4u; f_80154410(c); // 801757F0
  cmps(c,0,(int32_t)c->r[31],0); // 801757F4
  W32(c->r[13]+0xFFFFADC4u,c->r[31]); // 801757F8
  c->r[31]=c->r[3]|c->r[3]; // 801757FC
  W32(c->r[13]+0xFFFFADB8u,c->r[30]); // 80175800
  if (!crb(c,2)) { goto L_80175818; } // 80175804
  c->r[3]=c->r[13]+0xFFFFADD0u; // 80175808
  c->r[4]=0u+0x00000001u; // 8017580C
  c->r[5]=0u+0x00000003u; // 80175810
  c->lr=0x80175818u; f_8000443C(c); // 80175814
L_80175818:;
  c->r[3]=c->r[31]|c->r[31]; // 80175818
  c->lr=0x80175820u; f_80154438(c); // 8017581C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80175820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80175824
  c->r[30]=R32(c->r[1]+0x00000008u); // 80175828
  c->lr=c->r[0]; // 8017582C
  c->r[1]=c->r[1]+0x00000010u; // 80175830
  return; // 80175834
}

// AXRegisterAuxCCallback
void f_80175838(Ctx* __restrict c) {
  trace_call(0x80175838u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175838
  c->r[0]=c->lr; // 8017583C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80175840
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80175844
  c->r[31]=c->r[3]|c->r[3]; // 80175848
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017584C
  c->r[30]=c->r[4]|c->r[4]; // 80175850
  c->lr=0x80175858u; f_80154410(c); // 80175854
  cmps(c,0,(int32_t)c->r[31],0); // 80175858
  W32(c->r[13]+0xFFFFADC0u,c->r[31]); // 8017585C
  c->r[31]=c->r[3]|c->r[3]; // 80175860
  W32(c->r[13]+0xFFFFADB4u,c->r[30]); // 80175864
  if (!crb(c,2)) { goto L_8017587C; } // 80175868
  c->r[3]=c->r[13]+0xFFFFADCCu; // 8017586C
  c->r[4]=0u+0x00000001u; // 80175870
  c->r[5]=0u+0x00000003u; // 80175874
  c->lr=0x8017587Cu; f_8000443C(c); // 80175878
L_8017587C:;
  c->r[3]=c->r[31]|c->r[31]; // 8017587C
  c->lr=0x80175884u; f_80154438(c); // 80175880
  c->r[0]=R32(c->r[1]+0x00000014u); // 80175884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80175888
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017588C
  c->lr=c->r[0]; // 80175890
  c->r[1]=c->r[1]+0x00000010u; // 80175894
  return; // 80175898
}

// AXGetAuxACallback
void f_8017589C(Ctx* __restrict c) {
  trace_call(0x8017589Cu);
  c->r[0]=R32(c->r[13]+0xFFFFADC8u); // 8017589C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801758A0
  c->r[0]=R32(c->r[13]+0xFFFFADBCu); // 801758A4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801758A8
  return; // 801758AC
}

// AXGetAuxBCallback
void f_801758B0(Ctx* __restrict c) {
  trace_call(0x801758B0u);
  c->r[0]=R32(c->r[13]+0xFFFFADC4u); // 801758B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801758B4
  c->r[0]=R32(c->r[13]+0xFFFFADB8u); // 801758B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801758BC
  return; // 801758C0
}

// AXGetAuxCCallback
void f_801758C4(Ctx* __restrict c) {
  trace_call(0x801758C4u);
  c->r[0]=R32(c->r[13]+0xFFFFADC0u); // 801758C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801758C8
  c->r[0]=R32(c->r[13]+0xFFFFADB4u); // 801758CC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801758D0
  return; // 801758D4
}

// __AXGetCommandListCycles
void f_801758D8(Ctx* __restrict c) {
  trace_call(0x801758D8u);
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 801758D8
  return; // 801758DC
}

// __AXGetCommandListAddress
void f_801758E0(Ctx* __restrict c) {
  trace_call(0x801758E0u);
  c->r[4]=R32(c->r[13]+0xFFFFADF0u); // 801758E0
  c->r[5]=0u+0x80450000u; // 801758E4
  c->r[5]=c->r[5]+0xFFFF8180u; // 801758E8
  c->r[3]=c->r[4]+0x00000001u; // 801758EC
  c->r[6]=rotl(c->r[4],7)&0xFFFFFF80u; // 801758F0
  c->r[0]=rotl(c->r[3],7)&0x00000080u; // 801758F4
  c->r[4]=rotl(c->r[3],0)&0x00000001u; // 801758F8
  c->r[3]=c->r[5]+c->r[6]; // 801758FC
  c->r[0]=c->r[5]+c->r[0]; // 80175900
  W32(c->r[13]+0xFFFFADF0u,c->r[4]); // 80175904
  W32(c->r[13]+0xFFFFADECu,c->r[0]); // 80175908
  return; // 8017590C
}

// __AXNextFrame
void f_80175910(Ctx* __restrict c) {
  trace_call(0x80175910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175910
  c->r[0]=c->lr; // 80175914
  W32(c->r[1]+0x00000024u,c->r[0]); // 80175918
  c->r[0]=0u+0x00001E83u; // 8017591C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80175920
  W32(c->r[1]+0x00000018u,c->r[30]); // 80175924
  c->r[30]=c->r[5]|c->r[5]; // 80175928
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017592C
  c->r[29]=c->r[4]|c->r[4]; // 80175930
  W32(c->r[1]+0x00000010u,c->r[28]); // 80175934
  c->r[28]=c->r[3]|c->r[3]; // 80175938
  c->r[31]=R32(c->r[13]+0xFFFFADECu); // 8017593C
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80175940
  c->lr=0x80175948u; f_80176BC0(c); // 80175944
  W32(c->r[1]+0x00000008u,c->r[3]); // 80175948
  c->r[0]=0u+0x00000000u; // 8017594C
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175950
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175954
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175958
  c->r[0]=R32(c->r[1]+0x00000008u); // 8017595C
  c->r[3]=c->r[3]+0x00000002u; // 80175960
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175964
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175968
  W16(c->r[3]+0x00000000u,c->r[0]); // 8017596C
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175970
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175974
  c->r[3]=c->r[3]+0x00000002u; // 80175978
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 8017597C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175980
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175984
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80175988
  c->r[0]=R32(c->r[13]+0xFFFFADE8u); // 8017598C
  c->r[4]=c->r[4]+0x00000002u; // 80175990
  c->r[3]=c->r[3]+0x0000101Eu; // 80175994
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175998
  cmps(c,0,(int32_t)c->r[0],1); // 8017599C
  W32(c->r[13]+0xFFFFADE4u,c->r[3]); // 801759A0
  if (crb(c,2)) { goto L_80175A0C; } // 801759A4
  if (!crb(c,0)) { goto L_801759B8; } // 801759A8
  cmps(c,0,(int32_t)c->r[0],0); // 801759AC
  if (!crb(c,0)) { goto L_801759C4; } // 801759B0
  goto L_80175A98; // 801759B4
L_801759B8:;
  cmps(c,0,(int32_t)c->r[0],3); // 801759B8
  if (!crb(c,0)) { goto L_80175A98; } // 801759BC
  goto L_80175A54; // 801759C0
L_801759C4:;
  c->r[3]=0u+0x00000001u; // 801759C4
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801759C8
  W16(c->r[4]+0x00000000u,c->r[3]); // 801759CC
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801759D0
  c->r[3]=c->r[3]+0x00000002u; // 801759D4
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 801759D8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801759DC
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801759E0
  c->r[3]=c->r[3]+0x00000002u; // 801759E4
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 801759E8
  W16(c->r[3]+0x00000000u,c->r[28]); // 801759EC
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 801759F0
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 801759F4
  c->r[5]=c->r[4]+0x00000002u; // 801759F8
  c->r[0]=c->r[3]+0x000002DDu; // 801759FC
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175A00
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80175A04
  goto L_80175A98; // 80175A08
L_80175A0C:;
  c->r[3]=0u+0x00000002u; // 80175A0C
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 80175A10
  W16(c->r[4]+0x00000000u,c->r[3]); // 80175A14
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175A18
  c->r[3]=c->r[3]+0x00000002u; // 80175A1C
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175A20
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175A24
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175A28
  c->r[3]=c->r[3]+0x00000002u; // 80175A2C
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175A30
  W16(c->r[3]+0x00000000u,c->r[28]); // 80175A34
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175A38
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80175A3C
  c->r[5]=c->r[4]+0x00000002u; // 80175A40
  c->r[0]=c->r[3]+0x0000033Du; // 80175A44
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175A48
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80175A4C
  goto L_80175A98; // 80175A50
L_80175A54:;
  c->r[3]=0u+0x00000003u; // 80175A54
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 80175A58
  W16(c->r[4]+0x00000000u,c->r[3]); // 80175A5C
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175A60
  c->r[3]=c->r[3]+0x00000002u; // 80175A64
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175A68
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175A6C
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175A70
  c->r[3]=c->r[3]+0x00000002u; // 80175A74
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175A78
  W16(c->r[3]+0x00000000u,c->r[28]); // 80175A7C
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175A80
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80175A84
  c->r[5]=c->r[4]+0x00000002u; // 80175A88
  c->r[0]=c->r[3]+0x0000039Du; // 80175A8C
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175A90
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80175A94
L_80175A98:;
  c->lr=0x80175A9Cu; f_8017784C(c); // 80175A98
  W32(c->r[1]+0x00000008u,c->r[3]); // 80175A9C
  c->r[0]=0u+0x00000004u; // 80175AA0
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175AA4
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175AA8
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175AAC
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175AB0
  c->r[3]=c->r[3]+0x00000002u; // 80175AB4
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175AB8
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175ABC
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175AC0
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175AC4
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175AC8
  c->r[3]=c->r[3]+0x00000002u; // 80175ACC
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175AD0
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175AD4
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175AD8
  c->r[0]=R32(c->r[13]+0xFFFFADE8u); // 80175ADC
  c->r[5]=c->r[3]+0x00000002u; // 80175AE0
  cmpu(c,0,c->r[0],0x00000002u); // 80175AE4
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175AE8
  if (!crb(c,2)) { goto L_80175E14; } // 80175AEC
  c->r[3]=c->r[1]+0x00000008u; // 80175AF0
  c->lr=0x80175AF8u; f_801751D4(c); // 80175AF4
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175AF8
  cmps(c,0,(int32_t)c->r[0],0); // 80175AFC
  if (crb(c,2)) { goto L_80175C80; } // 80175B00
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175B04
  c->r[0]=0u+0x00000008u; // 80175B08
  c->r[3]=c->r[1]+0x00000008u; // 80175B0C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175B10
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175B14
  c->r[0]=R16(c->r[13]+0xFFFFADDCu); // 80175B18
  c->r[4]=c->r[4]+0x00000002u; // 80175B1C
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175B20
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175B24
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175B28
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175B2C
  c->r[4]=c->r[4]+0x00000002u; // 80175B30
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175B34
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175B38
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175B3C
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175B40
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175B44
  c->r[4]=c->r[4]+0x00000002u; // 80175B48
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175B4C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175B50
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175B54
  c->r[5]=c->r[4]+0x00000002u; // 80175B58
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175B5C
  c->lr=0x80175B64u; f_80175224(c); // 80175B60
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175B64
  c->r[3]=c->r[1]+0x00000008u; // 80175B68
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175B6C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175B70
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175B74
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175B78
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175B7C
  c->r[4]=c->r[4]+0x00000002u; // 80175B80
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175B84
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175B88
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175B8C
  c->r[5]=c->r[4]+0x00000002u; // 80175B90
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175B94
  c->lr=0x80175B9Cu; f_80175208(c); // 80175B98
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175B9C
  c->r[3]=c->r[1]+0x00000008u; // 80175BA0
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175BA4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175BA8
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175BAC
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175BB0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175BB4
  c->r[4]=c->r[4]+0x00000002u; // 80175BB8
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175BBC
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175BC0
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175BC4
  c->r[5]=c->r[4]+0x00000002u; // 80175BC8
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175BCC
  c->lr=0x80175BD4u; f_80175244(c); // 80175BD0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175BD4
  c->r[3]=c->r[1]+0x00000008u; // 80175BD8
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175BDC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175BE0
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175BE4
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175BE8
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175BEC
  c->r[4]=c->r[4]+0x00000002u; // 80175BF0
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175BF4
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175BF8
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175BFC
  c->r[5]=c->r[4]+0x00000002u; // 80175C00
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175C04
  c->lr=0x80175C0Cu; f_80175264(c); // 80175C08
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175C0C
  c->r[3]=c->r[1]+0x00000008u; // 80175C10
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175C14
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175C18
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175C1C
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175C20
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175C24
  c->r[4]=c->r[4]+0x00000002u; // 80175C28
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175C2C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175C30
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175C34
  c->r[5]=c->r[4]+0x00000002u; // 80175C38
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175C3C
  c->lr=0x80175C44u; f_80175284(c); // 80175C40
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175C44
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175C48
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175C4C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175C50
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175C54
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175C58
  c->r[3]=c->r[3]+0x00000002u; // 80175C5C
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175C60
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175C64
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175C68
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80175C6C
  c->r[5]=c->r[4]+0x00000002u; // 80175C70
  c->r[0]=c->r[3]+0x00000BDCu; // 80175C74
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175C78
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80175C7C
L_80175C80:;
  c->r[3]=c->r[1]+0x00000008u; // 80175C80
  c->lr=0x80175C88u; f_801752A4(c); // 80175C84
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175C88
  cmps(c,0,(int32_t)c->r[0],0); // 80175C8C
  if (crb(c,2)) { goto L_80176024; } // 80175C90
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175C94
  c->r[0]=0u+0x00000009u; // 80175C98
  c->r[3]=c->r[1]+0x00000008u; // 80175C9C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175CA0
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175CA4
  c->r[0]=R16(c->r[13]+0xFFFFADDAu); // 80175CA8
  c->r[4]=c->r[4]+0x00000002u; // 80175CAC
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175CB0
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175CB4
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175CB8
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175CBC
  c->r[4]=c->r[4]+0x00000002u; // 80175CC0
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175CC4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175CC8
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175CCC
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175CD0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175CD4
  c->r[4]=c->r[4]+0x00000002u; // 80175CD8
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175CDC
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175CE0
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175CE4
  c->r[5]=c->r[4]+0x00000002u; // 80175CE8
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175CEC
  c->lr=0x80175CF4u; f_801752F4(c); // 80175CF0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175CF4
  c->r[3]=c->r[1]+0x00000008u; // 80175CF8
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175CFC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175D00
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175D04
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175D08
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175D0C
  c->r[4]=c->r[4]+0x00000002u; // 80175D10
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175D14
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175D18
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175D1C
  c->r[5]=c->r[4]+0x00000002u; // 80175D20
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175D24
  c->lr=0x80175D2Cu; f_801752D8(c); // 80175D28
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175D2C
  c->r[3]=c->r[1]+0x00000008u; // 80175D30
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175D34
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175D38
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175D3C
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175D40
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175D44
  c->r[4]=c->r[4]+0x00000002u; // 80175D48
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175D4C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175D50
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175D54
  c->r[5]=c->r[4]+0x00000002u; // 80175D58
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175D5C
  c->lr=0x80175D64u; f_80175314(c); // 80175D60
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175D64
  c->r[3]=c->r[1]+0x00000008u; // 80175D68
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175D6C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175D70
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175D74
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175D78
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175D7C
  c->r[4]=c->r[4]+0x00000002u; // 80175D80
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175D84
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175D88
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175D8C
  c->r[5]=c->r[4]+0x00000002u; // 80175D90
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175D94
  c->lr=0x80175D9Cu; f_80175334(c); // 80175D98
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175D9C
  c->r[3]=c->r[1]+0x00000008u; // 80175DA0
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175DA4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175DA8
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175DAC
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175DB0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175DB4
  c->r[4]=c->r[4]+0x00000002u; // 80175DB8
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175DBC
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175DC0
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175DC4
  c->r[5]=c->r[4]+0x00000002u; // 80175DC8
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175DCC
  c->lr=0x80175DD4u; f_80175354(c); // 80175DD0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175DD4
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175DD8
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175DDC
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175DE0
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175DE4
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175DE8
  c->r[3]=c->r[3]+0x00000002u; // 80175DEC
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175DF0
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175DF4
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175DF8
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80175DFC
  c->r[5]=c->r[4]+0x00000002u; // 80175E00
  c->r[0]=c->r[3]+0x00000BDCu; // 80175E04
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175E08
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80175E0C
  goto L_80176024; // 80175E10
L_80175E14:;
  c->r[3]=c->r[1]+0x00000008u; // 80175E14
  c->lr=0x80175E1Cu; f_801751D4(c); // 80175E18
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175E1C
  cmps(c,0,(int32_t)c->r[0],0); // 80175E20
  if (crb(c,2)) { goto L_80175EC4; } // 80175E24
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175E28
  c->r[0]=0u+0x00000005u; // 80175E2C
  c->r[3]=c->r[1]+0x00000008u; // 80175E30
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175E34
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175E38
  c->r[0]=R16(c->r[13]+0xFFFFADDCu); // 80175E3C
  c->r[4]=c->r[4]+0x00000002u; // 80175E40
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175E44
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175E48
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175E4C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175E50
  c->r[4]=c->r[4]+0x00000002u; // 80175E54
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175E58
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175E5C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175E60
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175E64
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175E68
  c->r[4]=c->r[4]+0x00000002u; // 80175E6C
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175E70
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175E74
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175E78
  c->r[5]=c->r[4]+0x00000002u; // 80175E7C
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175E80
  c->lr=0x80175E88u; f_80175208(c); // 80175E84
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175E88
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175E8C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175E90
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175E94
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175E98
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175E9C
  c->r[3]=c->r[3]+0x00000002u; // 80175EA0
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175EA4
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175EA8
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175EAC
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80175EB0
  c->r[5]=c->r[4]+0x00000002u; // 80175EB4
  c->r[0]=c->r[3]+0x000008BBu; // 80175EB8
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175EBC
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80175EC0
L_80175EC4:;
  c->r[3]=c->r[1]+0x00000008u; // 80175EC4
  c->lr=0x80175ECCu; f_801752A4(c); // 80175EC8
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175ECC
  cmps(c,0,(int32_t)c->r[0],0); // 80175ED0
  if (crb(c,2)) { goto L_80175F74; } // 80175ED4
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175ED8
  c->r[0]=0u+0x00000006u; // 80175EDC
  c->r[3]=c->r[1]+0x00000008u; // 80175EE0
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175EE4
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175EE8
  c->r[0]=R16(c->r[13]+0xFFFFADDAu); // 80175EEC
  c->r[4]=c->r[4]+0x00000002u; // 80175EF0
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175EF4
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175EF8
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175EFC
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175F00
  c->r[4]=c->r[4]+0x00000002u; // 80175F04
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175F08
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175F0C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175F10
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175F14
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175F18
  c->r[4]=c->r[4]+0x00000002u; // 80175F1C
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175F20
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175F24
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175F28
  c->r[5]=c->r[4]+0x00000002u; // 80175F2C
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175F30
  c->lr=0x80175F38u; f_801752D8(c); // 80175F34
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175F38
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175F3C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175F40
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175F44
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175F48
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175F4C
  c->r[3]=c->r[3]+0x00000002u; // 80175F50
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80175F54
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175F58
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175F5C
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80175F60
  c->r[5]=c->r[4]+0x00000002u; // 80175F64
  c->r[0]=c->r[3]+0x000008BBu; // 80175F68
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175F6C
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80175F70
L_80175F74:;
  c->r[3]=c->r[1]+0x00000008u; // 80175F74
  c->lr=0x80175F7Cu; f_80175374(c); // 80175F78
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175F7C
  cmps(c,0,(int32_t)c->r[0],0); // 80175F80
  if (crb(c,2)) { goto L_80176024; } // 80175F84
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175F88
  c->r[0]=0u+0x00000007u; // 80175F8C
  c->r[3]=c->r[1]+0x00000008u; // 80175F90
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175F94
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175F98
  c->r[0]=R16(c->r[13]+0xFFFFADD8u); // 80175F9C
  c->r[4]=c->r[4]+0x00000002u; // 80175FA0
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175FA4
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175FA8
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175FAC
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175FB0
  c->r[4]=c->r[4]+0x00000002u; // 80175FB4
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175FB8
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175FBC
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175FC0
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175FC4
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175FC8
  c->r[4]=c->r[4]+0x00000002u; // 80175FCC
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80175FD0
  W16(c->r[4]+0x00000000u,c->r[0]); // 80175FD4
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80175FD8
  c->r[5]=c->r[4]+0x00000002u; // 80175FDC
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80175FE0
  c->lr=0x80175FE8u; f_801753A8(c); // 80175FE4
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175FE8
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175FEC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80175FF0
  W16(c->r[3]+0x00000000u,c->r[0]); // 80175FF4
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80175FF8
  c->r[0]=R32(c->r[1]+0x00000008u); // 80175FFC
  c->r[3]=c->r[3]+0x00000002u; // 80176000
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176004
  W16(c->r[3]+0x00000000u,c->r[0]); // 80176008
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 8017600C
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80176010
  c->r[5]=c->r[4]+0x00000002u; // 80176014
  c->r[0]=c->r[3]+0x000008BBu; // 80176018
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 8017601C
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80176020
L_80176024:;
  c->r[0]=R32(c->r[13]+0xFFFFADE0u); // 80176024
  cmps(c,0,(int32_t)c->r[0],0); // 80176028
  if (crb(c,2)) { goto L_801760A8; } // 8017602C
  c->r[5]=R32(c->r[13]+0xFFFFADECu); // 80176030
  c->r[6]=0u+0x0000000Au; // 80176034
  c->r[3]=0u+0x00010000u; // 80176038
  c->r[4]=0u+0x802D0000u; // 8017603C
  W16(c->r[5]+0x00000000u,c->r[6]); // 80176040
  c->r[4]=c->r[4]+0x00007500u; // 80176044
  c->r[3]=c->r[3]+0xFFFF8000u; // 80176048
  c->r[5]=R32(c->r[13]+0xFFFFADECu); // 8017604C
  c->r[0]=rotl(c->r[4],16)&0x0000FFFFu; // 80176050
  c->r[5]=c->r[5]+0x00000002u; // 80176054
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80176058
  W16(c->r[5]+0x00000000u,c->r[3]); // 8017605C
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80176060
  c->r[3]=c->r[3]+0x00000002u; // 80176064
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176068
  W16(c->r[3]+0x00000000u,c->r[6]); // 8017606C
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80176070
  c->r[3]=c->r[3]+0x00000002u; // 80176074
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176078
  W16(c->r[3]+0x00000000u,c->r[0]); // 8017607C
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80176080
  c->r[3]=c->r[3]+0x00000002u; // 80176084
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176088
  W16(c->r[3]+0x00000000u,c->r[4]); // 8017608C
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80176090
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80176094
  c->r[5]=c->r[4]+0x00000002u; // 80176098
  c->r[0]=c->r[3]+0x0000073Au; // 8017609C
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 801760A0
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 801760A4
L_801760A8:;
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801760A8
  c->r[0]=0u+0x0000000Du; // 801760AC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801760B0
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801760B4
  c->r[3]=c->r[3]+0x00000002u; // 801760B8
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 801760BC
  c->r[0]=R32(c->r[30]+0x00000000u); // 801760C0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801760C4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801760C8
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801760CC
  c->r[3]=c->r[3]+0x00000002u; // 801760D0
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 801760D4
  c->r[0]=R32(c->r[30]+0x00000000u); // 801760D8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801760DC
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801760E0
  c->r[3]=c->r[3]+0x00000002u; // 801760E4
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 801760E8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801760EC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801760F0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801760F4
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801760F8
  c->r[3]=c->r[3]+0x00000002u; // 801760FC
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176100
  c->r[0]=R32(c->r[30]+0x00000004u); // 80176104
  W16(c->r[3]+0x00000000u,c->r[0]); // 80176108
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 8017610C
  c->r[3]=c->r[3]+0x00000002u; // 80176110
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176114
  c->r[0]=R32(c->r[30]+0x00000008u); // 80176118
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 8017611C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80176120
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80176124
  c->r[3]=c->r[3]+0x00000002u; // 80176128
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 8017612C
  c->r[0]=R32(c->r[30]+0x00000008u); // 80176130
  W16(c->r[3]+0x00000000u,c->r[0]); // 80176134
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80176138
  c->r[3]=c->r[3]+0x00000002u; // 8017613C
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176140
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80176144
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 80176148
  W16(c->r[3]+0x00000000u,c->r[0]); // 8017614C
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 80176150
  c->r[3]=c->r[3]+0x00000002u; // 80176154
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176158
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017615C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80176160
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 80176164
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80176168
  c->r[0]=R32(c->r[13]+0xFFFFADE8u); // 8017616C
  c->r[4]=c->r[4]+0x00000002u; // 80176170
  c->r[3]=c->r[3]+0x00000199u; // 80176174
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80176178
  cmpu(c,0,c->r[0],0x00000002u); // 8017617C
  W32(c->r[13]+0xFFFFADE4u,c->r[3]); // 80176180
  if (!crb(c,2)) { goto L_80176208; } // 80176184
  c->r[0]=0u+0x0000000Cu; // 80176188
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 8017618C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80176190
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 80176194
  c->r[5]=R32(c->r[13]+0xFFFFADECu); // 80176198
  c->r[4]=R16(c->r[13]+0xFFFFADDEu); // 8017619C
  c->r[5]=c->r[5]+0x00000002u; // 801761A0
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 801761A4
  W16(c->r[5]+0x00000000u,c->r[4]); // 801761A8
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 801761AC
  c->r[4]=c->r[4]+0x00000002u; // 801761B0
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 801761B4
  W16(c->r[4]+0x00000000u,c->r[3]); // 801761B8
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801761BC
  c->r[3]=c->r[3]+0x00000002u; // 801761C0
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 801761C4
  W16(c->r[3]+0x00000000u,c->r[28]); // 801761C8
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801761CC
  c->r[3]=c->r[3]+0x00000002u; // 801761D0
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 801761D4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801761D8
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 801761DC
  c->r[3]=c->r[3]+0x00000002u; // 801761E0
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 801761E4
  W16(c->r[3]+0x00000000u,c->r[29]); // 801761E8
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 801761EC
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 801761F0
  c->r[5]=c->r[4]+0x00000002u; // 801761F4
  c->r[0]=c->r[3]+0x000004ABu; // 801761F8
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 801761FC
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80176200
  goto L_80176284; // 80176204
L_80176208:;
  c->r[0]=0u+0x0000000Bu; // 80176208
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 8017620C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80176210
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 80176214
  c->r[5]=R32(c->r[13]+0xFFFFADECu); // 80176218
  c->r[4]=R16(c->r[13]+0xFFFFADDEu); // 8017621C
  c->r[5]=c->r[5]+0x00000002u; // 80176220
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 80176224
  W16(c->r[5]+0x00000000u,c->r[4]); // 80176228
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 8017622C
  c->r[4]=c->r[4]+0x00000002u; // 80176230
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 80176234
  W16(c->r[4]+0x00000000u,c->r[3]); // 80176238
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 8017623C
  c->r[3]=c->r[3]+0x00000002u; // 80176240
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176244
  W16(c->r[3]+0x00000000u,c->r[28]); // 80176248
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 8017624C
  c->r[3]=c->r[3]+0x00000002u; // 80176250
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176254
  W16(c->r[3]+0x00000000u,c->r[0]); // 80176258
  c->r[3]=R32(c->r[13]+0xFFFFADECu); // 8017625C
  c->r[3]=c->r[3]+0x00000002u; // 80176260
  W32(c->r[13]+0xFFFFADECu,c->r[3]); // 80176264
  W16(c->r[3]+0x00000000u,c->r[29]); // 80176268
  c->r[4]=R32(c->r[13]+0xFFFFADECu); // 8017626C
  c->r[3]=R32(c->r[13]+0xFFFFADE4u); // 80176270
  c->r[5]=c->r[4]+0x00000002u; // 80176274
  c->r[0]=c->r[3]+0x00000494u; // 80176278
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 8017627C
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 80176280
L_80176284:;
  c->r[0]=0u+0x0000000Eu; // 80176284
  c->r[3]=c->r[31]|c->r[31]; // 80176288
  W16(c->r[5]+0x00000000u,c->r[0]); // 8017628C
  c->r[4]=0u+0x00000080u; // 80176290
  c->r[5]=R32(c->r[13]+0xFFFFADECu); // 80176294
  c->r[6]=R32(c->r[13]+0xFFFFADE4u); // 80176298
  c->r[5]=c->r[5]+0x00000002u; // 8017629C
  c->r[0]=c->r[6]+0x0000001Eu; // 801762A0
  W32(c->r[13]+0xFFFFADECu,c->r[5]); // 801762A4
  W32(c->r[13]+0xFFFFADE4u,c->r[0]); // 801762A8
  c->lr=0x801762B0u; f_8014F83C(c); // 801762AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801762B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801762B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801762B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801762BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801762C0
  c->lr=c->r[0]; // 801762C4
  c->r[1]=c->r[1]+0x00000020u; // 801762C8
  return; // 801762CC
}

// __AXClInit
void f_801762D0(Ctx* __restrict c) {
  trace_call(0x801762D0u);
  c->r[4]=0u+0x80450000u; // 801762D0
  c->r[3]=0u+0x00010000u; // 801762D4
  c->r[0]=c->r[3]+0xFFFF8000u; // 801762D8
  c->r[5]=0u+0x00000000u; // 801762DC
  c->r[4]=c->r[4]+0xFFFF8180u; // 801762E0
  c->r[3]=0u+0x00000001u; // 801762E4
  W32(c->r[13]+0xFFFFADE8u,c->r[5]); // 801762E8
  W32(c->r[13]+0xFFFFADF0u,c->r[5]); // 801762EC
  W32(c->r[13]+0xFFFFADECu,c->r[4]); // 801762F0
  W32(c->r[13]+0xFFFFADE0u,c->r[3]); // 801762F4
  W16(c->r[13]+0xFFFFADDEu,c->r[0]); // 801762F8
  W16(c->r[13]+0xFFFFADDCu,c->r[0]); // 801762FC
  W16(c->r[13]+0xFFFFADDAu,c->r[0]); // 80176300
  W16(c->r[13]+0xFFFFADD8u,c->r[0]); // 80176304
  return; // 80176308
}

// fn_8017630C
void f_8017630C(Ctx* __restrict c) {
  return; // 8017630C
}

// fn_80176310
void f_80176310(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFFADE8u,c->r[3]); // 80176310
  return; // 80176314
}

// AXGetMode
void f_80176318(Ctx* __restrict c) {
  trace_call(0x80176318u);
  c->r[3]=R16(c->r[13]+0xFFFFADDCu); // 80176318
  return; // 8017631C
}

// AXSetCompressor
void f_80176320(Ctx* __restrict c) {
  trace_call(0x80176320u);
  c->r[3]=R16(c->r[13]+0xFFFFADDAu); // 80176320
  return; // 80176324
}

// AXGetAuxAReturnVolume
void f_80176328(Ctx* __restrict c) {
  trace_call(0x80176328u);
  c->r[3]=R16(c->r[13]+0xFFFFADD8u); // 80176328
  return; // 8017632C
}

// fn_80176330
void f_80176330(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],0x00008000u); // 80176330
  if (!crb(c,1)) { goto L_80176340; } // 80176334
  c->r[3]=0u+0x00010000u; // 80176338
  c->r[3]=c->r[3]+0xFFFF8000u; // 8017633C
L_80176340:;
  W16(c->r[13]+0xFFFFADDEu,c->r[3]); // 80176340
  return; // 80176344
}

// fn_80176348
void f_80176348(Ctx* __restrict c) {
  W16(c->r[13]+0xFFFFADDCu,c->r[3]); // 80176348
  return; // 8017634C
}

// fn_80176350
void f_80176350(Ctx* __restrict c) {
  W16(c->r[13]+0xFFFFADDAu,c->r[3]); // 80176350
  return; // 80176354
}

// fn_80176358
void f_80176358(Ctx* __restrict c) {
  W16(c->r[13]+0xFFFFADD8u,c->r[3]); // 80176358
  return; // 8017635C
}

// fn_80176360
void f_80176360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176360
  c->r[0]=c->lr; // 80176364
  W32(c->r[1]+0x00000034u,c->r[0]); // 80176368
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8017636C
  c->r[31]=0u+0x80450000u; // 80176370
  c->r[31]=c->r[31]+0xFFFF8280u; // 80176374
  W32(c->r[1]+0x00000028u,c->r[30]); // 80176378
  W32(c->r[1]+0x00000024u,c->r[29]); // 8017637C
  c->lr=0x80176384u; f_8015848C(c); // 80176380
  c->r[5]=c->r[31]+0x00000000u; // 80176384
  W32(c->r[31]+0x00000000u,c->r[3]); // 80176388
  W32(c->r[5]+0x00000004u,c->r[4]); // 8017638C
  c->lr=0x80176394u; f_80174604(c); // 80176390
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 80176394
  c->r[0]=R32(c->r[13]+0xFFFFAE08u); // 80176398
  c->r[3]=addc(c,~c->r[3],0x00000060u,1); // 8017639C
  cmpu(c,0,c->r[0],0x00000001u); // 801763A0
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)3797); // 801763A4
  if (!crb(c,2)) { goto L_801763B8; } // 801763A8
  c->r[3]=0u+0x00000000u; // 801763AC
  c->lr=0x801763B4u; f_8017753C(c); // 801763B0
  goto L_801763C0; // 801763B4
L_801763B8:;
  c->r[3]=0u+0x00005F50u; // 801763B8
  c->lr=0x801763C0u; f_8017753C(c); // 801763BC
L_801763C0:;
  c->lr=0x801763C4u; f_80176CA4(c); // 801763C0
  c->lr=0x801763C8u; f_801758E0(c); // 801763C4
  c->r[4]=0u+0xBABE0000u; // 801763C8
  c->r[29]=c->r[3]|c->r[3]; // 801763CC
  c->r[3]=c->r[4]+0x00000080u; // 801763D0
  c->lr=0x801763D8u; f_8017D2E0(c); // 801763D4
L_801763D8:;
  c->lr=0x801763DCu; f_8017D2AC(c); // 801763D8
  cmps(c,0,(int32_t)c->r[3],0); // 801763DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801763D8; } // 801763E0
  c->r[3]=c->r[29]|c->r[29]; // 801763E4
  c->lr=0x801763ECu; f_8017D2E0(c); // 801763E8
L_801763EC:;
  c->lr=0x801763F0u; f_8017D2AC(c); // 801763EC
  cmps(c,0,(int32_t)c->r[3],0); // 801763F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801763EC; } // 801763F4
  c->lr=0x801763FCu; f_80174B58(c); // 801763F8
  c->lr=0x80176400u; f_8015848C(c); // 801763FC
  c->r[29]=c->r[31]+0x00000000u; // 80176400
  W32(c->r[29]+0x0000000Cu,c->r[4]); // 80176404
  W32(c->r[29]+0x00000008u,c->r[3]); // 80176408
  c->lr=0x80176410u; f_801753C4(c); // 8017640C
  c->lr=0x80176414u; f_8015848C(c); // 80176410
  W32(c->r[29]+0x00000014u,c->r[4]); // 80176414
  W32(c->r[29]+0x00000010u,c->r[3]); // 80176418
  c->lr=0x80176420u; f_8015848C(c); // 8017641C
  c->r[12]=R32(c->r[13]+0xFFFFAE24u); // 80176420
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 80176424
  cmps(c,0,(int32_t)c->r[12],0); // 80176428
  W32(c->r[29]+0x00000018u,c->r[3]); // 8017642C
  if (crb(c,2)) { goto L_8017643C; } // 80176430
  c->ctr=c->r[12]; // 80176434
  if (true) { c->lr=0x8017643Cu; dispatch(c,c->ctr); } // 80176438
L_8017643C:;
  c->lr=0x80176440u; f_8015848C(c); // 8017643C
  c->r[7]=R32(c->r[13]+0xFFFFAE00u); // 80176440
  c->r[8]=c->r[31]+0x00000000u; // 80176444
  c->r[5]=c->r[31]+0x00000040u; // 80176448
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 8017644C
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80176450
  c->r[7]=c->r[7]+0x00000012u; // 80176454
  c->r[6]=c->r[5]+c->r[6]; // 80176458
  W32(c->r[8]+0x00000024u,c->r[4]); // 8017645C
  c->r[5]=c->r[6]+0x00000168u; // 80176460
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80176464
  c->r[4]=c->r[6]+0x000002D0u; // 80176468
  c->r[0]=c->r[6]+0x00000438u; // 8017646C
  W32(c->r[8]+0x00000020u,c->r[3]); // 80176470
  W32(c->r[1]+0x00000008u,c->r[6]); // 80176474
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80176478
  W32(c->r[1]+0x00000010u,c->r[4]); // 8017647C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176480
  if (crb(c,0)) { goto L_8017648C; } // 80176484
  c->r[7]=0u+0x00000000u; // 80176488
L_8017648C:;
  c->r[4]=R32(c->r[13]+0xFFFFADFCu); // 8017648C
  c->r[3]=R32(c->r[13]+0xFFFFAE00u); // 80176490
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 80176494
  if (crb(c,0)) { goto L_801764AC; } // 80176498
  c->r[0]=c->r[3]+0x00000012u; // 8017649C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801764A0
  if (!crb(c,0)) { goto L_801764AC; } // 801764A4
  W32(c->r[13]+0xFFFFADFCu,c->r[7]); // 801764A8
L_801764AC:;
  c->r[0]=R32(c->r[13]+0xFFFFAE30u); // 801764AC
  c->r[29]=c->r[31]+0x000008E0u; // 801764B0
  W32(c->r[13]+0xFFFFAE00u,c->r[7]); // 801764B4
  c->r[3]=c->r[31]+0x000005E0u; // 801764B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801764BC
  c->r[5]=c->r[1]+0x00000008u; // 801764C0
  c->r[4]=c->r[29]+c->r[0]; // 801764C4
  c->lr=0x801764CCu; f_80175910(c); // 801764C8
  c->r[3]=R32(c->r[13]+0xFFFFAE30u); // 801764CC
  c->r[0]=R32(c->r[13]+0xFFFFAE08u); // 801764D0
  c->r[3]=c->r[3]+0x00000001u; // 801764D4
  cmpu(c,0,c->r[0],0x00000001u); // 801764D8
  W32(c->r[13]+0xFFFFAE30u,c->r[3]); // 801764DC
  if (!crb(c,2)) { goto L_80176508; } // 801764E0
  c->r[3]=0u+0xAAAB0000u; // 801764E4
  c->r[4]=R32(c->r[13]+0xFFFFAE30u); // 801764E8
  c->r[0]=c->r[3]+0xFFFFAAABu; // 801764EC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[4])>>32); // 801764F0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801764F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801764F8
  c->r[0]=c->r[4]-c->r[0]; // 801764FC
  W32(c->r[13]+0xFFFFAE30u,c->r[0]); // 80176500
  goto L_80176528; // 80176504
L_80176508:;
  c->r[0]=R32(c->r[13]+0xFFFFAE30u); // 80176508
  c->r[4]=0u+0x00000180u; // 8017650C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80176510
  W32(c->r[13]+0xFFFFAE30u,c->r[0]); // 80176514
  c->r[0]=R32(c->r[13]+0xFFFFAE30u); // 80176518
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 8017651C
  c->r[3]=c->r[29]+c->r[0]; // 80176520
  c->lr=0x80176528u; f_80174560(c); // 80176524
L_80176528:;
  c->lr=0x8017652Cu; f_8015848C(c); // 80176528
  c->r[29]=c->r[31]+0x00000000u; // 8017652C
  W32(c->r[29]+0x0000002Cu,c->r[4]); // 80176530
  W32(c->r[29]+0x00000028u,c->r[3]); // 80176534
  c->lr=0x8017653Cu; f_80176FE4(c); // 80176538
  W32(c->r[29]+0x00000030u,c->r[3]); // 8017653C
  c->lr=0x80176544u; f_80177D90(c); // 80176540
  cmps(c,0,(int32_t)c->r[3],0); // 80176544
  if (crb(c,2)) { goto L_801765A0; } // 80176548
  c->r[0]=0u+0x00000007u; // 8017654C
  c->ctr=c->r[0]; // 80176550
L_80176554:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 80176554
  W8(c->r[3]+0x00000000u,c->r[0]); // 80176558
  c->r[0]=R8(c->r[29]+0x00000001u); // 8017655C
  W8(c->r[3]+0x00000001u,c->r[0]); // 80176560
  c->r[0]=R8(c->r[29]+0x00000002u); // 80176564
  W8(c->r[3]+0x00000002u,c->r[0]); // 80176568
  c->r[0]=R8(c->r[29]+0x00000003u); // 8017656C
  W8(c->r[3]+0x00000003u,c->r[0]); // 80176570
  c->r[0]=R8(c->r[29]+0x00000004u); // 80176574
  W8(c->r[3]+0x00000004u,c->r[0]); // 80176578
  c->r[0]=R8(c->r[29]+0x00000005u); // 8017657C
  W8(c->r[3]+0x00000005u,c->r[0]); // 80176580
  c->r[0]=R8(c->r[29]+0x00000006u); // 80176584
  W8(c->r[3]+0x00000006u,c->r[0]); // 80176588
  c->r[0]=R8(c->r[29]+0x00000007u); // 8017658C
  c->r[29]=c->r[29]+0x00000008u; // 80176590
  W8(c->r[3]+0x00000007u,c->r[0]); // 80176594
  c->r[3]=c->r[3]+0x00000008u; // 80176598
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80176554; } // 8017659C
L_801765A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801765A0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801765A4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801765A8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801765AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801765B0
  c->lr=c->r[0]; // 801765B4
  c->r[1]=c->r[1]+0x00000030u; // 801765B8
  return; // 801765BC
}

// __AXOutAiCallback
void f_801765C0(Ctx* __restrict c) {
  trace_call(0x801765C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801765C0
  c->r[0]=c->lr; // 801765C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801765C8
  c->r[0]=R32(c->r[13]+0xFFFFAE1Cu); // 801765CC
  cmps(c,0,(int32_t)c->r[0],1); // 801765D0
  if (crb(c,2)) { goto L_80176660; } // 801765D4
  c->r[0]=R32(c->r[13]+0xFFFFAE28u); // 801765D8
  cmpu(c,0,c->r[0],0x00000001u); // 801765DC
  if (!crb(c,2)) { goto L_801765F4; } // 801765E0
  c->r[0]=0u+0x00000000u; // 801765E4
  W32(c->r[13]+0xFFFFAE28u,c->r[0]); // 801765E8
  c->lr=0x801765F0u; f_80176360(c); // 801765EC
  goto L_80176608; // 801765F0
L_801765F4:;
  c->r[0]=0u+0x00000002u; // 801765F4
  c->r[3]=0u+0x80450000u; // 801765F8
  W32(c->r[13]+0xFFFFAE28u,c->r[0]); // 801765FC
  c->r[3]=c->r[3]+0xFFFF8FE0u; // 80176600
  c->lr=0x80176608u; f_8017D46C(c); // 80176604
L_80176608:;
  c->r[0]=R32(c->r[13]+0xFFFFAE08u); // 80176608
  cmpu(c,0,c->r[0],0x00000001u); // 8017660C
  if (!crb(c,2)) { goto L_80176660; } // 80176610
  c->r[0]=R32(c->r[13]+0xFFFFAE2Cu); // 80176614
  c->r[3]=0u+0x80450000u; // 80176618
  c->r[3]=c->r[3]+0xFFFF8B60u; // 8017661C
  c->r[4]=0u+0x00000180u; // 80176620
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 80176624
  c->r[3]=c->r[3]+c->r[0]; // 80176628
  c->lr=0x80176630u; f_80174560(c); // 8017662C
  c->r[4]=R32(c->r[13]+0xFFFFAE2Cu); // 80176630
  c->r[3]=0u+0xAAAB0000u; // 80176634
  c->r[3]=c->r[3]+0xFFFFAAABu; // 80176638
  c->r[0]=R32(c->r[13]+0xFFFFAE30u); // 8017663C
  c->r[4]=c->r[4]+0x00000001u; // 80176640
  c->r[3]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 80176644
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 80176648
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)3); // 8017664C
  c->r[4]=c->r[4]-c->r[3]; // 80176650
  cmpu(c,0,c->r[4],c->r[0]); // 80176654
  if (crb(c,2)) { goto L_80176660; } // 80176658
  W32(c->r[13]+0xFFFFAE2Cu,c->r[4]); // 8017665C
L_80176660:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176660
  c->lr=c->r[0]; // 80176664
  c->r[1]=c->r[1]+0x00000010u; // 80176668
  return; // 8017666C
}

// __AXDSPInitCallback
void f_80176670(Ctx* __restrict c) {
  trace_call(0x80176670u);
  c->r[0]=0u+0x00000001u; // 80176670
  W32(c->r[13]+0xFFFFAE20u,c->r[0]); // 80176674
  return; // 80176678
}

// __AXDSPResumeCallback
void f_8017667C(Ctx* __restrict c) {
  trace_call(0x8017667Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017667C
  c->r[0]=c->lr; // 80176680
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176684
  c->r[0]=R32(c->r[13]+0xFFFFAE28u); // 80176688
  cmpu(c,0,c->r[0],0x00000002u); // 8017668C
  if (!crb(c,2)) { goto L_801766B8; } // 80176690
  c->r[0]=0u+0x00000000u; // 80176694
  W32(c->r[13]+0xFFFFAE28u,c->r[0]); // 80176698
  c->lr=0x801766A0u; f_80176360(c); // 8017669C
  c->r[12]=R32(c->r[13]+0xFFFFADF8u); // 801766A0
  cmps(c,0,(int32_t)c->r[12],0); // 801766A4
  if (crb(c,2)) { goto L_801766C0; } // 801766A8
  c->ctr=c->r[12]; // 801766AC
  if (true) { c->lr=0x801766B4u; dispatch(c,c->ctr); } // 801766B0
  goto L_801766C0; // 801766B4
L_801766B8:;
  c->r[0]=0u+0x00000001u; // 801766B8
  W32(c->r[13]+0xFFFFAE28u,c->r[0]); // 801766BC
L_801766C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801766C0
  c->lr=c->r[0]; // 801766C4
  c->r[1]=c->r[1]+0x00000010u; // 801766C8
  return; // 801766CC
}

// __AXDSPDoneCallback
void f_801766D0(Ctx* __restrict c) {
  trace_call(0x801766D0u);
  c->r[0]=0u+0x00000001u; // 801766D0
  c->r[3]=c->r[13]+0xFFFFAE10u; // 801766D4
  W32(c->r[13]+0xFFFFAE1Cu,c->r[0]); // 801766D8
  f_801582C0(c); return; // 801766DC
}

// __AXDSPRequestCallback
void f_801766E0(Ctx* __restrict c) {
  trace_call(0x801766E0u);
  return; // 801766E0
}

// __AXOutInitDSP
void f_801766E4(Ctx* __restrict c) {
  stub_log(0x801766E4u);  return;
}

// __AXOutInit
void f_801767D4(Ctx* __restrict c) {
  trace_call(0x801767D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801767D4
  c->r[0]=c->lr; // 801767D8
  c->r[4]=0u+0x00000000u; // 801767DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801767E0
  c->r[0]=0u+0x00000020u; // 801767E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801767E8
  c->r[31]=0u+0x80450000u; // 801767EC
  c->r[31]=c->r[31]+0xFFFF8280u; // 801767F0
  W32(c->r[13]+0xFFFFAE30u,c->r[4]); // 801767F4
  c->r[5]=c->r[31]+0x000008E0u; // 801767F8
  W32(c->r[13]+0xFFFFAE2Cu,c->r[4]); // 801767FC
  W32(c->r[13]+0xFFFFAE08u,c->r[3]); // 80176800
  W32(c->r[13]+0xFFFFAE18u,c->r[4]); // 80176804
  c->ctr=c->r[0]; // 80176808
L_8017680C:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 8017680C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80176810
  W32(c->r[5]+0x00000008u,c->r[4]); // 80176814
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 80176818
  W32(c->r[5]+0x00000010u,c->r[4]); // 8017681C
  W32(c->r[5]+0x00000014u,c->r[4]); // 80176820
  W32(c->r[5]+0x00000018u,c->r[4]); // 80176824
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 80176828
  W32(c->r[5]+0x00000020u,c->r[4]); // 8017682C
  c->r[5]=c->r[5]+0x00000024u; // 80176830
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017680C; } // 80176834
  c->r[3]=c->r[31]+0x000008E0u; // 80176838
  c->r[4]=0u+0x00000480u; // 8017683C
  c->lr=0x80176844u; f_8014F83C(c); // 80176840
  c->r[0]=0u+0x00000018u; // 80176844
  c->r[4]=c->r[31]+0x000005E0u; // 80176848
  c->r[3]=0u+0x00000000u; // 8017684C
  c->ctr=c->r[0]; // 80176850
L_80176854:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80176854
  W32(c->r[4]+0x00000004u,c->r[3]); // 80176858
  W32(c->r[4]+0x00000008u,c->r[3]); // 8017685C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 80176860
  W32(c->r[4]+0x00000010u,c->r[3]); // 80176864
  W32(c->r[4]+0x00000014u,c->r[3]); // 80176868
  W32(c->r[4]+0x00000018u,c->r[3]); // 8017686C
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 80176870
  c->r[4]=c->r[4]+0x00000020u; // 80176874
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80176854; } // 80176878
  c->r[3]=c->r[31]+0x000005E0u; // 8017687C
  c->r[4]=0u+0x00000300u; // 80176880
  c->lr=0x80176888u; f_8014F83C(c); // 80176884
  c->r[0]=0u+0x00000024u; // 80176888
  c->r[4]=c->r[31]+0x00000040u; // 8017688C
  c->r[3]=0u+0x00000000u; // 80176890
  c->ctr=c->r[0]; // 80176894
L_80176898:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80176898
  W32(c->r[4]+0x00000004u,c->r[3]); // 8017689C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801768A0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801768A4
  W32(c->r[4]+0x00000010u,c->r[3]); // 801768A8
  W32(c->r[4]+0x00000014u,c->r[3]); // 801768AC
  W32(c->r[4]+0x00000018u,c->r[3]); // 801768B0
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801768B4
  W32(c->r[4]+0x00000020u,c->r[3]); // 801768B8
  W32(c->r[4]+0x00000024u,c->r[3]); // 801768BC
  c->r[4]=c->r[4]+0x00000028u; // 801768C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80176898; } // 801768C4
  c->r[3]=c->r[31]+0x00000040u; // 801768C8
  c->r[4]=0u+0x000005A0u; // 801768CC
  c->lr=0x801768D4u; f_8014F83C(c); // 801768D0
  c->lr=0x801768D8u; f_801766E4(c); // 801768D4
  c->r[3]=0u+0x80170000u; // 801768D8
  c->r[3]=c->r[3]+0x000065C0u; // 801768DC
  c->lr=0x801768E4u; f_8017451C(c); // 801768E0
  c->r[0]=R32(c->r[13]+0xFFFFAE08u); // 801768E4
  c->r[8]=c->r[31]+0x00000040u; // 801768E8
  c->r[4]=0u+0x00000012u; // 801768EC
  c->r[3]=0u+0x000000B4u; // 801768F0
  c->r[7]=c->r[8]+0x00000168u; // 801768F4
  c->r[6]=c->r[8]+0x000002D0u; // 801768F8
  c->r[5]=c->r[8]+0x00000438u; // 801768FC
  cmpu(c,0,c->r[0],0x00000001u); // 80176900
  W32(c->r[1]+0x00000008u,c->r[8]); // 80176904
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 80176908
  W32(c->r[1]+0x00000010u,c->r[6]); // 8017690C
  W32(c->r[1]+0x00000014u,c->r[5]); // 80176910
  W32(c->r[13]+0xFFFFADFCu,c->r[4]); // 80176914
  W32(c->r[13]+0xFFFFAE00u,c->r[4]); // 80176918
  W32(c->r[13]+0xFFFFAE04u,c->r[3]); // 8017691C
  if (!crb(c,2)) { goto L_8017693C; } // 80176920
  c->r[4]=c->r[31]+0x000008E0u; // 80176924
  c->r[3]=c->r[31]+0x000005E0u; // 80176928
  c->r[4]=c->r[4]+0x00000300u; // 8017692C
  c->r[5]=c->r[1]+0x00000008u; // 80176930
  c->lr=0x80176938u; f_80175910(c); // 80176934
  goto L_80176950; // 80176938
L_8017693C:;
  c->r[4]=c->r[31]+0x000008E0u; // 8017693C
  c->r[3]=c->r[31]+0x000005E0u; // 80176940
  c->r[4]=c->r[4]+0x00000180u; // 80176944
  c->r[5]=c->r[1]+0x00000008u; // 80176948
  c->lr=0x80176950u; f_80175910(c); // 8017694C
L_80176950:;
  c->r[0]=R32(c->r[13]+0xFFFFAE08u); // 80176950
  c->r[4]=0u+0x00000001u; // 80176954
  c->r[3]=0u+0x00000000u; // 80176958
  W32(c->r[13]+0xFFFFAE28u,c->r[4]); // 8017695C
  cmpu(c,0,c->r[0],0x00000001u); // 80176960
  W32(c->r[13]+0xFFFFAE24u,c->r[3]); // 80176964
  if (!crb(c,2)) { goto L_80176994; } // 80176968
  c->r[3]=R32(c->r[13]+0xFFFFAE2Cu); // 8017696C
  c->r[0]=c->r[31]+0x000008E0u; // 80176970
  c->r[4]=0u+0x00000180u; // 80176974
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 80176978
  c->r[3]=c->r[0]+c->r[3]; // 8017697C
  c->lr=0x80176984u; f_80174560(c); // 80176980
  c->r[3]=R32(c->r[13]+0xFFFFAE2Cu); // 80176984
  c->r[0]=c->r[3]+0x00000001u; // 80176988
  W32(c->r[13]+0xFFFFAE2Cu,c->r[0]); // 8017698C
  goto L_801769AC; // 80176990
L_80176994:;
  c->r[3]=R32(c->r[13]+0xFFFFAE30u); // 80176994
  c->r[0]=c->r[31]+0x000008E0u; // 80176998
  c->r[4]=0u+0x00000180u; // 8017699C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 801769A0
  c->r[3]=c->r[0]+c->r[3]; // 801769A4
  c->lr=0x801769ACu; f_80174560(c); // 801769A8
L_801769AC:;
  c->lr=0x801769B0u; f_801745DC(c); // 801769AC
  c->r[0]=0u+0x00000000u; // 801769B0
  W32(c->r[13]+0xFFFFADF8u,c->r[0]); // 801769B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801769B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801769BC
  c->lr=c->r[0]; // 801769C0
  c->r[1]=c->r[1]+0x00000020u; // 801769C4
  return; // 801769C8
}

// __AXOutQuit
void f_801769CC(Ctx* __restrict c) {
  trace_call(0x801769CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801769CC
  c->r[0]=c->lr; // 801769D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801769D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801769D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801769DC
  c->lr=0x801769E4u; f_80154410(c); // 801769E0
  c->r[31]=0u+0x00000000u; // 801769E4
  c->r[4]=0u+0x80450000u; // 801769E8
  W32(c->r[13]+0xFFFFAE24u,c->r[31]); // 801769EC
  c->r[30]=c->r[3]|c->r[3]; // 801769F0
  c->r[3]=c->r[4]+0xFFFF8FE0u; // 801769F4
  c->lr=0x801769FCu; f_8017D42C(c); // 801769F8
  c->r[3]=c->r[13]+0xFFFFAE10u; // 801769FC
  c->lr=0x80176A04u; f_801581D4(c); // 80176A00
  c->r[3]=0u+0x00000000u; // 80176A04
  c->lr=0x80176A0Cu; f_8017451C(c); // 80176A08
  c->lr=0x80176A10u; f_801745F0(c); // 80176A0C
  W32(c->r[13]+0xFFFFADF8u,c->r[31]); // 80176A10
  c->r[3]=c->r[30]|c->r[30]; // 80176A14
  c->lr=0x80176A1Cu; f_80154438(c); // 80176A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176A1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176A20
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176A24
  c->lr=c->r[0]; // 80176A28
  c->r[1]=c->r[1]+0x00000010u; // 80176A2C
  return; // 80176A30
}

// AXRegisterCallback
void f_80176A34(Ctx* __restrict c) {
  trace_call(0x80176A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176A34
  c->r[0]=c->lr; // 80176A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176A3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176A40
  W32(c->r[1]+0x00000008u,c->r[30]); // 80176A44
  c->r[30]=c->r[3]|c->r[3]; // 80176A48
  c->r[31]=R32(c->r[13]+0xFFFFAE24u); // 80176A4C
  c->lr=0x80176A54u; f_80154410(c); // 80176A50
  W32(c->r[13]+0xFFFFAE24u,c->r[30]); // 80176A54
  c->lr=0x80176A5Cu; f_80154438(c); // 80176A58
  c->r[3]=c->r[31]|c->r[31]; // 80176A5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176A60
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176A64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176A68
  c->lr=c->r[0]; // 80176A6C
  c->r[1]=c->r[1]+0x00000010u; // 80176A70
  return; // 80176A74
}

// AXRmtGetSamplesLeft
void f_80176A78(Ctx* __restrict c) {
  trace_call(0x80176A78u);
  c->r[3]=R32(c->r[13]+0xFFFFAE00u); // 80176A78
  c->r[3]=addc(c,c->r[3],0xFFFFFFDCu,0); cr0(c,c->r[3]); // 80176A7C
  if (!crb(c,0)) { goto L_80176A8C; } // 80176A80
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 80176A84
  c->r[3]=c->r[3]+c->r[0]; // 80176A88
L_80176A8C:;
  c->r[0]=R32(c->r[13]+0xFFFFADFCu); // 80176A8C
  c->r[3]=c->r[3]-c->r[0]; cr0(c,c->r[3]); // 80176A90
  if (!crb(c,0)) return; // 80176A94
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 80176A98
  c->r[3]=c->r[3]+c->r[0]; // 80176A9C
  return; // 80176AA0
}

// AXRmtGetSamples
void f_80176AA4(Ctx* __restrict c) {
  trace_call(0x80176AA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176AA4
  c->r[0]=c->lr; // 80176AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176AAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176AB0
  c->r[6]=R32(c->r[13]+0xFFFFAE00u); // 80176AB4
  c->r[31]=addc(c,c->r[6],0xFFFFFFDCu,0); cr0(c,c->r[31]); // 80176AB8
  if (!crb(c,0)) { goto L_80176AC8; } // 80176ABC
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 80176AC0
  c->r[31]=c->r[31]+c->r[0]; // 80176AC4
L_80176AC8:;
  c->r[0]=R32(c->r[13]+0xFFFFADFCu); // 80176AC8
  c->r[31]=c->r[31]-c->r[0]; cr0(c,c->r[31]); // 80176ACC
  if (!crb(c,0)) { goto L_80176ADC; } // 80176AD0
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 80176AD4
  c->r[31]=c->r[31]+c->r[0]; // 80176AD8
L_80176ADC:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 80176ADC
  if (!crb(c,1)) { goto L_80176AE8; } // 80176AE0
  goto L_80176AEC; // 80176AE4
L_80176AE8:;
  c->r[31]=c->r[5]|c->r[5]; // 80176AE8
L_80176AEC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 80176AEC
  c->r[5]=0u+0x80450000u; // 80176AF0
  c->r[7]=R32(c->r[13]+0xFFFFADFCu); // 80176AF4
  c->r[5]=c->r[5]+0xFFFF82C0u; // 80176AF8
  c->r[5]=c->r[5]+c->r[0]; // 80176AFC
  c->ctr=c->r[31]; // 80176B00
  cmps(c,0,(int32_t)c->r[31],0); // 80176B04
  if (!crb(c,1)) { goto L_80176B34; } // 80176B08
L_80176B0C:;
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 80176B0C
  c->r[7]=c->r[7]+0x00000001u; // 80176B10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+c->r[5]); // 80176B14
  W16(c->r[4]+0x00000000u,c->r[0]); // 80176B18
  c->r[4]=c->r[4]+0x00000002u; // 80176B1C
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 80176B20
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80176B24
  if (crb(c,0)) { goto L_80176B30; } // 80176B28
  c->r[7]=0u+0x00000000u; // 80176B2C
L_80176B30:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80176B0C; } // 80176B30
L_80176B34:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 80176B34
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 80176B38
  c->r[3]=0u+0x80450000u; // 80176B3C
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80176B40
  c->r[3]=c->r[3]+0xFFFF82C0u; // 80176B44
  c->r[3]=c->r[3]+c->r[5]; // 80176B48
  c->lr=0x80176B50u; f_8014F810(c); // 80176B4C
  c->r[3]=c->r[31]|c->r[31]; // 80176B50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176B54
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176B58
  c->lr=c->r[0]; // 80176B5C
  c->r[1]=c->r[1]+0x00000010u; // 80176B60
  return; // 80176B64
}

// AXRmtAdvancePtr
void f_80176B68(Ctx* __restrict c) {
  trace_call(0x80176B68u);
  c->r[4]=R32(c->r[13]+0xFFFFAE00u); // 80176B68
  c->r[4]=addc(c,c->r[4],0xFFFFFFDCu,0); cr0(c,c->r[4]); // 80176B6C
  if (!crb(c,0)) { goto L_80176B7C; } // 80176B70
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 80176B74
  c->r[4]=c->r[4]+c->r[0]; // 80176B78
L_80176B7C:;
  c->r[0]=R32(c->r[13]+0xFFFFADFCu); // 80176B7C
  c->r[4]=c->r[4]-c->r[0]; cr0(c,c->r[4]); // 80176B80
  if (!crb(c,0)) { goto L_80176B90; } // 80176B84
  c->r[0]=R32(c->r[13]+0xFFFFAE04u); // 80176B88
  c->r[4]=c->r[4]+c->r[0]; // 80176B8C
L_80176B90:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 80176B90
  if (!crb(c,1)) { goto L_80176B9C; } // 80176B94
  c->r[3]=c->r[4]|c->r[4]; // 80176B98
L_80176B9C:;
  c->r[0]=R32(c->r[13]+0xFFFFADFCu); // 80176B9C
  c->r[4]=R32(c->r[13]+0xFFFFAE04u); // 80176BA0
  c->r[0]=c->r[0]+c->r[3]; // 80176BA4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80176BA8
  W32(c->r[13]+0xFFFFADFCu,c->r[0]); // 80176BAC
  if (crb(c,0)) return; // 80176BB0
  c->r[0]=c->r[0]-c->r[4]; // 80176BB4
  W32(c->r[13]+0xFFFFADFCu,c->r[0]); // 80176BB8
  return; // 80176BBC
}

// __AXGetStudio
void f_80176BC0(Ctx* __restrict c) {
  trace_call(0x80176BC0u);
  c->r[3]=0u+0x80450000u; // 80176BC0
  c->r[3]=c->r[3]+0xFFFF9080u; // 80176BC4
  return; // 80176BC8
}

// __AXDepopFadeMain
void f_80176BCC(Ctx* __restrict c) {
  trace_call(0x80176BCCu);
  c->r[6]=0u+0x2AAB0000u; // 80176BCC
  c->r[7]=R32(c->r[3]+0x00000000u); // 80176BD0
  c->r[0]=c->r[6]+0xFFFFAAABu; // 80176BD4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 80176BD8
  c->r[0]=sraw(c,c->r[0],4); // 80176BDC
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 80176BE0
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 80176BE4
  if (crb(c,2)) { goto L_80176C24; } // 80176BE8
  cmps(c,0,(int32_t)c->r[0],20); // 80176BEC
  if (!crb(c,1)) { goto L_80176BF8; } // 80176BF0
  c->r[0]=0u+0x00000014u; // 80176BF4
L_80176BF8:;
  cmps(c,0,(int32_t)c->r[0],-20); // 80176BF8
  if (!crb(c,0)) { goto L_80176C04; } // 80176BFC
  c->r[0]=0u+0xFFFFFFECu; // 80176C00
L_80176C04:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 80176C04
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 80176C08
  c->r[0]=0u-c->r[0]; // 80176C0C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80176C10
  c->r[4]=c->r[4]-c->r[6]; // 80176C14
  W32(c->r[3]+0x00000000u,c->r[4]); // 80176C18
  W16(c->r[5]+0x00000000u,c->r[0]); // 80176C1C
  return; // 80176C20
L_80176C24:;
  c->r[0]=0u+0x00000000u; // 80176C24
  W32(c->r[3]+0x00000000u,c->r[0]); // 80176C28
  W32(c->r[4]+0x00000000u,c->r[0]); // 80176C2C
  W16(c->r[5]+0x00000000u,c->r[0]); // 80176C30
  return; // 80176C34
}

// __AXDepopFadeRmt
void f_80176C38(Ctx* __restrict c) {
  trace_call(0x80176C38u);
  c->r[6]=0u+0x38E40000u; // 80176C38
  c->r[7]=R32(c->r[3]+0x00000000u); // 80176C3C
  c->r[0]=c->r[6]+0xFFFF8E39u; // 80176C40
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 80176C44
  c->r[0]=sraw(c,c->r[0],2); // 80176C48
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 80176C4C
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 80176C50
  if (crb(c,2)) { goto L_80176C90; } // 80176C54
  cmps(c,0,(int32_t)c->r[0],20); // 80176C58
  if (!crb(c,1)) { goto L_80176C64; } // 80176C5C
  c->r[0]=0u+0x00000014u; // 80176C60
L_80176C64:;
  cmps(c,0,(int32_t)c->r[0],-20); // 80176C64
  if (!crb(c,0)) { goto L_80176C70; } // 80176C68
  c->r[0]=0u+0xFFFFFFECu; // 80176C6C
L_80176C70:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 80176C70
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 80176C74
  c->r[0]=0u-c->r[0]; // 80176C78
  c->r[4]=R32(c->r[3]+0x00000000u); // 80176C7C
  c->r[4]=c->r[4]-c->r[6]; // 80176C80
  W32(c->r[3]+0x00000000u,c->r[4]); // 80176C84
  W16(c->r[5]+0x00000000u,c->r[0]); // 80176C88
  return; // 80176C8C
L_80176C90:;
  c->r[0]=0u+0x00000000u; // 80176C90
  W32(c->r[3]+0x00000000u,c->r[0]); // 80176C94
  W32(c->r[4]+0x00000000u,c->r[0]); // 80176C98
  W16(c->r[5]+0x00000000u,c->r[0]); // 80176C9C
  return; // 80176CA0
}

// __AXPrintStudio
void f_80176CA4(Ctx* __restrict c) {
  trace_call(0x80176CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176CA4
  c->r[0]=c->lr; // 80176CA8
  c->r[3]=c->r[13]+0xFFFFAE84u; // 80176CAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176CB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176CB4
  c->r[31]=0u+0x80450000u; // 80176CB8
  c->r[4]=c->r[31]+0xFFFF9080u; // 80176CBC
  c->r[5]=c->r[4]+0x00000004u; // 80176CC0
  c->lr=0x80176CC8u; f_80176BCC(c); // 80176CC4
  c->r[31]=c->r[31]+0xFFFF9080u; // 80176CC8
  c->r[3]=c->r[13]+0xFFFFAE80u; // 80176CCC
  c->r[4]=c->r[31]+0x00000006u; // 80176CD0
  c->r[5]=c->r[31]+0x0000000Au; // 80176CD4
  c->lr=0x80176CDCu; f_80176BCC(c); // 80176CD8
  c->r[4]=c->r[31]+0x0000000Cu; // 80176CDC
  c->r[5]=c->r[31]+0x00000010u; // 80176CE0
  c->r[3]=c->r[13]+0xFFFFAE7Cu; // 80176CE4
  c->lr=0x80176CECu; f_80176BCC(c); // 80176CE8
  c->r[4]=c->r[31]+0x00000012u; // 80176CEC
  c->r[5]=c->r[31]+0x00000016u; // 80176CF0
  c->r[3]=c->r[13]+0xFFFFAE78u; // 80176CF4
  c->lr=0x80176CFCu; f_80176BCC(c); // 80176CF8
  c->r[4]=c->r[31]+0x00000018u; // 80176CFC
  c->r[5]=c->r[31]+0x0000001Cu; // 80176D00
  c->r[3]=c->r[13]+0xFFFFAE74u; // 80176D04
  c->lr=0x80176D0Cu; f_80176BCC(c); // 80176D08
  c->r[4]=c->r[31]+0x0000001Eu; // 80176D0C
  c->r[5]=c->r[31]+0x00000022u; // 80176D10
  c->r[3]=c->r[13]+0xFFFFAE70u; // 80176D14
  c->lr=0x80176D1Cu; f_80176BCC(c); // 80176D18
  c->r[4]=c->r[31]+0x00000024u; // 80176D1C
  c->r[5]=c->r[31]+0x00000028u; // 80176D20
  c->r[3]=c->r[13]+0xFFFFAE6Cu; // 80176D24
  c->lr=0x80176D2Cu; f_80176BCC(c); // 80176D28
  c->r[4]=c->r[31]+0x0000002Au; // 80176D2C
  c->r[5]=c->r[31]+0x0000002Eu; // 80176D30
  c->r[3]=c->r[13]+0xFFFFAE68u; // 80176D34
  c->lr=0x80176D3Cu; f_80176BCC(c); // 80176D38
  c->r[4]=c->r[31]+0x00000030u; // 80176D3C
  c->r[5]=c->r[31]+0x00000034u; // 80176D40
  c->r[3]=c->r[13]+0xFFFFAE64u; // 80176D44
  c->lr=0x80176D4Cu; f_80176BCC(c); // 80176D48
  c->r[4]=c->r[31]+0x00000036u; // 80176D4C
  c->r[5]=c->r[31]+0x0000003Au; // 80176D50
  c->r[3]=c->r[13]+0xFFFFAE60u; // 80176D54
  c->lr=0x80176D5Cu; f_80176BCC(c); // 80176D58
  c->r[4]=c->r[31]+0x0000003Cu; // 80176D5C
  c->r[5]=c->r[31]+0x00000040u; // 80176D60
  c->r[3]=c->r[13]+0xFFFFAE5Cu; // 80176D64
  c->lr=0x80176D6Cu; f_80176BCC(c); // 80176D68
  c->r[4]=c->r[31]+0x00000042u; // 80176D6C
  c->r[5]=c->r[31]+0x00000046u; // 80176D70
  c->r[3]=c->r[13]+0xFFFFAE58u; // 80176D74
  c->lr=0x80176D7Cu; f_80176BCC(c); // 80176D78
  c->r[4]=c->r[31]+0x00000048u; // 80176D7C
  c->r[5]=c->r[31]+0x0000004Cu; // 80176D80
  c->r[3]=c->r[13]+0xFFFFAE54u; // 80176D84
  c->lr=0x80176D8Cu; f_80176C38(c); // 80176D88
  c->r[4]=c->r[31]+0x00000054u; // 80176D8C
  c->r[5]=c->r[31]+0x00000058u; // 80176D90
  c->r[3]=c->r[13]+0xFFFFAE50u; // 80176D94
  c->lr=0x80176D9Cu; f_80176C38(c); // 80176D98
  c->r[4]=c->r[31]+0x00000060u; // 80176D9C
  c->r[5]=c->r[31]+0x00000064u; // 80176DA0
  c->r[3]=c->r[13]+0xFFFFAE4Cu; // 80176DA4
  c->lr=0x80176DACu; f_80176C38(c); // 80176DA8
  c->r[4]=c->r[31]+0x0000006Cu; // 80176DAC
  c->r[5]=c->r[31]+0x00000070u; // 80176DB0
  c->r[3]=c->r[13]+0xFFFFAE48u; // 80176DB4
  c->lr=0x80176DBCu; f_80176C38(c); // 80176DB8
  c->r[4]=c->r[31]+0x0000004Eu; // 80176DBC
  c->r[5]=c->r[31]+0x00000052u; // 80176DC0
  c->r[3]=c->r[13]+0xFFFFAE44u; // 80176DC4
  c->lr=0x80176DCCu; f_80176C38(c); // 80176DC8
  c->r[4]=c->r[31]+0x0000005Au; // 80176DCC
  c->r[5]=c->r[31]+0x0000005Eu; // 80176DD0
  c->r[3]=c->r[13]+0xFFFFAE40u; // 80176DD4
  c->lr=0x80176DDCu; f_80176C38(c); // 80176DD8
  c->r[4]=c->r[31]+0x00000066u; // 80176DDC
  c->r[5]=c->r[31]+0x0000006Au; // 80176DE0
  c->r[3]=c->r[13]+0xFFFFAE3Cu; // 80176DE4
  c->lr=0x80176DECu; f_80176C38(c); // 80176DE8
  c->r[4]=c->r[31]+0x00000072u; // 80176DEC
  c->r[5]=c->r[31]+0x00000076u; // 80176DF0
  c->r[3]=c->r[13]+0xFFFFAE38u; // 80176DF4
  c->lr=0x80176DFCu; f_80176C38(c); // 80176DF8
  c->r[3]=c->r[31]|c->r[31]; // 80176DFC
  c->r[4]=0u+0x00000078u; // 80176E00
  c->lr=0x80176E08u; f_8014F83C(c); // 80176E04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176E08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176E0C
  c->lr=c->r[0]; // 80176E10
  c->r[1]=c->r[1]+0x00000010u; // 80176E14
  return; // 80176E18
}

// __AXSPBInit
void f_80176E1C(Ctx* __restrict c) {
  trace_call(0x80176E1Cu);
  c->r[0]=0u+0x00000000u; // 80176E1C
  W32(c->r[13]+0xFFFFAE38u,c->r[0]); // 80176E20
  W32(c->r[13]+0xFFFFAE3Cu,c->r[0]); // 80176E24
  W32(c->r[13]+0xFFFFAE40u,c->r[0]); // 80176E28
  W32(c->r[13]+0xFFFFAE44u,c->r[0]); // 80176E2C
  W32(c->r[13]+0xFFFFAE48u,c->r[0]); // 80176E30
  W32(c->r[13]+0xFFFFAE4Cu,c->r[0]); // 80176E34
  W32(c->r[13]+0xFFFFAE50u,c->r[0]); // 80176E38
  W32(c->r[13]+0xFFFFAE54u,c->r[0]); // 80176E3C
  W32(c->r[13]+0xFFFFAE58u,c->r[0]); // 80176E40
  W32(c->r[13]+0xFFFFAE5Cu,c->r[0]); // 80176E44
  W32(c->r[13]+0xFFFFAE60u,c->r[0]); // 80176E48
  W32(c->r[13]+0xFFFFAE64u,c->r[0]); // 80176E4C
  W32(c->r[13]+0xFFFFAE68u,c->r[0]); // 80176E50
  W32(c->r[13]+0xFFFFAE6Cu,c->r[0]); // 80176E54
  W32(c->r[13]+0xFFFFAE70u,c->r[0]); // 80176E58
  W32(c->r[13]+0xFFFFAE74u,c->r[0]); // 80176E5C
  W32(c->r[13]+0xFFFFAE78u,c->r[0]); // 80176E60
  W32(c->r[13]+0xFFFFAE7Cu,c->r[0]); // 80176E64
  W32(c->r[13]+0xFFFFAE80u,c->r[0]); // 80176E68
  W32(c->r[13]+0xFFFFAE84u,c->r[0]); // 80176E6C
  return; // 80176E70
}

// __AXSPBQuit
void f_80176E74(Ctx* __restrict c) {
  trace_call(0x80176E74u);
  return; // 80176E74
}

// __AXDepopVoice
void f_80176E78(Ctx* __restrict c) {
  trace_call(0x80176E78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176E78
  c->r[0]=c->lr; // 80176E7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80176E80
  c->r[11]=c->r[1]+0x00000020u; // 80176E84
  c->lr=0x80176E8Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80176E88
  c->r[5]=R32(c->r[13]+0xFFFFAE84u); // 80176E8C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000052u); // 80176E90
  c->r[4]=R32(c->r[13]+0xFFFFAE78u); // 80176E94
  c->r[0]=c->r[5]+c->r[0]; // 80176E98
  c->r[7]=R32(c->r[13]+0xFFFFAE6Cu); // 80176E9C
  W32(c->r[13]+0xFFFFAE84u,c->r[0]); // 80176EA0
  c->r[6]=R32(c->r[13]+0xFFFFAE60u); // 80176EA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000054u); // 80176EA8
  c->r[5]=R32(c->r[13]+0xFFFFAE80u); // 80176EAC
  c->r[0]=c->r[4]+c->r[0]; // 80176EB0
  c->r[4]=R32(c->r[13]+0xFFFFAE74u); // 80176EB4
  W32(c->r[13]+0xFFFFAE78u,c->r[0]); // 80176EB8
  c->r[27]=R32(c->r[13]+0xFFFFAE68u); // 80176EBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000056u); // 80176EC0
  c->r[28]=R32(c->r[13]+0xFFFFAE5Cu); // 80176EC4
  c->r[0]=c->r[7]+c->r[0]; // 80176EC8
  c->r[29]=R32(c->r[13]+0xFFFFAE7Cu); // 80176ECC
  W32(c->r[13]+0xFFFFAE6Cu,c->r[0]); // 80176ED0
  c->r[30]=R32(c->r[13]+0xFFFFAE70u); // 80176ED4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000058u); // 80176ED8
  c->r[31]=R32(c->r[13]+0xFFFFAE64u); // 80176EDC
  c->r[0]=c->r[6]+c->r[0]; // 80176EE0
  c->r[12]=R32(c->r[13]+0xFFFFAE58u); // 80176EE4
  W32(c->r[13]+0xFFFFAE60u,c->r[0]); // 80176EE8
  c->r[11]=R32(c->r[13]+0xFFFFAE54u); // 80176EEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Au); // 80176EF0
  c->r[10]=R32(c->r[13]+0xFFFFAE50u); // 80176EF4
  c->r[0]=c->r[5]+c->r[0]; // 80176EF8
  c->r[9]=R32(c->r[13]+0xFFFFAE4Cu); // 80176EFC
  W32(c->r[13]+0xFFFFAE80u,c->r[0]); // 80176F00
  c->r[8]=R32(c->r[13]+0xFFFFAE48u); // 80176F04
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Cu); // 80176F08
  c->r[7]=R32(c->r[13]+0xFFFFAE44u); // 80176F0C
  c->r[0]=c->r[4]+c->r[0]; // 80176F10
  c->r[6]=R32(c->r[13]+0xFFFFAE40u); // 80176F14
  W32(c->r[13]+0xFFFFAE74u,c->r[0]); // 80176F18
  c->r[5]=R32(c->r[13]+0xFFFFAE3Cu); // 80176F1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Eu); // 80176F20
  c->r[4]=R32(c->r[13]+0xFFFFAE38u); // 80176F24
  c->r[0]=c->r[27]+c->r[0]; // 80176F28
  W32(c->r[13]+0xFFFFAE68u,c->r[0]); // 80176F2C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 80176F30
  c->r[0]=c->r[28]+c->r[0]; // 80176F34
  W32(c->r[13]+0xFFFFAE5Cu,c->r[0]); // 80176F38
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000062u); // 80176F3C
  c->r[0]=c->r[29]+c->r[0]; // 80176F40
  W32(c->r[13]+0xFFFFAE7Cu,c->r[0]); // 80176F44
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 80176F48
  c->r[0]=c->r[30]+c->r[0]; // 80176F4C
  W32(c->r[13]+0xFFFFAE70u,c->r[0]); // 80176F50
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000066u); // 80176F54
  c->r[0]=c->r[31]+c->r[0]; // 80176F58
  W32(c->r[13]+0xFFFFAE64u,c->r[0]); // 80176F5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000068u); // 80176F60
  c->r[0]=c->r[12]+c->r[0]; // 80176F64
  W32(c->r[13]+0xFFFFAE58u,c->r[0]); // 80176F68
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FAu); // 80176F6C
  c->r[0]=c->r[11]+c->r[0]; // 80176F70
  c->r[11]=c->r[1]+0x00000020u; // 80176F74
  W32(c->r[13]+0xFFFFAE54u,c->r[0]); // 80176F78
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FCu); // 80176F7C
  c->r[0]=c->r[10]+c->r[0]; // 80176F80
  W32(c->r[13]+0xFFFFAE50u,c->r[0]); // 80176F84
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FEu); // 80176F88
  c->r[0]=c->r[9]+c->r[0]; // 80176F8C
  W32(c->r[13]+0xFFFFAE4Cu,c->r[0]); // 80176F90
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000100u); // 80176F94
  c->r[0]=c->r[8]+c->r[0]; // 80176F98
  W32(c->r[13]+0xFFFFAE48u,c->r[0]); // 80176F9C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000102u); // 80176FA0
  c->r[0]=c->r[7]+c->r[0]; // 80176FA4
  W32(c->r[13]+0xFFFFAE44u,c->r[0]); // 80176FA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000104u); // 80176FAC
  c->r[0]=c->r[6]+c->r[0]; // 80176FB0
  W32(c->r[13]+0xFFFFAE40u,c->r[0]); // 80176FB4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000106u); // 80176FB8
  c->r[0]=c->r[5]+c->r[0]; // 80176FBC
  W32(c->r[13]+0xFFFFAE3Cu,c->r[0]); // 80176FC0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000108u); // 80176FC4
  c->r[0]=c->r[4]+c->r[0]; // 80176FC8
  W32(c->r[13]+0xFFFFAE38u,c->r[0]); // 80176FCC
  c->lr=0x80176FD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80176FD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80176FD4
  c->lr=c->r[0]; // 80176FD8
  c->r[1]=c->r[1]+0x00000020u; // 80176FDC
  return; // 80176FE0
}

// __AXGetNumVoices
void f_80176FE4(Ctx* __restrict c) {
  trace_call(0x80176FE4u);
  c->r[3]=R32(c->r[13]+0xFFFFAE98u); // 80176FE4
  return; // 80176FE8
}

// __AXServiceVPB
void f_80176FEC(Ctx* __restrict c) {
  trace_call(0x80176FECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176FEC
  c->r[0]=c->lr; // 80176FF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80176FF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80176FF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80176FFC
  c->r[30]=c->r[3]+0x00000028u; // 80177000
  W32(c->r[1]+0x00000014u,c->r[29]); // 80177004
  W32(c->r[1]+0x00000010u,c->r[28]); // 80177008
  c->r[28]=c->r[3]|c->r[3]; // 8017700C
  c->r[5]=R32(c->r[13]+0xFFFFAE98u); // 80177010
  c->r[4]=R32(c->r[13]+0xFFFFAE88u); // 80177014
  c->r[0]=c->r[5]+0x00000001u; // 80177018
  W32(c->r[13]+0xFFFFAE98u,c->r[0]); // 8017701C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80177020
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 80177024
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 80177028
  cmps(c,0,(int32_t)c->r[29],0); // 8017702C
  c->r[31]=c->r[4]+c->r[0]; // 80177030
  if (!crb(c,2)) { goto L_8017705C; } // 80177034
  c->r[0]=R16(c->r[31]+0x00000010u); // 80177038
  W16(c->r[30]+0x00000010u,c->r[0]); // 8017703C
  c->r[0]=R16(c->r[31]+0x0000006Au); // 80177040
  W16(c->r[30]+0x0000006Au,c->r[0]); // 80177044
  c->r[0]=R16(c->r[31]+0x0000007Au); // 80177048
  W16(c->r[30]+0x0000007Au,c->r[0]); // 8017704C
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 80177050
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 80177054
  goto L_8017751C; // 80177058
L_8017705C:;
  c->r[0]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[0]); // 8017705C
  if (crb(c,2)) { goto L_80177078; } // 80177060
  c->r[3]=c->r[31]|c->r[31]; // 80177064
  c->r[4]=c->r[30]|c->r[30]; // 80177068
  c->r[5]=0u+0x00000140u; // 8017706C
  c->lr=0x80177074u; f_80004338(c); // 80177070
  goto L_8017751C; // 80177074
L_80177078:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80177078
  if (crb(c,2)) { goto L_80177090; } // 8017707C
  c->r[0]=R16(c->r[30]+0x00000008u); // 80177080
  W16(c->r[31]+0x00000008u,c->r[0]); // 80177084
  c->r[0]=R16(c->r[30]+0x0000000Au); // 80177088
  W16(c->r[31]+0x0000000Au,c->r[0]); // 8017708C
L_80177090:;
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 80177090
  if (crb(c,2)) { goto L_801770A0; } // 80177094
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80177098
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017709C
L_801770A0:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 801770A0
  if (crb(c,2)) { goto L_801770B4; } // 801770A4
  c->r[0]=R16(c->r[30]+0x00000010u); // 801770A8
  W16(c->r[31]+0x00000010u,c->r[0]); // 801770AC
  goto L_801770BC; // 801770B0
L_801770B4:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 801770B4
  W16(c->r[30]+0x00000010u,c->r[0]); // 801770B8
L_801770BC:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 801770BC
  if (crb(c,2)) { goto L_801770CC; } // 801770C0
  c->r[0]=R16(c->r[30]+0x00000012u); // 801770C4
  W16(c->r[31]+0x00000012u,c->r[0]); // 801770C8
L_801770CC:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 801770CC
  if (crb(c,2)) { goto L_801770E4; } // 801770D0
  c->r[3]=c->r[31]+0x00000014u; // 801770D4
  c->r[4]=c->r[30]+0x00000014u; // 801770D8
  c->r[5]=0u+0x00000030u; // 801770DC
  c->lr=0x801770E4u; f_80004338(c); // 801770E0
L_801770E4:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 801770E4
  if (crb(c,2)) { goto L_80177100; } // 801770E8
  c->r[0]=R16(c->r[30]+0x0000004Eu); // 801770EC
  W16(c->r[31]+0x0000004Eu,c->r[0]); // 801770F0
  c->r[0]=R16(c->r[30]+0x00000050u); // 801770F4
  W16(c->r[31]+0x00000050u,c->r[0]); // 801770F8
  goto L_80177188; // 801770FC
L_80177100:;
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 80177100
  if (crb(c,2)) { goto L_80177188; } // 80177104
  c->r[3]=R16(c->r[30]+0x00000044u); // 80177108
  c->r[0]=0u+0x00000000u; // 8017710C
  W16(c->r[31]+0x00000044u,c->r[3]); // 80177110
  c->r[3]=R16(c->r[30]+0x00000046u); // 80177114
  W16(c->r[31]+0x00000046u,c->r[3]); // 80177118
  c->r[3]=R16(c->r[30]+0x00000048u); // 8017711C
  W16(c->r[31]+0x00000048u,c->r[3]); // 80177120
  c->r[3]=R16(c->r[30]+0x0000004Au); // 80177124
  W16(c->r[31]+0x0000004Au,c->r[3]); // 80177128
  c->r[3]=R16(c->r[30]+0x0000004Cu); // 8017712C
  W16(c->r[31]+0x0000004Cu,c->r[3]); // 80177130
  c->r[3]=R16(c->r[30]+0x0000004Eu); // 80177134
  W16(c->r[31]+0x0000004Eu,c->r[3]); // 80177138
  c->r[3]=R16(c->r[30]+0x00000050u); // 8017713C
  W16(c->r[31]+0x00000050u,c->r[3]); // 80177140
  c->r[3]=R32(c->r[28]+0x00000024u); // 80177144
  W32(c->r[3]+0x00000000u,c->r[0]); // 80177148
  W32(c->r[3]+0x00000004u,c->r[0]); // 8017714C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80177150
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80177154
  W32(c->r[3]+0x00000010u,c->r[0]); // 80177158
  W32(c->r[3]+0x00000014u,c->r[0]); // 8017715C
  W32(c->r[3]+0x00000018u,c->r[0]); // 80177160
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80177164
  W32(c->r[3]+0x00000020u,c->r[0]); // 80177168
  W32(c->r[3]+0x00000024u,c->r[0]); // 8017716C
  W32(c->r[3]+0x00000028u,c->r[0]); // 80177170
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80177174
  W32(c->r[3]+0x00000030u,c->r[0]); // 80177178
  W32(c->r[3]+0x00000034u,c->r[0]); // 8017717C
  W32(c->r[3]+0x00000038u,c->r[0]); // 80177180
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80177184
L_80177188:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 80177188
  if (crb(c,2)) { goto L_801771A0; } // 8017718C
  c->r[3]=c->r[31]+0x00000052u; // 80177190
  c->r[4]=c->r[30]+0x00000052u; // 80177194
  c->r[5]=0u+0x00000018u; // 80177198
  c->lr=0x801771A0u; f_80004338(c); // 8017719C
L_801771A0:;
  c->r[0]=rotl(c->r[29],0)&0x00000200u; cr0(c,c->r[0]); // 801771A0
  if (crb(c,2)) { goto L_801771BC; } // 801771A4
  c->r[3]=R16(c->r[31]+0x0000006Au); // 801771A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 801771AC
  W16(c->r[30]+0x0000006Au,c->r[3]); // 801771B0
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 801771B4
  goto L_801771D4; // 801771B8
L_801771BC:;
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 801771BC
  if (crb(c,2)) { goto L_801771D4; } // 801771C0
  c->r[0]=R16(c->r[30]+0x0000006Au); // 801771C4
  W16(c->r[31]+0x0000006Au,c->r[0]); // 801771C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 801771CC
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 801771D0
L_801771D4:;
  c->r[0]=rotl(c->r[29],0)&0x00007800u; cr0(c,c->r[0]); // 801771D4
  if (crb(c,2)) { goto L_8017722C; } // 801771D8
  c->r[0]=rotl(c->r[29],0)&0x00000800u; cr0(c,c->r[0]); // 801771DC
  if (crb(c,2)) { goto L_801771EC; } // 801771E0
  c->r[0]=R16(c->r[30]+0x0000006Eu); // 801771E4
  W16(c->r[31]+0x0000006Eu,c->r[0]); // 801771E8
L_801771EC:;
  c->r[0]=rotl(c->r[29],0)&0x00001000u; cr0(c,c->r[0]); // 801771EC
  if (crb(c,2)) { goto L_801771FC; } // 801771F0
  c->r[0]=R32(c->r[30]+0x00000072u); // 801771F4
  W32(c->r[31]+0x00000072u,c->r[0]); // 801771F8
L_801771FC:;
  c->r[0]=rotl(c->r[29],0)&0x00002000u; cr0(c,c->r[0]); // 801771FC
  if (crb(c,2)) { goto L_8017720C; } // 80177200
  c->r[0]=R32(c->r[30]+0x00000076u); // 80177204
  W32(c->r[31]+0x00000076u,c->r[0]); // 80177208
L_8017720C:;
  c->r[0]=rotl(c->r[29],0)&0x00004000u; cr0(c,c->r[0]); // 8017720C
  if (crb(c,2)) { goto L_80177220; } // 80177210
  c->r[0]=R32(c->r[30]+0x0000007Au); // 80177214
  W32(c->r[31]+0x0000007Au,c->r[0]); // 80177218
  goto L_80177268; // 8017721C
L_80177220:;
  c->r[0]=R32(c->r[31]+0x0000007Au); // 80177220
  W32(c->r[30]+0x0000007Au,c->r[0]); // 80177224
  goto L_80177268; // 80177228
L_8017722C:;
  c->r[0]=rotl(c->r[29],0)&0x00000400u; cr0(c,c->r[0]); // 8017722C
  if (crb(c,2)) { goto L_80177258; } // 80177230
  c->r[0]=R32(c->r[30]+0x0000006Eu); // 80177234
  W32(c->r[31]+0x0000006Eu,c->r[0]); // 80177238
  c->r[0]=R32(c->r[30]+0x00000072u); // 8017723C
  W32(c->r[31]+0x00000072u,c->r[0]); // 80177240
  c->r[0]=R32(c->r[30]+0x00000076u); // 80177244
  W32(c->r[31]+0x00000076u,c->r[0]); // 80177248
  c->r[0]=R32(c->r[30]+0x0000007Au); // 8017724C
  W32(c->r[31]+0x0000007Au,c->r[0]); // 80177250
  goto L_80177268; // 80177254
L_80177258:;
  c->r[0]=R16(c->r[31]+0x0000007Au); // 80177258
  W16(c->r[30]+0x0000007Au,c->r[0]); // 8017725C
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 80177260
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 80177264
L_80177268:;
  c->r[0]=rotl(c->r[29],0)&0x00008000u; cr0(c,c->r[0]); // 80177268
  if (crb(c,2)) { goto L_801772C0; } // 8017726C
  c->r[0]=R32(c->r[30]+0x0000007Eu); // 80177270
  W32(c->r[31]+0x0000007Eu,c->r[0]); // 80177274
  c->r[0]=R32(c->r[30]+0x00000082u); // 80177278
  W32(c->r[31]+0x00000082u,c->r[0]); // 8017727C
  c->r[0]=R32(c->r[30]+0x00000086u); // 80177280
  W32(c->r[31]+0x00000086u,c->r[0]); // 80177284
  c->r[0]=R32(c->r[30]+0x0000008Au); // 80177288
  W32(c->r[31]+0x0000008Au,c->r[0]); // 8017728C
  c->r[0]=R32(c->r[30]+0x0000008Eu); // 80177290
  W32(c->r[31]+0x0000008Eu,c->r[0]); // 80177294
  c->r[0]=R32(c->r[30]+0x00000092u); // 80177298
  W32(c->r[31]+0x00000092u,c->r[0]); // 8017729C
  c->r[0]=R32(c->r[30]+0x00000096u); // 801772A0
  W32(c->r[31]+0x00000096u,c->r[0]); // 801772A4
  c->r[0]=R32(c->r[30]+0x0000009Au); // 801772A8
  W32(c->r[31]+0x0000009Au,c->r[0]); // 801772AC
  c->r[0]=R32(c->r[30]+0x0000009Eu); // 801772B0
  W32(c->r[31]+0x0000009Eu,c->r[0]); // 801772B4
  c->r[0]=R32(c->r[30]+0x000000A2u); // 801772B8
  W32(c->r[31]+0x000000A2u,c->r[0]); // 801772BC
L_801772C0:;
  c->r[0]=rotl(c->r[29],0)&0x00020000u; cr0(c,c->r[0]); // 801772C0
  if (crb(c,2)) { goto L_801772DC; } // 801772C4
  c->r[0]=R16(c->r[30]+0x000000A6u); // 801772C8
  W16(c->r[31]+0x000000A6u,c->r[0]); // 801772CC
  c->r[0]=R16(c->r[30]+0x000000A8u); // 801772D0
  W16(c->r[31]+0x000000A8u,c->r[0]); // 801772D4
  goto L_8017731C; // 801772D8
L_801772DC:;
  c->r[0]=rotl(c->r[29],0)&0x00010000u; cr0(c,c->r[0]); // 801772DC
  if (crb(c,2)) { goto L_8017731C; } // 801772E0
  c->r[0]=R16(c->r[30]+0x000000A6u); // 801772E4
  W16(c->r[31]+0x000000A6u,c->r[0]); // 801772E8
  c->r[0]=R16(c->r[30]+0x000000A8u); // 801772EC
  W16(c->r[31]+0x000000A8u,c->r[0]); // 801772F0
  c->r[0]=R16(c->r[30]+0x000000AAu); // 801772F4
  W16(c->r[31]+0x000000AAu,c->r[0]); // 801772F8
  c->r[0]=R16(c->r[30]+0x000000ACu); // 801772FC
  W16(c->r[31]+0x000000ACu,c->r[0]); // 80177300
  c->r[0]=R16(c->r[30]+0x000000AEu); // 80177304
  W16(c->r[31]+0x000000AEu,c->r[0]); // 80177308
  c->r[0]=R16(c->r[30]+0x000000B0u); // 8017730C
  W16(c->r[31]+0x000000B0u,c->r[0]); // 80177310
  c->r[0]=R16(c->r[30]+0x000000B2u); // 80177314
  W16(c->r[31]+0x000000B2u,c->r[0]); // 80177318
L_8017731C:;
  c->r[0]=rotl(c->r[29],0)&0x00040000u; cr0(c,c->r[0]); // 8017731C
  if (crb(c,2)) { goto L_8017733C; } // 80177320
  c->r[0]=R16(c->r[30]+0x000000B4u); // 80177324
  W16(c->r[31]+0x000000B4u,c->r[0]); // 80177328
  c->r[0]=R16(c->r[30]+0x000000B6u); // 8017732C
  W16(c->r[31]+0x000000B6u,c->r[0]); // 80177330
  c->r[0]=R16(c->r[30]+0x000000B8u); // 80177334
  W16(c->r[31]+0x000000B8u,c->r[0]); // 80177338
L_8017733C:;
  c->r[0]=rotl(c->r[29],0)&0x00100000u; cr0(c,c->r[0]); // 8017733C
  if (crb(c,2)) { goto L_80177358; } // 80177340
  c->r[0]=R16(c->r[30]+0x000000BEu); // 80177344
  W16(c->r[31]+0x000000BEu,c->r[0]); // 80177348
  c->r[0]=R16(c->r[30]+0x000000C0u); // 8017734C
  W16(c->r[31]+0x000000C0u,c->r[0]); // 80177350
  goto L_80177380; // 80177354
L_80177358:;
  c->r[0]=rotl(c->r[29],0)&0x00080000u; cr0(c,c->r[0]); // 80177358
  if (crb(c,2)) { goto L_80177380; } // 8017735C
  c->r[0]=R16(c->r[30]+0x000000BAu); // 80177360
  W16(c->r[31]+0x000000BAu,c->r[0]); // 80177364
  c->r[0]=R16(c->r[30]+0x000000BCu); // 80177368
  W16(c->r[31]+0x000000BCu,c->r[0]); // 8017736C
  c->r[0]=R16(c->r[30]+0x000000BEu); // 80177370
  W16(c->r[31]+0x000000BEu,c->r[0]); // 80177374
  c->r[0]=R16(c->r[30]+0x000000C0u); // 80177378
  W16(c->r[31]+0x000000C0u,c->r[0]); // 8017737C
L_80177380:;
  c->r[0]=rotl(c->r[29],0)&0x00400000u; cr0(c,c->r[0]); // 80177380
  if (crb(c,2)) { goto L_801773B4; } // 80177384
  c->r[0]=R16(c->r[30]+0x000000CCu); // 80177388
  W16(c->r[31]+0x000000CCu,c->r[0]); // 8017738C
  c->r[0]=R16(c->r[30]+0x000000CEu); // 80177390
  W16(c->r[31]+0x000000CEu,c->r[0]); // 80177394
  c->r[0]=R16(c->r[30]+0x000000D0u); // 80177398
  W16(c->r[31]+0x000000D0u,c->r[0]); // 8017739C
  c->r[0]=R16(c->r[30]+0x000000D2u); // 801773A0
  W16(c->r[31]+0x000000D2u,c->r[0]); // 801773A4
  c->r[0]=R16(c->r[30]+0x000000D4u); // 801773A8
  W16(c->r[31]+0x000000D4u,c->r[0]); // 801773AC
  goto L_8017740C; // 801773B0
L_801773B4:;
  c->r[0]=rotl(c->r[29],0)&0x00200000u; cr0(c,c->r[0]); // 801773B4
  if (crb(c,2)) { goto L_8017740C; } // 801773B8
  c->r[0]=R16(c->r[30]+0x000000C2u); // 801773BC
  W16(c->r[31]+0x000000C2u,c->r[0]); // 801773C0
  c->r[0]=R16(c->r[30]+0x000000C4u); // 801773C4
  W16(c->r[31]+0x000000C4u,c->r[0]); // 801773C8
  c->r[0]=R16(c->r[30]+0x000000C6u); // 801773CC
  W16(c->r[31]+0x000000C6u,c->r[0]); // 801773D0
  c->r[0]=R16(c->r[30]+0x000000C8u); // 801773D4
  W16(c->r[31]+0x000000C8u,c->r[0]); // 801773D8
  c->r[0]=R16(c->r[30]+0x000000CAu); // 801773DC
  W16(c->r[31]+0x000000CAu,c->r[0]); // 801773E0
  c->r[0]=R16(c->r[30]+0x000000CCu); // 801773E4
  W16(c->r[31]+0x000000CCu,c->r[0]); // 801773E8
  c->r[0]=R16(c->r[30]+0x000000CEu); // 801773EC
  W16(c->r[31]+0x000000CEu,c->r[0]); // 801773F0
  c->r[0]=R16(c->r[30]+0x000000D0u); // 801773F4
  W16(c->r[31]+0x000000D0u,c->r[0]); // 801773F8
  c->r[0]=R16(c->r[30]+0x000000D2u); // 801773FC
  W16(c->r[31]+0x000000D2u,c->r[0]); // 80177400
  c->r[0]=R16(c->r[30]+0x000000D4u); // 80177404
  W16(c->r[31]+0x000000D4u,c->r[0]); // 80177408
L_8017740C:;
  c->r[0]=rotl(c->r[29],0)&0x00800000u; cr0(c,c->r[0]); // 8017740C
  if (crb(c,2)) { goto L_8017741C; } // 80177410
  c->r[0]=R16(c->r[30]+0x000000D6u); // 80177414
  W16(c->r[31]+0x000000D6u,c->r[0]); // 80177418
L_8017741C:;
  c->r[0]=rotl(c->r[29],0)&0x01000000u; cr0(c,c->r[0]); // 8017741C
  if (crb(c,2)) { goto L_8017742C; } // 80177420
  c->r[0]=R16(c->r[30]+0x000000D8u); // 80177424
  W16(c->r[31]+0x000000D8u,c->r[0]); // 80177428
L_8017742C:;
  c->r[0]=rotl(c->r[29],0)&0x02000000u; cr0(c,c->r[0]); // 8017742C
  if (crb(c,2)) { goto L_80177444; } // 80177430
  c->r[3]=c->r[31]+0x000000DAu; // 80177434
  c->r[4]=c->r[30]+0x000000DAu; // 80177438
  c->r[5]=0u+0x00000020u; // 8017743C
  c->lr=0x80177444u; f_80004338(c); // 80177440
L_80177444:;
  c->r[0]=rotl(c->r[29],0)&0x04000000u; cr0(c,c->r[0]); // 80177444
  if (crb(c,2)) { goto L_8017745C; } // 80177448
  c->r[3]=c->r[31]+0x000000FAu; // 8017744C
  c->r[4]=c->r[30]+0x000000FAu; // 80177450
  c->r[5]=0u+0x00000010u; // 80177454
  c->lr=0x8017745Cu; f_80004338(c); // 80177458
L_8017745C:;
  c->r[0]=rotl(c->r[29],0)&0x08000000u; cr0(c,c->r[0]); // 8017745C
  if (crb(c,2)) { goto L_80177474; } // 80177460
  c->r[3]=c->r[31]+0x0000010Au; // 80177464
  c->r[4]=c->r[30]+0x0000010Au; // 80177468
  c->r[5]=0u+0x0000000Au; // 8017746C
  c->lr=0x80177474u; f_80004338(c); // 80177470
L_80177474:;
  c->r[0]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[0]); // 80177474
  if (crb(c,2)) { goto L_80177490; } // 80177478
  c->r[0]=R16(c->r[30]+0x00000118u); // 8017747C
  W16(c->r[31]+0x00000118u,c->r[0]); // 80177480
  c->r[0]=R16(c->r[30]+0x0000011Au); // 80177484
  W16(c->r[31]+0x0000011Au,c->r[0]); // 80177488
  goto L_8017751C; // 8017748C
L_80177490:;
  c->r[0]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[0]); // 80177490
  if (crb(c,2)) { goto L_801774C4; } // 80177494
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 80177498
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 8017749C
  c->r[0]=R16(c->r[30]+0x00000120u); // 801774A0
  W16(c->r[31]+0x00000120u,c->r[0]); // 801774A4
  c->r[0]=R16(c->r[30]+0x00000122u); // 801774A8
  W16(c->r[31]+0x00000122u,c->r[0]); // 801774AC
  c->r[0]=R16(c->r[30]+0x00000124u); // 801774B0
  W16(c->r[31]+0x00000124u,c->r[0]); // 801774B4
  c->r[0]=R16(c->r[30]+0x00000126u); // 801774B8
  W16(c->r[31]+0x00000126u,c->r[0]); // 801774BC
  goto L_8017751C; // 801774C0
L_801774C4:;
  c->r[0]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[0]); // 801774C4
  if (crb(c,2)) { goto L_8017751C; } // 801774C8
  c->r[0]=R16(c->r[30]+0x00000114u); // 801774CC
  W16(c->r[31]+0x00000114u,c->r[0]); // 801774D0
  c->r[0]=R16(c->r[30]+0x00000116u); // 801774D4
  W16(c->r[31]+0x00000116u,c->r[0]); // 801774D8
  c->r[0]=R16(c->r[30]+0x00000118u); // 801774DC
  W16(c->r[31]+0x00000118u,c->r[0]); // 801774E0
  c->r[0]=R16(c->r[30]+0x0000011Au); // 801774E4
  W16(c->r[31]+0x0000011Au,c->r[0]); // 801774E8
  c->r[0]=R16(c->r[30]+0x0000011Cu); // 801774EC
  W16(c->r[31]+0x0000011Cu,c->r[0]); // 801774F0
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 801774F4
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 801774F8
  c->r[0]=R16(c->r[30]+0x00000120u); // 801774FC
  W16(c->r[31]+0x00000120u,c->r[0]); // 80177500
  c->r[0]=R16(c->r[30]+0x00000122u); // 80177504
  W16(c->r[31]+0x00000122u,c->r[0]); // 80177508
  c->r[0]=R16(c->r[30]+0x00000124u); // 8017750C
  W16(c->r[31]+0x00000124u,c->r[0]); // 80177510
  c->r[0]=R16(c->r[30]+0x00000126u); // 80177514
  W16(c->r[31]+0x00000126u,c->r[0]); // 80177518
L_8017751C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017751C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80177520
  c->r[30]=R32(c->r[1]+0x00000018u); // 80177524
  c->r[29]=R32(c->r[1]+0x00000014u); // 80177528
  c->r[28]=R32(c->r[1]+0x00000010u); // 8017752C
  c->lr=c->r[0]; // 80177530
  c->r[1]=c->r[1]+0x00000020u; // 80177534
  return; // 80177538
}

// __AXSyncPBs
void f_8017753C(Ctx* __restrict c) {
  trace_call(0x8017753Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017753C
  c->r[0]=c->lr; // 80177540
  W32(c->r[1]+0x00000034u,c->r[0]); // 80177544
  c->r[11]=c->r[1]+0x00000030u; // 80177548
  c->lr=0x80177550u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017754C
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 80177550
  c->r[29]=0u+0x00000000u; // 80177554
  c->r[25]=c->r[3]|c->r[3]; // 80177558
  W32(c->r[13]+0xFFFFAE98u,c->r[29]); // 8017755C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 80177560
  c->r[3]=R32(c->r[13]+0xFFFFAE88u); // 80177564
  c->lr=0x8017756Cu; f_8014F810(c); // 80177568
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 8017756C
  c->r[3]=R32(c->r[13]+0xFFFFAE8Cu); // 80177570
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 80177574
  c->lr=0x8017757Cu; f_8014F810(c); // 80177578
  c->lr=0x80177580u; f_801758D8(c); // 8017757C
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 80177580
  c->r[31]=0u+0x802D0000u; // 80177584
  c->r[30]=0u+0x802D0000u; // 80177588
  c->r[27]=0u+0x0000001Fu; // 8017758C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)600); // 80177590
  c->r[31]=c->r[31]+0x000074D8u; // 80177594
  c->r[30]=c->r[30]+0x00007458u; // 80177598
  c->r[0]=c->r[3]+c->r[0]; // 8017759C
  c->r[3]=c->r[0]+c->r[25]; // 801775A0
  c->r[28]=c->r[3]+0x00000020u; // 801775A4
L_801775A8:;
  c->r[3]=c->r[27]|c->r[27]; // 801775A8
  c->lr=0x801775B0u; f_80174B44(c); // 801775AC
  c->r[26]=c->r[3]|c->r[3]; // 801775B0
  goto L_801777A8; // 801775B4
L_801775B8:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 801775B8
  cmpu(c,0,c->r[0],0x00000001u); // 801775BC
  if (!crb(c,2)) { goto L_801775C8; } // 801775C0
  c->r[28]=c->r[28]+0x00000081u; // 801775C4
L_801775C8:;
  c->r[0]=R32(c->r[26]+0x00000020u); // 801775C8
  cmps(c,0,(int32_t)c->r[0],0); // 801775CC
  if (crb(c,2)) { goto L_801775E8; } // 801775D0
  c->r[0]=R32(c->r[26]+0x00000018u); // 801775D4
  c->r[3]=R32(c->r[13]+0xFFFFAE88u); // 801775D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801775DC
  c->r[3]=c->r[3]+c->r[0]; // 801775E0
  c->lr=0x801775E8u; f_80176E78(c); // 801775E4
L_801775E8:;
  c->r[0]=R16(c->r[26]+0x00000038u); // 801775E8
  cmpu(c,0,c->r[0],0x00000001u); // 801775EC
  if (!crb(c,2)) { goto L_80177794; } // 801775F0
  c->r[0]=R16(c->r[26]+0x000000E2u); // 801775F4
  c->r[28]=c->r[28]+0x00000183u; // 801775F8
  cmps(c,0,(int32_t)c->r[0],0); // 801775FC
  if (crb(c,2)) { goto L_80177608; } // 80177600
  c->r[28]=c->r[28]+0x00000135u; // 80177604
L_80177608:;
  c->r[0]=R16(c->r[26]+0x000000EAu); // 80177608
  cmps(c,0,(int32_t)c->r[0],0); // 8017760C
  if (crb(c,2)) { goto L_80177618; } // 80177610
  c->r[28]=c->r[28]+0x00000400u; // 80177614
L_80177618:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 80177618
  cmpu(c,0,c->r[0],0x00000001u); // 8017761C
  if (!crb(c,2)) { goto L_80177628; } // 80177620
  c->r[28]=c->r[28]+0x0000001Bu; // 80177624
L_80177628:;
  c->r[3]=R16(c->r[26]+0x00000030u); // 80177628
  c->r[0]=R16(c->r[26]+0x000000CEu); // 8017762C
  cmps(c,0,(int32_t)c->r[3],0); // 80177630
  c->r[4]=R16(c->r[26]+0x000000D0u); // 80177634
  c->r[4]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 80177638
  if (!crb(c,2)) { goto L_80177658; } // 8017763C
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 80177640
  c->r[3]=c->r[3]+0x00010000u; // 80177644
  c->r[0]=c->r[3]+0xFFFF8000u; // 80177648
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 8017764C
  c->r[0]=c->r[3]+0x00000619u; // 80177650
  goto L_80177678; // 80177654
L_80177658:;
  cmpu(c,0,c->r[3],0x00000001u); // 80177658
  c->r[0]=0u+0x0000025Du; // 8017765C
  if (!crb(c,2)) { goto L_80177678; } // 80177660
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 80177664
  c->r[3]=c->r[3]+0x00010000u; // 80177668
  c->r[0]=c->r[3]+0xFFFF8000u; // 8017766C
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 80177670
  c->r[0]=c->r[3]+0x000005BAu; // 80177674
L_80177678:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 80177678
  c->r[28]=c->r[28]+c->r[0]; // 8017767C
  c->r[0]=R16(c->r[26]+0x000000FEu); // 80177680
  c->r[5]=rotl(c->r[4],13)&0x0000007Cu; // 80177684
  c->r[3]=rotl(c->r[4],2)&0x0000007Cu; // 80177688
  c->r[6]=rotl(c->r[4],8)&0x0000007Cu; // 8017768C
  c->r[4]=rotl(c->r[4],18)&0x0000007Cu; // 80177690
  cmpu(c,0,c->r[0],0x00000001u); // 80177694
  c->r[5]=R32(c->r[30]+c->r[5]); // 80177698
  c->r[0]=R32(c->r[30]+c->r[3]); // 8017769C
  c->r[6]=R32(c->r[30]+c->r[6]); // 801776A0
  c->r[4]=R32(c->r[30]+c->r[4]); // 801776A4
  c->r[0]=c->r[5]+c->r[0]; // 801776A8
  c->r[3]=c->r[28]+c->r[6]; // 801776AC
  c->r[0]=c->r[4]+c->r[0]; // 801776B0
  c->r[28]=c->r[3]+c->r[0]; // 801776B4
  if (!crb(c,2)) { goto L_80177744; } // 801776B8
  c->r[0]=R16(c->r[26]+0x0000013Cu); // 801776BC
  c->r[28]=c->r[28]+0x00000265u; // 801776C0
  cmpu(c,0,c->r[0],0x00000001u); // 801776C4
  if (!crb(c,2)) { goto L_801776D4; } // 801776C8
  c->r[28]=c->r[28]+0x00000076u; // 801776CC
  goto L_801776E0; // 801776D0
L_801776D4:;
  cmpu(c,0,c->r[0],0x00000002u); // 801776D4
  if (!crb(c,2)) { goto L_801776E0; } // 801776D8
  c->r[28]=c->r[28]+0x00000342u; // 801776DC
L_801776E0:;
  c->r[3]=R16(c->r[26]+0x00000100u); // 801776E0
  c->r[4]=rotl(c->r[3],30)&0x0000000Cu; // 801776E4
  c->r[0]=rotl(c->r[3],2)&0x0000000Cu; // 801776E8
  c->r[4]=R32(c->r[31]+c->r[4]); // 801776EC
  c->r[9]=rotl(c->r[3],20)&0x0000000Cu; // 801776F0
  c->r[0]=R32(c->r[31]+c->r[0]); // 801776F4
  c->r[8]=rotl(c->r[3],22)&0x0000000Cu; // 801776F8
  c->r[7]=rotl(c->r[3],24)&0x0000000Cu; // 801776FC
  c->r[6]=rotl(c->r[3],26)&0x0000000Cu; // 80177700
  c->r[5]=rotl(c->r[3],28)&0x0000000Cu; // 80177704
  c->r[3]=rotl(c->r[3],0)&0x0000000Cu; // 80177708
  c->r[7]=R32(c->r[31]+c->r[7]); // 8017770C
  c->r[0]=c->r[4]+c->r[0]; // 80177710
  c->r[3]=R32(c->r[31]+c->r[3]); // 80177714
  c->r[9]=R32(c->r[31]+c->r[9]); // 80177718
  c->r[7]=c->r[28]+c->r[7]; // 8017771C
  c->r[8]=R32(c->r[31]+c->r[8]); // 80177720
  c->r[0]=c->r[3]+c->r[0]; // 80177724
  c->r[6]=R32(c->r[31]+c->r[6]); // 80177728
  c->r[4]=R32(c->r[31]+c->r[5]); // 8017772C
  c->r[8]=c->r[9]+c->r[8]; // 80177730
  c->r[3]=c->r[8]+c->r[7]; // 80177734
  c->r[4]=c->r[6]+c->r[4]; // 80177738
  c->r[0]=c->r[4]+c->r[0]; // 8017773C
  c->r[28]=c->r[3]+c->r[0]; // 80177740
L_80177744:;
  c->r[0]=R32(c->r[13]+0xFFFFAEA0u); // 80177744
  cmpu(c,0,c->r[0],c->r[28]); // 80177748
  if (!crb(c,1)) { goto L_8017775C; } // 8017774C
  c->r[3]=c->r[26]|c->r[26]; // 80177750
  c->lr=0x80177758u; f_80176FEC(c); // 80177754
  goto L_8017779C; // 80177758
L_8017775C:;
  c->r[0]=R32(c->r[26]+0x00000018u); // 8017775C
  c->r[3]=R32(c->r[13]+0xFFFFAE88u); // 80177760
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 80177764
  c->r[25]=c->r[3]+c->r[0]; // 80177768
  c->r[0]=R16(c->r[25]+0x00000010u); // 8017776C
  cmpu(c,0,c->r[0],0x00000001u); // 80177770
  if (!crb(c,2)) { goto L_80177780; } // 80177774
  c->r[3]=c->r[25]|c->r[25]; // 80177778
  c->lr=0x80177780u; f_80176E78(c); // 8017777C
L_80177780:;
  W16(c->r[26]+0x00000038u,c->r[29]); // 80177780
  c->r[3]=c->r[26]|c->r[26]; // 80177784
  W16(c->r[25]+0x00000010u,c->r[29]); // 80177788
  c->lr=0x80177790u; f_80174D80(c); // 8017778C
  goto L_8017779C; // 80177790
L_80177794:;
  c->r[3]=c->r[26]|c->r[26]; // 80177794
  c->lr=0x8017779Cu; f_80176FEC(c); // 80177798
L_8017779C:;
  W32(c->r[26]+0x0000001Cu,c->r[29]); // 8017779C
  W32(c->r[26]+0x00000020u,c->r[29]); // 801777A0
  c->r[26]=R32(c->r[26]+0x00000000u); // 801777A4
L_801777A8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801777A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801775B8; } // 801777AC
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 801777B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801775A8; } // 801777B4
  W32(c->r[13]+0xFFFFAE9Cu,c->r[28]); // 801777B8
  c->r[3]=0u+0x00000000u; // 801777BC
  c->lr=0x801777C4u; f_80174B44(c); // 801777C0
  c->r[25]=c->r[3]|c->r[3]; // 801777C4
  c->r[26]=0u+0x00000000u; // 801777C8
  goto L_8017780C; // 801777CC
L_801777D0:;
  c->r[0]=R32(c->r[25]+0x00000020u); // 801777D0
  cmps(c,0,(int32_t)c->r[0],0); // 801777D4
  if (crb(c,2)) { goto L_801777F0; } // 801777D8
  c->r[0]=R32(c->r[25]+0x00000018u); // 801777DC
  c->r[3]=R32(c->r[13]+0xFFFFAE88u); // 801777E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801777E4
  c->r[3]=c->r[3]+c->r[0]; // 801777E8
  c->lr=0x801777F0u; f_80176E78(c); // 801777EC
L_801777F0:;
  W32(c->r[25]+0x00000020u,c->r[26]); // 801777F0
  c->r[0]=R32(c->r[25]+0x00000018u); // 801777F4
  c->r[3]=R32(c->r[13]+0xFFFFAE88u); // 801777F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801777FC
  c->r[3]=c->r[3]+c->r[0]; // 80177800
  W16(c->r[3]+0x00000010u,c->r[26]); // 80177804
  c->r[25]=R32(c->r[25]+0x00000000u); // 80177808
L_8017780C:;
  cmps(c,0,(int32_t)c->r[25],0); // 8017780C
  if (!crb(c,2)) { IRQCHK(c); goto L_801777D0; } // 80177810
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 80177814
  c->r[3]=R32(c->r[13]+0xFFFFAE88u); // 80177818
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 8017781C
  c->lr=0x80177824u; f_8014F83C(c); // 80177820
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 80177824
  c->r[3]=R32(c->r[13]+0xFFFFAE8Cu); // 80177828
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 8017782C
  c->lr=0x80177834u; f_8014F83C(c); // 80177830
  c->r[11]=c->r[1]+0x00000030u; // 80177834
  c->lr=0x8017783Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80177838
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017783C
  c->lr=c->r[0]; // 80177840
  c->r[1]=c->r[1]+0x00000030u; // 80177844
  return; // 80177848
}

// __AXGetPBs
void f_8017784C(Ctx* __restrict c) {
  trace_call(0x8017784Cu);
  c->r[3]=R32(c->r[13]+0xFFFFAE88u); // 8017784C
  return; // 80177850
}

// __AXSetPBDefault
void f_80177854(Ctx* __restrict c) {
  trace_call(0x80177854u);
  c->r[4]=0u+0x18A80000u; // 80177854
  c->r[5]=0u+0x00000000u; // 80177858
  c->r[0]=c->r[4]+0x00000024u; // 8017785C
  W16(c->r[3]+0x00000038u,c->r[5]); // 80177860
  W16(c->r[3]+0x0000006Cu,c->r[5]); // 80177864
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80177868
  W16(c->r[3]+0x000000E2u,c->r[5]); // 8017786C
  W16(c->r[3]+0x000000EAu,c->r[5]); // 80177870
  W16(c->r[3]+0x000000FEu,c->r[5]); // 80177874
  W16(c->r[3]+0x0000013Cu,c->r[5]); // 80177878
  W16(c->r[3]+0x00000132u,c->r[5]); // 8017787C
  W16(c->r[3]+0x00000134u,c->r[5]); // 80177880
  W16(c->r[3]+0x00000136u,c->r[5]); // 80177884
  W16(c->r[3]+0x00000138u,c->r[5]); // 80177888
  W16(c->r[3]+0x0000013Au,c->r[5]); // 8017788C
  return; // 80177890
}

// __AXVPBInit
void f_80177894(Ctx* __restrict c) {
  trace_call(0x80177894u);
  c->r[5]=0u+0x80450000u; // 80177894
  c->r[4]=0u+0x80450000u; // 80177898
  c->r[3]=0u+0x80450000u; // 8017789C
  c->r[0]=0u+0x00000060u; // 801778A0
  c->r[5]=c->r[5]+0xFFFF9100u; // 801778A4
  c->r[4]=c->r[4]+0x00000900u; // 801778A8
  c->r[3]=c->r[3]+0x00002100u; // 801778AC
  W32(c->r[13]+0xFFFFAE94u,c->r[0]); // 801778B0
  W32(c->r[13]+0xFFFFAE88u,c->r[5]); // 801778B4
  W32(c->r[13]+0xFFFFAE8Cu,c->r[4]); // 801778B8
  W32(c->r[13]+0xFFFFAE90u,c->r[3]); // 801778BC
  f_801778C4(c); return; // 801778C0
}

// __AXVPBInitCommon
void f_801778C4(Ctx* __restrict c) {
  trace_call(0x801778C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801778C4
  c->r[0]=c->lr; // 801778C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801778CC
  c->r[11]=c->r[1]+0x00000030u; // 801778D0
  c->lr=0x801778D8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801778D4
  c->r[4]=0u+0x80000000u; // 801778D8
  c->r[3]=0u+0x89050000u; // 801778DC
  c->r[4]=R32(c->r[4]+0x000000F8u); // 801778E0
  c->r[5]=c->r[3]+0xFFFFFD51u; // 801778E4
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 801778E8
  c->r[3]=0u+0x00000000u; // 801778EC
  c->r[5]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 801778F0
  W32(c->r[13]+0xFFFFAE9Cu,c->r[3]); // 801778F4
  c->r[7]=R32(c->r[13]+0xFFFFAE88u); // 801778F8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 801778FC
  c->r[0]=c->r[4]-c->r[5]; // 80177900
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 80177904
  c->r[0]=c->r[0]+c->r[5]; // 80177908
  cmps(c,0,(int32_t)c->r[6],0); // 8017790C
  c->r[0]=rotl(c->r[0],23)&0x007FFFFFu; // 80177910
  W32(c->r[13]+0xFFFFAEA0u,c->r[0]); // 80177914
  if (crb(c,2)) { goto L_80177968; } // 80177918
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8017791C
  c->ctr=c->r[0]; // 80177920
  if (crb(c,2)) { goto L_80177958; } // 80177924
L_80177928:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 80177928
  W32(c->r[7]+0x00000004u,c->r[3]); // 8017792C
  W32(c->r[7]+0x00000008u,c->r[3]); // 80177930
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 80177934
  W32(c->r[7]+0x00000010u,c->r[3]); // 80177938
  W32(c->r[7]+0x00000014u,c->r[3]); // 8017793C
  W32(c->r[7]+0x00000018u,c->r[3]); // 80177940
  W32(c->r[7]+0x0000001Cu,c->r[3]); // 80177944
  c->r[7]=c->r[7]+0x00000020u; // 80177948
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80177928; } // 8017794C
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 80177950
  if (crb(c,2)) { goto L_80177968; } // 80177954
L_80177958:;
  c->ctr=c->r[6]; // 80177958
L_8017795C:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 8017795C
  c->r[7]=c->r[7]+0x00000004u; // 80177960
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017795C; } // 80177964
L_80177968:;
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 80177968
  c->r[3]=0u+0x00000000u; // 8017796C
  c->r[4]=R32(c->r[13]+0xFFFFAE8Cu); // 80177970
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; cr0(c,c->r[5]); // 80177974
  if (crb(c,2)) { goto L_801779C8; } // 80177978
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8017797C
  c->ctr=c->r[0]; // 80177980
  if (crb(c,2)) { goto L_801779B8; } // 80177984
L_80177988:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80177988
  W32(c->r[4]+0x00000004u,c->r[3]); // 8017798C
  W32(c->r[4]+0x00000008u,c->r[3]); // 80177990
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 80177994
  W32(c->r[4]+0x00000010u,c->r[3]); // 80177998
  W32(c->r[4]+0x00000014u,c->r[3]); // 8017799C
  W32(c->r[4]+0x00000018u,c->r[3]); // 801779A0
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801779A4
  c->r[4]=c->r[4]+0x00000020u; // 801779A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80177988; } // 801779AC
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801779B0
  if (crb(c,2)) { goto L_801779C8; } // 801779B4
L_801779B8:;
  c->ctr=c->r[5]; // 801779B8
L_801779BC:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801779BC
  c->r[4]=c->r[4]+0x00000004u; // 801779C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801779BC; } // 801779C4
L_801779C8:;
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 801779C8
  c->r[3]=0u+0x00000000u; // 801779CC
  c->r[4]=R32(c->r[13]+0xFFFFAE90u); // 801779D0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)90); // 801779D4
  cmps(c,0,(int32_t)c->r[5],0); // 801779D8
  if (crb(c,2)) { goto L_80177A2C; } // 801779DC
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801779E0
  c->ctr=c->r[0]; // 801779E4
  if (crb(c,2)) { goto L_80177A1C; } // 801779E8
L_801779EC:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801779EC
  W32(c->r[4]+0x00000004u,c->r[3]); // 801779F0
  W32(c->r[4]+0x00000008u,c->r[3]); // 801779F4
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801779F8
  W32(c->r[4]+0x00000010u,c->r[3]); // 801779FC
  W32(c->r[4]+0x00000014u,c->r[3]); // 80177A00
  W32(c->r[4]+0x00000018u,c->r[3]); // 80177A04
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 80177A08
  c->r[4]=c->r[4]+0x00000020u; // 80177A0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801779EC; } // 80177A10
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 80177A14
  if (crb(c,2)) { goto L_80177A2C; } // 80177A18
L_80177A1C:;
  c->ctr=c->r[5]; // 80177A1C
L_80177A20:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80177A20
  c->r[4]=c->r[4]+0x00000004u; // 80177A24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80177A20; } // 80177A28
L_80177A2C:;
  c->r[3]=0u+0x18A80000u; // 80177A2C
  c->r[31]=0u+0x00000000u; // 80177A30
  c->r[29]=c->r[3]+0x00000024u; // 80177A34
  c->r[27]=0u+0x00000000u; // 80177A38
  c->r[26]=0u+0x00000000u; // 80177A3C
  c->r[25]=0u+0x00000000u; // 80177A40
  c->r[28]=0u+0x00000000u; // 80177A44
  c->r[30]=0u+0x00000001u; // 80177A48
  goto L_80177B1C; // 80177A4C
L_80177A50:;
  c->r[0]=R32(c->r[13]+0xFFFFAE90u); // 80177A50
  c->r[5]=R32(c->r[13]+0xFFFFAE88u); // 80177A54
  c->r[4]=R32(c->r[13]+0xFFFFAE8Cu); // 80177A58
  c->r[3]=c->r[0]+c->r[25]; // 80177A5C
  c->r[5]=c->r[5]+c->r[27]; // 80177A60
  W32(c->r[3]+0x00000018u,c->r[31]); // 80177A64
  c->r[6]=c->r[4]+c->r[26]; // 80177A68
  W32(c->r[3]+0x00000024u,c->r[6]); // 80177A6C
  W16(c->r[3]+0x00000038u,c->r[28]); // 80177A70
  W16(c->r[3]+0x0000006Cu,c->r[28]); // 80177A74
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 80177A78
  W16(c->r[3]+0x000000E2u,c->r[28]); // 80177A7C
  W16(c->r[3]+0x000000EAu,c->r[28]); // 80177A80
  W16(c->r[3]+0x000000FEu,c->r[28]); // 80177A84
  W16(c->r[3]+0x0000013Cu,c->r[28]); // 80177A88
  W16(c->r[3]+0x00000132u,c->r[28]); // 80177A8C
  W16(c->r[3]+0x00000134u,c->r[28]); // 80177A90
  W16(c->r[3]+0x00000136u,c->r[28]); // 80177A94
  W16(c->r[3]+0x00000138u,c->r[28]); // 80177A98
  W16(c->r[3]+0x0000013Au,c->r[28]); // 80177A9C
  c->r[4]=R32(c->r[13]+0xFFFFAE94u); // 80177AA0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80177AA4
  cmpu(c,0,c->r[31],c->r[0]); // 80177AA8
  if (!crb(c,2)) { goto L_80177AC4; } // 80177AAC
  W16(c->r[5]+0x00000002u,c->r[28]); // 80177AB0
  W16(c->r[5]+0x00000000u,c->r[28]); // 80177AB4
  W16(c->r[3]+0x0000002Au,c->r[28]); // 80177AB8
  W16(c->r[3]+0x00000028u,c->r[28]); // 80177ABC
  goto L_80177ADC; // 80177AC0
L_80177AC4:;
  c->r[0]=c->r[5]+0x00000140u; // 80177AC4
  c->r[4]=rotl(c->r[0],16)&0x0000FFFFu; // 80177AC8
  W16(c->r[3]+0x00000028u,c->r[4]); // 80177ACC
  W16(c->r[3]+0x0000002Au,c->r[0]); // 80177AD0
  W16(c->r[5]+0x00000000u,c->r[4]); // 80177AD4
  W16(c->r[5]+0x00000002u,c->r[0]); // 80177AD8
L_80177ADC:;
  c->r[0]=rotl(c->r[5],16)&0x0000FFFFu; // 80177ADC
  c->r[4]=rotl(c->r[6],16)&0x0000FFFFu; // 80177AE0
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 80177AE4
  W16(c->r[3]+0x0000002Eu,c->r[5]); // 80177AE8
  W16(c->r[5]+0x00000004u,c->r[0]); // 80177AEC
  W16(c->r[5]+0x00000006u,c->r[5]); // 80177AF0
  W16(c->r[3]+0x0000006Eu,c->r[4]); // 80177AF4
  W16(c->r[3]+0x00000070u,c->r[6]); // 80177AF8
  W16(c->r[5]+0x00000046u,c->r[4]); // 80177AFC
  W16(c->r[5]+0x00000048u,c->r[6]); // 80177B00
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 80177B04
  c->lr=0x80177B0Cu; f_80174D64(c); // 80177B08
  c->r[27]=c->r[27]+0x00000140u; // 80177B0C
  c->r[26]=c->r[26]+0x00000040u; // 80177B10
  c->r[25]=c->r[25]+0x00000168u; // 80177B14
  c->r[31]=c->r[31]+0x00000001u; // 80177B18
L_80177B1C:;
  c->r[0]=R32(c->r[13]+0xFFFFAE94u); // 80177B1C
  cmpu(c,0,c->r[31],c->r[0]); // 80177B20
  if (crb(c,0)) { IRQCHK(c); goto L_80177A50; } // 80177B24
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 80177B28
  c->r[3]=R32(c->r[13]+0xFFFFAE88u); // 80177B2C
  c->lr=0x80177B34u; f_8014F83C(c); // 80177B30
  c->r[11]=c->r[1]+0x00000030u; // 80177B34
  c->lr=0x80177B3Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80177B38
  c->r[0]=R32(c->r[1]+0x00000034u); // 80177B3C
  c->lr=c->r[0]; // 80177B40
  c->r[1]=c->r[1]+0x00000030u; // 80177B44
  return; // 80177B48
}

// fn_80177B4C
void f_80177B4C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80177B4C
  W32(c->r[13]+0xFFFFAE88u,c->r[0]); // 80177B50
  W32(c->r[13]+0xFFFFAE8Cu,c->r[0]); // 80177B54
  W32(c->r[13]+0xFFFFAE90u,c->r[0]); // 80177B58
  W32(c->r[13]+0xFFFFAE94u,c->r[0]); // 80177B5C
  return; // 80177B60
}

// fn_80177B64
void f_80177B64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177B64
  c->r[0]=c->lr; // 80177B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177B70
  c->r[31]=c->r[4]|c->r[4]; // 80177B74
  W32(c->r[1]+0x00000008u,c->r[30]); // 80177B78
  c->r[30]=c->r[3]|c->r[3]; // 80177B7C
  c->lr=0x80177B84u; f_80154410(c); // 80177B80
  c->r[0]=R16(c->r[30]+0x00000038u); // 80177B84
  cmpu(c,0,c->r[0],c->r[31]); // 80177B88
  if (!crb(c,2)) { goto L_80177B98; } // 80177B8C
  c->lr=0x80177B94u; f_80154438(c); // 80177B90
  goto L_80177BBC; // 80177B94
L_80177B98:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80177B98
  cmps(c,0,(int32_t)c->r[31],0); // 80177B9C
  W16(c->r[30]+0x00000038u,c->r[31]); // 80177BA0
  c->r[0]=c->r[0]|0x00000004u; // 80177BA4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80177BA8
  if (!crb(c,2)) { goto L_80177BB8; } // 80177BAC
  c->r[0]=0u+0x00000001u; // 80177BB0
  W32(c->r[30]+0x00000020u,c->r[0]); // 80177BB4
L_80177BB8:;
  c->lr=0x80177BBCu; f_80154438(c); // 80177BB8
L_80177BBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177BBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177BC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80177BC4
  c->lr=c->r[0]; // 80177BC8
  c->r[1]=c->r[1]+0x00000010u; // 80177BCC
  return; // 80177BD0
}

// fn_80177BD4
void f_80177BD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177BD4
  c->r[0]=c->lr; // 80177BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177BDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177BE0
  c->r[31]=c->r[4]|c->r[4]; // 80177BE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80177BE8
  c->r[30]=c->r[3]|c->r[3]; // 80177BEC
  c->lr=0x80177BF4u; f_80154410(c); // 80177BF0
  c->r[0]=R32(c->r[31]+0x00000000u); // 80177BF4
  W32(c->r[30]+0x00000096u,c->r[0]); // 80177BF8
  c->r[0]=R32(c->r[31]+0x00000004u); // 80177BFC
  W32(c->r[30]+0x0000009Au,c->r[0]); // 80177C00
  c->r[0]=R32(c->r[31]+0x00000008u); // 80177C04
  W32(c->r[30]+0x0000009Eu,c->r[0]); // 80177C08
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80177C0C
  W32(c->r[30]+0x000000A2u,c->r[0]); // 80177C10
  c->r[0]=R16(c->r[31]+0x00000002u); // 80177C14
  cmps(c,0,(int32_t)c->r[0],10); // 80177C18
  if (crb(c,2)) { goto L_80177C3C; } // 80177C1C
  if (!crb(c,0)) { goto L_80177C30; } // 80177C20
  cmps(c,0,(int32_t)c->r[0],0); // 80177C24
  if (crb(c,2)) { goto L_80177CA0; } // 80177C28
  goto L_80177CA0; // 80177C2C
L_80177C30:;
  cmps(c,0,(int32_t)c->r[0],25); // 80177C30
  if (crb(c,2)) { goto L_80177C70; } // 80177C34
  goto L_80177CA0; // 80177C38
L_80177C3C:;
  c->r[4]=0u+0x00000000u; // 80177C3C
  c->r[0]=0u+0x08000000u; // 80177C40
  W32(c->r[30]+0x000000A6u,c->r[4]); // 80177C44
  W32(c->r[30]+0x000000AAu,c->r[4]); // 80177C48
  W32(c->r[30]+0x000000AEu,c->r[4]); // 80177C4C
  W32(c->r[30]+0x000000B2u,c->r[4]); // 80177C50
  W32(c->r[30]+0x000000B6u,c->r[4]); // 80177C54
  W32(c->r[30]+0x000000BAu,c->r[4]); // 80177C58
  W32(c->r[30]+0x000000BEu,c->r[4]); // 80177C5C
  W32(c->r[30]+0x000000C2u,c->r[4]); // 80177C60
  W32(c->r[30]+0x000000C6u,c->r[0]); // 80177C64
  W32(c->r[30]+0x000000CAu,c->r[4]); // 80177C68
  goto L_80177CA0; // 80177C6C
L_80177C70:;
  c->r[4]=0u+0x00000000u; // 80177C70
  c->r[0]=0u+0x01000000u; // 80177C74
  W32(c->r[30]+0x000000A6u,c->r[4]); // 80177C78
  W32(c->r[30]+0x000000AAu,c->r[4]); // 80177C7C
  W32(c->r[30]+0x000000AEu,c->r[4]); // 80177C80
  W32(c->r[30]+0x000000B2u,c->r[4]); // 80177C84
  W32(c->r[30]+0x000000B6u,c->r[4]); // 80177C88
  W32(c->r[30]+0x000000BAu,c->r[4]); // 80177C8C
  W32(c->r[30]+0x000000BEu,c->r[4]); // 80177C90
  W32(c->r[30]+0x000000C2u,c->r[4]); // 80177C94
  W32(c->r[30]+0x000000C6u,c->r[0]); // 80177C98
  W32(c->r[30]+0x000000CAu,c->r[4]); // 80177C9C
L_80177CA0:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80177CA0
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 80177CA4
  c->r[0]=c->r[0]|0x00008400u; // 80177CA8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80177CAC
  c->lr=0x80177CB4u; f_80154438(c); // 80177CB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177CB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177CB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80177CBC
  c->lr=c->r[0]; // 80177CC0
  c->r[1]=c->r[1]+0x00000010u; // 80177CC4
  return; // 80177CC8
}

// fn_80177CCC
void f_80177CCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177CCC
  c->r[0]=c->lr; // 80177CD0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80177CD4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80177CD8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80177CDC
  c->r[0]=0u+0x43300000u; // 80177CE0
  {uint32_t ea=c->r[2]+0xFFFFAB28u; c->f[3]=RF64(ea);} // 80177CE4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80177CE8
  {uint32_t ea=c->r[2]+0xFFFFAB14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177CEC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80177CF0
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177CF4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80177CF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80177CFC
  c->r[31]=c->r[5]|c->r[5]; // 80177D00
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80177D04
  W32(c->r[1]+0x00000018u,c->r[30]); // 80177D08
  c->r[30]=c->r[4]|c->r[4]; // 80177D0C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80177D10
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80177D14
  c->lr=0x80177D1Cu; f_80262540(c); // 80177D18
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80177D1C
  {uint32_t ea=c->r[2]+0xFFFFAB10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177D20
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80177D24
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[2]); // 80177D28
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 80177D2C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80177D30
  c->lr=0x80177D38u; f_80262DFC(c); // 80177D34
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80177D38
  {uint32_t ea=c->r[2]+0xFFFFAB20u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177D3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80177D40
  c->f[1]=-c->f[1]; // 80177D44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80177D48
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80177D4C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 80177D50
  c->r[3]=R32(c->r[1]+0x00000014u); // 80177D54
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80177D58
  W16(c->r[31]+0x00000000u,c->r[3]); // 80177D5C
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 80177D60
  W16(c->r[30]+0x00000000u,c->r[0]); // 80177D64
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80177D68
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80177D6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80177D70
  c->r[30]=R32(c->r[1]+0x00000018u); // 80177D74
  c->r[0]=R32(c->r[1]+0x00000034u); // 80177D78
  c->lr=c->r[0]; // 80177D7C
  c->r[1]=c->r[1]+0x00000030u; // 80177D80
  return; // 80177D84
}

// AXGetMaxVoices
void f_80177D88(Ctx* __restrict c) {
  trace_call(0x80177D88u);
  c->r[3]=R32(c->r[13]+0xFFFFAE94u); // 80177D88
  return; // 80177D8C
}

// __AXGetCurrentProfile
void f_80177D90(Ctx* __restrict c) {
  trace_call(0x80177D90u);
  c->r[0]=R32(c->r[13]+0xFFFFAEA8u); // 80177D90
  cmps(c,0,(int32_t)c->r[0],0); // 80177D94
  if (crb(c,2)) { goto L_80177DC8; } // 80177D98
  c->r[5]=R32(c->r[13]+0xFFFFAEACu); // 80177D9C
  c->r[3]=R32(c->r[13]+0xFFFFAEB0u); // 80177DA0
  c->r[4]=c->r[5]+0x00000001u; // 80177DA4
  c->r[6]=R32(c->r[13]+0xFFFFAEB4u); // 80177DA8
  c->r[0]=divwu(c->r[4],c->r[3]); // 80177DAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80177DB0
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 80177DB4
  c->r[0]=c->r[4]-c->r[0]; // 80177DB8
  W32(c->r[13]+0xFFFFAEACu,c->r[0]); // 80177DBC
  c->r[3]=c->r[6]+c->r[3]; // 80177DC0
  return; // 80177DC4
L_80177DC8:;
  c->r[3]=0u+0x00000000u; // 80177DC8
  return; // 80177DCC
}

// AXFXReverbHiInit
void f_80177DD0(Ctx* __restrict c) {
  trace_call(0x80177DD0u);
  {uint32_t ea=c->r[3]+0x00000158u; c->f[7]=c->ps1[7]=RF32(ea);} // 80177DD0
  c->r[0]=0u+0x00000000u; // 80177DD4
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80177DD8
  c->r[4]=0u+0x00000005u; // 80177DDC
  {uint32_t ea=c->r[3]+0x00000150u; c->f[6]=c->ps1[6]=RF32(ea);} // 80177DE0
  {uint32_t ea=c->r[3]+0x00000148u; c->f[5]=c->ps1[5]=RF32(ea);} // 80177DE4
  {uint32_t ea=c->r[3]+0x00000154u; c->f[4]=c->ps1[4]=RF32(ea);} // 80177DE8
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80177DEC
  {uint32_t ea=c->r[2]+0xFFFFAB34u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177DF0
  {uint32_t ea=c->r[3]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80177DF4
  W32(c->r[3]+0x00000110u,c->r[4]); // 80177DF8
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[7]);} // 80177DFC
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[7]);} // 80177E00
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 80177E04
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[6]);} // 80177E08
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[5]);} // 80177E0C
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[4]);} // 80177E10
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[3]);} // 80177E14
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[2]);} // 80177E18
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[1]);} // 80177E1C
  W32(c->r[3]+0x00000138u,c->r[0]); // 80177E20
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 80177E24
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 80177E28
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[2]);} // 80177E2C
  f_80177EE4(c); return; // 80177E30
}

// AXFXReverbHiShutdown
void f_80177E34(Ctx* __restrict c) {
  trace_call(0x80177E34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177E34
  c->r[0]=c->lr; // 80177E38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177E3C
  c->lr=0x80177E44u; f_80178204(c); // 80177E40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177E44
  c->r[3]=0u+0x00000001u; // 80177E48
  c->lr=c->r[0]; // 80177E4C
  c->r[1]=c->r[1]+0x00000010u; // 80177E50
  return; // 80177E54
}

// AXFXReverbHiCallback
void f_80177E58(Ctx* __restrict c) {
  trace_call(0x80177E58u);
  f_80178258(c); return; // 80177E58
}

// AXFXReverbHiExpGetMemSize
void f_80177E5C(Ctx* __restrict c) {
  trace_call(0x80177E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177E5C
  c->r[4]=0u+0x802E0000u; // 80177E60
  c->r[4]=c->r[4]+0xFFFFA4C0u; // 80177E64
  c->r[9]=0u+0x802E0000u; // 80177E68
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177E6C
  c->r[9]=c->r[9]+0xFFFFA580u; // 80177E70
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177E74
  c->r[10]=R32(c->r[4]+0x0000005Cu); // 80177E78
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80177E7C
  c->r[0]=R32(c->r[9]+0x000000C0u); // 80177E80
  c->r[8]=R32(c->r[9]+0x000000C4u); // 80177E84
  c->r[7]=R32(c->r[9]+0x000000C8u); // 80177E88
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80177E8C
  c->r[6]=R32(c->r[9]+0x000000CCu); // 80177E90
  c->r[5]=R32(c->r[9]+0x000000D0u); // 80177E94
  c->r[4]=R32(c->r[9]+0x000000D4u); // 80177E98
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80177E9C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80177EA0
  c->r[10]=c->r[10]+c->r[3]; // 80177EA4
  c->r[3]=R32(c->r[9]+0x000000D8u); // 80177EA8
  c->r[10]=c->r[10]+c->r[0]; // 80177EAC
  c->r[0]=R32(c->r[9]+0x000000DCu); // 80177EB0
  c->r[10]=c->r[10]+c->r[8]; // 80177EB4
  c->r[10]=c->r[10]+c->r[7]; // 80177EB8
  c->r[10]=c->r[10]+c->r[6]; // 80177EBC
  c->r[10]=c->r[10]+c->r[5]; // 80177EC0
  c->r[5]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80177EC4
  c->r[10]=c->r[5]-c->r[10]; // 80177EC8
  c->r[10]=c->r[10]+c->r[4]; // 80177ECC
  c->r[10]=c->r[10]+c->r[3]; // 80177ED0
  c->r[10]=c->r[10]+c->r[0]; // 80177ED4
  c->r[3]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80177ED8
  c->r[1]=c->r[1]+0x00000010u; // 80177EDC
  return; // 80177EE0
}

// AXFXReverbHiExpInit
void f_80177EE4(Ctx* __restrict c) {
  trace_call(0x80177EE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177EE4
  c->r[0]=c->lr; // 80177EE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80177EEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80177EF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80177EF4
  c->r[30]=c->r[3]|c->r[3]; // 80177EF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80177EFC
  c->lr=0x80177F04u; f_80154410(c); // 80177F00
  {uint32_t ea=c->r[30]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177F04
  c->r[0]=0u+0x00000001u; // 80177F08
  {uint32_t ea=c->r[2]+0xFFFFAB3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80177F0C
  c->r[31]=c->r[3]|c->r[3]; // 80177F10
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 80177F14
  fcmp(c,0,c->f[1],c->f[0]); // 80177F18
  if (!crb(c,0)) { goto L_80177F54; } // 80177F1C
  c->lr=0x80177F24u; f_80154410(c); // 80177F20
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 80177F24
  c->r[29]=c->r[3]|c->r[3]; // 80177F28
  c->r[3]=c->r[30]|c->r[30]; // 80177F2C
  c->r[0]=c->r[0]|0x00000001u; // 80177F30
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 80177F34
  c->lr=0x80177F3Cu; f_80178A0C(c); // 80177F38
  c->r[3]=c->r[29]|c->r[29]; // 80177F3C
  c->lr=0x80177F44u; f_80154438(c); // 80177F40
  c->r[3]=c->r[31]|c->r[31]; // 80177F44
  c->lr=0x80177F4Cu; f_80154438(c); // 80177F48
  c->r[3]=0u+0x00000000u; // 80177F4C
  goto L_80178064; // 80177F50
L_80177F54:;
  c->r[3]=0u+0x802E0000u; // 80177F54
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177F58
  c->r[3]=c->r[3]+0xFFFFA4C0u; // 80177F5C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80177F60
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80177F64
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80177F68
  c->lr=0x80177F70u; f_80252A7C(c); // 80177F6C
  W32(c->r[30]+0x00000040u,c->r[3]); // 80177F70
  c->r[4]=0u+0x802E0000u; // 80177F74
  c->r[4]=c->r[4]+0xFFFFA580u; // 80177F78
  c->r[3]=c->r[30]|c->r[30]; // 80177F7C
  c->r[0]=R32(c->r[4]+0x000000C0u); // 80177F80
  W32(c->r[30]+0x00000080u,c->r[0]); // 80177F84
  c->r[0]=R32(c->r[4]+0x000000C4u); // 80177F88
  W32(c->r[30]+0x00000084u,c->r[0]); // 80177F8C
  c->r[0]=R32(c->r[4]+0x000000C8u); // 80177F90
  W32(c->r[30]+0x00000088u,c->r[0]); // 80177F94
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80177F98
  W32(c->r[30]+0x000000C0u,c->r[0]); // 80177F9C
  c->r[0]=R32(c->r[4]+0x000000D0u); // 80177FA0
  W32(c->r[30]+0x000000C4u,c->r[0]); // 80177FA4
  c->r[0]=R32(c->r[4]+0x000000D4u); // 80177FA8
  W32(c->r[30]+0x000000ECu,c->r[0]); // 80177FAC
  c->r[0]=R32(c->r[4]+0x000000D8u); // 80177FB0
  W32(c->r[30]+0x000000F0u,c->r[0]); // 80177FB4
  c->r[0]=R32(c->r[4]+0x000000DCu); // 80177FB8
  W32(c->r[30]+0x000000F4u,c->r[0]); // 80177FBC
  c->lr=0x80177FC4u; f_80178774(c); // 80177FC0
  cmps(c,0,(int32_t)c->r[3],0); // 80177FC4
  if (!crb(c,2)) { goto L_80178000; } // 80177FC8
  c->lr=0x80177FD0u; f_80154410(c); // 80177FCC
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 80177FD0
  c->r[29]=c->r[3]|c->r[3]; // 80177FD4
  c->r[3]=c->r[30]|c->r[30]; // 80177FD8
  c->r[0]=c->r[0]|0x00000001u; // 80177FDC
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 80177FE0
  c->lr=0x80177FE8u; f_80178A0C(c); // 80177FE4
  c->r[3]=c->r[29]|c->r[29]; // 80177FE8
  c->lr=0x80177FF0u; f_80154438(c); // 80177FEC
  c->r[3]=c->r[31]|c->r[31]; // 80177FF0
  c->lr=0x80177FF8u; f_80154438(c); // 80177FF4
  c->r[3]=0u+0x00000000u; // 80177FF8
  goto L_80178064; // 80177FFC
L_80178000:;
  c->r[3]=c->r[30]|c->r[30]; // 80178000
  c->lr=0x80178008u; f_801788E8(c); // 80178004
  c->r[3]=c->r[30]|c->r[30]; // 80178008
  c->lr=0x80178010u; f_80178B20(c); // 8017800C
  cmps(c,0,(int32_t)c->r[3],0); // 80178010
  if (!crb(c,2)) { goto L_8017804C; } // 80178014
  c->lr=0x8017801Cu; f_80154410(c); // 80178018
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 8017801C
  c->r[29]=c->r[3]|c->r[3]; // 80178020
  c->r[3]=c->r[30]|c->r[30]; // 80178024
  c->r[0]=c->r[0]|0x00000001u; // 80178028
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 8017802C
  c->lr=0x80178034u; f_80178A0C(c); // 80178030
  c->r[3]=c->r[29]|c->r[29]; // 80178034
  c->lr=0x8017803Cu; f_80154438(c); // 80178038
  c->r[3]=c->r[31]|c->r[31]; // 8017803C
  c->lr=0x80178044u; f_80154438(c); // 80178040
  c->r[3]=0u+0x00000000u; // 80178044
  goto L_80178064; // 80178048
L_8017804C:;
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 8017804C
  c->r[3]=c->r[31]|c->r[31]; // 80178050
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80178054
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 80178058
  c->lr=0x80178060u; f_80154438(c); // 8017805C
  c->r[3]=0u+0x00000001u; // 80178060
L_80178064:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80178064
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80178068
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017806C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80178070
  c->lr=c->r[0]; // 80178074
  c->r[1]=c->r[1]+0x00000020u; // 80178078
  return; // 8017807C
}

// AXFXReverbHiExpSettings
void f_80178080(Ctx* __restrict c) {
  trace_call(0x80178080u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178080
  c->r[0]=c->lr; // 80178084
  W32(c->r[1]+0x00000024u,c->r[0]); // 80178088
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017808C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80178090
  W32(c->r[1]+0x00000014u,c->r[29]); // 80178094
  c->r[29]=c->r[3]|c->r[3]; // 80178098
  c->lr=0x801780A0u; f_80154410(c); // 8017809C
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 801780A0
  c->r[30]=c->r[3]|c->r[3]; // 801780A4
  c->r[0]=c->r[0]|0x00000001u; // 801780A8
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 801780AC
  c->lr=0x801780B4u; f_80154410(c); // 801780B0
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 801780B4
  c->r[31]=c->r[3]|c->r[3]; // 801780B8
  c->r[3]=c->r[29]|c->r[29]; // 801780BC
  c->r[0]=c->r[0]|0x00000001u; // 801780C0
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 801780C4
  c->lr=0x801780CCu; f_80178A0C(c); // 801780C8
  c->r[3]=c->r[31]|c->r[31]; // 801780CC
  c->lr=0x801780D4u; f_80154438(c); // 801780D0
  c->r[3]=c->r[29]|c->r[29]; // 801780D4
  c->lr=0x801780DCu; f_80177EE4(c); // 801780D8
  cmps(c,0,(int32_t)c->r[3],0); // 801780DC
  if (!crb(c,2)) { goto L_80178118; } // 801780E0
  c->lr=0x801780E8u; f_80154410(c); // 801780E4
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 801780E8
  c->r[31]=c->r[3]|c->r[3]; // 801780EC
  c->r[3]=c->r[29]|c->r[29]; // 801780F0
  c->r[0]=c->r[0]|0x00000001u; // 801780F4
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 801780F8
  c->lr=0x80178100u; f_80178A0C(c); // 801780FC
  c->r[3]=c->r[31]|c->r[31]; // 80178100
  c->lr=0x80178108u; f_80154438(c); // 80178104
  c->r[3]=c->r[30]|c->r[30]; // 80178108
  c->lr=0x80178110u; f_80154438(c); // 8017810C
  c->r[3]=0u+0x00000000u; // 80178110
  goto L_80178134; // 80178114
L_80178118:;
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 80178118
  c->r[3]=c->r[30]|c->r[30]; // 8017811C
  c->r[0]=c->r[0]|0x00000002u; // 80178120
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80178124
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 80178128
  c->lr=0x80178130u; f_80154438(c); // 8017812C
  c->r[3]=0u+0x00000001u; // 80178130
L_80178134:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80178134
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80178138
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017813C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80178140
  c->lr=c->r[0]; // 80178144
  c->r[1]=c->r[1]+0x00000020u; // 80178148
  return; // 8017814C
}

// AXFXReverbHiExpSettingsUpdate
void f_80178150(Ctx* __restrict c) {
  trace_call(0x80178150u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178150
  c->r[0]=c->lr; // 80178154
  W32(c->r[1]+0x00000024u,c->r[0]); // 80178158
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017815C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80178160
  W32(c->r[1]+0x00000014u,c->r[29]); // 80178164
  c->r[29]=c->r[3]|c->r[3]; // 80178168
  c->lr=0x80178170u; f_80154410(c); // 8017816C
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 80178170
  c->r[30]=c->r[3]|c->r[3]; // 80178174
  c->r[3]=c->r[29]|c->r[29]; // 80178178
  c->r[0]=c->r[0]|0x00000001u; // 8017817C
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 80178180
  c->lr=0x80178188u; f_801788E8(c); // 80178184
  c->r[3]=c->r[29]|c->r[29]; // 80178188
  c->lr=0x80178190u; f_80178B20(c); // 8017818C
  cmps(c,0,(int32_t)c->r[3],0); // 80178190
  if (!crb(c,2)) { goto L_801781CC; } // 80178194
  c->lr=0x8017819Cu; f_80154410(c); // 80178198
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 8017819C
  c->r[31]=c->r[3]|c->r[3]; // 801781A0
  c->r[3]=c->r[29]|c->r[29]; // 801781A4
  c->r[0]=c->r[0]|0x00000001u; // 801781A8
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 801781AC
  c->lr=0x801781B4u; f_80178A0C(c); // 801781B0
  c->r[3]=c->r[31]|c->r[31]; // 801781B4
  c->lr=0x801781BCu; f_80154438(c); // 801781B8
  c->r[3]=c->r[30]|c->r[30]; // 801781BC
  c->lr=0x801781C4u; f_80154438(c); // 801781C0
  c->r[3]=0u+0x00000000u; // 801781C4
  goto L_801781E8; // 801781C8
L_801781CC:;
  c->r[0]=R32(c->r[29]+0x0000010Cu); // 801781CC
  c->r[3]=c->r[30]|c->r[30]; // 801781D0
  c->r[0]=c->r[0]|0x00000002u; // 801781D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801781D8
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 801781DC
  c->lr=0x801781E4u; f_80154438(c); // 801781E0
  c->r[3]=0u+0x00000001u; // 801781E4
L_801781E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801781E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801781EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801781F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801781F4
  c->lr=c->r[0]; // 801781F8
  c->r[1]=c->r[1]+0x00000020u; // 801781FC
  return; // 80178200
}

// AXFXReverbHiExpShutdown
void f_80178204(Ctx* __restrict c) {
  trace_call(0x80178204u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178204
  c->r[0]=c->lr; // 80178208
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017820C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178210
  W32(c->r[1]+0x00000008u,c->r[30]); // 80178214
  c->r[30]=c->r[3]|c->r[3]; // 80178218
  c->lr=0x80178220u; f_80154410(c); // 8017821C
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 80178220
  c->r[31]=c->r[3]|c->r[3]; // 80178224
  c->r[3]=c->r[30]|c->r[30]; // 80178228
  c->r[0]=c->r[0]|0x00000001u; // 8017822C
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 80178230
  c->lr=0x80178238u; f_80178A0C(c); // 80178234
  c->r[3]=c->r[31]|c->r[31]; // 80178238
  c->lr=0x80178240u; f_80154438(c); // 8017823C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178244
  c->r[30]=R32(c->r[1]+0x00000008u); // 80178248
  c->lr=c->r[0]; // 8017824C
  c->r[1]=c->r[1]+0x00000010u; // 80178250
  return; // 80178254
}

// AXFXReverbHiExpCallback
void f_80178258(Ctx* __restrict c) {
  trace_call(0x80178258u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178258
  c->r[0]=c->lr; // 8017825C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80178260
  c->r[11]=c->r[1]+0x00000070u; // 80178264
  c->lr=0x8017826Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80178268
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 8017826C
  cmps(c,0,(int32_t)c->r[0],0); // 80178270
  if (crb(c,2)) { goto L_80178284; } // 80178274
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80178278
  W32(c->r[4]+0x0000010Cu,c->r[0]); // 8017827C
  goto L_8017875C; // 80178280
L_80178284:;
  c->r[7]=R32(c->r[4]+0x00000138u); // 80178284
  c->r[6]=R32(c->r[3]+0x00000000u); // 80178288
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017828C
  cmps(c,0,(int32_t)c->r[7],0); // 80178290
  c->r[0]=R32(c->r[3]+0x00000008u); // 80178294
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80178298
  W32(c->r[1]+0x00000030u,c->r[5]); // 8017829C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801782A0
  if (crb(c,2)) { goto L_801782C0; } // 801782A4
  c->r[5]=R32(c->r[7]+0x00000000u); // 801782A8
  c->r[3]=R32(c->r[7]+0x00000004u); // 801782AC
  c->r[0]=R32(c->r[7]+0x00000008u); // 801782B0
  W32(c->r[1]+0x00000008u,c->r[5]); // 801782B4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801782B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801782BC
L_801782C0:;
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801782C0
  cmps(c,0,(int32_t)c->r[7],0); // 801782C4
  if (crb(c,2)) { goto L_801782D8; } // 801782C8
  c->r[3]=R32(c->r[7]+0x00000000u); // 801782CC
  c->r[5]=R32(c->r[7]+0x00000004u); // 801782D0
  c->r[6]=R32(c->r[7]+0x00000008u); // 801782D4
L_801782D8:;
  {uint32_t ea=c->r[2]+0xFFFFAB40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801782D8
  c->r[31]=0u+0x00000000u; // 801782DC
  {uint32_t ea=c->r[4]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 801782E0
  c->r[29]=0u+0x00000000u; // 801782E4
  {uint32_t ea=c->r[2]+0xFFFFAB44u; c->f[5]=c->ps1[5]=RF32(ea);} // 801782E8
  c->r[0]=0u+0x43300000u; // 801782EC
  {uint32_t ea=c->r[4]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 801782F0
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801782F4
  {uint32_t ea=c->r[2]+0xFFFFAB48u; c->f[2]=c->ps1[2]=RF32(ea);} // 801782F8
  c->r[30]=0u+0x00000003u; // 801782FC
  {uint32_t ea=c->r[4]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178300
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 80178304
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80178308
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[0]); // 8017830C
  {uint32_t ea=c->r[2]+0xFFFFAB50u; c->f[0]=RF64(ea);} // 80178310
L_80178314:;
  c->r[9]=c->r[4]|c->r[4]; // 80178314
  c->r[10]=c->r[4]|c->r[4]; // 80178318
  c->r[11]=c->r[4]|c->r[4]; // 8017831C
  c->r[7]=c->r[1]+0x00000008u; // 80178320
  c->r[8]=c->r[1]+0x0000002Cu; // 80178324
  c->r[12]=c->r[1]+0x00000014u; // 80178328
  c->ctr=c->r[30]; // 8017832C
L_80178330:;
  c->r[26]=R32(c->r[4]+0x00000138u); // 80178330
  cmps(c,0,(int32_t)c->r[26],0); // 80178334
  if (crb(c,2)) { goto L_80178370; } // 80178338
  c->r[27]=R32(c->r[7]+0x00000000u); // 8017833C
  c->r[28]=R32(c->r[8]+0x00000000u); // 80178340
  c->r[26]=R32(c->r[27]+0x00000000u); // 80178344
  c->r[27]=c->r[27]+0x00000004u; // 80178348
  c->r[28]=R32(c->r[28]+0x00000000u); // 8017834C
  W32(c->r[1]+0x00000038u,c->r[0]); // 80178350
  c->r[26]=c->r[28]+c->r[26]; // 80178354
  c->r[26]=c->r[26]^0x80000000u; // 80178358
  W32(c->r[7]+0x00000000u,c->r[27]); // 8017835C
  W32(c->r[1]+0x0000003Cu,c->r[26]); // 80178360
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 80178364
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 80178368
  goto L_8017838C; // 8017836C
L_80178370:;
  c->r[26]=R32(c->r[8]+0x00000000u); // 80178370
  W32(c->r[1]+0x00000040u,c->r[0]); // 80178374
  c->r[26]=R32(c->r[26]+0x00000000u); // 80178378
  c->r[26]=c->r[26]^0x80000000u; // 8017837C
  W32(c->r[1]+0x00000044u,c->r[26]); // 80178380
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 80178384
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 80178388
L_8017838C:;
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 8017838C
  c->r[27]=R32(c->r[4]+0x00000010u); // 80178390
  c->r[26]=R32(c->r[4]+0x00000014u); // 80178394
  c->r[28]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80178398
  c->r[25]=R32(c->r[9]+0x00000000u); // 8017839C
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801783A0
  {uint32_t ea=c->r[4]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 801783A4
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801783A8
  {uint32_t ea=c->r[25]+c->r[28]; c->f[8]=c->ps1[8]=RF32(ea);} // 801783AC
  {uint32_t ea=c->r[4]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 801783B0
  {uint32_t ea=c->r[25]+c->r[27]; c->f[2]=c->ps1[2]=RF32(ea);} // 801783B4
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801783B8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[10]=c->ps1[10]=RF32(ea);} // 801783BC
  {uint32_t ea=c->r[25]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 801783C0
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801783C4
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[11]);} // 801783C8
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[9]); // 801783CC
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 801783D0
  c->r[27]=R32(c->r[4]+0x0000003Cu); // 801783D4
  cmps(c,0,(int32_t)c->r[27],0); // 801783D8
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801783DC
  if (crb(c,2)) { goto L_801783FC; } // 801783E0
  c->r[27]=R32(c->r[4]+0x00000038u); // 801783E4
  c->r[28]=R32(c->r[9]+0x0000002Cu); // 801783E8
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801783EC
  {uint32_t ea=c->r[28]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801783F0
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[11]);} // 801783F4
  goto L_80178400; // 801783F8
L_801783FC:;
  c->f[9]=c->f[11]; // 801783FC
L_80178400:;
  c->r[27]=R32(c->r[4]+0x00000068u); // 80178400
  c->r[25]=R32(c->r[10]+0x00000044u); // 80178404
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80178408
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 8017840C
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 80178410
  {uint32_t ea=c->r[2]+0xFFFFAB3Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80178414
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 80178418
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 8017841C
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 80178420
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 80178424
  c->r[27]=R32(c->r[4]+0x0000006Cu); // 80178428
  c->r[26]=R32(c->r[10]+0x00000048u); // 8017842C
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80178430
  {uint32_t ea=c->r[4]+0x00000090u; c->f[7]=c->ps1[7]=RF32(ea);} // 80178434
  {uint32_t ea=c->r[26]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 80178438
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 8017843C
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 80178440
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 80178444
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 80178448
  c->r[27]=R32(c->r[4]+0x00000070u); // 8017844C
  c->r[28]=R32(c->r[10]+0x0000004Cu); // 80178450
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80178454
  {uint32_t ea=c->r[4]+0x00000094u; c->f[7]=c->ps1[7]=RF32(ea);} // 80178458
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 8017845C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 80178460
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 80178464
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 80178468
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 8017846C
  c->r[27]=R32(c->r[4]+0x000000B0u); // 80178470
  c->r[25]=R32(c->r[11]+0x00000098u); // 80178474
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80178478
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 8017847C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 80178480
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[7]); // 80178484
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 80178488
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 8017848C
  c->r[27]=R32(c->r[4]+0x000000B4u); // 80178490
  c->r[26]=R32(c->r[11]+0x0000009Cu); // 80178494
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[7]); // 80178498
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8017849C
  {uint32_t ea=c->r[26]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801784A0
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[3]); // 801784A4
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 801784A8
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[3]); // 801784AC
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 801784B0
  {uint32_t ea=c->r[9]+0x000000FCu; c->f[7]=c->ps1[7]=RF32(ea);} // 801784B4
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 801784B8
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 801784BC
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[8]); // 801784C0
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[7]); // 801784C4
  {uint32_t ea=c->r[9]+0x000000FCu; WF32(ea,c->f[9]);} // 801784C8
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801784CC
  c->r[28]=R32(c->r[9]+0x000000C8u); // 801784D0
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801784D4
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801784D8
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801784DC
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801784E0
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 801784E4
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801784E8
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801784EC
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 801784F0
  c->r[27]=c->r[27]+0x00000001u; // 801784F4
  W32(c->r[9]+0x000000D4u,c->r[27]); // 801784F8
  c->r[28]=R32(c->r[9]+0x000000E0u); // 801784FC
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[7]);} // 80178500
  cmpu(c,0,c->r[27],c->r[28]); // 80178504
  if (crb(c,0)) { goto L_80178510; } // 80178508
  W32(c->r[9]+0x000000D4u,c->r[29]); // 8017850C
L_80178510:;
  {uint32_t ea=c->r[12]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 80178510
  c->r[7]=c->r[7]+0x00000004u; // 80178514
  c->r[8]=c->r[8]+0x00000004u; // 80178518
  c->r[9]=c->r[9]+0x00000004u; // 8017851C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[5]); // 80178520
  c->r[10]=c->r[10]+0x0000000Cu; // 80178524
  c->r[11]=c->r[11]+0x00000008u; // 80178528
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 8017852C
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[2]);} // 80178530
  c->r[12]=c->r[12]+0x00000004u; // 80178534
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80178330; } // 80178538
  {uint32_t ea=c->r[1]+0x00000018u; c->f[12]=c->ps1[12]=RF32(ea);} // 8017853C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 80178540
  {uint32_t ea=c->r[1]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 80178544
  c->f[2]=c->ps1[2]=S(c->f[12]+c->f[11]); // 80178548
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 8017854C
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[11]); // 80178550
  c->r[8]=R32(c->r[1]+0x00000034u); // 80178554
  c->r[11]=c->r[12]+0x00000004u; // 80178558
  c->r[10]=R32(c->r[1]+0x00000030u); // 8017855C
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[6]); // 80178560
  c->r[7]=c->r[8]+0x00000004u; // 80178564
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[6]); // 80178568
  c->r[9]=c->r[10]+0x00000004u; // 8017856C
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178570
  c->f[13]=c->ps1[13]=S(c->f[10]+c->f[12]); // 80178574
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 80178578
  W32(c->r[1]+0x0000002Cu,c->r[11]); // 8017857C
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 80178580
  c->f[7]=c->ps1[7]=S(c->f[13]*c->f[6]); // 80178584
  W32(c->r[1]+0x00000034u,c->r[7]); // 80178588
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 8017858C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[9]);} // 80178590
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[7]); // 80178594
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80178598
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[8]);} // 8017859C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[7]);} // 801785A0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 801785A4
  c->r[11]=R32(c->r[1]+0x00000044u); // 801785A8
  W32(c->r[1]+0x00000030u,c->r[9]); // 801785AC
  W32(c->r[12]+0x00000000u,c->r[11]); // 801785B0
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801785B4
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801785B8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801785BC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 801785C0
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 801785C4
  W32(c->r[10]+0x00000000u,c->r[7]); // 801785C8
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801785CC
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801785D0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801785D4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801785D8
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801785DC
  W32(c->r[8]+0x00000000u,c->r[7]); // 801785E0
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801785E4
  cmps(c,0,(int32_t)c->r[7],0); // 801785E8
  if (crb(c,2)) { goto L_80178644; } // 801785EC
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801785F0
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801785F4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801785F8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801785FC
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 80178600
  W32(c->r[3]+0x00000000u,c->r[7]); // 80178604
  c->r[3]=c->r[3]+0x00000004u; // 80178608
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017860C
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 80178610
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80178614
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 80178618
  c->r[7]=R32(c->r[1]+0x00000044u); // 8017861C
  W32(c->r[5]+0x00000000u,c->r[7]); // 80178620
  c->r[5]=c->r[5]+0x00000004u; // 80178624
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178628
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 8017862C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80178630
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 80178634
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 80178638
  W32(c->r[6]+0x00000000u,c->r[7]); // 8017863C
  c->r[6]=c->r[6]+0x00000004u; // 80178640
L_80178644:;
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 80178644
  c->r[8]=c->r[7]+0x00000001u; // 80178648
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 8017864C
  c->r[7]=R32(c->r[4]+0x00000018u); // 80178650
  cmpu(c,0,c->r[8],c->r[7]); // 80178654
  if (crb(c,0)) { goto L_80178660; } // 80178658
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 8017865C
L_80178660:;
  c->r[7]=R32(c->r[4]+0x00000010u); // 80178660
  c->r[8]=c->r[7]+0x00000001u; // 80178664
  W32(c->r[4]+0x00000010u,c->r[8]); // 80178668
  c->r[7]=R32(c->r[4]+0x00000018u); // 8017866C
  cmpu(c,0,c->r[8],c->r[7]); // 80178670
  if (crb(c,0)) { goto L_8017867C; } // 80178674
  W32(c->r[4]+0x00000010u,c->r[29]); // 80178678
L_8017867C:;
  c->r[7]=R32(c->r[4]+0x00000014u); // 8017867C
  c->r[9]=c->r[4]+0x00000008u; // 80178680
  c->r[8]=c->r[7]+0x00000001u; // 80178684
  W32(c->r[4]+0x00000014u,c->r[8]); // 80178688
  c->r[7]=R32(c->r[4]+0x00000018u); // 8017868C
  cmpu(c,0,c->r[8],c->r[7]); // 80178690
  if (crb(c,0)) { goto L_8017869C; } // 80178694
  W32(c->r[9]+0x0000000Cu,c->r[29]); // 80178698
L_8017869C:;
  c->r[8]=R32(c->r[4]+0x0000003Cu); // 8017869C
  cmps(c,0,(int32_t)c->r[8],0); // 801786A0
  if (crb(c,2)) { goto L_801786C0; } // 801786A4
  c->r[7]=R32(c->r[4]+0x00000038u); // 801786A8
  c->r[7]=c->r[7]+0x00000001u; // 801786AC
  cmpu(c,0,c->r[7],c->r[8]); // 801786B0
  W32(c->r[4]+0x00000038u,c->r[7]); // 801786B4
  if (crb(c,0)) { goto L_801786C0; } // 801786B8
  W32(c->r[4]+0x00000038u,c->r[29]); // 801786BC
L_801786C0:;
  c->r[7]=R32(c->r[4]+0x00000068u); // 801786C0
  c->r[8]=c->r[7]+0x00000001u; // 801786C4
  W32(c->r[4]+0x00000068u,c->r[8]); // 801786C8
  c->r[7]=R32(c->r[4]+0x00000074u); // 801786CC
  cmpu(c,0,c->r[8],c->r[7]); // 801786D0
  if (crb(c,0)) { goto L_801786DC; } // 801786D4
  W32(c->r[4]+0x00000068u,c->r[29]); // 801786D8
L_801786DC:;
  c->r[7]=R32(c->r[4]+0x0000006Cu); // 801786DC
  c->r[8]=c->r[7]+0x00000001u; // 801786E0
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 801786E4
  c->r[7]=R32(c->r[4]+0x00000078u); // 801786E8
  cmpu(c,0,c->r[8],c->r[7]); // 801786EC
  if (crb(c,0)) { goto L_801786F8; } // 801786F0
  W32(c->r[4]+0x0000006Cu,c->r[29]); // 801786F4
L_801786F8:;
  c->r[7]=R32(c->r[4]+0x00000070u); // 801786F8
  c->r[9]=c->r[4]+0x00000008u; // 801786FC
  c->r[8]=c->r[7]+0x00000001u; // 80178700
  W32(c->r[4]+0x00000070u,c->r[8]); // 80178704
  c->r[7]=R32(c->r[4]+0x0000007Cu); // 80178708
  cmpu(c,0,c->r[8],c->r[7]); // 8017870C
  if (crb(c,0)) { goto L_80178718; } // 80178710
  W32(c->r[9]+0x00000068u,c->r[29]); // 80178714
L_80178718:;
  c->r[7]=R32(c->r[4]+0x000000B0u); // 80178718
  c->r[8]=c->r[7]+0x00000001u; // 8017871C
  W32(c->r[4]+0x000000B0u,c->r[8]); // 80178720
  c->r[7]=R32(c->r[4]+0x000000B8u); // 80178724
  cmpu(c,0,c->r[8],c->r[7]); // 80178728
  if (crb(c,0)) { goto L_80178734; } // 8017872C
  W32(c->r[4]+0x000000B0u,c->r[29]); // 80178730
L_80178734:;
  c->r[7]=R32(c->r[4]+0x000000B4u); // 80178734
  c->r[8]=c->r[7]+0x00000001u; // 80178738
  W32(c->r[4]+0x000000B4u,c->r[8]); // 8017873C
  c->r[7]=R32(c->r[4]+0x000000BCu); // 80178740
  cmpu(c,0,c->r[8],c->r[7]); // 80178744
  if (crb(c,0)) { goto L_80178750; } // 80178748
  W32(c->r[4]+0x000000B4u,c->r[29]); // 8017874C
L_80178750:;
  c->r[31]=c->r[31]+0x00000001u; // 80178750
  cmpu(c,0,c->r[31],0x00000060u); // 80178754
  if (crb(c,0)) { IRQCHK(c); goto L_80178314; } // 80178758
L_8017875C:;
  c->r[11]=c->r[1]+0x00000070u; // 8017875C
  c->lr=0x80178764u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80178760
  c->r[0]=R32(c->r[1]+0x00000074u); // 80178764
  c->lr=c->r[0]; // 80178768
  c->r[1]=c->r[1]+0x00000070u; // 8017876C
  return; // 80178770
}

// __AllocDelayLine
void f_80178774(Ctx* __restrict c) {
  trace_call(0x80178774u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178774
  c->r[0]=c->lr; // 80178778
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017877C
  c->r[11]=c->r[1]+0x00000030u; // 80178780
  c->lr=0x80178788u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80178784
  c->r[23]=c->r[3]|c->r[3]; // 80178788
  c->r[24]=0u+0x00000000u; // 8017878C
  c->r[30]=c->r[23]|c->r[23]; // 80178790
  c->r[31]=0u+0x00000000u; // 80178794
  c->r[29]=c->r[23]|c->r[23]; // 80178798
  c->r[28]=c->r[23]|c->r[23]; // 8017879C
L_801787A0:;
  c->r[0]=R32(c->r[23]+0x0000001Cu); // 801787A0
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 801787A4
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801787A8
  c->ctr=c->r[12]; // 801787AC
  if (true) { c->lr=0x801787B4u; dispatch(c,c->ctr); } // 801787B0
  cmps(c,0,(int32_t)c->r[3],0); // 801787B4
  W32(c->r[30]+0x00000000u,c->r[3]); // 801787B8
  if (!crb(c,2)) { goto L_801787C8; } // 801787BC
  c->r[3]=0u+0x00000000u; // 801787C0
  goto L_801788D0; // 801787C4
L_801787C8:;
  c->r[0]=R32(c->r[23]+0x00000040u); // 801787C8
  cmps(c,0,(int32_t)c->r[0],0); // 801787CC
  if (crb(c,2)) { goto L_801787F8; } // 801787D0
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 801787D4
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801787D8
  c->ctr=c->r[12]; // 801787DC
  if (true) { c->lr=0x801787E4u; dispatch(c,c->ctr); } // 801787E0
  cmps(c,0,(int32_t)c->r[3],0); // 801787E4
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 801787E8
  if (!crb(c,2)) { goto L_801787FC; } // 801787EC
  c->r[3]=0u+0x00000000u; // 801787F0
  goto L_801788D0; // 801787F4
L_801787F8:;
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801787F8
L_801787FC:;
  c->r[26]=c->r[23]|c->r[23]; // 801787FC
  c->r[27]=c->r[29]|c->r[29]; // 80178800
  c->r[25]=0u+0x00000000u; // 80178804
L_80178808:;
  c->r[0]=R32(c->r[26]+0x00000080u); // 80178808
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 8017880C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178810
  c->ctr=c->r[12]; // 80178814
  if (true) { c->lr=0x8017881Cu; dispatch(c,c->ctr); } // 80178818
  cmps(c,0,(int32_t)c->r[3],0); // 8017881C
  W32(c->r[27]+0x00000044u,c->r[3]); // 80178820
  if (!crb(c,2)) { goto L_80178830; } // 80178824
  c->r[3]=0u+0x00000000u; // 80178828
  goto L_801788D0; // 8017882C
L_80178830:;
  c->r[25]=c->r[25]+0x00000001u; // 80178830
  c->r[27]=c->r[27]+0x00000004u; // 80178834
  cmpu(c,0,c->r[25],0x00000003u); // 80178838
  c->r[26]=c->r[26]+0x00000004u; // 8017883C
  if (crb(c,0)) { IRQCHK(c); goto L_80178808; } // 80178840
  c->r[27]=c->r[23]|c->r[23]; // 80178844
  c->r[26]=c->r[28]|c->r[28]; // 80178848
  c->r[25]=0u+0x00000000u; // 8017884C
L_80178850:;
  c->r[0]=R32(c->r[27]+0x000000C0u); // 80178850
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 80178854
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178858
  c->ctr=c->r[12]; // 8017885C
  if (true) { c->lr=0x80178864u; dispatch(c,c->ctr); } // 80178860
  cmps(c,0,(int32_t)c->r[3],0); // 80178864
  W32(c->r[26]+0x00000098u,c->r[3]); // 80178868
  if (!crb(c,2)) { goto L_80178878; } // 8017886C
  c->r[3]=0u+0x00000000u; // 80178870
  goto L_801788D0; // 80178874
L_80178878:;
  c->r[25]=c->r[25]+0x00000001u; // 80178878
  c->r[26]=c->r[26]+0x00000004u; // 8017887C
  cmpu(c,0,c->r[25],0x00000002u); // 80178880
  c->r[27]=c->r[27]+0x00000004u; // 80178884
  if (crb(c,0)) { IRQCHK(c); goto L_80178850; } // 80178888
  c->r[0]=R32(c->r[30]+0x000000ECu); // 8017888C
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 80178890
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178894
  c->ctr=c->r[12]; // 80178898
  if (true) { c->lr=0x801788A0u; dispatch(c,c->ctr); } // 8017889C
  cmps(c,0,(int32_t)c->r[3],0); // 801788A0
  W32(c->r[30]+0x000000C8u,c->r[3]); // 801788A4
  if (!crb(c,2)) { goto L_801788B4; } // 801788A8
  c->r[3]=0u+0x00000000u; // 801788AC
  goto L_801788D0; // 801788B0
L_801788B4:;
  c->r[24]=c->r[24]+0x00000001u; // 801788B4
  c->r[29]=c->r[29]+0x0000000Cu; // 801788B8
  cmpu(c,0,c->r[24],0x00000003u); // 801788BC
  c->r[28]=c->r[28]+0x00000008u; // 801788C0
  c->r[30]=c->r[30]+0x00000004u; // 801788C4
  if (crb(c,0)) { IRQCHK(c); goto L_801787A0; } // 801788C8
  c->r[3]=0u+0x00000001u; // 801788CC
L_801788D0:;
  c->r[11]=c->r[1]+0x00000030u; // 801788D0
  c->lr=0x801788D8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801788D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801788D8
  c->lr=c->r[0]; // 801788DC
  c->r[1]=c->r[1]+0x00000030u; // 801788E0
  return; // 801788E4
}

// __BzeroDelayLines
void f_801788E8(Ctx* __restrict c) {
  trace_call(0x801788E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801788E8
  c->r[0]=c->lr; // 801788EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801788F0
  c->r[11]=c->r[1]+0x00000030u; // 801788F4
  c->lr=0x801788FCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801788F8
  c->r[24]=c->r[3]|c->r[3]; // 801788FC
  c->r[25]=0u+0x00000000u; // 80178900
  c->r[31]=c->r[24]|c->r[24]; // 80178904
  c->r[30]=c->r[24]|c->r[24]; // 80178908
  c->r[29]=c->r[24]|c->r[24]; // 8017890C
L_80178910:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80178910
  cmps(c,0,(int32_t)c->r[3],0); // 80178914
  if (crb(c,2)) { goto L_8017892C; } // 80178918
  c->r[0]=R32(c->r[24]+0x0000001Cu); // 8017891C
  c->r[4]=0u+0x00000000u; // 80178920
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178924
  c->lr=0x8017892Cu; f_8000443C(c); // 80178928
L_8017892C:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 8017892C
  cmps(c,0,(int32_t)c->r[3],0); // 80178930
  if (crb(c,2)) { goto L_80178948; } // 80178934
  c->r[0]=R32(c->r[24]+0x00000040u); // 80178938
  c->r[4]=0u+0x00000000u; // 8017893C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178940
  c->lr=0x80178948u; f_8000443C(c); // 80178944
L_80178948:;
  c->r[27]=c->r[30]|c->r[30]; // 80178948
  c->r[28]=c->r[24]|c->r[24]; // 8017894C
  c->r[26]=0u+0x00000000u; // 80178950
L_80178954:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 80178954
  cmps(c,0,(int32_t)c->r[3],0); // 80178958
  if (crb(c,2)) { goto L_80178970; } // 8017895C
  c->r[0]=R32(c->r[28]+0x00000080u); // 80178960
  c->r[4]=0u+0x00000000u; // 80178964
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178968
  c->lr=0x80178970u; f_8000443C(c); // 8017896C
L_80178970:;
  c->r[26]=c->r[26]+0x00000001u; // 80178970
  c->r[28]=c->r[28]+0x00000004u; // 80178974
  cmpu(c,0,c->r[26],0x00000003u); // 80178978
  c->r[27]=c->r[27]+0x00000004u; // 8017897C
  if (crb(c,0)) { IRQCHK(c); goto L_80178954; } // 80178980
  c->r[28]=c->r[29]|c->r[29]; // 80178984
  c->r[27]=c->r[24]|c->r[24]; // 80178988
  c->r[26]=0u+0x00000000u; // 8017898C
L_80178990:;
  c->r[3]=R32(c->r[28]+0x00000098u); // 80178990
  cmps(c,0,(int32_t)c->r[3],0); // 80178994
  if (crb(c,2)) { goto L_801789AC; } // 80178998
  c->r[0]=R32(c->r[27]+0x000000C0u); // 8017899C
  c->r[4]=0u+0x00000000u; // 801789A0
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801789A4
  c->lr=0x801789ACu; f_8000443C(c); // 801789A8
L_801789AC:;
  c->r[26]=c->r[26]+0x00000001u; // 801789AC
  c->r[27]=c->r[27]+0x00000004u; // 801789B0
  cmpu(c,0,c->r[26],0x00000002u); // 801789B4
  c->r[28]=c->r[28]+0x00000004u; // 801789B8
  if (crb(c,0)) { IRQCHK(c); goto L_80178990; } // 801789BC
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801789C0
  cmps(c,0,(int32_t)c->r[3],0); // 801789C4
  if (crb(c,2)) { goto L_801789DC; } // 801789C8
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801789CC
  c->r[4]=0u+0x00000000u; // 801789D0
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801789D4
  c->lr=0x801789DCu; f_8000443C(c); // 801789D8
L_801789DC:;
  c->r[25]=c->r[25]+0x00000001u; // 801789DC
  c->r[30]=c->r[30]+0x0000000Cu; // 801789E0
  cmpu(c,0,c->r[25],0x00000003u); // 801789E4
  c->r[29]=c->r[29]+0x00000008u; // 801789E8
  c->r[31]=c->r[31]+0x00000004u; // 801789EC
  if (crb(c,0)) { IRQCHK(c); goto L_80178910; } // 801789F0
  c->r[11]=c->r[1]+0x00000030u; // 801789F4
  c->lr=0x801789FCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801789F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801789FC
  c->lr=c->r[0]; // 80178A00
  c->r[1]=c->r[1]+0x00000030u; // 80178A04
  return; // 80178A08
}

// __FreeDelayLine
void f_80178A0C(Ctx* __restrict c) {
  trace_call(0x80178A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178A0C
  c->r[0]=c->lr; // 80178A10
  W32(c->r[1]+0x00000034u,c->r[0]); // 80178A14
  c->r[11]=c->r[1]+0x00000030u; // 80178A18
  c->lr=0x80178A20u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80178A1C
  c->r[25]=0u+0x00000000u; // 80178A20
  c->r[30]=c->r[3]|c->r[3]; // 80178A24
  c->r[31]=0u+0x00000000u; // 80178A28
  c->r[29]=c->r[3]|c->r[3]; // 80178A2C
  c->r[28]=c->r[3]|c->r[3]; // 80178A30
L_80178A34:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80178A34
  cmps(c,0,(int32_t)c->r[3],0); // 80178A38
  if (crb(c,2)) { goto L_80178A50; } // 80178A3C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178A40
  c->ctr=c->r[12]; // 80178A44
  if (true) { c->lr=0x80178A4Cu; dispatch(c,c->ctr); } // 80178A48
  W32(c->r[30]+0x00000000u,c->r[31]); // 80178A4C
L_80178A50:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 80178A50
  cmps(c,0,(int32_t)c->r[3],0); // 80178A54
  if (crb(c,2)) { goto L_80178A6C; } // 80178A58
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178A5C
  c->ctr=c->r[12]; // 80178A60
  if (true) { c->lr=0x80178A68u; dispatch(c,c->ctr); } // 80178A64
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 80178A68
L_80178A6C:;
  c->r[27]=c->r[29]|c->r[29]; // 80178A6C
  c->r[26]=0u+0x00000000u; // 80178A70
L_80178A74:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 80178A74
  cmps(c,0,(int32_t)c->r[3],0); // 80178A78
  if (crb(c,2)) { goto L_80178A90; } // 80178A7C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178A80
  c->ctr=c->r[12]; // 80178A84
  if (true) { c->lr=0x80178A8Cu; dispatch(c,c->ctr); } // 80178A88
  W32(c->r[27]+0x00000044u,c->r[31]); // 80178A8C
L_80178A90:;
  c->r[26]=c->r[26]+0x00000001u; // 80178A90
  c->r[27]=c->r[27]+0x00000004u; // 80178A94
  cmpu(c,0,c->r[26],0x00000003u); // 80178A98
  if (crb(c,0)) { IRQCHK(c); goto L_80178A74; } // 80178A9C
  c->r[27]=c->r[28]|c->r[28]; // 80178AA0
  c->r[26]=0u+0x00000000u; // 80178AA4
L_80178AA8:;
  c->r[3]=R32(c->r[27]+0x00000098u); // 80178AA8
  cmps(c,0,(int32_t)c->r[3],0); // 80178AAC
  if (crb(c,2)) { goto L_80178AC4; } // 80178AB0
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178AB4
  c->ctr=c->r[12]; // 80178AB8
  if (true) { c->lr=0x80178AC0u; dispatch(c,c->ctr); } // 80178ABC
  W32(c->r[27]+0x00000098u,c->r[31]); // 80178AC0
L_80178AC4:;
  c->r[26]=c->r[26]+0x00000001u; // 80178AC4
  c->r[27]=c->r[27]+0x00000004u; // 80178AC8
  cmpu(c,0,c->r[26],0x00000002u); // 80178ACC
  if (crb(c,0)) { IRQCHK(c); goto L_80178AA8; } // 80178AD0
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80178AD4
  cmps(c,0,(int32_t)c->r[3],0); // 80178AD8
  if (crb(c,2)) { goto L_80178AF0; } // 80178ADC
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178AE0
  c->ctr=c->r[12]; // 80178AE4
  if (true) { c->lr=0x80178AECu; dispatch(c,c->ctr); } // 80178AE8
  W32(c->r[30]+0x000000C8u,c->r[31]); // 80178AEC
L_80178AF0:;
  c->r[25]=c->r[25]+0x00000001u; // 80178AF0
  c->r[29]=c->r[29]+0x0000000Cu; // 80178AF4
  cmpu(c,0,c->r[25],0x00000003u); // 80178AF8
  c->r[28]=c->r[28]+0x00000008u; // 80178AFC
  c->r[30]=c->r[30]+0x00000004u; // 80178B00
  if (crb(c,0)) { IRQCHK(c); goto L_80178A34; } // 80178B04
  c->r[11]=c->r[1]+0x00000030u; // 80178B08
  c->lr=0x80178B10u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80178B0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80178B10
  c->lr=c->r[0]; // 80178B14
  c->r[1]=c->r[1]+0x00000030u; // 80178B18
  return; // 80178B1C
}

// __InitParams
void f_80178B20(Ctx* __restrict c) {
  trace_call(0x80178B20u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178B20
  c->r[0]=c->lr; // 80178B24
  W32(c->r[1]+0x00000064u,c->r[0]); // 80178B28
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80178B2C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80178B30
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80178B34
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80178B38
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80178B3C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80178B40
  c->r[11]=c->r[1]+0x00000030u; // 80178B44
  c->lr=0x80178B4Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80178B48
  c->r[4]=R32(c->r[3]+0x00000110u); // 80178B4C
  c->r[31]=0u+0x802E0000u; // 80178B50
  c->r[30]=c->r[3]|c->r[3]; // 80178B54
  cmpu(c,0,c->r[4],0x00000008u); // 80178B58
  c->r[31]=c->r[31]+0xFFFFA4C0u; // 80178B5C
  if (crb(c,0)) { goto L_80178B6C; } // 80178B60
  c->r[3]=0u+0x00000000u; // 80178B64
  goto L_80178E14; // 80178B68
L_80178B6C:;
  {uint32_t ea=c->r[3]+0x00000118u; c->f[4]=c->ps1[4]=RF32(ea);} // 80178B6C
  {uint32_t ea=c->r[2]+0xFFFFAB3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80178B70
  fcmp(c,0,c->f[4],c->f[2]); // 80178B74
  if (crb(c,0)) { goto L_80178B88; } // 80178B78
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178B7C
  fcmp(c,0,c->f[4],c->f[0]); // 80178B80
  if (!crb(c,1)) { goto L_80178B90; } // 80178B84
L_80178B88:;
  c->r[3]=0u+0x00000000u; // 80178B88
  goto L_80178E14; // 80178B8C
L_80178B90:;
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 80178B90
  cmpu(c,0,c->r[0],0x00000006u); // 80178B94
  if (crb(c,0)) { goto L_80178BA4; } // 80178B98
  c->r[3]=0u+0x00000000u; // 80178B9C
  goto L_80178E14; // 80178BA0
L_80178BA4:;
  {uint32_t ea=c->r[3]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178BA4
  fcmp(c,0,c->f[0],c->f[2]); // 80178BA8
  if (!crb(c,0)) { goto L_80178BB8; } // 80178BAC
  c->r[3]=0u+0x00000000u; // 80178BB0
  goto L_80178E14; // 80178BB4
L_80178BB8:;
  {uint32_t ea=c->r[3]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178BB8
  fcmp(c,0,c->f[0],c->f[2]); // 80178BBC
  if (crb(c,0)) { goto L_80178BD0; } // 80178BC0
  {uint32_t ea=c->r[2]+0xFFFFAB40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178BC4
  fcmp(c,0,c->f[0],c->f[1]); // 80178BC8
  if (!crb(c,1)) { goto L_80178BD8; } // 80178BCC
L_80178BD0:;
  c->r[3]=0u+0x00000000u; // 80178BD0
  goto L_80178E14; // 80178BD4
L_80178BD8:;
  {uint32_t ea=c->r[3]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178BD8
  fcmp(c,0,c->f[0],c->f[2]); // 80178BDC
  if (crb(c,0)) { goto L_80178BEC; } // 80178BE0
  fcmp(c,0,c->f[0],c->f[1]); // 80178BE4
  if (!crb(c,1)) { goto L_80178BF4; } // 80178BE8
L_80178BEC:;
  c->r[3]=0u+0x00000000u; // 80178BEC
  goto L_80178E14; // 80178BF0
L_80178BF4:;
  {uint32_t ea=c->r[3]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178BF4
  fcmp(c,0,c->f[0],c->f[2]); // 80178BF8
  if (crb(c,0)) { goto L_80178C08; } // 80178BFC
  fcmp(c,0,c->f[0],c->f[1]); // 80178C00
  if (!crb(c,1)) { goto L_80178C10; } // 80178C04
L_80178C08:;
  c->r[3]=0u+0x00000000u; // 80178C08
  goto L_80178E14; // 80178C0C
L_80178C10:;
  {uint32_t ea=c->r[3]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 80178C10
  fcmp(c,0,c->f[3],c->f[2]); // 80178C14
  if (crb(c,0)) { goto L_80178C24; } // 80178C18
  fcmp(c,0,c->f[3],c->f[1]); // 80178C1C
  if (!crb(c,1)) { goto L_80178C2C; } // 80178C20
L_80178C24:;
  c->r[3]=0u+0x00000000u; // 80178C24
  goto L_80178E14; // 80178C28
L_80178C2C:;
  {uint32_t ea=c->r[3]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178C2C
  fcmp(c,0,c->f[0],c->f[2]); // 80178C30
  if (crb(c,0)) { goto L_80178C40; } // 80178C34
  fcmp(c,0,c->f[0],c->f[1]); // 80178C38
  if (!crb(c,1)) { goto L_80178C48; } // 80178C3C
L_80178C40:;
  c->r[3]=0u+0x00000000u; // 80178C40
  goto L_80178E14; // 80178C44
L_80178C48:;
  {uint32_t ea=c->r[3]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178C48
  fcmp(c,0,c->f[0],c->f[2]); // 80178C4C
  if (crb(c,0)) { goto L_80178C5C; } // 80178C50
  fcmp(c,0,c->f[0],c->f[1]); // 80178C54
  if (!crb(c,1)) { goto L_80178C64; } // 80178C58
L_80178C5C:;
  c->r[3]=0u+0x00000000u; // 80178C5C
  goto L_80178E14; // 80178C60
L_80178C64:;
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178C64
  fcmp(c,0,c->f[0],c->f[2]); // 80178C68
  if (crb(c,0)) { goto L_80178C78; } // 80178C6C
  fcmp(c,0,c->f[0],c->f[1]); // 80178C70
  if (!crb(c,1)) { goto L_80178C80; } // 80178C74
L_80178C78:;
  c->r[3]=0u+0x00000000u; // 80178C78
  goto L_80178E14; // 80178C7C
L_80178C80:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80178C80
  c->r[9]=c->r[31]+0x00000000u; // 80178C84
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178C88
  c->r[5]=c->r[31]+0x00000060u; // 80178C8C
  {uint32_t ea=c->r[2]+0xFFFFAB44u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178C90
  c->r[27]=0u+0x00000000u; // 80178C94
  c->r[7]=c->r[9]+c->r[8]; // 80178C98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 80178C9C
  c->r[6]=R32(c->r[7]+0x00000008u); // 80178CA0
  c->r[4]=c->r[5]+c->r[8]; // 80178CA4
  W32(c->r[3]+0x00000018u,c->r[6]); // 80178CA8
  c->r[0]=R32(c->r[9]+c->r[8]); // 80178CAC
  c->r[0]=c->r[6]-c->r[0]; // 80178CB0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80178CB4
  {uint32_t ea=c->r[5]+c->r[8]; c->f[0]=c->ps1[0]=RF32(ea);} // 80178CB8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80178CBC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80178CC0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80178CC4
  c->r[0]=R32(c->r[7]+0x00000004u); // 80178CC8
  c->r[0]=c->r[6]-c->r[0]; // 80178CCC
  W32(c->r[3]+0x00000010u,c->r[0]); // 80178CD0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178CD4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80178CD8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80178CDC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80178CE0
  c->r[0]=R32(c->r[7]+0x00000008u); // 80178CE4
  c->r[0]=c->r[6]-c->r[0]; // 80178CE8
  W32(c->r[3]+0x00000014u,c->r[0]); // 80178CEC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178CF0
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80178CF4
  W32(c->r[3]+0x00000038u,c->r[27]); // 80178CF8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80178CFC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80178D00
  c->lr=0x80178D08u; f_80252A7C(c); // 80178D04
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 80178D08
  c->r[26]=c->r[30]|c->r[30]; // 80178D0C
  {uint32_t ea=c->r[2]+0xFFFFAB70u; c->f[29]=RF64(ea);} // 80178D10
  c->r[28]=c->r[31]+0x000000C0u; // 80178D14
  {uint32_t ea=c->r[2]+0xFFFFAB58u; c->f[30]=c->ps1[30]=RF32(ea);} // 80178D18
  c->r[24]=0u+0x00000000u; // 80178D1C
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[31]=c->ps1[31]=RF32(ea);} // 80178D20
  c->r[25]=0u+0x00000000u; // 80178D24
  c->r[29]=0u+0x43300000u; // 80178D28
L_80178D2C:;
  W32(c->r[26]+0x00000068u,c->r[27]); // 80178D2C
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[1]=RF64(ea);} // 80178D30
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 80178D34
  W32(c->r[1]+0x00000008u,c->r[29]); // 80178D38
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80178D3C
  c->r[0]=c->r[25]+c->r[0]; // 80178D40
  c->r[0]=R32(c->r[28]+c->r[0]); // 80178D44
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80178D48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80178D4C
  W32(c->r[26]+0x00000074u,c->r[0]); // 80178D50
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 80178D54
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178D58
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 80178D5C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80178D60
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 80178D64
  c->lr=0x80178D6Cu; f_80262BAC(c); // 80178D68
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80178D6C
  c->r[24]=c->r[24]+0x00000001u; // 80178D70
  cmpu(c,0,c->r[24],0x00000003u); // 80178D74
  c->r[25]=c->r[25]+0x00000004u; // 80178D78
  {uint32_t ea=c->r[26]+0x0000008Cu; WF32(ea,c->f[0]);} // 80178D7C
  c->r[26]=c->r[26]+0x00000004u; // 80178D80
  if (crb(c,0)) { IRQCHK(c); goto L_80178D2C; } // 80178D84
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 80178D88
  c->r[4]=0u+0x00000000u; // 80178D8C
  W32(c->r[30]+0x000000B0u,c->r[4]); // 80178D90
  c->r[3]=c->r[31]+0x000000C0u; // 80178D94
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80178D98
  {uint32_t ea=c->r[2]+0xFFFFAB40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178D9C
  c->r[3]=c->r[3]+c->r[0]; // 80178DA0
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178DA4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80178DA8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80178DAC
  {uint32_t ea=c->r[2]+0xFFFFAB68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178DB0
  W32(c->r[30]+0x000000B8u,c->r[0]); // 80178DB4
  {uint32_t ea=c->r[30]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178DB8
  W32(c->r[30]+0x000000B4u,c->r[4]); // 80178DBC
  fcmp(c,0,c->f[1],c->f[0]); // 80178DC0
  c->r[0]=R32(c->r[3]+0x00000010u); // 80178DC4
  W32(c->r[30]+0x000000BCu,c->r[0]); // 80178DC8
  W32(c->r[30]+0x000000D4u,c->r[4]); // 80178DCC
  c->r[0]=R32(c->r[3]+0x00000014u); // 80178DD0
  W32(c->r[30]+0x000000E0u,c->r[0]); // 80178DD4
  W32(c->r[30]+0x000000D8u,c->r[4]); // 80178DD8
  c->r[0]=R32(c->r[3]+0x00000018u); // 80178DDC
  W32(c->r[30]+0x000000E4u,c->r[0]); // 80178DE0
  W32(c->r[30]+0x000000DCu,c->r[4]); // 80178DE4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80178DE8
  W32(c->r[30]+0x000000E8u,c->r[0]); // 80178DEC
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[2]);} // 80178DF0
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[1]);} // 80178DF4
  if (!crb(c,1)) { goto L_80178E00; } // 80178DF8
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[0]);} // 80178DFC
L_80178E00:;
  {uint32_t ea=c->r[2]+0xFFFFAB3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178E00
  c->r[3]=0u+0x00000001u; // 80178E04
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 80178E08
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[0]);} // 80178E0C
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 80178E10
L_80178E14:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80178E14
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80178E18
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80178E1C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80178E20
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80178E24
  c->r[11]=c->r[1]+0x00000030u; // 80178E28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80178E2C
  c->lr=0x80178E34u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80178E30
  c->r[0]=R32(c->r[1]+0x00000064u); // 80178E34
  c->lr=c->r[0]; // 80178E38
  c->r[1]=c->r[1]+0x00000060u; // 80178E3C
  return; // 80178E40
}

// fn_80178E44
void f_80178E44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178E44
  {uint32_t ea=c->r[2]+0xFFFFAB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178E48
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178E4C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80178E50
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80178E54
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80178E58
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80178E5C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80178E60
  c->r[1]=c->r[1]+0x00000010u; // 80178E64
  return; // 80178E68
}

// fn_80178E6C
void f_80178E6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178E6C
  c->r[0]=c->lr; // 80178E70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80178E74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80178E78
  W32(c->r[1]+0x00000018u,c->r[30]); // 80178E7C
  c->r[30]=c->r[3]|c->r[3]; // 80178E80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80178E84
  c->lr=0x80178E8Cu; f_80154410(c); // 80178E88
  {uint32_t ea=c->r[30]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80178E8C
  c->r[29]=0u+0x00000001u; // 80178E90
  {uint32_t ea=c->r[2]+0xFFFFAB7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80178E94
  c->r[31]=c->r[3]|c->r[3]; // 80178E98
  W32(c->r[30]+0x00000034u,c->r[29]); // 80178E9C
  fcmp(c,0,c->f[1],c->f[0]); // 80178EA0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80178EA4
  if (!crb(c,2)) { goto L_80178F38; } // 80178EA8
  c->lr=0x80178EB0u; f_80154410(c); // 80178EAC
  c->r[0]=R32(c->r[30]+0x00000034u); // 80178EB0
  c->r[29]=c->r[3]|c->r[3]; // 80178EB4
  c->r[3]=R32(c->r[30]+0x00000000u); // 80178EB8
  c->r[0]=c->r[0]|0x00000001u; // 80178EBC
  cmps(c,0,(int32_t)c->r[3],0); // 80178EC0
  W32(c->r[30]+0x00000034u,c->r[0]); // 80178EC4
  if (crb(c,2)) { goto L_80178EE0; } // 80178EC8
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178ECC
  c->ctr=c->r[12]; // 80178ED0
  if (true) { c->lr=0x80178ED8u; dispatch(c,c->ctr); } // 80178ED4
  c->r[0]=0u+0x00000000u; // 80178ED8
  W32(c->r[30]+0x00000000u,c->r[0]); // 80178EDC
L_80178EE0:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80178EE0
  cmps(c,0,(int32_t)c->r[3],0); // 80178EE4
  if (crb(c,2)) { goto L_80178F00; } // 80178EE8
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178EEC
  c->ctr=c->r[12]; // 80178EF0
  if (true) { c->lr=0x80178EF8u; dispatch(c,c->ctr); } // 80178EF4
  c->r[0]=0u+0x00000000u; // 80178EF8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80178EFC
L_80178F00:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80178F00
  cmps(c,0,(int32_t)c->r[3],0); // 80178F04
  if (crb(c,2)) { goto L_80178F20; } // 80178F08
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178F0C
  c->ctr=c->r[12]; // 80178F10
  if (true) { c->lr=0x80178F18u; dispatch(c,c->ctr); } // 80178F14
  c->r[0]=0u+0x00000000u; // 80178F18
  W32(c->r[30]+0x00000008u,c->r[0]); // 80178F1C
L_80178F20:;
  c->r[3]=c->r[29]|c->r[29]; // 80178F20
  c->lr=0x80178F28u; f_80154438(c); // 80178F24
  c->r[3]=c->r[31]|c->r[31]; // 80178F28
  c->lr=0x80178F30u; f_80154438(c); // 80178F2C
  c->r[3]=0u+0x00000000u; // 80178F30
  goto L_80179114; // 80178F34
L_80178F38:;
  {uint32_t ea=c->r[2]+0xFFFFAB78u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178F38
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80178F3C
  c->lr=0x80178F44u; f_80252A7C(c); // 80178F40
  cmps(c,0,(int32_t)c->r[3],0); // 80178F44
  W32(c->r[30]+0x00000014u,c->r[3]); // 80178F48
  if (!crb(c,2)) { goto L_80178F54; } // 80178F4C
  W32(c->r[30]+0x00000014u,c->r[29]); // 80178F50
L_80178F54:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 80178F54
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 80178F58
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178F5C
  c->ctr=c->r[12]; // 80178F60
  if (true) { c->lr=0x80178F68u; dispatch(c,c->ctr); } // 80178F64
  cmps(c,0,(int32_t)c->r[3],0); // 80178F68
  W32(c->r[30]+0x00000000u,c->r[3]); // 80178F6C
  if (!crb(c,2)) { goto L_80178F7C; } // 80178F70
  c->r[0]=0u+0x00000000u; // 80178F74
  goto L_80178FC8; // 80178F78
L_80178F7C:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 80178F7C
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 80178F80
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178F84
  c->ctr=c->r[12]; // 80178F88
  if (true) { c->lr=0x80178F90u; dispatch(c,c->ctr); } // 80178F8C
  cmps(c,0,(int32_t)c->r[3],0); // 80178F90
  W32(c->r[30]+0x00000004u,c->r[3]); // 80178F94
  if (!crb(c,2)) { goto L_80178FA4; } // 80178F98
  c->r[0]=0u+0x00000000u; // 80178F9C
  goto L_80178FC8; // 80178FA0
L_80178FA4:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 80178FA4
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 80178FA8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80178FAC
  c->ctr=c->r[12]; // 80178FB0
  if (true) { c->lr=0x80178FB8u; dispatch(c,c->ctr); } // 80178FB4
  c->r[0]=0u-c->r[3]; // 80178FB8
  W32(c->r[30]+0x00000008u,c->r[3]); // 80178FBC
  c->r[0]=c->r[0]|c->r[3]; // 80178FC0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80178FC4
L_80178FC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80178FC8
  if (!crb(c,2)) { goto L_8017905C; } // 80178FCC
  c->lr=0x80178FD4u; f_80154410(c); // 80178FD0
  c->r[0]=R32(c->r[30]+0x00000034u); // 80178FD4
  c->r[29]=c->r[3]|c->r[3]; // 80178FD8
  c->r[3]=R32(c->r[30]+0x00000000u); // 80178FDC
  c->r[0]=c->r[0]|0x00000001u; // 80178FE0
  cmps(c,0,(int32_t)c->r[3],0); // 80178FE4
  W32(c->r[30]+0x00000034u,c->r[0]); // 80178FE8
  if (crb(c,2)) { goto L_80179004; } // 80178FEC
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80178FF0
  c->ctr=c->r[12]; // 80178FF4
  if (true) { c->lr=0x80178FFCu; dispatch(c,c->ctr); } // 80178FF8
  c->r[0]=0u+0x00000000u; // 80178FFC
  W32(c->r[30]+0x00000000u,c->r[0]); // 80179000
L_80179004:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80179004
  cmps(c,0,(int32_t)c->r[3],0); // 80179008
  if (crb(c,2)) { goto L_80179024; } // 8017900C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80179010
  c->ctr=c->r[12]; // 80179014
  if (true) { c->lr=0x8017901Cu; dispatch(c,c->ctr); } // 80179018
  c->r[0]=0u+0x00000000u; // 8017901C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80179020
L_80179024:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80179024
  cmps(c,0,(int32_t)c->r[3],0); // 80179028
  if (crb(c,2)) { goto L_80179044; } // 8017902C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80179030
  c->ctr=c->r[12]; // 80179034
  if (true) { c->lr=0x8017903Cu; dispatch(c,c->ctr); } // 80179038
  c->r[0]=0u+0x00000000u; // 8017903C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80179040
L_80179044:;
  c->r[3]=c->r[29]|c->r[29]; // 80179044
  c->lr=0x8017904Cu; f_80154438(c); // 80179048
  c->r[3]=c->r[31]|c->r[31]; // 8017904C
  c->lr=0x80179054u; f_80154438(c); // 80179050
  c->r[3]=0u+0x00000000u; // 80179054
  goto L_80179114; // 80179058
L_8017905C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017905C
  c->lr=0x80179064u; f_801796D8(c); // 80179060
  cmps(c,0,(int32_t)c->r[3],0); // 80179064
  if (!crb(c,2)) { goto L_801790F8; } // 80179068
  c->lr=0x80179070u; f_80154410(c); // 8017906C
  c->r[0]=R32(c->r[30]+0x00000034u); // 80179070
  c->r[29]=c->r[3]|c->r[3]; // 80179074
  c->r[3]=R32(c->r[30]+0x00000000u); // 80179078
  c->r[0]=c->r[0]|0x00000001u; // 8017907C
  cmps(c,0,(int32_t)c->r[3],0); // 80179080
  W32(c->r[30]+0x00000034u,c->r[0]); // 80179084
  if (crb(c,2)) { goto L_801790A0; } // 80179088
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017908C
  c->ctr=c->r[12]; // 80179090
  if (true) { c->lr=0x80179098u; dispatch(c,c->ctr); } // 80179094
  c->r[0]=0u+0x00000000u; // 80179098
  W32(c->r[30]+0x00000000u,c->r[0]); // 8017909C
L_801790A0:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801790A0
  cmps(c,0,(int32_t)c->r[3],0); // 801790A4
  if (crb(c,2)) { goto L_801790C0; } // 801790A8
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 801790AC
  c->ctr=c->r[12]; // 801790B0
  if (true) { c->lr=0x801790B8u; dispatch(c,c->ctr); } // 801790B4
  c->r[0]=0u+0x00000000u; // 801790B8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801790BC
L_801790C0:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 801790C0
  cmps(c,0,(int32_t)c->r[3],0); // 801790C4
  if (crb(c,2)) { goto L_801790E0; } // 801790C8
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 801790CC
  c->ctr=c->r[12]; // 801790D0
  if (true) { c->lr=0x801790D8u; dispatch(c,c->ctr); } // 801790D4
  c->r[0]=0u+0x00000000u; // 801790D8
  W32(c->r[30]+0x00000008u,c->r[0]); // 801790DC
L_801790E0:;
  c->r[3]=c->r[29]|c->r[29]; // 801790E0
  c->lr=0x801790E8u; f_80154438(c); // 801790E4
  c->r[3]=c->r[31]|c->r[31]; // 801790E8
  c->lr=0x801790F0u; f_80154438(c); // 801790EC
  c->r[3]=0u+0x00000000u; // 801790F0
  goto L_80179114; // 801790F4
L_801790F8:;
  c->r[0]=R32(c->r[30]+0x00000034u); // 801790F8
  c->r[3]=c->r[31]|c->r[31]; // 801790FC
  c->r[0]=c->r[0]|0x00000002u; // 80179100
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80179104
  W32(c->r[30]+0x00000034u,c->r[0]); // 80179108
  c->lr=0x80179110u; f_80154438(c); // 8017910C
  c->r[3]=0u+0x00000001u; // 80179110
L_80179114:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179114
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80179118
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017911C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80179120
  c->lr=c->r[0]; // 80179124
  c->r[1]=c->r[1]+0x00000020u; // 80179128
  return; // 8017912C
}

// fn_80179130
void f_80179130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179130
  c->r[0]=c->lr; // 80179134
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179138
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017913C
  c->r[31]=c->r[3]|c->r[3]; // 80179140
  W32(c->r[1]+0x00000018u,c->r[30]); // 80179144
  W32(c->r[1]+0x00000014u,c->r[29]); // 80179148
  c->lr=0x80179150u; f_80154410(c); // 8017914C
  c->r[0]=R32(c->r[31]+0x00000034u); // 80179150
  c->r[29]=c->r[3]|c->r[3]; // 80179154
  c->r[0]=c->r[0]|0x00000001u; // 80179158
  W32(c->r[31]+0x00000034u,c->r[0]); // 8017915C
  c->lr=0x80179164u; f_80154410(c); // 80179160
  c->r[0]=R32(c->r[31]+0x00000034u); // 80179164
  c->r[30]=c->r[3]|c->r[3]; // 80179168
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017916C
  c->r[0]=c->r[0]|0x00000001u; // 80179170
  cmps(c,0,(int32_t)c->r[3],0); // 80179174
  W32(c->r[31]+0x00000034u,c->r[0]); // 80179178
  if (crb(c,2)) { goto L_80179194; } // 8017917C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80179180
  c->ctr=c->r[12]; // 80179184
  if (true) { c->lr=0x8017918Cu; dispatch(c,c->ctr); } // 80179188
  c->r[0]=0u+0x00000000u; // 8017918C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80179190
L_80179194:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80179194
  cmps(c,0,(int32_t)c->r[3],0); // 80179198
  if (crb(c,2)) { goto L_801791B4; } // 8017919C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 801791A0
  c->ctr=c->r[12]; // 801791A4
  if (true) { c->lr=0x801791ACu; dispatch(c,c->ctr); } // 801791A8
  c->r[0]=0u+0x00000000u; // 801791AC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801791B0
L_801791B4:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801791B4
  cmps(c,0,(int32_t)c->r[3],0); // 801791B8
  if (crb(c,2)) { goto L_801791D4; } // 801791BC
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 801791C0
  c->ctr=c->r[12]; // 801791C4
  if (true) { c->lr=0x801791CCu; dispatch(c,c->ctr); } // 801791C8
  c->r[0]=0u+0x00000000u; // 801791CC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801791D0
L_801791D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801791D4
  c->lr=0x801791DCu; f_80154438(c); // 801791D8
  c->r[3]=c->r[31]|c->r[31]; // 801791DC
  c->lr=0x801791E4u; f_80178E6C(c); // 801791E0
  cmps(c,0,(int32_t)c->r[3],0); // 801791E4
  if (!crb(c,2)) { goto L_80179278; } // 801791E8
  c->lr=0x801791F0u; f_80154410(c); // 801791EC
  c->r[0]=R32(c->r[31]+0x00000034u); // 801791F0
  c->r[30]=c->r[3]|c->r[3]; // 801791F4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801791F8
  c->r[0]=c->r[0]|0x00000001u; // 801791FC
  cmps(c,0,(int32_t)c->r[3],0); // 80179200
  W32(c->r[31]+0x00000034u,c->r[0]); // 80179204
  if (crb(c,2)) { goto L_80179220; } // 80179208
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017920C
  c->ctr=c->r[12]; // 80179210
  if (true) { c->lr=0x80179218u; dispatch(c,c->ctr); } // 80179214
  c->r[0]=0u+0x00000000u; // 80179218
  W32(c->r[31]+0x00000000u,c->r[0]); // 8017921C
L_80179220:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80179220
  cmps(c,0,(int32_t)c->r[3],0); // 80179224
  if (crb(c,2)) { goto L_80179240; } // 80179228
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017922C
  c->ctr=c->r[12]; // 80179230
  if (true) { c->lr=0x80179238u; dispatch(c,c->ctr); } // 80179234
  c->r[0]=0u+0x00000000u; // 80179238
  W32(c->r[31]+0x00000004u,c->r[0]); // 8017923C
L_80179240:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80179240
  cmps(c,0,(int32_t)c->r[3],0); // 80179244
  if (crb(c,2)) { goto L_80179260; } // 80179248
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017924C
  c->ctr=c->r[12]; // 80179250
  if (true) { c->lr=0x80179258u; dispatch(c,c->ctr); } // 80179254
  c->r[0]=0u+0x00000000u; // 80179258
  W32(c->r[31]+0x00000008u,c->r[0]); // 8017925C
L_80179260:;
  c->r[3]=c->r[30]|c->r[30]; // 80179260
  c->lr=0x80179268u; f_80154438(c); // 80179264
  c->r[3]=c->r[29]|c->r[29]; // 80179268
  c->lr=0x80179270u; f_80154438(c); // 8017926C
  c->r[3]=0u+0x00000000u; // 80179270
  goto L_80179294; // 80179274
L_80179278:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 80179278
  c->r[3]=c->r[29]|c->r[29]; // 8017927C
  c->r[0]=c->r[0]|0x00000002u; // 80179280
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80179284
  W32(c->r[31]+0x00000034u,c->r[0]); // 80179288
  c->lr=0x80179290u; f_80154438(c); // 8017928C
  c->r[3]=0u+0x00000001u; // 80179290
L_80179294:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179294
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80179298
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017929C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801792A0
  c->lr=c->r[0]; // 801792A4
  c->r[1]=c->r[1]+0x00000020u; // 801792A8
  return; // 801792AC
}

// fn_801792B0
void f_801792B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801792B0
  c->r[0]=c->lr; // 801792B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801792B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801792BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801792C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801792C4
  c->r[29]=c->r[3]|c->r[3]; // 801792C8
  c->lr=0x801792D0u; f_80154410(c); // 801792CC
  c->r[0]=R32(c->r[29]+0x00000034u); // 801792D0
  c->r[30]=c->r[3]|c->r[3]; // 801792D4
  c->r[3]=c->r[29]|c->r[29]; // 801792D8
  c->r[0]=c->r[0]|0x00000001u; // 801792DC
  W32(c->r[29]+0x00000034u,c->r[0]); // 801792E0
  c->lr=0x801792E8u; f_801796D8(c); // 801792E4
  cmps(c,0,(int32_t)c->r[3],0); // 801792E8
  if (!crb(c,2)) { goto L_8017937C; } // 801792EC
  c->lr=0x801792F4u; f_80154410(c); // 801792F0
  c->r[0]=R32(c->r[29]+0x00000034u); // 801792F4
  c->r[31]=c->r[3]|c->r[3]; // 801792F8
  c->r[3]=R32(c->r[29]+0x00000000u); // 801792FC
  c->r[0]=c->r[0]|0x00000001u; // 80179300
  cmps(c,0,(int32_t)c->r[3],0); // 80179304
  W32(c->r[29]+0x00000034u,c->r[0]); // 80179308
  if (crb(c,2)) { goto L_80179324; } // 8017930C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80179310
  c->ctr=c->r[12]; // 80179314
  if (true) { c->lr=0x8017931Cu; dispatch(c,c->ctr); } // 80179318
  c->r[0]=0u+0x00000000u; // 8017931C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80179320
L_80179324:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80179324
  cmps(c,0,(int32_t)c->r[3],0); // 80179328
  if (crb(c,2)) { goto L_80179344; } // 8017932C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80179330
  c->ctr=c->r[12]; // 80179334
  if (true) { c->lr=0x8017933Cu; dispatch(c,c->ctr); } // 80179338
  c->r[0]=0u+0x00000000u; // 8017933C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80179340
L_80179344:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 80179344
  cmps(c,0,(int32_t)c->r[3],0); // 80179348
  if (crb(c,2)) { goto L_80179364; } // 8017934C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 80179350
  c->ctr=c->r[12]; // 80179354
  if (true) { c->lr=0x8017935Cu; dispatch(c,c->ctr); } // 80179358
  c->r[0]=0u+0x00000000u; // 8017935C
  W32(c->r[29]+0x00000008u,c->r[0]); // 80179360
L_80179364:;
  c->r[3]=c->r[31]|c->r[31]; // 80179364
  c->lr=0x8017936Cu; f_80154438(c); // 80179368
  c->r[3]=c->r[30]|c->r[30]; // 8017936C
  c->lr=0x80179374u; f_80154438(c); // 80179370
  c->r[3]=0u+0x00000000u; // 80179374
  goto L_80179398; // 80179378
L_8017937C:;
  c->r[0]=R32(c->r[29]+0x00000034u); // 8017937C
  c->r[3]=c->r[30]|c->r[30]; // 80179380
  c->r[0]=c->r[0]|0x00000002u; // 80179384
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80179388
  W32(c->r[29]+0x00000034u,c->r[0]); // 8017938C
  c->lr=0x80179394u; f_80154438(c); // 80179390
  c->r[3]=0u+0x00000001u; // 80179394
L_80179398:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179398
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017939C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801793A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801793A4
  c->lr=c->r[0]; // 801793A8
  c->r[1]=c->r[1]+0x00000020u; // 801793AC
  return; // 801793B0
}

// fn_801793B4
void f_801793B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801793B4
  c->r[0]=c->lr; // 801793B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801793BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801793C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801793C4
  c->r[30]=c->r[3]|c->r[3]; // 801793C8
  c->lr=0x801793D0u; f_80154410(c); // 801793CC
  c->r[0]=R32(c->r[30]+0x00000034u); // 801793D0
  c->r[31]=c->r[3]|c->r[3]; // 801793D4
  c->r[3]=R32(c->r[30]+0x00000000u); // 801793D8
  c->r[0]=c->r[0]|0x00000001u; // 801793DC
  cmps(c,0,(int32_t)c->r[3],0); // 801793E0
  W32(c->r[30]+0x00000034u,c->r[0]); // 801793E4
  if (crb(c,2)) { goto L_80179400; } // 801793E8
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 801793EC
  c->ctr=c->r[12]; // 801793F0
  if (true) { c->lr=0x801793F8u; dispatch(c,c->ctr); } // 801793F4
  c->r[0]=0u+0x00000000u; // 801793F8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801793FC
L_80179400:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80179400
  cmps(c,0,(int32_t)c->r[3],0); // 80179404
  if (crb(c,2)) { goto L_80179420; } // 80179408
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017940C
  c->ctr=c->r[12]; // 80179410
  if (true) { c->lr=0x80179418u; dispatch(c,c->ctr); } // 80179414
  c->r[0]=0u+0x00000000u; // 80179418
  W32(c->r[30]+0x00000004u,c->r[0]); // 8017941C
L_80179420:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80179420
  cmps(c,0,(int32_t)c->r[3],0); // 80179424
  if (crb(c,2)) { goto L_80179440; } // 80179428
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017942C
  c->ctr=c->r[12]; // 80179430
  if (true) { c->lr=0x80179438u; dispatch(c,c->ctr); } // 80179434
  c->r[0]=0u+0x00000000u; // 80179438
  W32(c->r[30]+0x00000008u,c->r[0]); // 8017943C
L_80179440:;
  c->r[3]=c->r[31]|c->r[31]; // 80179440
  c->lr=0x80179448u; f_80154438(c); // 80179444
  c->r[0]=R32(c->r[1]+0x00000014u); // 80179448
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017944C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80179450
  c->lr=c->r[0]; // 80179454
  c->r[1]=c->r[1]+0x00000010u; // 80179458
  return; // 8017945C
}

// fn_80179460
void f_80179460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179460
  c->r[0]=c->lr; // 80179464
  W32(c->r[1]+0x00000044u,c->r[0]); // 80179468
  c->r[11]=c->r[1]+0x00000040u; // 8017946C
  c->lr=0x80179474u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80179470
  c->r[0]=R32(c->r[4]+0x00000034u); // 80179474
  cmps(c,0,(int32_t)c->r[0],0); // 80179478
  if (crb(c,2)) { goto L_8017948C; } // 8017947C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80179480
  W32(c->r[4]+0x00000034u,c->r[0]); // 80179484
  goto L_801796C0; // 80179488
L_8017948C:;
  c->r[6]=R32(c->r[4]+0x00000048u); // 8017948C
  c->r[10]=R32(c->r[4]+0x00000028u); // 80179490
  cmps(c,0,(int32_t)c->r[6],0); // 80179494
  c->r[11]=R32(c->r[3]+0x00000000u); // 80179498
  c->r[12]=R32(c->r[3]+0x00000004u); // 8017949C
  c->r[24]=addc(c,~c->r[10],0x00000080u,1); // 801794A0
  c->r[31]=R32(c->r[3]+0x00000008u); // 801794A4
  if (crb(c,2)) { goto L_801794B8; } // 801794A8
  c->r[3]=R32(c->r[6]+0x00000000u); // 801794AC
  c->r[5]=R32(c->r[6]+0x00000004u); // 801794B0
  c->r[6]=R32(c->r[6]+0x00000008u); // 801794B4
L_801794B8:;
  c->r[20]=R32(c->r[4]+0x0000004Cu); // 801794B8
  cmps(c,0,(int32_t)c->r[20],0); // 801794BC
  if (crb(c,2)) { goto L_801794D0; } // 801794C0
  c->r[7]=R32(c->r[20]+0x00000000u); // 801794C4
  c->r[8]=R32(c->r[20]+0x00000004u); // 801794C8
  c->r[9]=R32(c->r[20]+0x00000008u); // 801794CC
L_801794D0:;
  c->r[25]=0u+0x00000060u; // 801794D0
  c->r[0]=0u+0x00000000u; // 801794D4
  c->ctr=c->r[25]; // 801794D8
L_801794DC:;
  c->r[21]=R32(c->r[4]+0x0000000Cu); // 801794DC
  c->r[20]=R32(c->r[4]+0x00000048u); // 801794E0
  c->r[23]=rotl(c->r[21],2)&0xFFFFFFFCu; // 801794E4
  c->r[22]=R32(c->r[4]+0x00000000u); // 801794E8
  c->r[21]=R32(c->r[4]+0x00000004u); // 801794EC
  cmps(c,0,(int32_t)c->r[20],0); // 801794F0
  c->r[20]=R32(c->r[4]+0x00000008u); // 801794F4
  c->r[30]=R32(c->r[22]+c->r[23]); // 801794F8
  c->r[29]=R32(c->r[21]+c->r[23]); // 801794FC
  c->r[28]=R32(c->r[20]+c->r[23]); // 80179500
  if (crb(c,2)) { goto L_8017956C; } // 80179504
  c->r[20]=R32(c->r[3]+0x00000000u); // 80179508
  c->r[3]=c->r[3]+0x00000004u; // 8017950C
  c->r[22]=R32(c->r[11]+0x00000000u); // 80179510
  c->r[23]=R32(c->r[31]+0x00000000u); // 80179514
  c->r[20]=c->r[22]+c->r[20]; // 80179518
  c->r[22]=R32(c->r[6]+0x00000000u); // 8017951C
  c->r[27]=R32(c->r[4]+0x0000001Cu); // 80179520
  c->r[20]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[20]); // 80179524
  c->r[22]=c->r[23]+c->r[22]; // 80179528
  c->r[21]=R32(c->r[5]+0x00000000u); // 8017952C
  c->r[25]=R32(c->r[12]+0x00000000u); // 80179530
  c->r[5]=c->r[5]+0x00000004u; // 80179534
  c->r[6]=c->r[6]+0x00000004u; // 80179538
  c->r[26]=c->r[25]+c->r[21]; // 8017953C
  c->r[21]=R32(c->r[4]+0x00000024u); // 80179540
  c->r[23]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[27]); // 80179544
  c->r[25]=R32(c->r[4]+0x00000020u); // 80179548
  c->r[27]=c->r[20]+c->r[23]; // 8017954C
  c->r[26]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[26]); // 80179550
  c->r[23]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[25]); // 80179554
  c->r[22]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[22]); // 80179558
  c->r[26]=c->r[26]+c->r[23]; // 8017955C
  c->r[21]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[21]); // 80179560
  c->r[25]=c->r[22]+c->r[21]; // 80179564
  goto L_801795A8; // 80179568
L_8017956C:;
  c->r[21]=R32(c->r[11]+0x00000000u); // 8017956C
  c->r[26]=R32(c->r[4]+0x0000001Cu); // 80179570
  c->r[25]=R32(c->r[12]+0x00000000u); // 80179574
  c->r[27]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[21]); // 80179578
  c->r[23]=R32(c->r[4]+0x00000020u); // 8017957C
  c->r[22]=R32(c->r[31]+0x00000000u); // 80179580
  c->r[21]=R32(c->r[4]+0x00000024u); // 80179584
  c->r[26]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[26]); // 80179588
  c->r[25]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[25]); // 8017958C
  c->r[27]=c->r[27]+c->r[26]; // 80179590
  c->r[23]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[23]); // 80179594
  c->r[22]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[22]); // 80179598
  c->r[26]=c->r[25]+c->r[23]; // 8017959C
  c->r[21]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[21]); // 801795A0
  c->r[25]=c->r[22]+c->r[21]; // 801795A4
L_801795A8:;
  c->r[21]=R32(c->r[4]+0x00000018u); // 801795A8
  c->r[27]=sraw(c,c->r[27],7); // 801795AC
  c->r[26]=sraw(c,c->r[26],7); // 801795B0
  c->r[22]=R32(c->r[4]+0x0000000Cu); // 801795B4
  c->r[21]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[21]); // 801795B8
  c->r[25]=sraw(c,c->r[25],7); // 801795BC
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 801795C0
  c->r[22]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801795C4
  c->r[23]=R32(c->r[4]+0x00000000u); // 801795C8
  W32(c->r[4]+0x00000020u,c->r[26]); // 801795CC
  c->r[21]=sraw(c,c->r[21],7); // 801795D0
  W32(c->r[4]+0x00000024u,c->r[25]); // 801795D4
  c->r[27]=c->r[27]+c->r[21]; // 801795D8
  W32(c->r[23]+c->r[22],c->r[27]); // 801795DC
  c->r[23]=R32(c->r[4]+0x00000018u); // 801795E0
  c->r[22]=R32(c->r[4]+0x0000000Cu); // 801795E4
  c->r[27]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[23]); // 801795E8
  c->r[23]=R32(c->r[4]+0x00000004u); // 801795EC
  c->r[22]=rotl(c->r[22],2)&0xFFFFFFFCu; // 801795F0
  c->r[27]=sraw(c,c->r[27],7); // 801795F4
  c->r[26]=c->r[26]+c->r[27]; // 801795F8
  W32(c->r[23]+c->r[22],c->r[26]); // 801795FC
  c->r[22]=R32(c->r[4]+0x00000018u); // 80179600
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 80179604
  c->r[22]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[22]); // 80179608
  c->r[23]=R32(c->r[4]+0x00000008u); // 8017960C
  c->r[26]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80179610
  c->r[27]=c->r[27]+0x00000001u; // 80179614
  c->r[22]=sraw(c,c->r[22],7); // 80179618
  c->r[25]=c->r[25]+c->r[22]; // 8017961C
  W32(c->r[23]+c->r[26],c->r[25]); // 80179620
  c->r[25]=R32(c->r[4]+0x00000010u); // 80179624
  W32(c->r[4]+0x0000000Cu,c->r[27]); // 80179628
  cmpu(c,0,c->r[27],c->r[25]); // 8017962C
  if (crb(c,0)) { goto L_80179638; } // 80179630
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80179634
L_80179638:;
  c->r[25]=R32(c->r[4]+0x0000002Cu); // 80179638
  c->r[25]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[25]); // 8017963C
  c->r[25]=sraw(c,c->r[25],7); // 80179640
  W32(c->r[11]+0x00000000u,c->r[25]); // 80179644
  c->r[11]=c->r[11]+0x00000004u; // 80179648
  c->r[25]=R32(c->r[4]+0x0000002Cu); // 8017964C
  c->r[25]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[25]); // 80179650
  c->r[25]=sraw(c,c->r[25],7); // 80179654
  W32(c->r[12]+0x00000000u,c->r[25]); // 80179658
  c->r[12]=c->r[12]+0x00000004u; // 8017965C
  c->r[25]=R32(c->r[4]+0x0000002Cu); // 80179660
  c->r[25]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[25]); // 80179664
  c->r[25]=sraw(c,c->r[25],7); // 80179668
  W32(c->r[31]+0x00000000u,c->r[25]); // 8017966C
  c->r[31]=c->r[31]+0x00000004u; // 80179670
  c->r[25]=R32(c->r[4]+0x0000004Cu); // 80179674
  cmps(c,0,(int32_t)c->r[25],0); // 80179678
  if (crb(c,2)) { goto L_801796BC; } // 8017967C
  c->r[25]=R32(c->r[4]+0x00000030u); // 80179680
  c->r[25]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[25]); // 80179684
  c->r[25]=sraw(c,c->r[25],7); // 80179688
  W32(c->r[7]+0x00000000u,c->r[25]); // 8017968C
  c->r[7]=c->r[7]+0x00000004u; // 80179690
  c->r[25]=R32(c->r[4]+0x00000030u); // 80179694
  c->r[25]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[25]); // 80179698
  c->r[25]=sraw(c,c->r[25],7); // 8017969C
  W32(c->r[8]+0x00000000u,c->r[25]); // 801796A0
  c->r[8]=c->r[8]+0x00000004u; // 801796A4
  c->r[25]=R32(c->r[4]+0x00000030u); // 801796A8
  c->r[25]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[25]); // 801796AC
  c->r[25]=sraw(c,c->r[25],7); // 801796B0
  W32(c->r[9]+0x00000000u,c->r[25]); // 801796B4
  c->r[9]=c->r[9]+0x00000004u; // 801796B8
L_801796BC:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801794DC; } // 801796BC
L_801796C0:;
  c->r[11]=c->r[1]+0x00000040u; // 801796C0
  c->lr=0x801796C8u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801796C4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801796C8
  c->lr=c->r[0]; // 801796CC
  c->r[1]=c->r[1]+0x00000040u; // 801796D0
  return; // 801796D4
}

// fn_801796D8
void f_801796D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801796D8
  c->r[0]=c->lr; // 801796DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801796E0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801796E4
  c->r[31]=c->r[3]|c->r[3]; // 801796E8
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801796EC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801796F0
  fcmp(c,0,c->f[1],c->f[0]); // 801796F4
  if (!crb(c,1)) { goto L_80179704; } // 801796F8
  c->r[3]=0u+0x00000000u; // 801796FC
  goto L_801798B8; // 80179700
L_80179704:;
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179704
  {uint32_t ea=c->r[2]+0xFFFFAB7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80179708
  fcmp(c,0,c->f[0],c->f[2]); // 8017970C
  if (crb(c,0)) { goto L_80179724; } // 80179710
  {uint32_t ea=c->r[2]+0xFFFFAB80u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179714
  fcmp(c,0,c->f[0],c->f[1]); // 80179718
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017971C
  if (!crb(c,2)) { goto L_8017972C; } // 80179720
L_80179724:;
  c->r[3]=0u+0x00000000u; // 80179724
  goto L_801798B8; // 80179728
L_8017972C:;
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017972C
  fcmp(c,0,c->f[0],c->f[2]); // 80179730
  if (crb(c,0)) { goto L_80179740; } // 80179734
  fcmp(c,0,c->f[0],c->f[1]); // 80179738
  if (!crb(c,1)) { goto L_80179748; } // 8017973C
L_80179740:;
  c->r[3]=0u+0x00000000u; // 80179740
  goto L_801798B8; // 80179744
L_80179748:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179748
  fcmp(c,0,c->f[0],c->f[2]); // 8017974C
  if (crb(c,0)) { goto L_8017975C; } // 80179750
  fcmp(c,0,c->f[0],c->f[1]); // 80179754
  if (!crb(c,1)) { goto L_80179764; } // 80179758
L_8017975C:;
  c->r[3]=0u+0x00000000u; // 8017975C
  goto L_801798B8; // 80179760
L_80179764:;
  {uint32_t ea=c->r[3]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179764
  fcmp(c,0,c->f[0],c->f[2]); // 80179768
  if (crb(c,0)) { goto L_80179778; } // 8017976C
  fcmp(c,0,c->f[0],c->f[1]); // 80179770
  if (!crb(c,1)) { goto L_80179780; } // 80179774
L_80179778:;
  c->r[3]=0u+0x00000000u; // 80179778
  goto L_801798B8; // 8017977C
L_80179780:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80179780
  cmps(c,0,(int32_t)c->r[4],0); // 80179784
  if (!crb(c,2)) { goto L_80179794; } // 80179788
  c->r[3]=0u+0x00000000u; // 8017978C
  goto L_801798B8; // 80179790
L_80179794:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80179794
  cmps(c,0,(int32_t)c->r[0],0); // 80179798
  if (!crb(c,2)) { goto L_801797A8; } // 8017979C
  c->r[3]=0u+0x00000000u; // 801797A0
  goto L_801798B8; // 801797A4
L_801797A8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801797A8
  cmps(c,0,(int32_t)c->r[0],0); // 801797AC
  if (!crb(c,2)) { goto L_801797BC; } // 801797B0
  c->r[3]=0u+0x00000000u; // 801797B4
  goto L_801798B8; // 801797B8
L_801797BC:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801797BC
  c->r[3]=c->r[4]|c->r[4]; // 801797C0
  c->r[4]=0u+0x00000000u; // 801797C4
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801797C8
  c->lr=0x801797D0u; f_8000443C(c); // 801797CC
  c->r[0]=R32(c->r[31]+0x00000014u); // 801797D0
  c->r[4]=0u+0x00000000u; // 801797D4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801797D8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801797DC
  c->lr=0x801797E4u; f_8000443C(c); // 801797E0
  c->r[0]=R32(c->r[31]+0x00000014u); // 801797E4
  c->r[4]=0u+0x00000000u; // 801797E8
  c->r[3]=R32(c->r[31]+0x00000008u); // 801797EC
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801797F0
  c->lr=0x801797F8u; f_8000443C(c); // 801797F4
  {uint32_t ea=c->r[2]+0xFFFFAB78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801797F8
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801797FC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80179800
  c->lr=0x80179808u; f_80252A7C(c); // 80179804
  cmps(c,0,(int32_t)c->r[3],0); // 80179808
  W32(c->r[31]+0x00000010u,c->r[3]); // 8017980C
  if (!crb(c,2)) { goto L_8017981C; } // 80179810
  c->r[0]=0u+0x00000001u; // 80179814
  W32(c->r[31]+0x00000010u,c->r[0]); // 80179818
L_8017981C:;
  {uint32_t ea=c->r[2]+0xFFFFAB84u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017981C
  c->r[0]=0u+0x00000000u; // 80179820
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179824
  {uint32_t ea=c->r[2]+0xFFFFAB80u; c->f[2]=c->ps1[2]=RF32(ea);} // 80179828
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 8017982C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179830
  {uint32_t ea=c->r[2]+0xFFFFAB88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179834
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 80179838
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017983C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80179840
  fcmp(c,0,c->f[2],c->f[0]); // 80179844
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 80179848
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8017984C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80179850
  if (!crb(c,1)) { goto L_8017985C; } // 80179854
  c->f[2]=c->f[0]; // 80179858
L_8017985C:;
  {uint32_t ea=c->r[2]+0xFFFFAB84u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017985C
  c->r[0]=0u+0x00000000u; // 80179860
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179864
  c->r[3]=0u+0x00000001u; // 80179868
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017986C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80179870
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80179874
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80179878
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 8017987C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80179880
  W32(c->r[31]+0x00000020u,c->r[0]); // 80179884
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80179888
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8017988C
  W32(c->r[31]+0x00000024u,c->r[0]); // 80179890
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 80179894
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 80179898
  c->r[5]=R32(c->r[1]+0x00000014u); // 8017989C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801798A0
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801798A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801798A8
  W32(c->r[31]+0x00000028u,c->r[5]); // 801798AC
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 801798B0
  W32(c->r[31]+0x00000030u,c->r[0]); // 801798B4
L_801798B8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801798B8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801798BC
  c->lr=c->r[0]; // 801798C0
  c->r[1]=c->r[1]+0x00000030u; // 801798C4
  return; // 801798C8
}

// AXFXReverbStdExpGetMemSize
void f_801798CC(Ctx* __restrict c) {
  trace_call(0x801798CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801798CC
  c->r[4]=0u+0x802E0000u; // 801798D0
  c->r[6]=0u+0x802E0000u; // 801798D4
  {uint32_t ea=c->r[2]+0xFFFFAB90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801798D8
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801798DC
  c->r[6]=c->r[6]+0xFFFFA680u; // 801798E0
  c->r[4]=c->r[4]+0xFFFFA660u; // 801798E4
  c->r[5]=R32(c->r[6]+0x00000060u); // 801798E8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801798EC
  c->r[7]=R32(c->r[4]+0x0000001Cu); // 801798F0
  c->r[4]=R32(c->r[6]+0x00000064u); // 801798F4
  c->r[3]=R32(c->r[6]+0x00000068u); // 801798F8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801798FC
  c->r[0]=R32(c->r[6]+0x0000006Cu); // 80179900
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80179904
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80179908
  c->r[6]=c->r[7]+c->r[6]; // 8017990C
  c->r[6]=c->r[6]+c->r[5]; // 80179910
  c->r[6]=c->r[6]+c->r[4]; // 80179914
  c->r[6]=c->r[6]+c->r[3]; // 80179918
  c->r[6]=c->r[6]+c->r[0]; // 8017991C
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 80179920
  c->r[1]=c->r[1]+0x00000010u; // 80179924
  return; // 80179928
}

// AXFXReverbStdExpInit
void f_8017992C(Ctx* __restrict c) {
  trace_call(0x8017992Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017992C
  c->r[0]=c->lr; // 80179930
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179934
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80179938
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017993C
  c->r[30]=c->r[3]|c->r[3]; // 80179940
  W32(c->r[1]+0x00000014u,c->r[29]); // 80179944
  c->lr=0x8017994Cu; f_80154410(c); // 80179948
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017994C
  c->r[0]=0u+0x00000001u; // 80179950
  {uint32_t ea=c->r[2]+0xFFFFAB94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80179954
  c->r[31]=c->r[3]|c->r[3]; // 80179958
  W32(c->r[30]+0x000000B0u,c->r[0]); // 8017995C
  fcmp(c,0,c->f[1],c->f[0]); // 80179960
  if (!crb(c,0)) { goto L_8017999C; } // 80179964
  c->lr=0x8017996Cu; f_80154410(c); // 80179968
  c->r[0]=R32(c->r[30]+0x000000B0u); // 8017996C
  c->r[29]=c->r[3]|c->r[3]; // 80179970
  c->r[3]=c->r[30]|c->r[30]; // 80179974
  c->r[0]=c->r[0]|0x00000001u; // 80179978
  W32(c->r[30]+0x000000B0u,c->r[0]); // 8017997C
  c->lr=0x80179984u; f_8017A230(c); // 80179980
  c->r[3]=c->r[29]|c->r[29]; // 80179984
  c->lr=0x8017998Cu; f_80154438(c); // 80179988
  c->r[3]=c->r[31]|c->r[31]; // 8017998C
  c->lr=0x80179994u; f_80154438(c); // 80179990
  c->r[3]=0u+0x00000000u; // 80179994
  goto L_80179A8C; // 80179998
L_8017999C:;
  c->r[3]=0u+0x802E0000u; // 8017999C
  {uint32_t ea=c->r[2]+0xFFFFAB90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801799A0
  c->r[3]=c->r[3]+0xFFFFA660u; // 801799A4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801799A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801799AC
  W32(c->r[30]+0x00000014u,c->r[0]); // 801799B0
  c->lr=0x801799B8u; f_80252A7C(c); // 801799B4
  W32(c->r[30]+0x00000030u,c->r[3]); // 801799B8
  c->r[4]=0u+0x802E0000u; // 801799BC
  c->r[4]=c->r[4]+0xFFFFA680u; // 801799C0
  c->r[3]=c->r[30]|c->r[30]; // 801799C4
  c->r[0]=R32(c->r[4]+0x00000060u); // 801799C8
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 801799CC
  c->r[0]=R32(c->r[4]+0x00000064u); // 801799D0
  W32(c->r[30]+0x00000060u,c->r[0]); // 801799D4
  c->r[0]=R32(c->r[4]+0x00000068u); // 801799D8
  W32(c->r[30]+0x00000094u,c->r[0]); // 801799DC
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 801799E0
  W32(c->r[30]+0x00000098u,c->r[0]); // 801799E4
  c->lr=0x801799ECu; f_80179FEC(c); // 801799E8
  cmps(c,0,(int32_t)c->r[3],0); // 801799EC
  if (!crb(c,2)) { goto L_80179A28; } // 801799F0
  c->lr=0x801799F8u; f_80154410(c); // 801799F4
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801799F8
  c->r[29]=c->r[3]|c->r[3]; // 801799FC
  c->r[3]=c->r[30]|c->r[30]; // 80179A00
  c->r[0]=c->r[0]|0x00000001u; // 80179A04
  W32(c->r[30]+0x000000B0u,c->r[0]); // 80179A08
  c->lr=0x80179A10u; f_8017A230(c); // 80179A0C
  c->r[3]=c->r[29]|c->r[29]; // 80179A10
  c->lr=0x80179A18u; f_80154438(c); // 80179A14
  c->r[3]=c->r[31]|c->r[31]; // 80179A18
  c->lr=0x80179A20u; f_80154438(c); // 80179A1C
  c->r[3]=0u+0x00000000u; // 80179A20
  goto L_80179A8C; // 80179A24
L_80179A28:;
  c->r[3]=c->r[30]|c->r[30]; // 80179A28
  c->lr=0x80179A30u; f_8017A130(c); // 80179A2C
  c->r[3]=c->r[30]|c->r[30]; // 80179A30
  c->lr=0x80179A38u; f_8017A320(c); // 80179A34
  cmps(c,0,(int32_t)c->r[3],0); // 80179A38
  if (!crb(c,2)) { goto L_80179A74; } // 80179A3C
  c->lr=0x80179A44u; f_80154410(c); // 80179A40
  c->r[0]=R32(c->r[30]+0x000000B0u); // 80179A44
  c->r[29]=c->r[3]|c->r[3]; // 80179A48
  c->r[3]=c->r[30]|c->r[30]; // 80179A4C
  c->r[0]=c->r[0]|0x00000001u; // 80179A50
  W32(c->r[30]+0x000000B0u,c->r[0]); // 80179A54
  c->lr=0x80179A5Cu; f_8017A230(c); // 80179A58
  c->r[3]=c->r[29]|c->r[29]; // 80179A5C
  c->lr=0x80179A64u; f_80154438(c); // 80179A60
  c->r[3]=c->r[31]|c->r[31]; // 80179A64
  c->lr=0x80179A6Cu; f_80154438(c); // 80179A68
  c->r[3]=0u+0x00000000u; // 80179A6C
  goto L_80179A8C; // 80179A70
L_80179A74:;
  c->r[0]=R32(c->r[30]+0x000000B0u); // 80179A74
  c->r[3]=c->r[31]|c->r[31]; // 80179A78
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80179A7C
  W32(c->r[30]+0x000000B0u,c->r[0]); // 80179A80
  c->lr=0x80179A88u; f_80154438(c); // 80179A84
  c->r[3]=0u+0x00000001u; // 80179A88
L_80179A8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179A8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80179A90
  c->r[30]=R32(c->r[1]+0x00000018u); // 80179A94
  c->r[29]=R32(c->r[1]+0x00000014u); // 80179A98
  c->lr=c->r[0]; // 80179A9C
  c->r[1]=c->r[1]+0x00000020u; // 80179AA0
  return; // 80179AA4
}

// AXFXReverbStdExpSettings
void f_80179AA8(Ctx* __restrict c) {
  trace_call(0x80179AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179AA8
  c->r[0]=c->lr; // 80179AAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179AB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80179AB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80179AB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80179ABC
  c->r[29]=c->r[3]|c->r[3]; // 80179AC0
  c->lr=0x80179AC8u; f_80154410(c); // 80179AC4
  c->r[0]=R32(c->r[29]+0x000000B0u); // 80179AC8
  c->r[30]=c->r[3]|c->r[3]; // 80179ACC
  c->r[0]=c->r[0]|0x00000001u; // 80179AD0
  W32(c->r[29]+0x000000B0u,c->r[0]); // 80179AD4
  c->lr=0x80179ADCu; f_80154410(c); // 80179AD8
  c->r[0]=R32(c->r[29]+0x000000B0u); // 80179ADC
  c->r[31]=c->r[3]|c->r[3]; // 80179AE0
  c->r[3]=c->r[29]|c->r[29]; // 80179AE4
  c->r[0]=c->r[0]|0x00000001u; // 80179AE8
  W32(c->r[29]+0x000000B0u,c->r[0]); // 80179AEC
  c->lr=0x80179AF4u; f_8017A230(c); // 80179AF0
  c->r[3]=c->r[31]|c->r[31]; // 80179AF4
  c->lr=0x80179AFCu; f_80154438(c); // 80179AF8
  c->r[3]=c->r[29]|c->r[29]; // 80179AFC
  c->lr=0x80179B04u; f_8017992C(c); // 80179B00
  cmps(c,0,(int32_t)c->r[3],0); // 80179B04
  if (!crb(c,2)) { goto L_80179B40; } // 80179B08
  c->lr=0x80179B10u; f_80154410(c); // 80179B0C
  c->r[0]=R32(c->r[29]+0x000000B0u); // 80179B10
  c->r[31]=c->r[3]|c->r[3]; // 80179B14
  c->r[3]=c->r[29]|c->r[29]; // 80179B18
  c->r[0]=c->r[0]|0x00000001u; // 80179B1C
  W32(c->r[29]+0x000000B0u,c->r[0]); // 80179B20
  c->lr=0x80179B28u; f_8017A230(c); // 80179B24
  c->r[3]=c->r[31]|c->r[31]; // 80179B28
  c->lr=0x80179B30u; f_80154438(c); // 80179B2C
  c->r[3]=c->r[30]|c->r[30]; // 80179B30
  c->lr=0x80179B38u; f_80154438(c); // 80179B34
  c->r[3]=0u+0x00000000u; // 80179B38
  goto L_80179B5C; // 80179B3C
L_80179B40:;
  c->r[0]=R32(c->r[29]+0x000000B0u); // 80179B40
  c->r[3]=c->r[30]|c->r[30]; // 80179B44
  c->r[0]=c->r[0]|0x00000002u; // 80179B48
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80179B4C
  W32(c->r[29]+0x000000B0u,c->r[0]); // 80179B50
  c->lr=0x80179B58u; f_80154438(c); // 80179B54
  c->r[3]=0u+0x00000001u; // 80179B58
L_80179B5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179B5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80179B60
  c->r[30]=R32(c->r[1]+0x00000018u); // 80179B64
  c->r[29]=R32(c->r[1]+0x00000014u); // 80179B68
  c->lr=c->r[0]; // 80179B6C
  c->r[1]=c->r[1]+0x00000020u; // 80179B70
  return; // 80179B74
}

// AXFXReverbStdExpSettingsUpdate
void f_80179B78(Ctx* __restrict c) {
  trace_call(0x80179B78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179B78
  c->r[0]=c->lr; // 80179B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80179B80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80179B84
  W32(c->r[1]+0x00000018u,c->r[30]); // 80179B88
  W32(c->r[1]+0x00000014u,c->r[29]); // 80179B8C
  c->r[29]=c->r[3]|c->r[3]; // 80179B90
  c->lr=0x80179B98u; f_80154410(c); // 80179B94
  c->r[0]=R32(c->r[29]+0x000000B0u); // 80179B98
  c->r[30]=c->r[3]|c->r[3]; // 80179B9C
  c->r[3]=c->r[29]|c->r[29]; // 80179BA0
  c->r[0]=c->r[0]|0x00000001u; // 80179BA4
  W32(c->r[29]+0x000000B0u,c->r[0]); // 80179BA8
  c->lr=0x80179BB0u; f_8017A130(c); // 80179BAC
  c->r[3]=c->r[29]|c->r[29]; // 80179BB0
  c->lr=0x80179BB8u; f_8017A320(c); // 80179BB4
  cmps(c,0,(int32_t)c->r[3],0); // 80179BB8
  if (!crb(c,2)) { goto L_80179BF4; } // 80179BBC
  c->lr=0x80179BC4u; f_80154410(c); // 80179BC0
  c->r[0]=R32(c->r[29]+0x000000B0u); // 80179BC4
  c->r[31]=c->r[3]|c->r[3]; // 80179BC8
  c->r[3]=c->r[29]|c->r[29]; // 80179BCC
  c->r[0]=c->r[0]|0x00000001u; // 80179BD0
  W32(c->r[29]+0x000000B0u,c->r[0]); // 80179BD4
  c->lr=0x80179BDCu; f_8017A230(c); // 80179BD8
  c->r[3]=c->r[31]|c->r[31]; // 80179BDC
  c->lr=0x80179BE4u; f_80154438(c); // 80179BE0
  c->r[3]=c->r[30]|c->r[30]; // 80179BE4
  c->lr=0x80179BECu; f_80154438(c); // 80179BE8
  c->r[3]=0u+0x00000000u; // 80179BEC
  goto L_80179C10; // 80179BF0
L_80179BF4:;
  c->r[0]=R32(c->r[29]+0x000000B0u); // 80179BF4
  c->r[3]=c->r[30]|c->r[30]; // 80179BF8
  c->r[0]=c->r[0]|0x00000002u; // 80179BFC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80179C00
  W32(c->r[29]+0x000000B0u,c->r[0]); // 80179C04
  c->lr=0x80179C0Cu; f_80154438(c); // 80179C08
  c->r[3]=0u+0x00000001u; // 80179C0C
L_80179C10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80179C10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80179C14
  c->r[30]=R32(c->r[1]+0x00000018u); // 80179C18
  c->r[29]=R32(c->r[1]+0x00000014u); // 80179C1C
  c->lr=c->r[0]; // 80179C20
  c->r[1]=c->r[1]+0x00000020u; // 80179C24
  return; // 80179C28
}

// AXFXReverbStdExpShutdown
void f_80179C2C(Ctx* __restrict c) {
  trace_call(0x80179C2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179C2C
  c->r[0]=c->lr; // 80179C30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80179C34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80179C38
  W32(c->r[1]+0x00000008u,c->r[30]); // 80179C3C
  c->r[30]=c->r[3]|c->r[3]; // 80179C40
  c->lr=0x80179C48u; f_80154410(c); // 80179C44
  c->r[0]=R32(c->r[30]+0x000000B0u); // 80179C48
  c->r[31]=c->r[3]|c->r[3]; // 80179C4C
  c->r[3]=c->r[30]|c->r[30]; // 80179C50
  c->r[0]=c->r[0]|0x00000001u; // 80179C54
  W32(c->r[30]+0x000000B0u,c->r[0]); // 80179C58
  c->lr=0x80179C60u; f_8017A230(c); // 80179C5C
  c->r[3]=c->r[31]|c->r[31]; // 80179C60
  c->lr=0x80179C68u; f_80154438(c); // 80179C64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80179C68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80179C6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80179C70
  c->lr=c->r[0]; // 80179C74
  c->r[1]=c->r[1]+0x00000010u; // 80179C78
  return; // 80179C7C
}

// AXFXReverbStdExpCallback
void f_80179C80(Ctx* __restrict c) {
  trace_call(0x80179C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179C80
  c->r[0]=c->lr; // 80179C84
  W32(c->r[1]+0x00000064u,c->r[0]); // 80179C88
  c->r[11]=c->r[1]+0x00000060u; // 80179C8C
  c->lr=0x80179C94u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80179C90
  c->r[0]=R32(c->r[4]+0x000000B0u); // 80179C94
  cmps(c,0,(int32_t)c->r[0],0); // 80179C98
  if (crb(c,2)) { goto L_80179CAC; } // 80179C9C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 80179CA0
  W32(c->r[4]+0x000000B0u,c->r[0]); // 80179CA4
  goto L_80179FD4; // 80179CA8
L_80179CAC:;
  c->r[7]=R32(c->r[4]+0x000000D8u); // 80179CAC
  c->r[6]=R32(c->r[3]+0x00000000u); // 80179CB0
  c->r[5]=R32(c->r[3]+0x00000004u); // 80179CB4
  cmps(c,0,(int32_t)c->r[7],0); // 80179CB8
  c->r[0]=R32(c->r[3]+0x00000008u); // 80179CBC
  W32(c->r[1]+0x00000020u,c->r[6]); // 80179CC0
  W32(c->r[1]+0x00000024u,c->r[5]); // 80179CC4
  W32(c->r[1]+0x00000028u,c->r[0]); // 80179CC8
  if (crb(c,2)) { goto L_80179CE8; } // 80179CCC
  c->r[5]=R32(c->r[7]+0x00000000u); // 80179CD0
  c->r[3]=R32(c->r[7]+0x00000004u); // 80179CD4
  c->r[0]=R32(c->r[7]+0x00000008u); // 80179CD8
  W32(c->r[1]+0x00000014u,c->r[5]); // 80179CDC
  W32(c->r[1]+0x00000018u,c->r[3]); // 80179CE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80179CE4
L_80179CE8:;
  c->r[6]=R32(c->r[4]+0x000000DCu); // 80179CE8
  cmps(c,0,(int32_t)c->r[6],0); // 80179CEC
  if (crb(c,2)) { goto L_80179D0C; } // 80179CF0
  c->r[5]=R32(c->r[6]+0x00000000u); // 80179CF4
  c->r[3]=R32(c->r[6]+0x00000004u); // 80179CF8
  c->r[0]=R32(c->r[6]+0x00000008u); // 80179CFC
  W32(c->r[1]+0x00000008u,c->r[5]); // 80179D00
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80179D04
  W32(c->r[1]+0x00000010u,c->r[0]); // 80179D08
L_80179D0C:;
  {uint32_t ea=c->r[2]+0xFFFFAB98u; c->f[2]=c->ps1[2]=RF32(ea);} // 80179D0C
  c->r[28]=0u+0x00000000u; // 80179D10
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80179D14
  c->r[3]=0u+0x43300000u; // 80179D18
  {uint32_t ea=c->r[2]+0xFFFFAB9Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80179D1C
  c->r[0]=0u+0x00000000u; // 80179D20
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179D24
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 80179D28
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80179D2C
  c->r[27]=0u+0x00000003u; // 80179D30
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[1]); // 80179D34
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80179D38
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[2]); // 80179D3C
  {uint32_t ea=c->r[4]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 80179D40
  {uint32_t ea=c->r[4]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80179D44
  {uint32_t ea=c->r[4]+0x0000009Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80179D48
  {uint32_t ea=c->r[2]+0xFFFFABA0u; c->f[11]=RF64(ea);} // 80179D4C
L_80179D50:;
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 80179D50
  c->r[7]=c->r[4]|c->r[4]; // 80179D54
  c->r[11]=R32(c->r[4]+0x00000028u); // 80179D58
  c->r[8]=c->r[4]|c->r[4]; // 80179D5C
  c->r[12]=R32(c->r[4]+0x0000004Cu); // 80179D60
  c->r[5]=c->r[1]+0x00000014u; // 80179D64
  c->r[26]=R32(c->r[4]+0x00000050u); // 80179D68
  c->r[6]=c->r[1]+0x00000020u; // 80179D6C
  c->r[25]=R32(c->r[4]+0x00000084u); // 80179D70
  c->r[9]=c->r[1]+0x00000008u; // 80179D74
  c->r[24]=R32(c->r[4]+0x00000088u); // 80179D78
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80179D7C
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80179D80
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 80179D84
  c->r[31]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80179D88
  c->r[30]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80179D8C
  c->r[29]=rotl(c->r[24],2)&0xFFFFFFFCu; // 80179D90
  c->ctr=c->r[27]; // 80179D94
L_80179D98:;
  c->r[24]=R32(c->r[4]+0x000000D8u); // 80179D98
  cmps(c,0,(int32_t)c->r[24],0); // 80179D9C
  if (crb(c,2)) { goto L_80179DD8; } // 80179DA0
  c->r[25]=R32(c->r[5]+0x00000000u); // 80179DA4
  c->r[26]=R32(c->r[6]+0x00000000u); // 80179DA8
  c->r[24]=R32(c->r[25]+0x00000000u); // 80179DAC
  c->r[25]=c->r[25]+0x00000004u; // 80179DB0
  c->r[26]=R32(c->r[26]+0x00000000u); // 80179DB4
  W32(c->r[1]+0x00000030u,c->r[3]); // 80179DB8
  c->r[24]=c->r[26]+c->r[24]; // 80179DBC
  c->r[24]=c->r[24]^0x80000000u; // 80179DC0
  W32(c->r[5]+0x00000000u,c->r[25]); // 80179DC4
  W32(c->r[1]+0x00000034u,c->r[24]); // 80179DC8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[8]=RF64(ea);} // 80179DCC
  c->f[9]=c->ps1[9]=S(c->f[8]-c->f[11]); // 80179DD0
  goto L_80179DF4; // 80179DD4
L_80179DD8:;
  c->r[24]=R32(c->r[6]+0x00000000u); // 80179DD8
  W32(c->r[1]+0x00000038u,c->r[3]); // 80179DDC
  c->r[24]=R32(c->r[24]+0x00000000u); // 80179DE0
  c->r[24]=c->r[24]^0x80000000u; // 80179DE4
  W32(c->r[1]+0x0000003Cu,c->r[24]); // 80179DE8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[8]=RF64(ea);} // 80179DEC
  c->f[9]=c->ps1[9]=S(c->f[8]-c->f[11]); // 80179DF0
L_80179DF4:;
  c->r[24]=R32(c->r[7]+0x00000000u); // 80179DF4
  {uint32_t ea=c->r[10]+c->r[24]; c->f[10]=c->ps1[10]=RF32(ea);} // 80179DF8
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[1]); // 80179DFC
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 80179E00
  {uint32_t ea=c->r[10]+c->r[24]; WF32(ea,c->f[8]);} // 80179E04
  c->r[24]=R32(c->r[4]+0x0000002Cu); // 80179E08
  cmps(c,0,(int32_t)c->r[24],0); // 80179E0C
  if (crb(c,2)) { goto L_80179E24; } // 80179E10
  c->r[24]=R32(c->r[7]+0x0000001Cu); // 80179E14
  {uint32_t ea=c->r[11]+c->r[24]; c->f[12]=c->ps1[12]=RF32(ea);} // 80179E18
  {uint32_t ea=c->r[11]+c->r[24]; WF32(ea,c->f[9]);} // 80179E1C
  goto L_80179E28; // 80179E20
L_80179E24:;
  c->f[12]=c->f[9]; // 80179E24
L_80179E28:;
  c->r[24]=R32(c->r[8]+0x00000034u); // 80179E28
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[6]); // 80179E2C
  c->r[26]=R32(c->r[6]+0x00000000u); // 80179E30
  {uint32_t ea=c->r[12]+c->r[24]; c->f[9]=c->ps1[9]=RF32(ea);} // 80179E34
  c->r[25]=c->r[26]+0x00000004u; // 80179E38
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 80179E3C
  W32(c->r[6]+0x00000000u,c->r[25]); // 80179E40
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 80179E44
  {uint32_t ea=c->r[12]+c->r[24]; WF32(ea,c->f[8]);} // 80179E48
  c->r[25]=R32(c->r[8]+0x00000038u); // 80179E4C
  {uint32_t ea=c->r[31]+c->r[25]; c->f[13]=c->ps1[13]=RF32(ea);} // 80179E50
  c->f[8]=c->ps1[8]=S(c->f[13]*c->f[3]); // 80179E54
  c->f[9]=c->ps1[9]=S(c->f[9]+c->f[13]); // 80179E58
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 80179E5C
  {uint32_t ea=c->r[31]+c->r[25]; WF32(ea,c->f[8]);} // 80179E60
  c->r[24]=R32(c->r[8]+0x0000006Cu); // 80179E64
  {uint32_t ea=c->r[30]+c->r[24]; c->f[12]=c->ps1[12]=RF32(ea);} // 80179E68
  c->f[8]=c->ps1[8]=S(c->f[12]*c->f[4]); // 80179E6C
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 80179E70
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[4]); // 80179E74
  {uint32_t ea=c->r[30]+c->r[24]; WF32(ea,c->f[8]);} // 80179E78
  {uint32_t ea=c->r[7]+0x000000A0u; c->f[8]=c->ps1[8]=RF32(ea);} // 80179E7C
  c->f[9]=c->ps1[9]=S(c->f[12]-c->f[9]); // 80179E80
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[8]); // 80179E84
  c->f[9]=c->ps1[9]=S(c->f[5]*c->f[9]); // 80179E88
  c->f[9]=c->ps1[9]=S(c->f[9]+c->f[8]); // 80179E8C
  {uint32_t ea=c->r[7]+0x000000A0u; WF32(ea,c->f[9]);} // 80179E90
  c->r[25]=R32(c->r[8]+0x00000070u); // 80179E94
  {uint32_t ea=c->r[29]+c->r[25]; c->f[12]=c->ps1[12]=RF32(ea);} // 80179E98
  c->f[8]=c->ps1[8]=S(c->f[12]*c->f[4]); // 80179E9C
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 80179EA0
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[4]); // 80179EA4
  {uint32_t ea=c->r[29]+c->r[25]; WF32(ea,c->f[8]);} // 80179EA8
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[8]=c->ps1[8]=RF32(ea);} // 80179EAC
  c->f[9]=c->ps1[9]=S(c->f[12]-c->f[9]); // 80179EB0
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[7]); // 80179EB4
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 80179EB8
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 80179EBC
  c->f[8]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[8],true)); // 80179EC0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[8]);} // 80179EC4
  c->r[25]=R32(c->r[1]+0x0000003Cu); // 80179EC8
  W32(c->r[26]+0x00000000u,c->r[25]); // 80179ECC
  c->r[25]=R32(c->r[4]+0x000000DCu); // 80179ED0
  cmps(c,0,(int32_t)c->r[25],0); // 80179ED4
  if (crb(c,2)) { goto L_80179F00; } // 80179ED8
  {uint32_t ea=c->r[4]+0x000000E4u; c->f[8]=c->ps1[8]=RF32(ea);} // 80179EDC
  c->r[25]=R32(c->r[9]+0x00000000u); // 80179EE0
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 80179EE4
  c->r[26]=c->r[25]+0x00000004u; // 80179EE8
  W32(c->r[9]+0x00000000u,c->r[26]); // 80179EEC
  c->f[8]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[8],true)); // 80179EF0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[8]);} // 80179EF4
  c->r[26]=R32(c->r[1]+0x0000003Cu); // 80179EF8
  W32(c->r[25]+0x00000000u,c->r[26]); // 80179EFC
L_80179F00:;
  c->r[5]=c->r[5]+0x00000004u; // 80179F00
  c->r[6]=c->r[6]+0x00000004u; // 80179F04
  c->r[7]=c->r[7]+0x00000004u; // 80179F08
  c->r[8]=c->r[8]+0x00000008u; // 80179F0C
  c->r[9]=c->r[9]+0x00000004u; // 80179F10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80179D98; } // 80179F14
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 80179F18
  c->r[5]=R32(c->r[4]+0x00000010u); // 80179F1C
  c->r[6]=c->r[6]+0x00000001u; // 80179F20
  cmpu(c,0,c->r[6],c->r[5]); // 80179F24
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 80179F28
  if (crb(c,0)) { goto L_80179F34; } // 80179F2C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80179F30
L_80179F34:;
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 80179F34
  cmps(c,0,(int32_t)c->r[6],0); // 80179F38
  if (crb(c,2)) { goto L_80179F58; } // 80179F3C
  c->r[5]=R32(c->r[4]+0x00000028u); // 80179F40
  c->r[5]=c->r[5]+0x00000001u; // 80179F44
  cmpu(c,0,c->r[5],c->r[6]); // 80179F48
  W32(c->r[4]+0x00000028u,c->r[5]); // 80179F4C
  if (crb(c,0)) { goto L_80179F58; } // 80179F50
  W32(c->r[4]+0x00000028u,c->r[0]); // 80179F54
L_80179F58:;
  c->r[6]=R32(c->r[4]+0x0000004Cu); // 80179F58
  c->r[5]=R32(c->r[4]+0x00000054u); // 80179F5C
  c->r[6]=c->r[6]+0x00000001u; // 80179F60
  cmpu(c,0,c->r[6],c->r[5]); // 80179F64
  W32(c->r[4]+0x0000004Cu,c->r[6]); // 80179F68
  if (crb(c,0)) { goto L_80179F74; } // 80179F6C
  W32(c->r[4]+0x0000004Cu,c->r[0]); // 80179F70
L_80179F74:;
  c->r[6]=R32(c->r[4]+0x00000050u); // 80179F74
  c->r[5]=R32(c->r[4]+0x00000058u); // 80179F78
  c->r[6]=c->r[6]+0x00000001u; // 80179F7C
  cmpu(c,0,c->r[6],c->r[5]); // 80179F80
  W32(c->r[4]+0x00000050u,c->r[6]); // 80179F84
  if (crb(c,0)) { goto L_80179F90; } // 80179F88
  W32(c->r[4]+0x00000050u,c->r[0]); // 80179F8C
L_80179F90:;
  c->r[6]=R32(c->r[4]+0x00000084u); // 80179F90
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 80179F94
  c->r[6]=c->r[6]+0x00000001u; // 80179F98
  cmpu(c,0,c->r[6],c->r[5]); // 80179F9C
  W32(c->r[4]+0x00000084u,c->r[6]); // 80179FA0
  if (crb(c,0)) { goto L_80179FAC; } // 80179FA4
  W32(c->r[4]+0x00000084u,c->r[0]); // 80179FA8
L_80179FAC:;
  c->r[6]=R32(c->r[4]+0x00000088u); // 80179FAC
  c->r[5]=R32(c->r[4]+0x00000090u); // 80179FB0
  c->r[6]=c->r[6]+0x00000001u; // 80179FB4
  cmpu(c,0,c->r[6],c->r[5]); // 80179FB8
  W32(c->r[4]+0x00000088u,c->r[6]); // 80179FBC
  if (crb(c,0)) { goto L_80179FC8; } // 80179FC0
  W32(c->r[4]+0x00000088u,c->r[0]); // 80179FC4
L_80179FC8:;
  c->r[28]=c->r[28]+0x00000001u; // 80179FC8
  cmpu(c,0,c->r[28],0x00000060u); // 80179FCC
  if (crb(c,0)) { IRQCHK(c); goto L_80179D50; } // 80179FD0
L_80179FD4:;
  c->r[11]=c->r[1]+0x00000060u; // 80179FD4
  c->lr=0x80179FDCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80179FD8
  c->r[0]=R32(c->r[1]+0x00000064u); // 80179FDC
  c->lr=c->r[0]; // 80179FE0
  c->r[1]=c->r[1]+0x00000060u; // 80179FE4
  return; // 80179FE8
}

// __AllocDelayLine_80179FEC
void f_80179FEC(Ctx* __restrict c) {
  trace_call(0x80179FECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179FEC
  c->r[0]=c->lr; // 80179FF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80179FF4
  c->r[11]=c->r[1]+0x00000030u; // 80179FF8
  c->lr=0x8017A000u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80179FFC
  c->r[24]=c->r[3]|c->r[3]; // 8017A000
  c->r[25]=0u+0x00000000u; // 8017A004
  c->r[30]=c->r[24]|c->r[24]; // 8017A008
  c->r[31]=0u+0x00000000u; // 8017A00C
  c->r[29]=c->r[24]|c->r[24]; // 8017A010
L_8017A014:;
  c->r[0]=R32(c->r[24]+0x00000014u); // 8017A014
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 8017A018
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A01C
  c->ctr=c->r[12]; // 8017A020
  if (true) { c->lr=0x8017A028u; dispatch(c,c->ctr); } // 8017A024
  cmps(c,0,(int32_t)c->r[3],0); // 8017A028
  W32(c->r[30]+0x00000000u,c->r[3]); // 8017A02C
  if (!crb(c,2)) { goto L_8017A03C; } // 8017A030
  c->r[3]=0u+0x00000000u; // 8017A034
  goto L_8017A118; // 8017A038
L_8017A03C:;
  c->r[0]=R32(c->r[24]+0x00000030u); // 8017A03C
  cmps(c,0,(int32_t)c->r[0],0); // 8017A040
  if (crb(c,2)) { goto L_8017A06C; } // 8017A044
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 8017A048
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A04C
  c->ctr=c->r[12]; // 8017A050
  if (true) { c->lr=0x8017A058u; dispatch(c,c->ctr); } // 8017A054
  cmps(c,0,(int32_t)c->r[3],0); // 8017A058
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 8017A05C
  if (!crb(c,2)) { goto L_8017A070; } // 8017A060
  c->r[3]=0u+0x00000000u; // 8017A064
  goto L_8017A118; // 8017A068
L_8017A06C:;
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 8017A06C
L_8017A070:;
  c->r[27]=c->r[24]|c->r[24]; // 8017A070
  c->r[28]=c->r[29]|c->r[29]; // 8017A074
  c->r[26]=0u+0x00000000u; // 8017A078
L_8017A07C:;
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 8017A07C
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 8017A080
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A084
  c->ctr=c->r[12]; // 8017A088
  if (true) { c->lr=0x8017A090u; dispatch(c,c->ctr); } // 8017A08C
  cmps(c,0,(int32_t)c->r[3],0); // 8017A090
  W32(c->r[28]+0x00000034u,c->r[3]); // 8017A094
  if (!crb(c,2)) { goto L_8017A0A4; } // 8017A098
  c->r[3]=0u+0x00000000u; // 8017A09C
  goto L_8017A118; // 8017A0A0
L_8017A0A4:;
  c->r[26]=c->r[26]+0x00000001u; // 8017A0A4
  c->r[28]=c->r[28]+0x00000004u; // 8017A0A8
  cmpu(c,0,c->r[26],0x00000002u); // 8017A0AC
  c->r[27]=c->r[27]+0x00000004u; // 8017A0B0
  if (crb(c,0)) { IRQCHK(c); goto L_8017A07C; } // 8017A0B4
  c->r[28]=c->r[24]|c->r[24]; // 8017A0B8
  c->r[27]=c->r[29]|c->r[29]; // 8017A0BC
  c->r[26]=0u+0x00000000u; // 8017A0C0
L_8017A0C4:;
  c->r[0]=R32(c->r[28]+0x00000094u); // 8017A0C4
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 8017A0C8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A0CC
  c->ctr=c->r[12]; // 8017A0D0
  if (true) { c->lr=0x8017A0D8u; dispatch(c,c->ctr); } // 8017A0D4
  cmps(c,0,(int32_t)c->r[3],0); // 8017A0D8
  W32(c->r[27]+0x0000006Cu,c->r[3]); // 8017A0DC
  if (!crb(c,2)) { goto L_8017A0EC; } // 8017A0E0
  c->r[3]=0u+0x00000000u; // 8017A0E4
  goto L_8017A118; // 8017A0E8
L_8017A0EC:;
  c->r[26]=c->r[26]+0x00000001u; // 8017A0EC
  c->r[27]=c->r[27]+0x00000004u; // 8017A0F0
  cmpu(c,0,c->r[26],0x00000002u); // 8017A0F4
  c->r[28]=c->r[28]+0x00000004u; // 8017A0F8
  if (crb(c,0)) { IRQCHK(c); goto L_8017A0C4; } // 8017A0FC
  c->r[25]=c->r[25]+0x00000001u; // 8017A100
  c->r[29]=c->r[29]+0x00000008u; // 8017A104
  cmpu(c,0,c->r[25],0x00000003u); // 8017A108
  c->r[30]=c->r[30]+0x00000004u; // 8017A10C
  if (crb(c,0)) { IRQCHK(c); goto L_8017A014; } // 8017A110
  c->r[3]=0u+0x00000001u; // 8017A114
L_8017A118:;
  c->r[11]=c->r[1]+0x00000030u; // 8017A118
  c->lr=0x8017A120u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017A11C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017A120
  c->lr=c->r[0]; // 8017A124
  c->r[1]=c->r[1]+0x00000030u; // 8017A128
  return; // 8017A12C
}

// __BzeroDelayLines_8017A130
void f_8017A130(Ctx* __restrict c) {
  trace_call(0x8017A130u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A130
  c->r[0]=c->lr; // 8017A134
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017A138
  c->r[11]=c->r[1]+0x00000030u; // 8017A13C
  c->lr=0x8017A144u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017A140
  c->r[25]=c->r[3]|c->r[3]; // 8017A144
  c->r[26]=0u+0x00000000u; // 8017A148
  c->r[31]=c->r[25]|c->r[25]; // 8017A14C
  c->r[30]=c->r[25]|c->r[25]; // 8017A150
L_8017A154:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8017A154
  cmps(c,0,(int32_t)c->r[3],0); // 8017A158
  if (crb(c,2)) { goto L_8017A170; } // 8017A15C
  c->r[0]=R32(c->r[25]+0x00000014u); // 8017A160
  c->r[4]=0u+0x00000000u; // 8017A164
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A168
  c->lr=0x8017A170u; f_8000443C(c); // 8017A16C
L_8017A170:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8017A170
  cmps(c,0,(int32_t)c->r[3],0); // 8017A174
  if (crb(c,2)) { goto L_8017A18C; } // 8017A178
  c->r[0]=R32(c->r[25]+0x00000030u); // 8017A17C
  c->r[4]=0u+0x00000000u; // 8017A180
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A184
  c->lr=0x8017A18Cu; f_8000443C(c); // 8017A188
L_8017A18C:;
  c->r[28]=c->r[30]|c->r[30]; // 8017A18C
  c->r[29]=c->r[25]|c->r[25]; // 8017A190
  c->r[27]=0u+0x00000000u; // 8017A194
L_8017A198:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 8017A198
  cmps(c,0,(int32_t)c->r[3],0); // 8017A19C
  if (crb(c,2)) { goto L_8017A1B4; } // 8017A1A0
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 8017A1A4
  c->r[4]=0u+0x00000000u; // 8017A1A8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A1AC
  c->lr=0x8017A1B4u; f_8000443C(c); // 8017A1B0
L_8017A1B4:;
  c->r[27]=c->r[27]+0x00000001u; // 8017A1B4
  c->r[29]=c->r[29]+0x00000004u; // 8017A1B8
  cmpu(c,0,c->r[27],0x00000002u); // 8017A1BC
  c->r[28]=c->r[28]+0x00000004u; // 8017A1C0
  if (crb(c,0)) { IRQCHK(c); goto L_8017A198; } // 8017A1C4
  c->r[29]=c->r[30]|c->r[30]; // 8017A1C8
  c->r[28]=c->r[25]|c->r[25]; // 8017A1CC
  c->r[27]=0u+0x00000000u; // 8017A1D0
L_8017A1D4:;
  c->r[3]=R32(c->r[29]+0x0000006Cu); // 8017A1D4
  cmps(c,0,(int32_t)c->r[3],0); // 8017A1D8
  if (crb(c,2)) { goto L_8017A1F0; } // 8017A1DC
  c->r[0]=R32(c->r[28]+0x00000094u); // 8017A1E0
  c->r[4]=0u+0x00000000u; // 8017A1E4
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A1E8
  c->lr=0x8017A1F0u; f_8000443C(c); // 8017A1EC
L_8017A1F0:;
  c->r[27]=c->r[27]+0x00000001u; // 8017A1F0
  c->r[28]=c->r[28]+0x00000004u; // 8017A1F4
  cmpu(c,0,c->r[27],0x00000002u); // 8017A1F8
  c->r[29]=c->r[29]+0x00000004u; // 8017A1FC
  if (crb(c,0)) { IRQCHK(c); goto L_8017A1D4; } // 8017A200
  c->r[26]=c->r[26]+0x00000001u; // 8017A204
  c->r[30]=c->r[30]+0x00000008u; // 8017A208
  cmpu(c,0,c->r[26],0x00000003u); // 8017A20C
  c->r[31]=c->r[31]+0x00000004u; // 8017A210
  if (crb(c,0)) { IRQCHK(c); goto L_8017A154; } // 8017A214
  c->r[11]=c->r[1]+0x00000030u; // 8017A218
  c->lr=0x8017A220u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017A21C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017A220
  c->lr=c->r[0]; // 8017A224
  c->r[1]=c->r[1]+0x00000030u; // 8017A228
  return; // 8017A22C
}

// __FreeDelayLine_8017A230
void f_8017A230(Ctx* __restrict c) {
  trace_call(0x8017A230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A230
  c->r[0]=c->lr; // 8017A234
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017A238
  c->r[11]=c->r[1]+0x00000020u; // 8017A23C
  c->lr=0x8017A244u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017A240
  c->r[26]=0u+0x00000000u; // 8017A244
  c->r[30]=c->r[3]|c->r[3]; // 8017A248
  c->r[31]=0u+0x00000000u; // 8017A24C
  c->r[29]=c->r[3]|c->r[3]; // 8017A250
L_8017A254:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A254
  cmps(c,0,(int32_t)c->r[3],0); // 8017A258
  if (crb(c,2)) { goto L_8017A270; } // 8017A25C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A260
  c->ctr=c->r[12]; // 8017A264
  if (true) { c->lr=0x8017A26Cu; dispatch(c,c->ctr); } // 8017A268
  W32(c->r[30]+0x00000000u,c->r[31]); // 8017A26C
L_8017A270:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8017A270
  cmps(c,0,(int32_t)c->r[3],0); // 8017A274
  if (crb(c,2)) { goto L_8017A28C; } // 8017A278
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A27C
  c->ctr=c->r[12]; // 8017A280
  if (true) { c->lr=0x8017A288u; dispatch(c,c->ctr); } // 8017A284
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 8017A288
L_8017A28C:;
  c->r[28]=c->r[29]|c->r[29]; // 8017A28C
  c->r[27]=0u+0x00000000u; // 8017A290
L_8017A294:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 8017A294
  cmps(c,0,(int32_t)c->r[3],0); // 8017A298
  if (crb(c,2)) { goto L_8017A2B0; } // 8017A29C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A2A0
  c->ctr=c->r[12]; // 8017A2A4
  if (true) { c->lr=0x8017A2ACu; dispatch(c,c->ctr); } // 8017A2A8
  W32(c->r[28]+0x00000034u,c->r[31]); // 8017A2AC
L_8017A2B0:;
  c->r[27]=c->r[27]+0x00000001u; // 8017A2B0
  c->r[28]=c->r[28]+0x00000004u; // 8017A2B4
  cmpu(c,0,c->r[27],0x00000002u); // 8017A2B8
  if (crb(c,0)) { IRQCHK(c); goto L_8017A294; } // 8017A2BC
  c->r[28]=c->r[29]|c->r[29]; // 8017A2C0
  c->r[27]=0u+0x00000000u; // 8017A2C4
L_8017A2C8:;
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 8017A2C8
  cmps(c,0,(int32_t)c->r[3],0); // 8017A2CC
  if (crb(c,2)) { goto L_8017A2E4; } // 8017A2D0
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A2D4
  c->ctr=c->r[12]; // 8017A2D8
  if (true) { c->lr=0x8017A2E0u; dispatch(c,c->ctr); } // 8017A2DC
  W32(c->r[28]+0x0000006Cu,c->r[31]); // 8017A2E0
L_8017A2E4:;
  c->r[27]=c->r[27]+0x00000001u; // 8017A2E4
  c->r[28]=c->r[28]+0x00000004u; // 8017A2E8
  cmpu(c,0,c->r[27],0x00000002u); // 8017A2EC
  if (crb(c,0)) { IRQCHK(c); goto L_8017A2C8; } // 8017A2F0
  c->r[26]=c->r[26]+0x00000001u; // 8017A2F4
  c->r[29]=c->r[29]+0x00000008u; // 8017A2F8
  cmpu(c,0,c->r[26],0x00000003u); // 8017A2FC
  c->r[30]=c->r[30]+0x00000004u; // 8017A300
  if (crb(c,0)) { IRQCHK(c); goto L_8017A254; } // 8017A304
  c->r[11]=c->r[1]+0x00000020u; // 8017A308
  c->lr=0x8017A310u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017A30C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017A310
  c->lr=c->r[0]; // 8017A314
  c->r[1]=c->r[1]+0x00000020u; // 8017A318
  return; // 8017A31C
}

// __InitParams_8017A320
void f_8017A320(Ctx* __restrict c) {
  trace_call(0x8017A320u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A320
  c->r[0]=c->lr; // 8017A324
  W32(c->r[1]+0x00000064u,c->r[0]); // 8017A328
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8017A32C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8017A330
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8017A334
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8017A338
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 8017A33C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 8017A340
  c->r[11]=c->r[1]+0x00000030u; // 8017A344
  c->lr=0x8017A34Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017A348
  c->r[5]=R32(c->r[3]+0x000000B4u); // 8017A34C
  c->r[31]=c->r[3]|c->r[3]; // 8017A350
  cmpu(c,0,c->r[5],0x00000008u); // 8017A354
  if (crb(c,0)) { goto L_8017A364; } // 8017A358
  c->r[3]=0u+0x00000000u; // 8017A35C
  goto L_8017A59C; // 8017A360
L_8017A364:;
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A364
  {uint32_t ea=c->r[2]+0xFFFFAB94u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A368
  fcmp(c,0,c->f[1],c->f[2]); // 8017A36C
  if (crb(c,0)) { goto L_8017A380; } // 8017A370
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A374
  fcmp(c,0,c->f[1],c->f[0]); // 8017A378
  if (!crb(c,1)) { goto L_8017A388; } // 8017A37C
L_8017A380:;
  c->r[3]=0u+0x00000000u; // 8017A380
  goto L_8017A59C; // 8017A384
L_8017A388:;
  c->r[0]=R32(c->r[3]+0x000000C0u); // 8017A388
  cmpu(c,0,c->r[0],0x00000006u); // 8017A38C
  if (crb(c,0)) { goto L_8017A39C; } // 8017A390
  c->r[3]=0u+0x00000000u; // 8017A394
  goto L_8017A59C; // 8017A398
L_8017A39C:;
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A39C
  fcmp(c,0,c->f[0],c->f[2]); // 8017A3A0
  if (!crb(c,0)) { goto L_8017A3B0; } // 8017A3A4
  c->r[3]=0u+0x00000000u; // 8017A3A8
  goto L_8017A59C; // 8017A3AC
L_8017A3B0:;
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A3B0
  fcmp(c,0,c->f[0],c->f[2]); // 8017A3B4
  if (crb(c,0)) { goto L_8017A3C8; } // 8017A3B8
  {uint32_t ea=c->r[2]+0xFFFFAB98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A3BC
  fcmp(c,0,c->f[0],c->f[1]); // 8017A3C0
  if (!crb(c,1)) { goto L_8017A3D0; } // 8017A3C4
L_8017A3C8:;
  c->r[3]=0u+0x00000000u; // 8017A3C8
  goto L_8017A59C; // 8017A3CC
L_8017A3D0:;
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A3D0
  fcmp(c,0,c->f[0],c->f[2]); // 8017A3D4
  if (crb(c,0)) { goto L_8017A3E4; } // 8017A3D8
  fcmp(c,0,c->f[0],c->f[1]); // 8017A3DC
  if (!crb(c,1)) { goto L_8017A3EC; } // 8017A3E0
L_8017A3E4:;
  c->r[3]=0u+0x00000000u; // 8017A3E4
  goto L_8017A59C; // 8017A3E8
L_8017A3EC:;
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A3EC
  fcmp(c,0,c->f[0],c->f[2]); // 8017A3F0
  if (crb(c,0)) { goto L_8017A400; } // 8017A3F4
  fcmp(c,0,c->f[0],c->f[1]); // 8017A3F8
  if (!crb(c,1)) { goto L_8017A408; } // 8017A3FC
L_8017A400:;
  c->r[3]=0u+0x00000000u; // 8017A400
  goto L_8017A59C; // 8017A404
L_8017A408:;
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A408
  fcmp(c,0,c->f[0],c->f[2]); // 8017A40C
  if (crb(c,0)) { goto L_8017A41C; } // 8017A410
  fcmp(c,0,c->f[0],c->f[1]); // 8017A414
  if (!crb(c,1)) { goto L_8017A424; } // 8017A418
L_8017A41C:;
  c->r[3]=0u+0x00000000u; // 8017A41C
  goto L_8017A59C; // 8017A420
L_8017A424:;
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A424
  fcmp(c,0,c->f[0],c->f[2]); // 8017A428
  if (crb(c,0)) { goto L_8017A438; } // 8017A42C
  fcmp(c,0,c->f[0],c->f[1]); // 8017A430
  if (!crb(c,1)) { goto L_8017A440; } // 8017A434
L_8017A438:;
  c->r[3]=0u+0x00000000u; // 8017A438
  goto L_8017A59C; // 8017A43C
L_8017A440:;
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A440
  fcmp(c,0,c->f[0],c->f[2]); // 8017A444
  if (crb(c,0)) { goto L_8017A454; } // 8017A448
  fcmp(c,0,c->f[0],c->f[1]); // 8017A44C
  if (!crb(c,1)) { goto L_8017A45C; } // 8017A450
L_8017A454:;
  c->r[3]=0u+0x00000000u; // 8017A454
  goto L_8017A59C; // 8017A458
L_8017A45C:;
  c->r[0]=0u+0x00000000u; // 8017A45C
  c->r[4]=0u+0x802E0000u; // 8017A460
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017A464
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8017A468
  c->r[4]=c->r[4]+0xFFFFA660u; // 8017A46C
  cmpu(c,0,c->r[5],0x00000003u); // 8017A470
  c->r[0]=R32(c->r[4]+c->r[0]); // 8017A474
  W32(c->r[3]+0x00000010u,c->r[0]); // 8017A478
  if (crb(c,1)) { goto L_8017A48C; } // 8017A47C
  {uint32_t ea=c->r[2]+0xFFFFABA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A480
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8017A484
  goto L_8017A494; // 8017A488
L_8017A48C:;
  {uint32_t ea=c->r[2]+0xFFFFABACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A48C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8017A490
L_8017A494:;
  {uint32_t ea=c->r[2]+0xFFFFAB90u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A494
  c->r[28]=0u+0x00000000u; // 8017A498
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A49C
  W32(c->r[3]+0x00000028u,c->r[28]); // 8017A4A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8017A4A4
  c->lr=0x8017A4ACu; f_80252A7C(c); // 8017A4A8
  c->r[29]=0u+0x802E0000u; // 8017A4AC
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 8017A4B0
  {uint32_t ea=c->r[2]+0xFFFFABC8u; c->f[29]=RF64(ea);} // 8017A4B4
  c->r[27]=c->r[31]|c->r[31]; // 8017A4B8
  {uint32_t ea=c->r[2]+0xFFFFABB0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8017A4BC
  c->r[29]=c->r[29]+0xFFFFA680u; // 8017A4C0
  {uint32_t ea=c->r[2]+0xFFFFAB90u; c->f[31]=c->ps1[31]=RF32(ea);} // 8017A4C4
  c->r[25]=0u+0x00000000u; // 8017A4C8
  c->r[26]=0u+0x00000000u; // 8017A4CC
  c->r[30]=0u+0x43300000u; // 8017A4D0
L_8017A4D4:;
  W32(c->r[27]+0x0000004Cu,c->r[28]); // 8017A4D4
  {uint32_t ea=c->r[2]+0xFFFFABB8u; c->f[1]=RF64(ea);} // 8017A4D8
  c->r[0]=R32(c->r[31]+0x000000C0u); // 8017A4DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017A4E0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8017A4E4
  c->r[0]=c->r[26]+c->r[0]; // 8017A4E8
  c->r[0]=R32(c->r[29]+c->r[0]); // 8017A4EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017A4F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8017A4F4
  W32(c->r[27]+0x00000054u,c->r[0]); // 8017A4F8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 8017A4FC
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A500
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 8017A504
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8017A508
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 8017A50C
  c->lr=0x8017A514u; f_80262BAC(c); // 8017A510
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8017A514
  c->r[25]=c->r[25]+0x00000001u; // 8017A518
  cmpu(c,0,c->r[25],0x00000002u); // 8017A51C
  c->r[26]=c->r[26]+0x00000004u; // 8017A520
  {uint32_t ea=c->r[27]+0x00000064u; WF32(ea,c->f[0]);} // 8017A524
  c->r[27]=c->r[27]+0x00000004u; // 8017A528
  if (crb(c,0)) { IRQCHK(c); goto L_8017A4D4; } // 8017A52C
  c->r[0]=R32(c->r[31]+0x000000C0u); // 8017A530
  c->r[4]=0u+0x00000000u; // 8017A534
  c->r[3]=0u+0x802E0000u; // 8017A538
  W32(c->r[31]+0x00000084u,c->r[4]); // 8017A53C
  c->r[3]=c->r[3]+0xFFFFA680u; // 8017A540
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8017A544
  c->r[3]=c->r[3]+c->r[0]; // 8017A548
  {uint32_t ea=c->r[2]+0xFFFFAB98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A54C
  c->r[0]=R32(c->r[3]+0x00000008u); // 8017A550
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A554
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 8017A558
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8017A55C
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A560
  W32(c->r[31]+0x00000088u,c->r[4]); // 8017A564
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017A568
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8017A56C
  fcmp(c,0,c->f[1],c->f[0]); // 8017A570
  W32(c->r[31]+0x00000090u,c->r[0]); // 8017A574
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[2]);} // 8017A578
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[1]);} // 8017A57C
  if (!crb(c,1)) { goto L_8017A588; } // 8017A580
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 8017A584
L_8017A588:;
  {uint32_t ea=c->r[2]+0xFFFFAB94u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A588
  c->r[3]=0u+0x00000001u; // 8017A58C
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 8017A590
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 8017A594
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 8017A598
L_8017A59C:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8017A59C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8017A5A0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8017A5A4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8017A5A8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 8017A5AC
  c->r[11]=c->r[1]+0x00000030u; // 8017A5B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 8017A5B4
  c->lr=0x8017A5BCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017A5B8
  c->r[0]=R32(c->r[1]+0x00000064u); // 8017A5BC
  c->lr=c->r[0]; // 8017A5C0
  c->r[1]=c->r[1]+0x00000060u; // 8017A5C4
  return; // 8017A5C8
}

// fn_8017A5CC
void f_8017A5CC(Ctx* __restrict c) {
  c->r[3]=0u+0x00010000u; // 8017A5CC
  c->r[3]=c->r[3]+0xFFFF9600u; // 8017A5D0
  return; // 8017A5D4
}

// fn_8017A5D8
void f_8017A5D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A5D8
  c->r[0]=c->lr; // 8017A5DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017A5E0
  c->r[11]=c->r[1]+0x00000020u; // 8017A5E4
  c->lr=0x8017A5ECu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017A5E8
  c->r[30]=c->r[3]|c->r[3]; // 8017A5EC
  c->lr=0x8017A5F4u; f_80154410(c); // 8017A5F0
  c->r[4]=R32(c->r[30]+0x0000007Cu); // 8017A5F4
  c->r[0]=0u+0x00000C80u; // 8017A5F8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8017A5FC
  c->r[31]=c->r[3]|c->r[3]; // 8017A600
  c->r[0]=c->r[4]|0x00000001u; // 8017A604
  c->r[27]=c->r[30]|c->r[30]; // 8017A608
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A60C
  c->r[29]=0u+0x00000000u; // 8017A610
L_8017A614:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017A614
  c->r[12]=R32(c->r[13]+0xFFFF9128u); // 8017A618
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A61C
  c->ctr=c->r[12]; // 8017A620
  if (true) { c->lr=0x8017A628u; dispatch(c,c->ctr); } // 8017A624
  cmps(c,0,(int32_t)c->r[3],0); // 8017A628
  W32(c->r[27]+0x00000000u,c->r[3]); // 8017A62C
  if (!crb(c,2)) { goto L_8017A63C; } // 8017A630
  c->r[0]=0u+0x00000000u; // 8017A634
  goto L_8017A650; // 8017A638
L_8017A63C:;
  c->r[29]=c->r[29]+0x00000001u; // 8017A63C
  c->r[27]=c->r[27]+0x00000004u; // 8017A640
  cmpu(c,0,c->r[29],0x00000003u); // 8017A644
  if (crb(c,0)) { IRQCHK(c); goto L_8017A614; } // 8017A648
  c->r[0]=0u+0x00000001u; // 8017A64C
L_8017A650:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017A650
  if (!crb(c,2)) { goto L_8017A6B8; } // 8017A654
  c->lr=0x8017A65Cu; f_80154410(c); // 8017A658
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 8017A65C
  c->r[27]=c->r[3]|c->r[3]; // 8017A660
  c->r[28]=0u+0x00000000u; // 8017A664
  c->r[29]=0u+0x00000000u; // 8017A668
  c->r[0]=c->r[0]|0x00000001u; // 8017A66C
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A670
L_8017A674:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A674
  cmps(c,0,(int32_t)c->r[3],0); // 8017A678
  if (crb(c,2)) { goto L_8017A68C; } // 8017A67C
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A680
  c->ctr=c->r[12]; // 8017A684
  if (true) { c->lr=0x8017A68Cu; dispatch(c,c->ctr); } // 8017A688
L_8017A68C:;
  c->r[28]=c->r[28]+0x00000001u; // 8017A68C
  W32(c->r[30]+0x00000000u,c->r[29]); // 8017A690
  cmpu(c,0,c->r[28],0x00000003u); // 8017A694
  c->r[30]=c->r[30]+0x00000004u; // 8017A698
  if (crb(c,0)) { IRQCHK(c); goto L_8017A674; } // 8017A69C
  c->r[3]=c->r[27]|c->r[27]; // 8017A6A0
  c->lr=0x8017A6A8u; f_80154438(c); // 8017A6A4
  c->r[3]=c->r[31]|c->r[31]; // 8017A6A8
  c->lr=0x8017A6B0u; f_80154438(c); // 8017A6AC
  c->r[3]=0u+0x00000000u; // 8017A6B0
  goto L_8017A81C; // 8017A6B4
L_8017A6B8:;
  c->r[28]=c->r[30]|c->r[30]; // 8017A6B8
  c->r[27]=0u+0x00000000u; // 8017A6BC
L_8017A6C0:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8017A6C0
  cmps(c,0,(int32_t)c->r[3],0); // 8017A6C4
  if (!crb(c,2)) { goto L_8017A6D4; } // 8017A6C8
  c->r[4]=0u+0x00000000u; // 8017A6CC
  goto L_8017A72C; // 8017A6D0
L_8017A6D4:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017A6D4
  c->r[4]=0u+0x00000000u; // 8017A6D8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A6DC
  c->lr=0x8017A6E4u; f_8000443C(c); // 8017A6E0
  c->r[27]=c->r[27]+0x00000001u; // 8017A6E4
  c->r[28]=c->r[28]+0x00000004u; // 8017A6E8
  cmpu(c,0,c->r[27],0x00000003u); // 8017A6EC
  if (crb(c,0)) { IRQCHK(c); goto L_8017A6C0; } // 8017A6F0
  {uint32_t ea=c->r[2]+0xFFFFABD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A6F4
  c->r[0]=0u+0x00000000u; // 8017A6F8
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A6FC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8017A700
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8017A704
  c->lr=0x8017A70Cu; f_80252A7C(c); // 8017A708
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017A70C
  c->r[4]=0u+0x00000001u; // 8017A710
  c->r[3]=c->r[0]-c->r[3]; // 8017A714
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8017A718
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 8017A71C
  W32(c->r[30]+0x00000018u,c->r[0]); // 8017A720
  W32(c->r[30]+0x00000010u,c->r[3]); // 8017A724
  W32(c->r[30]+0x00000014u,c->r[3]); // 8017A728
L_8017A72C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017A72C
  if (!crb(c,2)) { goto L_8017A794; } // 8017A730
  c->lr=0x8017A738u; f_80154410(c); // 8017A734
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 8017A738
  c->r[28]=c->r[3]|c->r[3]; // 8017A73C
  c->r[27]=0u+0x00000000u; // 8017A740
  c->r[29]=0u+0x00000000u; // 8017A744
  c->r[0]=c->r[0]|0x00000001u; // 8017A748
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A74C
L_8017A750:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A750
  cmps(c,0,(int32_t)c->r[3],0); // 8017A754
  if (crb(c,2)) { goto L_8017A768; } // 8017A758
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A75C
  c->ctr=c->r[12]; // 8017A760
  if (true) { c->lr=0x8017A768u; dispatch(c,c->ctr); } // 8017A764
L_8017A768:;
  c->r[27]=c->r[27]+0x00000001u; // 8017A768
  W32(c->r[30]+0x00000000u,c->r[29]); // 8017A76C
  cmpu(c,0,c->r[27],0x00000003u); // 8017A770
  c->r[30]=c->r[30]+0x00000004u; // 8017A774
  if (crb(c,0)) { IRQCHK(c); goto L_8017A750; } // 8017A778
  c->r[3]=c->r[28]|c->r[28]; // 8017A77C
  c->lr=0x8017A784u; f_80154438(c); // 8017A780
  c->r[3]=c->r[31]|c->r[31]; // 8017A784
  c->lr=0x8017A78Cu; f_80154438(c); // 8017A788
  c->r[3]=0u+0x00000000u; // 8017A78C
  goto L_8017A81C; // 8017A790
L_8017A794:;
  c->r[3]=c->r[30]|c->r[30]; // 8017A794
  c->lr=0x8017A79Cu; f_8017ADD4(c); // 8017A798
  cmps(c,0,(int32_t)c->r[3],0); // 8017A79C
  if (!crb(c,2)) { goto L_8017A804; } // 8017A7A0
  c->lr=0x8017A7A8u; f_80154410(c); // 8017A7A4
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 8017A7A8
  c->r[28]=c->r[3]|c->r[3]; // 8017A7AC
  c->r[27]=0u+0x00000000u; // 8017A7B0
  c->r[29]=0u+0x00000000u; // 8017A7B4
  c->r[0]=c->r[0]|0x00000001u; // 8017A7B8
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A7BC
L_8017A7C0:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A7C0
  cmps(c,0,(int32_t)c->r[3],0); // 8017A7C4
  if (crb(c,2)) { goto L_8017A7D8; } // 8017A7C8
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A7CC
  c->ctr=c->r[12]; // 8017A7D0
  if (true) { c->lr=0x8017A7D8u; dispatch(c,c->ctr); } // 8017A7D4
L_8017A7D8:;
  c->r[27]=c->r[27]+0x00000001u; // 8017A7D8
  W32(c->r[30]+0x00000000u,c->r[29]); // 8017A7DC
  cmpu(c,0,c->r[27],0x00000003u); // 8017A7E0
  c->r[30]=c->r[30]+0x00000004u; // 8017A7E4
  if (crb(c,0)) { IRQCHK(c); goto L_8017A7C0; } // 8017A7E8
  c->r[3]=c->r[28]|c->r[28]; // 8017A7EC
  c->lr=0x8017A7F4u; f_80154438(c); // 8017A7F0
  c->r[3]=c->r[31]|c->r[31]; // 8017A7F4
  c->lr=0x8017A7FCu; f_80154438(c); // 8017A7F8
  c->r[3]=0u+0x00000000u; // 8017A7FC
  goto L_8017A81C; // 8017A800
L_8017A804:;
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 8017A804
  c->r[3]=c->r[31]|c->r[31]; // 8017A808
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8017A80C
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A810
  c->lr=0x8017A818u; f_80154438(c); // 8017A814
  c->r[3]=0u+0x00000001u; // 8017A818
L_8017A81C:;
  c->r[11]=c->r[1]+0x00000020u; // 8017A81C
  c->lr=0x8017A824u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017A820
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017A824
  c->lr=c->r[0]; // 8017A828
  c->r[1]=c->r[1]+0x00000020u; // 8017A82C
  return; // 8017A830
}

// AXFXChorusExpSettingsUpdate
void f_8017A834(Ctx* __restrict c) {
  trace_call(0x8017A834u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A834
  c->r[0]=c->lr; // 8017A838
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017A83C
  c->r[11]=c->r[1]+0x00000020u; // 8017A840
  c->lr=0x8017A848u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017A844
  c->r[30]=c->r[3]|c->r[3]; // 8017A848
  c->lr=0x8017A850u; f_80154410(c); // 8017A84C
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 8017A850
  c->r[31]=c->r[3]|c->r[3]; // 8017A854
  c->r[27]=c->r[30]|c->r[30]; // 8017A858
  c->r[29]=0u+0x00000000u; // 8017A85C
  c->r[0]=c->r[0]|0x00000001u; // 8017A860
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A864
L_8017A868:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017A868
  cmps(c,0,(int32_t)c->r[3],0); // 8017A86C
  if (!crb(c,2)) { goto L_8017A87C; } // 8017A870
  c->r[4]=0u+0x00000000u; // 8017A874
  goto L_8017A8D4; // 8017A878
L_8017A87C:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017A87C
  c->r[4]=0u+0x00000000u; // 8017A880
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017A884
  c->lr=0x8017A88Cu; f_8000443C(c); // 8017A888
  c->r[29]=c->r[29]+0x00000001u; // 8017A88C
  c->r[27]=c->r[27]+0x00000004u; // 8017A890
  cmpu(c,0,c->r[29],0x00000003u); // 8017A894
  if (crb(c,0)) { IRQCHK(c); goto L_8017A868; } // 8017A898
  {uint32_t ea=c->r[2]+0xFFFFABD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017A89C
  c->r[0]=0u+0x00000000u; // 8017A8A0
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017A8A4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8017A8A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8017A8AC
  c->lr=0x8017A8B4u; f_80252A7C(c); // 8017A8B0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017A8B4
  c->r[4]=0u+0x00000001u; // 8017A8B8
  c->r[3]=c->r[0]-c->r[3]; // 8017A8BC
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8017A8C0
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 8017A8C4
  W32(c->r[30]+0x00000018u,c->r[0]); // 8017A8C8
  W32(c->r[30]+0x00000010u,c->r[3]); // 8017A8CC
  W32(c->r[30]+0x00000014u,c->r[3]); // 8017A8D0
L_8017A8D4:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017A8D4
  if (!crb(c,2)) { goto L_8017A93C; } // 8017A8D8
  c->lr=0x8017A8E0u; f_80154410(c); // 8017A8DC
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 8017A8E0
  c->r[27]=c->r[3]|c->r[3]; // 8017A8E4
  c->r[28]=0u+0x00000000u; // 8017A8E8
  c->r[29]=0u+0x00000000u; // 8017A8EC
  c->r[0]=c->r[0]|0x00000001u; // 8017A8F0
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A8F4
L_8017A8F8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A8F8
  cmps(c,0,(int32_t)c->r[3],0); // 8017A8FC
  if (crb(c,2)) { goto L_8017A910; } // 8017A900
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A904
  c->ctr=c->r[12]; // 8017A908
  if (true) { c->lr=0x8017A910u; dispatch(c,c->ctr); } // 8017A90C
L_8017A910:;
  c->r[28]=c->r[28]+0x00000001u; // 8017A910
  W32(c->r[30]+0x00000000u,c->r[29]); // 8017A914
  cmpu(c,0,c->r[28],0x00000003u); // 8017A918
  c->r[30]=c->r[30]+0x00000004u; // 8017A91C
  if (crb(c,0)) { IRQCHK(c); goto L_8017A8F8; } // 8017A920
  c->r[3]=c->r[27]|c->r[27]; // 8017A924
  c->lr=0x8017A92Cu; f_80154438(c); // 8017A928
  c->r[3]=c->r[31]|c->r[31]; // 8017A92C
  c->lr=0x8017A934u; f_80154438(c); // 8017A930
  c->r[3]=0u+0x00000000u; // 8017A934
  goto L_8017A9CC; // 8017A938
L_8017A93C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017A93C
  c->lr=0x8017A944u; f_8017ADD4(c); // 8017A940
  cmps(c,0,(int32_t)c->r[3],0); // 8017A944
  c->r[27]=c->r[3]|c->r[3]; // 8017A948
  if (!crb(c,2)) { goto L_8017A9B0; } // 8017A94C
  c->lr=0x8017A954u; f_80154410(c); // 8017A950
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 8017A954
  c->r[28]=c->r[3]|c->r[3]; // 8017A958
  c->r[27]=0u+0x00000000u; // 8017A95C
  c->r[29]=0u+0x00000000u; // 8017A960
  c->r[0]=c->r[0]|0x00000001u; // 8017A964
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A968
L_8017A96C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8017A96C
  cmps(c,0,(int32_t)c->r[3],0); // 8017A970
  if (crb(c,2)) { goto L_8017A984; } // 8017A974
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017A978
  c->ctr=c->r[12]; // 8017A97C
  if (true) { c->lr=0x8017A984u; dispatch(c,c->ctr); } // 8017A980
L_8017A984:;
  c->r[27]=c->r[27]+0x00000001u; // 8017A984
  W32(c->r[30]+0x00000000u,c->r[29]); // 8017A988
  cmpu(c,0,c->r[27],0x00000003u); // 8017A98C
  c->r[30]=c->r[30]+0x00000004u; // 8017A990
  if (crb(c,0)) { IRQCHK(c); goto L_8017A96C; } // 8017A994
  c->r[3]=c->r[28]|c->r[28]; // 8017A998
  c->lr=0x8017A9A0u; f_80154438(c); // 8017A99C
  c->r[3]=c->r[31]|c->r[31]; // 8017A9A0
  c->lr=0x8017A9A8u; f_80154438(c); // 8017A9A4
  c->r[3]=0u+0x00000000u; // 8017A9A8
  goto L_8017A9CC; // 8017A9AC
L_8017A9B0:;
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 8017A9B0
  c->r[3]=c->r[31]|c->r[31]; // 8017A9B4
  c->r[0]=c->r[0]|0x00000002u; // 8017A9B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8017A9BC
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 8017A9C0
  c->lr=0x8017A9C8u; f_80154438(c); // 8017A9C4
  c->r[3]=c->r[27]|c->r[27]; // 8017A9C8
L_8017A9CC:;
  c->r[11]=c->r[1]+0x00000020u; // 8017A9CC
  c->lr=0x8017A9D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017A9D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017A9D4
  c->lr=c->r[0]; // 8017A9D8
  c->r[1]=c->r[1]+0x00000020u; // 8017A9DC
  return; // 8017A9E0
}

// AXFXChorusExpShutdown
void f_8017A9E4(Ctx* __restrict c) {
  trace_call(0x8017A9E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017A9E4
  c->r[0]=c->lr; // 8017A9E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017A9EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017A9F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017A9F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017A9F8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017A9FC
  c->r[28]=c->r[3]|c->r[3]; // 8017AA00
  c->lr=0x8017AA08u; f_80154410(c); // 8017AA04
  c->r[0]=R32(c->r[28]+0x0000007Cu); // 8017AA08
  c->r[29]=c->r[3]|c->r[3]; // 8017AA0C
  c->r[30]=0u+0x00000000u; // 8017AA10
  c->r[31]=0u+0x00000000u; // 8017AA14
  c->r[0]=c->r[0]|0x00000001u; // 8017AA18
  W32(c->r[28]+0x0000007Cu,c->r[0]); // 8017AA1C
L_8017AA20:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8017AA20
  cmps(c,0,(int32_t)c->r[3],0); // 8017AA24
  if (crb(c,2)) { goto L_8017AA38; } // 8017AA28
  c->r[12]=R32(c->r[13]+0xFFFF912Cu); // 8017AA2C
  c->ctr=c->r[12]; // 8017AA30
  if (true) { c->lr=0x8017AA38u; dispatch(c,c->ctr); } // 8017AA34
L_8017AA38:;
  c->r[30]=c->r[30]+0x00000001u; // 8017AA38
  W32(c->r[28]+0x00000000u,c->r[31]); // 8017AA3C
  cmpu(c,0,c->r[30],0x00000003u); // 8017AA40
  c->r[28]=c->r[28]+0x00000004u; // 8017AA44
  if (crb(c,0)) { IRQCHK(c); goto L_8017AA20; } // 8017AA48
  c->r[3]=c->r[29]|c->r[29]; // 8017AA4C
  c->lr=0x8017AA54u; f_80154438(c); // 8017AA50
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017AA54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017AA58
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017AA5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017AA60
  c->r[28]=R32(c->r[1]+0x00000010u); // 8017AA64
  c->lr=c->r[0]; // 8017AA68
  c->r[1]=c->r[1]+0x00000020u; // 8017AA6C
  return; // 8017AA70
}

// AXFXChorusExpCallback
void f_8017AA74(Ctx* __restrict c) {
  trace_call(0x8017AA74u);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AA74
  c->r[0]=c->lr; // 8017AA78
  W32(c->r[1]+0x00000204u,c->r[0]); // 8017AA7C
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 8017AA80
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 8017AA84
  c->r[11]=c->r[1]+0x000001F0u; // 8017AA88
  c->lr=0x8017AA90u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017AA8C
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 8017AA90
  c->r[27]=c->r[4]|c->r[4]; // 8017AA94
  cmps(c,0,(int32_t)c->r[0],0); // 8017AA98
  if (crb(c,2)) { goto L_8017AAAC; } // 8017AA9C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8017AAA0
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 8017AAA4
  goto L_8017ADB4; // 8017AAA8
L_8017AAAC:;
  c->r[7]=R32(c->r[4]+0x00000090u); // 8017AAAC
  c->r[6]=R32(c->r[3]+0x00000000u); // 8017AAB0
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017AAB4
  cmps(c,0,(int32_t)c->r[7],0); // 8017AAB8
  c->r[0]=R32(c->r[3]+0x00000008u); // 8017AABC
  W32(c->r[1]+0x00000020u,c->r[6]); // 8017AAC0
  W32(c->r[1]+0x00000024u,c->r[5]); // 8017AAC4
  W32(c->r[1]+0x00000028u,c->r[0]); // 8017AAC8
  if (crb(c,2)) { goto L_8017AAE8; } // 8017AACC
  c->r[5]=R32(c->r[7]+0x00000000u); // 8017AAD0
  c->r[3]=R32(c->r[7]+0x00000004u); // 8017AAD4
  c->r[0]=R32(c->r[7]+0x00000008u); // 8017AAD8
  W32(c->r[1]+0x00000014u,c->r[5]); // 8017AADC
  W32(c->r[1]+0x00000018u,c->r[3]); // 8017AAE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8017AAE4
L_8017AAE8:;
  c->r[6]=R32(c->r[4]+0x00000094u); // 8017AAE8
  cmps(c,0,(int32_t)c->r[6],0); // 8017AAEC
  if (crb(c,2)) { goto L_8017AB0C; } // 8017AAF0
  c->r[5]=R32(c->r[6]+0x00000000u); // 8017AAF4
  c->r[3]=R32(c->r[6]+0x00000004u); // 8017AAF8
  c->r[0]=R32(c->r[6]+0x00000008u); // 8017AAFC
  W32(c->r[1]+0x00000008u,c->r[5]); // 8017AB00
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8017AB04
  W32(c->r[1]+0x00000010u,c->r[0]); // 8017AB08
L_8017AB0C:;
  c->r[3]=c->r[1]+0x00000030u; // 8017AB0C
  c->r[4]=c->r[4]+0x00000020u; // 8017AB10
  c->lr=0x8017AB18u; f_8017AFCC(c); // 8017AB14
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[31]=RF64(ea);} // 8017AB18
  c->r[30]=c->r[1]+0x00000030u; // 8017AB1C
  c->r[29]=0u+0x00000000u; // 8017AB20
  c->r[31]=0u+0x43300000u; // 8017AB24
  c->r[25]=0u+0x00000000u; // 8017AB28
  c->r[26]=0u+0x00000003u; // 8017AB2C
L_8017AB30:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 8017AB30
  c->r[0]=R32(c->r[30]+0x00000000u); // 8017AB34
  c->r[4]=R32(c->r[27]+0x00000018u); // 8017AB38
  c->r[6]=c->r[3]+c->r[0]; // 8017AB3C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 8017AB40
  if (crb(c,0)) { goto L_8017AB50; } // 8017AB44
  c->r[6]=c->r[6]-c->r[4]; // 8017AB48
  goto L_8017AB5C; // 8017AB4C
L_8017AB50:;
  cmps(c,0,(int32_t)c->r[6],0); // 8017AB50
  if (!crb(c,0)) { goto L_8017AB5C; } // 8017AB54
  c->r[6]=c->r[6]+c->r[4]; // 8017AB58
L_8017AB5C:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 8017AB5C
  c->r[3]=c->r[6]-c->r[0]; cr0(c,c->r[3]); // 8017AB60
  if (!crb(c,0)) { goto L_8017AB6C; } // 8017AB64
  c->r[3]=c->r[3]+c->r[4]; // 8017AB68
L_8017AB6C:;
  c->r[7]=rotl(c->r[3],16)&0x0000FFFFu; cr0(c,c->r[7]); // 8017AB6C
  c->r[8]=rotl(c->r[3],0)&0x0000FFFFu; // 8017AB70
  c->r[9]=rotl(c->r[0],16)&0x0000FFFFu; // 8017AB74
  c->r[28]=R32(c->r[27]+0x00000078u); // 8017AB78
  c->ctr=c->r[7]; // 8017AB7C
  if (crb(c,2)) { goto L_8017ABD8; } // 8017AB80
L_8017AB84:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017AB84
  c->r[4]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8017AB88
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8017AB8C
  c->r[28]=c->r[28]+0x00000001u; // 8017AB90
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AB94
  c->r[5]=c->r[27]+c->r[0]; // 8017AB98
  c->r[9]=c->r[9]+0x00000001u; // 8017AB9C
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 8017ABA0
  {uint32_t ea=c->r[5]+0x00000048u; WF32(ea,c->f[0]);} // 8017ABA4
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 8017ABA8
  c->r[3]=R32(c->r[27]+0x00000004u); // 8017ABAC
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 8017ABB0
  {uint32_t ea=c->r[5]+0x00000058u; WF32(ea,c->f[0]);} // 8017ABB4
  c->r[3]=R32(c->r[27]+0x00000008u); // 8017ABB8
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 8017ABBC
  {uint32_t ea=c->r[5]+0x00000068u; WF32(ea,c->f[0]);} // 8017ABC0
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 8017ABC4
  cmpu(c,0,c->r[9],c->r[0]); // 8017ABC8
  if (crb(c,0)) { goto L_8017ABD4; } // 8017ABCC
  c->r[9]=0u+0x00000000u; // 8017ABD0
L_8017ABD4:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017AB84; } // 8017ABD4
L_8017ABD8:;
  c->r[0]=rotl(c->r[6],0)&0xFFFF0000u; // 8017ABD8
  c->r[3]=rotl(c->r[8],23)&0x0000007Fu; // 8017ABDC
  W32(c->r[27]+0x00000014u,c->r[0]); // 8017ABE0
  c->lr=0x8017ABE8u; f_8017B0DC(c); // 8017ABE4
  c->r[4]=c->r[27]|c->r[27]; // 8017ABE8
  c->r[7]=c->r[27]|c->r[27]; // 8017ABEC
  c->r[5]=c->r[1]+0x00000014u; // 8017ABF0
  c->r[6]=c->r[1]+0x00000020u; // 8017ABF4
  c->r[8]=c->r[1]+0x00000008u; // 8017ABF8
  c->ctr=c->r[26]; // 8017ABFC
L_8017AC00:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8017AC00
  c->r[28]=c->r[28]+0x00000001u; // 8017AC04
  c->r[10]=c->r[4]+c->r[0]; // 8017AC08
  c->r[0]=R32(c->r[27]+0x00000090u); // 8017AC0C
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 8017AC10
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AC14
  c->r[9]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8017AC18
  {uint32_t ea=c->r[10]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AC1C
  c->r[28]=c->r[28]+0x00000001u; // 8017AC20
  {uint32_t ea=c->r[2]+0xFFFFABD4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8017AC24
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[0]); // 8017AC28
  c->r[11]=c->r[4]+c->r[9]; // 8017AC2C
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 8017AC30
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AC34
  c->r[9]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8017AC38
  {uint32_t ea=c->r[11]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AC3C
  c->r[28]=c->r[28]+0x00000001u; // 8017AC40
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 8017AC44
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[2]); // 8017AC48
  c->r[10]=c->r[4]+c->r[9]; // 8017AC4C
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 8017AC50
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017AC54
  c->r[9]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8017AC58
  {uint32_t ea=c->r[10]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017AC5C
  c->r[9]=c->r[4]+c->r[9]; // 8017AC60
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[4]); // 8017AC64
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8017AC68
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AC6C
  {uint32_t ea=c->r[9]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AC70
  cmps(c,0,(int32_t)c->r[0],0); // 8017AC74
  c->r[28]=c->r[28]+0x00000001u; // 8017AC78
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8017AC7C
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[2]); // 8017AC80
  c->r[28]=rotl(c->r[28],0)&0x00000003u; // 8017AC84
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[0]); // 8017AC88
  if (crb(c,2)) { goto L_8017ACC4; } // 8017AC8C
  c->r[9]=R32(c->r[5]+0x00000000u); // 8017AC90
  c->r[10]=R32(c->r[6]+0x00000000u); // 8017AC94
  c->r[0]=R32(c->r[9]+0x00000000u); // 8017AC98
  c->r[9]=c->r[9]+0x00000004u; // 8017AC9C
  c->r[10]=R32(c->r[10]+0x00000000u); // 8017ACA0
  W32(c->r[1]+0x000001B0u,c->r[31]); // 8017ACA4
  c->r[0]=c->r[10]+c->r[0]; // 8017ACA8
  c->r[0]=c->r[0]^0x80000000u; // 8017ACAC
  W32(c->r[5]+0x00000000u,c->r[9]); // 8017ACB0
  W32(c->r[1]+0x000001B4u,c->r[0]); // 8017ACB4
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[0]=RF64(ea);} // 8017ACB8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 8017ACBC
  goto L_8017ACE0; // 8017ACC0
L_8017ACC4:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 8017ACC4
  W32(c->r[1]+0x000001B8u,c->r[31]); // 8017ACC8
  c->r[0]=R32(c->r[9]+0x00000000u); // 8017ACCC
  c->r[0]=c->r[0]^0x80000000u; // 8017ACD0
  W32(c->r[1]+0x000001BCu,c->r[0]); // 8017ACD4
  {uint32_t ea=c->r[1]+0x000001B8u; c->f[0]=RF64(ea);} // 8017ACD8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 8017ACDC
L_8017ACE0:;
  {uint32_t ea=c->r[27]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017ACE0
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8017ACE4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8017ACE8
  c->r[11]=R32(c->r[7]+0x00000000u); // 8017ACEC
  c->r[10]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017ACF0
  c->r[9]=R32(c->r[6]+0x00000000u); // 8017ACF4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8017ACF8
  c->r[0]=c->r[9]+0x00000004u; // 8017ACFC
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017AD00
  {uint32_t ea=c->r[11]+c->r[10]; WF32(ea,c->f[0]);} // 8017AD04
  {uint32_t ea=c->r[27]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AD08
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8017AD0C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8017AD10
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[0]);} // 8017AD14
  c->r[0]=R32(c->r[1]+0x000001C4u); // 8017AD18
  W32(c->r[9]+0x00000000u,c->r[0]); // 8017AD1C
  c->r[0]=R32(c->r[27]+0x00000094u); // 8017AD20
  cmps(c,0,(int32_t)c->r[0],0); // 8017AD24
  if (crb(c,2)) { goto L_8017AD50; } // 8017AD28
  {uint32_t ea=c->r[27]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AD2C
  c->r[9]=R32(c->r[8]+0x00000000u); // 8017AD30
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 8017AD34
  c->r[0]=c->r[9]+0x00000004u; // 8017AD38
  W32(c->r[8]+0x00000000u,c->r[0]); // 8017AD3C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8017AD40
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[0]);} // 8017AD44
  c->r[0]=R32(c->r[1]+0x000001C4u); // 8017AD48
  W32(c->r[9]+0x00000000u,c->r[0]); // 8017AD4C
L_8017AD50:;
  c->r[4]=c->r[4]+0x00000010u; // 8017AD50
  c->r[5]=c->r[5]+0x00000004u; // 8017AD54
  c->r[6]=c->r[6]+0x00000004u; // 8017AD58
  c->r[7]=c->r[7]+0x00000004u; // 8017AD5C
  c->r[8]=c->r[8]+0x00000004u; // 8017AD60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017AC00; } // 8017AD64
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 8017AD68
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 8017AD6C
  c->r[3]=c->r[3]+0x00000001u; // 8017AD70
  W32(c->r[27]+0x00000078u,c->r[28]); // 8017AD74
  cmpu(c,0,c->r[3],c->r[0]); // 8017AD78
  W32(c->r[27]+0x0000000Cu,c->r[3]); // 8017AD7C
  if (crb(c,0)) { goto L_8017AD88; } // 8017AD80
  W32(c->r[27]+0x0000000Cu,c->r[25]); // 8017AD84
L_8017AD88:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 8017AD88
  c->r[0]=R32(c->r[27]+0x00000018u); // 8017AD8C
  c->r[3]=c->r[3]+0x00010000u; // 8017AD90
  cmpu(c,0,c->r[3],c->r[0]); // 8017AD94
  W32(c->r[27]+0x00000010u,c->r[3]); // 8017AD98
  if (crb(c,0)) { goto L_8017ADA4; } // 8017AD9C
  W32(c->r[27]+0x00000010u,c->r[25]); // 8017ADA0
L_8017ADA4:;
  c->r[29]=c->r[29]+0x00000001u; // 8017ADA4
  c->r[30]=c->r[30]+0x00000004u; // 8017ADA8
  cmpu(c,0,c->r[29],0x00000060u); // 8017ADAC
  if (crb(c,0)) { IRQCHK(c); goto L_8017AB30; } // 8017ADB0
L_8017ADB4:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 8017ADB4
  c->r[11]=c->r[1]+0x000001F0u; // 8017ADB8
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 8017ADBC
  c->lr=0x8017ADC4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017ADC0
  c->r[0]=R32(c->r[1]+0x00000204u); // 8017ADC4
  c->lr=c->r[0]; // 8017ADC8
  c->r[1]=c->r[1]+0x00000200u; // 8017ADCC
  return; // 8017ADD0
}

// __InitParams_8017ADD4
void f_8017ADD4(Ctx* __restrict c) {
  trace_call(0x8017ADD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017ADD4
  c->r[0]=c->lr; // 8017ADD8
  {uint32_t ea=c->r[2]+0xFFFFABE0u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017ADDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017ADE0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8017ADE4
  c->r[31]=c->r[3]|c->r[3]; // 8017ADE8
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017ADEC
  fcmp(c,0,c->f[1],c->f[4]); // 8017ADF0
  if (crb(c,0)) { goto L_8017AE04; } // 8017ADF4
  {uint32_t ea=c->r[2]+0xFFFFABE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017ADF8
  fcmp(c,0,c->f[1],c->f[0]); // 8017ADFC
  if (!crb(c,1)) { goto L_8017AE0C; } // 8017AE00
L_8017AE04:;
  c->r[3]=0u+0x00000000u; // 8017AE04
  goto L_8017AFB8; // 8017AE08
L_8017AE0C:;
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AE0C
  {uint32_t ea=c->r[2]+0xFFFFABD4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017AE10
  fcmp(c,0,c->f[0],c->f[3]); // 8017AE14
  if (crb(c,0)) { goto L_8017AE28; } // 8017AE18
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017AE1C
  fcmp(c,0,c->f[0],c->f[2]); // 8017AE20
  if (!crb(c,1)) { goto L_8017AE30; } // 8017AE24
L_8017AE28:;
  c->r[3]=0u+0x00000000u; // 8017AE28
  goto L_8017AFB8; // 8017AE2C
L_8017AE30:;
  {uint32_t ea=c->r[3]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AE30
  fcmp(c,0,c->f[1],c->f[4]); // 8017AE34
  if (crb(c,0)) { goto L_8017AE48; } // 8017AE38
  {uint32_t ea=c->r[2]+0xFFFFABECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AE3C
  fcmp(c,0,c->f[1],c->f[0]); // 8017AE40
  if (!crb(c,1)) { goto L_8017AE50; } // 8017AE44
L_8017AE48:;
  c->r[3]=0u+0x00000000u; // 8017AE48
  goto L_8017AFB8; // 8017AE4C
L_8017AE50:;
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AE50
  fcmp(c,0,c->f[0],c->f[3]); // 8017AE54
  if (crb(c,0)) { goto L_8017AE68; } // 8017AE58
  fcmp(c,0,c->f[0],c->f[2]); // 8017AE5C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017AE60
  if (!crb(c,2)) { goto L_8017AE70; } // 8017AE64
L_8017AE68:;
  c->r[3]=0u+0x00000000u; // 8017AE68
  goto L_8017AFB8; // 8017AE6C
L_8017AE70:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AE70
  fcmp(c,0,c->f[0],c->f[3]); // 8017AE74
  if (crb(c,0)) { goto L_8017AE84; } // 8017AE78
  fcmp(c,0,c->f[0],c->f[2]); // 8017AE7C
  if (!crb(c,1)) { goto L_8017AE8C; } // 8017AE80
L_8017AE84:;
  c->r[3]=0u+0x00000000u; // 8017AE84
  goto L_8017AFB8; // 8017AE88
L_8017AE8C:;
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AE8C
  fcmp(c,0,c->f[0],c->f[3]); // 8017AE90
  if (crb(c,0)) { goto L_8017AEA0; } // 8017AE94
  fcmp(c,0,c->f[0],c->f[2]); // 8017AE98
  if (!crb(c,1)) { goto L_8017AEA8; } // 8017AE9C
L_8017AEA0:;
  c->r[3]=0u+0x00000000u; // 8017AEA0
  goto L_8017AFB8; // 8017AEA4
L_8017AEA8:;
  c->lr=0x8017AEACu; f_8017B0D0(c); // 8017AEA8
  {uint32_t ea=c->r[2]+0xFFFFABD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017AEAC
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AEB0
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AEB4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8017AEB8
  W32(c->r[31]+0x00000020u,c->r[3]); // 8017AEBC
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[0]); // 8017AEC0
  fcmp(c,0,c->f[6],c->f[1]); // 8017AEC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8017AEC8
  if (!crb(c,2)) { goto L_8017AEE8; } // 8017AECC
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8017AED0
  {uint32_t ea=c->r[2]+0xFFFFABD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AED4
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[1]); // 8017AED8
  fcmp(c,0,c->f[6],c->f[0]); // 8017AEDC
  if (!crb(c,0)) { goto L_8017AEE8; } // 8017AEE0
  c->f[6]=c->f[0]; // 8017AEE4
L_8017AEE8:;
  {uint32_t ea=c->r[31]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 8017AEE8
  c->r[4]=0u+0x00000000u; // 8017AEEC
  {uint32_t ea=c->r[2]+0xFFFFABF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017AEF0
  c->r[0]=0u+0xFFFFFFFFu; // 8017AEF4
  {uint32_t ea=c->r[2]+0xFFFFABF4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8017AEF8
  c->r[3]=0u+0x00000001u; // 8017AEFC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[3]); // 8017AF00
  {uint32_t ea=c->r[2]+0xFFFFABFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AF04
  {uint32_t ea=c->r[2]+0xFFFFABF0u; c->f[5]=c->ps1[5]=RF32(ea);} // 8017AF08
  W32(c->r[31]+0x00000038u,c->r[0]); // 8017AF0C
  W32(c->r[31]+0x00000030u,c->r[4]); // 8017AF10
  W32(c->r[31]+0x00000034u,c->r[4]); // 8017AF14
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[0]); // 8017AF18
  {uint32_t ea=c->r[2]+0xFFFFABD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017AF1C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[3]); // 8017AF20
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 8017AF24
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 8017AF28
  c->f[6]=c->ps1[6]=S(c->f[6]/c->f[7]); // 8017AF2C
  W32(c->r[31]+0x00000040u,c->r[4]); // 8017AF30
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8017AF34
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[1]); // 8017AF38
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[7]); // 8017AF3C
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 8017AF40
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8017AF44
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8017AF48
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8017AF4C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8017AF50
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[4]);} // 8017AF54
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[3]);} // 8017AF58
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 8017AF5C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 8017AF60
  c->r[6]=R32(c->r[1]+0x00000014u); // 8017AF64
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 8017AF68
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8017AF6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017AF70
  W32(c->r[31]+0x0000002Cu,c->r[7]); // 8017AF74
  W32(c->r[31]+0x00000024u,c->r[6]); // 8017AF78
  W32(c->r[31]+0x00000028u,c->r[5]); // 8017AF7C
  W32(c->r[31]+0x00000044u,c->r[0]); // 8017AF80
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 8017AF84
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 8017AF88
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8017AF8C
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 8017AF90
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 8017AF94
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 8017AF98
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 8017AF9C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 8017AFA0
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 8017AFA4
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 8017AFA8
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 8017AFAC
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 8017AFB0
  W32(c->r[31]+0x00000078u,c->r[4]); // 8017AFB4
L_8017AFB8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017AFB8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8017AFBC
  c->lr=c->r[0]; // 8017AFC0
  c->r[1]=c->r[1]+0x00000030u; // 8017AFC4
  return; // 8017AFC8
}

// __CalcLFO
void f_8017AFCC(Ctx* __restrict c) {
  trace_call(0x8017AFCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017AFCC
  c->r[0]=0u+0x00000060u; // 8017AFD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017AFD4
  c->ctr=c->r[0]; // 8017AFD8
L_8017AFDC:;
  c->r[5]=R32(c->r[4]+0x00000010u); // 8017AFDC
  c->r[0]=R32(c->r[4]+0x00000018u); // 8017AFE0
  c->r[5]=rotl(c->r[5],0)&0xFFFF0000u; // 8017AFE4
  cmpu(c,0,c->r[5],c->r[0]); // 8017AFE8
  if (crb(c,2)) { goto L_8017B064; } // 8017AFEC
  W32(c->r[4]+0x00000018u,c->r[5]); // 8017AFF0
  c->r[5]=rotl(c->r[5],16)&0x0000FFFFu; // 8017AFF4
  c->r[0]=c->r[5]+0x00000001u; // 8017AFF8
  c->r[6]=R32(c->r[4]+0x00000000u); // 8017AFFC
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8017B000
  c->r[9]=R32(c->r[4]+0x00000024u); // 8017B004
  c->r[0]=rotl(c->r[0],2)&0x000001FCu; // 8017B008
  c->r[11]=R32(c->r[6]+c->r[5]); // 8017B00C
  c->r[0]=R32(c->r[6]+c->r[0]); // 8017B010
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 8017B014
  c->r[10]=c->r[0]-c->r[11]; // 8017B018
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[5]); // 8017B01C
  c->r[31]=sraw(c,c->r[10],31); // 8017B020
  c->r[7]=sraw(c,c->r[9],31); // 8017B024
  c->r[6]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 8017B028
  c->r[12]=rotl(c->r[0],8)&0xFFFFFFFFu; // 8017B02C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[5])>>32); // 8017B030
  c->r[6]=rotl(c->r[6],8)&0xFFFFFFFFu; // 8017B034
  c->r[8]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[9])>>32); // 8017B038
  c->r[12]=(rotl(c->r[0],8)&0xFFFFFF00u)|(c->r[12]&~0xFFFFFF00u); // 8017B03C
  c->r[9]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[9]); // 8017B040
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 8017B044
  c->r[8]=c->r[8]+c->r[9]; // 8017B048
  c->r[8]=c->r[8]+c->r[5]; // 8017B04C
  c->r[6]=(rotl(c->r[8],8)&0xFFFFFF00u)|(c->r[6]&~0xFFFFFF00u); // 8017B050
  c->r[5]=sraw(c,c->r[8],24); // 8017B054
  W32(c->r[4]+0x00000020u,c->r[6]); // 8017B058
  c->r[5]=sraw(c,c->r[0],24); // 8017B05C
  goto L_8017B074; // 8017B060
L_8017B064:;
  c->r[5]=R32(c->r[4]+0x0000001Cu); // 8017B064
  c->r[0]=R32(c->r[4]+0x00000020u); // 8017B068
  c->r[12]=c->r[5]+c->r[0]; // 8017B06C
  c->r[5]=sraw(c,c->r[12],31); // 8017B070
L_8017B074:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 8017B074
  W32(c->r[4]+0x0000001Cu,c->r[12]); // 8017B078
  cmpu(c,0,c->r[0],0x00000001u); // 8017B07C
  if (crb(c,0)) { goto L_8017B08C; } // 8017B080
  c->r[12]=addc(c,~c->r[12],0x00000000u,1); // 8017B084
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 8017B088
L_8017B08C:;
  c->r[5]=R32(c->r[4]+0x00000010u); // 8017B08C
  c->r[0]=R32(c->r[4]+0x00000004u); // 8017B090
  c->r[5]=c->r[5]+c->r[0]; // 8017B094
  c->r[0]=rotl(c->r[5],0)&0xFF800000u; cr0(c,c->r[0]); // 8017B098
  W32(c->r[4]+0x00000010u,c->r[5]); // 8017B09C
  if (crb(c,2)) { goto L_8017B0B8; } // 8017B0A0
  c->r[0]=R32(c->r[4]+0x00000014u); // 8017B0A4
  c->r[5]=rotl(c->r[5],0)&0x007FFFFFu; // 8017B0A8
  W32(c->r[4]+0x00000010u,c->r[5]); // 8017B0AC
  c->r[0]=c->r[0]^0x00000001u; // 8017B0B0
  W32(c->r[4]+0x00000014u,c->r[0]); // 8017B0B4
L_8017B0B8:;
  W32(c->r[3]+0x00000000u,c->r[12]); // 8017B0B8
  c->r[3]=c->r[3]+0x00000004u; // 8017B0BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017AFDC; } // 8017B0C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017B0C4
  c->r[1]=c->r[1]+0x00000010u; // 8017B0C8
  return; // 8017B0CC
}

// __AXFXGetLfoSinTable
void f_8017B0D0(Ctx* __restrict c) {
  trace_call(0x8017B0D0u);
  c->r[3]=0u+0x802E0000u; // 8017B0D0
  c->r[3]=c->r[3]+0xFFFFA6F0u; // 8017B0D4
  return; // 8017B0D8
}

// __AXFXGetSrcCoef
void f_8017B0DC(Ctx* __restrict c) {
  trace_call(0x8017B0DCu);
  c->r[4]=0u+0x802E0000u; // 8017B0DC
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8017B0E0
  c->r[4]=c->r[4]+0xFFFFA8F0u; // 8017B0E4
  c->r[3]=c->r[4]+c->r[0]; // 8017B0E8
  return; // 8017B0EC
}

// __AXFXAllocFunction
void f_8017B0F0(Ctx* __restrict c) {
  trace_call(0x8017B0F0u);
  c->r[4]=c->r[3]|c->r[3]; // 8017B0F0
  c->r[3]=R32(c->r[13]+0xFFFF8FA8u); // 8017B0F4
  f_8014F058(c); return; // 8017B0F8
}

// __AXFXFreeFunction
void f_8017B0FC(Ctx* __restrict c) {
  trace_call(0x8017B0FCu);
  c->r[4]=c->r[3]|c->r[3]; // 8017B0FC
  c->r[3]=R32(c->r[13]+0xFFFF8FA8u); // 8017B100
  f_8014F150(c); return; // 8017B104
}

// AXFXSetHooks
void f_8017B108(Ctx* __restrict c) {
  trace_call(0x8017B108u);
  W32(c->r[13]+0xFFFF9128u,c->r[3]); // 8017B108
  W32(c->r[13]+0xFFFF912Cu,c->r[4]); // 8017B10C
  return; // 8017B110
}

// AXFXGetHooks
void f_8017B114(Ctx* __restrict c) {
  trace_call(0x8017B114u);
  c->r[0]=R32(c->r[13]+0xFFFF9128u); // 8017B114
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017B118
  c->r[0]=R32(c->r[13]+0xFFFF912Cu); // 8017B11C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017B120
  return; // 8017B124
}

// fn_8017B128
void f_8017B128(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B128
  c->r[0]=c->lr; // 8017B12C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017B130
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017B134
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017B138
  c->r[30]=c->r[3]|c->r[3]; // 8017B13C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017B140
  c->r[29]=0u+0x00000000u; // 8017B144
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017B148
  c->r[28]=c->r[4]|c->r[4]; // 8017B14C
  goto L_8017B22C; // 8017B150
L_8017B154:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B154
  cmpu(c,0,c->r[0],c->r[28]); // 8017B158
  if (crb(c,1)) { goto L_8017B22C; } // 8017B15C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B160
  cmpu(c,0,c->r[28],c->r[0]); // 8017B164
  if (!crb(c,0)) { goto L_8017B22C; } // 8017B168
  c->r[31]=0u+0x00000000u; // 8017B16C
  goto L_8017B1FC; // 8017B170
L_8017B174:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B174
  cmpu(c,0,c->r[0],c->r[28]); // 8017B178
  if (crb(c,1)) { goto L_8017B1FC; } // 8017B17C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B180
  cmpu(c,0,c->r[28],c->r[0]); // 8017B184
  if (!crb(c,0)) { goto L_8017B1FC; } // 8017B188
  c->r[30]=0u+0x00000000u; // 8017B18C
  goto L_8017B1CC; // 8017B190
L_8017B194:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B194
  cmpu(c,0,c->r[0],c->r[28]); // 8017B198
  if (crb(c,1)) { goto L_8017B1CC; } // 8017B19C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B1A0
  cmpu(c,0,c->r[28],c->r[0]); // 8017B1A4
  if (!crb(c,0)) { goto L_8017B1CC; } // 8017B1A8
  c->r[4]=c->r[28]|c->r[28]; // 8017B1AC
  c->r[3]=c->r[3]+0x0000000Cu; // 8017B1B0
  c->lr=0x8017B1B8u; f_8017B128(c); // 8017B1B4
  cmps(c,0,(int32_t)c->r[3],0); // 8017B1B8
  if (crb(c,2)) { goto L_8017B1C4; } // 8017B1BC
  goto L_8017B1E8; // 8017B1C0
L_8017B1C4:;
  c->r[3]=c->r[30]|c->r[30]; // 8017B1C4
  goto L_8017B1E8; // 8017B1C8
L_8017B1CC:;
  c->r[4]=c->r[30]|c->r[30]; // 8017B1CC
  c->r[3]=c->r[31]+0x0000000Cu; // 8017B1D0
  c->lr=0x8017B1D8u; f_8017C2F0(c); // 8017B1D4
  cmps(c,0,(int32_t)c->r[3],0); // 8017B1D8
  c->r[30]=c->r[3]|c->r[3]; // 8017B1DC
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B194; } // 8017B1E0
  c->r[3]=0u+0x00000000u; // 8017B1E4
L_8017B1E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B1E8
  if (crb(c,2)) { goto L_8017B1F4; } // 8017B1EC
  goto L_8017B218; // 8017B1F0
L_8017B1F4:;
  c->r[3]=c->r[31]|c->r[31]; // 8017B1F4
  goto L_8017B218; // 8017B1F8
L_8017B1FC:;
  c->r[4]=c->r[31]|c->r[31]; // 8017B1FC
  c->r[3]=c->r[29]+0x0000000Cu; // 8017B200
  c->lr=0x8017B208u; f_8017C2F0(c); // 8017B204
  cmps(c,0,(int32_t)c->r[3],0); // 8017B208
  c->r[31]=c->r[3]|c->r[3]; // 8017B20C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B174; } // 8017B210
  c->r[3]=0u+0x00000000u; // 8017B214
L_8017B218:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B218
  if (crb(c,2)) { goto L_8017B224; } // 8017B21C
  goto L_8017B248; // 8017B220
L_8017B224:;
  c->r[3]=c->r[29]|c->r[29]; // 8017B224
  goto L_8017B248; // 8017B228
L_8017B22C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017B22C
  c->r[4]=c->r[29]|c->r[29]; // 8017B230
  c->lr=0x8017B238u; f_8017C2F0(c); // 8017B234
  cmps(c,0,(int32_t)c->r[3],0); // 8017B238
  c->r[29]=c->r[3]|c->r[3]; // 8017B23C
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B154; } // 8017B240
  c->r[3]=0u+0x00000000u; // 8017B244
L_8017B248:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017B248
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017B24C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017B250
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017B254
  c->r[28]=R32(c->r[1]+0x00000010u); // 8017B258
  c->lr=c->r[0]; // 8017B25C
  c->r[1]=c->r[1]+0x00000020u; // 8017B260
  return; // 8017B264
}

// fn_8017B268
void f_8017B268(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B268
  c->r[0]=c->lr; // 8017B26C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017B270
  c->r[11]=c->r[1]+0x00000020u; // 8017B274
  c->lr=0x8017B27Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017B278
  c->r[0]=0u+0x00000000u; // 8017B27C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8017B280
  c->r[0]=(rotl(c->r[7],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017B284
  c->r[27]=c->r[3]|c->r[3]; // 8017B288
  W32(c->r[3]+0x00000018u,c->r[5]); // 8017B28C
  c->r[4]=0u+0x00000004u; // 8017B290
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 8017B294
  W32(c->r[3]+0x00000038u,c->r[0]); // 8017B298
  c->r[3]=c->r[3]+0x0000000Cu; // 8017B29C
  c->lr=0x8017B2A4u; f_8017C1FC(c); // 8017B2A0
  c->r[0]=R32(c->r[13]+0xFFFFAEB8u); // 8017B2A4
  cmps(c,0,(int32_t)c->r[0],0); // 8017B2A8
  if (!crb(c,2)) { goto L_8017B2D4; } // 8017B2AC
  c->r[3]=0u+0x80460000u; // 8017B2B0
  c->r[4]=0u+0x00000004u; // 8017B2B4
  c->r[3]=c->r[3]+0xFFFFA800u; // 8017B2B8
  c->lr=0x8017B2C0u; f_8017C1FC(c); // 8017B2BC
  c->r[3]=0u+0x80460000u; // 8017B2C0
  c->r[3]=c->r[3]+0xFFFFA810u; // 8017B2C4
  c->lr=0x8017B2CCu; f_80155694(c); // 8017B2C8
  c->r[0]=0u+0x00000001u; // 8017B2CC
  W32(c->r[13]+0xFFFFAEB8u,c->r[0]); // 8017B2D0
L_8017B2D4:;
  c->r[3]=c->r[27]+0x00000020u; // 8017B2D4
  c->lr=0x8017B2DCu; f_80155694(c); // 8017B2D8
  c->r[3]=0u+0x80460000u; // 8017B2DC
  c->r[3]=c->r[3]+0xFFFFA810u; // 8017B2E0
  c->lr=0x8017B2E8u; f_801556CC(c); // 8017B2E4
  c->r[31]=0u+0x80460000u; // 8017B2E8
  c->r[30]=0u+0x00000000u; // 8017B2EC
  c->r[28]=c->r[31]+0xFFFFA800u; // 8017B2F0
  goto L_8017B3D0; // 8017B2F4
L_8017B2F8:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B2F8
  cmpu(c,0,c->r[0],c->r[27]); // 8017B2FC
  if (crb(c,1)) { goto L_8017B3D0; } // 8017B300
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B304
  cmpu(c,0,c->r[27],c->r[0]); // 8017B308
  if (!crb(c,0)) { goto L_8017B3D0; } // 8017B30C
  c->r[31]=0u+0x00000000u; // 8017B310
  goto L_8017B3A0; // 8017B314
L_8017B318:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B318
  cmpu(c,0,c->r[0],c->r[27]); // 8017B31C
  if (crb(c,1)) { goto L_8017B3A0; } // 8017B320
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B324
  cmpu(c,0,c->r[27],c->r[0]); // 8017B328
  if (!crb(c,0)) { goto L_8017B3A0; } // 8017B32C
  c->r[29]=0u+0x00000000u; // 8017B330
  goto L_8017B370; // 8017B334
L_8017B338:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B338
  cmpu(c,0,c->r[0],c->r[27]); // 8017B33C
  if (crb(c,1)) { goto L_8017B370; } // 8017B340
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B344
  cmpu(c,0,c->r[27],c->r[0]); // 8017B348
  if (!crb(c,0)) { goto L_8017B370; } // 8017B34C
  c->r[4]=c->r[27]|c->r[27]; // 8017B350
  c->r[3]=c->r[3]+0x0000000Cu; // 8017B354
  c->lr=0x8017B35Cu; f_8017B128(c); // 8017B358
  cmps(c,0,(int32_t)c->r[3],0); // 8017B35C
  if (crb(c,2)) { goto L_8017B368; } // 8017B360
  goto L_8017B38C; // 8017B364
L_8017B368:;
  c->r[3]=c->r[29]|c->r[29]; // 8017B368
  goto L_8017B38C; // 8017B36C
L_8017B370:;
  c->r[4]=c->r[29]|c->r[29]; // 8017B370
  c->r[3]=c->r[31]+0x0000000Cu; // 8017B374
  c->lr=0x8017B37Cu; f_8017C2F0(c); // 8017B378
  cmps(c,0,(int32_t)c->r[3],0); // 8017B37C
  c->r[29]=c->r[3]|c->r[3]; // 8017B380
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B338; } // 8017B384
  c->r[3]=0u+0x00000000u; // 8017B388
L_8017B38C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B38C
  if (crb(c,2)) { goto L_8017B398; } // 8017B390
  goto L_8017B3BC; // 8017B394
L_8017B398:;
  c->r[3]=c->r[31]|c->r[31]; // 8017B398
  goto L_8017B3BC; // 8017B39C
L_8017B3A0:;
  c->r[4]=c->r[31]|c->r[31]; // 8017B3A0
  c->r[3]=c->r[30]+0x0000000Cu; // 8017B3A4
  c->lr=0x8017B3ACu; f_8017C2F0(c); // 8017B3A8
  cmps(c,0,(int32_t)c->r[3],0); // 8017B3AC
  c->r[31]=c->r[3]|c->r[3]; // 8017B3B0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B318; } // 8017B3B4
  c->r[3]=0u+0x00000000u; // 8017B3B8
L_8017B3BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B3BC
  if (crb(c,2)) { goto L_8017B3C8; } // 8017B3C0
  goto L_8017B3EC; // 8017B3C4
L_8017B3C8:;
  c->r[3]=c->r[30]|c->r[30]; // 8017B3C8
  goto L_8017B3EC; // 8017B3CC
L_8017B3D0:;
  c->r[4]=c->r[30]|c->r[30]; // 8017B3D0
  c->r[3]=c->r[31]+0xFFFFA800u; // 8017B3D4
  c->lr=0x8017B3DCu; f_8017C2F0(c); // 8017B3D8
  cmps(c,0,(int32_t)c->r[3],0); // 8017B3DC
  c->r[30]=c->r[3]|c->r[3]; // 8017B3E0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B2F8; } // 8017B3E4
  c->r[3]=0u+0x00000000u; // 8017B3E8
L_8017B3EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B3EC
  if (crb(c,2)) { goto L_8017B3F8; } // 8017B3F0
  c->r[28]=c->r[3]+0x0000000Cu; // 8017B3F4
L_8017B3F8:;
  c->r[3]=c->r[28]|c->r[28]; // 8017B3F8
  c->r[4]=c->r[27]|c->r[27]; // 8017B3FC
  c->lr=0x8017B404u; f_8017C214(c); // 8017B400
  c->r[3]=0u+0x80460000u; // 8017B404
  c->r[3]=c->r[3]+0xFFFFA810u; // 8017B408
  c->lr=0x8017B410u; f_801557A8(c); // 8017B40C
  c->r[11]=c->r[1]+0x00000020u; // 8017B410
  c->lr=0x8017B418u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017B414
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017B418
  c->lr=c->r[0]; // 8017B41C
  c->r[1]=c->r[1]+0x00000020u; // 8017B420
  return; // 8017B424
}

// fn_8017B428
void f_8017B428(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B428
  c->r[0]=c->lr; // 8017B42C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017B430
  c->r[11]=c->r[1]+0x00000020u; // 8017B434
  c->lr=0x8017B43Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017B438
  c->r[4]=0u+0x80460000u; // 8017B43C
  c->r[27]=c->r[3]|c->r[3]; // 8017B440
  c->r[3]=c->r[4]+0xFFFFA810u; // 8017B444
  c->lr=0x8017B44Cu; f_801556CC(c); // 8017B448
  c->r[31]=0u+0x80460000u; // 8017B44C
  c->r[30]=0u+0x00000000u; // 8017B450
  c->r[28]=c->r[31]+0xFFFFA800u; // 8017B454
  goto L_8017B534; // 8017B458
L_8017B45C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B45C
  cmpu(c,0,c->r[0],c->r[27]); // 8017B460
  if (crb(c,1)) { goto L_8017B534; } // 8017B464
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B468
  cmpu(c,0,c->r[27],c->r[0]); // 8017B46C
  if (!crb(c,0)) { goto L_8017B534; } // 8017B470
  c->r[31]=0u+0x00000000u; // 8017B474
  goto L_8017B504; // 8017B478
L_8017B47C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B47C
  cmpu(c,0,c->r[0],c->r[27]); // 8017B480
  if (crb(c,1)) { goto L_8017B504; } // 8017B484
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B488
  cmpu(c,0,c->r[27],c->r[0]); // 8017B48C
  if (!crb(c,0)) { goto L_8017B504; } // 8017B490
  c->r[29]=0u+0x00000000u; // 8017B494
  goto L_8017B4D4; // 8017B498
L_8017B49C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017B49C
  cmpu(c,0,c->r[0],c->r[27]); // 8017B4A0
  if (crb(c,1)) { goto L_8017B4D4; } // 8017B4A4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017B4A8
  cmpu(c,0,c->r[27],c->r[0]); // 8017B4AC
  if (!crb(c,0)) { goto L_8017B4D4; } // 8017B4B0
  c->r[4]=c->r[27]|c->r[27]; // 8017B4B4
  c->r[3]=c->r[3]+0x0000000Cu; // 8017B4B8
  c->lr=0x8017B4C0u; f_8017B128(c); // 8017B4BC
  cmps(c,0,(int32_t)c->r[3],0); // 8017B4C0
  if (crb(c,2)) { goto L_8017B4CC; } // 8017B4C4
  goto L_8017B4F0; // 8017B4C8
L_8017B4CC:;
  c->r[3]=c->r[29]|c->r[29]; // 8017B4CC
  goto L_8017B4F0; // 8017B4D0
L_8017B4D4:;
  c->r[4]=c->r[29]|c->r[29]; // 8017B4D4
  c->r[3]=c->r[31]+0x0000000Cu; // 8017B4D8
  c->lr=0x8017B4E0u; f_8017C2F0(c); // 8017B4DC
  cmps(c,0,(int32_t)c->r[3],0); // 8017B4E0
  c->r[29]=c->r[3]|c->r[3]; // 8017B4E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B49C; } // 8017B4E8
  c->r[3]=0u+0x00000000u; // 8017B4EC
L_8017B4F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B4F0
  if (crb(c,2)) { goto L_8017B4FC; } // 8017B4F4
  goto L_8017B520; // 8017B4F8
L_8017B4FC:;
  c->r[3]=c->r[31]|c->r[31]; // 8017B4FC
  goto L_8017B520; // 8017B500
L_8017B504:;
  c->r[4]=c->r[31]|c->r[31]; // 8017B504
  c->r[3]=c->r[30]+0x0000000Cu; // 8017B508
  c->lr=0x8017B510u; f_8017C2F0(c); // 8017B50C
  cmps(c,0,(int32_t)c->r[3],0); // 8017B510
  c->r[31]=c->r[3]|c->r[3]; // 8017B514
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B47C; } // 8017B518
  c->r[3]=0u+0x00000000u; // 8017B51C
L_8017B520:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B520
  if (crb(c,2)) { goto L_8017B52C; } // 8017B524
  goto L_8017B550; // 8017B528
L_8017B52C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017B52C
  goto L_8017B550; // 8017B530
L_8017B534:;
  c->r[4]=c->r[30]|c->r[30]; // 8017B534
  c->r[3]=c->r[31]+0xFFFFA800u; // 8017B538
  c->lr=0x8017B540u; f_8017C2F0(c); // 8017B53C
  cmps(c,0,(int32_t)c->r[3],0); // 8017B540
  c->r[30]=c->r[3]|c->r[3]; // 8017B544
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B45C; } // 8017B548
  c->r[3]=0u+0x00000000u; // 8017B54C
L_8017B550:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B550
  if (crb(c,2)) { goto L_8017B55C; } // 8017B554
  c->r[28]=c->r[3]+0x0000000Cu; // 8017B558
L_8017B55C:;
  c->r[3]=c->r[28]|c->r[28]; // 8017B55C
  c->r[4]=c->r[27]|c->r[27]; // 8017B560
  c->lr=0x8017B568u; f_8017C284(c); // 8017B564
  c->r[3]=0u+0x80460000u; // 8017B568
  c->r[3]=c->r[3]+0xFFFFA810u; // 8017B56C
  c->lr=0x8017B574u; f_801557A8(c); // 8017B570
  c->r[0]=0u+0x00000000u; // 8017B574
  c->r[11]=c->r[1]+0x00000020u; // 8017B578
  W32(c->r[27]+0x00000000u,c->r[0]); // 8017B57C
  c->lr=0x8017B584u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017B580
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017B584
  c->lr=c->r[0]; // 8017B588
  c->r[1]=c->r[1]+0x00000020u; // 8017B58C
  return; // 8017B590
}

// MEM_ExpAllocNewBlock
void f_8017B594(Ctx* __restrict c) {
  trace_call(0x8017B594u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B594
  c->r[0]=c->lr; // 8017B598
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017B59C
  c->r[11]=c->r[1]+0x00000020u; // 8017B5A0
  c->lr=0x8017B5A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017B5A4
  c->r[8]=R32(c->r[4]+0x00000008u); // 8017B5A8
  c->r[30]=c->r[6]+c->r[5]; // 8017B5AC
  c->r[6]=R16(c->r[4]+0x00000002u); // 8017B5B0
  c->r[29]=c->r[5]+0xFFFFFFF0u; // 8017B5B4
  c->r[0]=R32(c->r[4]+0x00000004u); // 8017B5B8
  cmps(c,0,(int32_t)c->r[8],0); // 8017B5BC
  c->r[9]=rotl(c->r[6],24)&0x0000007Fu; // 8017B5C0
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 8017B5C4
  c->r[6]=c->r[4]+c->r[0]; // 8017B5C8
  c->r[27]=c->r[5]|c->r[5]; // 8017B5CC
  c->r[26]=c->r[3]|c->r[3]; // 8017B5D0
  c->r[28]=c->r[7]|c->r[7]; // 8017B5D4
  c->r[31]=c->r[29]|c->r[29]; // 8017B5D8
  c->r[5]=c->r[4]-c->r[9]; // 8017B5DC
  c->r[6]=c->r[6]+0x00000010u; // 8017B5E0
  if (crb(c,2)) { goto L_8017B5F0; } // 8017B5E4
  W32(c->r[8]+0x0000000Cu,c->r[10]); // 8017B5E8
  goto L_8017B5F4; // 8017B5EC
L_8017B5F0:;
  W32(c->r[3]+0x00000000u,c->r[10]); // 8017B5F0
L_8017B5F4:;
  cmps(c,0,(int32_t)c->r[10],0); // 8017B5F4
  if (crb(c,2)) { goto L_8017B604; } // 8017B5F8
  W32(c->r[10]+0x00000008u,c->r[8]); // 8017B5FC
  goto L_8017B608; // 8017B600
L_8017B604:;
  W32(c->r[3]+0x00000004u,c->r[8]); // 8017B604
L_8017B608:;
  c->r[0]=c->r[29]-c->r[5]; // 8017B608
  cmpu(c,0,c->r[0],0x00000014u); // 8017B60C
  if (!crb(c,0)) { goto L_8017B61C; } // 8017B610
  c->r[31]=c->r[5]|c->r[5]; // 8017B614
  goto L_8017B678; // 8017B618
L_8017B61C:;
  c->r[4]=0u+0x00004652u; // 8017B61C
  c->r[0]=c->r[5]+0x00000010u; // 8017B620
  W16(c->r[5]+0x00000000u,c->r[4]); // 8017B624
  c->r[4]=0u+0x00000000u; // 8017B628
  c->r[0]=c->r[29]-c->r[0]; // 8017B62C
  cmps(c,0,(int32_t)c->r[8],0); // 8017B630
  W16(c->r[5]+0x00000002u,c->r[4]); // 8017B634
  W32(c->r[5]+0x00000004u,c->r[0]); // 8017B638
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8017B63C
  W32(c->r[5]+0x00000008u,c->r[8]); // 8017B640
  if (crb(c,2)) { goto L_8017B654; } // 8017B644
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8017B648
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 8017B64C
  goto L_8017B65C; // 8017B650
L_8017B654:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8017B654
  W32(c->r[3]+0x00000000u,c->r[5]); // 8017B658
L_8017B65C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017B65C
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8017B660
  if (crb(c,2)) { goto L_8017B670; } // 8017B664
  W32(c->r[4]+0x00000008u,c->r[5]); // 8017B668
  goto L_8017B674; // 8017B66C
L_8017B670:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 8017B670
L_8017B674:;
  c->r[8]=c->r[5]|c->r[5]; // 8017B674
L_8017B678:;
  c->r[0]=c->r[6]-c->r[30]; // 8017B678
  cmpu(c,0,c->r[0],0x00000014u); // 8017B67C
  if (!crb(c,0)) { goto L_8017B68C; } // 8017B680
  c->r[30]=c->r[6]|c->r[6]; // 8017B684
  goto L_8017B6E4; // 8017B688
L_8017B68C:;
  c->r[4]=0u+0x00004652u; // 8017B68C
  c->r[0]=c->r[30]+0x00000010u; // 8017B690
  W16(c->r[30]+0x00000000u,c->r[4]); // 8017B694
  c->r[4]=0u+0x00000000u; // 8017B698
  c->r[0]=c->r[6]-c->r[0]; // 8017B69C
  cmps(c,0,(int32_t)c->r[8],0); // 8017B6A0
  W16(c->r[30]+0x00000002u,c->r[4]); // 8017B6A4
  W32(c->r[30]+0x00000004u,c->r[0]); // 8017B6A8
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 8017B6AC
  W32(c->r[30]+0x00000008u,c->r[8]); // 8017B6B0
  if (crb(c,2)) { goto L_8017B6C4; } // 8017B6B4
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8017B6B8
  W32(c->r[8]+0x0000000Cu,c->r[30]); // 8017B6BC
  goto L_8017B6CC; // 8017B6C0
L_8017B6C4:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8017B6C4
  W32(c->r[3]+0x00000000u,c->r[30]); // 8017B6C8
L_8017B6CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017B6CC
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 8017B6D0
  if (crb(c,2)) { goto L_8017B6E0; } // 8017B6D4
  W32(c->r[4]+0x00000008u,c->r[30]); // 8017B6D8
  goto L_8017B6E4; // 8017B6DC
L_8017B6E0:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 8017B6E0
L_8017B6E4:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 8017B6E4
  c->r[5]=c->r[30]-c->r[31]; // 8017B6E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8017B6EC
  if (crb(c,2)) { goto L_8017B700; } // 8017B6F0
  c->r[3]=c->r[31]|c->r[31]; // 8017B6F4
  c->r[4]=0u+0x00000000u; // 8017B6F8
  c->lr=0x8017B700u; f_8000443C(c); // 8017B6FC
L_8017B700:;
  c->r[5]=0u+0x00000000u; // 8017B700
  c->r[4]=c->r[29]+0x00000010u; // 8017B704
  c->r[3]=c->r[5]|c->r[5]; // 8017B708
  c->r[6]=0u+0x00005544u; // 8017B70C
  c->r[4]=c->r[30]-c->r[4]; // 8017B710
  c->r[0]=c->r[29]-c->r[31]; // 8017B714
  c->r[3]=(rotl(c->r[28],15)&0x00008000u)|(c->r[3]&~0x00008000u); // 8017B718
  W16(c->r[29]+0x00000000u,c->r[6]); // 8017B71C
  c->r[3]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[3]&~0x00007F00u); // 8017B720
  W32(c->r[29]+0x00000004u,c->r[4]); // 8017B724
  W32(c->r[29]+0x00000008u,c->r[5]); // 8017B728
  W32(c->r[29]+0x0000000Cu,c->r[5]); // 8017B72C
  W16(c->r[29]+0x00000002u,c->r[3]); // 8017B730
  c->r[0]=R16(c->r[26]+0x00000010u); // 8017B734
  c->r[3]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 8017B738
  W16(c->r[29]+0x00000002u,c->r[3]); // 8017B73C
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 8017B740
  cmps(c,0,(int32_t)c->r[4],0); // 8017B744
  W32(c->r[29]+0x00000008u,c->r[4]); // 8017B748
  if (crb(c,2)) { goto L_8017B75C; } // 8017B74C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8017B750
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 8017B754
  goto L_8017B764; // 8017B758
L_8017B75C:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 8017B75C
  W32(c->r[26]+0x00000008u,c->r[29]); // 8017B760
L_8017B764:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017B764
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8017B768
  if (crb(c,2)) { goto L_8017B778; } // 8017B76C
  W32(c->r[3]+0x00000008u,c->r[29]); // 8017B770
  goto L_8017B77C; // 8017B774
L_8017B778:;
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 8017B778
L_8017B77C:;
  c->r[11]=c->r[1]+0x00000020u; // 8017B77C
  c->r[3]=c->r[27]|c->r[27]; // 8017B780
  c->lr=0x8017B788u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017B784
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017B788
  c->lr=c->r[0]; // 8017B78C
  c->r[1]=c->r[1]+0x00000020u; // 8017B790
  return; // 8017B794
}

// MEM_ExpAllocFromHead
void f_8017B798(Ctx* __restrict c) {
  trace_call(0x8017B798u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B798
  c->r[0]=c->lr; // 8017B79C
  c->r[3]=c->r[3]+0x0000003Cu; // 8017B7A0
  c->r[6]=c->r[4]|c->r[4]; // 8017B7A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017B7A8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8017B7AC
  c->r[8]=~(c->r[0]|c->r[0]); // 8017B7B0
  c->r[12]=0u+0x00000000u; // 8017B7B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017B7B8
  c->r[31]=0u+0xFFFFFFFFu; // 8017B7BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017B7C0
  c->r[30]=0u+0x00000000u; // 8017B7C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017B7C8
  c->r[7]=R16(c->r[3]+0x00000012u); // 8017B7CC
  c->r[11]=R32(c->r[3]+0x00000000u); // 8017B7D0
  c->r[0]=rotl(c->r[7],0)&0x00000001u; // 8017B7D4
  c->r[0]=cntlz(c->r[0]); // 8017B7D8
  c->r[10]=rotl(c->r[0],27)&0x07FFFFFFu; // 8017B7DC
  goto L_8017B830; // 8017B7E0
L_8017B7E4:;
  c->r[29]=c->r[11]+0x00000010u; // 8017B7E4
  c->r[9]=R32(c->r[11]+0x00000004u); // 8017B7E8
  c->r[7]=c->r[5]+c->r[29]; // 8017B7EC
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 8017B7F0
  c->r[7]=c->r[8]&c->r[0]; // 8017B7F4
  c->r[0]=c->r[7]-c->r[29]; // 8017B7F8
  c->r[0]=c->r[4]+c->r[0]; // 8017B7FC
  cmpu(c,0,c->r[9],c->r[0]); // 8017B800
  if (crb(c,0)) { goto L_8017B82C; } // 8017B804
  cmpu(c,0,c->r[31],c->r[9]); // 8017B808
  if (!crb(c,1)) { goto L_8017B82C; } // 8017B80C
  cmps(c,0,(int32_t)c->r[10],0); // 8017B810
  c->r[12]=c->r[11]|c->r[11]; // 8017B814
  c->r[31]=c->r[9]|c->r[9]; // 8017B818
  c->r[30]=c->r[7]|c->r[7]; // 8017B81C
  if (!crb(c,2)) { goto L_8017B838; } // 8017B820
  cmpu(c,0,c->r[9],c->r[4]); // 8017B824
  if (crb(c,2)) { goto L_8017B838; } // 8017B828
L_8017B82C:;
  c->r[11]=R32(c->r[11]+0x0000000Cu); // 8017B82C
L_8017B830:;
  cmps(c,0,(int32_t)c->r[11],0); // 8017B830
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B7E4; } // 8017B834
L_8017B838:;
  cmps(c,0,(int32_t)c->r[12],0); // 8017B838
  if (crb(c,2)) { goto L_8017B854; } // 8017B83C
  c->r[4]=c->r[12]|c->r[12]; // 8017B840
  c->r[5]=c->r[30]|c->r[30]; // 8017B844
  c->r[7]=0u+0x00000000u; // 8017B848
  c->lr=0x8017B850u; f_8017B594(c); // 8017B84C
  goto L_8017B858; // 8017B850
L_8017B854:;
  c->r[3]=0u+0x00000000u; // 8017B854
L_8017B858:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017B858
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017B85C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017B860
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017B864
  c->lr=c->r[0]; // 8017B868
  c->r[1]=c->r[1]+0x00000020u; // 8017B86C
  return; // 8017B870
}

// MEM_ExpAllocFromTail
void f_8017B874(Ctx* __restrict c) {
  trace_call(0x8017B874u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B874
  c->r[0]=c->lr; // 8017B878
  c->r[3]=c->r[3]+0x0000003Cu; // 8017B87C
  c->r[6]=c->r[4]|c->r[4]; // 8017B880
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017B884
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8017B888
  c->r[7]=~(c->r[0]|c->r[0]); // 8017B88C
  c->r[11]=0u+0x00000000u; // 8017B890
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017B894
  c->r[12]=0u+0xFFFFFFFFu; // 8017B898
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017B89C
  c->r[5]=R16(c->r[3]+0x00000012u); // 8017B8A0
  c->r[10]=R32(c->r[3]+0x00000004u); // 8017B8A4
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 8017B8A8
  c->r[5]=0u+0x00000000u; // 8017B8AC
  c->r[0]=cntlz(c->r[0]); // 8017B8B0
  c->r[9]=rotl(c->r[0],27)&0x07FFFFFFu; // 8017B8B4
  goto L_8017B900; // 8017B8B8
L_8017B8BC:;
  c->r[8]=R32(c->r[10]+0x00000004u); // 8017B8BC
  c->r[31]=c->r[10]+0x00000010u; // 8017B8C0
  c->r[0]=c->r[8]+c->r[31]; // 8017B8C4
  c->r[0]=c->r[0]-c->r[4]; // 8017B8C8
  c->r[30]=c->r[7]&c->r[0]; // 8017B8CC
  c->r[0]=c->r[30]-c->r[31]; cr0(c,c->r[0]); // 8017B8D0
  if (crb(c,0)) { goto L_8017B8FC; } // 8017B8D4
  cmpu(c,0,c->r[12],c->r[8]); // 8017B8D8
  if (!crb(c,1)) { goto L_8017B8FC; } // 8017B8DC
  cmps(c,0,(int32_t)c->r[9],0); // 8017B8E0
  c->r[11]=c->r[10]|c->r[10]; // 8017B8E4
  c->r[12]=c->r[8]|c->r[8]; // 8017B8E8
  c->r[5]=c->r[30]|c->r[30]; // 8017B8EC
  if (!crb(c,2)) { goto L_8017B908; } // 8017B8F0
  cmpu(c,0,c->r[8],c->r[4]); // 8017B8F4
  if (crb(c,2)) { goto L_8017B908; } // 8017B8F8
L_8017B8FC:;
  c->r[10]=R32(c->r[10]+0x00000008u); // 8017B8FC
L_8017B900:;
  cmps(c,0,(int32_t)c->r[10],0); // 8017B900
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B8BC; } // 8017B904
L_8017B908:;
  cmps(c,0,(int32_t)c->r[11],0); // 8017B908
  if (crb(c,2)) { goto L_8017B920; } // 8017B90C
  c->r[4]=c->r[11]|c->r[11]; // 8017B910
  c->r[7]=0u+0x00000001u; // 8017B914
  c->lr=0x8017B91Cu; f_8017B594(c); // 8017B918
  goto L_8017B924; // 8017B91C
L_8017B920:;
  c->r[3]=0u+0x00000000u; // 8017B920
L_8017B924:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017B924
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017B928
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017B92C
  c->lr=c->r[0]; // 8017B930
  c->r[1]=c->r[1]+0x00000010u; // 8017B934
  return; // 8017B938
}

// RecycleRegion_
void f_8017B93C(Ctx* __restrict c) {
  trace_call(0x8017B93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017B93C
  c->r[8]=0u+0x00000000u; // 8017B940
  c->r[5]=R32(c->r[4]+0x00000000u); // 8017B944
  c->r[0]=R32(c->r[4]+0x00000004u); // 8017B948
  W32(c->r[1]+0x00000008u,c->r[5]); // 8017B94C
  c->r[6]=R32(c->r[3]+0x00000000u); // 8017B950
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017B954
  goto L_8017B9C4; // 8017B958
L_8017B95C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017B95C
  cmpu(c,0,c->r[6],c->r[0]); // 8017B960
  if (!crb(c,0)) { goto L_8017B970; } // 8017B964
  c->r[8]=c->r[6]|c->r[6]; // 8017B968
  goto L_8017B9C0; // 8017B96C
L_8017B970:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8017B970
  cmpu(c,0,c->r[6],c->r[0]); // 8017B974
  if (!crb(c,2)) { goto L_8017B9CC; } // 8017B978
  c->r[0]=R32(c->r[6]+0x00000004u); // 8017B97C
  c->r[7]=R32(c->r[6]+0x00000008u); // 8017B980
  c->r[5]=c->r[6]+c->r[0]; // 8017B984
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8017B988
  c->r[0]=c->r[5]+0x00000010u; // 8017B98C
  cmps(c,0,(int32_t)c->r[7],0); // 8017B990
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017B994
  if (crb(c,2)) { goto L_8017B9A4; } // 8017B998
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 8017B99C
  goto L_8017B9A8; // 8017B9A0
L_8017B9A4:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 8017B9A4
L_8017B9A8:;
  cmps(c,0,(int32_t)c->r[6],0); // 8017B9A8
  if (crb(c,2)) { goto L_8017B9B8; } // 8017B9AC
  W32(c->r[6]+0x00000008u,c->r[7]); // 8017B9B0
  goto L_8017B9CC; // 8017B9B4
L_8017B9B8:;
  W32(c->r[3]+0x00000004u,c->r[7]); // 8017B9B8
  goto L_8017B9CC; // 8017B9BC
L_8017B9C0:;
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 8017B9C0
L_8017B9C4:;
  cmps(c,0,(int32_t)c->r[6],0); // 8017B9C4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017B95C; } // 8017B9C8
L_8017B9CC:;
  cmps(c,0,(int32_t)c->r[8],0); // 8017B9CC
  if (crb(c,2)) { goto L_8017BA24; } // 8017B9D0
  c->r[5]=R32(c->r[8]+0x00000004u); // 8017B9D4
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017B9D8
  c->r[4]=c->r[8]+c->r[5]; // 8017B9DC
  c->r[4]=c->r[4]+0x00000010u; // 8017B9E0
  cmpu(c,0,c->r[4],c->r[0]); // 8017B9E4
  if (!crb(c,2)) { goto L_8017BA24; } // 8017B9E8
  c->r[5]=R32(c->r[8]+0x00000008u); // 8017B9EC
  W32(c->r[1]+0x00000008u,c->r[8]); // 8017B9F0
  cmps(c,0,(int32_t)c->r[5],0); // 8017B9F4
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8017B9F8
  if (crb(c,2)) { goto L_8017BA08; } // 8017B9FC
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8017BA00
  goto L_8017BA0C; // 8017BA04
L_8017BA08:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 8017BA08
L_8017BA0C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017BA0C
  if (crb(c,2)) { goto L_8017BA1C; } // 8017BA10
  W32(c->r[4]+0x00000008u,c->r[5]); // 8017BA14
  goto L_8017BA20; // 8017BA18
L_8017BA1C:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 8017BA1C
L_8017BA20:;
  c->r[8]=c->r[5]|c->r[5]; // 8017BA20
L_8017BA24:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 8017BA24
  c->r[5]=R32(c->r[1]+0x00000008u); // 8017BA28
  c->r[0]=c->r[6]-c->r[5]; // 8017BA2C
  cmpu(c,0,c->r[0],0x00000010u); // 8017BA30
  if (!crb(c,0)) { goto L_8017BA40; } // 8017BA34
  c->r[3]=0u+0x00000000u; // 8017BA38
  goto L_8017BA9C; // 8017BA3C
L_8017BA40:;
  c->r[4]=0u+0x00004652u; // 8017BA40
  c->r[0]=c->r[5]+0x00000010u; // 8017BA44
  W16(c->r[5]+0x00000000u,c->r[4]); // 8017BA48
  c->r[4]=0u+0x00000000u; // 8017BA4C
  c->r[0]=c->r[6]-c->r[0]; // 8017BA50
  cmps(c,0,(int32_t)c->r[8],0); // 8017BA54
  W16(c->r[5]+0x00000002u,c->r[4]); // 8017BA58
  W32(c->r[5]+0x00000004u,c->r[0]); // 8017BA5C
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8017BA60
  W32(c->r[5]+0x00000008u,c->r[8]); // 8017BA64
  if (crb(c,2)) { goto L_8017BA78; } // 8017BA68
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 8017BA6C
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 8017BA70
  goto L_8017BA80; // 8017BA74
L_8017BA78:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8017BA78
  W32(c->r[3]+0x00000000u,c->r[5]); // 8017BA7C
L_8017BA80:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017BA80
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8017BA84
  if (crb(c,2)) { goto L_8017BA94; } // 8017BA88
  W32(c->r[4]+0x00000008u,c->r[5]); // 8017BA8C
  goto L_8017BA98; // 8017BA90
L_8017BA94:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 8017BA94
L_8017BA98:;
  c->r[3]=0u+0x00000001u; // 8017BA98
L_8017BA9C:;
  c->r[1]=c->r[1]+0x00000010u; // 8017BA9C
  return; // 8017BAA0
}

// MEMCreateExpHeapEx
void f_8017BAA4(Ctx* __restrict c) {
  trace_call(0x8017BAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BAA4
  c->r[0]=c->lr; // 8017BAA8
  c->r[4]=c->r[4]+c->r[3]; // 8017BAAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BAB0
  c->r[0]=c->r[3]+0x00000003u; // 8017BAB4
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8017BAB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BABC
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8017BAC0
  cmpu(c,0,c->r[31],c->r[6]); // 8017BAC4
  if (crb(c,1)) { goto L_8017BAD8; } // 8017BAC8
  c->r[0]=c->r[6]-c->r[31]; // 8017BACC
  cmpu(c,0,c->r[0],0x00000064u); // 8017BAD0
  if (!crb(c,0)) { goto L_8017BAE0; } // 8017BAD4
L_8017BAD8:;
  c->r[3]=0u+0x00000000u; // 8017BAD8
  goto L_8017BB40; // 8017BADC
L_8017BAE0:;
  c->r[4]=0u+0x45580000u; // 8017BAE0
  c->r[7]=c->r[5]|c->r[5]; // 8017BAE4
  c->r[3]=c->r[31]|c->r[31]; // 8017BAE8
  c->r[5]=c->r[31]+0x00000050u; // 8017BAEC
  c->r[4]=c->r[4]+0x00005048u; // 8017BAF0
  c->lr=0x8017BAF8u; f_8017B268(c); // 8017BAF4
  c->r[5]=0u+0x00000000u; // 8017BAF8
  c->r[4]=0u+0x00004652u; // 8017BAFC
  W16(c->r[31]+0x0000004Cu,c->r[5]); // 8017BB00
  c->r[3]=c->r[31]|c->r[31]; // 8017BB04
  W16(c->r[31]+0x0000004Eu,c->r[5]); // 8017BB08
  c->r[6]=R32(c->r[31]+0x00000018u); // 8017BB0C
  c->r[7]=R32(c->r[31]+0x0000001Cu); // 8017BB10
  c->r[0]=c->r[6]+0x00000010u; // 8017BB14
  W16(c->r[6]+0x00000000u,c->r[4]); // 8017BB18
  c->r[0]=c->r[7]-c->r[0]; // 8017BB1C
  W16(c->r[6]+0x00000002u,c->r[5]); // 8017BB20
  W32(c->r[6]+0x00000004u,c->r[0]); // 8017BB24
  W32(c->r[6]+0x00000008u,c->r[5]); // 8017BB28
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 8017BB2C
  W32(c->r[31]+0x0000003Cu,c->r[6]); // 8017BB30
  W32(c->r[31]+0x00000040u,c->r[6]); // 8017BB34
  W32(c->r[31]+0x00000044u,c->r[5]); // 8017BB38
  W32(c->r[31]+0x00000048u,c->r[5]); // 8017BB3C
L_8017BB40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BB40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BB44
  c->lr=c->r[0]; // 8017BB48
  c->r[1]=c->r[1]+0x00000010u; // 8017BB4C
  return; // 8017BB50
}

// MEMDestroyExpHeap
void f_8017BB54(Ctx* __restrict c) {
  trace_call(0x8017BB54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BB54
  c->r[0]=c->lr; // 8017BB58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BB5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BB60
  c->r[31]=c->r[3]|c->r[3]; // 8017BB64
  c->lr=0x8017BB6Cu; f_8017B428(c); // 8017BB68
  c->r[3]=c->r[31]|c->r[31]; // 8017BB6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BB70
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BB74
  c->lr=c->r[0]; // 8017BB78
  c->r[1]=c->r[1]+0x00000010u; // 8017BB7C
  return; // 8017BB80
}

// MEMAllocFromExpHeapEx
void f_8017BB84(Ctx* __restrict c) {
  trace_call(0x8017BB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BB84
  c->r[0]=c->lr; // 8017BB88
  cmps(c,0,(int32_t)c->r[4],0); // 8017BB8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017BB90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017BB94
  c->r[31]=c->r[5]|c->r[5]; // 8017BB98
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017BB9C
  c->r[30]=c->r[4]|c->r[4]; // 8017BBA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017BBA4
  c->r[29]=c->r[3]|c->r[3]; // 8017BBA8
  if (!crb(c,2)) { goto L_8017BBB4; } // 8017BBAC
  c->r[30]=0u+0x00000001u; // 8017BBB0
L_8017BBB4:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017BBB4
  c->r[4]=c->r[30]+0x00000003u; // 8017BBB8
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8017BBBC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BBC0
  if (crb(c,2)) { goto L_8017BBD0; } // 8017BBC4
  c->r[3]=c->r[3]+0x00000020u; // 8017BBC8
  c->lr=0x8017BBD0u; f_801556CC(c); // 8017BBCC
L_8017BBD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017BBD0
  if (crb(c,0)) { goto L_8017BBEC; } // 8017BBD4
  c->r[3]=c->r[29]|c->r[29]; // 8017BBD8
  c->r[4]=c->r[30]|c->r[30]; // 8017BBDC
  c->r[5]=c->r[31]|c->r[31]; // 8017BBE0
  c->lr=0x8017BBE8u; f_8017B798(c); // 8017BBE4
  goto L_8017BBFC; // 8017BBE8
L_8017BBEC:;
  c->r[3]=c->r[29]|c->r[29]; // 8017BBEC
  c->r[4]=c->r[30]|c->r[30]; // 8017BBF0
  c->r[5]=0u-c->r[31]; // 8017BBF4
  c->lr=0x8017BBFCu; f_8017B874(c); // 8017BBF8
L_8017BBFC:;
  c->r[0]=R32(c->r[29]+0x00000038u); // 8017BBFC
  c->r[31]=c->r[3]|c->r[3]; // 8017BC00
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BC04
  if (crb(c,2)) { goto L_8017BC14; } // 8017BC08
  c->r[3]=c->r[29]+0x00000020u; // 8017BC0C
  c->lr=0x8017BC14u; f_801557A8(c); // 8017BC10
L_8017BC14:;
  c->r[3]=c->r[31]|c->r[31]; // 8017BC14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017BC18
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017BC1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017BC20
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017BC24
  c->lr=c->r[0]; // 8017BC28
  c->r[1]=c->r[1]+0x00000020u; // 8017BC2C
  return; // 8017BC30
}

// fn_8017BC34
void f_8017BC34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BC34
  c->r[0]=c->lr; // 8017BC38
  cmps(c,0,(int32_t)c->r[4],0); // 8017BC3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017BC40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017BC44
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017BC48
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017BC4C
  c->r[29]=c->r[3]|c->r[3]; // 8017BC50
  if (crb(c,2)) { goto L_8017BCE4; } // 8017BC54
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017BC58
  c->r[31]=c->r[3]+0x0000003Cu; // 8017BC5C
  c->r[30]=c->r[4]+0xFFFFFFF0u; // 8017BC60
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BC64
  if (crb(c,2)) { goto L_8017BC74; } // 8017BC68
  c->r[3]=c->r[3]+0x00000020u; // 8017BC6C
  c->lr=0x8017BC74u; f_801556CC(c); // 8017BC70
L_8017BC74:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 8017BC74
  c->r[0]=rotl(c->r[0],24)&0x0000007Fu; // 8017BC78
  c->r[0]=c->r[30]-c->r[0]; // 8017BC7C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017BC80
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017BC84
  c->r[3]=c->r[30]+c->r[0]; // 8017BC88
  c->r[0]=c->r[3]+0x00000010u; // 8017BC8C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017BC90
  c->r[4]=R32(c->r[30]+0x00000008u); // 8017BC94
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8017BC98
  cmps(c,0,(int32_t)c->r[4],0); // 8017BC9C
  if (crb(c,2)) { goto L_8017BCAC; } // 8017BCA0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8017BCA4
  goto L_8017BCB0; // 8017BCA8
L_8017BCAC:;
  W32(c->r[31]+0x00000008u,c->r[3]); // 8017BCAC
L_8017BCB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017BCB0
  if (crb(c,2)) { goto L_8017BCC0; } // 8017BCB4
  W32(c->r[3]+0x00000008u,c->r[4]); // 8017BCB8
  goto L_8017BCC4; // 8017BCBC
L_8017BCC0:;
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8017BCC0
L_8017BCC4:;
  c->r[3]=c->r[31]|c->r[31]; // 8017BCC4
  c->r[4]=c->r[1]+0x00000008u; // 8017BCC8
  c->lr=0x8017BCD0u; f_8017B93C(c); // 8017BCCC
  c->r[0]=R32(c->r[29]+0x00000038u); // 8017BCD0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BCD4
  if (crb(c,2)) { goto L_8017BCE4; } // 8017BCD8
  c->r[3]=c->r[29]+0x00000020u; // 8017BCDC
  c->lr=0x8017BCE4u; f_801557A8(c); // 8017BCE0
L_8017BCE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017BCE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017BCE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017BCEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017BCF0
  c->lr=c->r[0]; // 8017BCF4
  c->r[1]=c->r[1]+0x00000020u; // 8017BCF8
  return; // 8017BCFC
}

// fn_8017BD00
void f_8017BD00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BD00
  c->r[0]=c->lr; // 8017BD04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BD08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BD0C
  c->r[31]=0u+0x00000000u; // 8017BD10
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017BD14
  c->r[30]=c->r[3]|c->r[3]; // 8017BD18
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017BD1C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BD20
  if (crb(c,2)) { goto L_8017BD30; } // 8017BD24
  c->r[3]=c->r[3]+0x00000020u; // 8017BD28
  c->lr=0x8017BD30u; f_801556CC(c); // 8017BD2C
L_8017BD30:;
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 8017BD30
  goto L_8017BD44; // 8017BD34
L_8017BD38:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8017BD38
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8017BD3C
  c->r[31]=c->r[31]+c->r[0]; // 8017BD40
L_8017BD44:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017BD44
  if (!crb(c,2)) { IRQCHK(c); goto L_8017BD38; } // 8017BD48
  c->r[0]=R32(c->r[30]+0x00000038u); // 8017BD4C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BD50
  if (crb(c,2)) { goto L_8017BD60; } // 8017BD54
  c->r[3]=c->r[30]+0x00000020u; // 8017BD58
  c->lr=0x8017BD60u; f_801557A8(c); // 8017BD5C
L_8017BD60:;
  c->r[3]=c->r[31]|c->r[31]; // 8017BD60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BD64
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017BD68
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BD6C
  c->lr=c->r[0]; // 8017BD70
  c->r[1]=c->r[1]+0x00000010u; // 8017BD74
  return; // 8017BD78
}

// MEMCreateFrmHeapEx
void f_8017BD7C(Ctx* __restrict c) {
  trace_call(0x8017BD7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BD7C
  c->r[0]=c->lr; // 8017BD80
  c->r[4]=c->r[4]+c->r[3]; // 8017BD84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BD88
  c->r[0]=c->r[3]+0x00000003u; // 8017BD8C
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8017BD90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BD94
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8017BD98
  cmpu(c,0,c->r[31],c->r[6]); // 8017BD9C
  if (crb(c,1)) { goto L_8017BDB0; } // 8017BDA0
  c->r[0]=c->r[6]-c->r[31]; // 8017BDA4
  cmpu(c,0,c->r[0],0x00000048u); // 8017BDA8
  if (!crb(c,0)) { goto L_8017BDB8; } // 8017BDAC
L_8017BDB0:;
  c->r[3]=0u+0x00000000u; // 8017BDB0
  goto L_8017BDEC; // 8017BDB4
L_8017BDB8:;
  c->r[4]=0u+0x46520000u; // 8017BDB8
  c->r[7]=c->r[5]|c->r[5]; // 8017BDBC
  c->r[3]=c->r[31]|c->r[31]; // 8017BDC0
  c->r[5]=c->r[31]+0x00000048u; // 8017BDC4
  c->r[4]=c->r[4]+0x00004D48u; // 8017BDC8
  c->lr=0x8017BDD0u; f_8017B268(c); // 8017BDCC
  c->r[4]=R32(c->r[31]+0x00000018u); // 8017BDD0
  c->r[0]=0u+0x00000000u; // 8017BDD4
  c->r[3]=c->r[31]|c->r[31]; // 8017BDD8
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 8017BDDC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8017BDE0
  W32(c->r[31]+0x00000040u,c->r[4]); // 8017BDE4
  W32(c->r[31]+0x00000044u,c->r[0]); // 8017BDE8
L_8017BDEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BDEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BDF0
  c->lr=c->r[0]; // 8017BDF4
  c->r[1]=c->r[1]+0x00000010u; // 8017BDF8
  return; // 8017BDFC
}

// fn_8017BE00
void f_8017BE00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BE00
  c->r[0]=c->lr; // 8017BE04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BE08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BE0C
  c->r[31]=c->r[3]|c->r[3]; // 8017BE10
  c->lr=0x8017BE18u; f_8017B428(c); // 8017BE14
  c->r[3]=c->r[31]|c->r[31]; // 8017BE18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BE1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BE20
  c->lr=c->r[0]; // 8017BE24
  c->r[1]=c->r[1]+0x00000010u; // 8017BE28
  return; // 8017BE2C
}

// MEMAllocFromFrmHeapEx
void f_8017BE30(Ctx* __restrict c) {
  trace_call(0x8017BE30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BE30
  c->r[0]=c->lr; // 8017BE34
  cmps(c,0,(int32_t)c->r[4],0); // 8017BE38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017BE3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017BE40
  c->r[31]=c->r[3]|c->r[3]; // 8017BE44
  W32(c->r[1]+0x00000018u,c->r[30]); // 8017BE48
  c->r[30]=c->r[4]|c->r[4]; // 8017BE4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017BE50
  c->r[29]=c->r[5]|c->r[5]; // 8017BE54
  if (!crb(c,2)) { goto L_8017BE60; } // 8017BE58
  c->r[30]=0u+0x00000001u; // 8017BE5C
L_8017BE60:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017BE60
  c->r[4]=c->r[30]+0x00000003u; // 8017BE64
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 8017BE68
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BE6C
  if (crb(c,2)) { goto L_8017BE7C; } // 8017BE70
  c->r[3]=c->r[3]+0x00000020u; // 8017BE74
  c->lr=0x8017BE7Cu; f_801556CC(c); // 8017BE78
L_8017BE7C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8017BE7C
  if (crb(c,0)) { goto L_8017BED4; } // 8017BE80
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8017BE84
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 8017BE88
  c->r[5]=~(c->r[0]|c->r[0]); // 8017BE8C
  c->r[0]=R32(c->r[31]+0x00000040u); // 8017BE90
  c->r[4]=c->r[29]+c->r[3]; // 8017BE94
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8017BE98
  c->r[29]=c->r[5]&c->r[4]; // 8017BE9C
  c->r[30]=c->r[30]+c->r[29]; // 8017BEA0
  cmpu(c,0,c->r[30],c->r[0]); // 8017BEA4
  if (!crb(c,1)) { goto L_8017BEB4; } // 8017BEA8
  c->r[29]=0u+0x00000000u; // 8017BEAC
  goto L_8017BF1C; // 8017BEB0
L_8017BEB4:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 8017BEB4
  c->r[5]=c->r[30]-c->r[3]; // 8017BEB8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8017BEBC
  if (crb(c,2)) { goto L_8017BECC; } // 8017BEC0
  c->r[4]=0u+0x00000000u; // 8017BEC4
  c->lr=0x8017BECCu; f_8000443C(c); // 8017BEC8
L_8017BECC:;
  W32(c->r[31]+0x0000003Cu,c->r[30]); // 8017BECC
  goto L_8017BF1C; // 8017BED0
L_8017BED4:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 8017BED4
  c->r[0]=addc(c,~c->r[29],0xFFFFFFFFu,1); // 8017BED8
  c->r[4]=~(c->r[0]|c->r[0]); // 8017BEDC
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8017BEE0
  c->r[3]=c->r[5]-c->r[30]; // 8017BEE4
  c->r[29]=c->r[4]&c->r[3]; // 8017BEE8
  cmpu(c,0,c->r[29],c->r[0]); // 8017BEEC
  if (!crb(c,0)) { goto L_8017BEFC; } // 8017BEF0
  c->r[29]=0u+0x00000000u; // 8017BEF4
  goto L_8017BF1C; // 8017BEF8
L_8017BEFC:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 8017BEFC
  c->r[5]=c->r[5]-c->r[29]; // 8017BF00
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8017BF04
  if (crb(c,2)) { goto L_8017BF18; } // 8017BF08
  c->r[3]=c->r[29]|c->r[29]; // 8017BF0C
  c->r[4]=0u+0x00000000u; // 8017BF10
  c->lr=0x8017BF18u; f_8000443C(c); // 8017BF14
L_8017BF18:;
  W32(c->r[31]+0x00000040u,c->r[29]); // 8017BF18
L_8017BF1C:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 8017BF1C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BF20
  if (crb(c,2)) { goto L_8017BF30; } // 8017BF24
  c->r[3]=c->r[31]+0x00000020u; // 8017BF28
  c->lr=0x8017BF30u; f_801557A8(c); // 8017BF2C
L_8017BF30:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017BF30
  c->r[3]=c->r[29]|c->r[29]; // 8017BF34
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017BF38
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017BF3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017BF40
  c->lr=c->r[0]; // 8017BF44
  c->r[1]=c->r[1]+0x00000020u; // 8017BF48
  return; // 8017BF4C
}

// MEMFreeToFrmHeap
void f_8017BF50(Ctx* __restrict c) {
  trace_call(0x8017BF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BF50
  c->r[0]=c->lr; // 8017BF54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017BF58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017BF5C
  c->r[31]=c->r[4]|c->r[4]; // 8017BF60
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017BF64
  c->r[30]=c->r[3]|c->r[3]; // 8017BF68
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017BF6C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BF70
  if (crb(c,2)) { goto L_8017BF80; } // 8017BF74
  c->r[3]=c->r[3]+0x00000020u; // 8017BF78
  c->lr=0x8017BF80u; f_801556CC(c); // 8017BF7C
L_8017BF80:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 8017BF80
  if (crb(c,2)) { goto L_8017BF98; } // 8017BF84
  c->r[3]=R32(c->r[30]+0x00000018u); // 8017BF88
  c->r[0]=0u+0x00000000u; // 8017BF8C
  W32(c->r[30]+0x00000044u,c->r[0]); // 8017BF90
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 8017BF94
L_8017BF98:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8017BF98
  if (crb(c,2)) { goto L_8017BFC4; } // 8017BF9C
  c->r[3]=R32(c->r[30]+0x00000044u); // 8017BFA0
  goto L_8017BFB4; // 8017BFA4
L_8017BFA8:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017BFA8
  W32(c->r[3]+0x00000008u,c->r[0]); // 8017BFAC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8017BFB0
L_8017BFB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017BFB4
  if (!crb(c,2)) { IRQCHK(c); goto L_8017BFA8; } // 8017BFB8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8017BFBC
  W32(c->r[30]+0x00000040u,c->r[0]); // 8017BFC0
L_8017BFC4:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 8017BFC4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017BFC8
  if (crb(c,2)) { goto L_8017BFD8; } // 8017BFCC
  c->r[3]=c->r[30]+0x00000020u; // 8017BFD0
  c->lr=0x8017BFD8u; f_801557A8(c); // 8017BFD4
L_8017BFD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017BFD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017BFDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017BFE0
  c->lr=c->r[0]; // 8017BFE4
  c->r[1]=c->r[1]+0x00000010u; // 8017BFE8
  return; // 8017BFEC
}

// MEMRecordStateForFrmHeap
void f_8017BFF0(Ctx* __restrict c) {
  trace_call(0x8017BFF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017BFF0
  c->r[0]=c->lr; // 8017BFF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017BFF8
  c->r[11]=c->r[1]+0x00000020u; // 8017BFFC
  c->lr=0x8017C004u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017C000
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017C004
  c->r[27]=c->r[3]|c->r[3]; // 8017C008
  c->r[28]=c->r[4]|c->r[4]; // 8017C00C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017C010
  if (crb(c,2)) { goto L_8017C020; } // 8017C014
  c->r[3]=c->r[3]+0x00000020u; // 8017C018
  c->lr=0x8017C020u; f_801556CC(c); // 8017C01C
L_8017C020:;
  c->r[29]=R32(c->r[27]+0x0000003Cu); // 8017C020
  c->r[0]=R32(c->r[27]+0x00000040u); // 8017C024
  c->r[3]=c->r[29]+0x00000003u; // 8017C028
  c->r[31]=rotl(c->r[3],0)&0xFFFFFFFCu; // 8017C02C
  c->r[30]=c->r[31]+0x00000010u; // 8017C030
  cmpu(c,0,c->r[30],c->r[0]); // 8017C034
  if (!crb(c,1)) { goto L_8017C044; } // 8017C038
  c->r[31]=0u+0x00000000u; // 8017C03C
  goto L_8017C064; // 8017C040
L_8017C044:;
  c->r[0]=R32(c->r[27]+0x00000038u); // 8017C044
  c->r[5]=c->r[30]-c->r[29]; // 8017C048
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8017C04C
  if (crb(c,2)) { goto L_8017C060; } // 8017C050
  c->r[3]=c->r[29]|c->r[29]; // 8017C054
  c->r[4]=0u+0x00000000u; // 8017C058
  c->lr=0x8017C060u; f_8000443C(c); // 8017C05C
L_8017C060:;
  W32(c->r[27]+0x0000003Cu,c->r[30]); // 8017C060
L_8017C064:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017C064
  if (!crb(c,2)) { goto L_8017C074; } // 8017C068
  c->r[30]=0u+0x00000000u; // 8017C06C
  goto L_8017C094; // 8017C070
L_8017C074:;
  W32(c->r[31]+0x00000000u,c->r[28]); // 8017C074
  c->r[30]=0u+0x00000001u; // 8017C078
  W32(c->r[31]+0x00000004u,c->r[29]); // 8017C07C
  c->r[0]=R32(c->r[27]+0x00000040u); // 8017C080
  W32(c->r[31]+0x00000008u,c->r[0]); // 8017C084
  c->r[0]=R32(c->r[27]+0x00000044u); // 8017C088
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8017C08C
  W32(c->r[27]+0x00000044u,c->r[31]); // 8017C090
L_8017C094:;
  c->r[0]=R32(c->r[27]+0x00000038u); // 8017C094
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017C098
  if (crb(c,2)) { goto L_8017C0A8; } // 8017C09C
  c->r[3]=c->r[27]+0x00000020u; // 8017C0A0
  c->lr=0x8017C0A8u; f_801557A8(c); // 8017C0A4
L_8017C0A8:;
  c->r[11]=c->r[1]+0x00000020u; // 8017C0A8
  c->r[3]=c->r[30]|c->r[30]; // 8017C0AC
  c->lr=0x8017C0B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017C0B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017C0B4
  c->lr=c->r[0]; // 8017C0B8
  c->r[1]=c->r[1]+0x00000020u; // 8017C0BC
  return; // 8017C0C0
}

// MEMFreeByStateToFrmHeap
void f_8017C0C4(Ctx* __restrict c) {
  trace_call(0x8017C0C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017C0C4
  c->r[0]=c->lr; // 8017C0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017C0CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017C0D0
  c->r[31]=c->r[4]|c->r[4]; // 8017C0D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017C0D8
  c->r[30]=c->r[3]|c->r[3]; // 8017C0DC
  c->r[0]=R32(c->r[3]+0x00000038u); // 8017C0E0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017C0E4
  if (crb(c,2)) { goto L_8017C0F4; } // 8017C0E8
  c->r[3]=c->r[3]+0x00000020u; // 8017C0EC
  c->lr=0x8017C0F4u; f_801556CC(c); // 8017C0F0
L_8017C0F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8017C0F4
  c->r[3]=R32(c->r[30]+0x00000044u); // 8017C0F8
  if (crb(c,2)) { goto L_8017C11C; } // 8017C0FC
  goto L_8017C114; // 8017C100
L_8017C104:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017C104
  cmpu(c,0,c->r[0],c->r[31]); // 8017C108
  if (crb(c,2)) { goto L_8017C11C; } // 8017C10C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8017C110
L_8017C114:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017C114
  if (!crb(c,2)) { IRQCHK(c); goto L_8017C104; } // 8017C118
L_8017C11C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017C11C
  if (!crb(c,2)) { goto L_8017C12C; } // 8017C120
  c->r[31]=0u+0x00000000u; // 8017C124
  goto L_8017C148; // 8017C128
L_8017C12C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8017C12C
  c->r[31]=0u+0x00000001u; // 8017C130
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 8017C134
  c->r[0]=R32(c->r[3]+0x00000008u); // 8017C138
  W32(c->r[30]+0x00000040u,c->r[0]); // 8017C13C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8017C140
  W32(c->r[30]+0x00000044u,c->r[0]); // 8017C144
L_8017C148:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 8017C148
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8017C14C
  if (crb(c,2)) { goto L_8017C15C; } // 8017C150
  c->r[3]=c->r[30]+0x00000020u; // 8017C154
  c->lr=0x8017C15Cu; f_801557A8(c); // 8017C158
L_8017C15C:;
  c->r[3]=c->r[31]|c->r[31]; // 8017C15C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017C160
  c->r[30]=R32(c->r[1]+0x00000008u); // 8017C164
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017C168
  c->lr=c->r[0]; // 8017C16C
  c->r[1]=c->r[1]+0x00000010u; // 8017C170
  return; // 8017C174
}

// fn_8017C178
void f_8017C178(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 8017C178
  c->r[3]=R32(c->r[3]+0x00000004u); // 8017C17C
  c->r[5]=R32(c->r[5]+0x00000008u); // 8017C180
  f_8017BB84(c); return; // 8017C184
}

// fn_8017C188
void f_8017C188(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 8017C188
  f_8017BC34(c); return; // 8017C18C
}

// fn_8017C190
void f_8017C190(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 8017C190
  c->r[3]=R32(c->r[3]+0x00000004u); // 8017C194
  c->r[5]=R32(c->r[5]+0x00000008u); // 8017C198
  f_8017BE30(c); return; // 8017C19C
}

// fn_8017C1A0
void f_8017C1A0(Ctx* __restrict c) {
  return; // 8017C1A0
}

// fn_8017C1A4
void f_8017C1A4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 8017C1A4
  c->r[12]=R32(c->r[5]+0x00000000u); // 8017C1A8
  c->ctr=c->r[12]; // 8017C1AC
  if (true) { dispatch(c,c->ctr); return; } // 8017C1B0
}

// fn_8017C1B4
void f_8017C1B4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 8017C1B4
  c->r[12]=R32(c->r[5]+0x00000004u); // 8017C1B8
  c->ctr=c->r[12]; // 8017C1BC
  if (true) { dispatch(c,c->ctr); return; } // 8017C1C0
}

// fn_8017C1C4
void f_8017C1C4(Ctx* __restrict c) {
  c->r[6]=c->r[2]+0xFFFFAC00u; // 8017C1C4
  c->r[0]=0u+0x00000000u; // 8017C1C8
  W32(c->r[3]+0x00000000u,c->r[6]); // 8017C1CC
  W32(c->r[3]+0x00000004u,c->r[4]); // 8017C1D0
  W32(c->r[3]+0x00000008u,c->r[5]); // 8017C1D4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017C1D8
  return; // 8017C1DC
}

// fn_8017C1E0
void f_8017C1E0(Ctx* __restrict c) {
  c->r[6]=c->r[2]+0xFFFFAC08u; // 8017C1E0
  c->r[0]=0u+0x00000000u; // 8017C1E4
  W32(c->r[3]+0x00000000u,c->r[6]); // 8017C1E8
  W32(c->r[3]+0x00000004u,c->r[4]); // 8017C1EC
  W32(c->r[3]+0x00000008u,c->r[5]); // 8017C1F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8017C1F4
  return; // 8017C1F8
}

// fn_8017C1FC
void f_8017C1FC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8017C1FC
  W16(c->r[3]+0x0000000Au,c->r[4]); // 8017C200
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017C204
  W32(c->r[3]+0x00000004u,c->r[0]); // 8017C208
  W16(c->r[3]+0x00000008u,c->r[0]); // 8017C20C
  return; // 8017C210
}

// fn_8017C214
void f_8017C214(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 8017C214
  cmps(c,0,(int32_t)c->r[0],0); // 8017C218
  if (!crb(c,2)) { goto L_8017C24C; } // 8017C21C
  c->r[5]=R16(c->r[3]+0x0000000Au); // 8017C220
  c->r[0]=0u+0x00000000u; // 8017C224
  c->r[5]=c->r[4]+c->r[5]; // 8017C228
  W32(c->r[5]+0x00000004u,c->r[0]); // 8017C22C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017C230
  c->r[5]=R16(c->r[3]+0x00000008u); // 8017C234
  W32(c->r[3]+0x00000000u,c->r[4]); // 8017C238
  c->r[0]=c->r[5]+0x00000001u; // 8017C23C
  W32(c->r[3]+0x00000004u,c->r[4]); // 8017C240
  W16(c->r[3]+0x00000008u,c->r[0]); // 8017C244
  return; // 8017C248
L_8017C24C:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 8017C24C
  c->r[0]=0u+0x00000000u; // 8017C250
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017C254
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 8017C258
  W32(c->r[6]+0x00000004u,c->r[0]); // 8017C25C
  c->r[5]=R32(c->r[3]+0x00000004u); // 8017C260
  c->r[0]=R16(c->r[3]+0x0000000Au); // 8017C264
  c->r[5]=c->r[5]+c->r[0]; // 8017C268
  W32(c->r[5]+0x00000004u,c->r[4]); // 8017C26C
  c->r[5]=R16(c->r[3]+0x00000008u); // 8017C270
  W32(c->r[3]+0x00000004u,c->r[4]); // 8017C274
  c->r[0]=c->r[5]+0x00000001u; // 8017C278
  W16(c->r[3]+0x00000008u,c->r[0]); // 8017C27C
  return; // 8017C280
}

// fn_8017C284
void f_8017C284(Ctx* __restrict c) {
  c->r[5]=R16(c->r[3]+0x0000000Au); // 8017C284
  c->r[6]=c->r[4]+c->r[5]; // 8017C288
  c->r[4]=R32(c->r[4]+c->r[5]); // 8017C28C
  cmps(c,0,(int32_t)c->r[4],0); // 8017C290
  if (!crb(c,2)) { goto L_8017C2A4; } // 8017C294
  c->r[0]=R32(c->r[6]+0x00000004u); // 8017C298
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017C29C
  goto L_8017C2B0; // 8017C2A0
L_8017C2A4:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 8017C2A4
  c->r[4]=c->r[4]+c->r[5]; // 8017C2A8
  W32(c->r[4]+0x00000004u,c->r[0]); // 8017C2AC
L_8017C2B0:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 8017C2B0
  cmps(c,0,(int32_t)c->r[5],0); // 8017C2B4
  if (!crb(c,2)) { goto L_8017C2C8; } // 8017C2B8
  c->r[0]=R32(c->r[6]+0x00000000u); // 8017C2BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8017C2C0
  goto L_8017C2D4; // 8017C2C4
L_8017C2C8:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8017C2C8
  c->r[0]=R16(c->r[3]+0x0000000Au); // 8017C2CC
  W32(c->r[5]+c->r[0],c->r[4]); // 8017C2D0
L_8017C2D4:;
  c->r[0]=0u+0x00000000u; // 8017C2D4
  W32(c->r[6]+0x00000000u,c->r[0]); // 8017C2D8
  W32(c->r[6]+0x00000004u,c->r[0]); // 8017C2DC
  c->r[4]=R16(c->r[3]+0x00000008u); // 8017C2E0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8017C2E4
  W16(c->r[3]+0x00000008u,c->r[0]); // 8017C2E8
  return; // 8017C2EC
}

// fn_8017C2F0
void f_8017C2F0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 8017C2F0
  if (!crb(c,2)) { goto L_8017C300; } // 8017C2F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8017C2F8
  return; // 8017C2FC
L_8017C300:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 8017C300
  c->r[3]=c->r[4]+c->r[0]; // 8017C304
  c->r[3]=R32(c->r[3]+0x00000004u); // 8017C308
  return; // 8017C30C
}

// fn_8017C310
void f_8017C310(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 8017C310
  c->r[4]=rotl(c->r[5],8)&0x00FF0000u; // 8017C314
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 8017C318
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 8017C31C
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C320
  c->r[0]=c->r[4]|c->r[0]; // 8017C324
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[0]); // 8017C328
  if (!crb(c,2)) { goto L_8017C348; } // 8017C32C
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017C330
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 8017C334
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 8017C338
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8017C33C
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C340
  c->r[0]=c->r[3]|c->r[0]; // 8017C344
L_8017C348:;
  c->r[3]=c->r[0]|c->r[0]; // 8017C348
  return; // 8017C34C
}

// fn_8017C350
void f_8017C350(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 8017C350
  c->r[0]=rotl(c->r[0],0)&0x000000F0u; // 8017C354
  cmps(c,0,(int32_t)c->r[0],48); // 8017C358
  if (crb(c,2)) { goto L_8017C388; } // 8017C35C
  if (!crb(c,0)) { goto L_8017C37C; } // 8017C360
  cmps(c,0,(int32_t)c->r[0],32); // 8017C364
  if (crb(c,2)) { goto L_8017C390; } // 8017C368
  if (!crb(c,0)) return; // 8017C36C
  cmps(c,0,(int32_t)c->r[0],16); // 8017C370
  if (crb(c,2)) { goto L_8017C38C; } // 8017C374
  return; // 8017C378
L_8017C37C:;
  cmps(c,0,(int32_t)c->r[0],128); // 8017C37C
  if (crb(c,2)) { goto L_8017C394; } // 8017C380
  return; // 8017C384
L_8017C388:;
  goto L_8017C39C; // 8017C388
L_8017C38C:;
  goto L_8017C45C; // 8017C38C
L_8017C390:;
  f_8017C59C(c); return; // 8017C390
L_8017C394:;
  f_8017C6FC(c); return; // 8017C394
  return; // 8017C398
L_8017C39C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8017C39C
  c->r[6]=c->r[3]+0x00000004u; // 8017C3A0
  c->r[3]=rotl(c->r[5],8)&0x00FF0000u; // 8017C3A4
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 8017C3A8
  c->r[3]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8017C3AC
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C3B0
  c->r[0]=c->r[3]|c->r[0]; // 8017C3B4
  c->r[5]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[5]); // 8017C3B8
  if (!crb(c,2)) { goto L_8017C450; } // 8017C3BC
  c->r[5]=R32(c->r[6]+0x00000000u); // 8017C3C0
  c->r[6]=c->r[6]+0x00000004u; // 8017C3C4
  c->r[3]=rotl(c->r[5],8)&0x00FF0000u; // 8017C3C8
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 8017C3CC
  c->r[3]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8017C3D0
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C3D4
  c->r[5]=c->r[3]|c->r[0]; // 8017C3D8
  goto L_8017C450; // 8017C3DC
L_8017C3E0:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 8017C3E0
  c->r[6]=c->r[6]+0x00000001u; // 8017C3E4
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 8017C3E8
  c->r[3]=rotl(c->r[3],0)&0x0000007Fu; // 8017C3EC
  if (!crb(c,2)) { goto L_8017C424; } // 8017C3F0
  c->r[3]=c->r[3]+0x00000001u; // 8017C3F4
  cmpu(c,0,c->r[3],c->r[5]); // 8017C3F8
  if (!crb(c,1)) { goto L_8017C404; } // 8017C3FC
  c->r[3]=c->r[5]|c->r[5]; // 8017C400
L_8017C404:;
  c->r[5]=c->r[5]-c->r[3]; // 8017C404
L_8017C408:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 8017C408
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8017C40C
  c->r[6]=c->r[6]+0x00000001u; // 8017C410
  W8(c->r[4]+0x00000000u,c->r[0]); // 8017C414
  c->r[4]=c->r[4]+0x00000001u; // 8017C418
  if (!crb(c,2)) { IRQCHK(c); goto L_8017C408; } // 8017C41C
  goto L_8017C450; // 8017C420
L_8017C424:;
  c->r[3]=c->r[3]+0x00000003u; // 8017C424
  cmpu(c,0,c->r[3],c->r[5]); // 8017C428
  if (!crb(c,1)) { goto L_8017C434; } // 8017C42C
  c->r[3]=c->r[5]|c->r[5]; // 8017C430
L_8017C434:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 8017C434
  c->r[5]=c->r[5]-c->r[3]; // 8017C438
  c->r[6]=c->r[6]+0x00000001u; // 8017C43C
L_8017C440:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 8017C440
  W8(c->r[4]+0x00000000u,c->r[0]); // 8017C444
  c->r[4]=c->r[4]+0x00000001u; // 8017C448
  if (!crb(c,2)) { IRQCHK(c); goto L_8017C440; } // 8017C44C
L_8017C450:;
  cmps(c,0,(int32_t)c->r[5],0); // 8017C450
  if (!crb(c,2)) { IRQCHK(c); goto L_8017C3E0; } // 8017C454
  return; // 8017C458
L_8017C45C:;
  c->r[7]=R32(c->r[3]+0x00000000u); // 8017C45C
  c->r[8]=c->r[3]+0x00000004u; // 8017C460
  c->r[0]=R8(c->r[3]+0x00000000u); // 8017C464
  c->r[6]=rotl(c->r[7],8)&0x00FF0000u; // 8017C468
  c->r[5]=rotl(c->r[7],24)&0x0000FF00u; // 8017C46C
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 8017C470
  c->r[0]=0u-c->r[3]; // 8017C474
  c->r[6]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8017C478
  c->r[5]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[5]&~0x000000FFu); // 8017C47C
  c->r[5]=c->r[6]|c->r[5]; // 8017C480
  c->r[0]=c->r[0]|c->r[3]; // 8017C484
  c->r[9]=rotl(c->r[5],24)&0x00FFFFFFu; cr0(c,c->r[9]); // 8017C488
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 8017C48C
  if (!crb(c,2)) { goto L_8017C4B0; } // 8017C490
  c->r[5]=R32(c->r[8]+0x00000000u); // 8017C494
  c->r[8]=c->r[8]+0x00000004u; // 8017C498
  c->r[3]=rotl(c->r[5],8)&0x00FF0000u; // 8017C49C
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 8017C4A0
  c->r[3]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8017C4A4
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C4A8
  c->r[9]=c->r[3]|c->r[0]; // 8017C4AC
L_8017C4B0:;
  c->r[0]=0u+0x00000008u; // 8017C4B0
  goto L_8017C590; // 8017C4B4
L_8017C4B8:;
  c->r[10]=R8(c->r[8]+0x00000000u); // 8017C4B8
  c->ctr=c->r[0]; // 8017C4BC
  c->r[8]=c->r[8]+0x00000001u; // 8017C4C0
L_8017C4C4:;
  c->r[3]=rotl(c->r[10],0)&0x00000080u; cr0(c,c->r[3]); // 8017C4C4
  if (!crb(c,2)) { goto L_8017C4E4; } // 8017C4C8
  c->r[3]=R8(c->r[8]+0x00000000u); // 8017C4CC
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 8017C4D0
  c->r[8]=c->r[8]+0x00000001u; // 8017C4D4
  W8(c->r[4]+0x00000000u,c->r[3]); // 8017C4D8
  c->r[4]=c->r[4]+0x00000001u; // 8017C4DC
  goto L_8017C580; // 8017C4E0
L_8017C4E4:;
  c->r[6]=R8(c->r[8]+0x00000000u); // 8017C4E4
  cmps(c,0,(int32_t)c->r[7],0); // 8017C4E8
  c->r[11]=sraw(c,c->r[6],4); // 8017C4EC
  if (!crb(c,2)) { goto L_8017C4FC; } // 8017C4F0
  c->r[11]=c->r[11]+0x00000003u; // 8017C4F4
  goto L_8017C544; // 8017C4F8
L_8017C4FC:;
  cmps(c,0,(int32_t)c->r[11],1); // 8017C4FC
  if (!crb(c,2)) { goto L_8017C524; } // 8017C500
  c->r[5]=R8(c->r[8]+0x00000001u); // 8017C504
  {uint32_t ea=c->r[8]+0x00000002u; c->r[3]=R8(ea); c->r[8]=ea;} // 8017C508
  c->r[11]=rotl(c->r[5],4)&0xFFFFFFF0u; // 8017C50C
  c->r[11]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[11]&~0x0000F000u); // 8017C510
  c->r[3]=sraw(c,c->r[3],4); // 8017C514
  c->r[11]=c->r[11]|c->r[3]; // 8017C518
  c->r[11]=c->r[11]+0x00000111u; // 8017C51C
  goto L_8017C544; // 8017C520
L_8017C524:;
  cmps(c,0,(int32_t)c->r[11],0); // 8017C524
  if (!crb(c,2)) { goto L_8017C540; } // 8017C528
  {uint32_t ea=c->r[8]+0x00000001u; c->r[3]=R8(ea); c->r[8]=ea;} // 8017C52C
  c->r[11]=sraw(c,c->r[3],4); // 8017C530
  c->r[11]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[11]&~0x000000F0u); // 8017C534
  c->r[11]=c->r[11]+0x00000011u; // 8017C538
  goto L_8017C544; // 8017C53C
L_8017C540:;
  c->r[11]=c->r[11]+0x00000001u; // 8017C540
L_8017C544:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 8017C544
  cmpu(c,0,c->r[11],c->r[9]); // 8017C548
  c->r[3]=R8(c->r[8]+0x00000001u); // 8017C54C
  c->r[8]=c->r[8]+0x00000002u; // 8017C550
  c->r[3]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 8017C554
  c->r[5]=c->r[3]+0x00000001u; // 8017C558
  if (!crb(c,1)) { goto L_8017C564; } // 8017C55C
  c->r[11]=c->r[9]|c->r[9]; // 8017C560
L_8017C564:;
  c->r[9]=c->r[9]-c->r[11]; // 8017C564
L_8017C568:;
  c->r[3]=c->r[4]-c->r[5]; // 8017C568
  c->r[11]=addc(c,c->r[11],0xFFFFFFFFu,0); cr0(c,c->r[11]); // 8017C56C
  c->r[3]=R8(c->r[3]+0x00000000u); // 8017C570
  W8(c->r[4]+0x00000000u,c->r[3]); // 8017C574
  c->r[4]=c->r[4]+0x00000001u; // 8017C578
  if (crb(c,1)) { IRQCHK(c); goto L_8017C568; } // 8017C57C
L_8017C580:;
  cmps(c,0,(int32_t)c->r[9],0); // 8017C580
  if (crb(c,2)) { goto L_8017C590; } // 8017C584
  c->r[10]=rotl(c->r[10],1)&0xFFFFFFFEu; // 8017C588
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017C4C4; } // 8017C58C
L_8017C590:;
  cmps(c,0,(int32_t)c->r[9],0); // 8017C590
  if (!crb(c,2)) { IRQCHK(c); goto L_8017C4B8; } // 8017C594
  return; // 8017C598
}

// fn_8017C59C
void f_8017C59C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017C59C
  c->r[0]=c->lr; // 8017C5A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017C5A4
  c->r[11]=c->r[1]+0x00000020u; // 8017C5A8
  c->lr=0x8017C5B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017C5AC
  c->r[6]=R32(c->r[3]+0x00000000u); // 8017C5B0
  c->r[5]=rotl(c->r[6],8)&0x00FF0000u; // 8017C5B4
  c->r[0]=rotl(c->r[6],24)&0x0000FF00u; // 8017C5B8
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8017C5BC
  c->r[0]=(rotl(c->r[6],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C5C0
  c->r[0]=c->r[5]|c->r[0]; // 8017C5C4
  c->r[5]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[5]); // 8017C5C8
  if (crb(c,2)) { goto L_8017C5D8; } // 8017C5CC
  c->r[11]=c->r[3]+0x00000004u; // 8017C5D0
  goto L_8017C5DC; // 8017C5D4
L_8017C5D8:;
  c->r[11]=c->r[3]+0x00000008u; // 8017C5D8
L_8017C5DC:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 8017C5DC
  cmps(c,0,(int32_t)c->r[5],0); // 8017C5E0
  c->r[0]=c->r[11]+0x00000001u; // 8017C5E4
  c->r[7]=0u+0x00000000u; // 8017C5E8
  c->r[8]=rotl(c->r[6],0)&0x00000007u; // 8017C5EC
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 8017C5F0
  c->r[9]=c->r[8]+0x00000004u; // 8017C5F4
  c->r[8]=0u+0x00000000u; // 8017C5F8
  if (!crb(c,2)) { goto L_8017C618; } // 8017C5FC
  c->r[10]=R32(c->r[3]+0x00000004u); // 8017C600
  c->r[5]=rotl(c->r[10],8)&0x00FF0000u; // 8017C604
  c->r[3]=rotl(c->r[10],24)&0x0000FF00u; // 8017C608
  c->r[5]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 8017C60C
  c->r[3]=(rotl(c->r[10],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 8017C610
  c->r[5]=c->r[5]|c->r[3]; // 8017C614
L_8017C618:;
  c->r[3]=R8(c->r[11]+0x00000000u); // 8017C618
  c->r[30]=c->r[0]|c->r[0]; // 8017C61C
  c->r[12]=addc(c,~c->r[6],0x00000020u,1); // 8017C620
  c->r[3]=c->r[3]+0x00000001u; // 8017C624
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8017C628
  c->r[31]=c->r[11]+c->r[3]; // 8017C62C
  goto L_8017C6DC; // 8017C630
L_8017C634:;
  c->r[11]=R32(c->r[31]+0x00000000u); // 8017C634
  c->r[29]=0u+0x00000020u; // 8017C638
  c->r[31]=c->r[31]+0x00000004u; // 8017C63C
  c->r[10]=rotl(c->r[11],8)&0x00FF0000u; // 8017C640
  c->r[3]=rotl(c->r[11],24)&0x0000FF00u; // 8017C644
  c->r[10]=(rotl(c->r[11],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 8017C648
  c->r[3]=(rotl(c->r[11],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 8017C64C
  c->r[28]=c->r[10]|c->r[3]; // 8017C650
  goto L_8017C6D4; // 8017C654
L_8017C658:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 8017C658
  c->r[27]=rotl(c->r[28],1)&0x00000001u; // 8017C65C
  c->r[11]=rotl(c->r[30],0)&0xFFFFFFFEu; // 8017C660
  c->r[30]=((c->r[27])&0x20)?0u:(c->r[3]<<((c->r[27])&31)); // 8017C664
  c->r[10]=rotl(c->r[3],0)&0x0000003Fu; // 8017C668
  c->r[3]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[3]); // 8017C66C
  c->r[10]=c->r[10]+0x00000001u; // 8017C670
  c->r[3]=c->r[27]+c->r[11]; // 8017C674
  c->r[10]=rotl(c->r[10],1)&0xFFFFFFFEu; // 8017C678
  c->r[30]=c->r[10]+c->r[3]; // 8017C67C
  if (crb(c,2)) { goto L_8017C6C8; } // 8017C680
  c->r[3]=R8(c->r[30]+0x00000000u); // 8017C684
  c->r[8]=c->r[8]+0x00000001u; // 8017C688
  cmpu(c,0,c->r[8],c->r[9]); // 8017C68C
  c->r[7]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 8017C690
  c->r[3]=((c->r[12])&0x20)?0u:(c->r[3]<<((c->r[12])&31)); // 8017C694
  c->r[30]=c->r[0]|c->r[0]; // 8017C698
  c->r[7]=c->r[7]|c->r[3]; // 8017C69C
  if (!crb(c,2)) { goto L_8017C6C8; } // 8017C6A0
  c->r[10]=rotl(c->r[7],8)&0x00FF0000u; // 8017C6A4
  c->r[3]=rotl(c->r[7],24)&0x0000FF00u; // 8017C6A8
  c->r[10]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 8017C6AC
  c->r[8]=0u+0x00000000u; // 8017C6B0
  c->r[3]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 8017C6B4
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 8017C6B8
  c->r[3]=c->r[10]|c->r[3]; // 8017C6BC
  W32(c->r[4]+0x00000000u,c->r[3]); // 8017C6C0
  c->r[4]=c->r[4]+0x00000004u; // 8017C6C4
L_8017C6C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8017C6C8
  if (!crb(c,1)) { goto L_8017C6DC; } // 8017C6CC
  c->r[28]=rotl(c->r[28],1)&0xFFFFFFFEu; // 8017C6D0
L_8017C6D4:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFFFu,0); cr0(c,c->r[29]); // 8017C6D4
  if (!crb(c,0)) { IRQCHK(c); goto L_8017C658; } // 8017C6D8
L_8017C6DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8017C6DC
  if (crb(c,1)) { IRQCHK(c); goto L_8017C634; } // 8017C6E0
  c->r[11]=c->r[1]+0x00000020u; // 8017C6E4
  c->lr=0x8017C6ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8017C6E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017C6EC
  c->lr=c->r[0]; // 8017C6F0
  c->r[1]=c->r[1]+0x00000020u; // 8017C6F4
  return; // 8017C6F8
}

// fn_8017C6FC
void f_8017C6FC(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 8017C6FC
  c->r[6]=c->r[3]+0x00000004u; // 8017C700
  c->r[5]=R32(c->r[3]+0x00000000u); // 8017C704
  c->r[8]=0u+0x00000000u; // 8017C708
  c->r[7]=rotl(c->r[0],0)&0x0000000Fu; // 8017C70C
  c->r[3]=rotl(c->r[5],8)&0x00FF0000u; // 8017C710
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 8017C714
  cmpu(c,0,c->r[7],0x00000001u); // 8017C718
  c->r[3]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 8017C71C
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 8017C720
  c->r[0]=c->r[3]|c->r[0]; // 8017C724
  c->r[5]=rotl(c->r[0],24)&0x00FFFFFFu; // 8017C728
  if (crb(c,2)) { goto L_8017C750; } // 8017C72C
L_8017C730:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 8017C730
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 8017C734
  c->r[6]=c->r[6]+0x00000001u; // 8017C738
  c->r[8]=c->r[8]+c->r[0]; // 8017C73C
  W8(c->r[4]+0x00000000u,c->r[8]); // 8017C740
  c->r[4]=c->r[4]+0x00000001u; // 8017C744
  if (crb(c,1)) { IRQCHK(c); goto L_8017C730; } // 8017C748
  return; // 8017C74C
L_8017C750:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 8017C750
  c->r[5]=addc(c,c->r[5],0xFFFFFFFEu,0); cr0(c,c->r[5]); // 8017C754
  c->r[6]=c->r[6]+0x00000002u; // 8017C758
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 8017C75C
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8017C760
  c->r[8]=c->r[8]+c->r[0]; // 8017C764
  W16(0u+c->r[4],__builtin_bswap16((uint16_t)c->r[8])); // 8017C768
  c->r[4]=c->r[4]+0x00000002u; // 8017C76C
  if (crb(c,1)) { IRQCHK(c); goto L_8017C750; } // 8017C770
  return; // 8017C774
}

