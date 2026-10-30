#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8008E84C
void f_8008E84C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 8008E84C
  return; // 8008E850
}

// fn_8008E854
void f_8008E854(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008E854
  c->r[0]=c->lr; // 8008E858
  W32(c->r[1]+0x00000064u,c->r[0]); // 8008E85C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[31]);} // 8008E860
  c->f[31]=c->f[1]; // 8008E864
  W32(c->r[1]+0x00000054u,c->r[31]); // 8008E868
  c->r[31]=c->r[4]|c->r[4]; // 8008E86C
  W32(c->r[1]+0x00000050u,c->r[30]); // 8008E870
  c->r[30]=c->r[3]|c->r[3]; // 8008E874
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008E878
  c->r[12]=R32(c->r[12]+0x00000048u); // 8008E87C
  c->ctr=c->r[12]; // 8008E880
  if (true) { c->lr=0x8008E888u; dispatch(c,c->ctr); } // 8008E884
  cmps(c,0,(int32_t)c->r[3],1); // 8008E888
  if (!crb(c,2)) { goto L_8008E988; } // 8008E88C
  cmps(c,0,(int32_t)c->r[31],1); // 8008E890
  if (!crb(c,2)) { goto L_8008E8F4; } // 8008E894
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008E898
  c->r[4]=c->r[30]|c->r[30]; // 8008E89C
  c->r[3]=c->r[1]+0x00000020u; // 8008E8A0
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008E8A4
  c->ctr=c->r[12]; // 8008E8A8
  if (true) { c->lr=0x8008E8B0u; dispatch(c,c->ctr); } // 8008E8AC
  c->r[6]=R32(c->r[1]+0x00000020u); // 8008E8B0
  c->r[3]=0u+0x80370000u; // 8008E8B4
  c->r[5]=R32(c->r[1]+0x00000024u); // 8008E8B8
  c->r[3]=c->r[3]+0x00005C48u; // 8008E8BC
  c->r[0]=R32(c->r[1]+0x00000028u); // 8008E8C0
  c->r[4]=c->r[1]+0x0000002Cu; // 8008E8C4
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 8008E8C8
  W32(c->r[1]+0x00000030u,c->r[5]); // 8008E8CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008E8D0
  c->lr=0x8008E8D8u; f_800C3C5C(c); // 8008E8D4
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008E8D8
  c->r[4]=c->r[3]|c->r[3]; // 8008E8DC
  c->r[3]=c->r[30]|c->r[30]; // 8008E8E0
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8008E8E4
  c->ctr=c->r[12]; // 8008E8E8
  if (true) { c->lr=0x8008E8F0u; dispatch(c,c->ctr); } // 8008E8EC
  goto L_8008E988; // 8008E8F0
L_8008E8F4:;
  cmps(c,0,(int32_t)c->r[31],3); // 8008E8F4
  if (!crb(c,2)) { goto L_8008E924; } // 8008E8F8
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008E8FC
  c->r[3]=c->r[30]|c->r[30]; // 8008E900
  c->r[12]=R32(c->r[12]+0x00000050u); // 8008E904
  c->ctr=c->r[12]; // 8008E908
  if (true) { c->lr=0x8008E910u; dispatch(c,c->ctr); } // 8008E90C
  c->r[5]=0u+0x80370000u; // 8008E910
  c->r[4]=c->r[3]|c->r[3]; // 8008E914
  c->r[3]=c->r[5]+0x00005C48u; // 8008E918
  c->lr=0x8008E920u; f_800C3CA0(c); // 8008E91C
  goto L_8008E988; // 8008E920
L_8008E924:;
  cmps(c,0,(int32_t)c->r[31],2); // 8008E924
  if (!crb(c,2)) { goto L_8008E988; } // 8008E928
  c->r[12]=R32(c->r[30]+0x00000000u); // 8008E92C
  c->r[4]=c->r[30]|c->r[30]; // 8008E930
  c->r[3]=c->r[1]+0x00000014u; // 8008E934
  c->r[12]=R32(c->r[12]+0x00000020u); // 8008E938
  c->ctr=c->r[12]; // 8008E93C
  if (true) { c->lr=0x8008E944u; dispatch(c,c->ctr); } // 8008E940
  c->r[6]=R32(c->r[1]+0x00000014u); // 8008E944
  c->r[3]=0u+0x80370000u; // 8008E948
  c->r[5]=R32(c->r[1]+0x00000018u); // 8008E94C
  c->f[1]=c->f[31]; // 8008E950
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8008E954
  c->r[3]=c->r[3]+0x00005C48u; // 8008E958
  W32(c->r[1]+0x00000038u,c->r[6]); // 8008E95C
  c->r[4]=c->r[1]+0x00000008u; // 8008E960
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 8008E964
  W32(c->r[1]+0x00000040u,c->r[0]); // 8008E968
  W32(c->r[1]+0x00000008u,c->r[6]); // 8008E96C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8008E970
  W32(c->r[1]+0x00000010u,c->r[0]); // 8008E974
  c->lr=0x8008E97Cu; f_800C41DC(c); // 8008E978
  c->r[3]=0u+0x00010000u; // 8008E97C
  c->r[3]=c->r[3]+0x0000007Cu; // 8008E980
  c->lr=0x8008E988u; f_800EFD50(c); // 8008E984
L_8008E988:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8008E988
  {uint32_t ea=c->r[1]+0x00000058u; c->f[31]=RF64(ea);} // 8008E98C
  c->r[31]=R32(c->r[1]+0x00000054u); // 8008E990
  c->r[30]=R32(c->r[1]+0x00000050u); // 8008E994
  c->lr=c->r[0]; // 8008E998
  c->r[1]=c->r[1]+0x00000060u; // 8008E99C
  return; // 8008E9A0
}

// fn_8008E9A4
void f_8008E9A4(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008E9A4
  c->r[12]=R32(c->r[12]+0x00000094u); // 8008E9A8
  c->ctr=c->r[12]; // 8008E9AC
  if (true) { dispatch(c,c->ctr); return; } // 8008E9B0
}

// fn_8008E9B4
void f_8008E9B4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000002u; // 8008E9B4
  return; // 8008E9B8
}

// fn_8008E9BC
void f_8008E9BC(Ctx* __restrict c) {
  c->r[3]=0u+0x802C0000u; // 8008E9BC
  c->r[3]=c->r[3]+0xFFFFC918u; // 8008E9C0
  return; // 8008E9C4
}

// fn_8008E9C8
void f_8008E9C8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ACu); // 8008E9C8
  return; // 8008E9CC
}

// fn_8008E9D0
void f_8008E9D0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000064u); // 8008E9D0
  return; // 8008E9D4
}

// fn_8008E9D8
void f_8008E9D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000060u); // 8008E9D8
  return; // 8008E9DC
}

// fn_8008E9E0
void f_8008E9E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008E9E0
  c->r[0]=c->lr; // 8008E9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008E9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008E9EC
  c->r[31]=c->r[3]|c->r[3]; // 8008E9F0
  c->lr=0x8008E9F8u; f_80076C14(c); // 8008E9F4
  c->r[4]=0u+0x802C0000u; // 8008E9F8
  c->r[3]=c->r[31]|c->r[31]; // 8008E9FC
  c->r[4]=c->r[4]+0xFFFFC978u; // 8008EA00
  W32(c->r[31]+0x00000000u,c->r[4]); // 8008EA04
  c->r[12]=R32(c->r[31]+0x00000000u); // 8008EA08
  c->r[12]=R32(c->r[12]+0x00000008u); // 8008EA0C
  c->ctr=c->r[12]; // 8008EA10
  if (true) { c->lr=0x8008EA18u; dispatch(c,c->ctr); } // 8008EA14
  c->r[3]=c->r[31]|c->r[31]; // 8008EA18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008EA1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008EA20
  c->lr=c->r[0]; // 8008EA24
  c->r[1]=c->r[1]+0x00000010u; // 8008EA28
  return; // 8008EA2C
}

// fn_8008EA30
void f_8008EA30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008EA30
  c->r[0]=c->lr; // 8008EA34
  c->r[4]=0u+0x00000000u; // 8008EA38
  c->r[5]=0u+0x0000001Cu; // 8008EA3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008EA40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008EA44
  c->r[31]=c->r[3]|c->r[3]; // 8008EA48
  c->r[3]=c->r[3]+0x00000C80u; // 8008EA4C
  c->lr=0x8008EA54u; f_8000443C(c); // 8008EA50
  c->r[3]=c->r[31]|c->r[31]; // 8008EA54
  c->lr=0x8008EA5Cu; f_80076C64(c); // 8008EA58
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008EA5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008EA60
  c->lr=c->r[0]; // 8008EA64
  c->r[1]=c->r[1]+0x00000010u; // 8008EA68
  return; // 8008EA6C
}

// fn_8008EA70
void f_8008EA70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008EA70
  c->r[0]=c->lr; // 8008EA74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008EA78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008EA7C
  c->r[31]=c->r[3]|c->r[3]; // 8008EA80
  c->lr=0x8008EA88u; f_8007B6F8(c); // 8008EA84
  cmps(c,0,(int32_t)c->r[3],0); // 8008EA88
  if (!crb(c,1)) { goto L_8008EAA0; } // 8008EA8C
  c->lr=0x8008EA94u; f_8007AB3C(c); // 8008EA90
  c->r[4]=R32(c->r[31]+0x00000168u); // 8008EA94
  c->lr=0x8008EA9Cu; f_800E2E18(c); // 8008EA98
  goto L_8008EAA4; // 8008EA9C
L_8008EAA0:;
  c->r[3]=0u+0x00000000u; // 8008EAA0
L_8008EAA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008EAA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008EAA8
  c->lr=c->r[0]; // 8008EAAC
  c->r[1]=c->r[1]+0x00000010u; // 8008EAB0
  return; // 8008EAB4
}

// fn_8008EAB8
void f_8008EAB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008EAB8
  c->r[0]=c->lr; // 8008EABC
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EAC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008EAC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008EAC8
  c->r[31]=0u+0x00000001u; // 8008EACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008EAD0
  c->r[30]=c->r[3]|c->r[3]; // 8008EAD4
  W32(c->r[3]+0x00000C80u,c->r[31]); // 8008EAD8
  {uint32_t ea=c->r[3]+0x00000C84u; WF32(ea,c->f[0]);} // 8008EADC
  c->lr=0x8008EAE4u; f_8007AB30(c); // 8008EAE0
  c->lr=0x8008EAE8u; f_800782B8(c); // 8008EAE4
  c->lr=0x8008EAECu; f_8005A4F4(c); // 8008EAE8
  c->lr=0x8008EAF0u; f_800E3B98(c); // 8008EAEC
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EAF0
  W16(c->r[30]+0x00000C96u,c->r[3]); // 8008EAF4
  W32(c->r[30]+0x00000C90u,c->r[31]); // 8008EAF8
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 8008EAFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008EB00
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008EB04
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008EB08
  c->lr=c->r[0]; // 8008EB0C
  c->r[1]=c->r[1]+0x00000010u; // 8008EB10
  return; // 8008EB14
}

// fn_8008EB18
void f_8008EB18(Ctx* __restrict c) {
  W32(c->r[3]+0x00000C80u,c->r[4]); // 8008EB18
  return; // 8008EB1C
}

// fn_8008EB20
void f_8008EB20(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000C80u); // 8008EB20
  return; // 8008EB24
}

// fn_8008EB28
void f_8008EB28(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000C84u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EB28
  return; // 8008EB2C
}

// fn_8008EB30
void f_8008EB30(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],0x00000008u); // 8008EB30
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008EB34
  if (crb(c,1)) { goto L_8008ECDC; } // 8008EB38
  c->r[5]=0u+0x802C0000u; // 8008EB3C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8008EB40
  c->r[5]=c->r[5]+0xFFFFC928u; // 8008EB44
  c->r[5]=R32(c->r[5]+c->r[0]); // 8008EB48
  c->ctr=c->r[5]; // 8008EB4C
  if (true) { switch (c->ctr) { case 0x8008EB54u: goto L_8008EB54; case 0x8008EBB0u: goto L_8008EBB0; case 0x8008EBE4u: goto L_8008EBE4; case 0x8008EC18u: goto L_8008EC18; case 0x8008EC4Cu: goto L_8008EC4C; case 0x8008EC80u: goto L_8008EC80; case 0x8008ECDCu: goto L_8008ECDC; default: break; } dispatch(c,c->ctr); return; } // 8008EB50
L_8008EB54:;
  c->r[5]=R32(c->r[3]+0x00000C8Cu); // 8008EB54
  {uint32_t ea=c->r[2]+0xFFFF91D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EB58
  c->r[4]=R32(c->r[5]+0x00000034u); // 8008EB5C
  c->r[3]=R32(c->r[5]+0x00000038u); // 8008EB60
  W32(c->r[1]+0x00000074u,c->r[4]); // 8008EB64
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 8008EB68
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EB6C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8008EB70
  fcmp(c,0,c->f[1],c->f[0]); // 8008EB74
  W32(c->r[1]+0x00000018u,c->r[3]); // 8008EB78
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8008EB7C
  W32(c->r[1]+0x00000078u,c->r[3]); // 8008EB80
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8008EB84
  if (!crb(c,0)) { goto L_8008ECDC; } // 8008EB88
  W32(c->r[1]+0x00000070u,c->r[0]); // 8008EB8C
  {uint32_t ea=c->r[2]+0xFFFF91D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EB90
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EB94
  W32(c->r[1]+0x00000068u,c->r[4]); // 8008EB98
  fcmp(c,0,c->f[1],c->f[0]); // 8008EB9C
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 8008EBA0
  if (!crb(c,0)) { goto L_8008ECDC; } // 8008EBA4
  c->r[3]=0u+0x00000001u; // 8008EBA8
  goto L_8008ECE0; // 8008EBAC
L_8008EBB0:;
  c->r[4]=R32(c->r[3]+0x00000C8Cu); // 8008EBB0
  {uint32_t ea=c->r[2]+0xFFFF91D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EBB4
  c->r[0]=R32(c->r[4]+0x00000034u); // 8008EBB8
  c->r[3]=R32(c->r[4]+0x00000038u); // 8008EBBC
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8008EBC0
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8008EBC4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EBC8
  W32(c->r[1]+0x00000060u,c->r[3]); // 8008EBCC
  fcmp(c,0,c->f[1],c->f[0]); // 8008EBD0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8008EBD4
  if (!crb(c,0)) { goto L_8008ECDC; } // 8008EBD8
  c->r[3]=0u+0x00000001u; // 8008EBDC
  goto L_8008ECE0; // 8008EBE0
L_8008EBE4:;
  c->r[4]=R32(c->r[3]+0x00000C8Cu); // 8008EBE4
  {uint32_t ea=c->r[2]+0xFFFF91DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EBE8
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8008EBEC
  c->r[3]=R32(c->r[4]+0x00000034u); // 8008EBF0
  W32(c->r[1]+0x00000058u,c->r[0]); // 8008EBF4
  c->r[0]=R32(c->r[4]+0x00000038u); // 8008EBF8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EBFC
  W32(c->r[1]+0x00000050u,c->r[3]); // 8008EC00
  fcmp(c,0,c->f[1],c->f[0]); // 8008EC04
  W32(c->r[1]+0x00000054u,c->r[0]); // 8008EC08
  if (!crb(c,0)) { goto L_8008ECDC; } // 8008EC0C
  c->r[3]=0u+0x00000001u; // 8008EC10
  goto L_8008ECE0; // 8008EC14
L_8008EC18:;
  c->r[4]=R32(c->r[3]+0x00000C8Cu); // 8008EC18
  {uint32_t ea=c->r[2]+0xFFFF91E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EC1C
  c->r[0]=R32(c->r[4]+0x00000034u); // 8008EC20
  c->r[3]=R32(c->r[4]+0x00000038u); // 8008EC24
  W32(c->r[1]+0x00000044u,c->r[0]); // 8008EC28
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8008EC2C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EC30
  W32(c->r[1]+0x00000048u,c->r[3]); // 8008EC34
  fcmp(c,0,c->f[1],c->f[0]); // 8008EC38
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8008EC3C
  if (!crb(c,0)) { goto L_8008ECDC; } // 8008EC40
  c->r[3]=0u+0x00000001u; // 8008EC44
  goto L_8008ECE0; // 8008EC48
L_8008EC4C:;
  c->r[4]=R32(c->r[3]+0x00000C8Cu); // 8008EC4C
  {uint32_t ea=c->r[2]+0xFFFF91DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EC50
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 8008EC54
  c->r[3]=R32(c->r[4]+0x00000034u); // 8008EC58
  W32(c->r[1]+0x00000040u,c->r[0]); // 8008EC5C
  c->r[0]=R32(c->r[4]+0x00000038u); // 8008EC60
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EC64
  W32(c->r[1]+0x00000038u,c->r[3]); // 8008EC68
  fcmp(c,0,c->f[1],c->f[0]); // 8008EC6C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8008EC70
  if (!crb(c,0)) { goto L_8008ECDC; } // 8008EC74
  c->r[3]=0u+0x00000001u; // 8008EC78
  goto L_8008ECE0; // 8008EC7C
L_8008EC80:;
  c->r[5]=R32(c->r[3]+0x00000C8Cu); // 8008EC80
  {uint32_t ea=c->r[2]+0xFFFF91E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EC84
  c->r[4]=R32(c->r[5]+0x00000034u); // 8008EC88
  c->r[3]=R32(c->r[5]+0x00000038u); // 8008EC8C
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8008EC90
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 8008EC94
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EC98
  W32(c->r[1]+0x00000008u,c->r[4]); // 8008EC9C
  fcmp(c,0,c->f[1],c->f[0]); // 8008ECA0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8008ECA4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8008ECA8
  W32(c->r[1]+0x00000030u,c->r[3]); // 8008ECAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008ECB0
  if (!crb(c,0)) { goto L_8008ECDC; } // 8008ECB4
  W32(c->r[1]+0x00000028u,c->r[0]); // 8008ECB8
  {uint32_t ea=c->r[2]+0xFFFF91E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008ECBC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008ECC0
  W32(c->r[1]+0x00000020u,c->r[4]); // 8008ECC4
  fcmp(c,0,c->f[1],c->f[0]); // 8008ECC8
  W32(c->r[1]+0x00000024u,c->r[3]); // 8008ECCC
  if (!crb(c,0)) { goto L_8008ECDC; } // 8008ECD0
  c->r[3]=0u+0x00000001u; // 8008ECD4
  goto L_8008ECE0; // 8008ECD8
L_8008ECDC:;
  c->r[3]=0u+0x00000000u; // 8008ECDC
L_8008ECE0:;
  c->r[1]=c->r[1]+0x00000080u; // 8008ECE0
  return; // 8008ECE4
}

// fn_8008ECE8
void f_8008ECE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008ECE8
  c->r[0]=c->lr; // 8008ECEC
  W32(c->r[1]+0x00000124u,c->r[0]); // 8008ECF0
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 8008ECF4
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 8008ECF8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 8008ECFC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 8008ED00
  c->r[11]=c->r[1]+0x00000100u; // 8008ED04
  c->lr=0x8008ED0Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8008ED08
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008ED0C
  c->r[23]=c->r[3]|c->r[3]; // 8008ED10
  c->r[12]=R32(c->r[12]+0x00000068u); // 8008ED14
  c->ctr=c->r[12]; // 8008ED18
  if (true) { c->lr=0x8008ED20u; dispatch(c,c->ctr); } // 8008ED1C
  c->r[29]=c->r[3]|c->r[3]; // 8008ED20
  c->r[3]=0u+0x00000000u; // 8008ED24
  c->lr=0x8008ED2Cu; f_80059E68(c); // 8008ED28
  c->r[30]=R32(c->r[3]+0x00000000u); // 8008ED2C
  c->r[28]=c->r[3]|c->r[3]; // 8008ED30
  c->r[3]=0u+0x00000000u; // 8008ED34
  c->lr=0x8008ED3Cu; f_80059E48(c); // 8008ED38
  c->r[27]=c->r[3]|c->r[3]; // 8008ED3C
  c->r[3]=c->r[30]|c->r[30]; // 8008ED40
  c->lr=0x8008ED48u; f_80057864(c); // 8008ED44
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008ED48
  c->r[26]=0u+0x802F0000u; // 8008ED4C
  c->r[31]=c->r[3]|c->r[3]; // 8008ED50
  c->r[3]=c->r[23]|c->r[23]; // 8008ED54
  c->r[12]=R32(c->r[12]+0x000000E0u); // 8008ED58
  c->r[26]=c->r[26]+0x00002E50u; // 8008ED5C
  c->ctr=c->r[12]; // 8008ED60
  if (true) { c->lr=0x8008ED68u; dispatch(c,c->ctr); } // 8008ED64
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008ED68
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8008ED6C
  c->r[3]=c->r[23]|c->r[23]; // 8008ED70
  c->r[12]=R32(c->r[12]+0x000000E0u); // 8008ED74
  c->r[22]=c->r[4]+0x0000005Au; // 8008ED78
  c->ctr=c->r[12]; // 8008ED7C
  if (true) { c->lr=0x8008ED84u; dispatch(c,c->ctr); } // 8008ED80
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008ED84
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8008ED88
  c->r[3]=c->r[23]|c->r[23]; // 8008ED8C
  c->r[12]=R32(c->r[12]+0x000000E0u); // 8008ED90
  c->r[25]=c->r[4]+0x0000005Cu; // 8008ED94
  c->ctr=c->r[12]; // 8008ED98
  if (true) { c->lr=0x8008EDA0u; dispatch(c,c->ctr); } // 8008ED9C
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008EDA0
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8008EDA4
  c->r[3]=c->r[23]|c->r[23]; // 8008EDA8
  c->r[12]=R32(c->r[12]+0x000000E0u); // 8008EDAC
  c->r[24]=c->r[4]+0x0000005Bu; // 8008EDB0
  c->ctr=c->r[12]; // 8008EDB4
  if (true) { c->lr=0x8008EDBCu; dispatch(c,c->ctr); } // 8008EDB8
  cmps(c,0,(int32_t)c->r[29],0); // 8008EDBC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8008EDC0
  c->r[21]=c->r[3]+0x0000005Du; // 8008EDC4
  if (crb(c,2)) { goto L_8008F534; } // 8008EDC8
  c->r[0]=R32(c->r[23]+0x00000C80u); // 8008EDCC
  cmpu(c,0,c->r[0],0x0000000Au); // 8008EDD0
  if (crb(c,1)) { goto L_8008F52C; } // 8008EDD4
  c->r[3]=0u+0x802C0000u; // 8008EDD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8008EDDC
  c->r[3]=c->r[3]+0xFFFFC94Cu; // 8008EDE0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8008EDE4
  c->ctr=c->r[3]; // 8008EDE8
  if (true) { switch (c->ctr) { case 0x8008EDF0u: goto L_8008EDF0; case 0x8008EDFCu: goto L_8008EDFC; case 0x8008EE14u: goto L_8008EE14; case 0x8008EE50u: goto L_8008EE50; case 0x8008EF6Cu: goto L_8008EF6C; case 0x8008F118u: goto L_8008F118; case 0x8008F188u: goto L_8008F188; case 0x8008F3B4u: goto L_8008F3B4; case 0x8008F4D8u: goto L_8008F4D8; case 0x8008F50Cu: goto L_8008F50C; case 0x8008F52Cu: goto L_8008F52C; default: break; } dispatch(c,c->ctr); return; } // 8008EDEC
L_8008EDF0:;
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EDF0
  {uint32_t ea=c->r[23]+0x00000068u; WF32(ea,c->f[0]);} // 8008EDF4
  goto L_8008F52C; // 8008EDF8
L_8008EDFC:;
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008EDFC
  c->r[3]=c->r[23]|c->r[23]; // 8008EE00
  c->r[4]=0u+0x00000002u; // 8008EE04
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008EE08
  c->ctr=c->r[12]; // 8008EE0C
  if (true) { c->lr=0x8008EE14u; dispatch(c,c->ctr); } // 8008EE10
L_8008EE14:;
  c->r[3]=0u+0x00010000u; // 8008EE14
  c->r[3]=c->r[3]+0x0000007Bu; // 8008EE18
  c->lr=0x8008EE20u; f_800EFD50(c); // 8008EE1C
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008EE20
  c->r[3]=c->r[23]|c->r[23]; // 8008EE24
  c->r[4]=0u+0x00000003u; // 8008EE28
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008EE2C
  c->ctr=c->r[12]; // 8008EE30
  if (true) { c->lr=0x8008EE38u; dispatch(c,c->ctr); } // 8008EE34
  c->r[3]=c->r[29]|c->r[29]; // 8008EE38
  c->r[4]=c->r[22]|c->r[22]; // 8008EE3C
  c->r[5]=0u+0x00000000u; // 8008EE40
  c->r[6]=0u+0x00000000u; // 8008EE44
  c->lr=0x8008EE4Cu; f_800E1BCC(c); // 8008EE48
  goto L_8008F52C; // 8008EE4C
L_8008EE50:;
  {uint32_t ea=c->r[2]+0xFFFF91D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EE50
  c->r[3]=c->r[29]|c->r[29]; // 8008EE54
  {uint32_t ea=c->r[23]+0x00000068u; WF32(ea,c->f[0]);} // 8008EE58
  c->lr=0x8008EE60u; f_800E25FC(c); // 8008EE5C
  cmps(c,0,(int32_t)c->r[3],0); // 8008EE60
  if (crb(c,2)) { goto L_8008F52C; } // 8008EE64
  c->r[0]=R32(c->r[26]+0x00000000u); // 8008EE68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)17280); // 8008EE6C
  c->r[3]=c->r[26]+c->r[0]; // 8008EE70
  c->r[0]=R32(c->r[3]+0x00000004u); // 8008EE74
  cmps(c,0,(int32_t)c->r[0],2); // 8008EE78
  if (crb(c,2)) { goto L_8008EECC; } // 8008EE7C
  c->r[3]=c->r[27]|c->r[27]; // 8008EE80
  c->lr=0x8008EE88u; f_800584D4(c); // 8008EE84
  cmps(c,0,(int32_t)c->r[3],1); // 8008EE88
  if (crb(c,2)) { goto L_8008EEC0; } // 8008EE8C
  c->lr=0x8008EE94u; f_800076D4(c); // 8008EE90
  cmps(c,0,(int32_t)c->r[3],0); // 8008EE94
  if (crb(c,2)) { goto L_8008EEB4; } // 8008EE98
  c->lr=0x8008EEA0u; f_800076D4(c); // 8008EE9C
  cmps(c,0,(int32_t)c->r[3],1); // 8008EEA0
  if (crb(c,2)) { goto L_8008EEB4; } // 8008EEA4
  c->lr=0x8008EEACu; f_800076D4(c); // 8008EEA8
  cmps(c,0,(int32_t)c->r[3],3); // 8008EEAC
  if (!crb(c,2)) { goto L_8008EECC; } // 8008EEB0
L_8008EEB4:;
  c->lr=0x8008EEB8u; f_800076E4(c); // 8008EEB4
  cmps(c,0,(int32_t)c->r[3],1); // 8008EEB8
  if (!crb(c,2)) { goto L_8008EECC; } // 8008EEBC
L_8008EEC0:;
  c->r[3]=R32(c->r[30]+0x000001ECu); // 8008EEC0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8008EEC4
  W32(c->r[30]+0x000001ECu,c->r[0]); // 8008EEC8
L_8008EECC:;
  c->r[3]=c->r[28]|c->r[28]; // 8008EECC
  c->r[4]=0u+0x00000000u; // 8008EED0
  c->lr=0x8008EED8u; f_80059A98(c); // 8008EED4
  W32(c->r[23]+0x00000C8Cu,c->r[3]); // 8008EED8
  c->r[4]=0u+0x00000008u; // 8008EEDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008EEE0
  c->r[12]=R32(c->r[12]+0x00000240u); // 8008EEE4
  c->ctr=c->r[12]; // 8008EEE8
  if (true) { c->lr=0x8008EEF0u; dispatch(c,c->ctr); } // 8008EEEC
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008EEF0
  c->r[4]=0u+0x00000000u; // 8008EEF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008EEF8
  c->r[12]=R32(c->r[12]+0x00000154u); // 8008EEFC
  c->ctr=c->r[12]; // 8008EF00
  if (true) { c->lr=0x8008EF08u; dispatch(c,c->ctr); } // 8008EF04
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008EF08
  c->r[4]=0u+0x00000000u; // 8008EF0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008EF10
  c->r[12]=R32(c->r[12]+0x00000164u); // 8008EF14
  c->ctr=c->r[12]; // 8008EF18
  if (true) { c->lr=0x8008EF20u; dispatch(c,c->ctr); } // 8008EF1C
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008EF20
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EF24
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008EF28
  c->r[12]=R32(c->r[12]+0x0000014Cu); // 8008EF2C
  c->ctr=c->r[12]; // 8008EF30
  if (true) { c->lr=0x8008EF38u; dispatch(c,c->ctr); } // 8008EF34
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EF38
  c->r[3]=0u+0x00010000u; // 8008EF3C
  c->r[3]=c->r[3]+0x0000001Bu; // 8008EF40
  {uint32_t ea=c->r[23]+0x00000C88u; WF32(ea,c->f[0]);} // 8008EF44
  {uint32_t ea=c->r[23]+0x00000C98u; WF32(ea,c->f[0]);} // 8008EF48
  c->lr=0x8008EF50u; f_800EFD50(c); // 8008EF4C
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008EF50
  c->r[3]=c->r[23]|c->r[23]; // 8008EF54
  c->r[4]=0u+0x00000004u; // 8008EF58
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008EF5C
  c->ctr=c->r[12]; // 8008EF60
  if (true) { c->lr=0x8008EF68u; dispatch(c,c->ctr); } // 8008EF64
  goto L_8008F52C; // 8008EF68
L_8008EF6C:;
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8008EF6C
  c->r[3]=c->r[1]+0x00000098u; // 8008EF70
  {uint32_t ea=c->r[2]+0xFFFF91ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EF74
  c->r[5]=c->r[1]+0x0000008Cu; // 8008EF78
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8008EF7C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8008EF80
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 8008EF84
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8008EF88
  c->r[4]=R32(c->r[1]+0x00000030u); // 8008EF8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008EF90
  W32(c->r[1]+0x0000008Cu,c->r[6]); // 8008EF94
  W32(c->r[1]+0x00000090u,c->r[4]); // 8008EF98
  W32(c->r[1]+0x00000094u,c->r[0]); // 8008EF9C
  c->r[4]=R32(c->r[23]+0x00000C8Cu); // 8008EFA0
  c->r[12]=R32(c->r[4]+0x00000000u); // 8008EFA4
  c->r[12]=R32(c->r[12]+0x00000120u); // 8008EFA8
  c->ctr=c->r[12]; // 8008EFAC
  if (true) { c->lr=0x8008EFB4u; dispatch(c,c->ctr); } // 8008EFB0
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008EFB4
  c->r[4]=0u+0x00000000u; // 8008EFB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008EFBC
  c->r[12]=R32(c->r[12]+0x00000144u); // 8008EFC0
  c->ctr=c->r[12]; // 8008EFC4
  if (true) { c->lr=0x8008EFCCu; dispatch(c,c->ctr); } // 8008EFC8
  c->r[7]=R32(c->r[23]+0x00000C8Cu); // 8008EFCC
  {uint32_t ea=c->r[2]+0xFFFF91F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8008EFD0
  c->r[6]=R32(c->r[7]+0x0000003Cu); // 8008EFD4
  c->r[3]=R32(c->r[7]+0x00000034u); // 8008EFD8
  W32(c->r[1]+0x00000088u,c->r[6]); // 8008EFDC
  c->r[0]=R32(c->r[7]+0x00000038u); // 8008EFE0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008EFE4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008EFE8
  fcmp(c,0,c->f[0],c->f[3]); // 8008EFEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8008EFF0
  W32(c->r[1]+0x00000010u,c->r[6]); // 8008EFF4
  W32(c->r[1]+0x00000080u,c->r[3]); // 8008EFF8
  W32(c->r[1]+0x00000084u,c->r[0]); // 8008EFFC
  if (!crb(c,0)) { goto L_8008F52C; } // 8008F000
  W32(c->r[1]+0x00000074u,c->r[3]); // 8008F004
  c->r[4]=c->r[1]+0x0000005Cu; // 8008F008
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F00C
  W32(c->r[1]+0x00000078u,c->r[0]); // 8008F010
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F014
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F018
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 8008F01C
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8008F020
  c->r[0]=R32(c->r[1]+0x000000BCu); // 8008F024
  c->r[3]=R32(c->r[1]+0x000000C0u); // 8008F028
  W32(c->r[1]+0x00000068u,c->r[0]); // 8008F02C
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[3]);} // 8008F030
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F034
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8008F038
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 8008F03C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8008F040
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F044
  {uint32_t ea=c->r[7]+0x00000034u; WF32(ea,c->f[1]);} // 8008F048
  c->r[5]=R32(c->r[1]+0x00000020u); // 8008F04C
  W32(c->r[1]+0x00000070u,c->r[0]); // 8008F050
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8008F054
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F058
  {uint32_t ea=c->r[7]+0x00000038u; WF32(ea,c->f[2]);} // 8008F05C
  c->r[3]=R32(c->r[1]+0x00000024u); // 8008F060
  {uint32_t ea=c->r[7]+0x0000003Cu; WF32(ea,c->f[1]);} // 8008F064
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8008F068
  c->r[0]=R32(c->r[1]+0x00000028u); // 8008F06C
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 8008F070
  W32(c->r[1]+0x00000060u,c->r[3]); // 8008F074
  W32(c->r[1]+0x00000064u,c->r[0]); // 8008F078
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F07C
  W32(c->r[1]+0x0000007Cu,c->r[6]); // 8008F080
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F084
  c->r[12]=R32(c->r[12]+0x000000FCu); // 8008F088
  c->ctr=c->r[12]; // 8008F08C
  if (true) { c->lr=0x8008F094u; dispatch(c,c->ctr); } // 8008F090
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F094
  c->r[4]=0u+0x00000000u; // 8008F098
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F09C
  c->r[12]=R32(c->r[12]+0x000001A0u); // 8008F0A0
  c->ctr=c->r[12]; // 8008F0A4
  if (true) { c->lr=0x8008F0ACu; dispatch(c,c->ctr); } // 8008F0A8
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F0AC
  c->r[4]=0u+0x00000000u; // 8008F0B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F0B4
  c->r[12]=R32(c->r[12]+0x00000190u); // 8008F0B8
  c->ctr=c->r[12]; // 8008F0BC
  if (true) { c->lr=0x8008F0C4u; dispatch(c,c->ctr); } // 8008F0C0
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F0C4
  c->r[4]=0u+0x00000000u; // 8008F0C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F0CC
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8008F0D0
  c->ctr=c->r[12]; // 8008F0D4
  if (true) { c->lr=0x8008F0DCu; dispatch(c,c->ctr); } // 8008F0D8
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F0DC
  c->r[4]=0u+0x00000000u; // 8008F0E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F0E4
  c->r[12]=R32(c->r[12]+0x000001B8u); // 8008F0E8
  c->ctr=c->r[12]; // 8008F0EC
  if (true) { c->lr=0x8008F0F4u; dispatch(c,c->ctr); } // 8008F0F0
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F0F4
  c->r[3]=c->r[23]|c->r[23]; // 8008F0F8
  c->r[4]=0u+0x00000005u; // 8008F0FC
  {uint32_t ea=c->r[23]+0x00000C88u; WF32(ea,c->f[0]);} // 8008F100
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F104
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008F108
  c->ctr=c->r[12]; // 8008F10C
  if (true) { c->lr=0x8008F114u; dispatch(c,c->ctr); } // 8008F110
  goto L_8008F52C; // 8008F114
L_8008F118:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8008F118
  cmps(c,0,(int32_t)c->r[0],0); // 8008F11C
  if (!crb(c,2)) { goto L_8008F140; } // 8008F120
  c->r[0]=R32(c->r[31]+0x00000014u); // 8008F124
  cmps(c,0,(int32_t)c->r[0],0); // 8008F128
  if (!crb(c,2)) { goto L_8008F140; } // 8008F12C
  {uint32_t ea=c->r[23]+0x00000C98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F130
  {uint32_t ea=c->r[2]+0xFFFF91F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F134
  fcmp(c,0,c->f[1],c->f[0]); // 8008F138
  if (!crb(c,1)) { goto L_8008F52C; } // 8008F13C
L_8008F140:;
  c->r[3]=0u+0x00010000u; // 8008F140
  c->r[3]=c->r[3]+0x0000007Du; // 8008F144
  c->lr=0x8008F14Cu; f_800EFD50(c); // 8008F148
  c->r[3]=c->r[29]|c->r[29]; // 8008F14C
  c->r[4]=c->r[25]|c->r[25]; // 8008F150
  c->r[5]=0u+0x00000000u; // 8008F154
  c->r[6]=0u+0x00000000u; // 8008F158
  c->lr=0x8008F160u; f_800E1BCC(c); // 8008F15C
  c->r[3]=c->r[29]|c->r[29]; // 8008F160
  c->r[4]=0u+0x00000064u; // 8008F164
  c->lr=0x8008F16Cu; f_800E1B30(c); // 8008F168
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F16C
  c->r[3]=c->r[23]|c->r[23]; // 8008F170
  c->r[4]=0u+0x00000006u; // 8008F174
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008F178
  c->ctr=c->r[12]; // 8008F17C
  if (true) { c->lr=0x8008F184u; dispatch(c,c->ctr); } // 8008F180
  goto L_8008F52C; // 8008F184
L_8008F188:;
  c->r[3]=c->r[29]|c->r[29]; // 8008F188
  c->r[21]=0u+0x00000001u; // 8008F18C
  c->r[22]=0u+0x00000000u; // 8008F190
  c->lr=0x8008F198u; f_800E25F0(c); // 8008F194
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 8008F198
  if (!crb(c,2)) { goto L_8008F52C; } // 8008F19C
  {uint32_t ea=c->r[23]+0x00000C98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F1A0
  {uint32_t ea=c->r[2]+0xFFFF91F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F1A4
  fcmp(c,0,c->f[1],c->f[0]); // 8008F1A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8008F1AC
  if (!crb(c,2)) { goto L_8008F1D4; } // 8008F1B0
  c->r[0]=R32(c->r[31]+0x00000010u); // 8008F1B4
  cmps(c,0,(int32_t)c->r[0],0); // 8008F1B8
  if (!crb(c,2)) { goto L_8008F1F4; } // 8008F1BC
  c->r[0]=R32(c->r[31]+0x00000014u); // 8008F1C0
  cmps(c,0,(int32_t)c->r[0],0); // 8008F1C4
  if (!crb(c,2)) { goto L_8008F1F4; } // 8008F1C8
  c->r[22]=0u+0x00000001u; // 8008F1CC
  goto L_8008F1F4; // 8008F1D0
L_8008F1D4:;
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F1D4
  c->r[3]=c->r[23]|c->r[23]; // 8008F1D8
  c->r[12]=R32(c->r[12]+0x000000E4u); // 8008F1DC
  c->ctr=c->r[12]; // 8008F1E0
  if (true) { c->lr=0x8008F1E8u; dispatch(c,c->ctr); } // 8008F1E4
  {uint32_t ea=c->r[23]+0x00000C98u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F1E8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8008F1EC
  {uint32_t ea=c->r[23]+0x00000C98u; WF32(ea,c->f[0]);} // 8008F1F0
L_8008F1F4:;
  cmps(c,0,(int32_t)c->r[22],1); // 8008F1F4
  if (crb(c,2)) { goto L_8008F20C; } // 8008F1F8
  {uint32_t ea=c->r[23]+0x00000C98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F1FC
  {uint32_t ea=c->r[2]+0xFFFF91F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F200
  fcmp(c,0,c->f[1],c->f[0]); // 8008F204
  if (!crb(c,1)) { goto L_8008F2B0; } // 8008F208
L_8008F20C:;
  c->r[5]=0u+0x80270000u; // 8008F20C
  {uint32_t ea=c->r[5]+0x000023F8u; c->r[7]=R32(ea); c->r[5]=ea;} // 8008F210
  c->r[8]=0u+0x00000000u; // 8008F214
  {uint32_t ea=c->r[2]+0xFFFF91FCu; c->f[31]=c->ps1[31]=RF32(ea);} // 8008F218
  c->r[6]=R32(c->r[5]+0x00000004u); // 8008F21C
  c->r[3]=c->r[23]|c->r[23]; // 8008F220
  c->r[0]=R32(c->r[5]+0x00000008u); // 8008F224
  c->r[4]=c->r[1]+0x000000B0u; // 8008F228
  W32(c->r[1]+0x000000B0u,c->r[8]); // 8008F22C
  c->r[5]=0u+0x00000003u; // 8008F230
  {uint32_t ea=c->r[2]+0xFFFF9200u; c->f[30]=c->ps1[30]=RF32(ea);} // 8008F234
  W32(c->r[1]+0x000000B4u,c->r[8]); // 8008F238
  W32(c->r[1]+0x000000B8u,c->r[8]); // 8008F23C
  W32(c->r[1]+0x000000A4u,c->r[7]); // 8008F240
  W32(c->r[1]+0x000000A8u,c->r[6]); // 8008F244
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8008F248
  c->lr=0x8008F250u; f_8004EA68(c); // 8008F24C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F250
  c->r[3]=0u+0x80370000u; // 8008F254
  c->r[10]=R32(c->r[1]+0x000000A4u); // 8008F258
  c->f[1]=c->f[31]; // 8008F25C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[30]); // 8008F260
  c->r[9]=R32(c->r[1]+0x000000A8u); // 8008F264
  c->r[8]=R32(c->r[1]+0x000000ACu); // 8008F268
  c->r[3]=c->r[3]+0x00005C48u; // 8008F26C
  c->r[7]=R32(c->r[1]+0x000000B0u); // 8008F270
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8008F274
  c->r[6]=R32(c->r[1]+0x000000B4u); // 8008F278
  c->r[4]=c->r[1]+0x00000050u; // 8008F27C
  c->r[0]=R32(c->r[1]+0x000000B8u); // 8008F280
  c->r[5]=c->r[1]+0x00000044u; // 8008F284
  W32(c->r[1]+0x00000044u,c->r[10]); // 8008F288
  W32(c->r[1]+0x00000048u,c->r[9]); // 8008F28C
  W32(c->r[1]+0x0000004Cu,c->r[8]); // 8008F290
  W32(c->r[1]+0x00000050u,c->r[7]); // 8008F294
  W32(c->r[1]+0x00000054u,c->r[6]); // 8008F298
  W32(c->r[1]+0x00000058u,c->r[0]); // 8008F29C
  c->lr=0x8008F2A4u; f_800C39FC(c); // 8008F2A0
  c->r[3]=0u+0x00000000u; // 8008F2A4
  c->lr=0x8008F2ACu; f_800076DC(c); // 8008F2A8
  c->r[21]=0u+0x00000000u; // 8008F2AC
L_8008F2B0:;
  cmps(c,0,(int32_t)c->r[21],1); // 8008F2B0
  {uint32_t ea=c->r[2]+0xFFFF9204u; c->f[3]=c->ps1[3]=RF32(ea);} // 8008F2B4
  {uint32_t ea=c->r[2]+0xFFFF9208u; c->f[4]=c->ps1[4]=RF32(ea);} // 8008F2B8
  {uint32_t ea=c->r[2]+0xFFFF920Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8008F2BC
  if (!crb(c,2)) { goto L_8008F300; } // 8008F2C0
  {uint32_t ea=c->r[23]+0x00000C84u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F2C4
  {uint32_t ea=c->r[2]+0xFFFF9210u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F2C8
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F2CC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8008F2D0
  fcmp(c,0,c->f[1],c->f[0]); // 8008F2D4
  {uint32_t ea=c->r[23]+0x00000C84u; WF32(ea,c->f[1]);} // 8008F2D8
  if (!crb(c,0)) { goto L_8008F2E4; } // 8008F2DC
  {uint32_t ea=c->r[23]+0x00000C84u; WF32(ea,c->f[0]);} // 8008F2E0
L_8008F2E4:;
  {uint32_t ea=c->r[23]+0x00000C88u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F2E4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 8008F2E8
  fcmp(c,0,c->f[0],c->f[4]); // 8008F2EC
  {uint32_t ea=c->r[23]+0x00000C88u; WF32(ea,c->f[0]);} // 8008F2F0
  if (!crb(c,1)) { goto L_8008F52C; } // 8008F2F4
  {uint32_t ea=c->r[23]+0x00000C88u; WF32(ea,c->f[4]);} // 8008F2F8
  goto L_8008F52C; // 8008F2FC
L_8008F300:;
  {uint32_t ea=c->r[2]+0xFFFF9214u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F300
  c->r[3]=c->r[29]|c->r[29]; // 8008F304
  c->r[4]=c->r[24]|c->r[24]; // 8008F308
  c->r[5]=0u+0x00000000u; // 8008F30C
  {uint32_t ea=c->r[23]+0x00000C84u; WF32(ea,c->f[0]);} // 8008F310
  c->r[6]=0u+0x00000000u; // 8008F314
  c->lr=0x8008F31Cu; f_800E1BCC(c); // 8008F318
  c->r[3]=c->r[29]|c->r[29]; // 8008F31C
  c->r[4]=0u+0x00000000u; // 8008F320
  c->lr=0x8008F328u; f_800E1B30(c); // 8008F324
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F328
  c->r[3]=c->r[23]|c->r[23]; // 8008F32C
  c->r[4]=0u+0x00000007u; // 8008F330
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008F334
  c->ctr=c->r[12]; // 8008F338
  if (true) { c->lr=0x8008F340u; dispatch(c,c->ctr); } // 8008F33C
  c->r[3]=0u+0x00010000u; // 8008F340
  c->r[3]=c->r[3]+0x0000001Cu; // 8008F344
  c->lr=0x8008F34Cu; f_800EFD50(c); // 8008F348
  c->f[2]=-c->f[30]; // 8008F34C
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F350
  {uint32_t ea=c->r[23]+0x00000C88u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F354
  c->r[4]=c->r[1]+0x00000038u; // 8008F358
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8008F35C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8008F360
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8008F364
  c->r[5]=R32(c->r[1]+0x00000014u); // 8008F368
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8008F36C
  c->r[3]=R32(c->r[1]+0x00000018u); // 8008F370
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8008F374
  W32(c->r[1]+0x00000038u,c->r[5]); // 8008F378
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8008F37C
  W32(c->r[1]+0x00000040u,c->r[0]); // 8008F380
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F384
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F388
  c->r[12]=R32(c->r[12]+0x000000FCu); // 8008F38C
  c->ctr=c->r[12]; // 8008F390
  if (true) { c->lr=0x8008F398u; dispatch(c,c->ctr); } // 8008F394
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F398
  c->r[4]=0u+0x00000001u; // 8008F39C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F3A0
  c->r[12]=R32(c->r[12]+0x00000144u); // 8008F3A4
  c->ctr=c->r[12]; // 8008F3A8
  if (true) { c->lr=0x8008F3B0u; dispatch(c,c->ctr); } // 8008F3AC
  goto L_8008F52C; // 8008F3B0
L_8008F3B4:;
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F3B4
  c->r[3]=c->r[23]|c->r[23]; // 8008F3B8
  c->r[12]=R32(c->r[12]+0x000000E0u); // 8008F3BC
  c->ctr=c->r[12]; // 8008F3C0
  if (true) { c->lr=0x8008F3C8u; dispatch(c,c->ctr); } // 8008F3C4
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F3C8
  c->r[4]=c->r[3]|c->r[3]; // 8008F3CC
  c->r[3]=c->r[23]|c->r[23]; // 8008F3D0
  c->r[12]=R32(c->r[12]+0x0000014Cu); // 8008F3D4
  c->ctr=c->r[12]; // 8008F3D8
  if (true) { c->lr=0x8008F3E0u; dispatch(c,c->ctr); } // 8008F3DC
  cmps(c,0,(int32_t)c->r[3],1); // 8008F3E0
  if (!crb(c,2)) { goto L_8008F52C; } // 8008F3E4
  c->r[3]=0u+0x00000000u; // 8008F3E8
  c->lr=0x8008F3F0u; f_80059E34(c); // 8008F3EC
  c->r[0]=0u+0x00000001u; // 8008F3F0
  c->r[4]=0u+0x00000001u; // 8008F3F4
  W32(c->r[3]+0x000002B8u,c->r[0]); // 8008F3F8
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F3FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F400
  c->r[12]=R32(c->r[12]+0x00000154u); // 8008F404
  c->ctr=c->r[12]; // 8008F408
  if (true) { c->lr=0x8008F410u; dispatch(c,c->ctr); } // 8008F40C
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F410
  c->r[4]=0u+0x00000001u; // 8008F414
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F418
  c->r[12]=R32(c->r[12]+0x000001A0u); // 8008F41C
  c->ctr=c->r[12]; // 8008F420
  if (true) { c->lr=0x8008F428u; dispatch(c,c->ctr); } // 8008F424
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F428
  c->r[4]=0u+0x00000001u; // 8008F42C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F430
  c->r[12]=R32(c->r[12]+0x00000164u); // 8008F434
  c->ctr=c->r[12]; // 8008F438
  if (true) { c->lr=0x8008F440u; dispatch(c,c->ctr); } // 8008F43C
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F440
  c->r[4]=0u+0x00000001u; // 8008F444
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F448
  c->r[12]=R32(c->r[12]+0x00000190u); // 8008F44C
  c->ctr=c->r[12]; // 8008F450
  if (true) { c->lr=0x8008F458u; dispatch(c,c->ctr); } // 8008F454
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F458
  c->r[4]=0u+0x00000001u; // 8008F45C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F460
  c->r[12]=R32(c->r[12]+0x000001B0u); // 8008F464
  c->ctr=c->r[12]; // 8008F468
  if (true) { c->lr=0x8008F470u; dispatch(c,c->ctr); } // 8008F46C
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F470
  c->r[4]=0u+0x00000001u; // 8008F474
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F478
  c->r[12]=R32(c->r[12]+0x000001B8u); // 8008F47C
  c->ctr=c->r[12]; // 8008F480
  if (true) { c->lr=0x8008F488u; dispatch(c,c->ctr); } // 8008F484
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F488
  c->r[3]=c->r[23]|c->r[23]; // 8008F48C
  c->r[4]=0u+0x00000009u; // 8008F490
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008F494
  c->ctr=c->r[12]; // 8008F498
  if (true) { c->lr=0x8008F4A0u; dispatch(c,c->ctr); } // 8008F49C
  c->r[3]=R32(c->r[23]+0x00000C8Cu); // 8008F4A0
  c->r[4]=0u+0x00000010u; // 8008F4A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8008F4A8
  c->r[12]=R32(c->r[12]+0x00000240u); // 8008F4AC
  c->ctr=c->r[12]; // 8008F4B0
  if (true) { c->lr=0x8008F4B8u; dispatch(c,c->ctr); } // 8008F4B4
  c->r[3]=c->r[29]|c->r[29]; // 8008F4B8
  c->r[4]=c->r[21]|c->r[21]; // 8008F4BC
  c->r[5]=0u+0x00000000u; // 8008F4C0
  c->r[6]=0u+0x00000000u; // 8008F4C4
  c->lr=0x8008F4CCu; f_800E1BCC(c); // 8008F4C8
  {uint32_t ea=c->r[2]+0xFFFF91C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F4CC
  {uint32_t ea=c->r[23]+0x00000C84u; WF32(ea,c->f[0]);} // 8008F4D0
  goto L_8008F52C; // 8008F4D4
L_8008F4D8:;
  c->r[3]=c->r[29]|c->r[29]; // 8008F4D8
  c->lr=0x8008F4E0u; f_800E25FC(c); // 8008F4DC
  cmpu(c,0,c->r[3],0x00000001u); // 8008F4E0
  if (!crb(c,2)) { goto L_8008F52C; } // 8008F4E4
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F4E8
  c->r[3]=c->r[23]|c->r[23]; // 8008F4EC
  c->r[4]=0u+0x0000000Au; // 8008F4F0
  {uint32_t ea=c->r[23]+0x00000068u; WF32(ea,c->f[0]);} // 8008F4F4
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F4F8
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008F4FC
  c->ctr=c->r[12]; // 8008F500
  if (true) { c->lr=0x8008F508u; dispatch(c,c->ctr); } // 8008F504
  goto L_8008F52C; // 8008F508
L_8008F50C:;
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F50C
  c->r[3]=c->r[23]|c->r[23]; // 8008F510
  c->r[4]=0u+0x00000000u; // 8008F514
  {uint32_t ea=c->r[23]+0x00000068u; WF32(ea,c->f[0]);} // 8008F518
  c->r[12]=R32(c->r[23]+0x00000000u); // 8008F51C
  c->r[12]=R32(c->r[12]+0x00000140u); // 8008F520
  c->ctr=c->r[12]; // 8008F524
  if (true) { c->lr=0x8008F52Cu; dispatch(c,c->ctr); } // 8008F528
L_8008F52C:;
  c->r[3]=c->r[29]|c->r[29]; // 8008F52C
  c->lr=0x8008F534u; f_800E25F0(c); // 8008F530
L_8008F534:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 8008F534
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 8008F538
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 8008F53C
  c->r[11]=c->r[1]+0x00000100u; // 8008F540
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 8008F544
  c->lr=0x8008F54Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008F548
  c->r[0]=R32(c->r[1]+0x00000124u); // 8008F54C
  c->lr=c->r[0]; // 8008F550
  c->r[1]=c->r[1]+0x00000120u; // 8008F554
  return; // 8008F558
}

// fn_8008F55C
void f_8008F55C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF91CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F55C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 8008F560
  return; // 8008F564
}

// fn_8008F568
void f_8008F568(Ctx* __restrict c) {
  c->r[3]=0u+0x00000009u; // 8008F568
  return; // 8008F56C
}

// fn_8008F570
void f_8008F570(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000C94u; // 8008F570
  return; // 8008F574
}

// fn_8008F578
void f_8008F578(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000C90u); // 8008F578
  return; // 8008F57C
}

// fn_8008F580
void f_8008F580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008F580
  c->r[0]=c->lr; // 8008F584
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008F588
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8008F58C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8008F590
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008F598
  {uint32_t ea=c->r[13]+0xFFFF8A40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F59C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8008F5A0
  c->lr=0x8008F5A8u; f_800FDAFC(c); // 8008F5A4
  {uint32_t ea=c->r[13]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F5A8
  c->f[31]=c->f[1]; // 8008F5AC
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F5B0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8008F5B4
  c->lr=0x8008F5BCu; f_800FDB64(c); // 8008F5B8
  c->r[31]=0u+0x80370000u; // 8008F5BC
  {uint32_t ea=c->r[13]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F5C0
  c->r[31]=c->r[31]+0x00003BA0u; // 8008F5C4
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F5C8
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[1]);} // 8008F5CC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8008F5D0
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[31]);} // 8008F5D4
  c->lr=0x8008F5DCu; f_800FDAFC(c); // 8008F5D8
  {uint32_t ea=c->r[13]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F5DC
  c->f[31]=c->f[1]; // 8008F5E0
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F5E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8008F5E8
  c->lr=0x8008F5F0u; f_800FDB64(c); // 8008F5EC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[31]);} // 8008F5F0
  c->r[4]=0u+0x80370000u; // 8008F5F4
  {uint32_t ea=c->r[13]+0xFFFFA480u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F5F8
  c->r[3]=c->r[1]+0x00000008u; // 8008F5FC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[1]);} // 8008F600
  c->r[4]=c->r[4]+0x00003BACu; // 8008F604
  c->r[6]=R32(c->r[31]+0x00000000u); // 8008F608
  c->f[1]=c->f[0]; // 8008F60C
  c->r[5]=R32(c->r[31]+0x00000004u); // 8008F610
  c->r[0]=R32(c->r[31]+0x00000008u); // 8008F614
  W32(c->r[1]+0x00000008u,c->r[6]); // 8008F618
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8008F61C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8008F620
  c->lr=0x8008F628u; f_8016482C(c); // 8008F624
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8008F628
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008F62C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8008F630
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008F634
  c->lr=c->r[0]; // 8008F638
  c->r[1]=c->r[1]+0x00000030u; // 8008F63C
  return; // 8008F640
}

// fn_8008F644
void f_8008F644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008F644
  c->r[0]=c->lr; // 8008F648
  W32(c->r[1]+0x00000054u,c->r[0]); // 8008F64C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8008F650
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8008F654
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8008F658
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8008F65C
  c->f[30]=c->f[1]; // 8008F660
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8008F664
  c->r[31]=c->r[5]|c->r[5]; // 8008F668
  W32(c->r[1]+0x00000028u,c->r[30]); // 8008F66C
  c->r[30]=c->r[4]|c->r[4]; // 8008F670
  c->r[4]=c->r[31]|c->r[31]; // 8008F674
  W32(c->r[1]+0x00000024u,c->r[29]); // 8008F678
  c->r[29]=c->r[3]|c->r[3]; // 8008F67C
  c->lr=0x8008F684u; f_801648E8(c); // 8008F680
  {uint32_t ea=c->r[2]+0xFFFF921Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F684
  fcmp(c,0,c->f[1],c->f[2]); // 8008F688
  if (!crb(c,1)) { goto L_8008F6BC; } // 8008F68C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F690
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8008F694
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F698
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 8008F69C
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F6A0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 8008F6A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8008F6A8
  if (!crb(c,2)) { goto L_8008F6B4; } // 8008F6AC
  goto L_8008F734; // 8008F6B0
L_8008F6B4:;
  c->f[1]=-c->f[1]; // 8008F6B4
  goto L_8008F734; // 8008F6B8
L_8008F6BC:;
  {uint32_t ea=c->r[2]+0xFFFF9220u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F6BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8008F6C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8008F6C4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8008F6C8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8008F6CC
  cmps(c,0,(int32_t)c->r[0],0); // 8008F6D0
  if (!crb(c,2)) { goto L_8008F6DC; } // 8008F6D4
  c->f[1]=c->f[2]; // 8008F6D8
L_8008F6DC:;
  {uint32_t ea=c->r[2]+0xFFFF921Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F6DC
  fcmp(c,0,c->f[1],c->f[0]); // 8008F6E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8008F6E4
  if (!crb(c,2)) { goto L_8008F6F4; } // 8008F6E8
  c->f[31]=c->f[1]; // 8008F6EC
  goto L_8008F6F8; // 8008F6F0
L_8008F6F4:;
  c->f[31]=-c->f[1]; // 8008F6F4
L_8008F6F8:;
  c->r[3]=c->r[31]|c->r[31]; // 8008F6F8
  c->r[4]=c->r[1]+0x00000008u; // 8008F6FC
  c->lr=0x8008F704u; f_8016482C(c); // 8008F700
  {uint32_t ea=c->r[2]+0xFFFF9224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F704
  c->r[3]=c->r[1]+0x00000008u; // 8008F708
  c->r[4]=c->r[3]|c->r[3]; // 8008F70C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[30]); // 8008F710
  c->lr=0x8008F718u; f_8016482C(c); // 8008F714
  c->r[3]=c->r[29]|c->r[29]; // 8008F718
  c->r[5]=c->r[30]|c->r[30]; // 8008F71C
  c->r[4]=c->r[1]+0x00000008u; // 8008F720
  c->lr=0x8008F728u; f_80164808(c); // 8008F724
  c->r[3]=c->r[30]|c->r[30]; // 8008F728
  c->lr=0x8008F730u; f_801648A4(c); // 8008F72C
  c->f[1]=c->f[31]; // 8008F730
L_8008F734:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8008F734
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8008F738
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8008F73C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8008F740
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8008F744
  c->r[30]=R32(c->r[1]+0x00000028u); // 8008F748
  c->r[0]=R32(c->r[1]+0x00000054u); // 8008F74C
  c->r[29]=R32(c->r[1]+0x00000024u); // 8008F750
  c->lr=c->r[0]; // 8008F754
  c->r[1]=c->r[1]+0x00000050u; // 8008F758
  return; // 8008F75C
}

// fn_8008F760
void f_8008F760(Ctx* __restrict c) {
  {uint32_t ea=c->r[13]+0xFFFF8A40u; WF32(ea,c->f[1]);} // 8008F760
  return; // 8008F764
}

// fn_8008F768
void f_8008F768(Ctx* __restrict c) {
  {uint32_t ea=c->r[13]+0xFFFFA480u; WF32(ea,c->f[1]);} // 8008F768
  return; // 8008F76C
}

// fn_8008F770
void f_8008F770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008F770
  c->r[0]=c->lr; // 8008F774
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008F778
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8008F77C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8008F780
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008F788
  c->r[31]=c->r[3]|c->r[3]; // 8008F78C
  {uint32_t ea=c->r[13]+0xFFFF8A40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F790
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8008F794
  c->lr=0x8008F79Cu; f_800FDAFC(c); // 8008F798
  {uint32_t ea=c->r[13]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F79C
  c->f[31]=c->f[1]; // 8008F7A0
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F7A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8008F7A8
  c->lr=0x8008F7B0u; f_800FDB64(c); // 8008F7AC
  c->r[4]=0u+0x80370000u; // 8008F7B0
  c->r[4]=c->r[4]+0x00003BA0u; // 8008F7B4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[31]);} // 8008F7B8
  c->r[3]=R32(c->r[4]+0x00000000u); // 8008F7BC
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 8008F7C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 8008F7C4
  W32(c->r[31]+0x00000000u,c->r[3]); // 8008F7C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 8008F7CC
  c->r[0]=R32(c->r[4]+0x00000008u); // 8008F7D0
  W32(c->r[31]+0x00000008u,c->r[0]); // 8008F7D4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8008F7D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8008F7DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008F7E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008F7E4
  c->lr=c->r[0]; // 8008F7E8
  c->r[1]=c->r[1]+0x00000020u; // 8008F7EC
  return; // 8008F7F0
}

// fn_8008F7F4
void f_8008F7F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008F7F4
  c->r[0]=c->lr; // 8008F7F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008F7FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8008F800
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8008F804
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F808
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008F80C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8008F810
  c->r[30]=c->r[3]|c->r[3]; // 8008F814
  {uint32_t ea=c->r[13]+0xFFFF8A40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F818
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8008F81C
  c->lr=0x8008F824u; f_800FDAFC(c); // 8008F820
  {uint32_t ea=c->r[13]+0xFFFF8A40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F824
  c->f[31]=c->f[1]; // 8008F828
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F82C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 8008F830
  c->lr=0x8008F838u; f_800FDB64(c); // 8008F834
  c->r[5]=0u+0x80370000u; // 8008F838
  c->r[31]=0u+0x80370000u; // 8008F83C
  c->r[5]=c->r[5]+0x00003BA0u; // 8008F840
  {uint32_t ea=c->r[13]+0xFFFFA480u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F844
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 8008F848
  c->r[3]=c->r[1]+0x00000008u; // 8008F84C
  c->r[6]=R32(c->r[5]+0x00000000u); // 8008F850
  c->f[1]=c->f[0]; // 8008F854
  c->r[0]=R32(c->r[5]+0x00000008u); // 8008F858
  c->r[4]=c->r[31]+0x00003BACu; // 8008F85C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[31]);} // 8008F860
  c->r[5]=R32(c->r[5]+0x00000004u); // 8008F864
  W32(c->r[1]+0x00000008u,c->r[6]); // 8008F868
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8008F86C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8008F870
  c->lr=0x8008F878u; f_8016482C(c); // 8008F874
  c->r[4]=c->r[31]+0x00003BACu; // 8008F878
  c->r[3]=R32(c->r[4]+0x00000000u); // 8008F87C
  c->r[0]=R32(c->r[4]+0x00000004u); // 8008F880
  W32(c->r[30]+0x00000000u,c->r[3]); // 8008F884
  W32(c->r[30]+0x00000004u,c->r[0]); // 8008F888
  c->r[0]=R32(c->r[4]+0x00000008u); // 8008F88C
  W32(c->r[30]+0x00000008u,c->r[0]); // 8008F890
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8008F894
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8008F898
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008F89C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8008F8A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008F8A4
  c->lr=c->r[0]; // 8008F8A8
  c->r[1]=c->r[1]+0x00000030u; // 8008F8AC
  return; // 8008F8B0
}

// fn_8008F8B4
void f_8008F8B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008F8B4
  c->r[0]=c->lr; // 8008F8B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8008F8BC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8008F8C0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8008F8C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8008F8C8
  c->r[31]=c->r[4]|c->r[4]; // 8008F8CC
  W32(c->r[1]+0x00000038u,c->r[30]); // 8008F8D0
  c->r[30]=c->r[3]|c->r[3]; // 8008F8D4
  c->r[3]=c->r[31]|c->r[31]; // 8008F8D8
  c->lr=0x8008F8E0u; f_801648A4(c); // 8008F8DC
  {uint32_t ea=c->r[2]+0xFFFF921Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F8E0
  fcmp(c,0,c->f[1],c->f[0]); // 8008F8E4
  if (!crb(c,1)) { goto L_8008F934; } // 8008F8E8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 8008F8EC
  {uint32_t ea=c->r[13]+0xFFFF8A44u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F8F0
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[2]); // 8008F8F4
  fcmp(c,0,c->f[31],c->f[1]); // 8008F8F8
  if (!crb(c,1)) { goto L_8008F904; } // 8008F8FC
  c->f[31]=c->f[1]; // 8008F900
L_8008F904:;
  {uint32_t ea=c->r[2]+0xFFFF9228u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F904
  c->r[3]=c->r[31]|c->r[31]; // 8008F908
  c->r[4]=c->r[1]+0x00000020u; // 8008F90C
  c->lr=0x8008F914u; f_8016482C(c); // 8008F910
  c->r[3]=c->r[1]+0x00000020u; // 8008F914
  c->r[4]=c->r[3]|c->r[3]; // 8008F918
  c->lr=0x8008F920u; f_80164848(c); // 8008F91C
  c->f[1]=c->f[31]; // 8008F920
  c->r[3]=c->r[1]+0x00000020u; // 8008F924
  c->r[4]=c->r[3]|c->r[3]; // 8008F928
  c->lr=0x8008F930u; f_8016482C(c); // 8008F92C
  goto L_8008F970; // 8008F930
L_8008F934:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8008F934
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8008F938
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008F93C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8008F940
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8008F944
  c->r[0]=R32(c->r[1]+0x00000010u); // 8008F948
  W32(c->r[1]+0x00000014u,c->r[4]); // 8008F94C
  W32(c->r[1]+0x00000018u,c->r[3]); // 8008F950
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008F954
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8008F958
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008F95C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F960
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 8008F964
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8008F968
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8008F96C
L_8008F970:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F970
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8008F974
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F978
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 8008F97C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F980
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 8008F984
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8008F988
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8008F98C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8008F990
  c->r[30]=R32(c->r[1]+0x00000038u); // 8008F994
  c->r[0]=R32(c->r[1]+0x00000054u); // 8008F998
  c->lr=c->r[0]; // 8008F99C
  c->r[1]=c->r[1]+0x00000050u; // 8008F9A0
  return; // 8008F9A4
}

// fn_8008F9A8
void f_8008F9A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008F9A8
  c->r[0]=c->lr; // 8008F9AC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8008F9B0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 8008F9B4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 8008F9B8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 8008F9BC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 8008F9C0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 8008F9C4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 8008F9C8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 8008F9CC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 8008F9D0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[27]);} // 8008F9D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,27,ea,0,0);} // 8008F9D8
  c->r[11]=c->r[1]+0x00000050u; // 8008F9DC
  c->lr=0x8008F9E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8008F9E0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 8008F9E4
  {uint32_t ea=c->r[2]+0xFFFF9224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008F9E8
  c->r[29]=c->r[5]|c->r[5]; // 8008F9EC
  c->r[27]=c->r[3]|c->r[3]; // 8008F9F0
  c->r[28]=c->r[4]|c->r[4]; // 8008F9F4
  c->f[27]=c->f[1]; // 8008F9F8
  c->f[28]=c->f[2]; // 8008F9FC
  c->r[30]=c->r[6]|c->r[6]; // 8008FA00
  c->f[29]=c->f[5]; // 8008FA04
  c->r[31]=c->r[7]|c->r[7]; // 8008FA08
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[2]); // 8008FA0C
  c->r[3]=c->r[29]|c->r[29]; // 8008FA10
  c->f[30]=c->ps1[30]=S(c->f[0]+c->f[3]); // 8008FA14
  c->r[4]=c->r[27]|c->r[27]; // 8008FA18
  c->r[5]=c->r[1]+0x00000020u; // 8008FA1C
  c->lr=0x8008FA24u; f_80164808(c); // 8008FA20
  c->r[3]=c->r[1]+0x00000020u; // 8008FA24
  c->lr=0x8008FA2Cu; f_801648A4(c); // 8008FA28
  {uint32_t ea=c->r[2]+0xFFFF921Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FA2C
  fcmp(c,0,c->f[1],c->f[0]); // 8008FA30
  if (!crb(c,1)) { goto L_8008FA44; } // 8008FA34
  c->r[3]=c->r[1]+0x00000020u; // 8008FA38
  c->r[4]=c->r[3]|c->r[3]; // 8008FA3C
  c->lr=0x8008FA44u; f_80164848(c); // 8008FA40
L_8008FA44:;
  c->r[3]=c->r[28]|c->r[28]; // 8008FA44
  c->r[4]=c->r[30]|c->r[30]; // 8008FA48
  c->r[5]=c->r[1]+0x00000014u; // 8008FA4C
  c->lr=0x8008FA54u; f_80164808(c); // 8008FA50
  c->r[3]=c->r[1]+0x00000014u; // 8008FA54
  c->r[4]=c->r[1]+0x00000020u; // 8008FA58
  c->lr=0x8008FA60u; f_801648E8(c); // 8008FA5C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 8008FA60
  c->r[3]=c->r[1]+0x00000020u; // 8008FA64
  c->r[4]=c->r[1]+0x00000008u; // 8008FA68
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 8008FA6C
  c->lr=0x8008FA74u; f_8016482C(c); // 8008FA70
  c->f[1]=-c->f[28]; // 8008FA74
  c->r[3]=c->r[1]+0x00000008u; // 8008FA78
  c->r[4]=c->r[31]+0x00000018u; // 8008FA7C
  c->lr=0x8008FA84u; f_8016482C(c); // 8008FA80
  c->r[3]=c->r[31]+0x00000018u; // 8008FA84
  c->r[4]=c->r[28]|c->r[28]; // 8008FA88
  c->r[5]=c->r[3]|c->r[3]; // 8008FA8C
  c->lr=0x8008FA94u; f_801647E4(c); // 8008FA90
  c->f[1]=c->f[27]; // 8008FA94
  c->r[3]=c->r[1]+0x00000008u; // 8008FA98
  c->r[4]=c->r[31]+0x00000024u; // 8008FA9C
  c->lr=0x8008FAA4u; f_8016482C(c); // 8008FAA0
  c->r[3]=c->r[31]+0x00000024u; // 8008FAA4
  c->r[4]=c->r[30]|c->r[30]; // 8008FAA8
  c->r[5]=c->r[3]|c->r[3]; // 8008FAAC
  c->lr=0x8008FAB4u; f_801647E4(c); // 8008FAB0
  c->f[1]=c->f[29]; // 8008FAB4
  c->r[3]=c->r[31]+0x00000018u; // 8008FAB8
  c->r[4]=c->r[1]+0x00000014u; // 8008FABC
  c->lr=0x8008FAC4u; f_8016482C(c); // 8008FAC0
  c->r[3]=c->r[27]|c->r[27]; // 8008FAC4
  c->r[5]=c->r[31]|c->r[31]; // 8008FAC8
  c->r[4]=c->r[1]+0x00000014u; // 8008FACC
  c->lr=0x8008FAD4u; f_801647E4(c); // 8008FAD0
  c->f[1]=c->f[29]; // 8008FAD4
  c->r[3]=c->r[31]+0x00000024u; // 8008FAD8
  c->r[4]=c->r[1]+0x00000014u; // 8008FADC
  c->lr=0x8008FAE4u; f_8016482C(c); // 8008FAE0
  c->r[3]=c->r[29]|c->r[29]; // 8008FAE4
  c->r[4]=c->r[1]+0x00000014u; // 8008FAE8
  c->r[5]=c->r[31]+0x0000000Cu; // 8008FAEC
  c->lr=0x8008FAF4u; f_801647E4(c); // 8008FAF0
  c->r[3]=0u+0x00000001u; // 8008FAF4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 8008FAF8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 8008FAFC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 8008FB00
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 8008FB04
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 8008FB08
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 8008FB0C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 8008FB10
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 8008FB14
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,27,ea,0,0);} // 8008FB18
  {uint32_t ea=c->r[1]+0x00000050u; c->f[27]=RF64(ea);} // 8008FB1C
  c->r[11]=c->r[1]+0x00000050u; // 8008FB20
  c->lr=0x8008FB28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008FB24
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8008FB28
  c->lr=c->r[0]; // 8008FB2C
  c->r[1]=c->r[1]+0x000000A0u; // 8008FB30
  return; // 8008FB34
}

// fn_8008FB38
void f_8008FB38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008FB38
  c->r[0]=c->lr; // 8008FB3C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8008FB40
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8008FB44
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8008FB48
  c->f[31]=c->f[1]; // 8008FB4C
  {uint32_t ea=c->r[2]+0xFFFF921Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FB50
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8008FB54
  c->r[31]=c->r[3]|c->r[3]; // 8008FB58
  fcmp(c,0,c->f[1],c->f[0]); // 8008FB5C
  if (!crb(c,0)) { goto L_8008FB8C; } // 8008FB60
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8008FB64
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8008FB68
  c->r[5]=R32(c->r[1]+0x00000014u); // 8008FB6C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8008FB70
  c->r[4]=R32(c->r[1]+0x00000018u); // 8008FB74
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8008FB78
  W32(c->r[3]+0x00000000u,c->r[5]); // 8008FB7C
  W32(c->r[3]+0x00000004u,c->r[4]); // 8008FB80
  W32(c->r[3]+0x00000008u,c->r[0]); // 8008FB84
  goto L_8008FC30; // 8008FB88
L_8008FB8C:;
  c->r[3]=c->r[5]|c->r[5]; // 8008FB8C
  c->r[5]=c->r[1]+0x00000020u; // 8008FB90
  c->lr=0x8008FB98u; f_80164808(c); // 8008FB94
  c->r[3]=c->r[1]+0x00000020u; // 8008FB98
  c->lr=0x8008FBA0u; f_801648A4(c); // 8008FB9C
  {uint32_t ea=c->r[2]+0xFFFF9220u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FBA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8008FBA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8008FBA8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8008FBAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008FBB0
  cmps(c,0,(int32_t)c->r[0],0); // 8008FBB4
  if (!crb(c,2)) { goto L_8008FBE8; } // 8008FBB8
  {uint32_t ea=c->r[2]+0xFFFF921Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FBBC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8008FBC0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8008FBC4
  c->r[4]=R32(c->r[1]+0x00000008u); // 8008FBC8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8008FBCC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8008FBD0
  c->r[0]=R32(c->r[1]+0x00000010u); // 8008FBD4
  W32(c->r[31]+0x00000000u,c->r[4]); // 8008FBD8
  W32(c->r[31]+0x00000004u,c->r[3]); // 8008FBDC
  W32(c->r[31]+0x00000008u,c->r[0]); // 8008FBE0
  goto L_8008FC30; // 8008FBE4
L_8008FBE8:;
  {uint32_t ea=c->r[2]+0xFFFF922Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8008FBE8
  c->r[3]=c->r[1]+0x00000020u; // 8008FBEC
  {uint32_t ea=c->r[2]+0xFFFF9224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FBF0
  c->r[4]=c->r[3]|c->r[3]; // 8008FBF4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8008FBF8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 8008FBFC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8008FC00
  c->lr=0x8008FC08u; f_80164848(c); // 8008FC04
  c->f[1]=c->f[31]; // 8008FC08
  c->r[3]=c->r[1]+0x00000020u; // 8008FC0C
  c->r[4]=c->r[3]|c->r[3]; // 8008FC10
  c->lr=0x8008FC18u; f_8016482C(c); // 8008FC14
  c->r[3]=R32(c->r[1]+0x00000020u); // 8008FC18
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008FC1C
  W32(c->r[31]+0x00000000u,c->r[3]); // 8008FC20
  W32(c->r[31]+0x00000004u,c->r[0]); // 8008FC24
  c->r[0]=R32(c->r[1]+0x00000028u); // 8008FC28
  W32(c->r[31]+0x00000008u,c->r[0]); // 8008FC2C
L_8008FC30:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8008FC30
  c->r[0]=R32(c->r[1]+0x00000054u); // 8008FC34
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8008FC38
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8008FC3C
  c->lr=c->r[0]; // 8008FC40
  c->r[1]=c->r[1]+0x00000050u; // 8008FC44
  return; // 8008FC48
}

// fn_8008FC4C
void f_8008FC4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008FC4C
  c->r[0]=c->lr; // 8008FC50
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8008FC54
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 8008FC58
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 8008FC5C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 8008FC60
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 8008FC64
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 8008FC68
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 8008FC6C
  c->r[11]=c->r[1]+0x00000070u; // 8008FC70
  c->lr=0x8008FC78u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8008FC74
  c->r[8]=R32(c->r[6]+0x00000000u); // 8008FC78
  c->r[29]=c->r[5]|c->r[5]; // 8008FC7C
  c->r[0]=R32(c->r[6]+0x00000004u); // 8008FC80
  c->r[28]=c->r[4]|c->r[4]; // 8008FC84
  c->r[27]=c->r[3]|c->r[3]; // 8008FC88
  c->r[30]=c->r[6]|c->r[6]; // 8008FC8C
  W32(c->r[1]+0x00000044u,c->r[8]); // 8008FC90
  c->f[29]=c->f[1]; // 8008FC94
  c->f[30]=c->f[2]; // 8008FC98
  c->r[31]=c->r[7]|c->r[7]; // 8008FC9C
  W32(c->r[1]+0x00000048u,c->r[0]); // 8008FCA0
  c->r[3]=c->r[28]|c->r[28]; // 8008FCA4
  c->r[4]=c->r[29]|c->r[29]; // 8008FCA8
  c->r[0]=R32(c->r[6]+0x00000008u); // 8008FCAC
  c->r[5]=c->r[1]+0x00000008u; // 8008FCB0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8008FCB4
  c->r[6]=R32(c->r[7]+0x00000000u); // 8008FCB8
  c->r[0]=R32(c->r[7]+0x00000004u); // 8008FCBC
  W32(c->r[1]+0x00000038u,c->r[6]); // 8008FCC0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8008FCC4
  c->r[0]=R32(c->r[7]+0x00000008u); // 8008FCC8
  W32(c->r[1]+0x00000040u,c->r[0]); // 8008FCCC
  c->lr=0x8008FCD4u; f_80164808(c); // 8008FCD0
  c->r[3]=c->r[1]+0x00000008u; // 8008FCD4
  c->lr=0x8008FCDCu; f_801648A4(c); // 8008FCD8
  {uint32_t ea=c->r[2]+0xFFFF9220u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FCDC
  c->r[0]=0u+0x00000000u; // 8008FCE0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8008FCE4
  c->f[31]=c->f[1]; // 8008FCE8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8008FCEC
  W32(c->r[1]+0x00000030u,c->r[0]); // 8008FCF0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8008FCF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008FCF8
  c->r[0]=R32(c->r[28]+0x00000000u); // 8008FCFC
  c->r[3]=R32(c->r[28]+0x00000004u); // 8008FD00
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 8008FD04
  W32(c->r[1]+0x00000020u,c->r[0]); // 8008FD08
  c->r[0]=R32(c->r[1]+0x00000054u); // 8008FD0C
  W32(c->r[1]+0x00000024u,c->r[3]); // 8008FD10
  cmps(c,0,(int32_t)c->r[0],0); // 8008FD14
  c->r[0]=R32(c->r[28]+0x00000008u); // 8008FD18
  W32(c->r[1]+0x00000028u,c->r[0]); // 8008FD1C
  c->r[3]=R32(c->r[29]+0x00000000u); // 8008FD20
  c->r[0]=R32(c->r[29]+0x00000004u); // 8008FD24
  W32(c->r[1]+0x00000014u,c->r[3]); // 8008FD28
  W32(c->r[1]+0x00000018u,c->r[0]); // 8008FD2C
  c->r[0]=R32(c->r[29]+0x00000008u); // 8008FD30
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8008FD34
  if (!crb(c,2)) { goto L_8008FD7C; } // 8008FD38
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008FD3C
  c->r[3]=c->r[28]|c->r[28]; // 8008FD40
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FD44
  c->r[5]=c->r[28]|c->r[28]; // 8008FD48
  c->r[4]=c->r[1]+0x0000002Cu; // 8008FD4C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8008FD50
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8008FD54
  c->lr=0x8008FD5Cu; f_801647E4(c); // 8008FD58
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008FD5C
  c->r[3]=c->r[29]|c->r[29]; // 8008FD60
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FD64
  c->r[5]=c->r[29]|c->r[29]; // 8008FD68
  c->r[4]=c->r[1]+0x0000002Cu; // 8008FD6C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8008FD70
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8008FD74
  c->lr=0x8008FD7Cu; f_801647E4(c); // 8008FD78
L_8008FD7C:;
  c->f[1]=c->ps1[1]=S(c->f[29]+c->f[30]); // 8008FD7C
  {uint32_t ea=c->r[2]+0xFFFF9234u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FD80
  c->r[3]=c->r[28]|c->r[28]; // 8008FD84
  c->r[4]=c->r[29]|c->r[29]; // 8008FD88
  c->r[5]=c->r[1]+0x0000002Cu; // 8008FD8C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8008FD90
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 8008FD94
  c->lr=0x8008FD9Cu; f_80164808(c); // 8008FD98
  c->r[3]=c->r[1]+0x0000002Cu; // 8008FD9C
  c->r[4]=c->r[3]|c->r[3]; // 8008FDA0
  c->lr=0x8008FDA8u; f_80164848(c); // 8008FDA4
  c->f[1]=c->f[31]; // 8008FDA8
  c->r[3]=c->r[1]+0x0000002Cu; // 8008FDAC
  c->r[4]=c->r[1]+0x00000044u; // 8008FDB0
  c->lr=0x8008FDB8u; f_8016482C(c); // 8008FDB4
  c->f[1]=-c->f[31]; // 8008FDB8
  c->r[3]=c->r[1]+0x0000002Cu; // 8008FDBC
  c->r[4]=c->r[1]+0x00000038u; // 8008FDC0
  c->lr=0x8008FDC8u; f_8016482C(c); // 8008FDC4
  c->r[3]=c->r[1]+0x00000020u; // 8008FDC8
  c->r[4]=c->r[1]+0x00000044u; // 8008FDCC
  c->r[5]=c->r[3]|c->r[3]; // 8008FDD0
  c->lr=0x8008FDD8u; f_801647E4(c); // 8008FDD4
  c->r[3]=c->r[1]+0x00000014u; // 8008FDD8
  c->r[4]=c->r[1]+0x00000038u; // 8008FDDC
  c->r[5]=c->r[3]|c->r[3]; // 8008FDE0
  c->lr=0x8008FDE8u; f_801647E4(c); // 8008FDE4
  c->r[4]=c->r[1]+0x00000044u; // 8008FDE8
  c->r[3]=c->r[30]|c->r[30]; // 8008FDEC
  c->r[5]=c->r[4]|c->r[4]; // 8008FDF0
  c->lr=0x8008FDF8u; f_801647E4(c); // 8008FDF4
  c->r[4]=c->r[1]+0x00000038u; // 8008FDF8
  c->r[3]=c->r[31]|c->r[31]; // 8008FDFC
  c->r[5]=c->r[4]|c->r[4]; // 8008FE00
  c->lr=0x8008FE08u; f_801647E4(c); // 8008FE04
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE08
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 8008FE0C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE10
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 8008FE14
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE18
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 8008FE1C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE20
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 8008FE24
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE28
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[0]);} // 8008FE2C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE30
  {uint32_t ea=c->r[27]+0x00000014u; WF32(ea,c->f[0]);} // 8008FE34
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE38
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[0]);} // 8008FE3C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE40
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[0]);} // 8008FE44
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE48
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[0]);} // 8008FE4C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE50
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[0]);} // 8008FE54
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE58
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[0]);} // 8008FE5C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FE60
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[0]);} // 8008FE64
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 8008FE68
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 8008FE6C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 8008FE70
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 8008FE74
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 8008FE78
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 8008FE7C
  c->r[11]=c->r[1]+0x00000070u; // 8008FE80
  c->lr=0x8008FE88u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8008FE84
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8008FE88
  c->lr=c->r[0]; // 8008FE8C
  c->r[1]=c->r[1]+0x000000A0u; // 8008FE90
  return; // 8008FE94
}

// fn_8008FE98
void f_8008FE98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008FE98
  c->r[0]=c->lr; // 8008FE9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008FEA0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8008FEA4
  W32(c->r[1]+0x00000028u,c->r[30]); // 8008FEA8
  W32(c->r[1]+0x00000024u,c->r[29]); // 8008FEAC
  c->r[29]=c->r[3]|c->r[3]; // 8008FEB0
  c->r[30]=R32(c->r[3]+0x00000004u); // 8008FEB4
  c->r[31]=R32(c->r[3]+0x00000000u); // 8008FEB8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008FEBC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FEC0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008FEC4
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[0]); // 8008FEC8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FECC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008FED0
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 8008FED4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FED8
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[6]); // 8008FEDC
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8008FEE0
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008FEE4
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 8008FEE8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FEEC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[4]); // 8008FEF0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 8008FEF4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8008FEF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 8008FEFC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 8008FF00
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8008FF04
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 8008FF08
  fcmp(c,0,c->f[1],c->f[0]); // 8008FF0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8008FF10
  if (!crb(c,2)) { goto L_8008FF64; } // 8008FF14
  c->lr=0x8008FF1Cu; f_80262DFC(c); // 8008FF18
  c->r[3]=c->r[31]|c->r[31]; // 8008FF1C
  c->r[4]=c->r[30]|c->r[30]; // 8008FF20
  c->r[5]=c->r[1]+0x00000008u; // 8008FF24
  c->lr=0x8008FF2Cu; f_80164808(c); // 8008FF28
  c->r[3]=c->r[1]+0x00000008u; // 8008FF2C
  c->r[4]=c->r[3]|c->r[3]; // 8008FF30
  c->lr=0x8008FF38u; f_80164848(c); // 8008FF34
  c->r[5]=R32(c->r[29]+0x00000008u); // 8008FF38
  c->r[3]=c->r[1]+0x00000008u; // 8008FF3C
  c->r[4]=c->r[3]|c->r[3]; // 8008FF40
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008FF44
  c->lr=0x8008FF4Cu; f_8016482C(c); // 8008FF48
  c->r[3]=R32(c->r[29]+0x00000004u); // 8008FF4C
  c->r[4]=c->r[1]+0x00000008u; // 8008FF50
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 8008FF54
  c->lr=0x8008FF5Cu; f_801647E4(c); // 8008FF58
  c->r[3]=0u+0x00000001u; // 8008FF5C
  goto L_8008FF68; // 8008FF60
L_8008FF64:;
  c->r[3]=0u+0x00000000u; // 8008FF64
L_8008FF68:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8008FF68
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8008FF6C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8008FF70
  c->r[29]=R32(c->r[1]+0x00000024u); // 8008FF74
  c->lr=c->r[0]; // 8008FF78
  c->r[1]=c->r[1]+0x00000030u; // 8008FF7C
  return; // 8008FF80
}

// fn_8008FF84
void f_8008FF84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8008FF84
  c->r[0]=c->lr; // 8008FF88
  W32(c->r[1]+0x00000044u,c->r[0]); // 8008FF8C
  c->r[5]=c->r[1]+0x00000020u; // 8008FF90
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8008FF94
  c->r[31]=c->r[3]|c->r[3]; // 8008FF98
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 8008FF9C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FFA0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8008FFA4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FFA8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8008FFAC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FFB0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8008FFB4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8008FFB8
  c->r[4]=R32(c->r[31]+0x00000004u); // 8008FFBC
  c->lr=0x8008FFC4u; f_80164808(c); // 8008FFC0
  c->r[3]=c->r[1]+0x0000002Cu; // 8008FFC4
  c->r[4]=c->r[1]+0x00000020u; // 8008FFC8
  c->lr=0x8008FFD0u; f_801648E8(c); // 8008FFCC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FFD0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 8008FFD4
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[0]); // 8008FFD8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8008FFDC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FFE0
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[3]); // 8008FFE4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[2]); // 8008FFE8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[7]=c->ps1[7]=RF32(ea);} // 8008FFEC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 8008FFF0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 8008FFF4
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008FFF8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[7]); // 8008FFFC
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 80090000
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80090004
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[4]); // 80090008
  fcmp(c,0,c->f[1],c->f[0]); // 8009000C
  c->f[3]=c->ps1[3]=S(c->f[7]+c->f[5]); // 80090010
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 80090014
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80090018
  if (!crb(c,2)) { goto L_800900F8; } // 8009001C
  fcmp(c,0,c->f[1],c->f[3]); // 80090020
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80090024
  if (!crb(c,2)) { goto L_800900F8; } // 80090028
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 8009002C
  c->r[3]=R32(c->r[31]+0x00000010u); // 80090030
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090034
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 80090038
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009003C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80090040
  fcmp(c,0,c->f[1],c->f[0]); // 80090044
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80090048
  if (!crb(c,2)) { goto L_800900F8; } // 8009004C
  c->r[3]=c->r[1]+0x0000002Cu; // 80090050
  c->r[4]=c->r[1]+0x00000014u; // 80090054
  c->lr=0x8009005Cu; f_80164848(c); // 80090058
  c->r[3]=c->r[1]+0x00000014u; // 8009005C
  c->r[4]=c->r[1]+0x00000020u; // 80090060
  c->lr=0x80090068u; f_801648E8(c); // 80090064
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090068
  c->r[4]=c->r[1]+0x00000008u; // 8009006C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80090070
  c->r[5]=c->r[1]+0x00000014u; // 80090074
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 80090078
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009007C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80090080
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090084
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 80090088
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 8009008C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80090090
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80090094
  c->r[3]=R32(c->r[31]+0x00000004u); // 80090098
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009009C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800900A0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800900A4
  c->r[3]=R32(c->r[31]+0x00000004u); // 800900A8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800900AC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800900B0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800900B4
  c->r[3]=R32(c->r[31]+0x00000000u); // 800900B8
  c->lr=0x800900C0u; f_80164808(c); // 800900BC
  c->r[3]=c->r[1]+0x00000014u; // 800900C0
  c->r[4]=c->r[3]|c->r[3]; // 800900C4
  c->lr=0x800900CCu; f_80164848(c); // 800900C8
  c->r[5]=R32(c->r[31]+0x00000010u); // 800900CC
  c->r[3]=c->r[1]+0x00000014u; // 800900D0
  c->r[4]=c->r[3]|c->r[3]; // 800900D4
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800900D8
  c->lr=0x800900E0u; f_8016482C(c); // 800900DC
  c->r[5]=R32(c->r[31]+0x00000014u); // 800900E0
  c->r[3]=c->r[1]+0x00000008u; // 800900E4
  c->r[4]=c->r[1]+0x00000014u; // 800900E8
  c->lr=0x800900F0u; f_801647E4(c); // 800900EC
  c->r[3]=0u+0x00000001u; // 800900F0
  goto L_800900FC; // 800900F4
L_800900F8:;
  c->r[3]=0u+0x00000000u; // 800900F8
L_800900FC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800900FC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80090100
  c->lr=c->r[0]; // 80090104
  c->r[1]=c->r[1]+0x00000040u; // 80090108
  return; // 8009010C
}

// fn_80090110
void f_80090110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80090110
  c->r[0]=c->lr; // 80090114
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80090118
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 8009011C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 80090120
  c->r[5]=c->r[1]+0x0000002Cu; // 80090124
  W32(c->r[1]+0x000000DCu,c->r[31]); // 80090128
  W32(c->r[1]+0x000000D8u,c->r[30]); // 8009012C
  W32(c->r[1]+0x000000D4u,c->r[29]); // 80090130
  W32(c->r[1]+0x000000D0u,c->r[28]); // 80090134
  c->r[28]=c->r[3]|c->r[3]; // 80090138
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009013C
  c->r[4]=R32(c->r[28]+0x00000000u); // 80090140
  c->lr=0x80090148u; f_80164808(c); // 80090144
  c->r[3]=R32(c->r[28]+0x00000004u); // 80090148
  c->r[5]=c->r[1]+0x000000A8u; // 8009014C
  c->r[4]=R32(c->r[28]+0x00000000u); // 80090150
  c->lr=0x80090158u; f_80164808(c); // 80090154
  c->r[3]=R32(c->r[28]+0x00000008u); // 80090158
  c->r[5]=c->r[1]+0x000000B4u; // 8009015C
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80090160
  c->lr=0x80090168u; f_80164808(c); // 80090164
  c->r[3]=R32(c->r[28]+0x00000008u); // 80090168
  c->r[5]=c->r[1]+0x000000C0u; // 8009016C
  c->r[4]=R32(c->r[28]+0x00000010u); // 80090170
  c->lr=0x80090178u; f_80164808(c); // 80090174
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[11]=c->ps1[11]=RF32(ea);} // 80090178
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[7]=c->ps1[7]=RF32(ea);} // 8009017C
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[9]=c->ps1[9]=RF32(ea);} // 80090180
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[8]=c->ps1[8]=RF32(ea);} // 80090184
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[7]); // 80090188
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[10]=c->ps1[10]=RF32(ea);} // 8009018C
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[7]); // 80090190
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[6]=c->ps1[6]=RF32(ea);} // 80090194
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[8]); // 80090198
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009019C
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[6]); // 800901A0
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[13]=c->ps1[13]=RF32(ea);} // 800901A4
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[6]); // 800901A8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[12]=c->ps1[12]=RF32(ea);} // 800901AC
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[8]); // 800901B0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[31]);} // 800901B4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800901B8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[13]);} // 800901BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800901C0
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[0]=c->ps1[0]=RF32(ea);} // 800901C4
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 800901C8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[12]);} // 800901CC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800901D0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[11]);} // 800901D4
  c->f[1]=c->ps1[1]=S(c->f[13]*c->f[1]); // 800901D8
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[3]); // 800901DC
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[10]);} // 800901E0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800901E4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[9]);} // 800901E8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[8]);} // 800901EC
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[1]); // 800901F0
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[7]);} // 800901F4
  fcmp(c,0,c->f[0],c->f[31]); // 800901F8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[6]);} // 800901FC
  if (!crb(c,2)) { goto L_8009020C; } // 80090200
  c->r[3]=0u+0x00000000u; // 80090204
  goto L_800903FC; // 80090208
L_8009020C:;
  c->r[31]=c->r[1]+0x00000048u; // 8009020C
  c->r[30]=c->r[1]+0x00000038u; // 80090210
  c->r[29]=0u+0x00000000u; // 80090214
L_80090218:;
  c->r[3]=c->r[1]+0x00000078u; // 80090218
  c->r[4]=c->r[1]+0x00000048u; // 8009021C
  c->lr=0x80090224u; f_80163864(c); // 80090220
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090224
  c->r[29]=c->r[29]+0x00000001u; // 80090228
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009022C
  cmps(c,0,(int32_t)c->r[29],3); // 80090230
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80090234
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090238
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 8009023C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80090240
  c->r[31]=c->r[31]+0x00000004u; // 80090244
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090248
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8009024C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090250
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80090254
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[4]); // 80090258
  {uint32_t ea=c->r[1]+0x00000068u; c->f[7]=c->ps1[7]=RF32(ea);} // 8009025C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 80090260
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090264
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[1]); // 80090268
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[7]); // 8009026C
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 80090270
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 80090274
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[7]); // 80090278
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009027C
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[6]); // 80090280
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 80090284
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80090288
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 8009028C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 80090290
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80090294
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 80090298
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8009029C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800902A0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 800902A4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 800902A8
  c->r[30]=c->r[30]+0x00000004u; // 800902AC
  if (crb(c,0)) { IRQCHK(c); goto L_80090218; } // 800902B0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 800902B4
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[3]=c->ps1[3]=RF32(ea);} // 800902B8
  fcmp(c,0,c->f[4],c->f[3]); // 800902BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800902C0
  if (!crb(c,2)) { goto L_800903F8; } // 800902C4
  {uint32_t ea=c->r[2]+0xFFFF923Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800902C8
  fcmp(c,0,c->f[4],c->f[2]); // 800902CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800902D0
  if (!crb(c,2)) { goto L_800903F8; } // 800902D4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800902D8
  fcmp(c,0,c->f[1],c->f[3]); // 800902DC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800902E0
  if (!crb(c,2)) { goto L_800903F8; } // 800902E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800902E8
  fcmp(c,0,c->f[0],c->f[3]); // 800902EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800902F0
  if (!crb(c,2)) { goto L_800903F8; } // 800902F4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800902F8
  fcmp(c,0,c->f[0],c->f[2]); // 800902FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80090300
  if (!crb(c,2)) { goto L_800903F8; } // 80090304
  c->r[7]=R32(c->r[28]+0x00000000u); // 80090308
  c->r[3]=c->r[1]+0x000000B4u; // 8009030C
  c->r[6]=R32(c->r[28]+0x00000014u); // 80090310
  c->r[4]=c->r[1]+0x000000C0u; // 80090314
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090318
  c->r[5]=c->r[1]+0x00000020u; // 8009031C
  {uint32_t ea=c->r[7]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090320
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80090324
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 80090328
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009032C
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80090330
  c->r[7]=R32(c->r[28]+0x00000000u); // 80090334
  c->r[6]=R32(c->r[28]+0x00000014u); // 80090338
  {uint32_t ea=c->r[7]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009033C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090340
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80090344
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 80090348
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009034C
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 80090350
  c->r[7]=R32(c->r[28]+0x00000000u); // 80090354
  c->r[6]=R32(c->r[28]+0x00000014u); // 80090358
  {uint32_t ea=c->r[7]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009035C
  {uint32_t ea=c->r[7]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090360
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80090364
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 80090368
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009036C
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 80090370
  c->lr=0x80090378u; f_80164908(c); // 80090374
  c->r[3]=c->r[1]+0x00000020u; // 80090378
  c->r[4]=c->r[1]+0x000000A8u; // 8009037C
  c->lr=0x80090384u; f_801648E8(c); // 80090380
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090384
  fcmp(c,0,c->f[1],c->f[0]); // 80090388
  if (!crb(c,1)) { goto L_800903A0; } // 8009038C
  c->r[3]=c->r[1]+0x00000020u; // 80090390
  {uint32_t ea=c->r[2]+0xFFFF9240u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090394
  c->r[4]=c->r[3]|c->r[3]; // 80090398
  c->lr=0x800903A0u; f_8016482C(c); // 8009039C
L_800903A0:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 800903A0
  c->r[5]=c->r[1]+0x00000014u; // 800903A4
  c->r[4]=R32(c->r[28]+0x00000014u); // 800903A8
  c->lr=0x800903B0u; f_80164808(c); // 800903AC
  c->r[3]=c->r[1]+0x00000020u; // 800903B0
  c->r[4]=c->r[1]+0x00000008u; // 800903B4
  c->lr=0x800903BCu; f_80164848(c); // 800903B8
  c->r[3]=c->r[1]+0x00000008u; // 800903BC
  c->r[4]=c->r[1]+0x00000014u; // 800903C0
  c->lr=0x800903C8u; f_801648E8(c); // 800903C4
  c->f[1]=-c->f[1]; // 800903C8
  {uint32_t ea=c->r[2]+0xFFFF9244u; c->f[0]=c->ps1[0]=RF32(ea);} // 800903CC
  c->r[4]=R32(c->r[28]+0x00000018u); // 800903D0
  c->r[3]=c->r[1]+0x00000008u; // 800903D4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800903D8
  c->lr=0x800903E0u; f_8016482C(c); // 800903DC
  c->r[3]=R32(c->r[28]+0x00000018u); // 800903E0
  c->r[4]=R32(c->r[28]+0x00000004u); // 800903E4
  c->r[5]=c->r[3]|c->r[3]; // 800903E8
  c->lr=0x800903F0u; f_801647E4(c); // 800903EC
  c->r[3]=0u+0x00000001u; // 800903F0
  goto L_800903FC; // 800903F4
L_800903F8:;
  c->r[3]=0u+0x00000000u; // 800903F8
L_800903FC:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800903FC
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80090400
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 80090404
  c->r[31]=R32(c->r[1]+0x000000DCu); // 80090408
  c->r[30]=R32(c->r[1]+0x000000D8u); // 8009040C
  c->r[29]=R32(c->r[1]+0x000000D4u); // 80090410
  c->r[28]=R32(c->r[1]+0x000000D0u); // 80090414
  c->lr=c->r[0]; // 80090418
  c->r[1]=c->r[1]+0x000000F0u; // 8009041C
  return; // 80090420
}

// fn_80090424
void f_80090424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80090424
  c->r[0]=c->lr; // 80090428
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8009042C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 80090430
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 80090434
  c->r[5]=c->r[1]+0x0000002Cu; // 80090438
  W32(c->r[1]+0x000000DCu,c->r[31]); // 8009043C
  W32(c->r[1]+0x000000D8u,c->r[30]); // 80090440
  W32(c->r[1]+0x000000D4u,c->r[29]); // 80090444
  W32(c->r[1]+0x000000D0u,c->r[28]); // 80090448
  c->r[28]=c->r[3]|c->r[3]; // 8009044C
  c->r[3]=R32(c->r[3]+0x00000008u); // 80090450
  c->r[4]=R32(c->r[28]+0x00000000u); // 80090454
  c->lr=0x8009045Cu; f_80164808(c); // 80090458
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8009045C
  c->r[5]=c->r[1]+0x000000A8u; // 80090460
  c->r[4]=R32(c->r[28]+0x00000000u); // 80090464
  c->lr=0x8009046Cu; f_80164808(c); // 80090468
  c->r[3]=R32(c->r[28]+0x00000008u); // 8009046C
  c->r[5]=c->r[1]+0x000000B4u; // 80090470
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80090474
  c->lr=0x8009047Cu; f_80164808(c); // 80090478
  c->r[3]=R32(c->r[28]+0x00000008u); // 8009047C
  c->r[5]=c->r[1]+0x000000C0u; // 80090480
  c->r[4]=R32(c->r[28]+0x00000010u); // 80090484
  c->lr=0x8009048Cu; f_80164808(c); // 80090488
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[11]=c->ps1[11]=RF32(ea);} // 8009048C
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[7]=c->ps1[7]=RF32(ea);} // 80090490
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[9]=c->ps1[9]=RF32(ea);} // 80090494
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[8]=c->ps1[8]=RF32(ea);} // 80090498
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[7]); // 8009049C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[10]=c->ps1[10]=RF32(ea);} // 800904A0
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[7]); // 800904A4
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[6]=c->ps1[6]=RF32(ea);} // 800904A8
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[8]); // 800904AC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800904B0
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[6]); // 800904B4
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[13]=c->ps1[13]=RF32(ea);} // 800904B8
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[6]); // 800904BC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[12]=c->ps1[12]=RF32(ea);} // 800904C0
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[8]); // 800904C4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[31]);} // 800904C8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800904CC
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[13]);} // 800904D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800904D4
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[0]=c->ps1[0]=RF32(ea);} // 800904D8
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 800904DC
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[12]);} // 800904E0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800904E4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[11]);} // 800904E8
  c->f[1]=c->ps1[1]=S(c->f[13]*c->f[1]); // 800904EC
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[3]); // 800904F0
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[10]);} // 800904F4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800904F8
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[9]);} // 800904FC
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[8]);} // 80090500
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[1]); // 80090504
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[7]);} // 80090508
  fcmp(c,0,c->f[0],c->f[31]); // 8009050C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[6]);} // 80090510
  if (!crb(c,2)) { goto L_80090520; } // 80090514
  c->r[3]=0u+0x00000000u; // 80090518
  goto L_800906E0; // 8009051C
L_80090520:;
  c->r[31]=c->r[1]+0x00000048u; // 80090520
  c->r[30]=c->r[1]+0x00000038u; // 80090524
  c->r[29]=0u+0x00000000u; // 80090528
L_8009052C:;
  c->r[3]=c->r[1]+0x00000078u; // 8009052C
  c->r[4]=c->r[1]+0x00000048u; // 80090530
  c->lr=0x80090538u; f_80163864(c); // 80090534
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090538
  c->r[29]=c->r[29]+0x00000001u; // 8009053C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090540
  cmps(c,0,(int32_t)c->r[29],3); // 80090544
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80090548
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009054C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 80090550
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80090554
  c->r[31]=c->r[31]+0x00000004u; // 80090558
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009055C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80090560
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090564
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80090568
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[4]); // 8009056C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[7]=c->ps1[7]=RF32(ea);} // 80090570
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[1]); // 80090574
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090578
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[1]); // 8009057C
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[7]); // 80090580
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 80090584
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 80090588
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[7]); // 8009058C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090590
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[6]); // 80090594
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 80090598
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009059C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 800905A0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 800905A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800905A8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 800905AC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800905B0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800905B4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 800905B8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 800905BC
  c->r[30]=c->r[30]+0x00000004u; // 800905C0
  if (crb(c,0)) { IRQCHK(c); goto L_8009052C; } // 800905C4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800905C8
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[0]=c->ps1[0]=RF32(ea);} // 800905CC
  fcmp(c,0,c->f[2],c->f[0]); // 800905D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800905D4
  if (!crb(c,2)) { goto L_800906DC; } // 800905D8
  {uint32_t ea=c->r[2]+0xFFFF923Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800905DC
  fcmp(c,0,c->f[2],c->f[0]); // 800905E0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800905E4
  if (!crb(c,2)) { goto L_800906DC; } // 800905E8
  c->r[7]=R32(c->r[28]+0x00000000u); // 800905EC
  c->r[3]=c->r[1]+0x000000B4u; // 800905F0
  c->r[6]=R32(c->r[28]+0x00000014u); // 800905F4
  c->r[4]=c->r[1]+0x000000C0u; // 800905F8
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800905FC
  c->r[5]=c->r[1]+0x00000020u; // 80090600
  {uint32_t ea=c->r[7]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090604
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80090608
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8009060C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80090610
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 80090614
  c->r[7]=R32(c->r[28]+0x00000000u); // 80090618
  c->r[6]=R32(c->r[28]+0x00000014u); // 8009061C
  {uint32_t ea=c->r[7]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090620
  {uint32_t ea=c->r[7]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090624
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80090628
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8009062C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80090630
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 80090634
  c->r[7]=R32(c->r[28]+0x00000000u); // 80090638
  c->r[6]=R32(c->r[28]+0x00000014u); // 8009063C
  {uint32_t ea=c->r[7]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090640
  {uint32_t ea=c->r[7]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090644
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80090648
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8009064C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80090650
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 80090654
  c->lr=0x8009065Cu; f_80164908(c); // 80090658
  c->r[3]=c->r[1]+0x00000020u; // 8009065C
  c->r[4]=c->r[1]+0x000000A8u; // 80090660
  c->lr=0x80090668u; f_801648E8(c); // 80090664
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090668
  fcmp(c,0,c->f[1],c->f[0]); // 8009066C
  if (!crb(c,1)) { goto L_80090684; } // 80090670
  c->r[3]=c->r[1]+0x00000020u; // 80090674
  {uint32_t ea=c->r[2]+0xFFFF9240u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090678
  c->r[4]=c->r[3]|c->r[3]; // 8009067C
  c->lr=0x80090684u; f_8016482C(c); // 80090680
L_80090684:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80090684
  c->r[5]=c->r[1]+0x00000014u; // 80090688
  c->r[4]=R32(c->r[28]+0x00000014u); // 8009068C
  c->lr=0x80090694u; f_80164808(c); // 80090690
  c->r[3]=c->r[1]+0x00000020u; // 80090694
  c->r[4]=c->r[1]+0x00000008u; // 80090698
  c->lr=0x800906A0u; f_80164848(c); // 8009069C
  c->r[3]=c->r[1]+0x00000008u; // 800906A0
  c->r[4]=c->r[1]+0x00000014u; // 800906A4
  c->lr=0x800906ACu; f_801648E8(c); // 800906A8
  c->f[1]=-c->f[1]; // 800906AC
  {uint32_t ea=c->r[2]+0xFFFF9244u; c->f[0]=c->ps1[0]=RF32(ea);} // 800906B0
  c->r[4]=R32(c->r[28]+0x00000018u); // 800906B4
  c->r[3]=c->r[1]+0x00000008u; // 800906B8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800906BC
  c->lr=0x800906C4u; f_8016482C(c); // 800906C0
  c->r[3]=R32(c->r[28]+0x00000018u); // 800906C4
  c->r[4]=R32(c->r[28]+0x00000004u); // 800906C8
  c->r[5]=c->r[3]|c->r[3]; // 800906CC
  c->lr=0x800906D4u; f_801647E4(c); // 800906D0
  c->r[3]=0u+0x00000001u; // 800906D4
  goto L_800906E0; // 800906D8
L_800906DC:;
  c->r[3]=0u+0x00000000u; // 800906DC
L_800906E0:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800906E0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800906E4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800906E8
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800906EC
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800906F0
  c->r[29]=R32(c->r[1]+0x000000D4u); // 800906F4
  c->r[28]=R32(c->r[1]+0x000000D0u); // 800906F8
  c->lr=c->r[0]; // 800906FC
  c->r[1]=c->r[1]+0x000000F0u; // 80090700
  return; // 80090704
}

// fn_80090708
void f_80090708(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9248u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090708
  c->r[4]=0u+0x802C0000u; // 8009070C
  c->r[5]=0u+0x00000000u; // 80090710
  c->r[0]=0u+0x00000001u; // 80090714
  c->r[4]=c->r[4]+0xFFFFCAE8u; // 80090718
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8009071C
  W32(c->r[3]+0x00000010u,c->r[5]); // 80090720
  W32(c->r[3]+0x00000014u,c->r[0]); // 80090724
  W32(c->r[3]+0x00000018u,c->r[5]); // 80090728
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009072C
  W32(c->r[3]+0x00000008u,c->r[5]); // 80090730
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80090734
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80090738
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8009073C
  W32(c->r[3]+0x00000028u,c->r[5]); // 80090740
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 80090744
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 80090748
  W32(c->r[3]+0x00000040u,c->r[5]); // 8009074C
  W32(c->r[3]+0x00000030u,c->r[5]); // 80090750
  W32(c->r[3]+0x00000044u,c->r[5]); // 80090754
  W32(c->r[3]+0x00000034u,c->r[5]); // 80090758
  W32(c->r[3]+0x00000048u,c->r[5]); // 8009075C
  W32(c->r[3]+0x00000038u,c->r[5]); // 80090760
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 80090764
  W32(c->r[3]+0x00000004u,c->r[5]); // 80090768
  W8(c->r[3]+0x00000058u,c->r[5]); // 8009076C
  return; // 80090770
}

// fn_80090774
void f_80090774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80090774
  c->r[0]=c->lr; // 80090778
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009077C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80090780
  c->r[31]=c->r[3]|c->r[3]; // 80090784
  c->r[0]=R32(c->r[3]+0x00000004u); // 80090788
  cmps(c,0,(int32_t)c->r[0],0); // 8009078C
  if (crb(c,2)) { goto L_8009079C; } // 80090790
  c->r[3]=c->r[0]|c->r[0]; // 80090794
  c->lr=0x8009079Cu; f_800D4444(c); // 80090798
L_8009079C:;
  c->r[0]=0u+0x00000000u; // 8009079C
  W8(c->r[31]+0x00000058u,c->r[0]); // 800907A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800907A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800907A8
  c->lr=c->r[0]; // 800907AC
  c->r[1]=c->r[1]+0x00000010u; // 800907B0
  return; // 800907B4
}

// fn_800907B8
void f_800907B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800907B8
  c->r[0]=c->lr; // 800907BC
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 800907C0
  cmps(c,0,(int32_t)c->r[5],0); // 800907C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800907C8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800907CC
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 800907D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800907D4
  c->r[31]=c->r[3]|c->r[3]; // 800907D8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800907DC
  c->r[0]=c->r[5]+c->r[0]; // 800907E0
  W32(c->r[3]+0x00000014u,c->r[6]); // 800907E4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800907E8
  W32(c->r[3]+0x00000018u,c->r[5]); // 800907EC
  if (!crb(c,1)) { goto L_80090804; } // 800907F0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800907F4
  c->lr=0x800907FCu; f_800D4420(c); // 800907F8
  W32(c->r[31]+0x00000004u,c->r[3]); // 800907FC
  goto L_8009080C; // 80090800
L_80090804:;
  c->r[0]=0u+0x00000000u; // 80090804
  W32(c->r[3]+0x00000004u,c->r[0]); // 80090808
L_8009080C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009080C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80090810
  c->lr=c->r[0]; // 80090814
  c->r[1]=c->r[1]+0x00000010u; // 80090818
  return; // 8009081C
}

// fn_80090820
void f_80090820(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 80090820
  return; // 80090824
}

// fn_80090828
void f_80090828(Ctx* __restrict c) {
  W32(c->r[3]+0x00000008u,c->r[4]); // 80090828
  return; // 8009082C
}

// fn_80090830
void f_80090830(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80090830
  return; // 80090834
}

// fn_80090838
void f_80090838(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 80090838
  return; // 8009083C
}

// fn_80090840
void f_80090840(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 80090840
  return; // 80090844
}

// fn_80090848
void f_80090848(Ctx* __restrict c) {
  W32(c->r[3]+0x00000028u,c->r[4]); // 80090848
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 8009084C
  return; // 80090850
}

// fn_80090854
void f_80090854(Ctx* __restrict c) {
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 80090854
  W32(c->r[3]+0x00000040u,c->r[5]); // 80090858
  return; // 8009085C
}

// fn_80090860
void f_80090860(Ctx* __restrict c) {
  W32(c->r[3]+0x00000038u,c->r[4]); // 80090860
  return; // 80090864
}

// fn_80090868
void f_80090868(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 80090868
  c->r[8]=0u+0x00000001u; // 8009086C
  c->r[5]=0u+0x00000030u; // 80090870
  goto L_800908B4; // 80090874
L_80090878:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80090878
  c->r[6]=c->r[0]+c->r[5]; // 8009087C
  c->r[0]=R8(c->r[6]+0x0000002Du); // 80090880
  cmps(c,0,(int32_t)c->r[0],0); // 80090884
  if (crb(c,2)) { goto L_800908AC; } // 80090888
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009088C
  c->r[7]=c->r[7]+0x00000001u; // 80090890
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80090894
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090898
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009089C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800908A0
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 800908A4
  c->r[4]=c->r[4]+0x0000000Cu; // 800908A8
L_800908AC:;
  c->r[5]=c->r[5]+0x00000030u; // 800908AC
  c->r[8]=c->r[8]+0x00000001u; // 800908B0
L_800908B4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800908B4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800908B8
  if (crb(c,0)) { IRQCHK(c); goto L_80090878; } // 800908BC
  c->r[3]=c->r[7]|c->r[7]; // 800908C0
  return; // 800908C4
}

// fn_800908C8
void f_800908C8(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000058u); // 800908C8
  return; // 800908CC
}

// fn_800908D0
void f_800908D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800908D0
  c->r[0]=c->lr; // 800908D4
  W32(c->r[1]+0x00000144u,c->r[0]); // 800908D8
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 800908DC
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 800908E0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[30]);} // 800908E4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,30,ea,0,0);} // 800908E8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[29]);} // 800908EC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,29,ea,0,0);} // 800908F0
  c->r[11]=c->r[1]+0x00000110u; // 800908F4
  c->lr=0x800908FCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800908F8
  c->r[0]=R8(c->r[3]+0x00000058u); // 800908FC
  c->r[7]=0u+0x43300000u; // 80090900
  W32(c->r[1]+0x000000D8u,c->r[7]); // 80090904
  c->r[23]=c->r[3]|c->r[3]; // 80090908
  cmps(c,0,(int32_t)c->r[0],0); // 8009090C
  c->r[24]=c->r[4]|c->r[4]; // 80090910
  W32(c->r[1]+0x000000E0u,c->r[7]); // 80090914
  c->r[25]=c->r[5]|c->r[5]; // 80090918
  c->r[26]=c->r[6]|c->r[6]; // 8009091C
  if (!crb(c,2)) { goto L_80090D30; } // 80090920
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 80090924
  c->r[29]=R32(c->r[3]+0x00000008u); // 80090928
  c->r[4]=R32(c->r[4]+0x00000000u); // 8009092C
  c->r[3]=c->r[29]|c->r[29]; // 80090930
  c->lr=0x80090938u; f_8004EB60(c); // 80090934
  cmps(c,0,(int32_t)c->r[3],0); // 80090938
  if (crb(c,2)) { goto L_80090D30; } // 8009093C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80090940
  c->r[4]=c->r[1]+0x000000C0u; // 80090944
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80090948
  c->r[5]=c->r[4]|c->r[4]; // 8009094C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090950
  c->r[3]=c->r[24]|c->r[24]; // 80090954
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 80090958
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 8009095C
  c->r[7]=R32(c->r[1]+0x00000050u); // 80090960
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80090964
  c->r[6]=R32(c->r[1]+0x00000054u); // 80090968
  c->r[0]=R32(c->r[1]+0x00000058u); // 8009096C
  W32(c->r[1]+0x000000A4u,c->r[7]); // 80090970
  W32(c->r[1]+0x000000A8u,c->r[6]); // 80090974
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80090978
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8009097C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090980
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090984
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[2]);} // 80090988
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 8009098C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 80090990
  c->lr=0x80090998u; f_801643D8(c); // 80090994
  c->r[5]=R32(c->r[23]+0x00000004u); // 80090998
  c->r[31]=0u+0x00000000u; // 8009099C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800909A0
  {uint32_t ea=c->r[2]+0xFFFF924Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800909A4
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800909A8
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[31]=RF64(ea);} // 800909AC
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800909B0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[30]);} // 800909B4
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 800909B8
  c->r[3]=R32(c->r[1]+0x00000044u); // 800909BC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[30]);} // 800909C0
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800909C4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[30]);} // 800909C8
  c->r[4]=R32(c->r[1]+0x00000048u); // 800909CC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800909D0
  W32(c->r[1]+0x0000009Cu,c->r[4]); // 800909D4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[30]);} // 800909D8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800909DC
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 800909E0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 800909E4
  W32(c->r[1]+0x00000098u,c->r[3]); // 800909E8
  c->r[3]=R32(c->r[23]+0x00000004u); // 800909EC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800909F0
  W32(c->r[1]+0x000000A0u,c->r[0]); // 800909F4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800909F8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800909FC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[30]);} // 80090A00
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80090A04
  c->r[0]=R32(c->r[1]+0x00000038u); // 80090A08
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80090A0C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80090A10
  c->r[3]=R32(c->r[23]+0x00000004u); // 80090A14
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[30]);} // 80090A18
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090A1C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80090A20
  W32(c->r[1]+0x00000090u,c->r[4]); // 80090A24
  W32(c->r[1]+0x00000094u,c->r[0]); // 80090A28
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090A2C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80090A30
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090A34
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80090A38
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80090A3C
  c->r[3]=R32(c->r[23]+0x00000004u); // 80090A40
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[30]);} // 80090A44
  c->r[3]=R32(c->r[23]+0x00000004u); // 80090A48
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[30]);} // 80090A4C
  c->r[3]=R32(c->r[23]+0x00000004u); // 80090A50
  W8(c->r[3]+0x0000002Cu,c->r[31]); // 80090A54
  c->r[3]=R32(c->r[23]+0x00000004u); // 80090A58
  W8(c->r[3]+0x0000002Du,c->r[31]); // 80090A5C
  c->r[3]=R32(c->r[23]+0x00000010u); // 80090A60
  c->r[27]=c->r[3]+0xFFFFFFFFu; // 80090A64
  c->r[30]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 80090A68
  goto L_80090D10; // 80090A6C
L_80090A70:;
  c->r[0]=R32(c->r[23]+0x00000014u); // 80090A70
  c->r[3]=divw((int32_t)c->r[27],(int32_t)c->r[0]); // 80090A74
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 80090A78
  c->r[0]=c->r[27]-c->r[0]; cr0(c,c->r[0]); // 80090A7C
  if (!crb(c,2)) { goto L_80090BD0; } // 80090A80
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 80090A84
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80090A88
  c->r[3]=c->r[29]|c->r[29]; // 80090A8C
  c->r[4]=c->r[4]+c->r[0]; // 80090A90
  c->r[4]=R32(c->r[4]+0xFFFFFFFCu); // 80090A94
  c->lr=0x80090A9Cu; f_8004EB60(c); // 80090A98
  c->r[0]=R32(c->r[23]+0x00000014u); // 80090A9C
  c->r[28]=c->r[3]|c->r[3]; // 80090AA0
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 80090AA4
  c->r[3]=c->r[29]|c->r[29]; // 80090AA8
  c->r[0]=divw((int32_t)c->r[27],(int32_t)c->r[0]); // 80090AAC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80090AB0
  c->r[4]=R32(c->r[4]+c->r[0]); // 80090AB4
  c->lr=0x80090ABCu; f_8004EB60(c); // 80090AB8
  cmps(c,0,(int32_t)c->r[28],0); // 80090ABC
  if (crb(c,2)) { goto L_80090D30; } // 80090AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80090AC4
  if (!crb(c,2)) { goto L_80090AD0; } // 80090AC8
  goto L_80090D30; // 80090ACC
L_80090AD0:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80090AD0
  c->r[4]=c->r[1]+0x000000CCu; // 80090AD4
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80090AD8
  c->r[5]=c->r[1]+0x00000014u; // 80090ADC
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090AE0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80090AE4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80090AE8
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 80090AEC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80090AF0
  c->r[6]=R32(c->r[1]+0x00000030u); // 80090AF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80090AF8
  W32(c->r[1]+0x00000080u,c->r[7]); // 80090AFC
  W32(c->r[1]+0x00000084u,c->r[6]); // 80090B00
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 80090B04
  W32(c->r[1]+0x00000088u,c->r[0]); // 80090B08
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090B0C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090B10
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[2]);} // 80090B14
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 80090B18
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 80090B1C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80090B20
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80090B24
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090B28
  c->r[3]=c->r[1]+0x000000C0u; // 80090B2C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80090B30
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80090B34
  c->r[7]=R32(c->r[1]+0x00000020u); // 80090B38
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80090B3C
  c->r[6]=R32(c->r[1]+0x00000024u); // 80090B40
  c->r[0]=R32(c->r[1]+0x00000028u); // 80090B44
  W32(c->r[1]+0x00000074u,c->r[7]); // 80090B48
  W32(c->r[1]+0x00000078u,c->r[6]); // 80090B4C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 80090B50
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 80090B54
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090B58
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090B5C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[2]);} // 80090B60
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 80090B64
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 80090B68
  c->lr=0x80090B70u; f_80164808(c); // 80090B6C
  c->r[3]=c->r[1]+0x00000014u; // 80090B70
  c->lr=0x80090B78u; f_801648A4(c); // 80090B74
  c->r[0]=R32(c->r[23]+0x00000014u); // 80090B78
  c->r[3]=c->r[1]+0x000000C0u; // 80090B7C
  c->r[4]=c->r[1]+0x000000CCu; // 80090B80
  c->r[5]=c->r[1]+0x000000B0u; // 80090B84
  c->r[0]=c->r[0]^0x80000000u; // 80090B88
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80090B8C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 80090B90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80090B94
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[0]); // 80090B98
  c->lr=0x80090BA0u; f_80164808(c); // 80090B9C
  c->r[3]=c->r[1]+0x000000B0u; // 80090BA0
  c->r[4]=c->r[3]|c->r[3]; // 80090BA4
  c->lr=0x80090BACu; f_80164848(c); // 80090BA8
  c->r[4]=c->r[1]+0x000000C0u; // 80090BAC
  c->r[3]=c->r[24]|c->r[24]; // 80090BB0
  c->r[5]=c->r[4]|c->r[4]; // 80090BB4
  c->lr=0x80090BBCu; f_801643D8(c); // 80090BB8
  c->r[4]=c->r[1]+0x000000CCu; // 80090BBC
  c->r[3]=c->r[24]|c->r[24]; // 80090BC0
  c->r[5]=c->r[4]|c->r[4]; // 80090BC4
  c->lr=0x80090BCCu; f_801643D8(c); // 80090BC8
  c->r[28]=0u+0x00000000u; // 80090BCC
L_80090BD0:;
  c->r[0]=R32(c->r[23]+0x00000014u); // 80090BD0
  c->r[3]=c->r[1]+0x00000068u; // 80090BD4
  c->r[4]=c->r[1]+0x000000C0u; // 80090BD8
  c->r[5]=c->r[1]+0x000000CCu; // 80090BDC
  c->r[6]=c->r[0]-c->r[28]; // 80090BE0
  c->r[0]=c->r[0]^0x80000000u; // 80090BE4
  c->r[6]=c->r[6]^0x80000000u; // 80090BE8
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80090BEC
  W32(c->r[1]+0x000000E4u,c->r[6]); // 80090BF0
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 80090BF4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[1]=RF64(ea);} // 80090BF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80090BFC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80090C00
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80090C04
  c->lr=0x80090C0Cu; f_800E5368(c); // 80090C08
  c->r[3]=R32(c->r[23]+0x00000004u); // 80090C0C
  c->r[0]=c->r[27]^0x80000000u; // 80090C10
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090C14
  c->r[28]=c->r[28]+0x00000001u; // 80090C18
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 80090C1C
  c->r[4]=c->r[3]+c->r[30]; // 80090C20
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 80090C24
  {uint32_t ea=c->r[3]+c->r[30]; WF32(ea,c->f[0]);} // 80090C28
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80090C2C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090C30
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[30]);} // 80090C34
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 80090C38
  c->r[3]=R32(c->r[1]+0x00000008u); // 80090C3C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090C40
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[30]);} // 80090C44
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 80090C48
  c->r[4]=R32(c->r[1]+0x00000010u); // 80090C4C
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 80090C50
  c->r[3]=R32(c->r[23]+0x00000004u); // 80090C54
  W32(c->r[1]+0x00000060u,c->r[5]); // 80090C58
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090C5C
  c->r[3]=c->r[3]+c->r[30]; // 80090C60
  W32(c->r[1]+0x00000064u,c->r[4]); // 80090C64
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090C68
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80090C6C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090C70
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80090C74
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80090C78
  c->r[3]=R32(c->r[23]+0x00000004u); // 80090C7C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090C80
  c->r[3]=c->r[3]+c->r[30]; // 80090C84
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80090C88
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80090C8C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=RF64(ea);} // 80090C90
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80090C94
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 80090C98
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 80090C9C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090CA0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80090CA4
  c->r[0]=R32(c->r[23]+0x00000004u); // 80090CA8
  c->r[3]=c->r[0]+c->r[30]; // 80090CAC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[29]);} // 80090CB0
  c->r[3]=R32(c->r[23]+0x00000010u); // 80090CB4
  c->r[4]=R32(c->r[23]+0x00000000u); // 80090CB8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80090CBC
  c->r[0]=R32(c->r[23]+0x00000004u); // 80090CC0
  c->r[3]=c->r[3]^0x80000000u; // 80090CC4
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80090CC8
  W32(c->r[1]+0x000000DCu,c->r[3]); // 80090CCC
  c->r[3]=c->r[0]+c->r[30]; // 80090CD0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80090CD4
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 80090CD8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80090CDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80090CE0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80090CE4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80090CE8
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 80090CEC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80090CF0
  c->r[0]=R32(c->r[23]+0x00000004u); // 80090CF4
  c->r[3]=c->r[0]+c->r[30]; // 80090CF8
  W8(c->r[3]+0x0000002Cu,c->r[31]); // 80090CFC
  c->r[0]=R32(c->r[23]+0x00000004u); // 80090D00
  c->r[3]=c->r[0]+c->r[30]; // 80090D04
  c->r[30]=c->r[30]+0xFFFFFFD0u; // 80090D08
  W8(c->r[3]+0x0000002Du,c->r[31]); // 80090D0C
L_80090D10:;
  cmps(c,0,(int32_t)c->r[27],1); // 80090D10
  if (!crb(c,0)) { IRQCHK(c); goto L_80090A70; } // 80090D14
  c->r[3]=0u+0x00000000u; // 80090D18
  c->r[0]=0u+0x00000001u; // 80090D1C
  W32(c->r[23]+0x0000004Cu,c->r[3]); // 80090D20
  W32(c->r[23]+0x00000050u,c->r[25]); // 80090D24
  W32(c->r[23]+0x00000054u,c->r[26]); // 80090D28
  W8(c->r[23]+0x00000058u,c->r[0]); // 80090D2C
L_80090D30:;
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 80090D30
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 80090D34
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,30,ea,0,0);} // 80090D38
  {uint32_t ea=c->r[1]+0x00000120u; c->f[30]=RF64(ea);} // 80090D3C
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,29,ea,0,0);} // 80090D40
  c->r[11]=c->r[1]+0x00000110u; // 80090D44
  {uint32_t ea=c->r[1]+0x00000110u; c->f[29]=RF64(ea);} // 80090D48
  c->lr=0x80090D50u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80090D4C
  c->r[0]=R32(c->r[1]+0x00000144u); // 80090D50
  c->lr=c->r[0]; // 80090D54
  c->r[1]=c->r[1]+0x00000140u; // 80090D58
  return; // 80090D5C
}

// fn_80090D60
void f_80090D60(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80090D60
  W8(c->r[3]+0x00000058u,c->r[0]); // 80090D64
  return; // 80090D68
}

// fn_80090D6C
void f_80090D6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFF590u; W32(ea,c->r[1]); c->r[1]=ea;} // 80090D6C
  c->r[0]=c->lr; // 80090D70
  W32(c->r[1]+0x00000A74u,c->r[0]); // 80090D74
  {uint32_t ea=c->r[1]+0x00000A60u; WF64(ea,c->f[31]);} // 80090D78
  {uint32_t ea=c->r[1]+0xFFFFFA68u; psq_store(c,31,ea,0,0);} // 80090D7C
  {uint32_t ea=c->r[1]+0x00000A50u; WF64(ea,c->f[30]);} // 80090D80
  {uint32_t ea=c->r[1]+0xFFFFFA58u; psq_store(c,30,ea,0,0);} // 80090D84
  {uint32_t ea=c->r[1]+0x00000A40u; WF64(ea,c->f[29]);} // 80090D88
  {uint32_t ea=c->r[1]+0xFFFFFA48u; psq_store(c,29,ea,0,0);} // 80090D8C
  {uint32_t ea=c->r[1]+0x00000A30u; WF64(ea,c->f[28]);} // 80090D90
  {uint32_t ea=c->r[1]+0xFFFFFA38u; psq_store(c,28,ea,0,0);} // 80090D94
  {uint32_t ea=c->r[1]+0x00000A20u; WF64(ea,c->f[27]);} // 80090D98
  {uint32_t ea=c->r[1]+0xFFFFFA28u; psq_store(c,27,ea,0,0);} // 80090D9C
  c->r[11]=c->r[1]+0x00000A20u; // 80090DA0
  c->lr=0x80090DA8u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80090DA4
  c->r[8]=R32(c->r[3]+0x00000000u); // 80090DA8
  c->r[7]=0u+0x43300000u; // 80090DAC
  W32(c->r[1]+0x000009D0u,c->r[7]); // 80090DB0
  c->r[21]=c->r[3]|c->r[3]; // 80090DB4
  c->r[0]=R32(c->r[8]+0x00000028u); // 80090DB8
  c->r[22]=c->r[4]|c->r[4]; // 80090DBC
  c->r[6]=R32(c->r[3]+0x00000004u); // 80090DC0
  c->r[23]=c->r[5]|c->r[5]; // 80090DC4
  c->r[0]=c->r[0]^0x80000000u; // 80090DC8
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[2]=RF64(ea);} // 80090DCC
  W32(c->r[1]+0x000009D4u,c->r[0]); // 80090DD0
  c->r[28]=c->r[1]+0x000006D0u; // 80090DD4
  {uint32_t ea=c->r[2]+0xFFFF9248u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090DD8
  c->r[29]=c->r[1]+0x000000D0u; // 80090DDC
  {uint32_t ea=c->r[1]+0x000009D0u; c->f[1]=RF64(ea);} // 80090DE0
  c->r[30]=0u+0x00000000u; // 80090DE4
  {uint32_t ea=c->r[8]+0x00000020u; c->f[29]=c->ps1[29]=RF32(ea);} // 80090DE8
  c->r[27]=0u+0x00000000u; // 80090DEC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80090DF0
  c->r[3]=R32(c->r[6]+0x00000000u); // 80090DF4
  c->r[0]=R32(c->r[6]+0x00000004u); // 80090DF8
  c->r[24]=0u+0x00000000u; // 80090DFC
  W32(c->r[1]+0x000009D8u,c->r[7]); // 80090E00
  c->f[30]=c->ps1[30]=S(c->f[0]/c->f[1]); // 80090E04
  W32(c->r[1]+0x00000084u,c->r[3]); // 80090E08
  W32(c->r[1]+0x00000088u,c->r[0]); // 80090E0C
  c->r[0]=R32(c->r[6]+0x00000008u); // 80090E10
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 80090E14
  goto L_80090E7C; // 80090E18
L_80090E1C:;
  c->r[0]=R32(c->r[21]+0x00000004u); // 80090E1C
  c->f[1]=c->f[30]; // 80090E20
  c->r[4]=c->r[29]|c->r[29]; // 80090E24
  {uint32_t ea=c->r[27]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80090E28
  c->r[3]=c->r[0]+c->r[27]; // 80090E2C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80090E30
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090E34
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 80090E38
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090E3C
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 80090E40
  c->r[0]=R32(c->r[21]+0x00000004u); // 80090E44
  c->r[3]=c->r[0]+c->r[27]; // 80090E48
  c->r[3]=c->r[3]+0x0000000Cu; // 80090E4C
  c->lr=0x80090E54u; f_8016482C(c); // 80090E50
  c->r[0]=R32(c->r[21]+0x00000004u); // 80090E54
  c->r[28]=c->r[28]+0x0000000Cu; // 80090E58
  c->r[29]=c->r[29]+0x0000000Cu; // 80090E5C
  c->r[30]=c->r[30]+0x00000001u; // 80090E60
  c->r[3]=c->r[0]+c->r[27]; // 80090E64
  W8(c->r[3]+0x0000002Cu,c->r[24]); // 80090E68
  c->r[0]=R32(c->r[21]+0x00000004u); // 80090E6C
  c->r[3]=c->r[0]+c->r[27]; // 80090E70
  c->r[27]=c->r[27]+0x00000030u; // 80090E74
  W8(c->r[3]+0x0000002Du,c->r[24]); // 80090E78
L_80090E7C:;
  c->r[0]=R32(c->r[21]+0x00000010u); // 80090E7C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80090E80
  if (crb(c,0)) { IRQCHK(c); goto L_80090E1C; } // 80090E84
  {uint32_t ea=c->r[2]+0xFFFF924Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 80090E88
  c->r[26]=0u+0x00000000u; // 80090E8C
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[31]=RF64(ea);} // 80090E90
  c->r[30]=0u+0x00000000u; // 80090E94
  c->r[31]=0u+0x00000001u; // 80090E98
  goto L_800912E8; // 80090E9C
L_80090EA0:;
  c->r[3]=c->r[26]+0x00000001u; // 80090EA0
  c->r[0]=c->r[0]^0x80000000u; // 80090EA4
  c->r[4]=c->r[3]^0x80000000u; // 80090EA8
  W32(c->r[1]+0x000009D4u,c->r[0]); // 80090EAC
  c->r[5]=c->r[22]|c->r[22]; // 80090EB0
  c->r[3]=c->r[1]+0x00000054u; // 80090EB4
  W32(c->r[1]+0x000009DCu,c->r[4]); // 80090EB8
  c->r[4]=c->r[1]+0x00000084u; // 80090EBC
  {uint32_t ea=c->r[1]+0x000009D0u; c->f[0]=RF64(ea);} // 80090EC0
  {uint32_t ea=c->r[1]+0x000009D8u; c->f[1]=RF64(ea);} // 80090EC4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80090EC8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80090ECC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80090ED0
  c->lr=0x80090ED8u; f_800E5368(c); // 80090ED4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80090ED8
  c->r[24]=c->r[1]+0x000006DCu; // 80090EDC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090EE0
  c->r[29]=c->r[1]+0x000000DCu; // 80090EE4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80090EE8
  c->r[20]=c->r[29]|c->r[29]; // 80090EEC
  {uint32_t ea=c->r[1]+0x000006D0u; WF32(ea,c->f[2]);} // 80090EF0
  c->r[19]=c->r[24]|c->r[24]; // 80090EF4
  c->r[25]=c->r[1]+0x000003DCu; // 80090EF8
  c->r[28]=c->r[23]+0x0000000Cu; // 80090EFC
  {uint32_t ea=c->r[1]+0x000006D4u; WF32(ea,c->f[1]);} // 80090F00
  c->r[18]=c->r[1]+0x00000091u; // 80090F04
  c->r[27]=0u+0x00000001u; // 80090F08
  {uint32_t ea=c->r[1]+0x000006D8u; WF32(ea,c->f[0]);} // 80090F0C
  goto L_8009101C; // 80090F10
L_80090F14:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80090F14
  c->r[3]=c->r[27]^0x80000000u; // 80090F18
  c->r[0]=c->r[0]^0x80000000u; // 80090F1C
  W32(c->r[1]+0x000009DCu,c->r[3]); // 80090F20
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090F24
  c->r[3]=c->r[1]+0x00000048u; // 80090F28
  W32(c->r[1]+0x000009D4u,c->r[0]); // 80090F2C
  {uint32_t ea=c->r[1]+0x000009D8u; c->f[2]=RF64(ea);} // 80090F30
  {uint32_t ea=c->r[1]+0x000009D0u; c->f[1]=RF64(ea);} // 80090F34
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[31]); // 80090F38
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 80090F3C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 80090F40
  {uint32_t ea=c->r[24]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80090F44
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090F48
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 80090F4C
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 80090F50
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[0]);} // 80090F54
  c->r[4]=R32(c->r[21]+0x00000000u); // 80090F58
  c->r[5]=c->r[4]+0x0000000Cu; // 80090F5C
  c->lr=0x80090F64u; f_800E5368(c); // 80090F60
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80090F64
  c->r[3]=c->r[1]+0x00000078u; // 80090F68
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80090F6C
  c->r[4]=c->r[3]|c->r[3]; // 80090F70
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090F74
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 80090F78
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 80090F7C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80090F80
  {uint32_t ea=c->r[21]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090F84
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 80090F88
  c->lr=0x80090F90u; f_8016482C(c); // 80090F8C
  {uint32_t ea=c->r[21]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090F90
  c->r[3]=c->r[28]|c->r[28]; // 80090F94
  c->r[4]=c->r[1]+0x0000006Cu; // 80090F98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 80090F9C
  c->lr=0x80090FA4u; f_8016482C(c); // 80090FA0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090FA4
  c->r[3]=c->r[20]|c->r[20]; // 80090FA8
  c->r[5]=c->r[29]|c->r[29]; // 80090FAC
  c->r[4]=c->r[1]+0x0000006Cu; // 80090FB0
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 80090FB4
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80090FB8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090FBC
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 80090FC0
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 80090FC4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80090FC8
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 80090FCC
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80090FD0
  c->lr=0x80090FD8u; f_801647E4(c); // 80090FD4
  c->r[3]=c->r[20]|c->r[20]; // 80090FD8
  c->r[5]=c->r[29]|c->r[29]; // 80090FDC
  c->r[4]=c->r[1]+0x00000078u; // 80090FE0
  c->lr=0x80090FE8u; f_801647E4(c); // 80090FE4
  c->r[3]=c->r[19]|c->r[19]; // 80090FE8
  c->r[4]=c->r[20]|c->r[20]; // 80090FEC
  c->r[5]=c->r[24]|c->r[24]; // 80090FF0
  c->lr=0x80090FF8u; f_801647E4(c); // 80090FF4
  W8(c->r[18]+0x00000000u,c->r[30]); // 80090FF8
  c->r[24]=c->r[24]+0x0000000Cu; // 80090FFC
  c->r[25]=c->r[25]+0x0000000Cu; // 80091000
  c->r[28]=c->r[28]+0x0000000Cu; // 80091004
  c->r[29]=c->r[29]+0x0000000Cu; // 80091008
  c->r[20]=c->r[20]+0x0000000Cu; // 8009100C
  c->r[19]=c->r[19]+0x0000000Cu; // 80091010
  c->r[18]=c->r[18]+0x00000001u; // 80091014
  c->r[27]=c->r[27]+0x00000001u; // 80091018
L_8009101C:;
  c->r[3]=R32(c->r[21]+0x00000010u); // 8009101C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 80091020
  if (crb(c,0)) { IRQCHK(c); goto L_80090F14; } // 80091024
  c->r[29]=c->r[1]+0x000006DCu; // 80091028
  c->r[25]=0u+0x00000001u; // 8009102C
  c->r[28]=0u+0x00000030u; // 80091030
  goto L_800911CC; // 80091034
L_80091038:;
  c->r[24]=0u+0x00000000u; // 80091038
  c->r[27]=0u+0x00000000u; // 8009103C
  goto L_800910CC; // 80091040
L_80091044:;
  c->r[0]=R32(c->r[21]+0x00000028u); // 80091044
  cmps(c,0,(int32_t)c->r[0],0); // 80091048
  if (crb(c,2)) { goto L_800910C4; } // 8009104C
  c->r[3]=c->r[0]+c->r[27]; // 80091050
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091054
  fcmp(c,0,c->f[0],c->f[28]); // 80091058
  if (!crb(c,1)) { goto L_800910C4; } // 8009105C
  c->r[0]=c->r[3]+0x0000000Cu; // 80091060
  W32(c->r[1]+0x00000038u,c->r[29]); // 80091064
  c->r[3]=c->r[1]+0x00000038u; // 80091068
  W32(c->r[1]+0x00000040u,c->r[0]); // 8009106C
  c->r[0]=R32(c->r[21]+0x00000028u); // 80091070
  W32(c->r[1]+0x0000002Cu,c->r[30]); // 80091074
  c->r[0]=c->r[0]+c->r[27]; // 80091078
  W32(c->r[1]+0x00000030u,c->r[30]); // 8009107C
  W32(c->r[1]+0x00000034u,c->r[30]); // 80091080
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80091084
  W32(c->r[1]+0x00000044u,c->r[29]); // 80091088
  c->lr=0x80091090u; f_8008FE98(c); // 8009108C
  cmps(c,0,(int32_t)c->r[3],0); // 80091090
  if (crb(c,2)) { goto L_800910C4; } // 80091094
  c->r[0]=R32(c->r[21]+0x00000004u); // 80091098
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009109C
  c->r[3]=c->r[0]+c->r[28]; // 800910A0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800910A4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800910A8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800910AC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 800910B0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800910B4
  c->r[0]=R32(c->r[21]+0x00000004u); // 800910B8
  c->r[3]=c->r[28]+c->r[0]; // 800910BC
  W8(c->r[3]+0x0000002Cu,c->r[31]); // 800910C0
L_800910C4:;
  c->r[27]=c->r[27]+0x00000010u; // 800910C4
  c->r[24]=c->r[24]+0x00000001u; // 800910C8
L_800910CC:;
  c->r[0]=R32(c->r[21]+0x0000003Cu); // 800910CC
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800910D0
  if (crb(c,0)) { IRQCHK(c); goto L_80091044; } // 800910D4
  c->r[18]=0u+0x00000000u; // 800910D8
  goto L_800910F8; // 800910DC
L_800910E0:;
  c->r[3]=c->r[21]|c->r[21]; // 800910E0
  c->r[4]=c->r[25]|c->r[25]; // 800910E4
  c->r[5]=c->r[18]|c->r[18]; // 800910E8
  c->r[6]=c->r[1]+0x000006D0u; // 800910EC
  c->lr=0x800910F4u; f_80091DEC(c); // 800910F0
  c->r[18]=c->r[18]+0x00000001u; // 800910F4
L_800910F8:;
  c->r[0]=R32(c->r[21]+0x00000040u); // 800910F8
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 800910FC
  if (crb(c,0)) { IRQCHK(c); goto L_800910E0; } // 80091100
  c->r[18]=0u+0x00000000u; // 80091104
  goto L_80091124; // 80091108
L_8009110C:;
  c->r[3]=c->r[21]|c->r[21]; // 8009110C
  c->r[4]=c->r[25]|c->r[25]; // 80091110
  c->r[5]=c->r[18]|c->r[18]; // 80091114
  c->r[6]=c->r[1]+0x000006D0u; // 80091118
  c->lr=0x80091120u; f_80091EFC(c); // 8009111C
  c->r[18]=c->r[18]+0x00000001u; // 80091120
L_80091124:;
  c->r[0]=R32(c->r[21]+0x00000044u); // 80091124
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 80091128
  if (crb(c,0)) { IRQCHK(c); goto L_8009110C; } // 8009112C
  c->r[18]=0u+0x00000000u; // 80091130
  goto L_80091150; // 80091134
L_80091138:;
  c->r[3]=c->r[21]|c->r[21]; // 80091138
  c->r[4]=c->r[25]|c->r[25]; // 8009113C
  c->r[5]=c->r[18]|c->r[18]; // 80091140
  c->r[6]=c->r[1]+0x000006D0u; // 80091144
  c->lr=0x8009114Cu; f_800920A0(c); // 80091148
  c->r[18]=c->r[18]+0x00000001u; // 8009114C
L_80091150:;
  c->r[0]=R32(c->r[21]+0x00000048u); // 80091150
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 80091154
  if (crb(c,0)) { IRQCHK(c); goto L_80091138; } // 80091158
  c->r[0]=R32(c->r[21]+0x00000038u); // 8009115C
  cmps(c,0,(int32_t)c->r[0],0); // 80091160
  if (crb(c,2)) { goto L_800911C0; } // 80091164
  c->r[6]=R32(c->r[29]+0x00000000u); // 80091168
  c->r[3]=c->r[1]+0x00000014u; // 8009116C
  c->r[5]=R32(c->r[29]+0x00000004u); // 80091170
  c->r[4]=c->r[1]+0x00000020u; // 80091174
  c->r[0]=R32(c->r[29]+0x00000008u); // 80091178
  W32(c->r[1]+0x00000020u,c->r[6]); // 8009117C
  W32(c->r[1]+0x00000024u,c->r[5]); // 80091180
  W32(c->r[1]+0x00000028u,c->r[0]); // 80091184
  c->r[12]=R32(c->r[21]+0x00000038u); // 80091188
  c->r[5]=R32(c->r[21]+0x00000008u); // 8009118C
  c->ctr=c->r[12]; // 80091190
  if (true) { c->lr=0x80091198u; dispatch(c,c->ctr); } // 80091194
  cmps(c,0,(int32_t)c->r[3],0); // 80091198
  if (crb(c,2)) { goto L_800911C0; } // 8009119C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800911A0
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800911A4
  fcmp(c,0,c->f[1],c->f[0]); // 800911A8
  if (!crb(c,1)) { goto L_800911C0; } // 800911AC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 800911B0
  c->r[0]=R32(c->r[21]+0x00000004u); // 800911B4
  c->r[3]=c->r[0]+c->r[28]; // 800911B8
  W8(c->r[3]+0x0000002Du,c->r[31]); // 800911BC
L_800911C0:;
  c->r[29]=c->r[29]+0x0000000Cu; // 800911C0
  c->r[28]=c->r[28]+0x00000030u; // 800911C4
  c->r[25]=c->r[25]+0x00000001u; // 800911C8
L_800911CC:;
  c->r[0]=R32(c->r[21]+0x00000010u); // 800911CC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800911D0
  if (crb(c,0)) { IRQCHK(c); goto L_80091038; } // 800911D4
  c->r[25]=c->r[1]+0x000006DCu; // 800911D8
  c->r[19]=0u+0x00000001u; // 800911DC
  c->r[27]=c->r[25]|c->r[25]; // 800911E0
  c->r[24]=0u+0x00000030u; // 800911E4
  goto L_80091284; // 800911E8
L_800911EC:;
  c->r[3]=R32(c->r[21]+0x00000004u); // 800911EC
  c->r[0]=c->r[19]+0xFFFFFFFFu; // 800911F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800911F4
  c->r[18]=c->r[1]+0x000006D0u; // 800911F8
  c->r[3]=c->r[3]+c->r[24]; // 800911FC
  {uint32_t ea=c->r[21]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091200
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091204
  c->r[4]=c->r[25]|c->r[25]; // 80091208
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[0]); // 8009120C
  c->r[18]=c->r[18]+c->r[0]; // 80091210
  c->r[3]=c->r[18]|c->r[18]; // 80091214
  c->r[5]=c->r[1]+0x00000008u; // 80091218
  c->lr=0x80091220u; f_80164808(c); // 8009121C
  c->r[3]=c->r[1]+0x00000008u; // 80091220
  c->lr=0x80091228u; f_801648A4(c); // 80091224
  fcmp(c,0,c->f[1],c->f[28]); // 80091228
  if (!crb(c,1)) { goto L_80091274; } // 8009122C
  fcmp(c,0,c->f[1],c->f[27]); // 80091230
  if (crb(c,2)) { goto L_80091274; } // 80091234
  c->r[3]=c->r[25]|c->r[25]; // 80091238
  c->r[4]=c->r[18]|c->r[18]; // 8009123C
  c->r[5]=c->r[1]+0x00000060u; // 80091240
  c->lr=0x80091248u; f_80164808(c); // 80091244
  c->r[3]=c->r[1]+0x00000060u; // 80091248
  c->r[4]=c->r[3]|c->r[3]; // 8009124C
  c->lr=0x80091254u; f_80164848(c); // 80091250
  c->f[1]=c->f[27]; // 80091254
  c->r[3]=c->r[1]+0x00000060u; // 80091258
  c->r[4]=c->r[3]|c->r[3]; // 8009125C
  c->lr=0x80091264u; f_8016482C(c); // 80091260
  c->r[3]=c->r[18]|c->r[18]; // 80091264
  c->r[5]=c->r[27]|c->r[27]; // 80091268
  c->r[4]=c->r[1]+0x00000060u; // 8009126C
  c->lr=0x80091274u; f_801647E4(c); // 80091270
L_80091274:;
  c->r[24]=c->r[24]+0x00000030u; // 80091274
  c->r[25]=c->r[25]+0x0000000Cu; // 80091278
  c->r[27]=c->r[27]+0x0000000Cu; // 8009127C
  c->r[19]=c->r[19]+0x00000001u; // 80091280
L_80091284:;
  c->r[0]=R32(c->r[21]+0x00000010u); // 80091284
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 80091288
  if (crb(c,0)) { IRQCHK(c); goto L_800911EC; } // 8009128C
  c->r[24]=c->r[1]+0x00000090u; // 80091290
  c->r[25]=c->r[1]+0x000000D0u; // 80091294
  c->r[27]=c->r[1]+0x000003D0u; // 80091298
  c->r[28]=c->r[1]+0x000006D0u; // 8009129C
  c->r[18]=0u+0x00000000u; // 800912A0
  goto L_800912D8; // 800912A4
L_800912A8:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 800912A8
  cmps(c,0,(int32_t)c->r[0],0); // 800912AC
  if (!crb(c,2)) { goto L_800912C4; } // 800912B0
  c->r[3]=c->r[28]|c->r[28]; // 800912B4
  c->r[4]=c->r[27]|c->r[27]; // 800912B8
  c->r[5]=c->r[25]|c->r[25]; // 800912BC
  c->lr=0x800912C4u; f_80164808(c); // 800912C0
L_800912C4:;
  c->r[24]=c->r[24]+0x00000001u; // 800912C4
  c->r[25]=c->r[25]+0x0000000Cu; // 800912C8
  c->r[27]=c->r[27]+0x0000000Cu; // 800912CC
  c->r[28]=c->r[28]+0x0000000Cu; // 800912D0
  c->r[18]=c->r[18]+0x00000001u; // 800912D4
L_800912D8:;
  c->r[0]=R32(c->r[21]+0x00000010u); // 800912D8
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 800912DC
  if (crb(c,0)) { IRQCHK(c); goto L_800912A8; } // 800912E0
  c->r[26]=c->r[26]+0x00000001u; // 800912E4
L_800912E8:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 800912E8
  c->r[0]=R32(c->r[3]+0x00000028u); // 800912EC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800912F0
  if (crb(c,0)) { IRQCHK(c); goto L_80090EA0; } // 800912F4
  c->r[23]=c->r[1]+0x000006D0u; // 800912F8
  c->r[18]=0u+0x00000000u; // 800912FC
  c->r[24]=c->r[23]|c->r[23]; // 80091300
  c->r[22]=0u+0x00000000u; // 80091304
  goto L_80091370; // 80091308
L_8009130C:;
  c->r[0]=R32(c->r[21]+0x00000004u); // 8009130C
  c->r[3]=c->r[23]|c->r[23]; // 80091310
  c->r[4]=c->r[0]+c->r[22]; // 80091314
  c->r[5]=c->r[4]|c->r[4]; // 80091318
  c->r[5]=c->r[5]+0x0000000Cu; // 8009131C
  c->lr=0x80091324u; f_80164808(c); // 80091320
  c->r[3]=R32(c->r[21]+0x00000000u); // 80091324
  c->r[0]=R32(c->r[21]+0x00000004u); // 80091328
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009132C
  c->r[3]=c->r[0]+c->r[22]; // 80091330
  c->r[3]=c->r[3]+0x0000000Cu; // 80091334
  c->r[4]=c->r[3]|c->r[3]; // 80091338
  c->lr=0x80091340u; f_8016482C(c); // 8009133C
  c->r[0]=R32(c->r[21]+0x00000004u); // 80091340
  c->r[23]=c->r[23]+0x0000000Cu; // 80091344
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091348
  c->r[18]=c->r[18]+0x00000001u; // 8009134C
  c->r[3]=c->r[0]+c->r[22]; // 80091350
  {uint32_t ea=c->r[22]+c->r[0]; WF32(ea,c->f[0]);} // 80091354
  c->r[22]=c->r[22]+0x00000030u; // 80091358
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009135C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80091360
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091364
  c->r[24]=c->r[24]+0x0000000Cu; // 80091368
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8009136C
L_80091370:;
  c->r[0]=R32(c->r[21]+0x00000010u); // 80091370
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 80091374
  if (crb(c,0)) { IRQCHK(c); goto L_8009130C; } // 80091378
  {uint32_t ea=c->r[1]+0xFFFFFA68u; psq_load(c,31,ea,0,0);} // 8009137C
  {uint32_t ea=c->r[1]+0x00000A60u; c->f[31]=RF64(ea);} // 80091380
  {uint32_t ea=c->r[1]+0xFFFFFA58u; psq_load(c,30,ea,0,0);} // 80091384
  {uint32_t ea=c->r[1]+0x00000A50u; c->f[30]=RF64(ea);} // 80091388
  {uint32_t ea=c->r[1]+0xFFFFFA48u; psq_load(c,29,ea,0,0);} // 8009138C
  {uint32_t ea=c->r[1]+0x00000A40u; c->f[29]=RF64(ea);} // 80091390
  {uint32_t ea=c->r[1]+0xFFFFFA38u; psq_load(c,28,ea,0,0);} // 80091394
  {uint32_t ea=c->r[1]+0x00000A30u; c->f[28]=RF64(ea);} // 80091398
  {uint32_t ea=c->r[1]+0xFFFFFA28u; psq_load(c,27,ea,0,0);} // 8009139C
  c->r[11]=c->r[1]+0x00000A20u; // 800913A0
  {uint32_t ea=c->r[1]+0x00000A20u; c->f[27]=RF64(ea);} // 800913A4
  c->lr=0x800913ACu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800913A8
  c->r[0]=R32(c->r[1]+0x00000A74u); // 800913AC
  c->lr=c->r[0]; // 800913B0
  c->r[1]=c->r[1]+0x00000A70u; // 800913B4
  return; // 800913B8
}

// fn_800913BC
void f_800913BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800913BC
  c->r[0]=c->lr; // 800913C0
  W32(c->r[1]+0x00000124u,c->r[0]); // 800913C4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 800913C8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 800913CC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 800913D0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 800913D4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[29]);} // 800913D8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,29,ea,0,0);} // 800913DC
  c->r[11]=c->r[1]+0x000000F0u; // 800913E0
  c->lr=0x800913E8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800913E4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800913E8
  c->r[25]=c->r[3]|c->r[3]; // 800913EC
  {uint32_t ea=c->r[2]+0xFFFF924Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800913F0
  c->r[26]=c->r[5]|c->r[5]; // 800913F4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 800913F8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800913FC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 80091400
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091404
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 80091408
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009140C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 80091410
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091414
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 80091418
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009141C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 80091420
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091424
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 80091428
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009142C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 80091430
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091434
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 80091438
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009143C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 80091440
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80091444
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80091448
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009144C
  c->r[4]=R32(c->r[4]+0x00000000u); // 80091450
  c->lr=0x80091458u; f_8004EB48(c); // 80091454
  cmps(c,0,(int32_t)c->r[3],0); // 80091458
  if (!crb(c,2)) { goto L_8009146C; } // 8009145C
  c->r[3]=c->r[1]+0x00000030u; // 80091460
  c->lr=0x80091468u; f_80163838(c); // 80091464
  goto L_80091474; // 80091468
L_8009146C:;
  c->r[4]=c->r[1]+0x00000030u; // 8009146C
  c->lr=0x80091474u; f_80163864(c); // 80091470
L_80091474:;
  {uint32_t ea=c->r[2]+0xFFFF924Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091474
  c->r[31]=0u+0x80270000u; // 80091478
  c->r[30]=0u+0x80270000u; // 8009147C
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[29]=RF64(ea);} // 80091480
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80091484
  c->r[28]=c->r[26]|c->r[26]; // 80091488
  {uint32_t ea=c->r[2]+0xFFFF9248u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009148C
  c->r[31]=c->r[31]+0x00002414u; // 80091490
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80091494
  c->r[30]=c->r[30]+0x00002408u; // 80091498
  {uint32_t ea=c->r[2]+0xFFFF9258u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009149C
  c->r[27]=0u+0x00000000u; // 800914A0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800914A4
  c->r[29]=0u+0x00000000u; // 800914A8
  c->r[24]=0u+0x43300000u; // 800914AC
  goto L_80091604; // 800914B0
L_800914B4:;
  c->r[3]=c->r[1]+0x00000090u; // 800914B4
  c->r[4]=c->r[1]+0x00000030u; // 800914B8
  c->r[5]=c->r[1]+0x00000060u; // 800914BC
  c->lr=0x800914C4u; f_80163898(c); // 800914C0
  c->r[0]=R32(c->r[25]+0x00000004u); // 800914C4
  c->r[5]=c->r[26]|c->r[26]; // 800914C8
  c->r[3]=c->r[1]+0x00000060u; // 800914CC
  c->r[4]=c->r[0]+c->r[29]; // 800914D0
  c->r[4]=c->r[4]+0x00000018u; // 800914D4
  c->lr=0x800914DCu; f_801643D8(c); // 800914D8
  c->r[0]=R32(c->r[25]+0x00000050u); // 800914DC
  cmps(c,0,(int32_t)c->r[0],1); // 800914E0
  if (crb(c,2)) { goto L_800914FC; } // 800914E4
  if (!crb(c,0)) { goto L_800914F0; } // 800914E8
  goto L_800915D0; // 800914EC
L_800914F0:;
  cmps(c,0,(int32_t)c->r[0],3); // 800914F0
  if (!crb(c,0)) { goto L_800915D0; } // 800914F4
  goto L_8009153C; // 800914F8
L_800914FC:;
  c->r[0]=R32(c->r[25]+0x00000054u); // 800914FC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80091500
  if (crb(c,0)) { goto L_800915D0; } // 80091504
  c->r[0]=R32(c->r[30]+0x00000000u); // 80091508
  c->r[3]=R32(c->r[30]+0x00000004u); // 8009150C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80091510
  c->r[0]=R32(c->r[30]+0x00000008u); // 80091514
  W32(c->r[1]+0x00000024u,c->r[3]); // 80091518
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009151C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80091520
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091524
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[0]);} // 80091528
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009152C
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 80091530
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 80091534
  goto L_800915D0; // 80091538
L_8009153C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8009153C
  if (crb(c,2)) { goto L_800915D0; } // 80091540
  c->r[5]=R32(c->r[31]+0x00000000u); // 80091544
  c->r[0]=c->r[27]^0x80000000u; // 80091548
  c->r[7]=R32(c->r[31]+0x00000004u); // 8009154C
  c->r[4]=c->r[28]|c->r[28]; // 80091550
  c->r[6]=R32(c->r[31]+0x00000008u); // 80091554
  c->r[3]=c->r[1]+0x00000008u; // 80091558
  W32(c->r[1]+0x00000014u,c->r[5]); // 8009155C
  c->r[5]=c->r[1]+0x00000014u; // 80091560
  W32(c->r[1]+0x00000018u,c->r[7]); // 80091564
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80091568
  c->r[6]=R32(c->r[25]+0x00000010u); // 8009156C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80091570
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 80091574
  W32(c->r[1]+0x000000C0u,c->r[24]); // 80091578
  c->r[0]=c->r[0]^0x80000000u; // 8009157C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 80091580
  W32(c->r[1]+0x000000CCu,c->r[0]); // 80091584
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[29]); // 80091588
  W32(c->r[1]+0x000000C8u,c->r[24]); // 8009158C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 80091590
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 80091594
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80091598
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 8009159C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800915A0
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[0]); // 800915A4
  c->lr=0x800915ACu; f_800E5368(c); // 800915A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800915AC
  c->r[3]=c->r[28]|c->r[28]; // 800915B0
  c->r[4]=c->r[26]|c->r[26]; // 800915B4
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[0]);} // 800915B8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800915BC
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[0]);} // 800915C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800915C4
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[0]);} // 800915C8
  c->lr=0x800915D0u; f_80164848(c); // 800915CC
L_800915D0:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 800915D0
  c->r[3]=c->r[28]|c->r[28]; // 800915D4
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800915D8
  c->r[4]=c->r[26]|c->r[26]; // 800915DC
  c->r[5]=c->r[0]+c->r[29]; // 800915E0
  {uint32_t ea=c->r[5]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800915E4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800915E8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800915EC
  c->lr=0x800915F4u; f_8016482C(c); // 800915F0
  c->r[26]=c->r[26]+0x0000000Cu; // 800915F4
  c->r[29]=c->r[29]+0x00000030u; // 800915F8
  c->r[28]=c->r[28]+0x0000000Cu; // 800915FC
  c->r[27]=c->r[27]+0x00000001u; // 80091600
L_80091604:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 80091604
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80091608
  if (crb(c,0)) { IRQCHK(c); goto L_800914B4; } // 8009160C
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 80091610
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 80091614
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 80091618
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 8009161C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,29,ea,0,0);} // 80091620
  c->r[11]=c->r[1]+0x000000F0u; // 80091624
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[29]=RF64(ea);} // 80091628
  c->lr=0x80091630u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009162C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80091630
  c->lr=c->r[0]; // 80091634
  c->r[1]=c->r[1]+0x00000120u; // 80091638
  return; // 8009163C
}

// fn_80091640
void f_80091640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFBC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80091640
  c->r[0]=c->lr; // 80091644
  W32(c->r[1]+0x00000444u,c->r[0]); // 80091648
  {uint32_t ea=c->r[1]+0x00000430u; WF64(ea,c->f[31]);} // 8009164C
  {uint32_t ea=c->r[1]+0x00000438u; psq_store(c,31,ea,0,0);} // 80091650
  {uint32_t ea=c->r[1]+0x00000420u; WF64(ea,c->f[30]);} // 80091654
  {uint32_t ea=c->r[1]+0x00000428u; psq_store(c,30,ea,0,0);} // 80091658
  {uint32_t ea=c->r[1]+0x00000410u; WF64(ea,c->f[29]);} // 8009165C
  {uint32_t ea=c->r[1]+0x00000418u; psq_store(c,29,ea,0,0);} // 80091660
  {uint32_t ea=c->r[1]+0x00000400u; WF64(ea,c->f[28]);} // 80091664
  {uint32_t ea=c->r[1]+0x00000408u; psq_store(c,28,ea,0,0);} // 80091668
  {uint32_t ea=c->r[1]+0x000003F0u; WF64(ea,c->f[27]);} // 8009166C
  {uint32_t ea=c->r[1]+0x000003F8u; psq_store(c,27,ea,0,0);} // 80091670
  c->r[11]=c->r[1]+0x000003F0u; // 80091674
  c->lr=0x8009167Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80091678
  c->r[6]=0u+0x80270000u; // 8009167C
  {uint32_t ea=c->r[6]+0x00002420u; c->r[5]=R32(ea); c->r[6]=ea;} // 80091680
  c->r[29]=R32(c->r[3]+0x00000008u); // 80091684
  c->r[24]=c->r[4]|c->r[4]; // 80091688
  c->r[4]=R32(c->r[6]+0x00000004u); // 8009168C
  c->r[27]=c->r[3]|c->r[3]; // 80091690
  c->r[0]=R32(c->r[6]+0x00000008u); // 80091694
  W32(c->r[1]+0x00000014u,c->r[5]); // 80091698
  W32(c->r[1]+0x00000018u,c->r[4]); // 8009169C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800916A0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800916A4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800916A8
  c->r[4]=R32(c->r[4]+0x00000000u); // 800916AC
  c->lr=0x800916B4u; f_8004EB48(c); // 800916B0
  cmps(c,0,(int32_t)c->r[3],0); // 800916B4
  if (!crb(c,2)) { goto L_800916C8; } // 800916B8
  c->r[3]=c->r[1]+0x00000050u; // 800916BC
  c->lr=0x800916C4u; f_80163838(c); // 800916C0
  goto L_800916D0; // 800916C4
L_800916C8:;
  c->r[4]=c->r[1]+0x00000050u; // 800916C8
  c->lr=0x800916D0u; f_80163864(c); // 800916CC
L_800916D0:;
  c->r[4]=c->r[1]+0x00000050u; // 800916D0
  c->r[3]=c->r[24]|c->r[24]; // 800916D4
  c->r[5]=c->r[4]|c->r[4]; // 800916D8
  c->lr=0x800916E0u; f_80163898(c); // 800916DC
  c->r[3]=c->r[1]+0x00000050u; // 800916E0
  c->r[4]=c->r[3]|c->r[3]; // 800916E4
  c->lr=0x800916ECu; f_80163B4C(c); // 800916E8
  c->r[25]=c->r[1]+0x000000B0u; // 800916EC
  c->r[26]=0u+0x00000000u; // 800916F0
  goto L_80091720; // 800916F4
L_800916F8:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 800916F8
  c->r[5]=c->r[25]|c->r[25]; // 800916FC
  c->r[4]=R32(c->r[27]+0x00000004u); // 80091700
  c->r[3]=c->r[1]+0x00000050u; // 80091704
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[0]); // 80091708
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8009170C
  c->r[4]=c->r[4]+c->r[0]; // 80091710
  c->lr=0x80091718u; f_801643D8(c); // 80091714
  c->r[25]=c->r[25]+0x0000000Cu; // 80091718
  c->r[26]=c->r[26]+0x00000001u; // 8009171C
L_80091720:;
  c->r[0]=R32(c->r[27]+0x00000018u); // 80091720
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80091724
  if (crb(c,0)) { IRQCHK(c); goto L_800916F8; } // 80091728
  c->r[6]=R32(c->r[27]+0x0000000Cu); // 8009172C
  c->r[3]=c->r[29]|c->r[29]; // 80091730
  c->r[4]=c->r[1]+0x00000080u; // 80091734
  c->r[5]=c->r[1]+0x00000014u; // 80091738
  c->r[6]=R32(c->r[6]+0x00000000u); // 8009173C
  c->lr=0x80091744u; f_8004EB98(c); // 80091740
  c->r[0]=0u+0x00000003u; // 80091744
  c->r[6]=c->r[1]+0x00000080u; // 80091748
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[3]=RF64(ea);} // 8009174C
  c->r[7]=0u+0x00000000u; // 80091750
  c->r[4]=0u+0x43300000u; // 80091754
  c->ctr=c->r[0]; // 80091758
L_8009175C:;
  c->r[0]=cntlz(c->r[7]); // 8009175C
  c->r[3]=c->r[7]+0xFFFFFFFFu; // 80091760
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 80091764
  W32(c->r[1]+0x000003B0u,c->r[4]); // 80091768
  c->r[3]=cntlz(c->r[3]); // 8009176C
  c->r[0]=c->r[7]+0xFFFFFFFEu; // 80091770
  W32(c->r[1]+0x000003B4u,c->r[5]); // 80091774
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 80091778
  c->r[0]=cntlz(c->r[0]); // 8009177C
  c->r[7]=c->r[7]+0x00000001u; // 80091780
  {uint32_t ea=c->r[1]+0x000003B0u; c->f[0]=RF64(ea);} // 80091784
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80091788
  W32(c->r[1]+0x000003BCu,c->r[3]); // 8009178C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80091790
  W32(c->r[1]+0x000003B8u,c->r[4]); // 80091794
  {uint32_t ea=c->r[1]+0x000003B8u; c->f[0]=RF64(ea);} // 80091798
  W32(c->r[1]+0x000003C4u,c->r[0]); // 8009179C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 800917A0
  W32(c->r[1]+0x000003C0u,c->r[4]); // 800917A4
  {uint32_t ea=c->r[1]+0x000003C0u; c->f[0]=RF64(ea);} // 800917A8
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[2]);} // 800917AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800917B0
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 800917B4
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 800917B8
  c->r[6]=c->r[6]+0x00000010u; // 800917BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009175C; } // 800917C0
  c->r[6]=R32(c->r[27]+0x0000000Cu); // 800917C4
  c->r[3]=c->r[29]|c->r[29]; // 800917C8
  c->r[4]=c->r[1]+0x00000080u; // 800917CC
  c->r[5]=c->r[1]+0x00000014u; // 800917D0
  c->r[6]=R32(c->r[6]+0x00000000u); // 800917D4
  c->lr=0x800917DCu; f_8004EC0C(c); // 800917D8
  {uint32_t ea=c->r[2]+0xFFFF925Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800917DC
  c->r[30]=c->r[1]+0x000000BCu; // 800917E0
  {uint32_t ea=c->r[2]+0xFFFF9260u; c->f[31]=c->ps1[31]=RF32(ea);} // 800917E4
  c->r[28]=0u+0x00000001u; // 800917E8
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[28]=RF64(ea);} // 800917EC
  c->r[31]=0u+0x00000004u; // 800917F0
  {uint32_t ea=c->r[2]+0xFFFF924Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800917F4
  goto L_80091A7C; // 800917F8
L_800917FC:;
  c->r[6]=R32(c->r[27]+0x0000000Cu); // 800917FC
  c->r[3]=c->r[29]|c->r[29]; // 80091800
  c->r[4]=c->r[1]+0x00000080u; // 80091804
  c->r[5]=c->r[1]+0x00000014u; // 80091808
  c->r[6]=R32(c->r[6]+c->r[31]); // 8009180C
  c->lr=0x80091814u; f_8004EB98(c); // 80091810
  c->r[0]=c->r[28]+0x00000001u; // 80091814
  c->r[4]=c->r[1]+0x000000B0u; // 80091818
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009181C
  c->r[3]=c->r[30]|c->r[30]; // 80091820
  c->r[5]=c->r[1]+0x00000008u; // 80091824
  c->r[4]=c->r[4]+c->r[0]; // 80091828
  c->lr=0x80091830u; f_80164808(c); // 8009182C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091830
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091834
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 80091838
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009183C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80091840
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80091844
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80091848
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8009184C
  fcmp(c,0,c->f[0],c->f[29]); // 80091850
  if (!crb(c,1)) { goto L_80091A20; } // 80091854
  c->lr=0x8009185Cu; f_802586F4(c); // 80091858
  cmps(c,0,(int32_t)c->r[3],1); // 8009185C
  if (crb(c,2)) { goto L_80091A8C; } // 80091860
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80091864
  c->lr=0x8009186Cu; f_802586F4(c); // 80091868
  cmps(c,0,(int32_t)c->r[3],1); // 8009186C
  if (crb(c,2)) { goto L_80091A8C; } // 80091870
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091874
  c->lr=0x8009187Cu; f_802586F4(c); // 80091878
  cmps(c,0,(int32_t)c->r[3],1); // 8009187C
  if (!crb(c,2)) { goto L_80091888; } // 80091880
  goto L_80091A8C; // 80091884
L_80091888:;
  c->r[3]=c->r[1]+0x00000008u; // 80091888
  c->r[4]=c->r[3]|c->r[3]; // 8009188C
  c->lr=0x80091894u; f_80164848(c); // 80091890
  c->r[0]=R32(c->r[27]+0x00000014u); // 80091894
  c->r[4]=c->r[28]+0x00000001u; // 80091898
  c->r[5]=R32(c->r[27]+0x00000004u); // 8009189C
  c->r[3]=c->r[1]+0x00000008u; // 800918A0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800918A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800918A8
  c->r[4]=c->r[5]+c->r[0]; // 800918AC
  c->r[4]=c->r[4]+0x00000018u; // 800918B0
  c->lr=0x800918B8u; f_801648E8(c); // 800918B4
  fcmp(c,0,c->f[1],c->f[30]); // 800918B8
  if (!crb(c,1)) { goto L_800918C8; } // 800918BC
  c->f[1]=c->f[30]; // 800918C0
  goto L_800918D4; // 800918C4
L_800918C8:;
  fcmp(c,0,c->f[1],c->f[31]); // 800918C8
  if (!crb(c,0)) { goto L_800918D4; } // 800918CC
  c->f[1]=c->f[31]; // 800918D0
L_800918D4:;
  c->lr=0x800918D8u; f_80262B98(c); // 800918D4
  c->r[0]=R32(c->r[27]+0x00000014u); // 800918D8
  c->r[4]=c->r[28]+0x00000001u; // 800918DC
  c->r[3]=c->r[1]+0x00000008u; // 800918E0
  c->f[27]=c->ps1[27]=S(c->f[1]); // 800918E4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800918E8
  c->r[4]=R32(c->r[27]+0x00000004u); // 800918EC
  c->r[5]=c->r[3]|c->r[3]; // 800918F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800918F4
  c->r[4]=c->r[4]+c->r[0]; // 800918F8
  c->r[4]=c->r[4]+0x00000018u; // 800918FC
  c->lr=0x80091904u; f_80164908(c); // 80091900
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091904
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091908
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 8009190C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80091910
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80091914
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80091918
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009191C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80091920
  fcmp(c,0,c->f[0],c->f[28]); // 80091924
  if (!crb(c,1)) { goto L_80091A20; } // 80091928
  c->r[3]=c->r[1]+0x00000008u; // 8009192C
  c->r[4]=c->r[3]|c->r[3]; // 80091930
  c->lr=0x80091938u; f_80164848(c); // 80091934
  c->f[1]=c->f[27]; // 80091938
  c->r[3]=c->r[1]+0x00000020u; // 8009193C
  c->r[4]=c->r[1]+0x00000008u; // 80091940
  c->lr=0x80091948u; f_80163E20(c); // 80091944
  c->r[3]=c->r[1]+0x00000020u; // 80091948
  c->r[4]=c->r[1]+0x00000050u; // 8009194C
  c->lr=0x80091954u; f_80163B4C(c); // 80091950
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 80091954
  c->r[24]=c->r[28]+0x00000001u; // 80091958
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009195C
  c->r[25]=c->r[1]+0x000000B0u; // 80091960
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091964
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)12); // 80091968
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 8009196C
  c->r[26]=c->r[25]|c->r[25]; // 80091970
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 80091974
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80091978
  c->r[25]=c->r[25]+c->r[0]; // 8009197C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091980
  c->r[26]=c->r[26]+c->r[0]; // 80091984
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80091988
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009198C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[2]);} // 80091990
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80091994
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 80091998
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009199C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 800919A0
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800919A4
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 800919A8
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 800919AC
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 800919B0
  goto L_800919D4; // 800919B4
L_800919B8:;
  c->r[4]=c->r[26]|c->r[26]; // 800919B8
  c->r[5]=c->r[25]|c->r[25]; // 800919BC
  c->r[3]=c->r[1]+0x00000020u; // 800919C0
  c->lr=0x800919C8u; f_801643D8(c); // 800919C4
  c->r[25]=c->r[25]+0x0000000Cu; // 800919C8
  c->r[26]=c->r[26]+0x0000000Cu; // 800919CC
  c->r[24]=c->r[24]+0x00000001u; // 800919D0
L_800919D4:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 800919D4
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[3]); // 800919D8
  if (crb(c,0)) { IRQCHK(c); goto L_800919B8; } // 800919DC
  c->r[24]=c->r[3]+0xFFFFFFFFu; // 800919E0
  c->r[26]=c->r[1]+0x000000B0u; // 800919E4
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)12); // 800919E8
  c->r[25]=c->r[26]|c->r[26]; // 800919EC
  c->r[26]=c->r[26]+c->r[0]; // 800919F0
  c->r[25]=c->r[25]+c->r[0]; // 800919F4
  goto L_80091A18; // 800919F8
L_800919FC:;
  c->r[3]=c->r[25]|c->r[25]; // 800919FC
  c->r[4]=c->r[30]|c->r[30]; // 80091A00
  c->r[5]=c->r[26]|c->r[26]; // 80091A04
  c->lr=0x80091A0Cu; f_80164808(c); // 80091A08
  c->r[26]=c->r[26]+0xFFFFFFF4u; // 80091A0C
  c->r[25]=c->r[25]+0xFFFFFFF4u; // 80091A10
  c->r[24]=c->r[24]+0xFFFFFFFFu; // 80091A14
L_80091A18:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[28]); // 80091A18
  if (!crb(c,0)) { IRQCHK(c); goto L_800919FC; } // 80091A1C
L_80091A20:;
  cmps(c,0,(int32_t)c->r[28],0); // 80091A20
  if (!crb(c,1)) { goto L_80091A58; } // 80091A24
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80091A28
  {uint32_t ea=c->r[27]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091A2C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80091A30
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80091A34
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80091A38
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 80091A3C
  {uint32_t ea=c->r[27]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091A40
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80091A44
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 80091A48
  {uint32_t ea=c->r[27]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091A4C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80091A50
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 80091A54
L_80091A58:;
  c->r[6]=R32(c->r[27]+0x0000000Cu); // 80091A58
  c->r[3]=c->r[29]|c->r[29]; // 80091A5C
  c->r[4]=c->r[1]+0x00000080u; // 80091A60
  c->r[5]=c->r[1]+0x00000014u; // 80091A64
  c->r[6]=R32(c->r[6]+c->r[31]); // 80091A68
  c->lr=0x80091A70u; f_8004EC0C(c); // 80091A6C
  c->r[31]=c->r[31]+0x00000004u; // 80091A70
  c->r[30]=c->r[30]+0x0000000Cu; // 80091A74
  c->r[28]=c->r[28]+0x00000001u; // 80091A78
L_80091A7C:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 80091A7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80091A80
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80091A84
  if (crb(c,0)) { IRQCHK(c); goto L_800917FC; } // 80091A88
L_80091A8C:;
  {uint32_t ea=c->r[1]+0x00000438u; psq_load(c,31,ea,0,0);} // 80091A8C
  {uint32_t ea=c->r[1]+0x00000430u; c->f[31]=RF64(ea);} // 80091A90
  {uint32_t ea=c->r[1]+0x00000428u; psq_load(c,30,ea,0,0);} // 80091A94
  {uint32_t ea=c->r[1]+0x00000420u; c->f[30]=RF64(ea);} // 80091A98
  {uint32_t ea=c->r[1]+0x00000418u; psq_load(c,29,ea,0,0);} // 80091A9C
  {uint32_t ea=c->r[1]+0x00000410u; c->f[29]=RF64(ea);} // 80091AA0
  {uint32_t ea=c->r[1]+0x00000408u; psq_load(c,28,ea,0,0);} // 80091AA4
  {uint32_t ea=c->r[1]+0x00000400u; c->f[28]=RF64(ea);} // 80091AA8
  {uint32_t ea=c->r[1]+0x000003F8u; psq_load(c,27,ea,0,0);} // 80091AAC
  c->r[11]=c->r[1]+0x000003F0u; // 80091AB0
  {uint32_t ea=c->r[1]+0x000003F0u; c->f[27]=RF64(ea);} // 80091AB4
  c->lr=0x80091ABCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80091AB8
  c->r[0]=R32(c->r[1]+0x00000444u); // 80091ABC
  c->lr=c->r[0]; // 80091AC0
  c->r[1]=c->r[1]+0x00000440u; // 80091AC4
  return; // 80091AC8
}

// fn_80091ACC
void f_80091ACC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80091ACC
  c->r[0]=c->lr; // 80091AD0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80091AD4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80091AD8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 80091ADC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80091AE0
  W32(c->r[1]+0x00000088u,c->r[30]); // 80091AE4
  W32(c->r[1]+0x00000084u,c->r[29]); // 80091AE8
  c->r[29]=c->r[3]|c->r[3]; // 80091AEC
  c->r[0]=R8(c->r[3]+0x00000058u); // 80091AF0
  cmps(c,0,(int32_t)c->r[0],0); // 80091AF4
  if (crb(c,2)) { goto L_80091C60; } // 80091AF8
  c->r[0]=0u+0x00000000u; // 80091AFC
  c->r[3]=c->r[4]|c->r[4]; // 80091B00
  W32(c->r[1]+0x00000044u,c->r[0]); // 80091B04
  c->r[4]=c->r[1]+0x00000050u; // 80091B08
  W32(c->r[1]+0x00000048u,c->r[0]); // 80091B0C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80091B10
  c->lr=0x80091B18u; f_80163864(c); // 80091B14
  c->r[4]=c->r[1]+0x00000044u; // 80091B18
  c->r[3]=c->r[1]+0x00000050u; // 80091B1C
  c->r[5]=c->r[4]|c->r[4]; // 80091B20
  c->lr=0x80091B28u; f_801643D8(c); // 80091B24
  {uint32_t ea=c->r[2]+0xFFFF924Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80091B28
  c->r[30]=0u+0x00000001u; // 80091B2C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091B30
  c->r[31]=0u+0x00000030u; // 80091B34
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[31]);} // 80091B38
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[31]);} // 80091B3C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[31]);} // 80091B40
  c->r[5]=R32(c->r[29]+0x00000004u); // 80091B44
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 80091B48
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 80091B4C
  c->r[3]=R32(c->r[1]+0x00000014u); // 80091B50
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091B54
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 80091B58
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 80091B5C
  c->r[4]=R32(c->r[1]+0x00000018u); // 80091B60
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091B64
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 80091B68
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80091B6C
  W32(c->r[1]+0x00000030u,c->r[4]); // 80091B70
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 80091B74
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091B78
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80091B7C
  c->r[3]=R32(c->r[29]+0x00000004u); // 80091B80
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091B84
  W32(c->r[1]+0x00000034u,c->r[0]); // 80091B88
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80091B8C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091B90
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80091B94
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80091B98
  goto L_80091C54; // 80091B9C
L_80091BA0:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80091BA0
  c->r[4]=c->r[1]+0x00000038u; // 80091BA4
  c->r[3]=c->r[0]+c->r[31]; // 80091BA8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091BAC
  c->r[3]=c->r[3]+0x00000018u; // 80091BB0
  c->f[1]=-c->f[0]; // 80091BB4
  c->lr=0x80091BBCu; f_8016482C(c); // 80091BB8
  c->r[4]=c->r[1]+0x00000038u; // 80091BBC
  c->r[3]=c->r[1]+0x00000050u; // 80091BC0
  c->r[5]=c->r[4]|c->r[4]; // 80091BC4
  c->lr=0x80091BCCu; f_801643D8(c); // 80091BC8
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 80091BCC
  c->r[3]=c->r[1]+0x00000038u; // 80091BD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80091BD4
  c->r[4]=R32(c->r[29]+0x00000004u); // 80091BD8
  c->r[5]=c->r[3]|c->r[3]; // 80091BDC
  c->r[4]=c->r[4]+c->r[0]; // 80091BE0
  c->lr=0x80091BE8u; f_801647E4(c); // 80091BE4
  c->r[0]=R32(c->r[29]+0x00000004u); // 80091BE8
  c->r[30]=c->r[30]+0x00000001u; // 80091BEC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091BF0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 80091BF4
  c->r[3]=c->r[0]+c->r[31]; // 80091BF8
  {uint32_t ea=c->r[31]+c->r[0]; WF32(ea,c->f[0]);} // 80091BFC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80091C00
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091C04
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 80091C08
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80091C0C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80091C10
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091C14
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 80091C18
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80091C1C
  c->r[3]=R32(c->r[1]+0x00000010u); // 80091C20
  W32(c->r[1]+0x00000020u,c->r[0]); // 80091C24
  c->r[0]=R32(c->r[29]+0x00000004u); // 80091C28
  W32(c->r[1]+0x00000024u,c->r[4]); // 80091C2C
  c->r[4]=c->r[0]+c->r[31]; // 80091C30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091C34
  W32(c->r[1]+0x00000028u,c->r[3]); // 80091C38
  c->r[31]=c->r[31]+0x00000030u; // 80091C3C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091C40
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 80091C44
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091C48
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[1]);} // 80091C4C
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 80091C50
L_80091C54:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80091C54
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80091C58
  if (crb(c,0)) { IRQCHK(c); goto L_80091BA0; } // 80091C5C
L_80091C60:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80091C60
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80091C64
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80091C68
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80091C6C
  c->r[30]=R32(c->r[1]+0x00000088u); // 80091C70
  c->r[29]=R32(c->r[1]+0x00000084u); // 80091C74
  c->lr=c->r[0]; // 80091C78
  c->r[1]=c->r[1]+0x000000A0u; // 80091C7C
  return; // 80091C80
}

// fn_80091C84
void f_80091C84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFCA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80091C84
  c->r[0]=c->lr; // 80091C88
  W32(c->r[1]+0x00000364u,c->r[0]); // 80091C8C
  W32(c->r[1]+0x0000035Cu,c->r[31]); // 80091C90
  c->r[31]=c->r[4]|c->r[4]; // 80091C94
  W32(c->r[1]+0x00000358u,c->r[30]); // 80091C98
  c->r[30]=c->r[3]|c->r[3]; // 80091C9C
  c->r[0]=R8(c->r[3]+0x00000058u); // 80091CA0
  cmps(c,0,(int32_t)c->r[0],0); // 80091CA4
  if (crb(c,2)) { goto L_80091DD4; } // 80091CA8
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 80091CAC
  cmps(c,0,(int32_t)c->r[5],0); // 80091CB0
  if (!crb(c,1)) { goto L_80091CC4; } // 80091CB4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80091CB8
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80091CBC
  goto L_80091DD4; // 80091CC0
L_80091CC4:;
  c->r[0]=0u+0x00000000u; // 80091CC4
  c->r[5]=c->r[1]+0x00000050u; // 80091CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80091CCC
  W32(c->r[1]+0x00000018u,c->r[0]); // 80091CD0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80091CD4
  c->lr=0x80091CDCu; f_800913BC(c); // 80091CD8
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80091CDC
  c->r[3]=R32(c->r[30]+0x00000008u); // 80091CE0
  c->r[4]=R32(c->r[4]+0x00000000u); // 80091CE4
  c->lr=0x80091CECu; f_8004EB48(c); // 80091CE8
  cmps(c,0,(int32_t)c->r[3],0); // 80091CEC
  if (!crb(c,2)) { goto L_80091D00; } // 80091CF0
  c->r[3]=c->r[1]+0x00000020u; // 80091CF4
  c->lr=0x80091CFCu; f_80163838(c); // 80091CF8
  goto L_80091D08; // 80091CFC
L_80091D00:;
  c->r[4]=c->r[1]+0x00000020u; // 80091D00
  c->lr=0x80091D08u; f_80163864(c); // 80091D04
L_80091D08:;
  c->r[4]=c->r[1]+0x00000020u; // 80091D08
  c->r[3]=c->r[31]|c->r[31]; // 80091D0C
  c->r[5]=c->r[4]|c->r[4]; // 80091D10
  c->lr=0x80091D18u; f_80163898(c); // 80091D14
  c->r[4]=c->r[1]+0x00000014u; // 80091D18
  c->r[3]=c->r[1]+0x00000020u; // 80091D1C
  c->r[5]=c->r[4]|c->r[4]; // 80091D20
  c->lr=0x80091D28u; f_801643D8(c); // 80091D24
  c->r[3]=R32(c->r[30]+0x00000004u); // 80091D28
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091D2C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80091D30
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091D34
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80091D38
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80091D3C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80091D40
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80091D44
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80091D48
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 80091D4C
  fcmp(c,0,c->f[1],c->f[0]); // 80091D50
  if (!crb(c,1)) { goto L_80091D64; } // 80091D54
  c->r[3]=c->r[30]|c->r[30]; // 80091D58
  c->r[4]=c->r[1]+0x00000020u; // 80091D5C
  c->lr=0x80091D64u; f_80091ACC(c); // 80091D60
L_80091D64:;
  c->r[7]=R32(c->r[1]+0x00000014u); // 80091D64
  c->r[3]=c->r[30]|c->r[30]; // 80091D68
  c->r[6]=R32(c->r[1]+0x00000018u); // 80091D6C
  c->r[4]=c->r[1]+0x00000008u; // 80091D70
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80091D74
  c->r[5]=c->r[1]+0x00000050u; // 80091D78
  W32(c->r[1]+0x00000008u,c->r[7]); // 80091D7C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80091D80
  W32(c->r[1]+0x00000010u,c->r[0]); // 80091D84
  c->lr=0x80091D8Cu; f_80090D6C(c); // 80091D88
  c->r[3]=R32(c->r[30]+0x00000004u); // 80091D8C
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091D90
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80091D94
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091D98
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80091D9C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80091DA0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80091DA4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80091DA8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80091DAC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 80091DB0
  fcmp(c,0,c->f[1],c->f[0]); // 80091DB4
  if (!crb(c,1)) { goto L_80091DC8; } // 80091DB8
  c->r[3]=c->r[30]|c->r[30]; // 80091DBC
  c->r[4]=c->r[1]+0x00000020u; // 80091DC0
  c->lr=0x80091DC8u; f_80091ACC(c); // 80091DC4
L_80091DC8:;
  c->r[3]=c->r[30]|c->r[30]; // 80091DC8
  c->r[4]=c->r[31]|c->r[31]; // 80091DCC
  c->lr=0x80091DD4u; f_80091640(c); // 80091DD0
L_80091DD4:;
  c->r[0]=R32(c->r[1]+0x00000364u); // 80091DD4
  c->r[31]=R32(c->r[1]+0x0000035Cu); // 80091DD8
  c->r[30]=R32(c->r[1]+0x00000358u); // 80091DDC
  c->lr=c->r[0]; // 80091DE0
  c->r[1]=c->r[1]+0x00000360u; // 80091DE4
  return; // 80091DE8
}

// fn_80091DEC
void f_80091DEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80091DEC
  c->r[0]=c->lr; // 80091DF0
  W32(c->r[1]+0x00000054u,c->r[0]); // 80091DF4
  c->r[11]=c->r[1]+0x00000050u; // 80091DF8
  c->lr=0x80091E00u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80091DFC
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80091E00
  c->r[29]=c->r[3]|c->r[3]; // 80091E04
  c->r[30]=c->r[4]|c->r[4]; // 80091E08
  c->r[27]=c->r[6]|c->r[6]; // 80091E0C
  cmps(c,0,(int32_t)c->r[0],0); // 80091E10
  c->r[31]=0u+0x00000000u; // 80091E14
  if (crb(c,2)) { goto L_80091EE0; } // 80091E18
  c->r[28]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 80091E1C
  {uint32_t ea=c->r[2]+0xFFFF924Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091E20
  c->r[3]=c->r[0]+c->r[28]; // 80091E24
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091E28
  fcmp(c,0,c->f[1],c->f[0]); // 80091E2C
  if (!crb(c,1)) { goto L_80091EE0; } // 80091E30
  c->r[0]=0u+0x00000000u; // 80091E34
  c->r[4]=c->r[3]|c->r[3]; // 80091E38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80091E3C
  c->r[5]=c->r[1]+0x00000008u; // 80091E40
  c->r[3]=c->r[3]+0x0000000Cu; // 80091E44
  W32(c->r[1]+0x00000018u,c->r[0]); // 80091E48
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80091E4C
  c->lr=0x80091E54u; f_80164808(c); // 80091E50
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 80091E54
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 80091E58
  c->r[0]=c->r[1]+0x00000008u; // 80091E5C
  c->r[3]=c->r[3]+c->r[28]; // 80091E60
  c->r[5]=c->r[3]+0x00000018u; // 80091E64
  c->r[6]=c->r[27]+c->r[4]; // 80091E68
  W32(c->r[1]+0x00000030u,c->r[5]); // 80091E6C
  c->r[3]=c->r[1]+0x00000020u; // 80091E70
  W32(c->r[1]+0x00000020u,c->r[6]); // 80091E74
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 80091E78
  c->r[4]=c->r[4]+c->r[28]; // 80091E7C
  W32(c->r[1]+0x00000024u,c->r[4]); // 80091E80
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 80091E84
  c->r[4]=c->r[4]+c->r[28]; // 80091E88
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80091E8C
  c->r[0]=c->r[4]+0x0000000Cu; // 80091E90
  W32(c->r[1]+0x00000028u,c->r[0]); // 80091E94
  W32(c->r[1]+0x00000034u,c->r[6]); // 80091E98
  c->lr=0x80091EA0u; f_8008FF84(c); // 80091E9C
  cmps(c,0,(int32_t)c->r[3],0); // 80091EA0
  if (crb(c,2)) { goto L_80091EE0; } // 80091EA4
  c->r[5]=(uint32_t)((int32_t)c->r[30]*(int32_t)48); // 80091EA8
  c->r[0]=R32(c->r[29]+0x00000004u); // 80091EAC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80091EB0
  c->r[4]=0u+0x00000001u; // 80091EB4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80091EB8
  c->r[31]=0u+0x00000001u; // 80091EBC
  c->r[3]=c->r[0]+c->r[5]; // 80091EC0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80091EC4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 80091EC8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80091ECC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80091ED0
  c->r[0]=R32(c->r[29]+0x00000004u); // 80091ED4
  c->r[3]=c->r[0]+c->r[5]; // 80091ED8
  W8(c->r[3]+0x0000002Cu,c->r[4]); // 80091EDC
L_80091EE0:;
  c->r[11]=c->r[1]+0x00000050u; // 80091EE0
  c->r[3]=c->r[31]|c->r[31]; // 80091EE4
  c->lr=0x80091EECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80091EE8
  c->r[0]=R32(c->r[1]+0x00000054u); // 80091EEC
  c->lr=c->r[0]; // 80091EF0
  c->r[1]=c->r[1]+0x00000050u; // 80091EF4
  return; // 80091EF8
}

// fn_80091EFC
void f_80091EFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80091EFC
  c->r[0]=c->lr; // 80091F00
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80091F04
  c->r[11]=c->r[1]+0x000000A0u; // 80091F08
  c->lr=0x80091F10u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80091F0C
  c->r[0]=R32(c->r[3]+0x00000030u); // 80091F10
  c->r[26]=c->r[3]|c->r[3]; // 80091F14
  c->r[27]=c->r[4]|c->r[4]; // 80091F18
  c->r[29]=0u+0x00000000u; // 80091F1C
  cmps(c,0,(int32_t)c->r[0],0); // 80091F20
  if (crb(c,2)) { goto L_80092084; } // 80091F24
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80091F28
  c->r[8]=0u+0x00000000u; // 80091F2C
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80091F30
  c->r[7]=c->r[1]+0x00000060u; // 80091F34
  c->r[24]=c->r[1]+0x0000006Cu; // 80091F38
  W32(c->r[1]+0x00000014u,c->r[8]); // 80091F3C
  c->r[0]=c->r[1]+0x0000002Cu; // 80091F40
  {uint32_t ea=c->r[6]+c->r[9]; c->f[0]=c->ps1[0]=RF32(ea);} // 80091F44
  c->r[30]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80091F48
  c->r[4]=c->r[6]+c->r[9]; // 80091F4C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80091F50
  c->r[25]=c->r[1]+0x00000020u; // 80091F54
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091F58
  c->r[31]=c->r[6]+c->r[30]; // 80091F5C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)36); // 80091F60
  W32(c->r[1]+0x00000018u,c->r[8]); // 80091F64
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80091F68
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091F6C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80091F70
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80091F74
  {uint32_t ea=c->r[6]+c->r[30]; c->f[0]=c->ps1[0]=RF32(ea);} // 80091F78
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80091F7C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091F80
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80091F84
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80091F88
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80091F8C
  W32(c->r[1]+0x00000044u,c->r[7]); // 80091F90
  W32(c->r[1]+0x00000048u,c->r[24]); // 80091F94
  c->r[4]=R32(c->r[3]+0x00000030u); // 80091F98
  c->r[4]=c->r[4]+c->r[5]; // 80091F9C
  W32(c->r[1]+0x0000004Cu,c->r[4]); // 80091FA0
  c->r[4]=R32(c->r[3]+0x00000030u); // 80091FA4
  c->r[4]=c->r[4]+c->r[5]; // 80091FA8
  c->r[4]=c->r[4]+0x0000000Cu; // 80091FAC
  W32(c->r[1]+0x00000050u,c->r[4]); // 80091FB0
  c->r[4]=R32(c->r[3]+0x00000030u); // 80091FB4
  c->r[3]=c->r[1]+0x00000044u; // 80091FB8
  c->r[4]=c->r[4]+c->r[5]; // 80091FBC
  W32(c->r[1]+0x00000058u,c->r[0]); // 80091FC0
  c->r[0]=c->r[4]+0x00000018u; // 80091FC4
  W32(c->r[1]+0x00000054u,c->r[0]); // 80091FC8
  W32(c->r[1]+0x0000005Cu,c->r[25]); // 80091FCC
  c->lr=0x80091FD4u; f_80090424(c); // 80091FD0
  cmps(c,0,(int32_t)c->r[3],0); // 80091FD4
  if (crb(c,2)) { goto L_80092084; } // 80091FD8
  {uint32_t ea=c->r[2]+0xFFFF927Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80091FDC
  c->r[4]=c->r[25]|c->r[25]; // 80091FE0
  c->r[5]=c->r[24]|c->r[24]; // 80091FE4
  c->r[3]=c->r[1]+0x00000008u; // 80091FE8
  c->lr=0x80091FF0u; f_800E5368(c); // 80091FEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80091FF0
  c->r[24]=c->r[31]|c->r[31]; // 80091FF4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80091FF8
  c->r[3]=c->r[1]+0x00000038u; // 80091FFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092000
  c->r[4]=c->r[24]|c->r[24]; // 80092004
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80092008
  c->r[5]=c->r[3]|c->r[3]; // 8009200C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80092010
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80092014
  c->lr=0x8009201Cu; f_80164808(c); // 80092018
  c->r[25]=c->r[27]|c->r[27]; // 8009201C
  goto L_80092040; // 80092020
L_80092024:;
  c->r[3]=c->r[24]|c->r[24]; // 80092024
  c->r[5]=c->r[31]|c->r[31]; // 80092028
  c->r[4]=c->r[1]+0x00000038u; // 8009202C
  c->lr=0x80092034u; f_801647E4(c); // 80092030
  c->r[31]=c->r[31]+0x0000000Cu; // 80092034
  c->r[24]=c->r[24]+0x0000000Cu; // 80092038
  c->r[25]=c->r[25]+0x00000001u; // 8009203C
L_80092040:;
  c->r[0]=R32(c->r[26]+0x00000010u); // 80092040
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80092044
  if (crb(c,0)) { IRQCHK(c); goto L_80092024; } // 80092048
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 8009204C
  c->r[0]=R32(c->r[26]+0x00000004u); // 80092050
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092054
  c->r[4]=0u+0x00000001u; // 80092058
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009205C
  c->r[29]=0u+0x00000001u; // 80092060
  c->r[3]=c->r[0]+c->r[5]; // 80092064
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092068
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8009206C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80092070
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80092074
  c->r[0]=R32(c->r[26]+0x00000004u); // 80092078
  c->r[3]=c->r[0]+c->r[5]; // 8009207C
  W8(c->r[3]+0x0000002Cu,c->r[4]); // 80092080
L_80092084:;
  c->r[11]=c->r[1]+0x000000A0u; // 80092084
  c->r[3]=c->r[29]|c->r[29]; // 80092088
  c->lr=0x80092090u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009208C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80092090
  c->lr=c->r[0]; // 80092094
  c->r[1]=c->r[1]+0x000000A0u; // 80092098
  return; // 8009209C
}

// fn_800920A0
void f_800920A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800920A0
  c->r[0]=c->lr; // 800920A4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800920A8
  c->r[11]=c->r[1]+0x00000090u; // 800920AC
  c->lr=0x800920B4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800920B0
  c->r[0]=R32(c->r[3]+0x00000034u); // 800920B4
  c->r[26]=c->r[3]|c->r[3]; // 800920B8
  c->r[27]=c->r[4]|c->r[4]; // 800920BC
  c->r[29]=0u+0x00000000u; // 800920C0
  cmps(c,0,(int32_t)c->r[0],0); // 800920C4
  if (crb(c,2)) { goto L_800921E4; } // 800920C8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800920CC
  c->r[8]=0u+0x00000000u; // 800920D0
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800920D4
  c->r[7]=c->r[1]+0x00000058u; // 800920D8
  c->r[24]=c->r[1]+0x00000064u; // 800920DC
  W32(c->r[1]+0x00000014u,c->r[8]); // 800920E0
  c->r[0]=c->r[1]+0x0000002Cu; // 800920E4
  {uint32_t ea=c->r[6]+c->r[9]; c->f[0]=c->ps1[0]=RF32(ea);} // 800920E8
  c->r[30]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800920EC
  c->r[4]=c->r[6]+c->r[9]; // 800920F0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800920F4
  c->r[25]=c->r[1]+0x00000020u; // 800920F8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800920FC
  c->r[31]=c->r[6]+c->r[30]; // 80092100
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)36); // 80092104
  W32(c->r[1]+0x00000018u,c->r[8]); // 80092108
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8009210C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092110
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80092114
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80092118
  {uint32_t ea=c->r[6]+c->r[30]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009211C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80092120
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092124
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80092128
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009212C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80092130
  W32(c->r[1]+0x00000038u,c->r[7]); // 80092134
  W32(c->r[1]+0x0000003Cu,c->r[24]); // 80092138
  c->r[4]=R32(c->r[3]+0x00000034u); // 8009213C
  c->r[4]=c->r[4]+c->r[5]; // 80092140
  W32(c->r[1]+0x00000040u,c->r[4]); // 80092144
  c->r[4]=R32(c->r[3]+0x00000034u); // 80092148
  c->r[4]=c->r[4]+c->r[5]; // 8009214C
  c->r[4]=c->r[4]+0x0000000Cu; // 80092150
  W32(c->r[1]+0x00000044u,c->r[4]); // 80092154
  c->r[4]=R32(c->r[3]+0x00000034u); // 80092158
  c->r[3]=c->r[1]+0x00000038u; // 8009215C
  c->r[4]=c->r[4]+c->r[5]; // 80092160
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 80092164
  c->r[0]=c->r[4]+0x00000018u; // 80092168
  W32(c->r[1]+0x00000048u,c->r[0]); // 8009216C
  W32(c->r[1]+0x00000050u,c->r[25]); // 80092170
  c->lr=0x80092178u; f_80090110(c); // 80092174
  cmps(c,0,(int32_t)c->r[3],0); // 80092178
  if (crb(c,2)) { goto L_800921E4; } // 8009217C
  {uint32_t ea=c->r[2]+0xFFFF927Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80092180
  c->r[4]=c->r[25]|c->r[25]; // 80092184
  c->r[5]=c->r[24]|c->r[24]; // 80092188
  c->r[3]=c->r[1]+0x00000008u; // 8009218C
  c->lr=0x80092194u; f_800E5368(c); // 80092190
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092194
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 80092198
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009219C
  c->r[4]=0u+0x00000001u; // 800921A0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800921A4
  c->r[29]=0u+0x00000001u; // 800921A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800921AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800921B0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800921B4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[3]);} // 800921B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800921BC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[3]);} // 800921C0
  c->r[0]=R32(c->r[26]+0x00000004u); // 800921C4
  c->r[3]=c->r[0]+c->r[5]; // 800921C8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 800921CC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 800921D0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800921D4
  c->r[0]=R32(c->r[26]+0x00000004u); // 800921D8
  c->r[3]=c->r[0]+c->r[5]; // 800921DC
  W8(c->r[3]+0x0000002Cu,c->r[4]); // 800921E0
L_800921E4:;
  c->r[11]=c->r[1]+0x00000090u; // 800921E4
  c->r[3]=c->r[29]|c->r[29]; // 800921E8
  c->lr=0x800921F0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800921EC
  c->r[0]=R32(c->r[1]+0x00000094u); // 800921F0
  c->lr=c->r[0]; // 800921F4
  c->r[1]=c->r[1]+0x00000090u; // 800921F8
  return; // 800921FC
}

// fn_80092200
void f_80092200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80092200
  c->r[0]=c->lr; // 80092204
  {uint32_t ea=c->r[2]+0xFFFF9280u; c->f[9]=c->ps1[9]=RF32(ea);} // 80092208
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009220C
  c->r[0]=0u+0x00000001u; // 80092210
  {uint32_t ea=c->r[2]+0xFFFF9284u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092214
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[9]);} // 80092218
  {uint32_t ea=c->r[2]+0xFFFF9288u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009221C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80092220
  c->r[31]=0u+0x00000000u; // 80092224
  c->r[9]=R32(c->r[1]+0x00000014u); // 80092228
  W32(c->r[1]+0x00000038u,c->r[30]); // 8009222C
  c->r[30]=c->r[3]|c->r[3]; // 80092230
  {uint32_t ea=c->r[2]+0xFFFF928Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092234
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[9]);} // 80092238
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[9]);} // 8009223C
  c->r[8]=R32(c->r[1]+0x00000018u); // 80092240
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 80092244
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 80092248
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[9]);} // 8009224C
  c->r[6]=R32(c->r[1]+0x00000008u); // 80092250
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 80092254
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80092258
  c->r[4]=R32(c->r[1]+0x00000010u); // 8009225C
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 80092260
  W32(c->r[1]+0x00000030u,c->r[8]); // 80092264
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80092268
  W32(c->r[1]+0x00000034u,c->r[7]); // 8009226C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[7]=c->ps1[7]=RF32(ea);} // 80092270
  W32(c->r[1]+0x00000020u,c->r[6]); // 80092274
  {uint32_t ea=c->r[1]+0x00000034u; c->f[6]=c->ps1[6]=RF32(ea);} // 80092278
  W32(c->r[1]+0x00000024u,c->r[5]); // 8009227C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 80092280
  W32(c->r[1]+0x00000028u,c->r[4]); // 80092284
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 80092288
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009228C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[8]);} // 80092290
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[7]);} // 80092294
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[6]);} // 80092298
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[5]);} // 8009229C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[4]);} // 800922A0
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[3]);} // 800922A4
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[2]);} // 800922A8
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 800922AC
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[9]);} // 800922B0
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 800922B4
  W32(c->r[3]+0x00000084u,c->r[0]); // 800922B8
  W32(c->r[3]+0x00000088u,c->r[31]); // 800922BC
  W32(c->r[3]+0x0000008Cu,c->r[31]); // 800922C0
  W32(c->r[3]+0x00000090u,c->r[31]); // 800922C4
  c->lr=0x800922CCu; f_80090708(c); // 800922C8
  c->r[3]=c->r[30]|c->r[30]; // 800922CC
  c->r[4]=c->r[30]+0x0000005Cu; // 800922D0
  c->lr=0x800922D8u; f_80090820(c); // 800922D4
  c->r[4]=0u+0x80090000u; // 800922D8
  c->r[3]=c->r[30]|c->r[30]; // 800922DC
  c->r[4]=c->r[4]+0x00002560u; // 800922E0
  c->lr=0x800922E8u; f_80090860(c); // 800922E4
  {uint32_t ea=c->r[2]+0xFFFF928Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800922E8
  c->r[3]=c->r[30]|c->r[30]; // 800922EC
  c->lr=0x800922F4u; f_80090830(c); // 800922F0
  {uint32_t ea=c->r[2]+0xFFFF928Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800922F4
  c->r[3]=c->r[30]|c->r[30]; // 800922F8
  c->lr=0x80092300u; f_80090838(c); // 800922FC
  W8(c->r[30]+0x00000094u,c->r[31]); // 80092300
  W32(c->r[30]+0x000001F8u,c->r[31]); // 80092304
  W32(c->r[30]+0x000001FCu,c->r[31]); // 80092308
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8009230C
  c->r[30]=R32(c->r[1]+0x00000038u); // 80092310
  c->r[0]=R32(c->r[1]+0x00000044u); // 80092314
  c->lr=c->r[0]; // 80092318
  c->r[1]=c->r[1]+0x00000040u; // 8009231C
  return; // 80092320
}

// fn_80092324
void f_80092324(Ctx* __restrict c) {
  f_80090774(c); return; // 80092324
}

// fn_80092328
void f_80092328(Ctx* __restrict c) {
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 80092328
  c->r[6]=0u+0x00000001u; // 8009232C
  W32(c->r[3]+0x00000090u,c->r[5]); // 80092330
  f_800907B8(c); return; // 80092334
}

// fn_80092338
void f_80092338(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000004u); // 80092338
  c->r[6]=0u+0x00000001u; // 8009233C
  c->r[4]=R32(c->r[4]+0x00000000u); // 80092340
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 80092344
  W32(c->r[3]+0x00000090u,c->r[5]); // 80092348
  f_800907B8(c); return; // 8009234C
}

// fn_80092350
void f_80092350(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 80092350
  return; // 80092354
}

// fn_80092358
void f_80092358(Ctx* __restrict c) {
  W32(c->r[3]+0x00000088u,c->r[4]); // 80092358
  f_80090828(c); return; // 8009235C
}

// fn_80092360
void f_80092360(Ctx* __restrict c) {
  f_800908C8(c); return; // 80092360
}

// fn_80092364
void f_80092364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80092364
  c->r[0]=c->lr; // 80092368
  W32(c->r[1]+0x00000084u,c->r[0]); // 8009236C
  c->r[4]=c->r[1]+0x00000048u; // 80092370
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 80092374
  W32(c->r[1]+0x00000078u,c->r[30]); // 80092378
  c->r[30]=c->r[3]|c->r[3]; // 8009237C
  c->r[5]=R32(c->r[3]+0x00000088u); // 80092380
  c->r[3]=c->r[5]+0x00000004u; // 80092384
  c->lr=0x8009238Cu; f_80163864(c); // 80092388
  c->r[3]=c->r[30]|c->r[30]; // 8009238C
  c->r[4]=c->r[1]+0x00000048u; // 80092390
  c->r[5]=0u+0x00000001u; // 80092394
  c->r[6]=0u+0x00000002u; // 80092398
  c->lr=0x800923A0u; f_800908D0(c); // 8009239C
  c->r[3]=c->r[30]|c->r[30]; // 800923A0
  c->lr=0x800923A8u; f_800908C8(c); // 800923A4
  cmps(c,0,(int32_t)c->r[3],0); // 800923A8
  if (crb(c,2)) { goto L_800923E0; } // 800923AC
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 800923B0
  c->r[4]=c->r[1]+0x00000008u; // 800923B4
  c->r[31]=R32(c->r[30]+0x00000088u); // 800923B8
  c->r[5]=R32(c->r[3]+0x00000000u); // 800923BC
  c->r[3]=c->r[31]|c->r[31]; // 800923C0
  c->lr=0x800923C8u; f_8004EA68(c); // 800923C4
  c->r[3]=c->r[31]+0x00000004u; // 800923C8
  c->r[4]=c->r[1]+0x00000018u; // 800923CC
  c->lr=0x800923D4u; f_80163864(c); // 800923D0
  c->r[3]=c->r[30]|c->r[30]; // 800923D4
  c->r[4]=c->r[1]+0x00000018u; // 800923D8
  c->lr=0x800923E0u; f_80091ACC(c); // 800923DC
L_800923E0:;
  c->r[0]=0u+0x00000001u; // 800923E0
  W8(c->r[30]+0x00000094u,c->r[0]); // 800923E4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800923E8
  c->r[30]=R32(c->r[1]+0x00000078u); // 800923EC
  c->r[0]=R32(c->r[1]+0x00000084u); // 800923F0
  c->lr=c->r[0]; // 800923F4
  c->r[1]=c->r[1]+0x00000080u; // 800923F8
  return; // 800923FC
}

// fn_80092400
void f_80092400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80092400
  c->r[0]=c->lr; // 80092404
  W32(c->r[1]+0x00000014u,c->r[0]); // 80092408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009240C
  c->r[31]=c->r[3]|c->r[3]; // 80092410
  c->lr=0x80092418u; f_80090D60(c); // 80092414
  c->r[0]=0u+0x00000000u; // 80092418
  W8(c->r[31]+0x00000094u,c->r[0]); // 8009241C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80092420
  c->r[0]=R32(c->r[1]+0x00000014u); // 80092424
  c->lr=c->r[0]; // 80092428
  c->r[1]=c->r[1]+0x00000010u; // 8009242C
  return; // 80092430
}

// fn_80092434
void f_80092434(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80092434
  c->r[0]=c->lr; // 80092438
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009243C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80092440
  W32(c->r[1]+0x00000048u,c->r[30]); // 80092444
  c->r[30]=c->r[3]|c->r[3]; // 80092448
  c->lr=0x80092450u; f_800908C8(c); // 8009244C
  cmps(c,0,(int32_t)c->r[3],0); // 80092450
  if (crb(c,2)) { goto L_80092488; } // 80092454
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 80092458
  c->r[4]=c->r[1]+0x00000008u; // 8009245C
  c->r[31]=R32(c->r[30]+0x00000088u); // 80092460
  c->r[5]=R32(c->r[3]+0x00000000u); // 80092464
  c->r[3]=c->r[31]|c->r[31]; // 80092468
  c->lr=0x80092470u; f_8004EA68(c); // 8009246C
  c->r[3]=c->r[31]+0x00000004u; // 80092470
  c->r[4]=c->r[1]+0x00000018u; // 80092474
  c->lr=0x8009247Cu; f_80163864(c); // 80092478
  c->r[3]=c->r[30]|c->r[30]; // 8009247C
  c->r[4]=c->r[1]+0x00000018u; // 80092480
  c->lr=0x80092488u; f_80091ACC(c); // 80092484
L_80092488:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80092488
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8009248C
  c->r[30]=R32(c->r[1]+0x00000048u); // 80092490
  c->lr=c->r[0]; // 80092494
  c->r[1]=c->r[1]+0x00000050u; // 80092498
  return; // 8009249C
}

// fn_800924A0
void f_800924A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFCA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800924A0
  c->r[0]=c->lr; // 800924A4
  W32(c->r[1]+0x00000364u,c->r[0]); // 800924A8
  {uint32_t ea=c->r[1]+0x00000358u; WF64(ea,c->f[31]);} // 800924AC
  c->f[31]=c->f[1]; // 800924B0
  W32(c->r[1]+0x00000354u,c->r[31]); // 800924B4
  W32(c->r[1]+0x00000350u,c->r[30]); // 800924B8
  c->r[30]=c->r[3]|c->r[3]; // 800924BC
  c->lr=0x800924C4u; f_800908C8(c); // 800924C0
  cmps(c,0,(int32_t)c->r[3],0); // 800924C4
  if (crb(c,2)) { goto L_80092540; } // 800924C8
  c->r[0]=R8(c->r[30]+0x00000094u); // 800924CC
  cmps(c,0,(int32_t)c->r[0],0); // 800924D0
  if (crb(c,2)) { goto L_80092540; } // 800924D4
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 800924D8
  c->r[4]=c->r[1]+0x00000008u; // 800924DC
  c->r[31]=R32(c->r[30]+0x00000088u); // 800924E0
  c->r[5]=R32(c->r[3]+0x00000000u); // 800924E4
  c->r[3]=c->r[31]|c->r[31]; // 800924E8
  c->lr=0x800924F0u; f_8004EA68(c); // 800924EC
  c->r[3]=c->r[31]+0x00000004u; // 800924F0
  c->r[4]=c->r[1]+0x00000018u; // 800924F4
  c->lr=0x800924FCu; f_80163864(c); // 800924F8
  c->r[5]=R32(c->r[30]+0x000001F8u); // 800924FC
  c->r[3]=c->r[30]|c->r[30]; // 80092500
  c->r[4]=c->r[30]+0x00000098u; // 80092504
  c->lr=0x8009250Cu; f_80090848(c); // 80092508
  c->r[5]=R32(c->r[30]+0x000001FCu); // 8009250C
  c->r[3]=c->r[30]|c->r[30]; // 80092510
  c->r[4]=c->r[30]+0x00000118u; // 80092514
  c->lr=0x8009251Cu; f_80090854(c); // 80092518
  c->f[1]=c->f[31]; // 8009251C
  c->r[3]=c->r[30]|c->r[30]; // 80092520
  c->lr=0x80092528u; f_80090840(c); // 80092524
  c->r[3]=c->r[30]|c->r[30]; // 80092528
  c->r[4]=c->r[1]+0x00000018u; // 8009252C
  c->lr=0x80092534u; f_80091C84(c); // 80092530
  c->r[3]=c->r[30]|c->r[30]; // 80092534
  c->r[4]=c->r[1]+0x00000048u; // 80092538
  c->lr=0x80092540u; f_80090868(c); // 8009253C
L_80092540:;
  c->r[0]=R32(c->r[1]+0x00000364u); // 80092540
  {uint32_t ea=c->r[1]+0x00000358u; c->f[31]=RF64(ea);} // 80092544
  c->r[31]=R32(c->r[1]+0x00000354u); // 80092548
  c->r[30]=R32(c->r[1]+0x00000350u); // 8009254C
  c->lr=c->r[0]; // 80092550
  c->r[1]=c->r[1]+0x00000360u; // 80092554
  return; // 80092558
}

// fn_8009255C
void f_8009255C(Ctx* __restrict c) {
  f_80090860(c); return; // 8009255C
}

// fn_80092560
void f_80092560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80092560
  c->r[0]=c->lr; // 80092564
  W32(c->r[1]+0x000002F4u,c->r[0]); // 80092568
  {uint32_t ea=c->r[1]+0x000002E0u; WF64(ea,c->f[31]);} // 8009256C
  {uint32_t ea=c->r[1]+0x000002E8u; psq_store(c,31,ea,0,0);} // 80092570
  c->r[11]=c->r[1]+0x000002E0u; // 80092574
  c->lr=0x8009257Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80092578
  c->r[25]=c->r[3]|c->r[3]; // 8009257C
  c->r[26]=c->r[4]|c->r[4]; // 80092580
  c->r[30]=0u+0x00000000u; // 80092584
  c->lr=0x8009258Cu; f_8007AB30(c); // 80092588
  c->r[29]=c->r[3]|c->r[3]; // 8009258C
  c->r[5]=c->r[26]|c->r[26]; // 80092590
  c->r[4]=c->r[1]+0x00000014u; // 80092594
  c->lr=0x8009259Cu; f_80079C8C(c); // 80092598
  cmps(c,0,(int32_t)c->r[3],0); // 8009259C
  if (!crb(c,2)) { goto L_800925AC; } // 800925A0
  c->r[3]=0u+0x00000000u; // 800925A4
  goto L_80092658; // 800925A8
L_800925AC:;
  {uint32_t ea=c->r[2]+0xFFFF9290u; c->f[31]=c->ps1[31]=RF32(ea);} // 800925AC
  c->r[31]=c->r[1]+0x00000014u; // 800925B0
  c->r[27]=0u+0xFFFFFFFFu; // 800925B4
  c->r[28]=0u+0x00000000u; // 800925B8
  goto L_80092614; // 800925BC
L_800925C0:;
  c->r[4]=R32(c->r[31]+0x00000244u); // 800925C0
  c->r[3]=c->r[29]|c->r[29]; // 800925C4
  c->lr=0x800925CCu; f_800789D0(c); // 800925C8
  c->lr=0x800925D0u; f_80078264(c); // 800925CC
  cmps(c,0,(int32_t)c->r[3],1); // 800925D0
  if (crb(c,2)) { goto L_8009260C; } // 800925D4
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 800925D8
  c->r[3]=c->r[1]+0x00000018u; // 800925DC
  c->r[4]=c->r[26]|c->r[26]; // 800925E0
  c->r[5]=c->r[1]+0x00000008u; // 800925E4
  c->r[3]=c->r[3]+c->r[0]; // 800925E8
  c->lr=0x800925F0u; f_80164808(c); // 800925EC
  c->r[3]=c->r[1]+0x00000008u; // 800925F0
  c->lr=0x800925F8u; f_801648A4(c); // 800925F4
  fcmp(c,0,c->f[31],c->f[1]); // 800925F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800925FC
  if (crb(c,2)) { goto L_8009260C; } // 80092600
  c->r[27]=c->r[28]|c->r[28]; // 80092604
  c->f[31]=c->f[1]; // 80092608
L_8009260C:;
  c->r[31]=c->r[31]+0x00000004u; // 8009260C
  c->r[28]=c->r[28]+0x00000001u; // 80092610
L_80092614:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80092614
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80092618
  if (crb(c,0)) { IRQCHK(c); goto L_800925C0; } // 8009261C
  cmps(c,0,(int32_t)c->r[27],0); // 80092620
  if (crb(c,0)) { goto L_80092654; } // 80092624
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 80092628
  c->r[5]=c->r[1]+0x00000018u; // 8009262C
  c->r[4]=c->r[1]+0x0000001Cu; // 80092630
  c->r[3]=c->r[1]+0x00000020u; // 80092634
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80092638
  c->r[30]=0u+0x00000001u; // 8009263C
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 80092640
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80092644
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[0]);} // 80092648
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009264C
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[0]);} // 80092650
L_80092654:;
  c->r[3]=c->r[30]|c->r[30]; // 80092654
L_80092658:;
  {uint32_t ea=c->r[1]+0x000002E8u; psq_load(c,31,ea,0,0);} // 80092658
  c->r[11]=c->r[1]+0x000002E0u; // 8009265C
  {uint32_t ea=c->r[1]+0x000002E0u; c->f[31]=RF64(ea);} // 80092660
  c->lr=0x80092668u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80092664
  c->r[0]=R32(c->r[1]+0x000002F4u); // 80092668
  c->lr=c->r[0]; // 8009266C
  c->r[1]=c->r[1]+0x000002F0u; // 80092670
  return; // 80092674
}

// fn_80092678
void f_80092678(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80092678
  c->r[0]=c->lr; // 8009267C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80092680
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80092684
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80092688
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8009268C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80092690
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80092694
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80092698
  c->f[30]=c->f[1]; // 8009269C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800926A0
  c->r[31]=c->r[7]|c->r[7]; // 800926A4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800926A8
  c->r[30]=c->r[6]|c->r[6]; // 800926AC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800926B0
  c->r[29]=c->r[5]|c->r[5]; // 800926B4
  W32(c->r[1]+0x00000020u,c->r[28]); // 800926B8
  c->r[28]=c->r[3]|c->r[3]; // 800926BC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800926C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800926C4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800926C8
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[0]); // 800926CC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800926D0
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800926D4
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 800926D8
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[4]); // 800926DC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 800926E0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 800926E4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800926E8
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[1]); // 800926EC
  fcmp(c,0,c->f[29],c->f[0]); // 800926F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800926F4
  if (crb(c,2)) { goto L_80092718; } // 800926F8
  c->r[3]=0u+0x80290000u; // 800926FC
  c->r[5]=0u+0x80290000u; // 80092700
  c->r[3]=c->r[3]+0xFFFFBDDCu; // 80092704
  c->r[4]=0u+0x00000273u; // 80092708
  c->r[5]=c->r[5]+0xFFFFBDB8u; // 8009270C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80092710
  c->lr=0x80092718u; f_800FD7D8(c); // 80092714
L_80092718:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[31]=c->ps1[31]=RF32(ea);} // 80092718
  fcmp(c,0,c->f[29],c->f[31]); // 8009271C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80092720
  if (!crb(c,2)) { goto L_8009272C; } // 80092724
  goto L_80092738; // 80092728
L_8009272C:;
  c->f[1]=c->f[29]; // 8009272C
  c->lr=0x80092734u; f_800FDAA4(c); // 80092730
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 80092734
L_80092738:;
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092738
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 8009273C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80092740
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 80092744
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80092748
  cmps(c,0,(int32_t)c->r[0],0); // 8009274C
  if (!crb(c,2)) { goto L_8009275C; } // 80092750
  c->r[3]=0u+0x00000000u; // 80092754
  goto L_80092940; // 80092758
L_8009275C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009275C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092760
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 80092764
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092768
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 8009276C
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[1]); // 80092770
  fcmp(c,0,c->f[29],c->f[0]); // 80092774
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80092778
  if (crb(c,2)) { goto L_8009279C; } // 8009277C
  c->r[3]=0u+0x80290000u; // 80092780
  c->r[5]=0u+0x80290000u; // 80092784
  c->r[3]=c->r[3]+0xFFFFBDDCu; // 80092788
  c->r[4]=0u+0x00000273u; // 8009278C
  c->r[5]=c->r[5]+0xFFFFBDB8u; // 80092790
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80092794
  c->lr=0x8009279Cu; f_800FD7D8(c); // 80092798
L_8009279C:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009279C
  fcmp(c,0,c->f[29],c->f[2]); // 800927A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800927A4
  if (!crb(c,2)) { goto L_800927B0; } // 800927A8
  goto L_800927BC; // 800927AC
L_800927B0:;
  c->f[1]=c->f[29]; // 800927B0
  c->lr=0x800927B8u; f_800FDAA4(c); // 800927B4
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[1]); // 800927B8
L_800927BC:;
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800927BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800927C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800927C4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800927C8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800927CC
  cmps(c,0,(int32_t)c->r[0],0); // 800927D0
  if (!crb(c,2)) { goto L_800927E8; } // 800927D4
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800927D8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800927DC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800927E0
  goto L_80092800; // 800927E4
L_800927E8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800927E8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800927EC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 800927F0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 800927F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800927F8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800927FC
L_80092800:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092800
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[30]); // 80092804
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092808
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009280C
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[0]); // 80092810
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092814
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092818
  c->f[6]=c->ps1[6]=S(c->f[3]-c->f[2]); // 8009281C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 80092820
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[0]); // 80092824
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[7]); // 80092828
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009282C
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[6]); // 80092830
  c->f[4]=c->ps1[4]=S(c->f[6]*c->f[4]); // 80092834
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[7]);} // 80092838
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 8009283C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[6]);} // 80092840
  c->f[29]=c->ps1[29]=S(c->f[5]+c->f[4]); // 80092844
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 80092848
  fcmp(c,0,c->f[2],c->f[0]); // 8009284C
  if (!crb(c,1)) { goto L_80092864; } // 80092850
  fcmp(c,0,c->f[29],c->f[0]); // 80092854
  if (!crb(c,1)) { goto L_80092864; } // 80092858
  c->r[3]=0u+0x00000000u; // 8009285C
  goto L_80092940; // 80092860
L_80092864:;
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[29]); // 80092864
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092868
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[2]); // 8009286C
  fcmp(c,0,c->f[30],c->f[0]); // 80092870
  if (!crb(c,0)) { goto L_80092880; } // 80092874
  c->r[3]=0u+0x00000000u; // 80092878
  goto L_80092940; // 8009287C
L_80092880:;
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80092880
  if (crb(c,2)) { goto L_800928A4; } // 80092884
  c->r[3]=0u+0x80290000u; // 80092888
  c->r[5]=0u+0x80290000u; // 8009288C
  c->r[3]=c->r[3]+0xFFFFBDDCu; // 80092890
  c->r[4]=0u+0x00000273u; // 80092894
  c->r[5]=c->r[5]+0xFFFFBDB8u; // 80092898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009289C
  c->lr=0x800928A4u; f_800FD7D8(c); // 800928A0
L_800928A4:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 800928A4
  fcmp(c,0,c->f[30],c->f[2]); // 800928A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800928AC
  if (!crb(c,2)) { goto L_800928B8; } // 800928B0
  goto L_800928C4; // 800928B4
L_800928B8:;
  c->f[1]=c->f[30]; // 800928B8
  c->lr=0x800928C0u; f_800FDAA4(c); // 800928BC
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[1]); // 800928C0
L_800928C4:;
  c->f[1]=-c->f[29]; // 800928C4
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800928C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800928CC
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[31]); // 800928D0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 800928D4
  fcmp(c,0,c->f[4],c->f[0]); // 800928D8
  if (!crb(c,1)) { goto L_800928EC; } // 800928DC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[4]);} // 800928E0
  c->r[3]=0u+0x00000000u; // 800928E4
  goto L_80092940; // 800928E8
L_800928EC:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 800928EC
  fcmp(c,0,c->f[1],c->f[2]); // 800928F0
  if (!crb(c,0)) { goto L_800928FC; } // 800928F4
  goto L_80092900; // 800928F8
L_800928FC:;
  c->f[2]=c->f[1]; // 800928FC
L_80092900:;
  c->f[3]=c->ps1[3]=S(c->f[2]); // 80092900
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092904
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092908
  c->r[3]=0u+0x00000001u; // 8009290C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 80092910
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[3]); // 80092914
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092918
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8009291C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80092920
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 80092924
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80092928
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 8009292C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092930
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80092934
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 80092938
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[4]);} // 8009293C
L_80092940:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80092940
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80092944
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80092948
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8009294C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80092950
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80092954
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80092958
  c->r[30]=R32(c->r[1]+0x00000028u); // 8009295C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80092960
  c->r[0]=R32(c->r[1]+0x00000064u); // 80092964
  c->r[28]=R32(c->r[1]+0x00000020u); // 80092968
  c->lr=c->r[0]; // 8009296C
  c->r[1]=c->r[1]+0x00000060u; // 80092970
  return; // 80092974
}

// fn_80092978
void f_80092978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80092978
  c->r[0]=c->lr; // 8009297C
  W32(c->r[1]+0x00000134u,c->r[0]); // 80092980
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 80092984
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 80092988
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 8009298C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 80092990
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 80092994
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 80092998
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[28]);} // 8009299C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,28,ea,0,0);} // 800929A0
  c->r[11]=c->r[1]+0x000000F0u; // 800929A4
  c->lr=0x800929ACu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800929A8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800929AC
  c->f[28]=c->f[1]; // 800929B0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800929B4
  c->r[30]=c->r[3]|c->r[3]; // 800929B8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 800929BC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 800929C0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 800929C4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 800929C8
  c->r[26]=c->r[4]|c->r[4]; // 800929CC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 800929D0
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 800929D4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 800929D8
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800929DC
  c->f[8]=c->ps1[8]=S(c->f[10]+c->f[6]); // 800929E0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800929E4
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[5]); // 800929E8
  c->f[6]=c->ps1[6]=S(c->f[4]+c->f[6]); // 800929EC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800929F0
  fcmp(c,0,c->f[30],c->f[0]); // 800929F4
  {uint32_t ea=c->r[7]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800929F8
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[5]); // 800929FC
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092A00
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[1]); // 80092A04
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[10]);} // 80092A08
  {uint32_t ea=c->r[7]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092A0C
  c->r[27]=c->r[5]|c->r[5]; // 80092A10
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092A14
  c->r[28]=c->r[6]|c->r[6]; // 80092A18
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80092A1C
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[9]);} // 80092A20
  c->r[29]=c->r[7]|c->r[7]; // 80092A24
  c->r[31]=c->r[8]|c->r[8]; // 80092A28
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[10]);} // 80092A2C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[9]);} // 80092A30
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[8]);} // 80092A34
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[7]);} // 80092A38
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[6]);} // 80092A3C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[5]);} // 80092A40
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[4]);} // 80092A44
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80092A48
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[3]);} // 80092A4C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 80092A50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80092A54
  if (crb(c,2)) { goto L_80092A78; } // 80092A58
  c->r[3]=0u+0x80290000u; // 80092A5C
  c->r[5]=0u+0x80290000u; // 80092A60
  c->r[3]=c->r[3]+0xFFFFBDDCu; // 80092A64
  c->r[4]=0u+0x00000273u; // 80092A68
  c->r[5]=c->r[5]+0xFFFFBDB8u; // 80092A6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80092A70
  c->lr=0x80092A78u; f_800FD7D8(c); // 80092A74
L_80092A78:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[31]=c->ps1[31]=RF32(ea);} // 80092A78
  fcmp(c,0,c->f[30],c->f[31]); // 80092A7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80092A80
  if (!crb(c,2)) { goto L_80092A8C; } // 80092A84
  goto L_80092A98; // 80092A88
L_80092A8C:;
  c->f[1]=c->f[30]; // 80092A8C
  c->lr=0x80092A94u; f_800FDAA4(c); // 80092A90
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[1]); // 80092A94
L_80092A98:;
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80092A98
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092A9C
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80092AA0
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[0]); // 80092AA4
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092AA8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092AAC
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[1]); // 80092AB0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092AB4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[0]); // 80092AB8
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[4]);} // 80092ABC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80092AC0
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092AC4
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[3]);} // 80092AC8
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[1]); // 80092ACC
  fcmp(c,0,c->f[4],c->f[0]); // 80092AD0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80092AD4
  if (!crb(c,2)) { goto L_80092AE4; } // 80092AD8
  c->f[5]=c->f[4]; // 80092ADC
  goto L_80092AE8; // 80092AE0
L_80092AE4:;
  c->f[5]=-c->f[4]; // 80092AE4
L_80092AE8:;
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 80092AE8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092AEC
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80092AF0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092AF4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80092AF8
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092AFC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80092B00
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 80092B04
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[30]); // 80092B08
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80092B0C
  {uint32_t ea=c->r[1]+0x000000C8u; WF64(ea,c->f[0]);} // 80092B10
  c->r[0]=R32(c->r[1]+0x000000CCu); // 80092B14
  cmps(c,0,(int32_t)c->r[0],0); // 80092B18
  if (!crb(c,2)) { goto L_80092B28; } // 80092B1C
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092B20
  goto L_80092B30; // 80092B24
L_80092B28:;
  c->f[0]=c->ps1[0]=S(c->f[28]-c->f[4]); // 80092B28
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[30]); // 80092B2C
L_80092B30:;
  fcmp(c,0,c->f[5],c->f[28]); // 80092B30
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80092B34
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80092B38
  if (!crb(c,2)) { goto L_80092FA8; } // 80092B3C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092B40
  c->r[5]=c->r[13]+0xFFFFA488u; // 80092B44
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092B48
  c->r[4]=c->r[13]+0xFFFFA490u; // 80092B4C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80092B50
  c->r[3]=c->r[13]+0xFFFFA498u; // 80092B54
  c->f[8]=c->ps1[8]=S(c->f[2]-c->f[0]); // 80092B58
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092B5C
  {uint32_t ea=c->r[26]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092B60
  c->f[7]=c->ps1[7]=S(c->f[3]-c->f[1]); // 80092B64
  {uint32_t ea=c->r[26]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092B68
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[0]); // 80092B6C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092B70
  {uint32_t ea=c->r[26]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80092B74
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 80092B78
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092B7C
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[8]); // 80092B80
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[29]=c->ps1[29]=RF32(ea);} // 80092B84
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[0]); // 80092B88
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092B8C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[7]); // 80092B90
  {uint32_t ea=c->r[13]+0xFFFFA488u; WF32(ea,c->f[8]);} // 80092B94
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 80092B98
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[7]);} // 80092B9C
  c->f[9]=c->ps1[9]=S(c->f[1]+c->f[0]); // 80092BA0
  {uint32_t ea=c->r[13]+0xFFFFA490u; WF32(ea,c->f[6]);} // 80092BA4
  fcmp(c,0,c->f[9],c->f[29]); // 80092BA8
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[5]);} // 80092BAC
  {uint32_t ea=c->r[13]+0xFFFFA498u; WF32(ea,c->f[4]);} // 80092BB0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 80092BB4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80092BB8
  if (!crb(c,2)) { goto L_80092BD0; } // 80092BBC
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[6]); // 80092BC0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[5]); // 80092BC4
  c->f[29]=c->ps1[29]=S(c->f[1]+c->f[0]); // 80092BC8
  goto L_80092C30; // 80092BCC
L_80092BD0:;
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[8]); // 80092BD0
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[7]); // 80092BD4
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 80092BD8
  fcmp(c,0,c->f[9],c->f[3]); // 80092BDC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80092BE0
  if (!crb(c,2)) { goto L_80092BF8; } // 80092BE4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[4]); // 80092BE8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 80092BEC
  c->f[29]=c->ps1[29]=S(c->f[1]+c->f[0]); // 80092BF0
  goto L_80092C30; // 80092BF4
L_80092BF8:;
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092BF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 80092BFC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80092C00
  {uint32_t ea=c->r[1]+0x000000C8u; WF64(ea,c->f[0]);} // 80092C04
  c->r[0]=R32(c->r[1]+0x000000CCu); // 80092C08
  cmps(c,0,(int32_t)c->r[0],0); // 80092C0C
  if (!crb(c,2)) { goto L_80092C18; } // 80092C10
  goto L_80092C30; // 80092C14
L_80092C18:;
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[9]); // 80092C18
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[6]); // 80092C1C
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[5]); // 80092C20
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 80092C24
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80092C28
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[0]); // 80092C2C
L_80092C30:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092C30
  fcmp(c,0,c->f[29],c->f[0]); // 80092C34
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80092C38
  if (crb(c,2)) { goto L_80092C5C; } // 80092C3C
  c->r[3]=0u+0x80290000u; // 80092C40
  c->r[5]=0u+0x80290000u; // 80092C44
  c->r[3]=c->r[3]+0xFFFFBDDCu; // 80092C48
  c->r[4]=0u+0x00000273u; // 80092C4C
  c->r[5]=c->r[5]+0xFFFFBDB8u; // 80092C50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80092C54
  c->lr=0x80092C5Cu; f_800FD7D8(c); // 80092C58
L_80092C5C:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092C5C
  fcmp(c,0,c->f[29],c->f[0]); // 80092C60
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80092C64
  if (!crb(c,2)) { goto L_80092C70; } // 80092C68
  goto L_80092C7C; // 80092C6C
L_80092C70:;
  c->f[1]=c->f[29]; // 80092C70
  c->lr=0x80092C78u; f_800FDAA4(c); // 80092C74
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 80092C78
L_80092C7C:;
  fcmp(c,0,c->f[0],c->f[28]); // 80092C7C
  if (!crb(c,1)) { goto L_80092C8C; } // 80092C80
  c->r[3]=0u+0x00000000u; // 80092C84
  goto L_8009328C; // 80092C88
L_80092C8C:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092C8C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80092C90
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092C94
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[5]); // 80092C98
  {uint32_t ea=c->r[28]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 80092C9C
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092CA0
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[4]); // 80092CA4
  {uint32_t ea=c->r[26]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80092CA8
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[7]); // 80092CAC
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[5]); // 80092CB0
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092CB4
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[6]); // 80092CB8
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[4]); // 80092CBC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[7]);} // 80092CC0
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[7]); // 80092CC4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 80092CC8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 80092CCC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[6]); // 80092CD0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[5]);} // 80092CD4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80092CD8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 80092CDC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[4]);} // 80092CE0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80092CE4
  {uint32_t ea=c->r[1]+0x000000C8u; WF64(ea,c->f[0]);} // 80092CE8
  c->r[0]=R32(c->r[1]+0x000000CCu); // 80092CEC
  cmps(c,0,(int32_t)c->r[0],0); // 80092CF0
  if (!crb(c,2)) { goto L_80092D10; } // 80092CF4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092CF8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092CFC
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[4]=c->ps1[4]=RF32(ea);} // 80092D00
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80092D04
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80092D08
  goto L_80092D6C; // 80092D0C
L_80092D10:;
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 80092D10
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092D14
  fcmp(c,0,c->f[1],c->f[0]); // 80092D18
  if (!crb(c,0)) { goto L_80092D24; } // 80092D1C
  goto L_80092D28; // 80092D20
L_80092D24:;
  c->f[0]=c->f[1]; // 80092D24
L_80092D28:;
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80092D28
  fcmp(c,0,c->f[0],c->f[4]); // 80092D2C
  if (!crb(c,1)) { goto L_80092D38; } // 80092D30
  goto L_80092D3C; // 80092D34
L_80092D38:;
  c->f[4]=c->f[0]; // 80092D38
L_80092D3C:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092D3C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092D40
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[4]); // 80092D44
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092D48
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 80092D4C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092D50
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 80092D54
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 80092D58
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80092D5C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80092D60
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80092D64
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80092D68
L_80092D6C:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[3]=c->ps1[3]=RF32(ea);} // 80092D6C
  fcmp(c,0,c->f[4],c->f[3]); // 80092D70
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80092D74
  if (crb(c,2)) { goto L_80092D8C; } // 80092D78
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092D7C
  fcmp(c,0,c->f[4],c->f[0]); // 80092D80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80092D84
  if (!crb(c,2)) { goto L_80092EF4; } // 80092D88
L_80092D8C:;
  {uint32_t ea=c->r[26]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092D8C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092D90
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092D94
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 80092D98
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092D9C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[4]);} // 80092DA0
  {uint32_t ea=c->r[26]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092DA4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 80092DA8
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[3]);} // 80092DAC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092DB0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092DB4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 80092DB8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80092DBC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80092DC0
  fcmp(c,0,c->f[0],c->f[2]); // 80092DC4
  if (!crb(c,0)) { goto L_80092DD4; } // 80092DC8
  c->r[3]=0u+0x00000000u; // 80092DCC
  goto L_8009328C; // 80092DD0
L_80092DD4:;
  fcmp(c,0,c->f[31],c->f[2]); // 80092DD4
  if (!crb(c,1)) { goto L_80092E10; } // 80092DD8
  fcmp(c,0,c->f[30],c->f[2]); // 80092DDC
  if (!crb(c,1)) { goto L_80092DEC; } // 80092DE0
  c->r[3]=0u+0x00000000u; // 80092DE4
  goto L_8009328C; // 80092DE8
L_80092DEC:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092DEC
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092DF0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 80092DF4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80092DF8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80092DFC
  fcmp(c,0,c->f[0],c->f[2]); // 80092E00
  if (!crb(c,1)) { goto L_80092E10; } // 80092E04
  c->r[3]=0u+0x00000000u; // 80092E08
  goto L_8009328C; // 80092E0C
L_80092E10:;
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092E10
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092E14
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 80092E18
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092E1C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80092E20
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[1]); // 80092E24
  fcmp(c,0,c->f[29],c->f[0]); // 80092E28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80092E2C
  if (crb(c,2)) { goto L_80092E50; } // 80092E30
  c->r[3]=0u+0x80290000u; // 80092E34
  c->r[5]=0u+0x80290000u; // 80092E38
  c->r[3]=c->r[3]+0xFFFFBDDCu; // 80092E3C
  c->r[4]=0u+0x00000273u; // 80092E40
  c->r[5]=c->r[5]+0xFFFFBDB8u; // 80092E44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80092E48
  c->lr=0x80092E50u; f_800FD7D8(c); // 80092E4C
L_80092E50:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092E50
  fcmp(c,0,c->f[29],c->f[2]); // 80092E54
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80092E58
  if (!crb(c,2)) { goto L_80092E64; } // 80092E5C
  goto L_80092E70; // 80092E60
L_80092E64:;
  c->f[1]=c->f[29]; // 80092E64
  c->lr=0x80092E6Cu; f_800FDAA4(c); // 80092E68
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[1]); // 80092E6C
L_80092E70:;
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092E70
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80092E74
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80092E78
  {uint32_t ea=c->r[1]+0x000000C8u; WF64(ea,c->f[0]);} // 80092E7C
  c->r[0]=R32(c->r[1]+0x000000CCu); // 80092E80
  cmps(c,0,(int32_t)c->r[0],0); // 80092E84
  if (!crb(c,2)) { goto L_80092E9C; } // 80092E88
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092E8C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 80092E90
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 80092E94
  goto L_80092EB4; // 80092E98
L_80092E9C:;
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092E9C
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092EA0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 80092EA4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 80092EA8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 80092EAC
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 80092EB0
L_80092EB4:;
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092EB4
  c->r[4]=0u+0x00000002u; // 80092EB8
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092EBC
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[28]); // 80092EC0
  {uint32_t ea=c->r[1]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092EC4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[28]); // 80092EC8
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80092ECC
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092ED0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 80092ED4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 80092ED8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[4]);} // 80092EDC
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[3]);} // 80092EE0
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 80092EE4
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80092EE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80092EEC
  goto L_80092F2C; // 80092EF0
L_80092EF4:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80092EF4
  c->r[4]=0u+0x00000003u; // 80092EF8
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092EFC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[28]); // 80092F00
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092F04
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 80092F08
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80092F0C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80092F10
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 80092F14
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[28]); // 80092F18
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 80092F1C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80092F20
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 80092F24
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80092F28
L_80092F2C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80092F2C
  if (crb(c,2)) { goto L_80092FA0; } // 80092F30
  c->r[5]=R32(c->r[30]+0x00000000u); // 80092F34
  c->r[3]=c->r[30]|c->r[30]; // 80092F38
  c->r[10]=R32(c->r[1]+0x00000078u); // 80092F3C
  c->r[6]=c->r[1]+0x00000060u; // 80092F40
  c->r[0]=c->r[5]+0x00000001u; // 80092F44
  c->r[9]=R32(c->r[1]+0x0000007Cu); // 80092F48
  W32(c->r[30]+0x00000000u,c->r[0]); // 80092F4C
  c->r[5]=c->r[1]+0x00000068u; // 80092F50
  c->r[8]=R32(c->r[1]+0x00000080u); // 80092F54
  c->r[7]=c->r[1]+0x00000058u; // 80092F58
  c->r[12]=R32(c->r[31]+0x00000000u); // 80092F5C
  c->r[11]=R32(c->r[31]+0x00000004u); // 80092F60
  c->r[0]=R32(c->r[1]+0x00000084u); // 80092F64
  W32(c->r[1]+0x00000058u,c->r[12]); // 80092F68
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092F6C
  W32(c->r[1]+0x0000005Cu,c->r[11]); // 80092F70
  W32(c->r[1]+0x00000060u,c->r[10]); // 80092F74
  W32(c->r[1]+0x00000064u,c->r[9]); // 80092F78
  W32(c->r[1]+0x00000068u,c->r[8]); // 80092F7C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80092F80
  c->r[8]=R32(c->r[30]+0x00000000u); // 80092F84
  c->lr=0x80092F8Cu; f_800939E8(c); // 80092F88
  c->r[0]=R32(c->r[30]+0x00000000u); // 80092F8C
  cmps(c,0,(int32_t)c->r[0],24); // 80092F90
  if (!crb(c,1)) { goto L_80092FA0; } // 80092F94
  c->r[0]=0u+0x00000018u; // 80092F98
  W32(c->r[30]+0x00000000u,c->r[0]); // 80092F9C
L_80092FA0:;
  c->r[3]=0u+0x00000001u; // 80092FA0
  goto L_8009328C; // 80092FA4
L_80092FA8:;
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80092FA8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 80092FAC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80092FB0
  {uint32_t ea=c->r[1]+0x000000C8u; WF64(ea,c->f[1]);} // 80092FB4
  c->r[0]=R32(c->r[1]+0x000000CCu); // 80092FB8
  cmps(c,0,(int32_t)c->r[0],0); // 80092FBC
  if (!crb(c,2)) { goto L_80092FCC; } // 80092FC0
  c->r[3]=0u+0x00000000u; // 80092FC4
  goto L_8009328C; // 80092FC8
L_80092FCC:;
  c->f[8]=c->ps1[8]=S(c->f[2]); // 80092FCC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[4]=c->ps1[4]=RF32(ea);} // 80092FD0
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80092FD4
  c->f[3]=-c->f[28]; // 80092FD8
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[1]=c->ps1[1]=RF32(ea);} // 80092FDC
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[8]); // 80092FE0
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[8]); // 80092FE4
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80092FE8
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80092FEC
  fcmp(c,0,c->f[1],c->f[8]); // 80092FF0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[5]);} // 80092FF4
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[5]); // 80092FF8
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[6]); // 80092FFC
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[6]);} // 80093000
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093004
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[5]);} // 80093008
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 8009300C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[4]);} // 80093010
  c->f[7]=c->ps1[7]=S(c->f[5]+c->f[2]); // 80093014
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 80093018
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009301C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[7]);} // 80093020
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 80093024
  c->f[6]=c->ps1[6]=S(c->f[4]+c->f[2]); // 80093028
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[2]);} // 8009302C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[6]);} // 80093030
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80093034
  if (!crb(c,2)) { goto L_80093288; } // 80093038
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009303C
  fcmp(c,0,c->f[8],c->f[2]); // 80093040
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80093044
  if (!crb(c,2)) { goto L_80093288; } // 80093048
  fcmp(c,0,c->f[30],c->f[1]); // 8009304C
  if (!crb(c,0)) { goto L_80093288; } // 80093050
  {uint32_t ea=c->r[28]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80093054
  {uint32_t ea=c->r[29]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 80093058
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009305C
  c->f[2]=c->ps1[2]=S(c->f[7]-c->f[4]); // 80093060
  c->f[8]=c->ps1[8]=S(c->f[5]-c->f[4]); // 80093064
  {uint32_t ea=c->r[29]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 80093068
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[3]); // 8009306C
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[3]); // 80093070
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 80093074
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[8]); // 80093078
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[8]); // 8009307C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[8]);} // 80093080
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[7]); // 80093084
  c->f[4]=c->ps1[4]=S(c->f[6]*c->f[7]); // 80093088
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[7]);} // 8009308C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 80093090
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[6]);} // 80093094
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[4]); // 80093098
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 8009309C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800930A0
  {uint32_t ea=c->r[1]+0x000000C8u; WF64(ea,c->f[0]);} // 800930A4
  c->r[0]=R32(c->r[1]+0x000000CCu); // 800930A8
  cmps(c,0,(int32_t)c->r[0],0); // 800930AC
  if (!crb(c,2)) { goto L_800930C8; } // 800930B0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800930B4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800930B8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800930BC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800930C0
  goto L_80093124; // 800930C4
L_800930C8:;
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[3]); // 800930C8
  fcmp(c,0,c->f[0],c->f[1]); // 800930CC
  if (!crb(c,0)) { goto L_800930D8; } // 800930D0
  goto L_800930DC; // 800930D4
L_800930D8:;
  c->f[1]=c->f[0]; // 800930D8
L_800930DC:;
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[4]=c->ps1[4]=RF32(ea);} // 800930DC
  fcmp(c,0,c->f[1],c->f[4]); // 800930E0
  if (!crb(c,1)) { goto L_800930EC; } // 800930E4
  goto L_800930F0; // 800930E8
L_800930EC:;
  c->f[4]=c->f[1]; // 800930EC
L_800930F0:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800930F0
  c->f[1]=c->f[4]; // 800930F4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800930F8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 800930FC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093100
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 80093104
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 80093108
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 8009310C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80093110
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80093114
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093118
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 8009311C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80093120
L_80093124:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093124
  fcmp(c,0,c->f[1],c->f[0]); // 80093128
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009312C
  if (crb(c,2)) { goto L_80093144; } // 80093130
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093134
  fcmp(c,0,c->f[1],c->f[0]); // 80093138
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009313C
  if (!crb(c,2)) { goto L_80093208; } // 80093140
L_80093144:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093144
  c->f[1]=c->f[28]; // 80093148
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009314C
  c->r[5]=c->r[26]|c->r[26]; // 80093150
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093154
  c->r[3]=c->r[1]+0x00000070u; // 80093158
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 8009315C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093160
  c->r[4]=c->r[1]+0x000000A0u; // 80093164
  c->r[6]=c->r[1]+0x00000098u; // 80093168
  c->r[7]=c->r[1]+0x00000008u; // 8009316C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[3]);} // 80093170
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80093174
  {uint32_t ea=c->r[27]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80093178
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 8009317C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 80093180
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 80093184
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 80093188
  c->lr=0x80093190u; f_80092678(c); // 8009318C
  cmps(c,0,(int32_t)c->r[3],0); // 80093190
  if (!crb(c,2)) { goto L_800931BC; } // 80093194
  c->f[1]=c->f[28]; // 80093198
  c->r[5]=c->r[26]|c->r[26]; // 8009319C
  c->r[3]=c->r[1]+0x00000070u; // 800931A0
  c->r[4]=c->r[1]+0x000000A0u; // 800931A4
  c->r[6]=c->r[1]+0x00000098u; // 800931A8
  c->r[7]=c->r[1]+0x00000008u; // 800931AC
  c->lr=0x800931B4u; f_80092678(c); // 800931B0
  c->r[3]=0u+0x00000000u; // 800931B4
  goto L_8009328C; // 800931B8
L_800931BC:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800931BC
  c->r[4]=0u+0x00000004u; // 800931C0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800931C4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 800931C8
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 800931CC
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800931D0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 800931D4
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[3]);} // 800931D8
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800931DC
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 800931E0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 800931E4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[2]);} // 800931E8
  {uint32_t ea=c->r[26]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800931EC
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800931F0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 800931F4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800931F8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 800931FC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80093200
  goto L_8009320C; // 80093204
L_80093208:;
  c->r[4]=0u+0x00000001u; // 80093208
L_8009320C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8009320C
  if (crb(c,2)) { goto L_80093280; } // 80093210
  c->r[5]=R32(c->r[30]+0x00000000u); // 80093214
  c->r[3]=c->r[30]|c->r[30]; // 80093218
  c->r[10]=R32(c->r[1]+0x00000078u); // 8009321C
  c->r[6]=c->r[1]+0x00000048u; // 80093220
  c->r[0]=c->r[5]+0x00000001u; // 80093224
  c->r[9]=R32(c->r[1]+0x0000007Cu); // 80093228
  W32(c->r[30]+0x00000000u,c->r[0]); // 8009322C
  c->r[5]=c->r[1]+0x00000050u; // 80093230
  c->r[8]=R32(c->r[1]+0x00000080u); // 80093234
  c->r[7]=c->r[1]+0x00000040u; // 80093238
  c->r[12]=R32(c->r[31]+0x00000000u); // 8009323C
  c->r[11]=R32(c->r[31]+0x00000004u); // 80093240
  c->r[0]=R32(c->r[1]+0x00000084u); // 80093244
  W32(c->r[1]+0x00000040u,c->r[12]); // 80093248
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009324C
  W32(c->r[1]+0x00000044u,c->r[11]); // 80093250
  W32(c->r[1]+0x00000048u,c->r[10]); // 80093254
  W32(c->r[1]+0x0000004Cu,c->r[9]); // 80093258
  W32(c->r[1]+0x00000050u,c->r[8]); // 8009325C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80093260
  c->r[8]=R32(c->r[30]+0x00000000u); // 80093264
  c->lr=0x8009326Cu; f_800939E8(c); // 80093268
  c->r[0]=R32(c->r[30]+0x00000000u); // 8009326C
  cmps(c,0,(int32_t)c->r[0],24); // 80093270
  if (!crb(c,1)) { goto L_80093280; } // 80093274
  c->r[0]=0u+0x00000018u; // 80093278
  W32(c->r[30]+0x00000000u,c->r[0]); // 8009327C
L_80093280:;
  c->r[3]=0u+0x00000001u; // 80093280
  goto L_8009328C; // 80093284
L_80093288:;
  c->r[3]=0u+0x00000000u; // 80093288
L_8009328C:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 8009328C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 80093290
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 80093294
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 80093298
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 8009329C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 800932A0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,28,ea,0,0);} // 800932A4
  c->r[11]=c->r[1]+0x000000F0u; // 800932A8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[28]=RF64(ea);} // 800932AC
  c->lr=0x800932B4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800932B0
  c->r[0]=R32(c->r[1]+0x00000134u); // 800932B4
  c->lr=c->r[0]; // 800932B8
  c->r[1]=c->r[1]+0x00000130u; // 800932BC
  return; // 800932C0
}

// fn_800932C4
void f_800932C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800932C4
  c->r[0]=c->lr; // 800932C8
  W32(c->r[1]+0x00000124u,c->r[0]); // 800932CC
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 800932D0
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 800932D4
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 800932D8
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 800932DC
  c->r[11]=c->r[1]+0x00000100u; // 800932E0
  c->lr=0x800932E8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800932E4
  {uint32_t ea=c->r[7]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 800932E8
  c->r[28]=c->r[5]|c->r[5]; // 800932EC
  {uint32_t ea=c->r[7]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 800932F0
  c->r[26]=c->r[3]|c->r[3]; // 800932F4
  {uint32_t ea=c->r[7]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800932F8
  c->r[30]=c->r[7]|c->r[7]; // 800932FC
  {uint32_t ea=c->r[8]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093300
  c->r[27]=c->r[4]|c->r[4]; // 80093304
  {uint32_t ea=c->r[8]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80093308
  c->r[29]=c->r[6]|c->r[6]; // 8009330C
  {uint32_t ea=c->r[8]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093310
  c->r[3]=c->r[8]|c->r[8]; // 80093314
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[5]);} // 80093318
  c->r[4]=c->r[30]|c->r[30]; // 8009331C
  c->r[5]=c->r[1]+0x00000008u; // 80093320
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 80093324
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[3]);} // 80093328
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 8009332C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 80093330
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 80093334
  c->lr=0x8009333Cu; f_80164808(c); // 80093338
  c->r[3]=c->r[29]|c->r[29]; // 8009333C
  c->r[4]=c->r[1]+0x00000008u; // 80093340
  c->lr=0x80093348u; f_801648E8(c); // 80093344
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093348
  c->f[30]=c->f[1]; // 8009334C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80093350
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80093354
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[0]);} // 80093358
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8009335C
  cmps(c,0,(int32_t)c->r[0],0); // 80093360
  if (!crb(c,2)) { goto L_80093370; } // 80093364
  c->r[0]=0u+0x00000000u; // 80093368
  goto L_800933B4; // 8009336C
L_80093370:;
  c->r[3]=c->r[29]|c->r[29]; // 80093370
  c->r[4]=c->r[27]|c->r[27]; // 80093374
  c->lr=0x8009337Cu; f_801648E8(c); // 80093378
  c->f[31]=c->f[1]; // 8009337C
  c->r[3]=c->r[29]|c->r[29]; // 80093380
  c->r[4]=c->r[30]|c->r[30]; // 80093384
  c->lr=0x8009338Cu; f_801648E8(c); // 80093388
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[1]); // 8009338C
  c->r[3]=c->r[1]+0x00000008u; // 80093390
  c->r[4]=c->r[3]|c->r[3]; // 80093394
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 80093398
  c->lr=0x800933A0u; f_8016482C(c); // 8009339C
  c->r[3]=c->r[30]|c->r[30]; // 800933A0
  c->r[4]=c->r[1]+0x00000008u; // 800933A4
  c->r[5]=c->r[1]+0x00000044u; // 800933A8
  c->lr=0x800933B0u; f_801647E4(c); // 800933AC
  c->r[0]=0u+0x00000001u; // 800933B0
L_800933B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800933B4
  if (!crb(c,2)) { goto L_800933C4; } // 800933B8
  c->r[3]=0u+0x00000000u; // 800933BC
  goto L_800934BC; // 800933C0
L_800933C4:;
  c->r[31]=c->r[1]+0x0000002Cu; // 800933C4
  c->r[30]=0u+0x00000000u; // 800933C8
L_800933CC:;
  c->r[4]=c->r[27]|c->r[27]; // 800933CC
  c->r[3]=c->r[1]+0x00000044u; // 800933D0
  c->r[5]=c->r[1]+0x00000038u; // 800933D4
  c->lr=0x800933DCu; f_80164808(c); // 800933D8
  c->r[4]=c->r[28]|c->r[28]; // 800933DC
  c->r[3]=c->r[1]+0x00000038u; // 800933E0
  c->r[5]=c->r[1]+0x00000014u; // 800933E4
  c->lr=0x800933ECu; f_80164908(c); // 800933E8
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800933EC
  c->r[3]=c->r[1]+0x00000014u; // 800933F0
  c->r[4]=c->r[1]+0x00000020u; // 800933F4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800933F8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800933FC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80093400
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093404
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80093408
  c->lr=0x80093410u; f_801648E8(c); // 8009340C
  c->r[30]=c->r[30]+0x00000001u; // 80093410
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 80093414
  cmps(c,0,(int32_t)c->r[30],3); // 80093418
  c->r[27]=c->r[27]+0x0000000Cu; // 8009341C
  c->r[28]=c->r[28]+0x0000000Cu; // 80093420
  c->r[31]=c->r[31]+0x00000004u; // 80093424
  if (crb(c,0)) { IRQCHK(c); goto L_800933CC; } // 80093428
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009342C
  {uint32_t ea=c->r[2]+0xFFFF92ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 80093430
  fcmp(c,0,c->f[0],c->f[1]); // 80093434
  if (crb(c,0)) { goto L_80093454; } // 80093438
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009343C
  fcmp(c,0,c->f[0],c->f[1]); // 80093440
  if (crb(c,0)) { goto L_80093454; } // 80093444
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093448
  fcmp(c,0,c->f[0],c->f[1]); // 8009344C
  if (!crb(c,0)) { goto L_8009345C; } // 80093450
L_80093454:;
  c->r[3]=0u+0x00000000u; // 80093454
  goto L_800934BC; // 80093458
L_8009345C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8009345C
  if (crb(c,2)) { goto L_800934B8; } // 80093460
  c->r[3]=R32(c->r[26]+0x00000000u); // 80093464
  cmps(c,0,(int32_t)c->r[3],24); // 80093468
  if (!crb(c,0)) { goto L_80093478; } // 8009346C
  c->r[0]=c->r[3]+0x00000001u; // 80093470
  W32(c->r[26]+0x00000000u,c->r[0]); // 80093474
L_80093478:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 80093478
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009347C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80093480
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80093484
  c->r[3]=c->r[26]+c->r[0]; // 80093488
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8009348C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093490
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80093494
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093498
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8009349C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800934A0
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 800934A4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800934A8
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[0]);} // 800934AC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800934B0
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[0]);} // 800934B4
L_800934B8:;
  c->r[3]=0u+0x00000001u; // 800934B8
L_800934BC:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 800934BC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 800934C0
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 800934C4
  c->r[11]=c->r[1]+0x00000100u; // 800934C8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 800934CC
  c->lr=0x800934D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800934D0
  c->r[0]=R32(c->r[1]+0x00000124u); // 800934D4
  c->lr=c->r[0]; // 800934D8
  c->r[1]=c->r[1]+0x00000120u; // 800934DC
  return; // 800934E0
}

// fn_800934E4
void f_800934E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800934E4
  c->r[0]=c->lr; // 800934E8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800934EC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800934F0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800934F4
  c->r[11]=c->r[1]+0x000000A0u; // 800934F8
  c->lr=0x80093500u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800934FC
  c->r[10]=0u+0x80270000u; // 80093500
  {uint32_t ea=c->r[10]+0x00002430u; c->r[9]=R32(ea); c->r[10]=ea;} // 80093504
  c->r[0]=0u+0x00000000u; // 80093508
  c->r[26]=c->r[3]|c->r[3]; // 8009350C
  c->r[8]=R32(c->r[10]+0x00000004u); // 80093510
  c->r[27]=c->r[6]|c->r[6]; // 80093514
  c->r[3]=R32(c->r[10]+0x00000008u); // 80093518
  c->r[28]=c->r[7]|c->r[7]; // 8009351C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80093520
  c->r[30]=c->r[1]+0x0000005Cu; // 80093524
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[31]=c->ps1[31]=RF32(ea);} // 80093528
  c->r[29]=c->r[1]+0x00000038u; // 8009352C
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 80093530
  c->r[31]=0u+0x00000000u; // 80093534
  W32(c->r[1]+0x00000030u,c->r[8]); // 80093538
  W32(c->r[1]+0x00000034u,c->r[3]); // 8009353C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80093540
  W32(c->r[1]+0x00000028u,c->r[0]); // 80093544
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093548
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8009354C
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093550
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80093554
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093558
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8009355C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093560
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80093564
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093568
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8009356C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093570
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80093574
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093578
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009357C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093580
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80093584
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[31]);} // 80093588
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[31]);} // 8009358C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093590
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80093594
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093598
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8009359C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800935A0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800935A4
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800935A8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800935AC
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800935B0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800935B4
  {uint32_t ea=c->r[5]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800935B8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800935BC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[31]);} // 800935C0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 800935C4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800935C8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800935CC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800935D0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 800935D4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800935D8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800935DC
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800935E0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800935E4
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800935E8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800935EC
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800935F0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800935F4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[31]);} // 800935F8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[31]);} // 800935FC
L_80093600:;
  c->r[4]=c->r[30]|c->r[30]; // 80093600
  c->r[3]=c->r[1]+0x00000020u; // 80093604
  c->r[5]=c->r[1]+0x00000008u; // 80093608
  c->lr=0x80093610u; f_80164808(c); // 8009360C
  c->r[4]=c->r[29]|c->r[29]; // 80093610
  c->r[3]=c->r[1]+0x00000008u; // 80093614
  c->r[5]=c->r[1]+0x00000014u; // 80093618
  c->lr=0x80093620u; f_80164908(c); // 8009361C
  c->r[3]=c->r[1]+0x00000014u; // 80093620
  c->r[4]=c->r[1]+0x0000002Cu; // 80093624
  c->lr=0x8009362Cu; f_801648E8(c); // 80093628
  fcmp(c,0,c->f[1],c->f[31]); // 8009362C
  if (!crb(c,0)) { goto L_8009363C; } // 80093630
  c->r[0]=0u+0x00000000u; // 80093634
  goto L_80093654; // 80093638
L_8009363C:;
  c->r[31]=c->r[31]+0x00000001u; // 8009363C
  c->r[29]=c->r[29]+0x0000000Cu; // 80093640
  cmps(c,0,(int32_t)c->r[31],3); // 80093644
  c->r[30]=c->r[30]+0x0000000Cu; // 80093648
  if (crb(c,0)) { IRQCHK(c); goto L_80093600; } // 8009364C
  c->r[0]=0u+0x00000001u; // 80093650
L_80093654:;
  cmps(c,0,(int32_t)c->r[0],0); // 80093654
  if (!crb(c,2)) { goto L_80093664; } // 80093658
  c->r[3]=0u+0x00000000u; // 8009365C
  goto L_800936C4; // 80093660
L_80093664:;
  cmps(c,0,(int32_t)c->r[26],0); // 80093664
  if (crb(c,2)) { goto L_800936C0; } // 80093668
  c->r[3]=R32(c->r[26]+0x00000000u); // 8009366C
  cmps(c,0,(int32_t)c->r[3],24); // 80093670
  if (!crb(c,0)) { goto L_80093680; } // 80093674
  c->r[0]=c->r[3]+0x00000001u; // 80093678
  W32(c->r[26]+0x00000000u,c->r[0]); // 8009367C
L_80093680:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 80093680
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093684
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80093688
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009368C
  c->r[3]=c->r[26]+c->r[0]; // 80093690
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80093694
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093698
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8009369C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800936A0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800936A4
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800936A8
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[0]);} // 800936AC
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800936B0
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[0]);} // 800936B4
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800936B8
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[0]);} // 800936BC
L_800936C0:;
  c->r[3]=0u+0x00000001u; // 800936C0
L_800936C4:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800936C4
  c->r[11]=c->r[1]+0x000000A0u; // 800936C8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800936CC
  c->lr=0x800936D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800936D0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800936D4
  c->lr=c->r[0]; // 800936D8
  c->r[1]=c->r[1]+0x000000B0u; // 800936DC
  return; // 800936E0
}

// fn_800936E4
void f_800936E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800936E4
  c->r[0]=c->lr; // 800936E8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800936EC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800936F0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800936F4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800936F8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800936FC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80093700
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80093704
  c->f[29]=c->f[1]; // 80093708
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8009370C
  c->r[31]=c->r[7]|c->r[7]; // 80093710
  W32(c->r[1]+0x00000038u,c->r[30]); // 80093714
  c->r[30]=c->r[6]|c->r[6]; // 80093718
  W32(c->r[1]+0x00000034u,c->r[29]); // 8009371C
  c->r[29]=c->r[5]|c->r[5]; // 80093720
  c->r[5]=c->r[1]+0x00000014u; // 80093724
  W32(c->r[1]+0x00000030u,c->r[28]); // 80093728
  c->r[28]=c->r[3]|c->r[3]; // 8009372C
  c->r[3]=c->r[4]|c->r[4]; // 80093730
  c->r[4]=c->r[28]|c->r[28]; // 80093734
  c->lr=0x8009373Cu; f_80164808(c); // 80093738
  c->r[3]=c->r[1]+0x00000014u; // 8009373C
  c->lr=0x80093744u; f_801648A4(c); // 80093740
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093744
  c->f[30]=c->f[1]; // 80093748
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009374C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80093750
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80093754
  c->r[0]=R32(c->r[1]+0x00000024u); // 80093758
  cmps(c,0,(int32_t)c->r[0],0); // 8009375C
  if (!crb(c,2)) { goto L_8009376C; } // 80093760
  c->r[3]=0u+0x00000000u; // 80093764
  goto L_8009388C; // 80093768
L_8009376C:;
  c->r[3]=c->r[1]+0x00000014u; // 8009376C
  c->r[4]=c->r[3]|c->r[3]; // 80093770
  c->lr=0x80093778u; f_80164848(c); // 80093774
  c->r[3]=c->r[28]|c->r[28]; // 80093778
  c->r[4]=c->r[29]|c->r[29]; // 8009377C
  c->r[5]=c->r[1]+0x00000008u; // 80093780
  c->lr=0x80093788u; f_80164808(c); // 80093784
  c->r[3]=c->r[1]+0x00000008u; // 80093788
  c->r[4]=c->r[1]+0x00000014u; // 8009378C
  c->lr=0x80093794u; f_801648E8(c); // 80093790
  c->f[31]=c->f[1]; // 80093794
  c->r[3]=c->r[1]+0x00000008u; // 80093798
  c->lr=0x800937A0u; f_8016488C(c); // 8009379C
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[29]); // 800937A0
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800937A4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 800937A8
  fcmp(c,0,c->f[2],c->f[0]); // 800937AC
  if (!crb(c,1)) { goto L_800937C4; } // 800937B0
  fcmp(c,0,c->f[31],c->f[0]); // 800937B4
  if (!crb(c,1)) { goto L_800937C4; } // 800937B8
  c->r[3]=0u+0x00000000u; // 800937BC
  goto L_8009388C; // 800937C0
L_800937C4:;
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 800937C4
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800937C8
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[2]); // 800937CC
  fcmp(c,0,c->f[29],c->f[0]); // 800937D0
  if (!crb(c,0)) { goto L_800937E0; } // 800937D4
  c->r[3]=0u+0x00000000u; // 800937D8
  goto L_8009388C; // 800937DC
L_800937E0:;
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800937E0
  if (crb(c,2)) { goto L_80093804; } // 800937E4
  c->r[3]=0u+0x80290000u; // 800937E8
  c->r[5]=0u+0x80290000u; // 800937EC
  c->r[3]=c->r[3]+0xFFFFBDDCu; // 800937F0
  c->r[4]=0u+0x00000273u; // 800937F4
  c->r[5]=c->r[5]+0xFFFFBDB8u; // 800937F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800937FC
  c->lr=0x80093804u; f_800FD7D8(c); // 80093800
L_80093804:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093804
  fcmp(c,0,c->f[29],c->f[2]); // 80093808
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009380C
  if (!crb(c,2)) { goto L_80093818; } // 80093810
  goto L_80093824; // 80093814
L_80093818:;
  c->f[1]=c->f[29]; // 80093818
  c->lr=0x80093820u; f_800FDAA4(c); // 8009381C
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[1]); // 80093820
L_80093824:;
  c->f[1]=-c->f[31]; // 80093824
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093828
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009382C
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[30]); // 80093830
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 80093834
  fcmp(c,0,c->f[29],c->f[0]); // 80093838
  if (!crb(c,1)) { goto L_8009384C; } // 8009383C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[29]);} // 80093840
  c->r[3]=0u+0x00000000u; // 80093844
  goto L_8009388C; // 80093848
L_8009384C:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009384C
  fcmp(c,0,c->f[1],c->f[0]); // 80093850
  if (!crb(c,0)) { goto L_8009385C; } // 80093854
  goto L_80093860; // 80093858
L_8009385C:;
  c->f[0]=c->f[1]; // 8009385C
L_80093860:;
  c->f[1]=c->ps1[1]=S(c->f[0]); // 80093860
  c->r[3]=c->r[1]+0x00000014u; // 80093864
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 80093868
  c->r[4]=c->r[3]|c->r[3]; // 8009386C
  c->lr=0x80093874u; f_8016482C(c); // 80093870
  c->r[3]=c->r[28]|c->r[28]; // 80093874
  c->r[5]=c->r[30]|c->r[30]; // 80093878
  c->r[4]=c->r[1]+0x00000014u; // 8009387C
  c->lr=0x80093884u; f_801647E4(c); // 80093880
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[29]);} // 80093884
  c->r[3]=0u+0x00000001u; // 80093888
L_8009388C:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8009388C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80093890
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80093894
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80093898
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 8009389C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 800938A0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800938A4
  c->r[30]=R32(c->r[1]+0x00000038u); // 800938A8
  c->r[29]=R32(c->r[1]+0x00000034u); // 800938AC
  c->r[0]=R32(c->r[1]+0x00000074u); // 800938B0
  c->r[28]=R32(c->r[1]+0x00000030u); // 800938B4
  c->lr=c->r[0]; // 800938B8
  c->r[1]=c->r[1]+0x00000070u; // 800938BC
  return; // 800938C0
}

// fn_800938C4
void f_800938C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800938C4
  c->r[0]=c->lr; // 800938C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800938CC
  c->r[11]=c->r[1]+0x00000030u; // 800938D0
  c->lr=0x800938D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800938D4
  c->r[27]=c->r[3]|c->r[3]; // 800938D8
  c->r[30]=0u+0x80370000u; // 800938DC
  c->r[3]=c->r[4]|c->r[4]; // 800938E0
  c->r[28]=c->r[5]|c->r[5]; // 800938E4
  c->r[29]=c->r[6]|c->r[6]; // 800938E8
  c->r[4]=c->r[27]|c->r[27]; // 800938EC
  c->r[5]=c->r[30]+0x00003BB8u; // 800938F0
  c->lr=0x800938F8u; f_80164808(c); // 800938F4
  c->r[31]=0u+0x80370000u; // 800938F8
  c->r[3]=c->r[28]|c->r[28]; // 800938FC
  c->r[4]=c->r[27]|c->r[27]; // 80093900
  c->r[5]=c->r[31]+0x00003BC4u; // 80093904
  c->lr=0x8009390Cu; f_80164808(c); // 80093908
  c->r[3]=c->r[31]+0x00003BC4u; // 8009390C
  c->r[4]=c->r[30]+0x00003BB8u; // 80093910
  c->lr=0x80093918u; f_801648E8(c); // 80093914
  {uint32_t ea=c->r[13]+0xFFFFA4A4u; WF32(ea,c->f[1]);} // 80093918
  c->r[3]=c->r[30]+0x00003BB8u; // 8009391C
  c->lr=0x80093924u; f_8016488C(c); // 80093920
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80093924
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093928
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009392C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80093930
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80093934
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80093938
  cmps(c,0,(int32_t)c->r[0],0); // 8009393C
  if (!crb(c,2)) { goto L_8009396C; } // 80093940
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093944
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[1]=c->ps1[1]=RF32(ea);} // 80093948
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 8009394C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093950
  {uint32_t ea=c->r[13]+0xFFFFA4A0u; WF32(ea,c->f[1]);} // 80093954
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 80093958
  {uint32_t ea=c->r[13]+0xFFFFA4A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009395C
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093960
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80093964
  goto L_800939D0; // 80093968
L_8009396C:;
  {uint32_t ea=c->r[13]+0xFFFFA4A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009396C
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093970
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80093974
  fcmp(c,0,c->f[0],c->f[2]); // 80093978
  if (!crb(c,0)) { goto L_80093984; } // 8009397C
  goto L_80093988; // 80093980
L_80093984:;
  c->f[2]=c->f[0]; // 80093984
L_80093988:;
  c->f[0]=c->ps1[0]=S(c->f[2]); // 80093988
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009398C
  fcmp(c,0,c->f[0],c->f[2]); // 80093990
  if (!crb(c,1)) { goto L_8009399C; } // 80093994
  goto L_800939A0; // 80093998
L_8009399C:;
  c->f[2]=c->f[0]; // 8009399C
L_800939A0:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 800939A0
  c->r[3]=0u+0x80370000u; // 800939A4
  c->r[31]=0u+0x80370000u; // 800939A8
  {uint32_t ea=c->r[13]+0xFFFFA4A0u; WF32(ea,c->f[2]);} // 800939AC
  c->r[3]=c->r[3]+0x00003BB8u; // 800939B0
  c->r[4]=c->r[31]+0x00003BC4u; // 800939B4
  c->lr=0x800939BCu; f_8016482C(c); // 800939B8
  c->r[3]=c->r[27]|c->r[27]; // 800939BC
  c->r[5]=c->r[29]|c->r[29]; // 800939C0
  c->r[4]=c->r[31]+0x00003BC4u; // 800939C4
  c->lr=0x800939CCu; f_801647E4(c); // 800939C8
  {uint32_t ea=c->r[13]+0xFFFFA4A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800939CC
L_800939D0:;
  c->r[11]=c->r[1]+0x00000030u; // 800939D0
  c->lr=0x800939D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800939D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800939D8
  c->lr=c->r[0]; // 800939DC
  c->r[1]=c->r[1]+0x00000030u; // 800939E0
  return; // 800939E4
}

// fn_800939E8
void f_800939E8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[8],1); // 800939E8
  if (!crb(c,2)) { goto L_80093A2C; } // 800939EC
  {uint32_t ea=c->r[7]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 800939F0
  {uint32_t ea=c->r[7]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 800939F4
  {uint32_t ea=c->r[5]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800939F8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800939FC
  {uint32_t ea=c->r[6]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093A00
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093A04
  {uint32_t ea=c->r[3]+0x00000244u; WF32(ea,c->f[6]);} // 80093A08
  {uint32_t ea=c->r[3]+0x00000248u; WF32(ea,c->f[5]);} // 80093A0C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[4]);} // 80093A10
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[3]);} // 80093A14
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[2]);} // 80093A18
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[0]);} // 80093A1C
  {uint32_t ea=c->r[3]+0x000001E4u; WF32(ea,c->f[1]);} // 80093A20
  W32(c->r[3]+0x00000004u,c->r[4]); // 80093A24
  return; // 80093A28
L_80093A2C:;
  c->r[0]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80093A2C
  c->r[9]=c->r[3]|c->r[3]; // 80093A30
  c->r[11]=0u+0x00000000u; // 80093A34
  c->ctr=c->r[0]; // 80093A38
  if (!crb(c,1)) { goto L_80093BC0; } // 80093A3C
L_80093A40:;
  {uint32_t ea=c->r[9]+0x000001E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093A40
  fcmp(c,0,c->f[0],c->f[1]); // 80093A44
  if (!crb(c,1)) { goto L_80093BB4; } // 80093A48
  cmps(c,0,(int32_t)c->r[8],24); // 80093A4C
  if (!crb(c,1)) { goto L_80093A58; } // 80093A50
  c->r[8]=0u+0x00000018u; // 80093A54
L_80093A58:;
  c->r[10]=c->r[8]+0xFFFFFFFFu; // 80093A58
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[11]); // 80093A5C
  c->r[8]=rotl(c->r[10],3)&0xFFFFFFF8u; // 80093A60
  c->r[0]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80093A64
  c->r[9]=c->r[3]+c->r[8]; // 80093A68
  c->r[8]=c->r[10]-c->r[11]; // 80093A6C
  c->r[10]=c->r[3]+c->r[0]; // 80093A70
  if (!crb(c,1)) { goto L_80093B68; } // 80093A74
  c->r[0]=rotl(c->r[8],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 80093A78
  c->ctr=c->r[0]; // 80093A7C
  if (crb(c,2)) { goto L_80093B18; } // 80093A80
L_80093A84:;
  {uint32_t ea=c->r[9]+0x0000023Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093A84
  {uint32_t ea=c->r[9]+0x00000244u; WF32(ea,c->f[0]);} // 80093A88
  {uint32_t ea=c->r[9]+0x00000240u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093A8C
  {uint32_t ea=c->r[9]+0x00000248u; WF32(ea,c->f[0]);} // 80093A90
  {uint32_t ea=c->r[9]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093A94
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[0]);} // 80093A98
  {uint32_t ea=c->r[9]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093A9C
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[0]);} // 80093AA0
  {uint32_t ea=c->r[9]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093AA4
  {uint32_t ea=c->r[9]+0x00000124u; WF32(ea,c->f[0]);} // 80093AA8
  {uint32_t ea=c->r[9]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093AAC
  {uint32_t ea=c->r[9]+0x00000128u; WF32(ea,c->f[0]);} // 80093AB0
  {uint32_t ea=c->r[10]+0x000001E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093AB4
  {uint32_t ea=c->r[10]+0x000001E4u; WF32(ea,c->f[0]);} // 80093AB8
  c->r[0]=R32(c->r[10]+0x00000000u); // 80093ABC
  W32(c->r[10]+0x00000004u,c->r[0]); // 80093AC0
  {uint32_t ea=c->r[9]+0x00000234u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093AC4
  {uint32_t ea=c->r[9]+0x0000023Cu; WF32(ea,c->f[0]);} // 80093AC8
  {uint32_t ea=c->r[9]+0x00000238u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093ACC
  {uint32_t ea=c->r[9]+0x00000240u; WF32(ea,c->f[0]);} // 80093AD0
  {uint32_t ea=c->r[9]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093AD4
  {uint32_t ea=c->r[9]+0x0000005Cu; WF32(ea,c->f[0]);} // 80093AD8
  {uint32_t ea=c->r[9]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093ADC
  {uint32_t ea=c->r[9]+0x00000060u; WF32(ea,c->f[0]);} // 80093AE0
  {uint32_t ea=c->r[9]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093AE4
  {uint32_t ea=c->r[9]+0x0000011Cu; WF32(ea,c->f[0]);} // 80093AE8
  {uint32_t ea=c->r[9]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093AEC
  {uint32_t ea=c->r[9]+0x00000120u; WF32(ea,c->f[0]);} // 80093AF0
  c->r[9]=c->r[9]+0xFFFFFFF0u; // 80093AF4
  {uint32_t ea=c->r[10]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093AF8
  {uint32_t ea=c->r[10]+0x000001E0u; WF32(ea,c->f[0]);} // 80093AFC
  c->r[0]=R32(c->r[10]+0xFFFFFFFCu); // 80093B00
  W32(c->r[10]+0x00000000u,c->r[0]); // 80093B04
  c->r[10]=c->r[10]+0xFFFFFFF8u; // 80093B08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80093A84; } // 80093B0C
  c->r[8]=c->r[8]&0x00000001u; cr0(c,c->r[8]); // 80093B10
  if (crb(c,2)) { goto L_80093B68; } // 80093B14
L_80093B18:;
  c->ctr=c->r[8]; // 80093B18
L_80093B1C:;
  {uint32_t ea=c->r[9]+0x0000023Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B1C
  {uint32_t ea=c->r[9]+0x00000244u; WF32(ea,c->f[0]);} // 80093B20
  {uint32_t ea=c->r[9]+0x00000240u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B24
  {uint32_t ea=c->r[9]+0x00000248u; WF32(ea,c->f[0]);} // 80093B28
  {uint32_t ea=c->r[9]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B2C
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[0]);} // 80093B30
  {uint32_t ea=c->r[9]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B34
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[0]);} // 80093B38
  {uint32_t ea=c->r[9]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B3C
  {uint32_t ea=c->r[9]+0x00000124u; WF32(ea,c->f[0]);} // 80093B40
  {uint32_t ea=c->r[9]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B44
  {uint32_t ea=c->r[9]+0x00000128u; WF32(ea,c->f[0]);} // 80093B48
  c->r[9]=c->r[9]+0xFFFFFFF8u; // 80093B4C
  {uint32_t ea=c->r[10]+0x000001E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B50
  {uint32_t ea=c->r[10]+0x000001E4u; WF32(ea,c->f[0]);} // 80093B54
  c->r[0]=R32(c->r[10]+0x00000000u); // 80093B58
  W32(c->r[10]+0x00000004u,c->r[0]); // 80093B5C
  c->r[10]=c->r[10]+0xFFFFFFFCu; // 80093B60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80093B1C; } // 80093B64
L_80093B68:;
  c->r[0]=rotl(c->r[11],3)&0xFFFFFFF8u; // 80093B68
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B6C
  c->r[8]=c->r[3]+c->r[0]; // 80093B70
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093B74
  {uint32_t ea=c->r[8]+0x00000244u; WF32(ea,c->f[0]);} // 80093B78
  c->r[0]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80093B7C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B80
  c->r[3]=c->r[3]+c->r[0]; // 80093B84
  {uint32_t ea=c->r[8]+0x00000248u; WF32(ea,c->f[0]);} // 80093B88
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B8C
  {uint32_t ea=c->r[8]+0x00000064u; WF32(ea,c->f[2]);} // 80093B90
  {uint32_t ea=c->r[6]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093B94
  {uint32_t ea=c->r[8]+0x00000068u; WF32(ea,c->f[0]);} // 80093B98
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093B9C
  {uint32_t ea=c->r[8]+0x00000124u; WF32(ea,c->f[2]);} // 80093BA0
  {uint32_t ea=c->r[8]+0x00000128u; WF32(ea,c->f[0]);} // 80093BA4
  {uint32_t ea=c->r[3]+0x000001E4u; WF32(ea,c->f[1]);} // 80093BA8
  W32(c->r[3]+0x00000004u,c->r[4]); // 80093BAC
  return; // 80093BB0
L_80093BB4:;
  c->r[9]=c->r[9]+0x00000004u; // 80093BB4
  c->r[11]=c->r[11]+0x00000001u; // 80093BB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80093A40; } // 80093BBC
L_80093BC0:;
  cmps(c,0,(int32_t)c->r[11],24); // 80093BC0
  if (!crb(c,0)) return; // 80093BC4
  c->r[0]=rotl(c->r[11],3)&0xFFFFFFF8u; // 80093BC8
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093BCC
  c->r[8]=c->r[3]+c->r[0]; // 80093BD0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093BD4
  {uint32_t ea=c->r[8]+0x00000244u; WF32(ea,c->f[0]);} // 80093BD8
  c->r[0]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80093BDC
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093BE0
  c->r[3]=c->r[3]+c->r[0]; // 80093BE4
  {uint32_t ea=c->r[8]+0x00000248u; WF32(ea,c->f[0]);} // 80093BE8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093BEC
  {uint32_t ea=c->r[8]+0x00000064u; WF32(ea,c->f[2]);} // 80093BF0
  {uint32_t ea=c->r[6]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093BF4
  {uint32_t ea=c->r[8]+0x00000068u; WF32(ea,c->f[0]);} // 80093BF8
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093BFC
  {uint32_t ea=c->r[8]+0x00000124u; WF32(ea,c->f[2]);} // 80093C00
  {uint32_t ea=c->r[8]+0x00000128u; WF32(ea,c->f[0]);} // 80093C04
  {uint32_t ea=c->r[3]+0x000001E4u; WF32(ea,c->f[1]);} // 80093C08
  W32(c->r[3]+0x00000004u,c->r[4]); // 80093C0C
  return; // 80093C10
}

// fn_80093C14
void f_80093C14(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[8],1); // 80093C14
  if (!crb(c,2)) { goto L_80093C70; } // 80093C18
  {uint32_t ea=c->r[7]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 80093C1C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 80093C20
  {uint32_t ea=c->r[7]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 80093C24
  {uint32_t ea=c->r[5]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 80093C28
  {uint32_t ea=c->r[5]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 80093C2C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80093C30
  {uint32_t ea=c->r[6]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80093C34
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093C38
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093C3C
  {uint32_t ea=c->r[3]+0x00000304u; WF32(ea,c->f[9]);} // 80093C40
  {uint32_t ea=c->r[3]+0x00000308u; WF32(ea,c->f[8]);} // 80093C44
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[7]);} // 80093C48
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[6]);} // 80093C4C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[5]);} // 80093C50
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[4]);} // 80093C54
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[3]);} // 80093C58
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[2]);} // 80093C5C
  {uint32_t ea=c->r[3]+0x0000018Cu; WF32(ea,c->f[0]);} // 80093C60
  {uint32_t ea=c->r[3]+0x000002A4u; WF32(ea,c->f[1]);} // 80093C64
  W32(c->r[3]+0x00000004u,c->r[4]); // 80093C68
  return; // 80093C6C
L_80093C70:;
  c->r[0]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80093C70
  c->r[9]=c->r[3]|c->r[3]; // 80093C74
  c->r[11]=0u+0x00000000u; // 80093C78
  c->ctr=c->r[0]; // 80093C7C
  if (!crb(c,1)) { goto L_80093E64; } // 80093C80
L_80093C84:;
  {uint32_t ea=c->r[9]+0x000002A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093C84
  fcmp(c,0,c->f[0],c->f[1]); // 80093C88
  if (!crb(c,1)) { goto L_80093E58; } // 80093C8C
  cmps(c,0,(int32_t)c->r[8],24); // 80093C90
  if (!crb(c,1)) { goto L_80093C9C; } // 80093C94
  c->r[8]=0u+0x00000018u; // 80093C98
L_80093C9C:;
  c->r[10]=c->r[8]+0xFFFFFFFFu; // 80093C9C
  c->r[8]=(uint32_t)((int32_t)c->r[10]*(int32_t)12); // 80093CA0
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[11]); // 80093CA4
  c->r[0]=rotl(c->r[10],2)&0xFFFFFFFCu; // 80093CA8
  c->r[9]=c->r[3]+c->r[8]; // 80093CAC
  c->r[8]=c->r[10]-c->r[11]; // 80093CB0
  c->r[10]=c->r[3]+c->r[0]; // 80093CB4
  if (!crb(c,1)) { goto L_80093DF4; } // 80093CB8
  c->r[0]=rotl(c->r[8],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 80093CBC
  c->ctr=c->r[0]; // 80093CC0
  if (crb(c,2)) { goto L_80093D8C; } // 80093CC4
L_80093CC8:;
  {uint32_t ea=c->r[9]+0x000002F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093CC8
  {uint32_t ea=c->r[9]+0x00000304u; WF32(ea,c->f[0]);} // 80093CCC
  {uint32_t ea=c->r[9]+0x000002FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093CD0
  {uint32_t ea=c->r[9]+0x00000308u; WF32(ea,c->f[0]);} // 80093CD4
  {uint32_t ea=c->r[9]+0x00000300u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093CD8
  {uint32_t ea=c->r[9]+0x0000030Cu; WF32(ea,c->f[0]);} // 80093CDC
  {uint32_t ea=c->r[9]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093CE0
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[0]);} // 80093CE4
  {uint32_t ea=c->r[9]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093CE8
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[0]);} // 80093CEC
  {uint32_t ea=c->r[9]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093CF0
  {uint32_t ea=c->r[9]+0x0000006Cu; WF32(ea,c->f[0]);} // 80093CF4
  {uint32_t ea=c->r[9]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093CF8
  {uint32_t ea=c->r[9]+0x00000184u; WF32(ea,c->f[0]);} // 80093CFC
  {uint32_t ea=c->r[9]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D00
  {uint32_t ea=c->r[9]+0x00000188u; WF32(ea,c->f[0]);} // 80093D04
  {uint32_t ea=c->r[9]+0x00000180u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D08
  {uint32_t ea=c->r[9]+0x0000018Cu; WF32(ea,c->f[0]);} // 80093D0C
  {uint32_t ea=c->r[10]+0x000002A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D10
  {uint32_t ea=c->r[10]+0x000002A4u; WF32(ea,c->f[0]);} // 80093D14
  c->r[0]=R32(c->r[10]+0x00000000u); // 80093D18
  W32(c->r[10]+0x00000004u,c->r[0]); // 80093D1C
  {uint32_t ea=c->r[9]+0x000002ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D20
  {uint32_t ea=c->r[9]+0x000002F8u; WF32(ea,c->f[0]);} // 80093D24
  {uint32_t ea=c->r[9]+0x000002F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D28
  {uint32_t ea=c->r[9]+0x000002FCu; WF32(ea,c->f[0]);} // 80093D2C
  {uint32_t ea=c->r[9]+0x000002F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D30
  {uint32_t ea=c->r[9]+0x00000300u; WF32(ea,c->f[0]);} // 80093D34
  {uint32_t ea=c->r[9]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D38
  {uint32_t ea=c->r[9]+0x00000058u; WF32(ea,c->f[0]);} // 80093D3C
  {uint32_t ea=c->r[9]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D40
  {uint32_t ea=c->r[9]+0x0000005Cu; WF32(ea,c->f[0]);} // 80093D44
  {uint32_t ea=c->r[9]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D48
  {uint32_t ea=c->r[9]+0x00000060u; WF32(ea,c->f[0]);} // 80093D4C
  {uint32_t ea=c->r[9]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D50
  {uint32_t ea=c->r[9]+0x00000178u; WF32(ea,c->f[0]);} // 80093D54
  {uint32_t ea=c->r[9]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D58
  {uint32_t ea=c->r[9]+0x0000017Cu; WF32(ea,c->f[0]);} // 80093D5C
  {uint32_t ea=c->r[9]+0x00000174u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D60
  {uint32_t ea=c->r[9]+0x00000180u; WF32(ea,c->f[0]);} // 80093D64
  c->r[9]=c->r[9]+0xFFFFFFE8u; // 80093D68
  {uint32_t ea=c->r[10]+0x0000029Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D6C
  {uint32_t ea=c->r[10]+0x000002A0u; WF32(ea,c->f[0]);} // 80093D70
  c->r[0]=R32(c->r[10]+0xFFFFFFFCu); // 80093D74
  W32(c->r[10]+0x00000000u,c->r[0]); // 80093D78
  c->r[10]=c->r[10]+0xFFFFFFF8u; // 80093D7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80093CC8; } // 80093D80
  c->r[8]=c->r[8]&0x00000001u; cr0(c,c->r[8]); // 80093D84
  if (crb(c,2)) { goto L_80093DF4; } // 80093D88
L_80093D8C:;
  c->ctr=c->r[8]; // 80093D8C
L_80093D90:;
  {uint32_t ea=c->r[9]+0x000002F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D90
  {uint32_t ea=c->r[9]+0x00000304u; WF32(ea,c->f[0]);} // 80093D94
  {uint32_t ea=c->r[9]+0x000002FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093D98
  {uint32_t ea=c->r[9]+0x00000308u; WF32(ea,c->f[0]);} // 80093D9C
  {uint32_t ea=c->r[9]+0x00000300u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DA0
  {uint32_t ea=c->r[9]+0x0000030Cu; WF32(ea,c->f[0]);} // 80093DA4
  {uint32_t ea=c->r[9]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DA8
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[0]);} // 80093DAC
  {uint32_t ea=c->r[9]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DB0
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[0]);} // 80093DB4
  {uint32_t ea=c->r[9]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DB8
  {uint32_t ea=c->r[9]+0x0000006Cu; WF32(ea,c->f[0]);} // 80093DBC
  {uint32_t ea=c->r[9]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DC0
  {uint32_t ea=c->r[9]+0x00000184u; WF32(ea,c->f[0]);} // 80093DC4
  {uint32_t ea=c->r[9]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DC8
  {uint32_t ea=c->r[9]+0x00000188u; WF32(ea,c->f[0]);} // 80093DCC
  {uint32_t ea=c->r[9]+0x00000180u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DD0
  {uint32_t ea=c->r[9]+0x0000018Cu; WF32(ea,c->f[0]);} // 80093DD4
  c->r[9]=c->r[9]+0xFFFFFFF4u; // 80093DD8
  {uint32_t ea=c->r[10]+0x000002A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DDC
  {uint32_t ea=c->r[10]+0x000002A4u; WF32(ea,c->f[0]);} // 80093DE0
  c->r[0]=R32(c->r[10]+0x00000000u); // 80093DE4
  W32(c->r[10]+0x00000004u,c->r[0]); // 80093DE8
  c->r[10]=c->r[10]+0xFFFFFFFCu; // 80093DEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80093D90; } // 80093DF0
L_80093DF4:;
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)12); // 80093DF4
  c->r[8]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80093DF8
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093DFC
  c->r[8]=c->r[3]+c->r[8]; // 80093E00
  {uint32_t ea=c->r[7]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093E04
  c->r[3]=c->r[3]+c->r[0]; // 80093E08
  {uint32_t ea=c->r[3]+0x00000304u; WF32(ea,c->f[0]);} // 80093E0C
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093E10
  {uint32_t ea=c->r[3]+0x00000308u; WF32(ea,c->f[2]);} // 80093E14
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093E18
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[0]);} // 80093E1C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093E20
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[2]);} // 80093E24
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093E28
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80093E2C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093E30
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[2]);} // 80093E34
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093E38
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[0]);} // 80093E3C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093E40
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[2]);} // 80093E44
  {uint32_t ea=c->r[3]+0x0000018Cu; WF32(ea,c->f[0]);} // 80093E48
  {uint32_t ea=c->r[8]+0x000002A4u; WF32(ea,c->f[1]);} // 80093E4C
  W32(c->r[8]+0x00000004u,c->r[4]); // 80093E50
  return; // 80093E54
L_80093E58:;
  c->r[9]=c->r[9]+0x00000004u; // 80093E58
  c->r[11]=c->r[11]+0x00000001u; // 80093E5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80093C84; } // 80093E60
L_80093E64:;
  cmps(c,0,(int32_t)c->r[11],24); // 80093E64
  if (!crb(c,0)) return; // 80093E68
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)12); // 80093E6C
  c->r[8]=rotl(c->r[11],2)&0xFFFFFFFCu; // 80093E70
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093E74
  c->r[8]=c->r[3]+c->r[8]; // 80093E78
  {uint32_t ea=c->r[7]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093E7C
  c->r[3]=c->r[3]+c->r[0]; // 80093E80
  {uint32_t ea=c->r[3]+0x00000304u; WF32(ea,c->f[0]);} // 80093E84
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093E88
  {uint32_t ea=c->r[3]+0x00000308u; WF32(ea,c->f[2]);} // 80093E8C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093E90
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[0]);} // 80093E94
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093E98
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[2]);} // 80093E9C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093EA0
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80093EA4
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093EA8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[2]);} // 80093EAC
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093EB0
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[0]);} // 80093EB4
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093EB8
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[2]);} // 80093EBC
  {uint32_t ea=c->r[3]+0x0000018Cu; WF32(ea,c->f[0]);} // 80093EC0
  {uint32_t ea=c->r[8]+0x000002A4u; WF32(ea,c->f[1]);} // 80093EC4
  W32(c->r[8]+0x00000004u,c->r[4]); // 80093EC8
  return; // 80093ECC
}

// fn_80093ED0
void f_80093ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80093ED0
  c->r[0]=c->lr; // 80093ED4
  W32(c->r[1]+0x00000254u,c->r[0]); // 80093ED8
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[31]);} // 80093EDC
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,31,ea,0,0);} // 80093EE0
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[30]);} // 80093EE4
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,30,ea,0,0);} // 80093EE8
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[29]);} // 80093EEC
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,29,ea,0,0);} // 80093EF0
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[28]);} // 80093EF4
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,28,ea,0,0);} // 80093EF8
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[27]);} // 80093EFC
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,27,ea,0,0);} // 80093F00
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[26]);} // 80093F04
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,26,ea,0,0);} // 80093F08
  c->r[11]=c->r[1]+0x000001F0u; // 80093F0C
  c->lr=0x80093F14u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80093F10
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093F14
  c->r[12]=0u+0x80270000u; // 80093F18
  {uint32_t ea=c->r[12]+0x0000243Cu; c->r[11]=R32(ea); c->r[12]=ea;} // 80093F1C
  c->r[18]=c->r[3]|c->r[3]; // 80093F20
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80093F24
  c->f[30]=c->f[1]; // 80093F28
  c->r[0]=R32(c->r[12]+0x00000008u); // 80093F2C
  c->r[31]=0u+0x80370000u; // 80093F30
  {uint32_t ea=c->r[8]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80093F34
  c->r[23]=c->r[8]|c->r[8]; // 80093F38
  {uint32_t ea=c->r[8]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80093F3C
  {uint32_t ea=c->r[8]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80093F40
  c->r[19]=c->r[4]|c->r[4]; // 80093F44
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093F48
  c->r[3]=c->r[1]+0x0000016Cu; // 80093F4C
  c->r[8]=R32(c->r[12]+0x00000004u); // 80093F50
  c->r[20]=c->r[5]|c->r[5]; // 80093F54
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[0]);} // 80093F58
  c->r[21]=c->r[6]|c->r[6]; // 80093F5C
  c->r[22]=c->r[7]|c->r[7]; // 80093F60
  c->r[24]=c->r[9]|c->r[9]; // 80093F64
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093F68
  c->r[25]=c->r[10]|c->r[10]; // 80093F6C
  W32(c->r[1]+0x000000D0u,c->r[11]); // 80093F70
  c->r[4]=c->r[23]|c->r[23]; // 80093F74
  c->r[5]=c->r[3]|c->r[3]; // 80093F78
  c->r[31]=c->r[31]+0x00003BB8u; // 80093F7C
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[0]);} // 80093F80
  c->r[27]=0u+0x00000000u; // 80093F84
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093F88
  W32(c->r[1]+0x000000D4u,c->r[8]); // 80093F8C
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[0]);} // 80093F90
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093F94
  W32(c->r[1]+0x000000D8u,c->r[0]); // 80093F98
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 80093F9C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093FA0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[3]);} // 80093FA4
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 80093FA8
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093FAC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80093FB0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80093FB4
  {uint32_t ea=c->r[1]+0x00000174u; WF32(ea,c->f[0]);} // 80093FB8
  c->lr=0x80093FC0u; f_801647E4(c); // 80093FBC
  {uint32_t ea=c->r[23]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093FC0
  c->r[3]=c->r[1]+0x00000118u; // 80093FC4
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 80093FC8
  {uint32_t ea=c->r[23]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093FCC
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 80093FD0
  {uint32_t ea=c->r[23]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80093FD4
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[0]);} // 80093FD8
  c->lr=0x80093FE0u; f_801648A4(c); // 80093FDC
  c->r[4]=c->r[19]|c->r[19]; // 80093FE0
  c->r[3]=c->r[1]+0x00000160u; // 80093FE4
  c->r[5]=c->r[1]+0x00000124u; // 80093FE8
  c->lr=0x80093FF0u; f_80164808(c); // 80093FEC
  c->r[4]=c->r[19]|c->r[19]; // 80093FF0
  c->r[3]=c->r[1]+0x0000016Cu; // 80093FF4
  c->r[5]=c->r[1]+0x00000130u; // 80093FF8
  c->lr=0x80094000u; f_80164808(c); // 80093FFC
  c->r[4]=c->r[21]|c->r[21]; // 80094000
  c->r[3]=c->r[1]+0x00000124u; // 80094004
  c->lr=0x8009400Cu; f_801648E8(c); // 80094008
  c->f[27]=c->f[1]; // 8009400C
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094010
  fcmp(c,0,c->f[1],c->f[0]); // 80094014
  c->f[26]=c->f[27]; // 80094018
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009401C
  if (!crb(c,2)) { goto L_80094028; } // 80094020
  goto L_8009402C; // 80094024
L_80094028:;
  c->f[26]=-c->f[1]; // 80094028
L_8009402C:;
  c->r[4]=c->r[21]|c->r[21]; // 8009402C
  c->r[3]=c->r[1]+0x00000118u; // 80094030
  c->lr=0x80094038u; f_801648E8(c); // 80094034
  c->f[31]=c->f[1]; // 80094038
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009403C
  fcmp(c,0,c->f[1],c->f[0]); // 80094040
  c->f[2]=c->f[31]; // 80094044
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80094048
  if (!crb(c,2)) { goto L_80094054; } // 8009404C
  goto L_80094058; // 80094050
L_80094054:;
  c->f[2]=-c->f[1]; // 80094054
L_80094058:;
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094058
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[2]);} // 8009405C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80094060
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80094064
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[0]);} // 80094068
  c->r[0]=R32(c->r[1]+0x000001A4u); // 8009406C
  cmps(c,0,(int32_t)c->r[0],0); // 80094070
  if (!crb(c,2)) { goto L_80094080; } // 80094074
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 80094078
  goto L_80094088; // 8009407C
L_80094080:;
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[27]); // 80094080
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 80094084
L_80094088:;
  fcmp(c,0,c->f[26],c->f[30]); // 80094088
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8009408C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80094090
  if (!crb(c,2)) { goto L_80094430; } // 80094094
  c->r[7]=0u+0x80270000u; // 80094098
  {uint32_t ea=c->r[7]+0x00002448u; c->r[6]=R32(ea); c->r[7]=ea;} // 8009409C
  c->f[1]=-c->f[27]; // 800940A0
  c->r[3]=c->r[21]|c->r[21]; // 800940A4
  c->r[5]=R32(c->r[7]+0x00000004u); // 800940A8
  c->r[4]=c->r[1]+0x0000013Cu; // 800940AC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800940B0
  c->r[26]=0u+0x00000000u; // 800940B4
  W32(c->r[1]+0x000000C4u,c->r[6]); // 800940B8
  c->r[17]=0u+0x00000000u; // 800940BC
  W32(c->r[1]+0x000000C8u,c->r[5]); // 800940C0
  W32(c->r[1]+0x000000CCu,c->r[0]); // 800940C4
  c->lr=0x800940CCu; f_8016482C(c); // 800940C8
  c->r[3]=c->r[22]|c->r[22]; // 800940CC
  c->r[4]=c->r[1]+0x0000013Cu; // 800940D0
  c->r[5]=c->r[1]+0x00000154u; // 800940D4
  c->lr=0x800940DCu; f_801647E4(c); // 800940D8
  c->r[29]=c->r[19]|c->r[19]; // 800940DC
  c->r[31]=c->r[1]+0x00000178u; // 800940E0
  c->r[30]=c->r[1]+0x000000D0u; // 800940E4
  c->r[16]=c->r[1]+0x000000C4u; // 800940E8
  c->r[28]=0u+0x00000000u; // 800940EC
L_800940F0:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800940F0
  c->f[1]=c->f[30]; // 800940F4
  c->r[3]=c->r[29]|c->r[29]; // 800940F8
  c->r[5]=c->r[22]|c->r[22]; // 800940FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80094100
  c->r[6]=c->r[31]|c->r[31]; // 80094104
  c->r[7]=c->r[1]+0x00000008u; // 80094108
  c->r[4]=c->r[19]+c->r[0]; // 8009410C
  c->lr=0x80094114u; f_800936E4(c); // 80094110
  cmps(c,0,(int32_t)c->r[3],1); // 80094114
  if (!crb(c,2)) { goto L_80094128; } // 80094118
  W32(c->r[16]+c->r[17],c->r[28]); // 8009411C
  c->r[26]=c->r[26]+0x00000001u; // 80094120
  c->r[17]=c->r[17]+0x00000004u; // 80094124
L_80094128:;
  c->r[28]=c->r[28]+0x00000001u; // 80094128
  c->r[30]=c->r[30]+0x00000004u; // 8009412C
  cmps(c,0,(int32_t)c->r[28],3); // 80094130
  c->r[29]=c->r[29]+0x0000000Cu; // 80094134
  c->r[31]=c->r[31]+0x0000000Cu; // 80094138
  if (crb(c,0)) { IRQCHK(c); goto L_800940F0; } // 8009413C
  cmps(c,0,(int32_t)c->r[26],0); // 80094140
  if (!crb(c,2)) { goto L_800941B4; } // 80094144
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[27]=c->ps1[27]=RF32(ea);} // 80094148
  c->r[16]=0u+0x00000000u; // 8009414C
L_80094150:;
  c->r[4]=c->r[19]|c->r[19]; // 80094150
  c->r[3]=c->r[1]+0x00000154u; // 80094154
  c->r[5]=c->r[1]+0x00000040u; // 80094158
  c->lr=0x80094160u; f_80164808(c); // 8009415C
  c->r[4]=c->r[20]|c->r[20]; // 80094160
  c->r[3]=c->r[1]+0x00000040u; // 80094164
  c->r[5]=c->r[1]+0x0000004Cu; // 80094168
  c->lr=0x80094170u; f_80164908(c); // 8009416C
  c->r[4]=c->r[21]|c->r[21]; // 80094170
  c->r[3]=c->r[1]+0x0000004Cu; // 80094174
  c->lr=0x8009417Cu; f_801648E8(c); // 80094178
  fcmp(c,0,c->f[1],c->f[27]); // 8009417C
  if (!crb(c,0)) { goto L_8009418C; } // 80094180
  c->r[0]=0u+0x00000000u; // 80094184
  goto L_800941A4; // 80094188
L_8009418C:;
  c->r[16]=c->r[16]+0x00000001u; // 8009418C
  c->r[20]=c->r[20]+0x0000000Cu; // 80094190
  cmps(c,0,(int32_t)c->r[16],3); // 80094194
  c->r[19]=c->r[19]+0x0000000Cu; // 80094198
  if (crb(c,0)) { IRQCHK(c); goto L_80094150; } // 8009419C
  c->r[0]=0u+0x00000001u; // 800941A0
L_800941A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800941A4
  if (!crb(c,2)) { goto L_800941B4; } // 800941A8
  c->r[3]=0u+0x00000000u; // 800941AC
  goto L_80094858; // 800941B0
L_800941B4:;
  cmps(c,0,(int32_t)c->r[25],1); // 800941B4
  if (!crb(c,2)) { goto L_800942A4; } // 800941B8
  cmps(c,0,(int32_t)c->r[26],0); // 800941BC
  if (!crb(c,1)) { goto L_800942A0; } // 800941C0
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800941C4
  c->r[4]=c->r[1]+0x00000178u; // 800941C8
  c->r[3]=c->r[22]|c->r[22]; // 800941CC
  c->r[5]=c->r[1]+0x0000013Cu; // 800941D0
  c->r[16]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800941D4
  c->r[4]=c->r[4]+c->r[16]; // 800941D8
  c->lr=0x800941E0u; f_80164808(c); // 800941DC
  c->r[5]=c->r[1]+0x00000178u; // 800941E0
  c->r[4]=c->r[1]+0x0000017Cu; // 800941E4
  {uint32_t ea=c->r[4]+c->r[16]; c->f[1]=c->ps1[1]=RF32(ea);} // 800941E8
  c->r[3]=c->r[1]+0x00000180u; // 800941EC
  {uint32_t ea=c->r[3]+c->r[16]; c->f[0]=c->ps1[0]=RF32(ea);} // 800941F0
  c->r[4]=c->r[21]|c->r[21]; // 800941F4
  {uint32_t ea=c->r[5]+c->r[16]; c->f[2]=c->ps1[2]=RF32(ea);} // 800941F8
  c->r[3]=c->r[1]+0x0000013Cu; // 800941FC
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[1]);} // 80094200
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[2]);} // 80094204
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[0]);} // 80094208
  c->lr=0x80094210u; f_801648E8(c); // 8009420C
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094210
  fcmp(c,0,c->f[1],c->f[0]); // 80094214
  if (!crb(c,0)) { goto L_80094220; } // 80094218
  c->r[25]=0u+0x00000000u; // 8009421C
L_80094220:;
  c->r[3]=c->r[23]|c->r[23]; // 80094220
  c->lr=0x80094228u; f_801648A4(c); // 80094224
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094228
  fcmp(c,0,c->f[1],c->f[0]); // 8009422C
  if (!crb(c,1)) { goto L_8009425C; } // 80094230
  fcmp(c,0,c->f[31],c->f[0]); // 80094234
  if (!crb(c,1)) { goto L_80094240; } // 80094238
  c->r[25]=0u+0x00000000u; // 8009423C
L_80094240:;
  c->r[4]=c->r[23]|c->r[23]; // 80094240
  c->r[3]=c->r[1]+0x0000013Cu; // 80094244
  c->lr=0x8009424Cu; f_801648E8(c); // 80094248
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009424C
  fcmp(c,0,c->f[1],c->f[0]); // 80094250
  if (!crb(c,1)) { goto L_8009425C; } // 80094254
  c->r[25]=0u+0x00000000u; // 80094258
L_8009425C:;
  cmps(c,0,(int32_t)c->r[25],1); // 8009425C
  if (!crb(c,2)) { goto L_800942A4; } // 80094260
  c->r[3]=c->r[1]+0x0000013Cu; // 80094264
  c->r[4]=c->r[3]|c->r[3]; // 80094268
  c->lr=0x80094270u; f_80164848(c); // 8009426C
  c->f[1]=c->f[30]; // 80094270
  c->r[3]=c->r[1]+0x0000013Cu; // 80094274
  c->r[4]=c->r[3]|c->r[3]; // 80094278
  c->lr=0x80094280u; f_8016482C(c); // 8009427C
  c->r[3]=c->r[1]+0x00000154u; // 80094280
  c->r[4]=c->r[1]+0x0000013Cu; // 80094284
  c->r[5]=c->r[1]+0x00000148u; // 80094288
  c->lr=0x80094290u; f_801647E4(c); // 8009428C
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094290
  c->r[27]=0u+0x00000004u; // 80094294
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80094298
  goto L_800942A4; // 8009429C
L_800942A0:;
  c->r[25]=0u+0x00000000u; // 800942A0
L_800942A4:;
  cmps(c,0,(int32_t)c->r[25],0); // 800942A4
  if (!crb(c,2)) { goto L_800942D8; } // 800942A8
  c->f[1]=c->f[30]; // 800942AC
  c->r[3]=c->r[21]|c->r[21]; // 800942B0
  c->r[4]=c->r[1]+0x0000013Cu; // 800942B4
  c->lr=0x800942BCu; f_8016482C(c); // 800942B8
  c->r[3]=c->r[1]+0x00000154u; // 800942BC
  c->r[4]=c->r[1]+0x0000013Cu; // 800942C0
  c->r[5]=c->r[1]+0x00000148u; // 800942C4
  c->lr=0x800942CCu; f_801647E4(c); // 800942C8
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800942CC
  c->r[27]=0u+0x00000003u; // 800942D0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800942D4
L_800942D8:;
  cmps(c,0,(int32_t)c->r[18],0); // 800942D8
  if (crb(c,2)) { goto L_80094428; } // 800942DC
  c->r[3]=R32(c->r[18]+0x00000000u); // 800942E0
  cmps(c,0,(int32_t)c->r[24],1); // 800942E4
  c->r[17]=c->r[3]+0x00000001u; // 800942E8
  W32(c->r[18]+0x00000000u,c->r[17]); // 800942EC
  if (!crb(c,2)) { goto L_80094360; } // 800942F0
  c->r[6]=R32(c->r[21]+0x00000000u); // 800942F4
  c->r[3]=c->r[18]|c->r[18]; // 800942F8
  c->r[0]=R32(c->r[21]+0x00000004u); // 800942FC
  c->r[4]=c->r[27]|c->r[27]; // 80094300
  c->r[12]=R32(c->r[1]+0x00000154u); // 80094304
  c->r[5]=c->r[1]+0x000000B8u; // 80094308
  W32(c->r[1]+0x000000A0u,c->r[6]); // 8009430C
  c->r[6]=c->r[1]+0x000000ACu; // 80094310
  c->r[11]=R32(c->r[1]+0x00000158u); // 80094314
  c->r[7]=c->r[1]+0x000000A0u; // 80094318
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009431C
  c->r[10]=R32(c->r[1]+0x0000015Cu); // 80094320
  c->r[17]=R32(c->r[21]+0x00000008u); // 80094324
  c->r[9]=R32(c->r[1]+0x00000148u); // 80094328
  c->r[8]=R32(c->r[1]+0x0000014Cu); // 8009432C
  c->r[0]=R32(c->r[1]+0x00000150u); // 80094330
  W32(c->r[1]+0x000000A8u,c->r[17]); // 80094334
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094338
  W32(c->r[1]+0x000000ACu,c->r[12]); // 8009433C
  W32(c->r[1]+0x000000B0u,c->r[11]); // 80094340
  W32(c->r[1]+0x000000B4u,c->r[10]); // 80094344
  W32(c->r[1]+0x000000B8u,c->r[9]); // 80094348
  W32(c->r[1]+0x000000BCu,c->r[8]); // 8009434C
  W32(c->r[1]+0x000000C0u,c->r[0]); // 80094350
  c->r[8]=R32(c->r[18]+0x00000000u); // 80094354
  c->lr=0x8009435Cu; f_80093C14(c); // 80094358
  goto L_80094414; // 8009435C
L_80094360:;
  c->r[0]=c->r[17]+0xFFFFFFFFu; // 80094360
  c->r[12]=R32(c->r[21]+0x00000000u); // 80094364
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80094368
  c->r[11]=R32(c->r[21]+0x00000004u); // 8009436C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80094370
  c->r[10]=R32(c->r[21]+0x00000008u); // 80094374
  c->r[9]=R32(c->r[1]+0x00000154u); // 80094378
  c->r[4]=c->r[18]+c->r[3]; // 8009437C
  c->r[8]=R32(c->r[1]+0x00000158u); // 80094380
  c->r[7]=R32(c->r[1]+0x0000015Cu); // 80094384
  c->r[3]=c->r[18]+c->r[0]; // 80094388
  c->r[6]=R32(c->r[1]+0x00000148u); // 8009438C
  c->r[5]=R32(c->r[1]+0x0000014Cu); // 80094390
  c->r[0]=R32(c->r[1]+0x00000150u); // 80094394
  W32(c->r[1]+0x00000094u,c->r[6]); // 80094398
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009439C
  W32(c->r[18]+0x00000000u,c->r[17]); // 800943A0
  {uint32_t ea=c->r[1]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800943A4
  W32(c->r[1]+0x00000098u,c->r[5]); // 800943A8
  W32(c->r[4]+0x00000004u,c->r[27]); // 800943AC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800943B0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[2]);} // 800943B4
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800943B8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800943BC
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800943C0
  W32(c->r[1]+0x00000088u,c->r[9]); // 800943C4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800943C8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[2]);} // 800943CC
  W32(c->r[1]+0x0000008Cu,c->r[8]); // 800943D0
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800943D4
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[0]);} // 800943D8
  W32(c->r[1]+0x00000090u,c->r[7]); // 800943DC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800943E0
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[2]);} // 800943E4
  {uint32_t ea=c->r[3]+0x0000018Cu; WF32(ea,c->f[0]);} // 800943E8
  W32(c->r[1]+0x0000007Cu,c->r[12]); // 800943EC
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800943F0
  {uint32_t ea=c->r[4]+0x000002A4u; WF32(ea,c->f[1]);} // 800943F4
  W32(c->r[1]+0x00000080u,c->r[11]); // 800943F8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800943FC
  {uint32_t ea=c->r[3]+0x00000304u; WF32(ea,c->f[0]);} // 80094400
  W32(c->r[1]+0x00000084u,c->r[10]); // 80094404
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094408
  {uint32_t ea=c->r[3]+0x00000308u; WF32(ea,c->f[1]);} // 8009440C
  {uint32_t ea=c->r[3]+0x0000030Cu; WF32(ea,c->f[0]);} // 80094410
L_80094414:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 80094414
  cmps(c,0,(int32_t)c->r[0],24); // 80094418
  if (!crb(c,1)) { goto L_80094428; } // 8009441C
  c->r[0]=0u+0x00000018u; // 80094420
  W32(c->r[18]+0x00000000u,c->r[0]); // 80094424
L_80094428:;
  c->r[3]=0u+0x00000001u; // 80094428
  goto L_80094858; // 8009442C
L_80094430:;
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80094430
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094434
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80094438
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8009443C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[0]);} // 80094440
  c->r[0]=R32(c->r[1]+0x000001A4u); // 80094444
  cmps(c,0,(int32_t)c->r[0],0); // 80094448
  if (!crb(c,2)) { goto L_80094458; } // 8009444C
  c->r[3]=0u+0x00000000u; // 80094450
  goto L_80094858; // 80094454
L_80094458:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80094458
  c->r[3]=c->r[1]+0x00000118u; // 8009445C
  c->r[4]=c->r[1]+0x0000013Cu; // 80094460
  c->lr=0x80094468u; f_8016482C(c); // 80094464
  c->r[3]=c->r[1]+0x00000160u; // 80094468
  c->r[4]=c->r[1]+0x0000013Cu; // 8009446C
  c->r[5]=c->r[1]+0x00000148u; // 80094470
  c->lr=0x80094478u; f_801647E4(c); // 80094474
  c->f[1]=-c->f[30]; // 80094478
  c->r[3]=c->r[21]|c->r[21]; // 8009447C
  c->r[4]=c->r[1]+0x0000013Cu; // 80094480
  c->lr=0x80094488u; f_8016482C(c); // 80094484
  c->r[3]=c->r[1]+0x00000148u; // 80094488
  c->r[4]=c->r[1]+0x0000013Cu; // 8009448C
  c->r[5]=c->r[1]+0x00000154u; // 80094490
  c->lr=0x80094498u; f_801647E4(c); // 80094494
  {uint32_t ea=c->r[2]+0xFFFF92B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094498
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009449C
  fcmp(c,0,c->f[0],c->f[1]); // 800944A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800944A4
  if (!crb(c,2)) { goto L_80094854; } // 800944A8
  {uint32_t ea=c->r[2]+0xFFFF92B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800944AC
  fcmp(c,0,c->f[1],c->f[0]); // 800944B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800944B4
  if (!crb(c,2)) { goto L_80094854; } // 800944B8
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[27]=c->ps1[27]=RF32(ea);} // 800944BC
  fcmp(c,0,c->f[31],c->f[27]); // 800944C0
  if (!crb(c,0)) { goto L_80094854; } // 800944C4
  {uint32_t ea=c->r[21]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800944C8
  c->r[17]=c->r[19]|c->r[19]; // 800944CC
  {uint32_t ea=c->r[21]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800944D0
  c->r[16]=0u+0x00000000u; // 800944D4
  {uint32_t ea=c->r[21]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800944D8
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[2]);} // 800944DC
  {uint32_t ea=c->r[2]+0xFFFF92A4u; c->f[26]=c->ps1[26]=RF32(ea);} // 800944E0
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[1]);} // 800944E4
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 800944E8
L_800944EC:;
  c->r[4]=c->r[17]|c->r[17]; // 800944EC
  c->r[3]=c->r[1]+0x00000154u; // 800944F0
  c->r[5]=c->r[1]+0x00000028u; // 800944F4
  c->lr=0x800944FCu; f_80164808(c); // 800944F8
  c->r[4]=c->r[20]|c->r[20]; // 800944FC
  c->r[3]=c->r[1]+0x00000028u; // 80094500
  c->r[5]=c->r[1]+0x00000034u; // 80094504
  c->lr=0x8009450Cu; f_80164908(c); // 80094508
  c->r[4]=c->r[21]|c->r[21]; // 8009450C
  c->r[3]=c->r[1]+0x00000034u; // 80094510
  c->lr=0x80094518u; f_801648E8(c); // 80094514
  fcmp(c,0,c->f[1],c->f[27]); // 80094518
  if (!crb(c,0)) { goto L_80094528; } // 8009451C
  c->r[0]=0u+0x00000000u; // 80094520
  goto L_80094540; // 80094524
L_80094528:;
  c->r[16]=c->r[16]+0x00000001u; // 80094528
  c->r[20]=c->r[20]+0x0000000Cu; // 8009452C
  cmps(c,0,(int32_t)c->r[16],3); // 80094530
  c->r[17]=c->r[17]+0x0000000Cu; // 80094534
  if (crb(c,0)) { IRQCHK(c); goto L_800944EC; } // 80094538
  c->r[0]=0u+0x00000001u; // 8009453C
L_80094540:;
  cmps(c,0,(int32_t)c->r[0],0); // 80094540
  if (!crb(c,2)) { goto L_800947B8; } // 80094544
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[28]=c->ps1[28]=RF32(ea);} // 80094548
  c->r[20]=c->r[19]|c->r[19]; // 8009454C
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80094550
  c->r[17]=c->r[1]+0x000000D0u; // 80094554
  c->r[21]=0u+0x00000000u; // 80094558
L_8009455C:;
  c->r[0]=R32(c->r[17]+0x00000000u); // 8009455C
  c->r[4]=c->r[20]|c->r[20]; // 80094560
  c->r[5]=c->r[31]+0x00000018u; // 80094564
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80094568
  c->r[16]=c->r[19]+c->r[0]; // 8009456C
  c->r[3]=c->r[16]|c->r[16]; // 80094570
  c->lr=0x80094578u; f_80164808(c); // 80094574
  c->r[4]=c->r[20]|c->r[20]; // 80094578
  c->r[3]=c->r[1]+0x00000154u; // 8009457C
  c->r[5]=c->r[31]+0x00000024u; // 80094580
  c->lr=0x80094588u; f_80164808(c); // 80094584
  c->r[4]=c->r[16]|c->r[16]; // 80094588
  c->r[3]=c->r[1]+0x00000154u; // 8009458C
  c->r[5]=c->r[31]+0x00000030u; // 80094590
  c->lr=0x80094598u; f_80164808(c); // 80094594
  c->r[3]=c->r[31]+0x00000024u; // 80094598
  c->r[4]=c->r[31]+0x00000018u; // 8009459C
  c->lr=0x800945A4u; f_801648E8(c); // 800945A0
  fcmp(c,0,c->f[1],c->f[28]); // 800945A4
  c->f[27]=c->f[1]; // 800945A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800945AC
  if (!crb(c,2)) { goto L_800945C4; } // 800945B0
  c->r[3]=c->r[31]+0x00000024u; // 800945B4
  c->r[4]=c->r[3]|c->r[3]; // 800945B8
  c->lr=0x800945C0u; f_801648E8(c); // 800945BC
  goto L_80094628; // 800945C0
L_800945C4:;
  c->r[3]=c->r[31]+0x00000018u; // 800945C4
  c->r[4]=c->r[3]|c->r[3]; // 800945C8
  c->lr=0x800945D0u; f_801648E8(c); // 800945CC
  fcmp(c,0,c->f[27],c->f[1]); // 800945D0
  c->f[29]=c->f[1]; // 800945D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800945D8
  if (!crb(c,2)) { goto L_800945F0; } // 800945DC
  c->r[3]=c->r[31]+0x00000030u; // 800945E0
  c->r[4]=c->r[3]|c->r[3]; // 800945E4
  c->lr=0x800945ECu; f_801648E8(c); // 800945E8
  goto L_80094628; // 800945EC
L_800945F0:;
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 800945F0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800945F4
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[0]);} // 800945F8
  c->r[0]=R32(c->r[1]+0x000001A4u); // 800945FC
  cmps(c,0,(int32_t)c->r[0],0); // 80094600
  if (!crb(c,2)) { goto L_80094610; } // 80094604
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094608
  goto L_80094628; // 8009460C
L_80094610:;
  c->r[3]=c->r[31]+0x00000024u; // 80094610
  c->r[4]=c->r[3]|c->r[3]; // 80094614
  c->lr=0x8009461Cu; f_801648E8(c); // 80094618
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[27]); // 8009461C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 80094620
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80094624
L_80094628:;
  fcmp(c,0,c->f[1],c->f[26]); // 80094628
  if (!crb(c,0)) { goto L_80094638; } // 8009462C
  c->f[26]=c->f[1]; // 80094630
  c->r[27]=c->r[21]|c->r[21]; // 80094634
L_80094638:;
  c->r[21]=c->r[21]+0x00000001u; // 80094638
  c->r[20]=c->r[20]+0x0000000Cu; // 8009463C
  cmps(c,0,(int32_t)c->r[21],3); // 80094640
  c->r[17]=c->r[17]+0x00000004u; // 80094644
  if (crb(c,0)) { IRQCHK(c); goto L_8009455C; } // 80094648
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8009464C
  c->r[3]=c->r[1]+0x000000D0u; // 80094650
  c->r[0]=R32(c->r[3]+c->r[0]); // 80094654
  c->r[17]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 80094658
  c->r[5]=c->r[31]+0x00000000u; // 8009465C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80094660
  c->r[16]=c->r[19]+c->r[17]; // 80094664
  c->r[4]=c->r[16]|c->r[16]; // 80094668
  c->r[3]=c->r[19]+c->r[0]; // 8009466C
  c->lr=0x80094674u; f_80164808(c); // 80094670
  c->r[4]=c->r[16]|c->r[16]; // 80094674
  c->r[3]=c->r[1]+0x00000154u; // 80094678
  c->r[5]=c->r[31]+0x0000000Cu; // 8009467C
  c->lr=0x80094684u; f_80164808(c); // 80094680
  c->r[3]=c->r[31]+0x0000000Cu; // 80094684
  c->r[4]=c->r[31]+0x00000000u; // 80094688
  c->lr=0x80094690u; f_801648E8(c); // 8009468C
  {uint32_t ea=c->r[13]+0xFFFFA4A4u; WF32(ea,c->f[1]);} // 80094690
  c->r[3]=c->r[31]+0x00000000u; // 80094694
  c->lr=0x8009469Cu; f_8016488C(c); // 80094698
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8009469C
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800946A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800946A4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800946A8
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[0]);} // 800946AC
  c->r[0]=R32(c->r[1]+0x000001A4u); // 800946B0
  cmps(c,0,(int32_t)c->r[0],0); // 800946B4
  if (!crb(c,2)) { goto L_800946D8; } // 800946B8
  {uint32_t ea=c->r[16]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800946BC
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 800946C0
  {uint32_t ea=c->r[16]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800946C4
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 800946C8
  {uint32_t ea=c->r[16]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800946CC
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 800946D0
  goto L_8009472C; // 800946D4
L_800946D8:;
  {uint32_t ea=c->r[13]+0xFFFFA4A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800946D8
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 800946DC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800946E0
  fcmp(c,0,c->f[0],c->f[2]); // 800946E4
  if (!crb(c,0)) { goto L_800946F0; } // 800946E8
  goto L_800946F4; // 800946EC
L_800946F0:;
  c->f[2]=c->f[0]; // 800946F0
L_800946F4:;
  c->f[0]=c->ps1[0]=S(c->f[2]); // 800946F4
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800946F8
  fcmp(c,0,c->f[0],c->f[1]); // 800946FC
  if (!crb(c,1)) { goto L_80094708; } // 80094700
  goto L_8009470C; // 80094704
L_80094708:;
  c->f[1]=c->f[0]; // 80094708
L_8009470C:;
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8009470C
  c->r[3]=c->r[31]+0x00000000u; // 80094710
  c->r[4]=c->r[31]+0x0000000Cu; // 80094714
  c->lr=0x8009471Cu; f_8016482C(c); // 80094718
  c->r[3]=c->r[16]|c->r[16]; // 8009471C
  c->r[4]=c->r[31]+0x0000000Cu; // 80094720
  c->r[5]=c->r[1]+0x000000E8u; // 80094724
  c->lr=0x8009472Cu; f_801647E4(c); // 80094728
L_8009472C:;
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009472C
  c->r[3]=c->r[23]|c->r[23]; // 80094730
  c->r[4]=c->r[1]+0x0000013Cu; // 80094734
  c->lr=0x8009473Cu; f_8016482C(c); // 80094738
  c->r[4]=c->r[1]+0x0000013Cu; // 8009473C
  c->r[3]=c->r[1]+0x000000E8u; // 80094740
  c->r[5]=c->r[4]|c->r[4]; // 80094744
  c->lr=0x8009474Cu; f_801647E4(c); // 80094748
  c->f[1]=c->f[30]; // 8009474C
  c->r[5]=c->r[22]|c->r[22]; // 80094750
  c->r[3]=c->r[1]+0x000000E8u; // 80094754
  c->r[4]=c->r[1]+0x0000013Cu; // 80094758
  c->r[6]=c->r[1]+0x000000DCu; // 8009475C
  c->r[7]=c->r[1]+0x0000000Cu; // 80094760
  c->lr=0x80094768u; f_800936E4(c); // 80094764
  cmps(c,0,(int32_t)c->r[3],0); // 80094768
  if (!crb(c,2)) { goto L_80094778; } // 8009476C
  c->r[3]=0u+0x00000000u; // 80094770
  goto L_80094858; // 80094774
L_80094778:;
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80094778
  c->r[3]=c->r[23]|c->r[23]; // 8009477C
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80094780
  c->r[4]=c->r[1]+0x0000013Cu; // 80094784
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094788
  c->r[16]=0u+0x00000002u; // 8009478C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80094790
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[3]);} // 80094794
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[2]);} // 80094798
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[0]);} // 8009479C
  c->lr=0x800947A4u; f_8016482C(c); // 800947A0
  c->r[3]=c->r[22]|c->r[22]; // 800947A4
  c->r[4]=c->r[1]+0x0000013Cu; // 800947A8
  c->r[5]=c->r[1]+0x00000148u; // 800947AC
  c->lr=0x800947B4u; f_801647E4(c); // 800947B0
  goto L_800947BC; // 800947B4
L_800947B8:;
  c->r[16]=0u+0x00000001u; // 800947B8
L_800947BC:;
  cmps(c,0,(int32_t)c->r[18],0); // 800947BC
  if (crb(c,2)) { goto L_8009484C; } // 800947C0
  c->r[5]=R32(c->r[18]+0x00000000u); // 800947C4
  c->r[3]=c->r[18]|c->r[18]; // 800947C8
  c->r[20]=R32(c->r[1]+0x000000F4u); // 800947CC
  c->r[4]=c->r[16]|c->r[16]; // 800947D0
  c->r[0]=c->r[5]+0x00000001u; // 800947D4
  c->r[19]=R32(c->r[1]+0x000000F8u); // 800947D8
  W32(c->r[18]+0x00000000u,c->r[0]); // 800947DC
  c->r[5]=c->r[1]+0x00000070u; // 800947E0
  c->r[17]=R32(c->r[1]+0x000000FCu); // 800947E4
  c->r[6]=c->r[1]+0x00000064u; // 800947E8
  c->r[12]=R32(c->r[1]+0x00000154u); // 800947EC
  c->r[7]=c->r[1]+0x00000058u; // 800947F0
  c->r[11]=R32(c->r[1]+0x00000158u); // 800947F4
  c->r[10]=R32(c->r[1]+0x0000015Cu); // 800947F8
  c->r[9]=R32(c->r[1]+0x00000148u); // 800947FC
  c->r[8]=R32(c->r[1]+0x0000014Cu); // 80094800
  c->r[0]=R32(c->r[1]+0x00000150u); // 80094804
  W32(c->r[1]+0x00000058u,c->r[20]); // 80094808
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009480C
  W32(c->r[1]+0x0000005Cu,c->r[19]); // 80094810
  W32(c->r[1]+0x00000060u,c->r[17]); // 80094814
  W32(c->r[1]+0x00000064u,c->r[12]); // 80094818
  W32(c->r[1]+0x00000068u,c->r[11]); // 8009481C
  W32(c->r[1]+0x0000006Cu,c->r[10]); // 80094820
  W32(c->r[1]+0x00000070u,c->r[9]); // 80094824
  W32(c->r[1]+0x00000074u,c->r[8]); // 80094828
  W32(c->r[1]+0x00000078u,c->r[0]); // 8009482C
  c->r[8]=R32(c->r[18]+0x00000000u); // 80094830
  c->lr=0x80094838u; f_80093C14(c); // 80094834
  c->r[0]=R32(c->r[18]+0x00000000u); // 80094838
  cmps(c,0,(int32_t)c->r[0],24); // 8009483C
  if (!crb(c,1)) { goto L_8009484C; } // 80094840
  c->r[0]=0u+0x00000018u; // 80094844
  W32(c->r[18]+0x00000000u,c->r[0]); // 80094848
L_8009484C:;
  c->r[3]=0u+0x00000001u; // 8009484C
  goto L_80094858; // 80094850
L_80094854:;
  c->r[3]=0u+0x00000000u; // 80094854
L_80094858:;
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,31,ea,0,0);} // 80094858
  {uint32_t ea=c->r[1]+0x00000240u; c->f[31]=RF64(ea);} // 8009485C
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,30,ea,0,0);} // 80094860
  {uint32_t ea=c->r[1]+0x00000230u; c->f[30]=RF64(ea);} // 80094864
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,29,ea,0,0);} // 80094868
  {uint32_t ea=c->r[1]+0x00000220u; c->f[29]=RF64(ea);} // 8009486C
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,28,ea,0,0);} // 80094870
  {uint32_t ea=c->r[1]+0x00000210u; c->f[28]=RF64(ea);} // 80094874
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,27,ea,0,0);} // 80094878
  {uint32_t ea=c->r[1]+0x00000200u; c->f[27]=RF64(ea);} // 8009487C
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,26,ea,0,0);} // 80094880
  c->r[11]=c->r[1]+0x000001F0u; // 80094884
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[26]=RF64(ea);} // 80094888
  c->lr=0x80094890u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009488C
  c->r[0]=R32(c->r[1]+0x00000254u); // 80094890
  c->lr=c->r[0]; // 80094894
  c->r[1]=c->r[1]+0x00000250u; // 80094898
  return; // 8009489C
}

// fn_800948A0
void f_800948A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800948A0
  c->r[0]=c->lr; // 800948A4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800948A8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800948AC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800948B0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 800948B4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 800948B8
  c->r[11]=c->r[1]+0x00000060u; // 800948BC
  c->lr=0x800948C4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800948C0
  c->f[30]=c->f[1]; // 800948C4
  c->r[24]=c->r[5]|c->r[5]; // 800948C8
  c->r[25]=c->r[6]|c->r[6]; // 800948CC
  c->r[26]=c->r[7]|c->r[7]; // 800948D0
  c->r[22]=c->r[3]|c->r[3]; // 800948D4
  c->r[23]=c->r[4]|c->r[4]; // 800948D8
  c->r[27]=c->r[8]|c->r[8]; // 800948DC
  c->r[28]=c->r[9]|c->r[9]; // 800948E0
  c->r[29]=c->r[10]|c->r[10]; // 800948E4
  c->r[3]=c->r[25]|c->r[25]; // 800948E8
  c->r[4]=c->r[26]|c->r[26]; // 800948EC
  c->r[5]=c->r[1]+0x00000008u; // 800948F0
  c->r[30]=0u+0x00000000u; // 800948F4
  c->lr=0x800948FCu; f_801647E4(c); // 800948F8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800948FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094900
  fcmp(c,0,c->f[2],c->f[0]); // 80094904
  if (!crb(c,1)) { goto L_80094920; } // 80094908
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[30]); // 8009490C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80094910
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80094914
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80094918
  goto L_80094930; // 8009491C
L_80094920:;
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[30]); // 80094920
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[30]); // 80094924
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80094928
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8009492C
L_80094930:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80094930
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094934
  fcmp(c,0,c->f[2],c->f[0]); // 80094938
  if (!crb(c,1)) { goto L_80094954; } // 8009493C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[30]); // 80094940
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80094944
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80094948
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8009494C
  goto L_80094964; // 80094950
L_80094954:;
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[30]); // 80094954
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[30]); // 80094958
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8009495C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80094960
L_80094964:;
  {uint32_t ea=c->r[25]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80094964
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094968
  fcmp(c,0,c->f[2],c->f[0]); // 8009496C
  if (!crb(c,1)) { goto L_80094988; } // 80094970
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[30]); // 80094974
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80094978
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 8009497C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80094980
  goto L_80094998; // 80094984
L_80094988:;
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[30]); // 80094988
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[30]); // 8009498C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80094990
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80094994
L_80094998:;
  {uint32_t ea=c->r[1]+0x00000034u; c->f[31]=c->ps1[31]=RF32(ea);} // 80094998
  c->r[31]=0u+0x00000000u; // 8009499C
  goto L_80094B64; // 800949A0
L_800949A4:;
  {uint32_t ea=c->r[23]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800949A4
  fcmp(c,0,c->f[31],c->f[0]); // 800949A8
  if (!crb(c,0)) { goto L_800949D0; } // 800949AC
  {uint32_t ea=c->r[23]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800949B0
  fcmp(c,0,c->f[31],c->f[0]); // 800949B4
  if (!crb(c,0)) { goto L_800949D0; } // 800949B8
  {uint32_t ea=c->r[23]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800949BC
  fcmp(c,0,c->f[31],c->f[0]); // 800949C0
  if (!crb(c,0)) { goto L_800949D0; } // 800949C4
  c->r[0]=0u+0x00000001u; // 800949C8
  goto L_80094AC4; // 800949CC
L_800949D0:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800949D0
  {uint32_t ea=c->r[23]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800949D4
  fcmp(c,0,c->f[1],c->f[0]); // 800949D8
  if (!crb(c,1)) { goto L_80094A00; } // 800949DC
  {uint32_t ea=c->r[23]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800949E0
  fcmp(c,0,c->f[1],c->f[0]); // 800949E4
  if (!crb(c,1)) { goto L_80094A00; } // 800949E8
  {uint32_t ea=c->r[23]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800949EC
  fcmp(c,0,c->f[1],c->f[0]); // 800949F0
  if (!crb(c,1)) { goto L_80094A00; } // 800949F4
  c->r[0]=0u+0x00000002u; // 800949F8
  goto L_80094AC4; // 800949FC
L_80094A00:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80094A00
  {uint32_t ea=c->r[23]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A04
  fcmp(c,0,c->f[1],c->f[0]); // 80094A08
  if (!crb(c,0)) { goto L_80094A30; } // 80094A0C
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A10
  fcmp(c,0,c->f[1],c->f[0]); // 80094A14
  if (!crb(c,0)) { goto L_80094A30; } // 80094A18
  {uint32_t ea=c->r[23]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A1C
  fcmp(c,0,c->f[1],c->f[0]); // 80094A20
  if (!crb(c,0)) { goto L_80094A30; } // 80094A24
  c->r[0]=0u+0x00000002u; // 80094A28
  goto L_80094AC4; // 80094A2C
L_80094A30:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094A30
  {uint32_t ea=c->r[23]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A34
  fcmp(c,0,c->f[1],c->f[0]); // 80094A38
  if (!crb(c,1)) { goto L_80094A60; } // 80094A3C
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A40
  fcmp(c,0,c->f[1],c->f[0]); // 80094A44
  if (!crb(c,1)) { goto L_80094A60; } // 80094A48
  {uint32_t ea=c->r[23]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A4C
  fcmp(c,0,c->f[1],c->f[0]); // 80094A50
  if (!crb(c,1)) { goto L_80094A60; } // 80094A54
  c->r[0]=0u+0x00000002u; // 80094A58
  goto L_80094AC4; // 80094A5C
L_80094A60:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094A60
  {uint32_t ea=c->r[23]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A64
  fcmp(c,0,c->f[1],c->f[0]); // 80094A68
  if (!crb(c,0)) { goto L_80094A90; } // 80094A6C
  {uint32_t ea=c->r[23]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A70
  fcmp(c,0,c->f[1],c->f[0]); // 80094A74
  if (!crb(c,0)) { goto L_80094A90; } // 80094A78
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A7C
  fcmp(c,0,c->f[1],c->f[0]); // 80094A80
  if (!crb(c,0)) { goto L_80094A90; } // 80094A84
  c->r[0]=0u+0x00000002u; // 80094A88
  goto L_80094AC4; // 80094A8C
L_80094A90:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094A90
  {uint32_t ea=c->r[23]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094A94
  fcmp(c,0,c->f[1],c->f[0]); // 80094A98
  if (!crb(c,1)) { goto L_80094AC0; } // 80094A9C
  {uint32_t ea=c->r[23]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094AA0
  fcmp(c,0,c->f[1],c->f[0]); // 80094AA4
  if (!crb(c,1)) { goto L_80094AC0; } // 80094AA8
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094AAC
  fcmp(c,0,c->f[1],c->f[0]); // 80094AB0
  if (!crb(c,1)) { goto L_80094AC0; } // 80094AB4
  c->r[0]=0u+0x00000002u; // 80094AB8
  goto L_80094AC4; // 80094ABC
L_80094AC0:;
  c->r[0]=0u+0x00000000u; // 80094AC0
L_80094AC4:;
  cmps(c,0,(int32_t)c->r[0],1); // 80094AC4
  if (crb(c,2)) { goto L_80094B6C; } // 80094AC8
  cmps(c,0,(int32_t)c->r[0],2); // 80094ACC
  if (crb(c,2)) { goto L_80094B5C; } // 80094AD0
  c->f[1]=c->f[30]; // 80094AD4
  c->r[3]=c->r[22]|c->r[22]; // 80094AD8
  c->r[4]=c->r[23]|c->r[23]; // 80094ADC
  c->r[7]=c->r[25]|c->r[25]; // 80094AE0
  c->r[8]=c->r[26]|c->r[26]; // 80094AE4
  c->r[9]=c->r[28]|c->r[28]; // 80094AE8
  c->r[10]=c->r[29]|c->r[29]; // 80094AEC
  c->r[5]=c->r[23]+0x00000024u; // 80094AF0
  c->r[6]=c->r[23]+0x00000048u; // 80094AF4
  c->lr=0x80094AFCu; f_80093ED0(c); // 80094AF8
  cmps(c,0,(int32_t)c->r[27],1); // 80094AFC
  c->r[30]=c->r[30]|c->r[3]; // 80094B00
  if (!crb(c,2)) { goto L_80094B5C; } // 80094B04
  {uint32_t ea=c->r[23]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094B08
  c->r[3]=c->r[1]+0x00000014u; // 80094B0C
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094B10
  c->r[4]=c->r[3]|c->r[3]; // 80094B14
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80094B18
  {uint32_t ea=c->r[23]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094B1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80094B20
  {uint32_t ea=c->r[23]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094B24
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80094B28
  c->lr=0x80094B30u; f_8016482C(c); // 80094B2C
  c->f[1]=c->f[30]; // 80094B30
  c->r[3]=c->r[22]|c->r[22]; // 80094B34
  c->r[4]=c->r[23]|c->r[23]; // 80094B38
  c->r[7]=c->r[25]|c->r[25]; // 80094B3C
  c->r[8]=c->r[26]|c->r[26]; // 80094B40
  c->r[9]=c->r[28]|c->r[28]; // 80094B44
  c->r[10]=c->r[29]|c->r[29]; // 80094B48
  c->r[5]=c->r[23]+0x00000024u; // 80094B4C
  c->r[6]=c->r[1]+0x00000014u; // 80094B50
  c->lr=0x80094B58u; f_80093ED0(c); // 80094B54
  c->r[30]=c->r[30]|c->r[3]; // 80094B58
L_80094B5C:;
  c->r[23]=c->r[23]+0x00000054u; // 80094B5C
  c->r[31]=c->r[31]+0x00000001u; // 80094B60
L_80094B64:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[24]); // 80094B64
  if (crb(c,0)) { IRQCHK(c); goto L_800949A4; } // 80094B68
L_80094B6C:;
  c->r[3]=c->r[30]|c->r[30]; // 80094B6C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 80094B70
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 80094B74
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 80094B78
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 80094B7C
  c->r[11]=c->r[1]+0x00000060u; // 80094B80
  c->lr=0x80094B88u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80094B84
  c->r[0]=R32(c->r[1]+0x00000084u); // 80094B88
  c->lr=c->r[0]; // 80094B8C
  c->r[1]=c->r[1]+0x00000080u; // 80094B90
  return; // 80094B94
}

// fn_80094B98
void f_80094B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80094B98
  c->r[0]=c->lr; // 80094B9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80094BA0
  c->r[11]=c->r[1]+0x00000030u; // 80094BA4
  c->lr=0x80094BACu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80094BA8
  c->r[25]=c->r[3]|c->r[3]; // 80094BAC
  c->r[31]=c->r[4]|c->r[4]; // 80094BB0
  c->r[26]=c->r[5]|c->r[5]; // 80094BB4
  c->r[27]=c->r[6]|c->r[6]; // 80094BB8
  c->r[28]=c->r[7]|c->r[7]; // 80094BBC
  c->r[29]=0u+0x00000000u; // 80094BC0
  c->r[30]=0u+0x00000000u; // 80094BC4
  goto L_80094C04; // 80094BC8
L_80094BCC:;
  c->r[3]=c->r[25]|c->r[25]; // 80094BCC
  c->r[4]=c->r[31]|c->r[31]; // 80094BD0
  c->r[7]=c->r[27]|c->r[27]; // 80094BD4
  c->r[8]=c->r[28]|c->r[28]; // 80094BD8
  c->r[5]=c->r[31]+0x00000024u; // 80094BDC
  c->r[6]=c->r[31]+0x00000048u; // 80094BE0
  c->lr=0x80094BE8u; f_800932C4(c); // 80094BE4
  cmps(c,0,(int32_t)c->r[3],1); // 80094BE8
  if (!crb(c,2)) { goto L_80094BF4; } // 80094BEC
  c->r[29]=c->r[29]+0x00000001u; // 80094BF0
L_80094BF4:;
  cmps(c,0,(int32_t)c->r[29],24); // 80094BF4
  if (!crb(c,0)) { goto L_80094C0C; } // 80094BF8
  c->r[31]=c->r[31]+0x00000054u; // 80094BFC
  c->r[30]=c->r[30]+0x00000001u; // 80094C00
L_80094C04:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[26]); // 80094C04
  if (crb(c,0)) { IRQCHK(c); goto L_80094BCC; } // 80094C08
L_80094C0C:;
  cmps(c,0,(int32_t)c->r[29],0); // 80094C0C
  if (!crb(c,1)) { goto L_80094C1C; } // 80094C10
  c->r[3]=0u+0x00000001u; // 80094C14
  goto L_80094C20; // 80094C18
L_80094C1C:;
  c->r[3]=0u+0x00000000u; // 80094C1C
L_80094C20:;
  c->r[11]=c->r[1]+0x00000030u; // 80094C20
  c->lr=0x80094C28u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80094C24
  c->r[0]=R32(c->r[1]+0x00000034u); // 80094C28
  c->lr=c->r[0]; // 80094C2C
  c->r[1]=c->r[1]+0x00000030u; // 80094C30
  return; // 80094C34
}

// fn_80094C38
void f_80094C38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80094C38
  c->r[0]=c->lr; // 80094C3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80094C40
  c->r[11]=c->r[1]+0x00000040u; // 80094C44
  c->lr=0x80094C4Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80094C48
  c->r[7]=R32(c->r[6]+0x00000000u); // 80094C4C
  c->r[26]=c->r[3]|c->r[3]; // 80094C50
  c->r[0]=R32(c->r[6]+0x00000004u); // 80094C54
  c->r[31]=c->r[4]|c->r[4]; // 80094C58
  {uint32_t ea=c->r[2]+0xFFFF92B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094C5C
  c->r[27]=c->r[5]|c->r[5]; // 80094C60
  W32(c->r[1]+0x00000014u,c->r[7]); // 80094C64
  c->r[28]=c->r[6]|c->r[6]; // 80094C68
  {uint32_t ea=c->r[2]+0xFFFF92BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094C6C
  c->r[29]=0u+0x00000000u; // 80094C70
  W32(c->r[1]+0x00000018u,c->r[0]); // 80094C74
  c->r[30]=0u+0x00000000u; // 80094C78
  c->r[0]=R32(c->r[6]+0x00000008u); // 80094C7C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80094C80
  c->r[3]=R32(c->r[6]+0x00000000u); // 80094C84
  c->r[0]=R32(c->r[6]+0x00000004u); // 80094C88
  W32(c->r[1]+0x00000008u,c->r[3]); // 80094C8C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80094C90
  c->r[0]=R32(c->r[6]+0x00000008u); // 80094C94
  W32(c->r[1]+0x00000010u,c->r[0]); // 80094C98
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80094C9C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80094CA0
  goto L_80094E34; // 80094CA4
L_80094CA8:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80094CA8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094CAC
  fcmp(c,0,c->f[1],c->f[0]); // 80094CB0
  if (!crb(c,0)) { goto L_80094CD8; } // 80094CB4
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094CB8
  fcmp(c,0,c->f[1],c->f[0]); // 80094CBC
  if (!crb(c,0)) { goto L_80094CD8; } // 80094CC0
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094CC4
  fcmp(c,0,c->f[1],c->f[0]); // 80094CC8
  if (!crb(c,0)) { goto L_80094CD8; } // 80094CCC
  c->r[0]=0u+0x00000001u; // 80094CD0
  goto L_80094DCC; // 80094CD4
L_80094CD8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094CD8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094CDC
  fcmp(c,0,c->f[1],c->f[0]); // 80094CE0
  if (!crb(c,1)) { goto L_80094D08; } // 80094CE4
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094CE8
  fcmp(c,0,c->f[1],c->f[0]); // 80094CEC
  if (!crb(c,1)) { goto L_80094D08; } // 80094CF0
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094CF4
  fcmp(c,0,c->f[1],c->f[0]); // 80094CF8
  if (!crb(c,1)) { goto L_80094D08; } // 80094CFC
  c->r[0]=0u+0x00000002u; // 80094D00
  goto L_80094DCC; // 80094D04
L_80094D08:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094D08
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D0C
  fcmp(c,0,c->f[1],c->f[0]); // 80094D10
  if (!crb(c,0)) { goto L_80094D38; } // 80094D14
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D18
  fcmp(c,0,c->f[1],c->f[0]); // 80094D1C
  if (!crb(c,0)) { goto L_80094D38; } // 80094D20
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D24
  fcmp(c,0,c->f[1],c->f[0]); // 80094D28
  if (!crb(c,0)) { goto L_80094D38; } // 80094D2C
  c->r[0]=0u+0x00000002u; // 80094D30
  goto L_80094DCC; // 80094D34
L_80094D38:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094D38
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D3C
  fcmp(c,0,c->f[1],c->f[0]); // 80094D40
  if (!crb(c,1)) { goto L_80094D68; } // 80094D44
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D48
  fcmp(c,0,c->f[1],c->f[0]); // 80094D4C
  if (!crb(c,1)) { goto L_80094D68; } // 80094D50
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D54
  fcmp(c,0,c->f[1],c->f[0]); // 80094D58
  if (!crb(c,1)) { goto L_80094D68; } // 80094D5C
  c->r[0]=0u+0x00000002u; // 80094D60
  goto L_80094DCC; // 80094D64
L_80094D68:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80094D68
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D6C
  fcmp(c,0,c->f[1],c->f[0]); // 80094D70
  if (!crb(c,0)) { goto L_80094D98; } // 80094D74
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D78
  fcmp(c,0,c->f[1],c->f[0]); // 80094D7C
  if (!crb(c,0)) { goto L_80094D98; } // 80094D80
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D84
  fcmp(c,0,c->f[1],c->f[0]); // 80094D88
  if (!crb(c,0)) { goto L_80094D98; } // 80094D8C
  c->r[0]=0u+0x00000002u; // 80094D90
  goto L_80094DCC; // 80094D94
L_80094D98:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80094D98
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094D9C
  fcmp(c,0,c->f[1],c->f[0]); // 80094DA0
  if (!crb(c,1)) { goto L_80094DC8; } // 80094DA4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094DA8
  fcmp(c,0,c->f[1],c->f[0]); // 80094DAC
  if (!crb(c,1)) { goto L_80094DC8; } // 80094DB0
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094DB4
  fcmp(c,0,c->f[1],c->f[0]); // 80094DB8
  if (!crb(c,1)) { goto L_80094DC8; } // 80094DBC
  c->r[0]=0u+0x00000002u; // 80094DC0
  goto L_80094DCC; // 80094DC4
L_80094DC8:;
  c->r[0]=0u+0x00000000u; // 80094DC8
L_80094DCC:;
  cmps(c,0,(int32_t)c->r[0],1); // 80094DCC
  if (crb(c,2)) { goto L_80094E3C; } // 80094DD0
  cmps(c,0,(int32_t)c->r[0],2); // 80094DD4
  if (crb(c,2)) { goto L_80094E2C; } // 80094DD8
  c->r[4]=c->r[31]|c->r[31]; // 80094DDC
  c->r[7]=c->r[28]|c->r[28]; // 80094DE0
  c->r[5]=c->r[31]+0x00000024u; // 80094DE4
  c->r[6]=c->r[31]+0x00000048u; // 80094DE8
  c->r[3]=0u+0x00000000u; // 80094DEC
  c->lr=0x80094DF4u; f_800934E4(c); // 80094DF0
  cmps(c,0,(int32_t)c->r[3],1); // 80094DF4
  if (!crb(c,2)) { goto L_80094E24; } // 80094DF8
  c->r[3]=c->r[26]|c->r[26]; // 80094DFC
  c->r[4]=c->r[31]|c->r[31]; // 80094E00
  c->r[5]=c->r[31]+0x00000024u; // 80094E04
  c->r[6]=c->r[31]+0x00000048u; // 80094E08
  c->r[7]=c->r[1]+0x00000014u; // 80094E0C
  c->r[8]=c->r[1]+0x00000008u; // 80094E10
  c->lr=0x80094E18u; f_800932C4(c); // 80094E14
  cmps(c,0,(int32_t)c->r[3],1); // 80094E18
  if (!crb(c,2)) { goto L_80094E24; } // 80094E1C
  c->r[29]=c->r[29]+0x00000001u; // 80094E20
L_80094E24:;
  cmps(c,0,(int32_t)c->r[29],24); // 80094E24
  if (!crb(c,0)) { goto L_80094E3C; } // 80094E28
L_80094E2C:;
  c->r[31]=c->r[31]+0x00000054u; // 80094E2C
  c->r[30]=c->r[30]+0x00000001u; // 80094E30
L_80094E34:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[27]); // 80094E34
  if (crb(c,0)) { IRQCHK(c); goto L_80094CA8; } // 80094E38
L_80094E3C:;
  c->r[0]=0u-c->r[29]; // 80094E3C
  c->r[11]=c->r[1]+0x00000040u; // 80094E40
  c->r[0]=c->r[0]&~c->r[29]; // 80094E44
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80094E48
  c->lr=0x80094E50u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80094E4C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80094E50
  c->lr=c->r[0]; // 80094E54
  c->r[1]=c->r[1]+0x00000040u; // 80094E58
  return; // 80094E5C
}

// fn_80094E60
void f_80094E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80094E60
  c->r[0]=c->lr; // 80094E64
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80094E68
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 80094E6C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 80094E70
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 80094E74
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 80094E78
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[29]);} // 80094E7C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,29,ea,0,0);} // 80094E80
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[28]);} // 80094E84
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,28,ea,0,0);} // 80094E88
  c->r[11]=c->r[1]+0x000000A0u; // 80094E8C
  c->lr=0x80094E94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80094E90
  c->f[31]=c->f[1]; // 80094E94
  c->r[29]=c->r[5]|c->r[5]; // 80094E98
  c->f[28]=c->f[2]; // 80094E9C
  c->r[28]=c->r[4]|c->r[4]; // 80094EA0
  c->r[30]=c->r[6]|c->r[6]; // 80094EA4
  c->r[27]=c->r[3]|c->r[3]; // 80094EA8
  c->r[31]=c->r[7]|c->r[7]; // 80094EAC
  c->r[3]=c->r[28]|c->r[28]; // 80094EB0
  c->r[4]=c->r[30]|c->r[30]; // 80094EB4
  c->r[5]=c->r[1]+0x00000068u; // 80094EB8
  c->lr=0x80094EC0u; f_801647E4(c); // 80094EBC
  c->r[3]=c->r[29]|c->r[29]; // 80094EC0
  c->r[4]=c->r[31]|c->r[31]; // 80094EC4
  c->r[5]=c->r[1]+0x0000005Cu; // 80094EC8
  c->lr=0x80094ED0u; f_801647E4(c); // 80094ECC
  c->r[3]=c->r[29]|c->r[29]; // 80094ED0
  c->r[4]=c->r[28]|c->r[28]; // 80094ED4
  c->r[5]=c->r[1]+0x00000050u; // 80094ED8
  c->lr=0x80094EE0u; f_80164808(c); // 80094EDC
  c->r[3]=c->r[1]+0x0000005Cu; // 80094EE0
  c->r[4]=c->r[1]+0x00000068u; // 80094EE4
  c->r[5]=c->r[1]+0x00000044u; // 80094EE8
  c->lr=0x80094EF0u; f_80164808(c); // 80094EEC
  c->r[3]=c->r[1]+0x00000044u; // 80094EF0
  c->r[4]=c->r[1]+0x00000050u; // 80094EF4
  c->r[5]=c->r[1]+0x00000038u; // 80094EF8
  c->lr=0x80094F00u; f_80164808(c); // 80094EFC
  c->r[3]=c->r[1]+0x00000038u; // 80094F00
  c->lr=0x80094F08u; f_8016488C(c); // 80094F04
  {uint32_t ea=c->r[2]+0xFFFF929Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80094F08
  c->f[29]=c->f[1]; // 80094F0C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80094F10
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80094F14
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[0]);} // 80094F18
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 80094F1C
  cmps(c,0,(int32_t)c->r[0],0); // 80094F20
  if (!crb(c,2)) { goto L_80094F30; } // 80094F24
  c->r[3]=0u+0x00000000u; // 80094F28
  goto L_800950F0; // 80094F2C
L_80094F30:;
  c->r[3]=c->r[1]+0x00000050u; // 80094F30
  c->r[4]=c->r[1]+0x00000038u; // 80094F34
  c->lr=0x80094F3Cu; f_801648E8(c); // 80094F38
  c->f[30]=c->f[1]; // 80094F3C
  c->r[3]=c->r[1]+0x00000050u; // 80094F40
  c->lr=0x80094F48u; f_8016488C(c); // 80094F44
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[28]); // 80094F48
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094F4C
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[30]); // 80094F50
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80094F54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80094F58
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 80094F5C
  c->f[28]=c->ps1[28]=S(c->f[3]-c->f[1]); // 80094F60
  fcmp(c,0,c->f[28],c->f[0]); // 80094F64
  if (!crb(c,0)) { goto L_80094F74; } // 80094F68
  c->r[3]=0u+0x00000000u; // 80094F6C
  goto L_800950F0; // 80094F70
L_80094F74:;
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80094F74
  if (crb(c,2)) { goto L_80094F98; } // 80094F78
  c->r[3]=0u+0x80290000u; // 80094F7C
  c->r[5]=0u+0x80290000u; // 80094F80
  c->r[3]=c->r[3]+0xFFFFBDDCu; // 80094F84
  c->r[4]=0u+0x00000273u; // 80094F88
  c->r[5]=c->r[5]+0xFFFFBDB8u; // 80094F8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80094F90
  c->lr=0x80094F98u; f_800FD7D8(c); // 80094F94
L_80094F98:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[4]=c->ps1[4]=RF32(ea);} // 80094F98
  fcmp(c,0,c->f[28],c->f[4]); // 80094F9C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80094FA0
  if (!crb(c,2)) { goto L_80094FAC; } // 80094FA4
  goto L_80094FB8; // 80094FA8
L_80094FAC:;
  c->f[1]=c->f[28]; // 80094FAC
  c->lr=0x80094FB4u; f_800FDAA4(c); // 80094FB0
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[1]); // 80094FB4
L_80094FB8:;
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80094FB8
  c->f[1]=-c->f[30]; // 80094FBC
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094FC0
  c->f[5]=c->ps1[5]=S(c->f[3]/c->f[29]); // 80094FC4
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[4]); // 80094FC8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 80094FCC
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 80094FD0
  c->f[28]=c->ps1[28]=S(c->f[5]*c->f[1]); // 80094FD4
  fcmp(c,0,c->f[2],c->f[0]); // 80094FD8
  if (crb(c,0)) { goto L_80094FE8; } // 80094FDC
  fcmp(c,0,c->f[2],c->f[3]); // 80094FE0
  if (!crb(c,1)) { goto L_80095008; } // 80094FE4
L_80094FE8:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094FE8
  fcmp(c,0,c->f[28],c->f[0]); // 80094FEC
  if (crb(c,0)) { goto L_80095000; } // 80094FF0
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80094FF4
  fcmp(c,0,c->f[28],c->f[0]); // 80094FF8
  if (!crb(c,1)) { goto L_80095008; } // 80094FFC
L_80095000:;
  c->r[3]=0u+0x00000000u; // 80095000
  goto L_800950F0; // 80095004
L_80095008:;
  cmps(c,0,(int32_t)c->r[27],0); // 80095008
  if (crb(c,2)) { goto L_800950EC; } // 8009500C
  c->f[1]=c->f[28]; // 80095010
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[28]);} // 80095014
  c->r[3]=c->r[30]|c->r[30]; // 80095018
  c->r[4]=c->r[1]+0x0000002Cu; // 8009501C
  c->lr=0x80095024u; f_8016482C(c); // 80095020
  c->r[3]=c->r[28]|c->r[28]; // 80095024
  c->r[4]=c->r[1]+0x0000002Cu; // 80095028
  c->r[5]=c->r[1]+0x00000014u; // 8009502C
  c->lr=0x80095034u; f_801647E4(c); // 80095030
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095034
  c->f[1]=c->f[28]; // 80095038
  c->r[3]=c->r[31]|c->r[31]; // 8009503C
  c->r[4]=c->r[1]+0x0000002Cu; // 80095040
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 80095044
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095048
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 8009504C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80095050
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[0]);} // 80095054
  c->lr=0x8009505Cu; f_8016482C(c); // 80095058
  c->r[3]=c->r[29]|c->r[29]; // 8009505C
  c->r[4]=c->r[1]+0x0000002Cu; // 80095060
  c->r[5]=c->r[1]+0x00000008u; // 80095064
  c->lr=0x8009506Cu; f_801647E4(c); // 80095068
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009506C
  c->r[3]=c->r[1]+0x00000008u; // 80095070
  c->r[4]=c->r[1]+0x00000014u; // 80095074
  c->r[5]=c->r[1]+0x0000002Cu; // 80095078
  {uint32_t ea=c->r[27]+0x00000014u; WF32(ea,c->f[0]);} // 8009507C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80095080
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[0]);} // 80095084
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095088
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009508C
  c->lr=0x80095094u; f_80164808(c); // 80095090
  c->r[3]=c->r[1]+0x0000002Cu; // 80095094
  c->lr=0x8009509Cu; f_801648A4(c); // 80095098
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009509C
  fcmp(c,0,c->f[1],c->f[0]); // 800950A0
  if (!crb(c,1)) { goto L_800950C4; } // 800950A4
  c->r[3]=c->r[1]+0x0000002Cu; // 800950A8
  c->r[4]=c->r[3]|c->r[3]; // 800950AC
  c->lr=0x800950B4u; f_80164848(c); // 800950B0
  c->f[1]=c->f[31]; // 800950B4
  c->r[3]=c->r[1]+0x0000002Cu; // 800950B8
  c->r[4]=c->r[3]|c->r[3]; // 800950BC
  c->lr=0x800950C4u; f_8016482C(c); // 800950C0
L_800950C4:;
  c->r[3]=c->r[1]+0x00000014u; // 800950C4
  c->r[4]=c->r[1]+0x0000002Cu; // 800950C8
  c->r[5]=c->r[1]+0x00000020u; // 800950CC
  c->lr=0x800950D4u; f_801647E4(c); // 800950D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800950D4
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[0]);} // 800950D8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800950DC
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[0]);} // 800950E0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800950E4
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[0]);} // 800950E8
L_800950EC:;
  c->r[3]=0u+0x00000001u; // 800950EC
L_800950F0:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800950F0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800950F4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 800950F8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 800950FC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,29,ea,0,0);} // 80095100
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[29]=RF64(ea);} // 80095104
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,28,ea,0,0);} // 80095108
  c->r[11]=c->r[1]+0x000000A0u; // 8009510C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[28]=RF64(ea);} // 80095110
  c->lr=0x80095118u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80095114
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80095118
  c->lr=c->r[0]; // 8009511C
  c->r[1]=c->r[1]+0x000000E0u; // 80095120
  return; // 80095124
}

// fn_80095128
void f_80095128(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80095128
  c->r[0]=c->lr; // 8009512C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80095130
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80095134
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80095138
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 8009513C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 80095140
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 80095144
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 80095148
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 8009514C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 80095150
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 80095154
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 80095158
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[26]);} // 8009515C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,26,ea,0,0);} // 80095160
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[25]);} // 80095164
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,25,ea,0,0);} // 80095168
  c->r[11]=c->r[1]+0x00000050u; // 8009516C
  c->lr=0x80095174u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80095170
  c->r[9]=R32(c->r[7]+0x00000000u); // 80095174
  c->r[28]=c->r[5]|c->r[5]; // 80095178
  c->r[0]=R32(c->r[7]+0x00000004u); // 8009517C
  c->r[26]=c->r[3]|c->r[3]; // 80095180
  c->r[29]=c->r[6]|c->r[6]; // 80095184
  c->r[27]=c->r[4]|c->r[4]; // 80095188
  W32(c->r[1]+0x00000020u,c->r[9]); // 8009518C
  c->f[25]=c->f[1]; // 80095190
  c->f[26]=c->f[2]; // 80095194
  c->r[30]=c->r[7]|c->r[7]; // 80095198
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009519C
  c->f[27]=c->f[3]; // 800951A0
  c->f[28]=c->f[4]; // 800951A4
  c->r[0]=R32(c->r[7]+0x00000008u); // 800951A8
  c->f[29]=c->f[5]; // 800951AC
  c->r[31]=c->r[8]|c->r[8]; // 800951B0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800951B4
  c->f[30]=c->f[6]; // 800951B8
  c->f[31]=c->f[7]; // 800951BC
  c->r[3]=c->r[28]|c->r[28]; // 800951C0
  c->r[6]=R32(c->r[8]+0x00000000u); // 800951C4
  c->r[4]=c->r[29]|c->r[29]; // 800951C8
  c->r[0]=R32(c->r[8]+0x00000004u); // 800951CC
  c->r[5]=c->r[1]+0x00000008u; // 800951D0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800951D4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800951D8
  c->r[0]=R32(c->r[8]+0x00000008u); // 800951DC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800951E0
  c->lr=0x800951E8u; f_80164808(c); // 800951E4
  c->r[3]=c->r[1]+0x00000008u; // 800951E8
  c->lr=0x800951F0u; f_801648A4(c); // 800951EC
  c->f[0]=c->ps1[0]=S(c->f[25]+c->f[26]); // 800951F0
  fcmp(c,0,c->f[1],c->f[0]); // 800951F4
  if (!crb(c,0)) { goto L_80095224; } // 800951F8
  c->f[1]=c->f[25]; // 800951FC
  c->r[3]=c->r[27]|c->r[27]; // 80095200
  c->f[2]=c->f[26]; // 80095204
  c->r[4]=c->r[28]|c->r[28]; // 80095208
  c->r[5]=c->r[29]|c->r[29]; // 8009520C
  c->r[6]=c->r[30]|c->r[30]; // 80095210
  c->r[7]=c->r[31]|c->r[31]; // 80095214
  c->lr=0x8009521Cu; f_8008FC4C(c); // 80095218
  c->r[3]=0u+0x00000001u; // 8009521C
  goto L_80095284; // 80095220
L_80095224:;
  c->f[1]=c->f[25]; // 80095224
  c->r[3]=c->r[26]|c->r[26]; // 80095228
  c->f[2]=c->f[26]; // 8009522C
  c->r[4]=c->r[28]|c->r[28]; // 80095230
  c->r[5]=c->r[29]|c->r[29]; // 80095234
  c->r[6]=c->r[30]|c->r[30]; // 80095238
  c->r[7]=c->r[31]|c->r[31]; // 8009523C
  c->lr=0x80095244u; f_80094E60(c); // 80095240
  cmps(c,0,(int32_t)c->r[3],1); // 80095244
  if (!crb(c,2)) { goto L_80095280; } // 80095248
  c->f[1]=c->f[27]; // 8009524C
  c->r[3]=c->r[28]|c->r[28]; // 80095250
  c->f[2]=c->f[28]; // 80095254
  c->r[5]=c->r[29]|c->r[29]; // 80095258
  c->f[3]=c->f[29]; // 8009525C
  c->r[7]=c->r[27]|c->r[27]; // 80095260
  c->f[4]=c->f[30]; // 80095264
  c->r[4]=c->r[1]+0x00000020u; // 80095268
  c->f[5]=c->f[31]; // 8009526C
  c->r[6]=c->r[1]+0x00000014u; // 80095270
  c->lr=0x80095278u; f_8008F9A8(c); // 80095274
  c->r[3]=0u+0x00000002u; // 80095278
  goto L_80095284; // 8009527C
L_80095280:;
  c->r[3]=0u+0x00000000u; // 80095280
L_80095284:;
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 80095284
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 80095288
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 8009528C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 80095290
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 80095294
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 80095298
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 8009529C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 800952A0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 800952A4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 800952A8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,26,ea,0,0);} // 800952AC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[26]=RF64(ea);} // 800952B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,25,ea,0,0);} // 800952B4
  c->r[11]=c->r[1]+0x00000050u; // 800952B8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[25]=RF64(ea);} // 800952BC
  c->lr=0x800952C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800952C0
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800952C4
  c->lr=c->r[0]; // 800952C8
  c->r[1]=c->r[1]+0x000000C0u; // 800952CC
  return; // 800952D0
}

// fn_800952D4
void f_800952D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800952D4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800952D8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800952DC
  fcmp(c,0,c->f[0],c->f[2]); // 800952E0
  if (crb(c,0)) { goto L_800952F0; } // 800952E4
  fcmp(c,0,c->f[1],c->f[2]); // 800952E8
  if (!crb(c,1)) { goto L_800952F8; } // 800952EC
L_800952F0:;
  c->r[3]=0u+0x00000000u; // 800952F0
  return; // 800952F4
L_800952F8:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800952F8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800952FC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095300
  fcmp(c,0,c->f[0],c->f[2]); // 80095304
  if (crb(c,0)) { goto L_80095314; } // 80095308
  fcmp(c,0,c->f[1],c->f[2]); // 8009530C
  if (!crb(c,1)) { goto L_8009531C; } // 80095310
L_80095314:;
  c->r[3]=0u+0x00000000u; // 80095314
  return; // 80095318
L_8009531C:;
  c->r[3]=0u+0x00000001u; // 8009531C
  return; // 80095320
}

// fn_80095324
void f_80095324(Ctx* __restrict c) {
  c->r[0]=0u+0x00000003u; // 80095324
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[4]=c->ps1[4]=RF32(ea);} // 80095328
  c->r[5]=0u+0x00000000u; // 8009532C
  c->ctr=c->r[0]; // 80095330
L_80095334:;
  cmps(c,0,(int32_t)c->r[5],1); // 80095334
  if (crb(c,2)) { goto L_80095360; } // 80095338
  if (!crb(c,0)) { goto L_8009534C; } // 8009533C
  cmps(c,0,(int32_t)c->r[5],0); // 80095340
  if (!crb(c,0)) { goto L_80095358; } // 80095344
  goto L_80095370; // 80095348
L_8009534C:;
  cmps(c,0,(int32_t)c->r[5],3); // 8009534C
  if (!crb(c,0)) { goto L_80095370; } // 80095350
  goto L_80095368; // 80095354
L_80095358:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80095358
  goto L_80095374; // 8009535C
L_80095360:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80095360
  goto L_80095374; // 80095364
L_80095368:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80095368
  goto L_80095374; // 8009536C
L_80095370:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[3]=c->ps1[3]=RF32(ea);} // 80095370
L_80095374:;
  cmps(c,0,(int32_t)c->r[5],1); // 80095374
  if (crb(c,2)) { goto L_800953A0; } // 80095378
  if (!crb(c,0)) { goto L_8009538C; } // 8009537C
  cmps(c,0,(int32_t)c->r[5],0); // 80095380
  if (!crb(c,0)) { goto L_80095398; } // 80095384
  goto L_800953B0; // 80095388
L_8009538C:;
  cmps(c,0,(int32_t)c->r[5],3); // 8009538C
  if (!crb(c,0)) { goto L_800953B0; } // 80095390
  goto L_800953A8; // 80095394
L_80095398:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80095398
  goto L_800953B4; // 8009539C
L_800953A0:;
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800953A0
  goto L_800953B4; // 800953A4
L_800953A8:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800953A8
  goto L_800953B4; // 800953AC
L_800953B0:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[2]=c->ps1[2]=RF32(ea);} // 800953B0
L_800953B4:;
  cmps(c,0,(int32_t)c->r[5],1); // 800953B4
  if (crb(c,2)) { goto L_800953E0; } // 800953B8
  if (!crb(c,0)) { goto L_800953CC; } // 800953BC
  cmps(c,0,(int32_t)c->r[5],0); // 800953C0
  if (!crb(c,0)) { goto L_800953D8; } // 800953C4
  goto L_800953F0; // 800953C8
L_800953CC:;
  cmps(c,0,(int32_t)c->r[5],3); // 800953CC
  if (!crb(c,0)) { goto L_800953F0; } // 800953D0
  goto L_800953E8; // 800953D4
L_800953D8:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800953D8
  goto L_800953F4; // 800953DC
L_800953E0:;
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800953E0
  goto L_800953F4; // 800953E4
L_800953E8:;
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800953E8
  goto L_800953F4; // 800953EC
L_800953F0:;
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800953F0
L_800953F4:;
  fcmp(c,0,c->f[3],c->f[0]); // 800953F4
  if (!crb(c,0)) { goto L_8009540C; } // 800953F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800953FC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80095400
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 80095404
  goto L_80095420; // 80095408
L_8009540C:;
  fcmp(c,0,c->f[3],c->f[2]); // 8009540C
  if (!crb(c,1)) { goto L_80095420; } // 80095410
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[2]); // 80095414
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80095418
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 8009541C
L_80095420:;
  c->r[5]=c->r[5]+0x00000001u; // 80095420
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80095334; } // 80095424
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 80095428
  fcmp(c,0,c->f[4],c->f[0]); // 8009542C
  c->r[3]=c->cr; // 80095430
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80095434
  return; // 80095438
}

// fn_8009543C
void f_8009543C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009543C
  c->r[0]=c->lr; // 80095440
  W32(c->r[1]+0x00000034u,c->r[0]); // 80095444
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80095448
  W32(c->r[1]+0x00000028u,c->r[30]); // 8009544C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80095450
  c->r[29]=c->r[4]|c->r[4]; // 80095454
  c->r[4]=c->r[1]+0x00000008u; // 80095458
  W32(c->r[1]+0x00000020u,c->r[28]); // 8009545C
  c->r[28]=c->r[3]|c->r[3]; // 80095460
  c->lr=0x80095468u; f_80095628(c); // 80095464
  c->r[30]=0u+0x00000000u; // 80095468
  c->r[31]=0u+0x00000000u; // 8009546C
  goto L_800954A4; // 80095470
L_80095474:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 80095474
  c->r[3]=c->r[29]|c->r[29]; // 80095478
  c->r[0]=R32(c->r[1]+0x00000008u); // 8009547C
  c->r[4]=R32(c->r[4]+c->r[31]); // 80095480
  c->r[0]=c->r[28]+c->r[0]; // 80095484
  c->r[4]=c->r[4]+c->r[0]; // 80095488
  c->lr=0x80095490u; f_80095564(c); // 8009548C
  c->r[3]=c->r[29]|c->r[29]; // 80095490
  c->lr=0x80095498u; f_800956D0(c); // 80095494
  c->r[31]=c->r[31]+0x00000004u; // 80095498
  c->r[29]=c->r[29]+0x00000088u; // 8009549C
  c->r[30]=c->r[30]+0x00000001u; // 800954A0
L_800954A4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800954A4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800954A8
  if (crb(c,0)) { IRQCHK(c); goto L_80095474; } // 800954AC
  c->r[3]=R32(c->r[1]+0x00000018u); // 800954B0
  cmps(c,0,(int32_t)c->r[3],0); // 800954B4
  if (crb(c,2)) { goto L_800954C8; } // 800954B8
  c->lr=0x800954C0u; f_800D4444(c); // 800954BC
  c->r[0]=0u+0x00000000u; // 800954C0
  W32(c->r[1]+0x00000018u,c->r[0]); // 800954C4
L_800954C8:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800954C8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800954CC
  c->r[29]=R32(c->r[1]+0x00000024u); // 800954D0
  c->r[28]=R32(c->r[1]+0x00000020u); // 800954D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800954D8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800954DC
  c->lr=c->r[0]; // 800954E0
  c->r[1]=c->r[1]+0x00000030u; // 800954E4
  return; // 800954E8
}

// fn_800954EC
void f_800954EC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800954EC
  W32(c->r[3]+0x00000044u,c->r[0]); // 800954F0
  W32(c->r[3]+0x00000048u,c->r[0]); // 800954F4
  return; // 800954F8
}

// fn_800954FC
void f_800954FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800954FC
  c->r[0]=c->lr; // 80095500
  W32(c->r[1]+0x00000014u,c->r[0]); // 80095504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80095508
  c->r[31]=c->r[3]|c->r[3]; // 8009550C
  c->r[0]=R32(c->r[3]+0x00000044u); // 80095510
  cmps(c,0,(int32_t)c->r[0],0); // 80095514
  if (crb(c,2)) { goto L_8009552C; } // 80095518
  c->r[3]=c->r[0]|c->r[0]; // 8009551C
  c->lr=0x80095524u; f_800D4444(c); // 80095520
  c->r[0]=0u+0x00000000u; // 80095524
  W32(c->r[31]+0x00000044u,c->r[0]); // 80095528
L_8009552C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009552C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80095530
  c->lr=c->r[0]; // 80095534
  c->r[1]=c->r[1]+0x00000010u; // 80095538
  return; // 8009553C
}

// fn_80095540
void f_80095540(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000044u); // 80095540
  return; // 80095544
}

// fn_80095548
void f_80095548(Ctx* __restrict c) {
  c->r[4]=0u+0x55550000u; // 80095548
  c->r[0]=R32(c->r[3]+0x00000048u); // 8009554C
  c->r[3]=c->r[4]+0x00005556u; // 80095550
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80095554
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80095558
  c->r[3]=c->r[3]+c->r[0]; // 8009555C
  return; // 80095560
}

// fn_80095564
void f_80095564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80095564
  c->r[0]=c->lr; // 80095568
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009556C
  c->r[11]=c->r[1]+0x00000020u; // 80095570
  c->lr=0x80095578u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80095574
  c->r[31]=c->r[3]|c->r[3]; // 80095578
  c->r[27]=c->r[4]|c->r[4]; // 8009557C
  c->r[5]=0u+0x00000040u; // 80095580
  c->r[3]=c->r[3]+0x00000004u; // 80095584
  c->lr=0x8009558Cu; f_80004338(c); // 80095588
  c->r[3]=c->r[31]+0x00000048u; // 8009558C
  c->r[4]=c->r[27]+0x00000040u; // 80095590
  c->r[5]=0u+0x00000004u; // 80095594
  c->lr=0x8009559Cu; f_80004338(c); // 80095598
  c->r[30]=0u+0x55550000u; // 8009559C
  c->r[0]=R32(c->r[31]+0x00000048u); // 800955A0
  c->r[3]=c->r[30]+0x00005556u; // 800955A4
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800955A8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800955AC
  c->r[0]=c->r[3]+c->r[0]; // 800955B0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)84); // 800955B4
  c->r[3]=c->r[3]+0x00000010u; // 800955B8
  c->lr=0x800955C0u; f_800D4420(c); // 800955BC
  W32(c->r[31]+0x00000044u,c->r[3]); // 800955C0
  c->r[28]=c->r[27]+0x00000044u; // 800955C4
  c->r[30]=c->r[30]+0x00005556u; // 800955C8
  c->r[27]=0u+0x00000000u; // 800955CC
  c->r[29]=0u+0x00000000u; // 800955D0
  goto L_800955F8; // 800955D4
L_800955D8:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 800955D8
  c->r[4]=c->r[28]|c->r[28]; // 800955DC
  c->r[5]=0u+0x00000024u; // 800955E0
  c->r[3]=c->r[0]+c->r[29]; // 800955E4
  c->lr=0x800955ECu; f_80004338(c); // 800955E8
  c->r[28]=c->r[28]+0x00000024u; // 800955EC
  c->r[29]=c->r[29]+0x00000054u; // 800955F0
  c->r[27]=c->r[27]+0x00000001u; // 800955F4
L_800955F8:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 800955F8
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 800955FC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80095600
  c->r[0]=c->r[3]+c->r[0]; // 80095604
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80095608
  if (crb(c,0)) { IRQCHK(c); goto L_800955D8; } // 8009560C
  c->r[11]=c->r[1]+0x00000020u; // 80095610
  c->lr=0x80095618u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80095614
  c->r[0]=R32(c->r[1]+0x00000024u); // 80095618
  c->lr=c->r[0]; // 8009561C
  c->r[1]=c->r[1]+0x00000020u; // 80095620
  return; // 80095624
}

// fn_80095628
void f_80095628(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80095628
  c->r[0]=c->lr; // 8009562C
  c->r[5]=0u+0x00000004u; // 80095630
  W32(c->r[1]+0x00000024u,c->r[0]); // 80095634
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80095638
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009563C
  c->r[30]=c->r[4]|c->r[4]; // 80095640
  W32(c->r[1]+0x00000014u,c->r[29]); // 80095644
  c->r[29]=c->r[3]|c->r[3]; // 80095648
  c->r[0]=R8(c->r[3]+0x00000000u); // 8009564C
  c->r[3]=c->r[30]|c->r[30]; // 80095650
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80095654
  W32(c->r[4]+0x00000000u,c->r[0]); // 80095658
  c->r[4]=c->r[29]|c->r[29]; // 8009565C
  c->lr=0x80095664u; f_80004338(c); // 80095660
  c->r[3]=c->r[30]+0x00000004u; // 80095664
  c->r[4]=c->r[29]+0x00000004u; // 80095668
  c->r[5]=0u+0x00000004u; // 8009566C
  c->lr=0x80095674u; f_80004338(c); // 80095670
  c->r[3]=c->r[30]+0x00000008u; // 80095674
  c->r[4]=c->r[29]+0x00000008u; // 80095678
  c->r[5]=0u+0x00000004u; // 8009567C
  c->lr=0x80095684u; f_80004338(c); // 80095680
  c->r[3]=c->r[30]+0x0000000Cu; // 80095684
  c->r[4]=c->r[29]+0x0000000Cu; // 80095688
  c->r[5]=0u+0x00000004u; // 8009568C
  c->lr=0x80095694u; f_80004338(c); // 80095690
  c->r[0]=R32(c->r[30]+0x00000004u); // 80095694
  c->r[31]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80095698
  c->r[3]=c->r[31]|c->r[31]; // 8009569C
  c->lr=0x800956A4u; f_800D4420(c); // 800956A0
  W32(c->r[30]+0x00000010u,c->r[3]); // 800956A4
  c->r[5]=c->r[31]|c->r[31]; // 800956A8
  c->r[4]=c->r[29]+0x00000010u; // 800956AC
  c->lr=0x800956B4u; f_80004338(c); // 800956B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800956B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800956B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800956BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800956C0
  c->lr=c->r[0]; // 800956C4
  c->r[1]=c->r[1]+0x00000020u; // 800956C8
  return; // 800956CC
}

// fn_800956D0
void f_800956D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800956D0
  c->r[0]=c->lr; // 800956D4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800956D8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800956DC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800956E0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800956E4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800956E8
  c->r[4]=0u+0x55550000u; // 800956EC
  {uint32_t ea=c->r[2]+0xFFFF92C0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800956F0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800956F4
  c->r[31]=0u+0x00000000u; // 800956F8
  W32(c->r[1]+0x00000098u,c->r[30]); // 800956FC
  c->r[30]=0u+0x00000000u; // 80095700
  W32(c->r[1]+0x00000094u,c->r[29]); // 80095704
  c->r[29]=c->r[3]|c->r[3]; // 80095708
  W32(c->r[1]+0x00000090u,c->r[28]); // 8009570C
  c->r[28]=c->r[4]+0x00005556u; // 80095710
  goto L_80095950; // 80095714
L_80095718:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 80095718
  c->r[3]=c->r[1]+0x0000005Cu; // 8009571C
  c->r[4]=c->r[1]+0x00000044u; // 80095720
  c->r[5]=c->r[1]+0x00000068u; // 80095724
  {uint32_t ea=c->r[31]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80095728
  c->r[6]=c->r[0]+c->r[31]; // 8009572C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80095730
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095734
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80095738
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009573C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80095740
  c->r[0]=R32(c->r[29]+0x00000044u); // 80095744
  c->r[6]=c->r[0]+c->r[31]; // 80095748
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009574C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80095750
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095754
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80095758
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009575C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80095760
  c->r[0]=R32(c->r[29]+0x00000044u); // 80095764
  c->r[6]=c->r[0]+c->r[31]; // 80095768
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009576C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80095770
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80095774
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80095778
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009577C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80095780
  c->lr=0x80095788u; f_80164808(c); // 80095784
  c->r[3]=c->r[1]+0x00000050u; // 80095788
  c->r[4]=c->r[1]+0x00000044u; // 8009578C
  c->r[5]=c->r[1]+0x00000074u; // 80095790
  c->lr=0x80095798u; f_80164808(c); // 80095794
  c->r[3]=c->r[1]+0x00000050u; // 80095798
  c->r[4]=c->r[1]+0x00000044u; // 8009579C
  c->r[5]=c->r[1]+0x00000080u; // 800957A0
  c->lr=0x800957A8u; f_80164808(c); // 800957A4
  c->r[3]=c->r[1]+0x00000068u; // 800957A8
  c->r[4]=c->r[1]+0x00000074u; // 800957AC
  c->r[5]=c->r[1]+0x00000038u; // 800957B0
  c->lr=0x800957B8u; f_80164908(c); // 800957B4
  c->r[3]=c->r[1]+0x00000038u; // 800957B8
  c->lr=0x800957C0u; f_801648A4(c); // 800957BC
  c->f[30]=c->f[1]; // 800957C0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800957C4
  c->lr=0x800957CCu; f_802586F4(c); // 800957C8
  cmps(c,0,(int32_t)c->r[3],1); // 800957CC
  if (crb(c,2)) { goto L_80095804; } // 800957D0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800957D4
  c->lr=0x800957DCu; f_802586F4(c); // 800957D8
  cmps(c,0,(int32_t)c->r[3],1); // 800957DC
  if (crb(c,2)) { goto L_80095804; } // 800957E0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800957E4
  c->lr=0x800957ECu; f_802586F4(c); // 800957E8
  cmps(c,0,(int32_t)c->r[3],1); // 800957EC
  if (crb(c,2)) { goto L_80095804; } // 800957F0
  c->f[1]=c->f[30]; // 800957F4
  c->lr=0x800957FCu; f_802586F4(c); // 800957F8
  cmps(c,0,(int32_t)c->r[3],2); // 800957FC
  if (!crb(c,2)) { goto L_80095844; } // 80095800
L_80095804:;
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 80095804
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 80095808
  c->r[4]=R32(c->r[1]+0x00000014u); // 8009580C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 80095810
  c->r[3]=R32(c->r[1]+0x00000018u); // 80095814
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80095818
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8009581C
  W32(c->r[1]+0x00000030u,c->r[3]); // 80095820
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80095824
  W32(c->r[1]+0x00000034u,c->r[0]); // 80095828
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009582C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095830
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80095834
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80095838
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8009583C
  goto L_80095898; // 80095840
L_80095844:;
  fcmp(c,0,c->f[30],c->f[31]); // 80095844
  if (!crb(c,1)) { goto L_8009585C; } // 80095848
  c->r[3]=c->r[1]+0x00000038u; // 8009584C
  c->r[4]=c->r[3]|c->r[3]; // 80095850
  c->lr=0x80095858u; f_80164848(c); // 80095854
  goto L_80095898; // 80095858
L_8009585C:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 8009585C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 80095860
  c->r[4]=R32(c->r[1]+0x00000008u); // 80095864
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 80095868
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8009586C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80095870
  W32(c->r[1]+0x00000020u,c->r[4]); // 80095874
  W32(c->r[1]+0x00000024u,c->r[3]); // 80095878
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009587C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80095880
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095884
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095888
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 8009588C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80095890
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80095894
L_80095898:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 80095898
  c->r[3]=c->r[1]+0x00000050u; // 8009589C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800958A0
  c->r[4]=c->r[1]+0x00000044u; // 800958A4
  c->r[6]=c->r[0]+c->r[31]; // 800958A8
  c->r[5]=c->r[1]+0x00000068u; // 800958AC
  {uint32_t ea=c->r[6]+0x00000048u; WF32(ea,c->f[0]);} // 800958B0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800958B4
  {uint32_t ea=c->r[6]+0x0000004Cu; WF32(ea,c->f[0]);} // 800958B8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800958BC
  {uint32_t ea=c->r[6]+0x00000050u; WF32(ea,c->f[0]);} // 800958C0
  c->lr=0x800958C8u; f_80164808(c); // 800958C4
  c->r[3]=c->r[1]+0x0000005Cu; // 800958C8
  c->r[4]=c->r[1]+0x00000050u; // 800958CC
  c->r[5]=c->r[1]+0x00000074u; // 800958D0
  c->lr=0x800958D8u; f_80164808(c); // 800958D4
  c->r[3]=c->r[1]+0x00000044u; // 800958D8
  c->r[4]=c->r[1]+0x0000005Cu; // 800958DC
  c->r[5]=c->r[1]+0x00000080u; // 800958E0
  c->lr=0x800958E8u; f_80164808(c); // 800958E4
  c->r[0]=R32(c->r[29]+0x00000044u); // 800958E8
  c->r[30]=c->r[30]+0x00000001u; // 800958EC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800958F0
  c->r[3]=c->r[0]+c->r[31]; // 800958F4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800958F8
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800958FC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80095900
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095904
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80095908
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009590C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095910
  c->r[3]=c->r[0]+c->r[31]; // 80095914
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80095918
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009591C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80095920
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80095924
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80095928
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009592C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095930
  c->r[3]=c->r[0]+c->r[31]; // 80095934
  c->r[31]=c->r[31]+0x00000054u; // 80095938
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009593C
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095940
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 80095944
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095948
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8009594C
L_80095950:;
  c->r[0]=R32(c->r[29]+0x00000048u); // 80095950
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[28]*(int64_t)(int32_t)c->r[0])>>32); // 80095954
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80095958
  c->r[0]=c->r[3]+c->r[0]; // 8009595C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80095960
  if (crb(c,0)) { IRQCHK(c); goto L_80095718; } // 80095964
  c->r[3]=c->r[29]|c->r[29]; // 80095968
  c->lr=0x80095970u; f_800959A0(c); // 8009596C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 80095970
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 80095974
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 80095978
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 8009597C
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80095980
  c->r[30]=R32(c->r[1]+0x00000098u); // 80095984
  c->r[29]=R32(c->r[1]+0x00000094u); // 80095988
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8009598C
  c->r[28]=R32(c->r[1]+0x00000090u); // 80095990
  c->lr=c->r[0]; // 80095994
  c->r[1]=c->r[1]+0x000000C0u; // 80095998
  return; // 8009599C
}

// fn_800959A0
void f_800959A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800959A0
  c->r[4]=0u+0x55550000u; // 800959A4
  c->r[4]=c->r[4]+0x00005556u; // 800959A8
  c->r[10]=0u+0x00000000u; // 800959AC
  c->r[0]=R32(c->r[3]+0x00000048u); // 800959B0
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 800959B4
  c->r[0]=0u+0x00000003u; // 800959B8
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 800959BC
  c->r[6]=c->r[5]+c->r[4]; // 800959C0
L_800959C4:;
  {uint32_t ea=c->r[2]+0xFFFF92C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800959C4
  c->r[9]=0u+0x00000000u; // 800959C8
  {uint32_t ea=c->r[2]+0xFFFF92C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800959CC
  c->r[7]=0u+0x00000000u; // 800959D0
  goto L_80095A64; // 800959D4
L_800959D8:;
  c->r[8]=0u+0x00000000u; // 800959D8
  c->ctr=c->r[0]; // 800959DC
L_800959E0:;
  cmps(c,0,(int32_t)c->r[10],1); // 800959E0
  if (crb(c,2)) { goto L_80095A14; } // 800959E4
  if (!crb(c,0)) { goto L_800959F8; } // 800959E8
  cmps(c,0,(int32_t)c->r[10],0); // 800959EC
  if (!crb(c,0)) { goto L_80095A04; } // 800959F0
  goto L_80095A38; // 800959F4
L_800959F8:;
  cmps(c,0,(int32_t)c->r[10],3); // 800959F8
  if (!crb(c,0)) { goto L_80095A38; } // 800959FC
  goto L_80095A28; // 80095A00
L_80095A04:;
  c->r[5]=R32(c->r[3]+0x00000044u); // 80095A04
  c->r[4]=c->r[8]+c->r[7]; // 80095A08
  {uint32_t ea=c->r[5]+c->r[4]; c->f[2]=c->ps1[2]=RF32(ea);} // 80095A0C
  goto L_80095A38; // 80095A10
L_80095A14:;
  c->r[5]=R32(c->r[3]+0x00000044u); // 80095A14
  c->r[4]=c->r[8]+c->r[7]; // 80095A18
  c->r[4]=c->r[5]+c->r[4]; // 80095A1C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80095A20
  goto L_80095A38; // 80095A24
L_80095A28:;
  c->r[5]=R32(c->r[3]+0x00000044u); // 80095A28
  c->r[4]=c->r[8]+c->r[7]; // 80095A2C
  c->r[4]=c->r[5]+c->r[4]; // 80095A30
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80095A34
L_80095A38:;
  fcmp(c,0,c->f[0],c->f[2]); // 80095A38
  if (!crb(c,1)) { goto L_80095A48; } // 80095A3C
  c->f[0]=c->f[2]; // 80095A40
  goto L_80095A54; // 80095A44
L_80095A48:;
  fcmp(c,0,c->f[1],c->f[2]); // 80095A48
  if (!crb(c,0)) { goto L_80095A54; } // 80095A4C
  c->f[1]=c->f[2]; // 80095A50
L_80095A54:;
  c->r[8]=c->r[8]+0x0000000Cu; // 80095A54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800959E0; } // 80095A58
  c->r[7]=c->r[7]+0x00000054u; // 80095A5C
  c->r[9]=c->r[9]+0x00000001u; // 80095A60
L_80095A64:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[6]); // 80095A64
  if (crb(c,0)) { IRQCHK(c); goto L_800959D8; } // 80095A68
  cmps(c,0,(int32_t)c->r[10],1); // 80095A6C
  if (crb(c,2)) { goto L_80095A9C; } // 80095A70
  if (!crb(c,0)) { goto L_80095A84; } // 80095A74
  cmps(c,0,(int32_t)c->r[10],0); // 80095A78
  if (!crb(c,0)) { goto L_80095A90; } // 80095A7C
  goto L_80095AB0; // 80095A80
L_80095A84:;
  cmps(c,0,(int32_t)c->r[10],3); // 80095A84
  if (!crb(c,0)) { goto L_80095AB0; } // 80095A88
  goto L_80095AA8; // 80095A8C
L_80095A90:;
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80095A90
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80095A94
  goto L_80095AB0; // 80095A98
L_80095A9C:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80095A9C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80095AA0
  goto L_80095AB0; // 80095AA4
L_80095AA8:;
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80095AA8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80095AAC
L_80095AB0:;
  c->r[10]=c->r[10]+0x00000001u; // 80095AB0
  cmps(c,0,(int32_t)c->r[10],3); // 80095AB4
  if (crb(c,0)) { IRQCHK(c); goto L_800959C4; } // 80095AB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80095ABC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80095AC0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80095AC4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095AC8
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 80095ACC
  {uint32_t ea=c->r[2]+0xFFFF92CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 80095AD0
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 80095AD4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095AD8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80095ADC
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80095AE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 80095AE4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80095AE8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 80095AEC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 80095AF0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80095AF4
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 80095AF8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80095AFC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80095B00
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80095B04
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[8]);} // 80095B08
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[7]);} // 80095B0C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[6]);} // 80095B10
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[5]);} // 80095B14
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[4]);} // 80095B18
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[2]);} // 80095B1C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[3]);} // 80095B20
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 80095B24
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 80095B28
  c->r[1]=c->r[1]+0x00000020u; // 80095B2C
  return; // 80095B30
}

// fn_80095B34
void f_80095B34(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000004Cu; // 80095B34
  return; // 80095B38
}

// fn_80095B3C
void f_80095B3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80095B3C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095B40
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095B44
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 80095B48
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 80095B4C
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 80095B50
  return; // 80095B54
}

// fn_80095B58
void f_80095B58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80095B58
  c->r[0]=c->lr; // 80095B5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80095B60
  c->r[11]=c->r[1]+0x00000040u; // 80095B64
  c->lr=0x80095B6Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80095B68
  c->r[26]=c->r[3]|c->r[3]; // 80095B6C
  c->r[4]=c->r[3]+0x00000070u; // 80095B70
  c->r[5]=0u+0x0000000Cu; // 80095B74
  c->r[3]=c->r[3]+0x0000007Cu; // 80095B78
  c->lr=0x80095B80u; f_802583D8(c); // 80095B7C
  cmps(c,0,(int32_t)c->r[3],0); // 80095B80
  if (crb(c,2)) { goto L_80095C44; } // 80095B84
  c->r[3]=c->r[26]+0x00000070u; // 80095B88
  c->r[4]=c->r[26]+0x0000007Cu; // 80095B8C
  c->r[5]=c->r[1]+0x00000008u; // 80095B90
  c->lr=0x80095B98u; f_80164808(c); // 80095B94
  c->r[3]=0u+0x55550000u; // 80095B98
  c->r[29]=0u+0x00000000u; // 80095B9C
  c->r[31]=c->r[3]+0x00005556u; // 80095BA0
  c->r[28]=0u+0x00000000u; // 80095BA4
  goto L_80095BE4; // 80095BA8
L_80095BAC:;
  c->r[30]=0u+0x00000000u; // 80095BAC
  c->r[27]=0u+0x00000000u; // 80095BB0
L_80095BB4:;
  c->r[0]=R32(c->r[26]+0x00000044u); // 80095BB4
  c->r[4]=c->r[1]+0x00000008u; // 80095BB8
  c->r[0]=c->r[0]+c->r[28]; // 80095BBC
  c->r[3]=c->r[0]+c->r[27]; // 80095BC0
  c->r[5]=c->r[3]|c->r[3]; // 80095BC4
  c->lr=0x80095BCCu; f_801647E4(c); // 80095BC8
  c->r[30]=c->r[30]+0x00000001u; // 80095BCC
  c->r[27]=c->r[27]+0x0000000Cu; // 80095BD0
  cmps(c,0,(int32_t)c->r[30],3); // 80095BD4
  if (crb(c,0)) { IRQCHK(c); goto L_80095BB4; } // 80095BD8
  c->r[28]=c->r[28]+0x00000054u; // 80095BDC
  c->r[29]=c->r[29]+0x00000001u; // 80095BE0
L_80095BE4:;
  c->r[0]=R32(c->r[26]+0x00000048u); // 80095BE4
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[0])>>32); // 80095BE8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80095BEC
  c->r[0]=c->r[3]+c->r[0]; // 80095BF0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80095BF4
  if (crb(c,0)) { IRQCHK(c); goto L_80095BAC; } // 80095BF8
  c->r[7]=R32(c->r[1]+0x00000008u); // 80095BFC
  c->r[3]=c->r[26]+0x00000058u; // 80095C00
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 80095C04
  c->r[5]=c->r[3]|c->r[3]; // 80095C08
  c->r[0]=R32(c->r[1]+0x00000010u); // 80095C0C
  c->r[4]=c->r[1]+0x00000014u; // 80095C10
  W32(c->r[1]+0x00000014u,c->r[7]); // 80095C14
  W32(c->r[1]+0x00000018u,c->r[6]); // 80095C18
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80095C1C
  c->lr=0x80095C24u; f_801647E4(c); // 80095C20
  c->r[3]=c->r[26]+0x00000064u; // 80095C24
  c->r[4]=c->r[1]+0x00000014u; // 80095C28
  c->r[5]=c->r[3]|c->r[3]; // 80095C2C
  c->lr=0x80095C34u; f_801647E4(c); // 80095C30
  c->r[3]=c->r[26]+0x0000004Cu; // 80095C34
  c->r[4]=c->r[1]+0x00000014u; // 80095C38
  c->r[5]=c->r[3]|c->r[3]; // 80095C3C
  c->lr=0x80095C44u; f_801647E4(c); // 80095C40
L_80095C44:;
  {uint32_t ea=c->r[26]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 80095C44
  c->r[11]=c->r[1]+0x00000040u; // 80095C48
  {uint32_t ea=c->r[26]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095C4C
  {uint32_t ea=c->r[26]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095C50
  {uint32_t ea=c->r[26]+0x0000007Cu; WF32(ea,c->f[2]);} // 80095C54
  {uint32_t ea=c->r[26]+0x00000080u; WF32(ea,c->f[1]);} // 80095C58
  {uint32_t ea=c->r[26]+0x00000084u; WF32(ea,c->f[0]);} // 80095C5C
  c->lr=0x80095C64u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80095C60
  c->r[0]=R32(c->r[1]+0x00000044u); // 80095C64
  c->lr=c->r[0]; // 80095C68
  c->r[1]=c->r[1]+0x00000040u; // 80095C6C
  return; // 80095C70
}

// fn_80095C74
void f_80095C74(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80095C74
  return; // 80095C78
}

// fn_80095C7C
void f_80095C7C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 80095C7C
  return; // 80095C80
}

// fn_80095C84
void f_80095C84(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 80095C84
  c->r[12]=R32(c->r[12]+0x00000018u); // 80095C88
  c->ctr=c->r[12]; // 80095C8C
  if (true) { dispatch(c,c->ctr); return; } // 80095C90
}

// fn_80095C94
void f_80095C94(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 80095C94
  c->r[5]=0u+0x0000005Cu; // 80095C98
  c->r[3]=c->r[3]+0x00000004u; // 80095C9C
  f_8000443C(c); return; // 80095CA0
}

// fn_80095CA4
void f_80095CA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80095CA4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095CA8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095CAC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 80095CB0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 80095CB4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80095CB8
  return; // 80095CBC
}

// fn_80095CC0
void f_80095CC0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000044u); // 80095CC0
  c->r[0]=R32(c->r[4]+0x00000048u); // 80095CC4
  W32(c->r[3]+0x00000000u,c->r[5]); // 80095CC8
  W32(c->r[3]+0x00000004u,c->r[0]); // 80095CCC
  c->r[0]=R32(c->r[4]+0x0000004Cu); // 80095CD0
  W32(c->r[3]+0x00000008u,c->r[0]); // 80095CD4
  return; // 80095CD8
}

// fn_80095CDC
void f_80095CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80095CDC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095CE0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80095CE4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[2]);} // 80095CE8
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 80095CEC
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 80095CF0
  return; // 80095CF4
}

// fn_80095CF8
void f_80095CF8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000050u); // 80095CF8
  c->r[0]=R32(c->r[4]+0x00000054u); // 80095CFC
  W32(c->r[3]+0x00000000u,c->r[5]); // 80095D00
  W32(c->r[3]+0x00000004u,c->r[0]); // 80095D04
  c->r[0]=R32(c->r[4]+0x00000058u); // 80095D08
  W32(c->r[3]+0x00000008u,c->r[0]); // 80095D0C
  return; // 80095D10
}

// fn_80095D14
void f_80095D14(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80095D14
  return; // 80095D18
}

// fn_80095D1C
void f_80095D1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 80095D1C
  return; // 80095D20
}

// fn_80095D24
void f_80095D24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80095D24
  c->r[0]=c->lr; // 80095D28
  c->r[6]=0u+0x80370000u; // 80095D2C
  c->r[9]=0u+0x00000000u; // 80095D30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80095D34
  c->r[6]=c->r[6]+0x00003BF8u; // 80095D38
  c->r[8]=0u+0x00000040u; // 80095D3C
  c->r[3]=c->r[13]+0xFFFFA4C0u; // 80095D40
  c->r[4]=c->r[6]+0x00000410u; // 80095D44
  W32(c->r[13]+0xFFFFA4B0u,c->r[9]); // 80095D48
  c->r[7]=0u+0x00000008u; // 80095D4C
  c->r[5]=c->r[13]+0xFFFFA4B8u; // 80095D50
  W32(c->r[13]+0xFFFFA4B8u,c->r[8]); // 80095D54
  c->r[0]=0u+0x00000002u; // 80095D58
  {uint32_t ea=c->r[2]+0xFFFF92D8u; c->f[6]=RF64(ea);} // 80095D5C
  c->r[8]=c->r[13]+0xFFFFA4B8u; // 80095D60
  W32(c->r[5]+0x00000004u,c->r[7]); // 80095D64
  c->r[9]=c->r[13]+0xFFFFA4C0u; // 80095D68
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80095D6C
  c->r[5]=0u+0x43300000u; // 80095D70
  {uint32_t ea=c->r[2]+0xFFFF92D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80095D74
  W32(c->r[13]+0xFFFFA4C0u,c->r[6]); // 80095D78
  W32(c->r[3]+0x00000004u,c->r[4]); // 80095D7C
  c->ctr=c->r[0]; // 80095D80
L_80095D84:;
  c->r[7]=0u+0x00000000u; // 80095D84
  c->r[3]=0u+0x00000000u; // 80095D88
  goto L_80095E1C; // 80095D8C
L_80095D90:;
  c->r[0]=c->r[4]^0x80000000u; // 80095D90
  c->r[6]=c->r[7]^0x80000000u; // 80095D94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80095D98
  c->r[7]=c->r[7]+0x00000001u; // 80095D9C
  c->r[4]=R32(c->r[9]+0x00000000u); // 80095DA0
  W32(c->r[1]+0x00000010u,c->r[5]); // 80095DA4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80095DA8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80095DAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 80095DB0
  W32(c->r[1]+0x00000008u,c->r[5]); // 80095DB4
  c->f[0]=c->ps1[0]=S(c->f[5]/c->f[0]); // 80095DB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80095DBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 80095DC0
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[0]); // 80095DC4
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[7]); // 80095DC8
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[7]); // 80095DCC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[7]); // 80095DD0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[4]); // 80095DD4
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 80095DD8
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[1]); // 80095DDC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[2]); // 80095DE0
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 80095DE4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 80095DE8
  {uint32_t ea=c->r[4]+c->r[3]; WF32(ea,c->f[4]);} // 80095DEC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 80095DF0
  c->r[0]=R32(c->r[9]+0x00000000u); // 80095DF4
  c->r[4]=c->r[0]+c->r[3]; // 80095DF8
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[2]);} // 80095DFC
  c->r[0]=R32(c->r[9]+0x00000000u); // 80095E00
  c->r[4]=c->r[0]+c->r[3]; // 80095E04
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 80095E08
  c->r[0]=R32(c->r[9]+0x00000000u); // 80095E0C
  c->r[4]=c->r[0]+c->r[3]; // 80095E10
  c->r[3]=c->r[3]+0x00000010u; // 80095E14
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 80095E18
L_80095E1C:;
  c->r[4]=R32(c->r[8]+0x00000000u); // 80095E1C
  c->r[0]=c->r[4]+0x00000001u; // 80095E20
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80095E24
  if (crb(c,0)) { IRQCHK(c); goto L_80095D90; } // 80095E28
  c->r[8]=c->r[8]+0x00000004u; // 80095E2C
  c->r[9]=c->r[9]+0x00000004u; // 80095E30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80095D84; } // 80095E34
  c->lr=0x80095E3Cu; f_800975DC(c); // 80095E38
  c->r[0]=R32(c->r[1]+0x00000024u); // 80095E3C
  c->lr=c->r[0]; // 80095E40
  c->r[1]=c->r[1]+0x00000020u; // 80095E44
  return; // 80095E48
}

// fn_80095E4C
void f_80095E4C(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80095E4C
  c->r[5]=c->r[13]+0xFFFFA4A8u; // 80095E50
  c->r[0]=R32(c->r[5]+c->r[6]); // 80095E54
  cmps(c,0,(int32_t)c->r[0],0); // 80095E58
  if (!crb(c,2)) return; // 80095E5C
  c->r[4]=R32(c->r[13]+0xFFFFA4B0u); // 80095E60
  W32(c->r[5]+c->r[6],c->r[3]); // 80095E64
  c->r[0]=c->r[4]+0x00000001u; // 80095E68
  W32(c->r[13]+0xFFFFA4B0u,c->r[0]); // 80095E6C
  return; // 80095E70
}

// fn_80095E74
void f_80095E74(Ctx* __restrict c) {
  f_80097674(c); return; // 80095E74
}

// fn_80095E78
void f_80095E78(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80095E78
  c->r[3]=c->r[13]+0xFFFF8A50u; // 80095E7C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80095E80
  c->r[3]=R32(c->r[3]+0x00000000u); // 80095E84
  return; // 80095E88
}

// fn_80095E8C
void f_80095E8C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80095E8C
  c->r[3]=c->r[13]+0xFFFF8A50u; // 80095E90
  c->r[3]=R32(c->r[3]+c->r[0]); // 80095E94
  c->r[3]=R32(c->r[3]+0x00000000u); // 80095E98
  c->r[0]=R32(c->r[3]+0x00000004u); // 80095E9C
  c->r[3]=c->r[3]+c->r[0]; // 80095EA0
  return; // 80095EA4
}

// fn_80095EA8
void f_80095EA8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80095EA8
  c->r[3]=c->r[13]+0xFFFF8A50u; // 80095EAC
  c->r[3]=R32(c->r[3]+c->r[0]); // 80095EB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80095EB4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80095EB8
  c->r[3]=c->r[3]+c->r[0]; // 80095EBC
  return; // 80095EC0
}

// fn_80095EC4
void f_80095EC4(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80095EC4
  c->r[3]=c->r[13]+0xFFFF8A50u; // 80095EC8
  c->r[3]=R32(c->r[3]+c->r[0]); // 80095ECC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80095ED0
  c->r[0]=R32(c->r[3]+0x00000014u); // 80095ED4
  c->r[3]=c->r[3]+c->r[0]; // 80095ED8
  return; // 80095EDC
}

// fn_80095EE0
void f_80095EE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80095EE0
  c->r[0]=c->lr; // 80095EE4
  W32(c->r[1]+0x00000054u,c->r[0]); // 80095EE8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80095EEC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80095EF0
  c->r[11]=c->r[1]+0x00000040u; // 80095EF4
  c->lr=0x80095EFCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80095EF8
  c->r[6]=c->r[13]+0xFFFF8A50u; // 80095EFC
  c->r[5]=R32(c->r[6]+0x00000004u); // 80095F00
  c->r[0]=R32(c->r[5]+0x00000000u); // 80095F04
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80095F08
  if (!crb(c,0)) { goto L_80095F1C; } // 80095F0C
  c->r[5]=R32(c->r[6]+0x00000000u); // 80095F10
  c->r[7]=R32(c->r[5]+0x00000000u); // 80095F14
  goto L_80095F24; // 80095F18
L_80095F1C:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 80095F1C
  c->r[7]=R32(c->r[5]+0x00000000u); // 80095F20
L_80095F24:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 80095F24
  c->r[6]=c->r[13]+0xFFFF8A50u; // 80095F28
  c->r[5]=R32(c->r[6]+0x00000004u); // 80095F2C
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80095F30
  c->r[0]=c->r[7]+c->r[0]; // 80095F34
  c->r[4]=c->r[0]+c->r[31]; // 80095F38
  c->r[0]=R32(c->r[5]+0x00000000u); // 80095F3C
  c->r[4]=R16(c->r[4]+0x00000002u); // 80095F40
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80095F44
  c->r[26]=c->r[4]+0xFFFFFFFFu; // 80095F48
  if (!crb(c,0)) { goto L_80095F5C; } // 80095F4C
  c->r[3]=R32(c->r[6]+0x00000000u); // 80095F50
  c->r[4]=R32(c->r[3]+0x00000000u); // 80095F54
  goto L_80095F64; // 80095F58
L_80095F5C:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 80095F5C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80095F60
L_80095F64:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80095F64
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80095F68
  c->r[30]=c->r[4]+c->r[3]; // 80095F6C
  c->r[3]=c->r[30]+c->r[31]; // 80095F70
  c->r[29]=c->r[4]+c->r[0]; // 80095F74
  c->r[3]=R16(c->r[3]+0x00000002u); // 80095F78
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80095F7C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80095F80
  if (!crb(c,1)) { goto L_80095F8C; } // 80095F84
  c->r[26]=c->r[0]|c->r[0]; // 80095F88
L_80095F8C:;
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80095F8C
  c->r[28]=0u+0x00000000u; // 80095F90
  c->r[25]=0u+0x00000000u; // 80095F94
  goto L_80095FEC; // 80095F98
L_80095F9C:;
  c->r[4]=R16(c->r[30]+c->r[31]); // 80095F9C
  c->r[0]=c->r[25]+c->r[29]; // 80095FA0
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095FA4
  c->r[3]=c->r[1]+0x00000008u; // 80095FA8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 80095FAC
  c->r[27]=c->r[4]+c->r[0]; // 80095FB0
  c->r[4]=c->r[27]|c->r[27]; // 80095FB4
  c->lr=0x80095FBCu; f_80096018(c); // 80095FB8
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095FBC
  c->r[4]=c->r[27]|c->r[27]; // 80095FC0
  c->r[3]=c->r[1]+0x00000014u; // 80095FC4
  c->lr=0x80095FCCu; f_80096018(c); // 80095FC8
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80095FCC
  c->r[3]=c->r[27]|c->r[27]; // 80095FD0
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80095FD4
  c->r[4]=c->r[1]+0x00000008u; // 80095FD8
  c->lr=0x80095FE0u; f_80096204(c); // 80095FDC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 80095FE0
  c->r[25]=c->r[25]+0x00000030u; // 80095FE4
  c->r[28]=c->r[28]+0x00000001u; // 80095FE8
L_80095FEC:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[26]); // 80095FEC
  if (crb(c,0)) { IRQCHK(c); goto L_80095F9C; } // 80095FF0
  c->f[1]=c->f[31]; // 80095FF4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80095FF8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80095FFC
  c->r[11]=c->r[1]+0x00000040u; // 80096000
  c->lr=0x80096008u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80096004
  c->r[0]=R32(c->r[1]+0x00000054u); // 80096008
  c->lr=c->r[0]; // 8009600C
  c->r[1]=c->r[1]+0x00000050u; // 80096010
  return; // 80096014
}

// fn_80096018
void f_80096018(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096018
  fcmp(c,0,c->f[0],c->f[1]); // 8009601C
  if (!crb(c,2)) { goto L_80096040; } // 80096020
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096024
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80096028
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009602C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80096030
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096034
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80096038
  return; // 8009603C
L_80096040:;
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096040
  fcmp(c,0,c->f[0],c->f[1]); // 80096044
  if (!crb(c,2)) { goto L_80096068; } // 80096048
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009604C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80096050
  {uint32_t ea=c->r[4]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096054
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80096058
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009605C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80096060
  return; // 80096064
L_80096068:;
  c->f[10]=c->ps1[10]=S(c->f[0]-c->f[1]); // 80096068
  {uint32_t ea=c->r[2]+0xFFFF92D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 8009606C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[1]); // 80096070
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096074
  {uint32_t ea=c->r[4]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096078
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[10]); // 8009607C
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[1]); // 80096080
  {uint32_t ea=c->r[4]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 80096084
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80096088
  {uint32_t ea=c->r[4]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 8009608C
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[9]); // 80096090
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[9]); // 80096094
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 80096098
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[8]); // 8009609C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[9]); // 800960A0
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 800960A4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[6]); // 800960A8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 800960AC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[7]); // 800960B0
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800960B4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800960B8
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 800960BC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800960C0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800960C4
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800960C8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 800960CC
  {uint32_t ea=c->r[4]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800960D0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 800960D4
  {uint32_t ea=c->r[4]+0x00000044u; c->f[4]=c->ps1[4]=RF32(ea);} // 800960D8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[7]); // 800960DC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 800960E0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800960E4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800960E8
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 800960EC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800960F0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800960F4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800960F8
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800960FC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 80096100
  {uint32_t ea=c->r[4]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 80096104
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 80096108
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[7]); // 8009610C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80096110
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 80096114
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 80096118
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 8009611C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80096120
  return; // 80096124
}

// fn_80096128
void f_80096128(Ctx* __restrict c) {
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[1]); // 80096128
  {uint32_t ea=c->r[2]+0xFFFF92E4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009612C
  {uint32_t ea=c->r[2]+0xFFFF92E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096130
  {uint32_t ea=c->r[2]+0xFFFF92ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096134
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[1]); // 80096138
  {uint32_t ea=c->r[2]+0xFFFF92F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009613C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[8]); // 80096140
  {uint32_t ea=c->r[2]+0xFFFF92D4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80096144
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[8]); // 80096148
  {uint32_t ea=c->r[2]+0xFFFF92F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009614C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80096150
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096154
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[6]); // 80096158
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[8]); // 8009615C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 80096160
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096164
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[5]); // 80096168
  {uint32_t ea=c->r[4]+0x00000040u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009616C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[6]); // 80096170
  c->f[6]=c->ps1[6]=S(c->f[5]+c->f[3]); // 80096174
  {uint32_t ea=c->r[4]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096178
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[7]); // 8009617C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[8]); // 80096180
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 80096184
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80096188
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 8009618C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80096190
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 80096194
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 80096198
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 8009619C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800961A0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800961A4
  {uint32_t ea=c->r[4]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800961A8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[7]); // 800961AC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 800961B0
  {uint32_t ea=c->r[4]+0x00000044u; c->f[4]=c->ps1[4]=RF32(ea);} // 800961B4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 800961B8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 800961BC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800961C0
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800961C4
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 800961C8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800961CC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800961D0
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800961D4
  {uint32_t ea=c->r[4]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800961D8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[7]); // 800961DC
  {uint32_t ea=c->r[4]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 800961E0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 800961E4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 800961E8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 800961EC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 800961F0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800961F4
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 800961F8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800961FC
  return; // 80096200
}

// fn_80096204
void f_80096204(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80096204
  c->r[0]=c->lr; // 80096208
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8009620C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 80096210
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 80096214
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 80096218
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 8009621C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 80096220
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 80096224
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 80096228
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 8009622C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[27]);} // 80096230
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,27,ea,0,0);} // 80096234
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[26]);} // 80096238
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,26,ea,0,0);} // 8009623C
  c->r[11]=c->r[1]+0x00000090u; // 80096240
  c->lr=0x80096248u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80096244
  c->f[27]=c->f[1]; // 80096248
  c->r[27]=c->r[4]|c->r[4]; // 8009624C
  c->f[28]=c->f[2]; // 80096250
  c->r[31]=c->r[3]|c->r[3]; // 80096254
  c->r[3]=c->r[27]|c->r[27]; // 80096258
  c->r[4]=c->r[4]+0x0000000Cu; // 8009625C
  c->r[5]=c->r[1]+0x00000038u; // 80096260
  c->lr=0x80096268u; f_80164808(c); // 80096264
  c->r[3]=c->r[1]+0x00000038u; // 80096268
  c->lr=0x80096270u; f_801648A4(c); // 8009626C
  {uint32_t ea=c->r[2]+0xFFFF92F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096270
  c->f[31]=c->f[1]; // 80096274
  fcmp(c,0,c->f[1],c->f[0]); // 80096278
  if (!crb(c,1)) { goto L_800963D0; } // 8009627C
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096280
  c->f[29]=c->f[27]; // 80096284
  {uint32_t ea=c->r[27]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096288
  c->r[28]=0u+0x00000000u; // 8009628C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80096290
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096294
  {uint32_t ea=c->r[27]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096298
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8009629C
  c->r[29]=0u+0x43300000u; // 800962A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800962A4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 800962A8
  c->r[3]=R32(c->r[1]+0x00000030u); // 800962AC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 800962B0
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800962B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800962B8
  W32(c->r[1]+0x00000020u,c->r[4]); // 800962BC
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800962C0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 800962C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800962C8
  W32(c->r[1]+0x00000024u,c->r[3]); // 800962CC
  c->r[4]=R32(c->r[1]+0x00000064u); // 800962D0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800962D4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800962D8
  c->r[27]=c->r[4]+0x00000002u; // 800962DC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800962E0
  c->r[30]=c->r[27]^0x80000000u; // 800962E4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[2]);} // 800962E8
  {uint32_t ea=c->r[2]+0xFFFF92D8u; c->f[26]=RF64(ea);} // 800962EC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 800962F0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800962F4
  goto L_800963C8; // 800962F8
L_800962FC:;
  c->r[3]=c->r[27]-c->r[28]; // 800962FC
  c->r[0]=c->r[28]+0x00000001u; // 80096300
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80096304
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80096308
  c->r[3]=c->r[3]^0x80000000u; // 8009630C
  c->r[0]=c->r[0]^0x80000000u; // 80096310
  W32(c->r[1]+0x00000064u,c->r[3]); // 80096314
  c->f[30]=c->f[29]; // 80096318
  {uint32_t ea=c->r[1]+0x00000058u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009631C
  c->r[4]=c->r[31]|c->r[31]; // 80096320
  W32(c->r[1]+0x00000060u,c->r[29]); // 80096324
  c->r[3]=c->r[1]+0x00000054u; // 80096328
  {uint32_t ea=c->r[1]+0x00000054u; c->f[5]=c->ps1[5]=RF32(ea);} // 8009632C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 80096330
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80096334
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[26]); // 80096338
  W32(c->r[1]+0x00000068u,c->r[29]); // 8009633C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 80096340
  c->f[2]=c->ps1[2]=S(c->f[27]*c->f[1]); // 80096344
  W32(c->r[1]+0x00000074u,c->r[30]); // 80096348
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 8009634C
  W32(c->r[1]+0x00000070u,c->r[29]); // 80096350
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[0]); // 80096354
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 80096358
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 8009635C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 80096360
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80096364
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 80096368
  c->r[6]=R32(c->r[1]+0x00000014u); // 8009636C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 80096370
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[0]); // 80096374
  c->r[5]=R32(c->r[1]+0x00000018u); // 80096378
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8009637C
  W32(c->r[1]+0x00000008u,c->r[6]); // 80096380
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80096384
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096388
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009638C
  c->f[1]=c->f[29]; // 80096390
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80096394
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096398
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[3]);} // 8009639C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 800963A0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800963A4
  c->lr=0x800963ACu; f_80096018(c); // 800963A8
  c->f[1]=c->f[30]; // 800963AC
  c->r[3]=c->r[31]|c->r[31]; // 800963B0
  c->f[2]=c->f[29]; // 800963B4
  c->r[4]=c->r[1]+0x00000048u; // 800963B8
  c->lr=0x800963C0u; f_80096204(c); // 800963BC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 800963C0
  c->r[28]=c->r[28]+0x00000001u; // 800963C4
L_800963C8:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 800963C8
  if (crb(c,0)) { IRQCHK(c); goto L_800962FC; } // 800963CC
L_800963D0:;
  c->f[1]=c->f[31]; // 800963D0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800963D4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800963D8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 800963DC
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 800963E0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 800963E4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 800963E8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 800963EC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 800963F0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,27,ea,0,0);} // 800963F4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[27]=RF64(ea);} // 800963F8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,26,ea,0,0);} // 800963FC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[26]=RF64(ea);} // 80096400
  c->r[11]=c->r[1]+0x00000090u; // 80096404
  c->lr=0x8009640Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80096408
  c->r[0]=R32(c->r[1]+0x000000F4u); // 8009640C
  c->lr=c->r[0]; // 80096410
  c->r[1]=c->r[1]+0x000000F0u; // 80096414
  return; // 80096418
}

// fn_8009641C
void f_8009641C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009641C
  c->r[0]=c->lr; // 80096420
  W32(c->r[1]+0x00000094u,c->r[0]); // 80096424
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80096428
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8009642C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 80096430
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80096434
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 80096438
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8009643C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 80096440
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 80096444
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 80096448
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 8009644C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[26]);} // 80096450
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,26,ea,0,0);} // 80096454
  c->f[26]=c->f[1]; // 80096458
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009645C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80096460
  W32(c->r[1]+0x00000028u,c->r[30]); // 80096464
  c->r[30]=c->r[3]|c->r[3]; // 80096468
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009646C
  fcmp(c,0,c->f[30],c->f[0]); // 80096470
  if (!crb(c,2)) { goto L_80096480; } // 80096474
  c->f[1]=c->f[30]; // 80096478
  goto L_80096538; // 8009647C
L_80096480:;
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[0]); // 80096480
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80096484
  c->r[31]=0u+0x00000000u; // 80096488
  c->f[27]=c->f[30]; // 8009648C
  c->f[28]=c->f[30]; // 80096490
L_80096494:;
  fcmp(c,0,c->f[29],c->f[30]); // 80096494
  if (!crb(c,0)) { goto L_800964A0; } // 80096498
  c->f[29]=c->f[30]; // 8009649C
L_800964A0:;
  fcmp(c,0,c->f[29],c->f[31]); // 800964A0
  if (!crb(c,1)) { goto L_800964AC; } // 800964A4
  c->f[29]=c->f[31]; // 800964A8
L_800964AC:;
  c->f[1]=c->f[27]; // 800964AC
  c->r[4]=c->r[30]|c->r[30]; // 800964B0
  c->r[3]=c->r[1]+0x00000008u; // 800964B4
  c->lr=0x800964BCu; f_80096018(c); // 800964B8
  c->f[1]=c->f[29]; // 800964BC
  c->r[4]=c->r[30]|c->r[30]; // 800964C0
  c->r[3]=c->r[1]+0x00000014u; // 800964C4
  c->lr=0x800964CCu; f_80096018(c); // 800964C8
  c->f[1]=c->f[27]; // 800964CC
  c->r[3]=c->r[30]|c->r[30]; // 800964D0
  c->f[2]=c->f[29]; // 800964D4
  c->r[4]=c->r[1]+0x00000008u; // 800964D8
  c->lr=0x800964E0u; f_80096204(c); // 800964DC
  fcmp(c,0,c->f[27],c->f[29]); // 800964E0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800964E4
  if (!crb(c,2)) { goto L_800964F4; } // 800964E8
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[1]); // 800964EC
  goto L_800964F8; // 800964F0
L_800964F4:;
  c->f[28]=c->ps1[28]=S(c->f[28]-c->f[1]); // 800964F4
L_800964F8:;
  c->f[0]=c->ps1[0]=S(c->f[26]-c->f[28]); // 800964F8
  fcmp(c,0,c->f[0],c->f[30]); // 800964FC
  if (!crb(c,0)) { goto L_80096508; } // 80096500
  c->f[0]=-c->f[0]; // 80096504
L_80096508:;
  fcmp(c,0,c->f[0],c->f[30]); // 80096508
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009650C
  if (crb(c,2)) { goto L_80096534; } // 80096510
  c->f[1]=c->ps1[1]=S(c->f[26]-c->f[28]); // 80096514
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096518
  c->r[31]=c->r[31]+0x00000001u; // 8009651C
  c->f[27]=c->f[29]; // 80096520
  cmps(c,0,(int32_t)c->r[31],16); // 80096524
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80096528
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 8009652C
  if (crb(c,0)) { IRQCHK(c); goto L_80096494; } // 80096530
L_80096534:;
  c->f[1]=c->f[29]; // 80096534
L_80096538:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80096538
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8009653C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 80096540
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 80096544
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 80096548
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8009654C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 80096550
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 80096554
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 80096558
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 8009655C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,26,ea,0,0);} // 80096560
  {uint32_t ea=c->r[1]+0x00000030u; c->f[26]=RF64(ea);} // 80096564
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80096568
  c->r[0]=R32(c->r[1]+0x00000094u); // 8009656C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80096570
  c->lr=c->r[0]; // 80096574
  c->r[1]=c->r[1]+0x00000090u; // 80096578
  return; // 8009657C
}

// fn_80096580
void f_80096580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80096580
  c->r[0]=c->lr; // 80096584
  W32(c->r[1]+0x00000024u,c->r[0]); // 80096588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009658C
  c->r[31]=c->r[6]|c->r[6]; // 80096590
  W32(c->r[1]+0x00000018u,c->r[30]); // 80096594
  c->r[30]=c->r[5]|c->r[5]; // 80096598
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009659C
  c->r[29]=c->r[4]|c->r[4]; // 800965A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800965A4
  c->r[28]=c->r[3]|c->r[3]; // 800965A8
  goto L_80096624; // 800965AC
L_800965B0:;
  cmpu(c,0,c->r[3],0x00001000u); // 800965B0
  if (!crb(c,2)) { goto L_800965DC; } // 800965B4
  c->r[4]=c->r[31]|c->r[31]; // 800965B8
  c->r[3]=c->r[30]+0x00000004u; // 800965BC
  c->lr=0x800965C4u; f_80097564(c); // 800965C0
  cmps(c,0,(int32_t)c->r[3],0); // 800965C4
  if (!crb(c,2)) { goto L_80096618; } // 800965C8
  c->r[0]=R16(c->r[30]+0x00000002u); // 800965CC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800965D0
  c->r[30]=c->r[30]+c->r[0]; // 800965D4
  goto L_80096618; // 800965D8
L_800965DC:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[29]); // 800965DC
  if (!crb(c,2)) { goto L_80096618; } // 800965E0
  c->r[4]=c->r[30]|c->r[30]; // 800965E4
  c->r[5]=0u+0x00000000u; // 800965E8
  goto L_80096604; // 800965EC
L_800965F0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 800965F0
  c->r[4]=c->r[4]+0x00000002u; // 800965F4
  c->r[5]=c->r[5]+0x00000001u; // 800965F8
  W16(c->r[28]+0x00000000u,c->r[0]); // 800965FC
  c->r[28]=c->r[28]+0x00000002u; // 80096600
L_80096604:;
  c->r[3]=R16(c->r[30]+0x00000002u); // 80096604
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80096608
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8009660C
  if (crb(c,0)) { IRQCHK(c); goto L_800965F0; } // 80096610
  goto L_80096638; // 80096614
L_80096618:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 80096618
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8009661C
  c->r[30]=c->r[30]+c->r[0]; // 80096620
L_80096624:;
  c->r[3]=R16(c->r[30]+0x00000000u); // 80096624
  c->r[0]=rotl(c->r[3],0)&0x0000F000u; // 80096628
  cmps(c,0,(int32_t)c->r[0],4096); // 8009662C
  if (crb(c,2)) { IRQCHK(c); goto L_800965B0; } // 80096630
  c->r[3]=0u+0xFFFFFFFFu; // 80096634
L_80096638:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80096638
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009663C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80096640
  c->r[29]=R32(c->r[1]+0x00000014u); // 80096644
  c->r[28]=R32(c->r[1]+0x00000010u); // 80096648
  c->lr=c->r[0]; // 8009664C
  c->r[1]=c->r[1]+0x00000020u; // 80096650
  return; // 80096654
}

// fn_80096658
void f_80096658(Ctx* __restrict c) {
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000000Eu); // 80096658
  cmps(c,0,(int32_t)c->r[9],0); // 8009665C
  if (!crb(c,0)) { goto L_8009666C; } // 80096660
  c->r[3]=0u+0xFFFFFFFFu; // 80096664
  return; // 80096668
L_8009666C:;
  c->r[8]=c->r[13]+0xFFFF8A50u; // 8009666C
  c->r[7]=R32(c->r[8]+0x00000004u); // 80096670
  c->r[0]=R32(c->r[7]+0x00000000u); // 80096674
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80096678
  if (!crb(c,0)) { goto L_8009668C; } // 8009667C
  c->r[5]=R32(c->r[8]+0x00000000u); // 80096680
  c->r[7]=R32(c->r[5]+0x00000000u); // 80096684
  goto L_80096694; // 80096688
L_8009668C:;
  c->r[5]=R32(c->r[8]+0x00000004u); // 8009668C
  c->r[7]=R32(c->r[5]+0x00000000u); // 80096690
L_80096694:;
  c->r[0]=R32(c->r[7]+0x00000014u); // 80096694
  c->r[5]=rotl(c->r[9],1)&0xFFFFFFFEu; // 80096698
  c->r[0]=c->r[7]+c->r[0]; // 8009669C
  c->r[5]=c->r[5]+c->r[0]; // 800966A0
  f_80096580(c); return; // 800966A4
}

// fn_800966A8
void f_800966A8(Ctx* __restrict c) {
  return; // 800966A8
}

// fn_800966AC
void f_800966AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800966AC
  c->r[0]=c->lr; // 800966B0
  W32(c->r[1]+0x00000074u,c->r[0]); // 800966B4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800966B8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800966BC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800966C0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800966C4
  c->r[11]=c->r[1]+0x00000050u; // 800966C8
  c->lr=0x800966D0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800966CC
  c->r[0]=R16(c->r[3]+0x00000004u); // 800966D0
  c->f[30]=c->f[1]; // 800966D4
  c->r[30]=c->r[13]+0xFFFF8A50u; // 800966D8
  c->r[27]=c->r[4]|c->r[4]; // 800966DC
  c->r[0]=rotl(c->r[0],26)&0x000003FCu; // 800966E0
  c->r[28]=R32(c->r[3]+0x00000000u); // 800966E4
  c->r[4]=R32(c->r[30]+c->r[0]); // 800966E8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 800966EC
  c->r[26]=c->r[3]|c->r[3]; // 800966F0
  c->r[5]=R32(c->r[4]+0x00000000u); // 800966F4
  c->r[4]=c->r[28]|c->r[28]; // 800966F8
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800966FC
  c->r[3]=c->r[1]+0x00000010u; // 80096700
  c->r[0]=R32(c->r[5]+0x00000004u); // 80096704
  c->r[29]=c->r[5]+c->r[0]; // 80096708
  c->lr=0x80096710u; f_80096018(c); // 8009670C
  c->f[1]=c->f[31]; // 80096710
  c->r[4]=c->r[28]|c->r[28]; // 80096714
  c->r[3]=c->r[1]+0x0000001Cu; // 80096718
  c->lr=0x80096720u; f_80096018(c); // 8009671C
  c->f[2]=c->f[31]; // 80096720
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096724
  c->r[3]=c->r[28]|c->r[28]; // 80096728
  c->r[4]=c->r[1]+0x00000010u; // 8009672C
  c->lr=0x80096734u; f_80096204(c); // 80096730
  c->r[0]=R16(c->r[26]+0x00000004u); // 80096734
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[30]); // 80096738
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009673C
  c->r[28]=0u+0x00000000u; // 80096740
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 80096744
  c->r[31]=0u+0xFFFFFFFFu; // 80096748
  c->r[29]=c->r[29]+c->r[0]; // 8009674C
L_80096750:;
  fcmp(c,0,c->f[30],c->f[31]); // 80096750
  c->r[0]=c->cr; // 80096754
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80096758
  if (crb(c,2)) { goto L_800967C8; } // 8009675C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000006u); // 80096760
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000000Cu); // 80096764
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80096768
  if (crb(c,2)) { goto L_80096790; } // 8009676C
  cmps(c,0,(int32_t)c->r[27],0); // 80096770
  W16(c->r[26]+0x0000000Cu,c->r[3]); // 80096774
  if (crb(c,2)) { goto L_80096790; } // 80096778
  c->r[12]=c->r[27]|c->r[27]; // 8009677C
  c->r[4]=c->r[26]|c->r[26]; // 80096780
  c->r[3]=R32(c->r[26]+0x00000000u); // 80096784
  c->ctr=c->r[12]; // 80096788
  if (true) { c->lr=0x80096790u; dispatch(c,c->ctr); } // 8009678C
L_80096790:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000006u); // 80096790
  cmps(c,0,(int32_t)c->r[4],0); // 80096794
  if (crb(c,1)) { goto L_800967A8; } // 80096798
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009679C
  c->r[28]=c->r[28]|0x00000001u; // 800967A0
  goto L_800969B4; // 800967A4
L_800967A8:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 800967A8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800967AC
  W16(c->r[26]+0x00000006u,c->r[0]); // 800967B0
  c->r[3]=c->r[3]+0xFFFFFFD0u; // 800967B4
  W32(c->r[26]+0x00000000u,c->r[3]); // 800967B8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800967BC
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 800967C0
  IRQCHK(c); goto L_80096750; // 800967C4
L_800967C8:;
  c->r[5]=R32(c->r[26]+0x00000000u); // 800967C8
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800967CC
  fcmp(c,0,c->f[30],c->f[0]); // 800967D0
  if (!crb(c,1)) { goto L_800969B4; } // 800967D4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000006u); // 800967D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000000Cu); // 800967DC
  c->r[6]=c->r[4]+0x00000001u; // 800967E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 800967E4
  if (crb(c,2)) { goto L_8009681C; } // 800967E8
  c->r[3]=R16(c->r[29]+0x00000002u); // 800967EC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800967F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800967F4
  if (!crb(c,0)) { goto L_8009681C; } // 800967F8
  cmps(c,0,(int32_t)c->r[27],0); // 800967FC
  W16(c->r[26]+0x0000000Cu,c->r[6]); // 80096800
  if (crb(c,2)) { goto L_8009681C; } // 80096804
  c->r[12]=c->r[27]|c->r[27]; // 80096808
  c->r[4]=c->r[26]|c->r[26]; // 8009680C
  c->r[3]=c->r[5]+0x00000030u; // 80096810
  c->ctr=c->r[12]; // 80096814
  if (true) { c->lr=0x8009681Cu; dispatch(c,c->ctr); } // 80096818
L_8009681C:;
  c->r[3]=R16(c->r[29]+0x00000002u); // 8009681C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000006u); // 80096820
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80096824
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80096828
  if (crb(c,0)) { goto L_80096840; } // 8009682C
  c->r[3]=R32(c->r[26]+0x00000000u); // 80096830
  c->r[28]=c->r[28]|0x00000002u; // 80096834
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80096838
  goto L_800969B4; // 8009683C
L_80096840:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 80096840
  c->r[0]=c->r[4]+0x00000001u; // 80096844
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096848
  c->r[4]=c->r[3]+0x00000030u; // 8009684C
  W16(c->r[26]+0x00000006u,c->r[0]); // 80096850
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[0]); // 80096854
  W32(c->r[26]+0x00000000u,c->r[4]); // 80096858
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000003Eu); // 8009685C
  cmps(c,0,(int32_t)c->r[5],0); // 80096860
  if (!crb(c,0)) { goto L_80096870; } // 80096864
  c->r[3]=0u+0xFFFFFFFFu; // 80096868
  goto L_800968B4; // 8009686C
L_80096870:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80096870
  c->r[0]=R32(c->r[3]+0x00000000u); // 80096874
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80096878
  if (!crb(c,0)) { goto L_8009688C; } // 8009687C
  c->r[3]=R32(c->r[30]+0x00000000u); // 80096880
  c->r[4]=R32(c->r[3]+0x00000000u); // 80096884
  goto L_80096894; // 80096888
L_8009688C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8009688C
  c->r[4]=R32(c->r[3]+0x00000000u); // 80096890
L_80096894:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 80096894
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80096898
  c->r[6]=c->r[26]|c->r[26]; // 8009689C
  c->r[3]=c->r[1]+0x00000008u; // 800968A0
  c->r[0]=c->r[4]+c->r[0]; // 800968A4
  c->r[4]=0u+0x00001001u; // 800968A8
  c->r[5]=c->r[5]+c->r[0]; // 800968AC
  c->lr=0x800968B4u; f_80096580(c); // 800968B0
L_800968B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800968B4
  if (!crb(c,0)) { goto L_800968C4; } // 800968B8
  c->r[6]=0u+0x00000000u; // 800968BC
  goto L_8009695C; // 800968C0
L_800968C4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 800968C4
  cmps(c,0,(int32_t)c->r[0],0); // 800968C8
  if (!crb(c,0)) { goto L_800968D8; } // 800968CC
  c->r[6]=0u+0xFFFFFFFFu; // 800968D0
  goto L_8009695C; // 800968D4
L_800968D8:;
  c->r[0]=R16(c->r[26]+0x00000004u); // 800968D8
  c->r[3]=c->r[26]|c->r[26]; // 800968DC
  c->r[25]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Au); // 800968E0
  c->r[4]=0u+0x00000000u; // 800968E4
  c->r[24]=rotl(c->r[0],24)&0x000000FFu; // 800968E8
  c->r[5]=0u+0x00000014u; // 800968EC
  c->lr=0x800968F4u; f_8000443C(c); // 800968F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 800968F4
  c->r[5]=rotl(c->r[24],8)&0xFFFFFF00u; // 800968F8
  c->r[3]=(uint32_t)((int32_t)c->r[25]*(int32_t)48); // 800968FC
  c->r[6]=0u+0x00000001u; // 80096900
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80096904
  W16(c->r[26]+0x00000006u,c->r[25]); // 80096908
  c->r[0]=c->r[5]+c->r[0]; // 8009690C
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[31]);} // 80096910
  c->r[4]=rotl(c->r[0],2)&0x000003FCu; // 80096914
  W16(c->r[26]+0x00000004u,c->r[0]); // 80096918
  W16(c->r[26]+0x0000000Cu,c->r[31]); // 8009691C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 80096920
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80096924
  c->r[0]=c->r[5]+c->r[0]; // 80096928
  c->r[0]=rotl(c->r[0],26)&0x000003FCu; // 8009692C
  c->r[5]=R32(c->r[30]+c->r[0]); // 80096930
  c->r[7]=R32(c->r[5]+0x00000000u); // 80096934
  c->r[0]=R32(c->r[7]+0x00000004u); // 80096938
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 8009693C
  c->r[0]=c->r[7]+c->r[0]; // 80096940
  c->r[4]=R16(c->r[4]+c->r[0]); // 80096944
  c->r[0]=c->r[7]+c->r[5]; // 80096948
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 8009694C
  c->r[0]=c->r[4]+c->r[0]; // 80096950
  c->r[0]=c->r[3]+c->r[0]; // 80096954
  W32(c->r[26]+0x00000000u,c->r[0]); // 80096958
L_8009695C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8009695C
  if (crb(c,2)) { IRQCHK(c); goto L_80096750; } // 80096960
  if (!crb(c,0)) { goto L_8009698C; } // 80096964
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000006u); // 80096968
  c->r[28]=c->r[28]|0x00000008u; // 8009696C
  c->r[3]=R32(c->r[26]+0x00000000u); // 80096970
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80096974
  c->r[3]=c->r[3]+0xFFFFFFD0u; // 80096978
  W16(c->r[26]+0x00000006u,c->r[0]); // 8009697C
  W32(c->r[26]+0x00000000u,c->r[3]); // 80096980
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80096984
  goto L_800969B4; // 80096988
L_8009698C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000006u); // 8009698C
  cmps(c,0,(int32_t)c->r[27],0); // 80096990
  W16(c->r[26]+0x0000000Cu,c->r[0]); // 80096994
  if (crb(c,2)) { IRQCHK(c); goto L_80096750; } // 80096998
  c->r[12]=c->r[27]|c->r[27]; // 8009699C
  c->r[4]=c->r[26]|c->r[26]; // 800969A0
  c->r[3]=R32(c->r[26]+0x00000000u); // 800969A4
  c->ctr=c->r[12]; // 800969A8
  if (true) { c->lr=0x800969B0u; dispatch(c,c->ctr); } // 800969AC
  IRQCHK(c); goto L_80096750; // 800969B0
L_800969B4:;
  c->f[1]=c->f[30]; // 800969B4
  c->r[3]=R32(c->r[26]+0x00000000u); // 800969B8
  c->lr=0x800969C0u; f_8009641C(c); // 800969BC
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[1]);} // 800969C0
  c->r[3]=c->r[28]|c->r[28]; // 800969C4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800969C8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800969CC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800969D0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800969D4
  c->r[11]=c->r[1]+0x00000050u; // 800969D8
  c->lr=0x800969E0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800969DC
  c->r[0]=R32(c->r[1]+0x00000074u); // 800969E0
  c->lr=c->r[0]; // 800969E4
  c->r[1]=c->r[1]+0x00000070u; // 800969E8
  return; // 800969EC
}

// fn_800969F0
void f_800969F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800969F0
  c->r[0]=c->lr; // 800969F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800969F8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800969FC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80096A00
  c->f[31]=c->f[1]; // 80096A04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80096A08
  c->r[31]=c->r[5]|c->r[5]; // 80096A0C
  c->r[5]=0u+0x00000014u; // 80096A10
  W32(c->r[1]+0x00000018u,c->r[30]); // 80096A14
  c->r[30]=c->r[4]|c->r[4]; // 80096A18
  c->r[4]=0u+0x00000000u; // 80096A1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80096A20
  c->r[29]=c->r[3]|c->r[3]; // 80096A24
  c->lr=0x80096A2Cu; f_8000443C(c); // 80096A28
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096A2C
  c->r[0]=0u+0x00000000u; // 80096A30
  c->r[5]=0u+0xFFFFFFFFu; // 80096A34
  W16(c->r[29]+0x00000004u,c->r[0]); // 80096A38
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80096A3C
  c->r[4]=rotl(c->r[30],26)&0x000003FCu; // 80096A40
  W16(c->r[29]+0x00000006u,c->r[0]); // 80096A44
  c->r[3]=c->r[13]+0xFFFF8A50u; // 80096A48
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 80096A4C
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80096A50
  c->r[10]=rotl(c->r[30],0)&0x0000FF00u; // 80096A54
  W16(c->r[29]+0x0000000Cu,c->r[5]); // 80096A58
  c->r[5]=R32(c->r[13]+0xFFFF8A50u); // 80096A5C
  c->r[9]=R32(c->r[5]+0x00000000u); // 80096A60
  c->r[5]=R32(c->r[9]+0x00000004u); // 80096A64
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 80096A68
  c->r[7]=R16(c->r[9]+c->r[5]); // 80096A6C
  c->r[5]=c->r[9]+c->r[8]; // 80096A70
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 80096A74
  c->r[5]=c->r[7]+c->r[5]; // 80096A78
  c->r[5]=c->r[6]+c->r[5]; // 80096A7C
  W32(c->r[29]+0x00000000u,c->r[5]); // 80096A80
  c->r[3]=R32(c->r[3]+c->r[4]); // 80096A84
  c->r[6]=R32(c->r[3]+0x00000000u); // 80096A88
  c->r[7]=R32(c->r[6]+0x00000008u); // 80096A8C
  c->r[4]=R32(c->r[6]+0x00000004u); // 80096A90
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 80096A94
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 80096A98
  c->r[5]=c->r[6]+c->r[4]; // 80096A9C
  c->r[6]=c->r[6]+c->r[3]; // 80096AA0
  if (crb(c,0)) { goto L_80096AB0; } // 80096AA4
  c->r[30]=c->r[10]+c->r[7]; // 80096AA8
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80096AAC
L_80096AB0:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80096AB0
  W16(c->r[29]+0x00000004u,c->r[30]); // 80096AB4
  if (!crb(c,2)) { goto L_80096AD0; } // 80096AB8
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096ABC
  c->r[0]=0u+0x00000000u; // 80096AC0
  W16(c->r[29]+0x00000006u,c->r[0]); // 80096AC4
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80096AC8
  goto L_80096B00; // 80096ACC
L_80096AD0:;
  c->r[4]=rotl(c->r[30],2)&0x000003FCu; // 80096AD0
  c->r[3]=c->r[5]+c->r[4]; // 80096AD4
  c->r[3]=R16(c->r[3]+0x00000002u); // 80096AD8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80096ADC
  W16(c->r[29]+0x00000006u,c->r[0]); // 80096AE0
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80096AE4
  c->r[0]=R16(c->r[5]+c->r[4]); // 80096AE8
  c->r[0]=c->r[3]+c->r[0]; // 80096AEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80096AF0
  c->r[3]=c->r[6]+c->r[0]; // 80096AF4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096AF8
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80096AFC
L_80096B00:;
  c->r[4]=R16(c->r[29]+0x00000004u); // 80096B00
  c->r[3]=0u+0x00000000u; // 80096B04
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096B08
  c->r[4]=rotl(c->r[4],2)&0x000003FCu; // 80096B0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000006u); // 80096B10
  c->r[5]=R16(c->r[5]+c->r[4]); // 80096B14
  fcmp(c,0,c->f[0],c->f[31]); // 80096B18
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80096B1C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 80096B20
  c->r[0]=c->r[6]+c->r[0]; // 80096B24
  c->r[0]=c->r[4]+c->r[0]; // 80096B28
  W32(c->r[29]+0x00000000u,c->r[0]); // 80096B2C
  if (crb(c,2)) { goto L_80096B44; } // 80096B30
  c->f[1]=c->f[31]; // 80096B34
  c->r[3]=c->r[29]|c->r[29]; // 80096B38
  c->r[4]=0u+0x00000000u; // 80096B3C
  c->lr=0x80096B44u; f_800966AC(c); // 80096B40
L_80096B44:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80096B44
  c->r[0]=R32(c->r[1]+0x00000034u); // 80096B48
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80096B4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80096B50
  c->r[30]=R32(c->r[1]+0x00000018u); // 80096B54
  c->r[29]=R32(c->r[1]+0x00000014u); // 80096B58
  c->lr=c->r[0]; // 80096B5C
  c->r[1]=c->r[1]+0x00000030u; // 80096B60
  return; // 80096B64
}

// fn_80096B68
void f_80096B68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80096B68
  c->r[0]=c->lr; // 80096B6C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80096B70
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 80096B74
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 80096B78
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 80096B7C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 80096B80
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 80096B84
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 80096B88
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 80096B8C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 80096B90
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[27]);} // 80096B94
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,27,ea,0,0);} // 80096B98
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[26]);} // 80096B9C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,26,ea,0,0);} // 80096BA0
  c->r[11]=c->r[1]+0x00000090u; // 80096BA4
  c->lr=0x80096BACu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80096BA8
  c->r[23]=c->r[3]|c->r[3]; // 80096BAC
  c->r[25]=c->r[5]|c->r[5]; // 80096BB0
  c->r[24]=c->r[4]|c->r[4]; // 80096BB4
  c->r[3]=c->r[4]+0x00000010u; // 80096BB8
  c->r[21]=c->r[6]|c->r[6]; // 80096BBC
  c->r[4]=c->r[23]|c->r[23]; // 80096BC0
  c->r[5]=c->r[1]+0x00000044u; // 80096BC4
  c->lr=0x80096BCCu; f_80164808(c); // 80096BC8
  c->r[4]=c->r[23]|c->r[23]; // 80096BCC
  c->r[3]=c->r[24]+0x00000020u; // 80096BD0
  c->r[5]=c->r[1]+0x00000038u; // 80096BD4
  c->lr=0x80096BDCu; f_80164808(c); // 80096BD8
  c->r[4]=c->r[23]|c->r[23]; // 80096BDC
  c->r[3]=c->r[24]+0x00000030u; // 80096BE0
  c->r[5]=c->r[1]+0x0000002Cu; // 80096BE4
  c->lr=0x80096BECu; f_80164808(c); // 80096BE8
  c->r[4]=c->r[23]|c->r[23]; // 80096BEC
  c->r[3]=c->r[24]+0x00000040u; // 80096BF0
  c->r[5]=c->r[1]+0x00000020u; // 80096BF4
  c->lr=0x80096BFCu; f_80164808(c); // 80096BF8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096BFC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096C00
  c->f[11]=c->ps1[11]=S(c->f[1]*c->f[1]); // 80096C04
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096C08
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[0]); // 80096C0C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80096C10
  c->f[10]=c->ps1[10]=S(c->f[3]*c->f[3]); // 80096C14
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80096C18
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[2]); // 80096C1C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096C20
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[1]); // 80096C24
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80096C28
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[0]); // 80096C2C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 80096C30
  {uint32_t ea=c->r[1]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096C34
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[5]); // 80096C38
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096C3C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[4]); // 80096C40
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096C44
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 80096C48
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096C4C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80096C50
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[11]);} // 80096C54
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80096C58
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 80096C5C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 80096C60
  fcmp(c,0,c->f[11],c->f[8]); // 80096C64
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 80096C68
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[8]);} // 80096C6C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[7]);} // 80096C70
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[6]);} // 80096C74
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[5]);} // 80096C78
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[4]);} // 80096C7C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 80096C80
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80096C84
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80096C88
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80096C8C
  if (!crb(c,0)) { goto L_80096C98; } // 80096C90
  goto L_80096C9C; // 80096C94
L_80096C98:;
  c->f[11]=c->f[8]; // 80096C98
L_80096C9C:;
  c->f[1]=c->ps1[1]=S(c->f[11]); // 80096C9C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096CA0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[11]);} // 80096CA4
  fcmp(c,0,c->f[1],c->f[0]); // 80096CA8
  if (!crb(c,0)) { goto L_80096CB8; } // 80096CAC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096CB0
  goto L_80096CBC; // 80096CB4
L_80096CB8:;
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80096CB8
L_80096CBC:;
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096CBC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096CC0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 80096CC4
  fcmp(c,0,c->f[1],c->f[0]); // 80096CC8
  if (!crb(c,0)) { goto L_80096CD8; } // 80096CCC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80096CD0
  goto L_80096CDC; // 80096CD4
L_80096CD8:;
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096CD8
L_80096CDC:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80096CDC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096CE0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 80096CE4
  fcmp(c,0,c->f[2],c->f[0]); // 80096CE8
  if (!crb(c,0)) { goto L_80096CF4; } // 80096CEC
  goto L_80096CF8; // 80096CF0
L_80096CF4:;
  c->f[2]=c->f[0]; // 80096CF4
L_80096CF8:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80096CF8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096CFC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80096D00
  fcmp(c,0,c->f[1],c->f[0]); // 80096D04
  if (!crb(c,0)) { goto L_80096D14; } // 80096D08
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096D0C
  goto L_80096D18; // 80096D10
L_80096D14:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096D14
L_80096D18:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80096D18
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096D1C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 80096D20
  fcmp(c,0,c->f[1],c->f[0]); // 80096D24
  if (!crb(c,0)) { goto L_80096D34; } // 80096D28
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096D2C
  goto L_80096D38; // 80096D30
L_80096D34:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096D34
L_80096D38:;
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096D38
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096D3C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80096D40
  fcmp(c,0,c->f[2],c->f[0]); // 80096D44
  if (!crb(c,0)) { goto L_80096D50; } // 80096D48
  goto L_80096D54; // 80096D4C
L_80096D50:;
  c->f[2]=c->f[0]; // 80096D50
L_80096D54:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80096D54
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096D58
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 80096D5C
  fcmp(c,0,c->f[1],c->f[0]); // 80096D60
  if (!crb(c,0)) { goto L_80096D70; } // 80096D64
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096D68
  goto L_80096D74; // 80096D6C
L_80096D70:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096D70
L_80096D74:;
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096D74
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096D78
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 80096D7C
  fcmp(c,0,c->f[1],c->f[0]); // 80096D80
  if (!crb(c,0)) { goto L_80096D90; } // 80096D84
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096D88
  goto L_80096D94; // 80096D8C
L_80096D90:;
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096D90
L_80096D94:;
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80096D94
  c->f[2]=c->ps1[2]=S(c->f[0]); // 80096D98
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096D9C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096DA0
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096DA4
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 80096DA8
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096DAC
  fcmp(c,0,c->f[1],c->f[0]); // 80096DB0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[3]); // 80096DB4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80096DB8
  if (!crb(c,2)) { goto L_80096DD0; } // 80096DBC
  fcmp(c,0,c->f[1],c->f[0]); // 80096DC0
  if (!crb(c,0)) { goto L_80096DD0; } // 80096DC4
  c->r[3]=0u+0x00000000u; // 80096DC8
  goto L_8009708C; // 80096DCC
L_80096DD0:;
  c->r[29]=rotl(c->r[21],2)&0xFFFFFFFCu; // 80096DD0
  c->r[3]=c->r[13]+0xFFFFA4B8u; // 80096DD4
  c->r[27]=R32(c->r[3]+c->r[29]); // 80096DD8
  c->r[30]=0u+0x43300000u; // 80096DDC
  W32(c->r[1]+0x00000050u,c->r[30]); // 80096DE0
  c->r[26]=0u+0x00000000u; // 80096DE4
  c->r[0]=c->r[27]^0x80000000u; // 80096DE8
  {uint32_t ea=c->r[2]+0xFFFF92D8u; c->f[31]=RF64(ea);} // 80096DEC
  W32(c->r[1]+0x00000054u,c->r[0]); // 80096DF0
  c->r[28]=0u+0x00000000u; // 80096DF4
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096DF8
  c->r[22]=0u+0x00000000u; // 80096DFC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=RF64(ea);} // 80096E00
  c->r[31]=c->r[13]+0xFFFFA4C0u; // 80096E04
  {uint32_t ea=c->r[25]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 80096E08
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80096E0C
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[27]=c->ps1[27]=RF32(ea);} // 80096E10
  c->f[28]=c->ps1[28]=S(c->f[0]/c->f[1]); // 80096E14
  goto L_80097068; // 80096E18
L_80096E1C:;
  c->r[5]=R32(c->r[31]+c->r[29]); // 80096E1C
  c->r[3]=c->r[24]+0x00000010u; // 80096E20
  c->r[4]=c->r[1]+0x00000014u; // 80096E24
  {uint32_t ea=c->r[5]+c->r[22]; c->f[1]=c->ps1[1]=RF32(ea);} // 80096E28
  c->lr=0x80096E30u; f_8016482C(c); // 80096E2C
  c->r[0]=R32(c->r[31]+c->r[29]); // 80096E30
  c->r[3]=c->r[24]+0x00000020u; // 80096E34
  c->r[4]=c->r[1]+0x00000038u; // 80096E38
  c->r[5]=c->r[0]+c->r[22]; // 80096E3C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096E40
  c->lr=0x80096E48u; f_8016482C(c); // 80096E44
  c->r[0]=R32(c->r[31]+c->r[29]); // 80096E48
  c->r[3]=c->r[24]+0x00000030u; // 80096E4C
  c->r[4]=c->r[1]+0x0000002Cu; // 80096E50
  c->r[5]=c->r[0]+c->r[22]; // 80096E54
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096E58
  c->lr=0x80096E60u; f_8016482C(c); // 80096E5C
  c->r[0]=R32(c->r[31]+c->r[29]); // 80096E60
  c->r[3]=c->r[24]+0x00000040u; // 80096E64
  c->r[4]=c->r[1]+0x00000020u; // 80096E68
  c->r[5]=c->r[0]+c->r[22]; // 80096E6C
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80096E70
  c->lr=0x80096E78u; f_8016482C(c); // 80096E74
  c->r[3]=c->r[1]+0x00000014u; // 80096E78
  c->r[4]=c->r[1]+0x00000038u; // 80096E7C
  c->r[5]=c->r[3]|c->r[3]; // 80096E80
  c->lr=0x80096E88u; f_801647E4(c); // 80096E84
  c->r[3]=c->r[1]+0x00000014u; // 80096E88
  c->r[4]=c->r[1]+0x0000002Cu; // 80096E8C
  c->r[5]=c->r[3]|c->r[3]; // 80096E90
  c->lr=0x80096E98u; f_801647E4(c); // 80096E94
  c->r[3]=c->r[1]+0x00000014u; // 80096E98
  c->r[4]=c->r[1]+0x00000020u; // 80096E9C
  c->r[5]=c->r[3]|c->r[3]; // 80096EA0
  c->lr=0x80096EA8u; f_801647E4(c); // 80096EA4
  c->r[0]=c->r[28]+0x00000001u; // 80096EA8
  c->r[4]=R32(c->r[31]+c->r[29]); // 80096EAC
  c->r[21]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80096EB0
  c->r[3]=c->r[24]+0x00000010u; // 80096EB4
  {uint32_t ea=c->r[4]+c->r[21]; c->f[1]=c->ps1[1]=RF32(ea);} // 80096EB8
  c->r[4]=c->r[1]+0x00000008u; // 80096EBC
  c->lr=0x80096EC4u; f_8016482C(c); // 80096EC0
  c->r[0]=R32(c->r[31]+c->r[29]); // 80096EC4
  c->r[3]=c->r[24]+0x00000020u; // 80096EC8
  c->r[4]=c->r[1]+0x00000038u; // 80096ECC
  c->r[5]=c->r[0]+c->r[21]; // 80096ED0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096ED4
  c->lr=0x80096EDCu; f_8016482C(c); // 80096ED8
  c->r[0]=R32(c->r[31]+c->r[29]); // 80096EDC
  c->r[3]=c->r[24]+0x00000030u; // 80096EE0
  c->r[4]=c->r[1]+0x0000002Cu; // 80096EE4
  c->r[5]=c->r[0]+c->r[21]; // 80096EE8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096EEC
  c->lr=0x80096EF4u; f_8016482C(c); // 80096EF0
  c->r[0]=R32(c->r[31]+c->r[29]); // 80096EF4
  c->r[3]=c->r[24]+0x00000040u; // 80096EF8
  c->r[4]=c->r[1]+0x00000020u; // 80096EFC
  c->r[5]=c->r[0]+c->r[21]; // 80096F00
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80096F04
  c->lr=0x80096F0Cu; f_8016482C(c); // 80096F08
  c->r[3]=c->r[1]+0x00000008u; // 80096F0C
  c->r[4]=c->r[1]+0x00000038u; // 80096F10
  c->r[5]=c->r[3]|c->r[3]; // 80096F14
  c->lr=0x80096F1Cu; f_801647E4(c); // 80096F18
  c->r[3]=c->r[1]+0x00000008u; // 80096F1C
  c->r[4]=c->r[1]+0x0000002Cu; // 80096F20
  c->r[5]=c->r[3]|c->r[3]; // 80096F24
  c->lr=0x80096F2Cu; f_801647E4(c); // 80096F28
  c->r[3]=c->r[1]+0x00000008u; // 80096F2C
  c->r[4]=c->r[1]+0x00000020u; // 80096F30
  c->r[5]=c->r[3]|c->r[3]; // 80096F34
  c->lr=0x80096F3Cu; f_801647E4(c); // 80096F38
  c->r[3]=c->r[1]+0x00000008u; // 80096F3C
  c->r[4]=c->r[1]+0x00000014u; // 80096F40
  c->r[5]=c->r[1]+0x00000044u; // 80096F44
  c->lr=0x80096F4Cu; f_80164808(c); // 80096F48
  c->r[0]=R32(c->r[31]+c->r[29]); // 80096F4C
  c->r[3]=c->r[23]|c->r[23]; // 80096F50
  c->r[5]=c->r[1]+0x00000038u; // 80096F54
  c->r[4]=c->r[0]+c->r[22]; // 80096F58
  c->lr=0x80096F60u; f_80164808(c); // 80096F5C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80096F60
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 80096F64
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80096F68
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[2]); // 80096F6C
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[3]); // 80096F70
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80096F74
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[2]); // 80096F78
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80096F7C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 80096F80
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[2]); // 80096F84
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80096F88
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[6]); // 80096F8C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[7]);} // 80096F90
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80096F94
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[3]); // 80096F98
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[6]);} // 80096F9C
  c->f[7]=c->ps1[7]=S(c->f[5]+c->f[1]); // 80096FA0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[5]);} // 80096FA4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 80096FA8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 80096FAC
  fcmp(c,0,c->f[1],c->f[27]); // 80096FB0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 80096FB4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 80096FB8
  if (!crb(c,0)) { goto L_80096FC4; } // 80096FBC
  c->f[1]=c->f[27]; // 80096FC0
L_80096FC4:;
  fcmp(c,0,c->f[1],c->f[7]); // 80096FC4
  if (!crb(c,1)) { goto L_80096FD0; } // 80096FC8
  c->f[1]=c->f[7]; // 80096FCC
L_80096FD0:;
  c->f[26]=c->ps1[26]=S(c->f[1]/c->f[7]); // 80096FD0
  c->r[3]=c->r[1]+0x00000044u; // 80096FD4
  c->r[4]=c->r[1]+0x0000002Cu; // 80096FD8
  c->lr=0x80096FE0u; f_8016482C(c); // 80096FDC
  c->r[4]=c->r[23]|c->r[23]; // 80096FE0
  c->r[3]=c->r[1]+0x00000014u; // 80096FE4
  c->r[5]=c->r[1]+0x00000020u; // 80096FE8
  c->lr=0x80096FF0u; f_80164808(c); // 80096FEC
  c->r[3]=c->r[1]+0x0000002Cu; // 80096FF0
  c->r[4]=c->r[1]+0x00000020u; // 80096FF4
  c->r[5]=c->r[3]|c->r[3]; // 80096FF8
  c->lr=0x80097000u; f_801647E4(c); // 80096FFC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80097000
  fcmp(c,0,c->f[30],c->f[27]); // 80097004
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097008
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[0]); // 8009700C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097010
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 80097014
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 80097018
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 8009701C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[2]); // 80097020
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 80097024
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80097028
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 8009702C
  if (crb(c,0)) { goto L_8009703C; } // 80097030
  fcmp(c,0,c->f[0],c->f[30]); // 80097034
  if (!crb(c,0)) { goto L_80097060; } // 80097038
L_8009703C:;
  c->r[0]=c->r[28]^0x80000000u; // 8009703C
  W32(c->r[1]+0x00000050u,c->r[30]); // 80097040
  c->f[30]=c->f[0]; // 80097044
  c->r[26]=0u+0x00000001u; // 80097048
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009704C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 80097050
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80097054
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[26]); // 80097058
  c->f[29]=c->ps1[29]=S(c->f[28]*c->f[0]); // 8009705C
L_80097060:;
  c->r[22]=c->r[22]+0x00000010u; // 80097060
  c->r[28]=c->r[28]+0x00000001u; // 80097064
L_80097068:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 80097068
  if (crb(c,0)) { IRQCHK(c); goto L_80096E1C; } // 8009706C
  cmps(c,0,(int32_t)c->r[26],0); // 80097070
  if (!crb(c,2)) { goto L_80097080; } // 80097074
  c->r[3]=0u+0x00000000u; // 80097078
  goto L_8009708C; // 8009707C
L_80097080:;
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[30]);} // 80097080
  c->r[3]=0u+0x00000001u; // 80097084
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[29]);} // 80097088
L_8009708C:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 8009708C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 80097090
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 80097094
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 80097098
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 8009709C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 800970A0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 800970A4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 800970A8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,27,ea,0,0);} // 800970AC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[27]=RF64(ea);} // 800970B0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,26,ea,0,0);} // 800970B4
  c->r[11]=c->r[1]+0x00000090u; // 800970B8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[26]=RF64(ea);} // 800970BC
  c->lr=0x800970C4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800970C0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800970C4
  c->lr=c->r[0]; // 800970C8
  c->r[1]=c->r[1]+0x000000F0u; // 800970CC
  return; // 800970D0
}

// fn_800970D4
void f_800970D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800970D4
  c->r[0]=c->lr; // 800970D8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800970DC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800970E0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800970E4
  c->r[11]=c->r[1]+0x000000A0u; // 800970E8
  c->lr=0x800970F0u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800970EC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800970F0
  c->r[8]=c->r[13]+0xFFFF8A50u; // 800970F4
  c->r[8]=R32(c->r[8]+c->r[0]); // 800970F8
  cmps(c,0,(int32_t)c->r[7],0); // 800970FC
  c->r[20]=c->r[4]|c->r[4]; // 80097100
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[31]=c->ps1[31]=RF32(ea);} // 80097104
  c->r[8]=R32(c->r[8]+0x00000000u); // 80097108
  c->r[21]=c->r[5]|c->r[5]; // 8009710C
  c->r[22]=c->r[6]|c->r[6]; // 80097110
  c->r[23]=0u+0x00000000u; // 80097114
  c->r[4]=R32(c->r[8]+0x00000004u); // 80097118
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 8009711C
  c->r[4]=c->r[8]+c->r[4]; // 80097120
  c->r[31]=c->r[8]+c->r[0]; // 80097124
  if (!crb(c,0)) { goto L_80097138; } // 80097128
  c->r[25]=R32(c->r[8]+0x00000008u); // 8009712C
  c->r[26]=0u+0x00000000u; // 80097130
  goto L_80097140; // 80097134
L_80097138:;
  c->r[26]=c->r[7]|c->r[7]; // 80097138
  c->r[25]=c->r[7]+0x00000001u; // 8009713C
L_80097140:;
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80097140
  c->r[29]=rotl(c->r[3],8)&0xFFFFFF00u; // 80097144
  c->r[30]=c->r[4]+c->r[0]; // 80097148
  goto L_80097254; // 8009714C
L_80097150:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 80097150
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 80097154
  c->r[27]=c->r[29]+c->r[0]; // 80097158
  c->r[24]=0u+0x00000000u; // 8009715C
  c->r[28]=0u+0x00000000u; // 80097160
  goto L_8009723C; // 80097164
L_80097168:;
  c->r[5]=R16(c->r[30]+0x00000000u); // 80097168
  c->r[7]=c->r[28]+c->r[31]; // 8009716C
  c->r[4]=R32(c->r[20]+0x00000000u); // 80097170
  c->r[3]=c->r[1]+0x0000003Cu; // 80097174
  c->r[0]=R32(c->r[20]+0x00000004u); // 80097178
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 8009717C
  c->r[5]=c->r[1]+0x00000008u; // 80097180
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 80097184
  c->r[6]=0u+0x00000001u; // 80097188
  c->r[19]=c->r[8]+c->r[7]; // 8009718C
  W32(c->r[1]+0x00000040u,c->r[0]); // 80097190
  c->r[4]=c->r[19]|c->r[19]; // 80097194
  c->r[0]=R32(c->r[20]+0x00000008u); // 80097198
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009719C
  c->lr=0x800971A4u; f_80096B68(c); // 800971A0
  cmps(c,0,(int32_t)c->r[3],0); // 800971A4
  if (crb(c,2)) { goto L_80097234; } // 800971A8
  cmps(c,0,(int32_t)c->r[23],0); // 800971AC
  if (crb(c,2)) { goto L_8009721C; } // 800971B0
  c->r[4]=R32(c->r[21]+0x00000000u); // 800971B4
  c->r[3]=c->r[1]+0x00000048u; // 800971B8
  {uint32_t ea=c->r[21]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800971BC
  c->lr=0x800971C4u; f_80096018(c); // 800971C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800971C4
  c->r[4]=c->r[19]|c->r[19]; // 800971C8
  c->r[3]=c->r[1]+0x00000054u; // 800971CC
  c->lr=0x800971D4u; f_80096018(c); // 800971D0
  c->r[4]=c->r[20]|c->r[20]; // 800971D4
  c->r[3]=c->r[1]+0x00000048u; // 800971D8
  c->r[5]=c->r[1]+0x00000024u; // 800971DC
  c->lr=0x800971E4u; f_80164808(c); // 800971E0
  c->r[3]=c->r[1]+0x00000024u; // 800971E4
  c->lr=0x800971ECu; f_801648A4(c); // 800971E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800971EC
  c->r[4]=c->r[20]|c->r[20]; // 800971F0
  c->r[3]=c->r[1]+0x00000054u; // 800971F4
  c->r[5]=c->r[1]+0x00000018u; // 800971F8
  c->lr=0x80097200u; f_80164808(c); // 800971FC
  c->r[3]=c->r[1]+0x00000018u; // 80097200
  c->lr=0x80097208u; f_801648A4(c); // 80097204
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80097208
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009720C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80097210
  fcmp(c,0,c->f[2],c->f[0]); // 80097214
  if (crb(c,0)) { goto L_80097234; } // 80097218
L_8009721C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009721C
  c->r[23]=c->r[23]+0x00000001u; // 80097220
  {uint32_t ea=c->r[21]+0x00000008u; WF32(ea,c->f[0]);} // 80097224
  W16(c->r[21]+0x00000004u,c->r[27]); // 80097228
  W16(c->r[21]+0x00000006u,c->r[24]); // 8009722C
  W32(c->r[21]+0x00000000u,c->r[19]); // 80097230
L_80097234:;
  c->r[28]=c->r[28]+0x00000030u; // 80097234
  c->r[24]=c->r[24]+0x00000001u; // 80097238
L_8009723C:;
  c->r[3]=R16(c->r[30]+0x00000002u); // 8009723C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80097240
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 80097244
  if (crb(c,0)) { IRQCHK(c); goto L_80097168; } // 80097248
  c->r[30]=c->r[30]+0x00000004u; // 8009724C
  c->r[26]=c->r[26]+0x00000001u; // 80097250
L_80097254:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[25]); // 80097254
  if (crb(c,0)) { IRQCHK(c); goto L_80097150; } // 80097258
  cmps(c,0,(int32_t)c->r[23],0); // 8009725C
  if (!crb(c,2)) { goto L_8009726C; } // 80097260
  c->r[3]=0u+0x00000000u; // 80097264
  goto L_800972B8; // 80097268
L_8009726C:;
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009726C
  c->r[3]=c->r[1]+0x00000030u; // 80097270
  c->r[5]=c->r[1]+0x00000008u; // 80097274
  c->r[6]=0u+0x00000000u; // 80097278
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8009727C
  c->r[4]=R32(c->r[20]+0x00000000u); // 80097280
  c->r[0]=R32(c->r[20]+0x00000004u); // 80097284
  W32(c->r[1]+0x00000030u,c->r[4]); // 80097288
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009728C
  c->r[0]=R32(c->r[20]+0x00000008u); // 80097290
  W32(c->r[1]+0x00000038u,c->r[0]); // 80097294
  c->r[4]=R32(c->r[21]+0x00000000u); // 80097298
  c->lr=0x800972A0u; f_80096B68(c); // 8009729C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800972A0
  c->r[3]=c->r[22]|c->r[22]; // 800972A4
  c->r[4]=R32(c->r[21]+0x00000000u); // 800972A8
  {uint32_t ea=c->r[21]+0x00000008u; WF32(ea,c->f[1]);} // 800972AC
  c->lr=0x800972B4u; f_80096018(c); // 800972B0
  c->r[3]=0u+0x00000001u; // 800972B4
L_800972B8:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800972B8
  c->r[11]=c->r[1]+0x000000A0u; // 800972BC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800972C0
  c->lr=0x800972C8u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800972C4
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800972C8
  c->lr=c->r[0]; // 800972CC
  c->r[1]=c->r[1]+0x000000B0u; // 800972D0
  return; // 800972D4
}

// fn_800972D8
void f_800972D8(Ctx* __restrict c) {
  c->r[6]=0u+0x00000001u; // 800972D8
  c->r[0]=0u+0x00000000u; // 800972DC
  W32(c->r[3]+0x00000000u,c->r[6]); // 800972E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800972E4
  W32(c->r[3]+0x00000008u,c->r[4]); // 800972E8
  W32(c->r[3]+0x00000014u,c->r[5]); // 800972EC
  return; // 800972F0
}

// fn_800972F4
void f_800972F4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800972F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800972F8
  return; // 800972FC
}

// fn_80097300
void f_80097300(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 80097300
  W32(c->r[3]+0x00000000u,c->r[0]); // 80097304
  c->r[0]=R32(c->r[4]+0x00000008u); // 80097308
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009730C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80097310
  W32(c->r[3]+0x00000004u,c->r[0]); // 80097314
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80097318
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8009731C
  c->r[0]=R32(c->r[4]+0x00000010u); // 80097320
  W32(c->r[3]+0x00000010u,c->r[0]); // 80097324
  c->r[0]=R32(c->r[4]+0x00000014u); // 80097328
  W32(c->r[3]+0x00000014u,c->r[0]); // 8009732C
  return; // 80097330
}

// fn_80097334
void f_80097334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80097334
  c->r[0]=c->lr; // 80097338
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009733C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 80097340
  c->r[31]=0u+0x00000001u; // 80097344
  W32(c->r[1]+0x00000048u,c->r[30]); // 80097348
  W32(c->r[1]+0x00000044u,c->r[29]); // 8009734C
  c->r[30]=R32(c->r[3]+0x00000008u); // 80097350
  c->r[5]=R16(c->r[30]+0x00000000u); // 80097354
  c->r[4]=R16(c->r[30]+0x00000002u); // 80097358
  c->r[0]=rotl(c->r[5],0)&0x0000F000u; // 8009735C
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80097360
  c->r[4]=c->r[30]+c->r[4]; // 80097364
  cmps(c,0,(int32_t)c->r[0],4096); // 80097368
  W32(c->r[3]+0x00000008u,c->r[4]); // 8009736C
  if (!crb(c,2)) { goto L_8009737C; } // 80097370
  c->r[3]=0u+0x00000001u; // 80097374
  goto L_800974E0; // 80097378
L_8009737C:;
  cmpu(c,0,c->r[5],0x00000006u); // 8009737C
  if (crb(c,1)) { goto L_800974DC; } // 80097380
  c->r[4]=0u+0x802C0000u; // 80097384
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80097388
  c->r[4]=c->r[4]+0xFFFFCB50u; // 8009738C
  c->r[4]=R32(c->r[4]+c->r[0]); // 80097390
  c->ctr=c->r[4]; // 80097394
  if (true) { switch (c->ctr) { case 0x8009739Cu: goto L_8009739C; case 0x800973ACu: goto L_800973AC; case 0x80097440u: goto L_80097440; case 0x80097474u: goto L_80097474; case 0x80097484u: goto L_80097484; case 0x800974D0u: goto L_800974D0; case 0x800974DCu: goto L_800974DC; default: break; } dispatch(c,c->ctr); return; } // 80097398
L_8009739C:;
  c->r[0]=0u+0x00000000u; // 8009739C
  c->r[31]=0u+0x00000000u; // 800973A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800973A4
  goto L_800974DC; // 800973A8
L_800973AC:;
  c->r[4]=R16(c->r[30]+0x00000004u); // 800973AC
  c->r[0]=rotl(c->r[4],0)&0x00007FFFu; // 800973B0
  c->r[6]=rotl(c->r[4],17)&0x00000001u; // 800973B4
  cmps(c,0,(int32_t)c->r[0],1); // 800973B8
  if (crb(c,2)) { goto L_800973E8; } // 800973BC
  if (!crb(c,0)) { goto L_8009741C; } // 800973C0
  cmps(c,0,(int32_t)c->r[0],0); // 800973C4
  if (!crb(c,0)) { goto L_800973D0; } // 800973C8
  goto L_8009741C; // 800973CC
L_800973D0:;
  c->r[4]=R16(c->r[30]+0x00000006u); // 800973D0
  c->r[0]=0u-c->r[4]; // 800973D4
  c->r[0]=c->r[0]|c->r[4]; // 800973D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800973DC
  c->r[0]=c->r[0]^c->r[6]; // 800973E0
  goto L_80097420; // 800973E4
L_800973E8:;
  c->r[5]=R16(c->r[30]+0x00000006u); // 800973E8
  c->r[4]=0u+0x80370000u; // 800973EC
  c->r[4]=c->r[4]+0x00004098u; // 800973F0
  c->r[0]=rotl(c->r[5],26)&0x000003FEu; // 800973F4
  c->r[5]=rotl(c->r[5],0)&0x0000007Fu; // 800973F8
  c->r[0]=R16(c->r[4]+c->r[0]); // 800973FC
  c->r[0]=c->r[5]^c->r[0]; // 80097400
  c->r[4]=sraw(c,c->r[0],1); // 80097404
  c->r[0]=c->r[0]&c->r[5]; // 80097408
  c->r[0]=c->r[4]-c->r[0]; // 8009740C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80097410
  c->r[0]=c->r[6]^c->r[0]; // 80097414
  goto L_80097420; // 80097418
L_8009741C:;
  c->r[0]=c->r[6]^0x00000001u; // 8009741C
L_80097420:;
  cmps(c,0,(int32_t)c->r[0],0); // 80097420
  if (!crb(c,2)) { goto L_800974DC; } // 80097424
  c->r[4]=R32(c->r[3]+0x00000008u); // 80097428
  c->r[0]=R16(c->r[4]+0x00000002u); // 8009742C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80097430
  c->r[0]=c->r[4]+c->r[0]; // 80097434
  W32(c->r[3]+0x00000008u,c->r[0]); // 80097438
  goto L_800974DC; // 8009743C
L_80097440:;
  c->r[3]=0u+0x00000000u; // 80097440
  c->lr=0x80097448u; f_80076078(c); // 80097444
  c->r[29]=c->r[3]|c->r[3]; // 80097448
  c->r[3]=c->r[1]+0x00000008u; // 8009744C
  c->r[4]=0u+0x00000000u; // 80097450
  c->r[5]=0u+0x0000002Cu; // 80097454
  c->lr=0x8009745Cu; f_8000443C(c); // 80097458
  c->r[0]=R16(c->r[30]+0x00000004u); // 8009745C
  c->r[3]=c->r[29]|c->r[29]; // 80097460
  c->r[4]=c->r[1]+0x00000008u; // 80097464
  W32(c->r[1]+0x00000028u,c->r[0]); // 80097468
  c->lr=0x80097470u; f_80074898(c); // 8009746C
  goto L_800974DC; // 80097470
L_80097474:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 80097474
  c->r[31]=0u+0x00000000u; // 80097478
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009747C
  goto L_800974DC; // 80097480
L_80097484:;
  c->r[3]=R32(c->r[3]+0x00000014u); // 80097484
  cmps(c,0,(int32_t)c->r[3],0); // 80097488
  if (crb(c,2)) { goto L_800974DC; } // 8009748C
  c->r[4]=R16(c->r[30]+0x00000004u); // 80097490
  c->r[0]=0u+0x43300000u; // 80097494
  W32(c->r[1]+0x00000038u,c->r[0]); // 80097498
  {uint32_t ea=c->r[2]+0xFFFF9308u; c->f[1]=RF64(ea);} // 8009749C
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800974A0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800974A4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800974A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800974AC
  fcmp(c,0,c->f[2],c->f[0]); // 800974B0
  if (!crb(c,0)) { goto L_800974DC; } // 800974B4
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800974B8
  W32(c->r[1]+0x00000038u,c->r[0]); // 800974BC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800974C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800974C4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800974C8
  goto L_800974DC; // 800974CC
L_800974D0:;
  c->lr=0x800974D4u; f_8007AB30(c); // 800974D0
  c->r[4]=R16(c->r[30]+0x00000004u); // 800974D4
  c->lr=0x800974DCu; f_8007A860(c); // 800974D8
L_800974DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800974DC
L_800974E0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800974E0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800974E4
  c->r[30]=R32(c->r[1]+0x00000048u); // 800974E8
  c->r[29]=R32(c->r[1]+0x00000044u); // 800974EC
  c->lr=c->r[0]; // 800974F0
  c->r[1]=c->r[1]+0x00000050u; // 800974F4
  return; // 800974F8
}

// fn_800974FC
void f_800974FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800974FC
  c->r[0]=c->lr; // 80097500
  W32(c->r[1]+0x00000014u,c->r[0]); // 80097504
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80097508
  c->r[31]=c->r[3]|c->r[3]; // 8009750C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80097510
  cmps(c,0,(int32_t)c->r[0],0); // 80097514
  if (crb(c,2)) { goto L_80097530; } // 80097518
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8009751C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80097520
  if (crb(c,2)) { goto L_80097530; } // 80097524
  c->r[3]=0u+0x00000001u; // 80097528
  goto L_80097550; // 8009752C
L_80097530:;
  c->r[3]=c->r[31]|c->r[31]; // 80097530
  c->lr=0x80097538u; f_80097334(c); // 80097534
  cmps(c,0,(int32_t)c->r[3],0); // 80097538
  if (!crb(c,2)) { IRQCHK(c); goto L_80097530; } // 8009753C
  c->r[3]=R32(c->r[31]+0x00000000u); // 80097540
  c->r[0]=0u-c->r[3]; // 80097544
  c->r[0]=c->r[0]|c->r[3]; // 80097548
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8009754C
L_80097550:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80097550
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80097554
  c->lr=c->r[0]; // 80097558
  c->r[1]=c->r[1]+0x00000010u; // 8009755C
  return; // 80097560
}

// fn_80097564
void f_80097564(Ctx* __restrict c) {
  c->r[4]=R16(c->r[3]+0x00000000u); // 80097564
  c->r[0]=rotl(c->r[4],0)&0x00007FFFu; // 80097568
  c->r[5]=rotl(c->r[4],17)&0x00000001u; // 8009756C
  cmps(c,0,(int32_t)c->r[0],1); // 80097570
  if (crb(c,2)) { goto L_800975A0; } // 80097574
  if (!crb(c,0)) { goto L_800975D4; } // 80097578
  cmps(c,0,(int32_t)c->r[0],0); // 8009757C
  if (!crb(c,0)) { goto L_80097588; } // 80097580
  goto L_800975D4; // 80097584
L_80097588:;
  c->r[3]=R16(c->r[3]+0x00000002u); // 80097588
  c->r[0]=0u-c->r[3]; // 8009758C
  c->r[0]=c->r[0]|c->r[3]; // 80097590
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80097594
  c->r[3]=c->r[0]^c->r[5]; // 80097598
  return; // 8009759C
L_800975A0:;
  c->r[4]=R16(c->r[3]+0x00000002u); // 800975A0
  c->r[3]=0u+0x80370000u; // 800975A4
  c->r[3]=c->r[3]+0x00004098u; // 800975A8
  c->r[0]=rotl(c->r[4],26)&0x000003FEu; // 800975AC
  c->r[4]=rotl(c->r[4],0)&0x0000007Fu; // 800975B0
  c->r[0]=R16(c->r[3]+c->r[0]); // 800975B4
  c->r[0]=c->r[4]^c->r[0]; // 800975B8
  c->r[3]=sraw(c,c->r[0],1); // 800975BC
  c->r[0]=c->r[0]&c->r[4]; // 800975C0
  c->r[0]=c->r[3]-c->r[0]; // 800975C4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800975C8
  c->r[3]=c->r[5]^c->r[0]; // 800975CC
  return; // 800975D0
L_800975D4:;
  c->r[3]=c->r[5]^0x00000001u; // 800975D4
  return; // 800975D8
}

// fn_800975DC
void f_800975DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800975DC
  c->r[0]=c->lr; // 800975E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800975E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800975E8
  c->r[31]=c->r[13]+0xFFFFA098u; // 800975EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800975F0
  c->r[30]=0u+0x00000000u; // 800975F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800975F8
  c->r[29]=0u+0x80370000u; // 800975FC
  c->r[29]=c->r[29]+0x00004098u; // 80097600
L_80097604:;
  c->r[3]=c->r[31]|c->r[31]; // 80097604
  c->lr=0x8009760Cu; f_800E49EC(c); // 80097608
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8009760C
  c->r[30]=c->r[30]+0x00000001u; // 80097610
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80097614
  cmpu(c,0,c->r[30],0x00000200u); // 80097618
  c->r[0]=rotl(c->r[0],24)&0x0000FFFFu; // 8009761C
  W16(c->r[29]+0x00000000u,c->r[0]); // 80097620
  c->r[29]=c->r[29]+0x00000002u; // 80097624
  if (crb(c,0)) { IRQCHK(c); goto L_80097604; } // 80097628
  c->r[4]=0u+0x80370000u; // 8009762C
  c->r[0]=0u+0x00000000u; // 80097630
  c->r[3]=c->r[4]+0x00004498u; // 80097634
  W32(c->r[4]+0x00004498u,c->r[0]); // 80097638
  W32(c->r[3]+0x00000018u,c->r[0]); // 8009763C
  W32(c->r[3]+0x00000030u,c->r[0]); // 80097640
  W32(c->r[3]+0x00000048u,c->r[0]); // 80097644
  W32(c->r[3]+0x00000060u,c->r[0]); // 80097648
  W32(c->r[3]+0x00000078u,c->r[0]); // 8009764C
  W32(c->r[3]+0x00000090u,c->r[0]); // 80097650
  W32(c->r[3]+0x000000A8u,c->r[0]); // 80097654
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80097658
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009765C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80097660
  c->r[0]=R32(c->r[1]+0x00000024u); // 80097664
  c->lr=c->r[0]; // 80097668
  c->r[1]=c->r[1]+0x00000020u; // 8009766C
  return; // 80097670
}

// fn_80097674
void f_80097674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80097674
  c->r[0]=c->lr; // 80097678
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009767C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80097680
  c->r[31]=0u+0x80370000u; // 80097684
  c->r[31]=c->r[31]+0x00004498u; // 80097688
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009768C
  c->r[30]=0u+0x00000000u; // 80097690
L_80097694:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80097694
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097698
  if (crb(c,2)) { goto L_800976C8; } // 8009769C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800976A0
  cmps(c,0,(int32_t)c->r[0],0); // 800976A4
  if (crb(c,2)) { goto L_800976B8; } // 800976A8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800976AC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800976B0
  if (!crb(c,2)) { goto L_800976C8; } // 800976B4
L_800976B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800976B8
  c->lr=0x800976C0u; f_80097334(c); // 800976BC
  cmps(c,0,(int32_t)c->r[3],0); // 800976C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800976B8; } // 800976C4
L_800976C8:;
  c->r[30]=c->r[30]+0x00000001u; // 800976C8
  c->r[31]=c->r[31]+0x00000018u; // 800976CC
  cmps(c,0,(int32_t)c->r[30],8); // 800976D0
  if (crb(c,0)) { IRQCHK(c); goto L_80097694; } // 800976D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800976D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800976DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800976E0
  c->lr=c->r[0]; // 800976E4
  c->r[1]=c->r[1]+0x00000010u; // 800976E8
  return; // 800976EC
}

// fn_800976F0
void f_800976F0(Ctx* __restrict c) {
  c->r[3]=0u+0x80370000u; // 800976F0
  c->r[4]=0u+0x00000000u; // 800976F4
  c->r[3]=c->r[3]+0x00004498u; // 800976F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800976FC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097700
  if (crb(c,2)) { goto L_8009777C; } // 80097704
  c->r[0]=R32(c->r[3]+0x00000018u); // 80097708
  c->r[4]=0u+0x00000001u; // 8009770C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097710
  if (crb(c,2)) { goto L_8009777C; } // 80097714
  c->r[0]=R32(c->r[3]+0x00000030u); // 80097718
  c->r[4]=0u+0x00000002u; // 8009771C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097720
  if (crb(c,2)) { goto L_8009777C; } // 80097724
  c->r[0]=R32(c->r[3]+0x00000048u); // 80097728
  c->r[4]=0u+0x00000003u; // 8009772C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097730
  if (crb(c,2)) { goto L_8009777C; } // 80097734
  c->r[0]=R32(c->r[3]+0x00000060u); // 80097738
  c->r[4]=0u+0x00000004u; // 8009773C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097740
  if (crb(c,2)) { goto L_8009777C; } // 80097744
  c->r[0]=R32(c->r[3]+0x00000078u); // 80097748
  c->r[4]=0u+0x00000005u; // 8009774C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097750
  if (crb(c,2)) { goto L_8009777C; } // 80097754
  c->r[0]=R32(c->r[3]+0x00000090u); // 80097758
  c->r[4]=0u+0x00000006u; // 8009775C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097760
  if (crb(c,2)) { goto L_8009777C; } // 80097764
  c->r[0]=R32(c->r[3]+0x000000A8u); // 80097768
  c->r[4]=0u+0x00000007u; // 8009776C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80097770
  if (crb(c,2)) { goto L_8009777C; } // 80097774
  c->r[4]=0u+0x00000008u; // 80097778
L_8009777C:;
  cmps(c,0,(int32_t)c->r[4],8); // 8009777C
  if (crb(c,0)) { goto L_8009778C; } // 80097780
  c->r[3]=0u+0x00000000u; // 80097784
  return; // 80097788
L_8009778C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8009778C
  c->r[3]=0u+0x80370000u; // 80097790
  c->r[3]=c->r[3]+0x00004498u; // 80097794
  c->r[3]=c->r[3]+c->r[0]; // 80097798
  return; // 8009779C
}

// fn_800977A0
void f_800977A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800977A0
  c->r[0]=c->lr; // 800977A4
  c->r[3]=0u+0x00000000u; // 800977A8
  c->r[5]=0u+0x00000003u; // 800977AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800977B0
  c->r[0]=0u+0x00000002u; // 800977B4
  c->r[4]=0u+0x00000000u; // 800977B8
  W32(c->r[13]+0xFFFF8A58u,c->r[3]); // 800977BC
  c->r[3]=0u+0x00000000u; // 800977C0
  W32(c->r[13]+0xFFFF8A5Cu,c->r[5]); // 800977C4
  W32(c->r[13]+0xFFFF8A60u,c->r[0]); // 800977C8
  c->lr=0x800977D0u; f_800E53FC(c); // 800977CC
  c->r[3]=R32(c->r[13]+0xFFFF8A5Cu); // 800977D0
  c->r[4]=0u+0x00000000u; // 800977D4
  c->lr=0x800977DCu; f_800E54B4(c); // 800977D8
  c->r[3]=R32(c->r[13]+0xFFFF8A60u); // 800977DC
  c->r[4]=0u+0x00000000u; // 800977E0
  c->lr=0x800977E8u; f_800E5568(c); // 800977E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800977E8
  c->lr=c->r[0]; // 800977EC
  c->r[1]=c->r[1]+0x00000010u; // 800977F0
  return; // 800977F4
}

// fn_800977F8
void f_800977F8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFF8A58u); // 800977F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800977FC
  if (crb(c,2)) return; // 80097800
  W32(c->r[13]+0xFFFF8A58u,c->r[3]); // 80097804
  c->r[4]=0u+0x00000000u; // 80097808
  f_800E53FC(c); return; // 8009780C
  return; // 80097810
}

// fn_80097814
void f_80097814(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFF8A5Cu); // 80097814
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80097818
  if (crb(c,2)) return; // 8009781C
  W32(c->r[13]+0xFFFF8A5Cu,c->r[3]); // 80097820
  c->r[4]=0u+0x00000000u; // 80097824
  f_800E54B4(c); return; // 80097828
  return; // 8009782C
}

// fn_80097830
void f_80097830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80097830
  c->r[0]=c->lr; // 80097834
  W32(c->r[1]+0x00000094u,c->r[0]); // 80097838
  c->r[11]=c->r[1]+0x00000088u; // 8009783C
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[31]);} // 80097840
  c->lr=0x80097848u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80097844
  c->f[31]=c->f[1]; // 80097848
  c->r[19]=c->r[3]|c->r[3]; // 8009784C
  c->r[21]=c->r[5]|c->r[5]; // 80097850
  c->r[20]=c->r[4]|c->r[4]; // 80097854
  c->r[3]=c->r[5]+0x0000000Cu; // 80097858
  c->r[22]=c->r[6]|c->r[6]; // 8009785C
  c->r[23]=c->r[7]|c->r[7]; // 80097860
  c->r[4]=c->r[21]|c->r[21]; // 80097864
  c->r[5]=c->r[1]+0x00000038u; // 80097868
  c->lr=0x80097870u; f_80164808(c); // 8009786C
  c->r[4]=c->r[20]|c->r[20]; // 80097870
  c->r[3]=c->r[1]+0x00000038u; // 80097874
  c->r[5]=c->r[1]+0x0000002Cu; // 80097878
  c->lr=0x80097880u; f_80164908(c); // 8009787C
  c->r[3]=c->r[1]+0x0000002Cu; // 80097880
  c->r[4]=c->r[3]|c->r[3]; // 80097884
  c->lr=0x8009788Cu; f_80164848(c); // 80097888
  c->f[1]=c->f[31]; // 8009788C
  c->r[3]=c->r[1]+0x0000002Cu; // 80097890
  c->r[4]=c->r[3]|c->r[3]; // 80097894
  c->lr=0x8009789Cu; f_8016482C(c); // 80097898
  c->r[3]=c->r[21]|c->r[21]; // 8009789C
  c->r[5]=c->r[22]|c->r[22]; // 800978A0
  c->r[4]=c->r[1]+0x0000002Cu; // 800978A4
  c->lr=0x800978ACu; f_801647E4(c); // 800978A8
  c->r[3]=c->r[21]|c->r[21]; // 800978AC
  c->r[5]=c->r[23]|c->r[23]; // 800978B0
  c->r[4]=c->r[1]+0x0000002Cu; // 800978B4
  c->lr=0x800978BCu; f_80164808(c); // 800978B8
  c->r[30]=c->r[22]+0x0000000Cu; // 800978BC
  c->r[29]=c->r[23]+0x0000000Cu; // 800978C0
  c->r[28]=c->r[30]|c->r[30]; // 800978C4
  c->r[31]=c->r[21]+0x0000000Cu; // 800978C8
  c->r[27]=c->r[29]|c->r[29]; // 800978CC
  c->r[24]=0u+0x00000001u; // 800978D0
  goto L_80097988; // 800978D4
L_800978D8:;
  c->r[0]=c->r[24]+0xFFFFFFFFu; // 800978D8
  c->r[3]=c->r[31]|c->r[31]; // 800978DC
  c->r[26]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800978E0
  c->r[5]=c->r[1]+0x00000038u; // 800978E4
  c->r[4]=c->r[21]+c->r[26]; // 800978E8
  c->lr=0x800978F0u; f_80164808(c); // 800978EC
  c->r[4]=c->r[20]|c->r[20]; // 800978F0
  c->r[3]=c->r[1]+0x00000038u; // 800978F4
  c->r[5]=c->r[1]+0x0000002Cu; // 800978F8
  c->lr=0x80097900u; f_80164908(c); // 800978FC
  c->r[3]=c->r[1]+0x0000002Cu; // 80097900
  c->r[4]=c->r[3]|c->r[3]; // 80097904
  c->lr=0x8009790Cu; f_80164848(c); // 80097908
  c->f[1]=c->f[31]; // 8009790C
  c->r[3]=c->r[1]+0x0000002Cu; // 80097910
  c->r[4]=c->r[3]|c->r[3]; // 80097914
  c->lr=0x8009791Cu; f_8016482C(c); // 80097918
  c->r[3]=c->r[31]|c->r[31]; // 8009791C
  c->r[5]=c->r[30]|c->r[30]; // 80097920
  c->r[4]=c->r[1]+0x0000002Cu; // 80097924
  c->lr=0x8009792Cu; f_801647E4(c); // 80097928
  c->r[3]=c->r[31]|c->r[31]; // 8009792C
  c->r[5]=c->r[29]|c->r[29]; // 80097930
  c->r[4]=c->r[1]+0x0000002Cu; // 80097934
  c->lr=0x8009793Cu; f_80164808(c); // 80097938
  c->r[25]=c->r[23]+c->r[26]; // 8009793C
  c->r[4]=c->r[22]+c->r[26]; // 80097940
  c->r[3]=c->r[25]|c->r[25]; // 80097944
  c->r[5]=c->r[1]+0x00000020u; // 80097948
  c->lr=0x80097950u; f_80164808(c); // 8009794C
  c->r[3]=c->r[28]|c->r[28]; // 80097950
  c->r[4]=c->r[25]|c->r[25]; // 80097954
  c->r[5]=c->r[1]+0x00000014u; // 80097958
  c->lr=0x80097960u; f_80164808(c); // 8009795C
  c->r[3]=c->r[27]|c->r[27]; // 80097960
  c->r[4]=c->r[25]|c->r[25]; // 80097964
  c->r[5]=c->r[1]+0x00000008u; // 80097968
  c->lr=0x80097970u; f_80164808(c); // 8009796C
  c->r[31]=c->r[31]+0x0000000Cu; // 80097970
  c->r[30]=c->r[30]+0x0000000Cu; // 80097974
  c->r[29]=c->r[29]+0x0000000Cu; // 80097978
  c->r[28]=c->r[28]+0x0000000Cu; // 8009797C
  c->r[27]=c->r[27]+0x0000000Cu; // 80097980
  c->r[24]=c->r[24]+0x00000001u; // 80097984
L_80097988:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[19]); // 80097988
  if (crb(c,0)) { IRQCHK(c); goto L_800978D8; } // 8009798C
  c->r[11]=c->r[1]+0x00000088u; // 80097990
  {uint32_t ea=c->r[1]+0x00000088u; c->f[31]=RF64(ea);} // 80097994
  c->lr=0x8009799Cu; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80097998
  c->r[0]=R32(c->r[1]+0x00000094u); // 8009799C
  c->lr=c->r[0]; // 800979A0
  c->r[1]=c->r[1]+0x00000090u; // 800979A4
  return; // 800979A8
}

// fn_800979AC
void f_800979AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800979AC
  c->r[0]=c->lr; // 800979B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800979B4
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 800979B8
  c->f[31]=c->f[1]; // 800979BC
  W32(c->r[1]+0x00000034u,c->r[31]); // 800979C0
  c->r[31]=c->r[6]|c->r[6]; // 800979C4
  W32(c->r[1]+0x00000030u,c->r[30]); // 800979C8
  c->r[30]=c->r[5]|c->r[5]; // 800979CC
  c->r[5]=c->r[1]+0x00000014u; // 800979D0
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800979D4
  c->r[29]=c->r[4]|c->r[4]; // 800979D8
  W32(c->r[1]+0x00000028u,c->r[28]); // 800979DC
  c->r[28]=c->r[3]|c->r[3]; // 800979E0
  c->r[3]=c->r[4]+0x0000000Cu; // 800979E4
  c->lr=0x800979ECu; f_80164808(c); // 800979E8
  c->r[4]=c->r[28]|c->r[28]; // 800979EC
  c->r[3]=c->r[1]+0x00000014u; // 800979F0
  c->r[5]=c->r[1]+0x00000008u; // 800979F4
  c->lr=0x800979FCu; f_80164908(c); // 800979F8
  c->r[3]=c->r[1]+0x00000008u; // 800979FC
  c->r[4]=c->r[3]|c->r[3]; // 80097A00
  c->lr=0x80097A08u; f_80164848(c); // 80097A04
  c->f[1]=c->f[31]; // 80097A08
  c->r[3]=c->r[1]+0x00000008u; // 80097A0C
  c->r[4]=c->r[3]|c->r[3]; // 80097A10
  c->lr=0x80097A18u; f_8016482C(c); // 80097A14
  c->r[3]=c->r[29]|c->r[29]; // 80097A18
  c->r[5]=c->r[30]|c->r[30]; // 80097A1C
  c->r[4]=c->r[1]+0x00000008u; // 80097A20
  c->lr=0x80097A28u; f_801647E4(c); // 80097A24
  c->r[3]=c->r[29]|c->r[29]; // 80097A28
  c->r[5]=c->r[31]|c->r[31]; // 80097A2C
  c->r[4]=c->r[1]+0x00000008u; // 80097A30
  c->lr=0x80097A38u; f_80164808(c); // 80097A34
  c->r[3]=c->r[29]+0x0000000Cu; // 80097A38
  c->r[4]=c->r[1]+0x00000008u; // 80097A3C
  c->r[5]=c->r[30]+0x0000000Cu; // 80097A40
  c->lr=0x80097A48u; f_801647E4(c); // 80097A44
  c->r[3]=c->r[29]+0x0000000Cu; // 80097A48
  c->r[4]=c->r[1]+0x00000008u; // 80097A4C
  c->r[5]=c->r[31]+0x0000000Cu; // 80097A50
  c->lr=0x80097A58u; f_80164808(c); // 80097A54
  c->r[0]=R32(c->r[1]+0x00000044u); // 80097A58
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 80097A5C
  c->r[31]=R32(c->r[1]+0x00000034u); // 80097A60
  c->r[30]=R32(c->r[1]+0x00000030u); // 80097A64
  c->r[29]=R32(c->r[1]+0x0000002Cu); // 80097A68
  c->r[28]=R32(c->r[1]+0x00000028u); // 80097A6C
  c->lr=c->r[0]; // 80097A70
  c->r[1]=c->r[1]+0x00000040u; // 80097A74
  return; // 80097A78
}

// fn_80097A7C
void f_80097A7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80097A7C
  c->r[0]=c->lr; // 80097A80
  W32(c->r[1]+0x00000044u,c->r[0]); // 80097A84
  c->r[11]=c->r[1]+0x00000040u; // 80097A88
  c->lr=0x80097A90u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80097A8C
  c->r[27]=c->r[3]|c->r[3]; // 80097A90
  c->r[29]=c->r[5]|c->r[5]; // 80097A94
  c->r[28]=c->r[4]|c->r[4]; // 80097A98
  c->r[30]=c->r[6]|c->r[6]; // 80097A9C
  c->r[31]=c->r[7]|c->r[7]; // 80097AA0
  c->r[3]=c->r[4]+0x0000000Cu; // 80097AA4
  c->r[5]=c->r[1]+0x00000014u; // 80097AA8
  c->lr=0x80097AB0u; f_80164808(c); // 80097AAC
  c->r[3]=c->r[1]+0x00000014u; // 80097AB0
  c->r[4]=c->r[27]|c->r[27]; // 80097AB4
  c->r[5]=c->r[3]|c->r[3]; // 80097AB8
  c->lr=0x80097AC0u; f_80164908(c); // 80097ABC
  c->r[3]=c->r[1]+0x00000014u; // 80097AC0
  c->r[4]=c->r[3]|c->r[3]; // 80097AC4
  c->lr=0x80097ACCu; f_80164848(c); // 80097AC8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097ACC
  c->r[3]=c->r[1]+0x00000014u; // 80097AD0
  c->r[4]=c->r[1]+0x00000008u; // 80097AD4
  c->lr=0x80097ADCu; f_8016482C(c); // 80097AD8
  c->r[3]=c->r[28]|c->r[28]; // 80097ADC
  c->r[5]=c->r[29]|c->r[29]; // 80097AE0
  c->r[4]=c->r[1]+0x00000008u; // 80097AE4
  c->lr=0x80097AECu; f_801647E4(c); // 80097AE8
  c->r[3]=c->r[28]|c->r[28]; // 80097AEC
  c->r[5]=c->r[30]|c->r[30]; // 80097AF0
  c->r[4]=c->r[1]+0x00000008u; // 80097AF4
  c->lr=0x80097AFCu; f_80164808(c); // 80097AF8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097AFC
  c->r[3]=c->r[1]+0x00000014u; // 80097B00
  c->r[4]=c->r[1]+0x00000008u; // 80097B04
  c->lr=0x80097B0Cu; f_8016482C(c); // 80097B08
  c->r[3]=c->r[28]+0x0000000Cu; // 80097B0C
  c->r[4]=c->r[1]+0x00000008u; // 80097B10
  c->r[5]=c->r[29]+0x0000000Cu; // 80097B14
  c->lr=0x80097B1Cu; f_801647E4(c); // 80097B18
  c->r[3]=c->r[28]+0x0000000Cu; // 80097B1C
  c->r[4]=c->r[1]+0x00000008u; // 80097B20
  c->r[5]=c->r[30]+0x0000000Cu; // 80097B24
  c->lr=0x80097B2Cu; f_80164808(c); // 80097B28
  c->r[11]=c->r[1]+0x00000040u; // 80097B2C
  c->lr=0x80097B34u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80097B30
  c->r[0]=R32(c->r[1]+0x00000044u); // 80097B34
  c->lr=c->r[0]; // 80097B38
  c->r[1]=c->r[1]+0x00000040u; // 80097B3C
  return; // 80097B40
}

// fn_80097B44
void f_80097B44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80097B44
  c->r[0]=c->lr; // 80097B48
  {uint32_t ea=c->r[2]+0xFFFF9310u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097B4C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80097B50
  c->r[0]=0u+0x00000000u; // 80097B54
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80097B58
  c->r[31]=c->r[3]|c->r[3]; // 80097B5C
  W32(c->r[1]+0x00000050u,c->r[0]); // 80097B60
  W32(c->r[1]+0x00000054u,c->r[0]); // 80097B64
  W32(c->r[1]+0x00000058u,c->r[0]); // 80097B68
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80097B6C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097B70
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 80097B74
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 80097B78
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80097B7C
  fcmp(c,0,c->f[1],c->f[0]); // 80097B80
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80097B84
  if (!crb(c,2)) { goto L_80097BD4; } // 80097B88
  {uint32_t ea=c->r[2]+0xFFFF9318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097B8C
  {uint32_t ea=c->r[2]+0xFFFF9314u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097B90
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80097B94
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80097B98
  c->r[3]=R32(c->r[1]+0x00000018u); // 80097B9C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80097BA0
  c->r[5]=R32(c->r[1]+0x00000014u); // 80097BA4
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80097BA8
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 80097BAC
  W32(c->r[1]+0x00000030u,c->r[3]); // 80097BB0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80097BB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80097BB8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097BBC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097BC0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 80097BC4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80097BC8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80097BCC
  goto L_80097C18; // 80097BD0
L_80097BD4:;
  {uint32_t ea=c->r[2]+0xFFFF9318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097BD4
  {uint32_t ea=c->r[2]+0xFFFF9314u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097BD8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80097BDC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80097BE0
  c->r[5]=R32(c->r[1]+0x00000008u); // 80097BE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80097BE8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80097BEC
  c->r[0]=R32(c->r[1]+0x00000010u); // 80097BF0
  W32(c->r[1]+0x00000020u,c->r[5]); // 80097BF4
  W32(c->r[1]+0x00000024u,c->r[3]); // 80097BF8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80097BFC
  W32(c->r[1]+0x00000028u,c->r[0]); // 80097C00
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097C04
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097C08
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 80097C0C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80097C10
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80097C14
L_80097C18:;
  {uint32_t ea=c->r[2]+0xFFFF931Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80097C18
  c->r[3]=c->r[4]|c->r[4]; // 80097C1C
  c->r[4]=c->r[1]+0x00000038u; // 80097C20
  c->lr=0x80097C28u; f_8016482C(c); // 80097C24
  c->r[3]=c->r[31]|c->r[31]; // 80097C28
  c->r[4]=c->r[1]+0x00000050u; // 80097C2C
  c->r[5]=c->r[1]+0x00000044u; // 80097C30
  c->r[6]=c->r[1]+0x00000038u; // 80097C34
  c->lr=0x80097C3Cu; f_80164040(c); // 80097C38
  c->r[0]=R32(c->r[1]+0x00000074u); // 80097C3C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80097C40
  c->lr=c->r[0]; // 80097C44
  c->r[1]=c->r[1]+0x00000070u; // 80097C48
  return; // 80097C4C
}

// fn_80097C50
void f_80097C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80097C50
  c->r[0]=c->lr; // 80097C54
  W32(c->r[1]+0x00000094u,c->r[0]); // 80097C58
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80097C5C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 80097C60
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 80097C64
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80097C68
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 80097C6C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 80097C70
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 80097C74
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 80097C78
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 80097C7C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 80097C80
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[26]);} // 80097C84
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,26,ea,0,0);} // 80097C88
  c->r[11]=c->r[1]+0x00000030u; // 80097C8C
  c->lr=0x80097C94u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80097C90
  c->r[0]=0u+0x43300000u; // 80097C94
  cmps(c,0,(int32_t)c->r[5],3); // 80097C98
  W32(c->r[1]+0x00000008u,c->r[0]); // 80097C9C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80097CA0
  if (crb(c,1)) { goto L_80097CB0; } // 80097CA4
  c->r[3]=0u+0x00000000u; // 80097CA8
  goto L_80097F4C; // 80097CAC
L_80097CB0:;
  {uint32_t ea=c->r[2]+0xFFFF9338u; c->f[6]=RF64(ea);} // 80097CB0
  c->r[27]=c->r[4]|c->r[4]; // 80097CB4
  {uint32_t ea=c->r[2]+0xFFFF9320u; c->f[5]=c->ps1[5]=RF32(ea);} // 80097CB8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80097CBC
  {uint32_t ea=c->r[2]+0xFFFF9324u; c->f[4]=c->ps1[4]=RF32(ea);} // 80097CC0
  c->r[7]=0u+0x00000000u; // 80097CC4
  {uint32_t ea=c->r[2]+0xFFFF9328u; c->f[3]=c->ps1[3]=RF32(ea);} // 80097CC8
  c->r[8]=0u+0x00000000u; // 80097CCC
  {uint32_t ea=c->r[2]+0xFFFF932Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80097CD0
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[1]=c->ps1[1]=RF32(ea);} // 80097CD4
  {uint32_t ea=c->r[2]+0xFFFF9334u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097CD8
  goto L_80097F18; // 80097CDC
L_80097CE0:;
  cmps(c,0,(int32_t)c->r[6],0); // 80097CE0
  if (!crb(c,2)) { goto L_80097D0C; } // 80097CE4
  {uint32_t ea=c->r[27]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 80097CE8
  c->r[9]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 80097CEC
  c->r[7]=c->r[7]+0x00000001u; // 80097CF0
  {uint32_t ea=c->r[9]+c->r[3]; WF32(ea,c->f[7]); c->r[9]=ea;} // 80097CF4
  {uint32_t ea=c->r[27]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 80097CF8
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[7]);} // 80097CFC
  {uint32_t ea=c->r[27]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 80097D00
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[7]);} // 80097D04
  goto L_80097F10; // 80097D08
L_80097D0C:;
  cmps(c,0,(int32_t)c->r[8],0); // 80097D0C
  if (!crb(c,2)) { goto L_80097D28; } // 80097D10
  c->r[28]=0u+0x00000000u; // 80097D14
  c->r[30]=0u+0x00000000u; // 80097D18
  c->r[11]=0u+0x00000001u; // 80097D1C
  c->r[9]=0u+0x00000001u; // 80097D20
  goto L_80097D58; // 80097D24
L_80097D28:;
  c->r[9]=c->r[5]+0xFFFFFFFEu; // 80097D28
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[9]); // 80097D2C
  if (!crb(c,2)) { goto L_80097D48; } // 80097D30
  c->r[11]=c->r[5]+0xFFFFFFFFu; // 80097D34
  c->r[30]=c->r[8]|c->r[8]; // 80097D38
  c->r[9]=c->r[11]|c->r[11]; // 80097D3C
  c->r[28]=c->r[8]+0xFFFFFFFFu; // 80097D40
  goto L_80097D58; // 80097D44
L_80097D48:;
  c->r[30]=c->r[8]|c->r[8]; // 80097D48
  c->r[28]=c->r[8]+0xFFFFFFFFu; // 80097D4C
  c->r[11]=c->r[8]+0x00000001u; // 80097D50
  c->r[9]=c->r[8]+0x00000002u; // 80097D54
L_80097D58:;
  c->r[12]=addc(c,c->r[6],0x00000001u,0); cr0(c,c->r[12]); // 80097D58
  c->r[26]=0u+0x00000000u; // 80097D5C
  if (!crb(c,1)) { goto L_80097F10; } // 80097D60
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 80097D64
  c->r[9]=c->r[12]^0x80000000u; // 80097D68
  c->r[29]=c->r[4]+c->r[10]; // 80097D6C
  c->r[10]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 80097D70
  c->r[11]=(uint32_t)((int32_t)c->r[11]*(int32_t)12); // 80097D74
  c->r[31]=c->r[4]+c->r[10]; // 80097D78
  c->r[30]=c->r[4]+c->r[11]; // 80097D7C
  c->r[11]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 80097D80
  c->r[10]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 80097D84
  c->r[11]=c->r[3]+c->r[11]; // 80097D88
  c->r[28]=c->r[4]+c->r[10]; // 80097D8C
  c->ctr=c->r[12]; // 80097D90
  if (!crb(c,1)) { goto L_80097F10; } // 80097D94
L_80097D98:;
  c->r[10]=c->r[26]^0x80000000u; // 80097D98
  W32(c->r[1]+0x00000014u,c->r[9]); // 80097D9C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 80097DA0
  c->r[7]=c->r[7]+0x00000001u; // 80097DA4
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80097DA8
  c->r[26]=c->r[26]+0x00000001u; // 80097DAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[7]=RF64(ea);} // 80097DB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=RF64(ea);} // 80097DB4
  W32(c->r[1]+0x00000014u,c->r[9]); // 80097DB8
  c->f[8]=c->ps1[8]=S(c->f[7]-c->f[6]); // 80097DBC
  c->f[27]=c->ps1[27]=S(c->f[9]-c->f[6]); // 80097DC0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 80097DC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[7]=RF64(ea);} // 80097DC8
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80097DCC
  c->f[9]=c->ps1[9]=S(c->f[7]-c->f[6]); // 80097DD0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[13]=c->ps1[13]=RF32(ea);} // 80097DD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=RF64(ea);} // 80097DD8
  c->f[30]=c->ps1[30]=S(c->f[27]/c->f[8]); // 80097DDC
  W32(c->r[1]+0x00000014u,c->r[9]); // 80097DE0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 80097DE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[7]=RF64(ea);} // 80097DE8
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80097DEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=RF64(ea);} // 80097DF0
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80097DF4
  c->f[10]=c->ps1[10]=S(c->f[10]-c->f[6]); // 80097DF8
  c->f[29]=c->ps1[29]=S(c->f[8]-c->f[6]); // 80097DFC
  c->f[27]=c->ps1[27]=S(c->f[7]-c->f[6]); // 80097E00
  W32(c->r[1]+0x00000014u,c->r[9]); // 80097E04
  c->f[8]=c->ps1[8]=S(c->f[10]/c->f[9]); // 80097E08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[28]=RF64(ea);} // 80097E0C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[7]=RF64(ea);} // 80097E10
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 80097E14
  W32(c->r[1]+0x00000014u,c->r[9]); // 80097E18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=RF64(ea);} // 80097E1C
  c->f[27]=c->ps1[27]=S(c->f[29]/c->f[27]); // 80097E20
  {uint32_t ea=c->r[1]+0x00000010u; c->f[9]=RF64(ea);} // 80097E24
  c->f[29]=c->ps1[29]=S(c->f[28]-c->f[6]); // 80097E28
  c->f[28]=c->ps1[28]=S(c->f[7]-c->f[6]); // 80097E2C
  c->f[8]=c->ps1[8]=S(c->f[30]*c->f[8]); // 80097E30
  c->f[10]=c->ps1[10]=S(c->f[10]-c->f[6]); // 80097E34
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[6]); // 80097E38
  c->f[26]=c->ps1[26]=S(c->f[8]*c->f[27]); // 80097E3C
  c->f[28]=c->ps1[28]=S(c->f[29]/c->f[28]); // 80097E40
  c->f[29]=c->ps1[29]=S(c->f[10]/c->f[9]); // 80097E44
  c->f[7]=c->ps1[7]=S(c->f[26]-c->f[8]); // 80097E48
  c->f[30]=-c->f[26]; // 80097E4C
  c->f[27]=c->ps1[27]=S(c->f[5]*c->f[8]); // 80097E50
  c->f[9]=c->ps1[9]=S(c->f[3]*c->f[8]); // 80097E54
  c->f[10]=c->ps1[10]=S(c->f[4]*c->f[26]); // 80097E58
  c->f[27]=c->ps1[27]=S(c->f[30]+c->f[27]); // 80097E5C
  c->f[30]=c->ps1[30]=S(c->f[2]*c->f[26]); // 80097E60
  c->f[9]=c->ps1[9]=S(c->f[10]-c->f[9]); // 80097E64
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[8]); // 80097E68
  c->f[10]=c->ps1[10]=S(c->f[27]-c->f[28]); // 80097E6C
  c->f[9]=c->ps1[9]=S(c->f[5]+c->f[9]); // 80097E70
  c->f[8]=c->ps1[8]=S(c->f[30]+c->f[8]); // 80097E74
  c->f[12]=c->ps1[12]=S(c->f[10]*c->f[12]); // 80097E78
  c->f[11]=c->ps1[11]=S(c->f[9]*c->f[11]); // 80097E7C
  c->f[8]=c->ps1[8]=S(c->f[29]+c->f[8]); // 80097E80
  c->f[31]=c->ps1[31]=S(c->f[7]*c->f[31]); // 80097E84
  c->f[11]=c->ps1[11]=S(c->f[12]+c->f[11]); // 80097E88
  c->f[12]=c->ps1[12]=S(c->f[8]*c->f[13]); // 80097E8C
  c->f[11]=c->ps1[11]=S(c->f[12]+c->f[11]); // 80097E90
  c->f[11]=c->ps1[11]=S(c->f[31]+c->f[11]); // 80097E94
  c->f[11]=c->ps1[11]=S(c->f[0]*c->f[11]); // 80097E98
  {uint32_t ea=c->r[11]+0x00000000u; WF32(ea,c->f[11]);} // 80097E9C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[12]=c->ps1[12]=RF32(ea);} // 80097EA0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 80097EA4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[13]=c->ps1[13]=RF32(ea);} // 80097EA8
  c->f[12]=c->ps1[12]=S(c->f[10]*c->f[12]); // 80097EAC
  c->f[11]=c->ps1[11]=S(c->f[9]*c->f[11]); // 80097EB0
  {uint32_t ea=c->r[29]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 80097EB4
  c->f[13]=c->ps1[13]=S(c->f[8]*c->f[13]); // 80097EB8
  c->f[31]=c->ps1[31]=S(c->f[7]*c->f[31]); // 80097EBC
  c->f[11]=c->ps1[11]=S(c->f[12]+c->f[11]); // 80097EC0
  c->f[11]=c->ps1[11]=S(c->f[13]+c->f[11]); // 80097EC4
  c->f[11]=c->ps1[11]=S(c->f[31]+c->f[11]); // 80097EC8
  c->f[11]=c->ps1[11]=S(c->f[0]*c->f[11]); // 80097ECC
  {uint32_t ea=c->r[11]+0x00000004u; WF32(ea,c->f[11]);} // 80097ED0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 80097ED4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 80097ED8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[13]=c->ps1[13]=RF32(ea);} // 80097EDC
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[12]); // 80097EE0
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[11]); // 80097EE4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 80097EE8
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[13]); // 80097EEC
  c->f[11]=c->ps1[11]=S(c->f[7]*c->f[11]); // 80097EF0
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[9]); // 80097EF4
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 80097EF8
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[7]); // 80097EFC
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 80097F00
  {uint32_t ea=c->r[11]+0x00000008u; WF32(ea,c->f[7]);} // 80097F04
  c->r[11]=c->r[11]+0x0000000Cu; // 80097F08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80097D98; } // 80097F0C
L_80097F10:;
  c->r[27]=c->r[27]+0x0000000Cu; // 80097F10
  c->r[8]=c->r[8]+0x00000001u; // 80097F14
L_80097F18:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80097F18
  if (crb(c,0)) { IRQCHK(c); goto L_80097CE0; } // 80097F1C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80097F20
  {uint32_t ea=c->r[4]+c->r[5]; c->f[0]=c->ps1[0]=RF32(ea);} // 80097F24
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 80097F28
  c->r[4]=c->r[4]+c->r[5]; // 80097F2C
  c->r[5]=c->r[3]+c->r[0]; // 80097F30
  c->r[3]=c->r[7]+0x00000001u; // 80097F34
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 80097F38
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097F3C
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 80097F40
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80097F44
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 80097F48
L_80097F4C:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80097F4C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80097F50
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 80097F54
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 80097F58
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 80097F5C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 80097F60
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 80097F64
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 80097F68
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 80097F6C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 80097F70
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,26,ea,0,0);} // 80097F74
  c->r[11]=c->r[1]+0x00000030u; // 80097F78
  {uint32_t ea=c->r[1]+0x00000030u; c->f[26]=RF64(ea);} // 80097F7C
  c->lr=0x80097F84u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80097F80
  c->r[0]=R32(c->r[1]+0x00000094u); // 80097F84
  c->lr=c->r[0]; // 80097F88
  c->r[1]=c->r[1]+0x00000090u; // 80097F8C
  return; // 80097F90
}

// fn_80097F94
void f_80097F94(Ctx* __restrict c) {
  return; // 80097F94
}

// fn_80097F98
void f_80097F98(Ctx* __restrict c) {
  return; // 80097F98
}

// fn_80097F9C
void f_80097F9C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 80097F9C
  return; // 80097FA0
}

// fn_80097FA4
void f_80097FA4(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 80097FA4
  c->r[3]=c->r[4]|c->r[4]; // 80097FA8
  c->r[4]=c->r[5]+0x00000004u; // 80097FAC
  f_80163864(c); return; // 80097FB0
}

// fn_80097FB4
void f_80097FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 80097FB4
  return; // 80097FB8
}

// fn_80097FBC
void f_80097FBC(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000038u); // 80097FBC
  return; // 80097FC0
}

// fn_80097FC4
void f_80097FC4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80097FC4
  W8(c->r[3]+0x00000038u,c->r[0]); // 80097FC8
  return; // 80097FCC
}

// fn_80097FD0
void f_80097FD0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80097FD0
  return; // 80097FD4
}

// fn_80097FD8
void f_80097FD8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80097FD8
  return; // 80097FDC
}

// fn_80097FE0
void f_80097FE0(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 80097FE0
  c->r[12]=R32(c->r[12]+0x00000030u); // 80097FE4
  c->ctr=c->r[12]; // 80097FE8
  if (true) { dispatch(c,c->ctr); return; } // 80097FEC
}

// fn_80097FF0
void f_80097FF0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80097FF0
  W32(c->r[13]+0xFFFFA4C8u,c->r[0]); // 80097FF4
  W32(c->r[13]+0xFFFFA4CCu,c->r[0]); // 80097FF8
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 80097FFC
  return; // 80098000
}

// fn_80098004
void f_80098004(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80098004
  W32(c->r[13]+0xFFFFA4C8u,c->r[0]); // 80098008
  W32(c->r[13]+0xFFFFA4CCu,c->r[0]); // 8009800C
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 80098010
  return; // 80098014
}

// fn_80098018
void f_80098018(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFFA4C8u,c->r[3]); // 80098018
  W32(c->r[13]+0xFFFFA4CCu,c->r[3]); // 8009801C
  W32(c->r[13]+0xFFFFA4D0u,c->r[4]); // 80098020
  return; // 80098024
}

// fn_80098028
void f_80098028(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFA4CCu); // 80098028
  c->r[0]=c->r[0]+c->r[3]; // 8009802C
  W32(c->r[13]+0xFFFFA4CCu,c->r[0]); // 80098030
  return; // 80098034
}

// fn_80098038
void f_80098038(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFA4CCu); // 80098038
  return; // 8009803C
}

// fn_80098040
void f_80098040(Ctx* __restrict c) {
  return; // 80098040
}

// fn_80098044
void f_80098044(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80098044
  c->r[0]=c->lr; // 80098048
  c->r[4]=c->r[3]|c->r[3]; // 8009804C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80098050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80098054
  c->r[31]=0u+0x80370000u; // 80098058
  c->r[3]=c->r[31]+0x000048F8u; // 8009805C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80098060
  W32(c->r[1]+0x00000014u,c->r[29]); // 80098064
  c->lr=0x8009806Cu; f_800EA5F0(c); // 80098068
  c->r[30]=0u+0x80370000u; // 8009806C
  c->r[29]=0u+0x00000000u; // 80098070
  c->r[30]=c->r[30]+0x00004558u; // 80098074
L_80098078:;
  c->r[4]=c->r[30]|c->r[30]; // 80098078
  c->r[5]=c->r[29]|c->r[29]; // 8009807C
  c->r[3]=c->r[31]+0x000048F8u; // 80098080
  c->r[6]=0u+0x00000001u; // 80098084
  c->r[7]=0u+0x00000001u; // 80098088
  c->r[8]=0u+0x00000000u; // 8009808C
  c->lr=0x80098094u; f_800EA86C(c); // 80098090
  c->r[29]=c->r[29]+0x00000001u; // 80098094
  c->r[30]=c->r[30]+0x00000020u; // 80098098
  cmps(c,0,(int32_t)c->r[29],29); // 8009809C
  if (crb(c,0)) { IRQCHK(c); goto L_80098078; } // 800980A0
  c->r[3]=0u+0x80370000u; // 800980A4
  c->r[4]=0u+0x00000000u; // 800980A8
  c->r[3]=c->r[3]+0x00004558u; // 800980AC
  c->r[5]=0u+0x00000000u; // 800980B0
  c->r[3]=c->r[3]+0x00000160u; // 800980B4
  c->lr=0x800980BCu; f_801696BC(c); // 800980B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800980BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800980C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800980C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800980C8
  c->lr=c->r[0]; // 800980CC
  c->r[1]=c->r[1]+0x00000020u; // 800980D0
  return; // 800980D4
}

// fn_800980D8
void f_800980D8(Ctx* __restrict c) {
  c->r[4]=0u+0x80370000u; // 800980D8
  cmps(c,0,(int32_t)c->r[3],29); // 800980DC
  c->r[0]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800980E0
  c->r[4]=c->r[4]+0x00004558u; // 800980E4
  c->r[3]=c->r[4]+c->r[0]; // 800980E8
  if (crb(c,0)) return; // 800980EC
  c->r[3]=0u+0x00000000u; // 800980F0
  return; // 800980F4
}

// fn_800980F8
void f_800980F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800980F8
  c->r[0]=c->lr; // 800980FC
  c->r[4]=0u+0x80CE0000u; // 80098100
  c->r[5]=0u+0x00000280u; // 80098104
  W32(c->r[1]+0x00000024u,c->r[0]); // 80098108
  c->r[4]=c->r[4]+0x00004F00u; // 8009810C
  c->r[6]=0u+0x000001E0u; // 80098110
  c->r[7]=0u+0x00000006u; // 80098114
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80098118
  c->r[8]=0u+0x00000000u; // 8009811C
  c->r[9]=0u+0x00000000u; // 80098120
  c->r[10]=0u+0x00000000u; // 80098124
  W32(c->r[1]+0x00000018u,c->r[30]); // 80098128
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009812C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80098130
  c->r[28]=0u+0x80370000u; // 80098134
  c->r[3]=c->r[28]+0x00004908u; // 80098138
  c->lr=0x80098140u; f_80169364(c); // 8009813C
  c->r[28]=c->r[28]+0x00004908u; // 80098140
  c->r[4]=0u+0x80E10000u; // 80098144
  c->r[3]=c->r[28]+0x00000020u; // 80098148
  c->r[5]=0u+0x00000280u; // 8009814C
  c->r[4]=c->r[4]+0x00000F00u; // 80098150
  c->r[6]=0u+0x000001E0u; // 80098154
  c->r[7]=0u+0x00000006u; // 80098158
  c->r[8]=0u+0x00000000u; // 8009815C
  c->r[9]=0u+0x00000000u; // 80098160
  c->r[10]=0u+0x00000000u; // 80098164
  c->lr=0x8009816Cu; f_80169364(c); // 80098168
  c->r[4]=0u+0x80F40000u; // 8009816C
  c->r[3]=c->r[28]+0x00000040u; // 80098170
  c->r[4]=c->r[4]+0xFFFFCF00u; // 80098174
  c->r[5]=0u+0x00000200u; // 80098178
  c->r[6]=0u+0x00000200u; // 8009817C
  c->r[7]=0u+0x00000006u; // 80098180
  c->r[8]=0u+0x00000001u; // 80098184
  c->r[9]=0u+0x00000001u; // 80098188
  c->r[10]=0u+0x00000000u; // 8009818C
  c->lr=0x80098194u; f_80169364(c); // 80098190
  c->r[4]=0u+0x81040000u; // 80098194
  c->r[3]=c->r[28]+0x00000060u; // 80098198
  c->r[4]=c->r[4]+0xFFFFCF00u; // 8009819C
  c->r[5]=0u+0x00000280u; // 800981A0
  c->r[6]=0u+0x000001E0u; // 800981A4
  c->r[7]=0u+0x00000006u; // 800981A8
  c->r[8]=0u+0x00000000u; // 800981AC
  c->r[9]=0u+0x00000000u; // 800981B0
  c->r[10]=0u+0x00000000u; // 800981B4
  c->lr=0x800981BCu; f_80169364(c); // 800981B8
  c->r[4]=0u+0x81170000u; // 800981BC
  c->r[3]=c->r[28]+0x00000080u; // 800981C0
  c->r[4]=c->r[4]+0xFFFF8F00u; // 800981C4
  c->r[5]=0u+0x00000050u; // 800981C8
  c->r[6]=0u+0x00000050u; // 800981CC
  c->r[7]=0u+0x00000006u; // 800981D0
  c->r[8]=0u+0x00000000u; // 800981D4
  c->r[9]=0u+0x00000000u; // 800981D8
  c->r[10]=0u+0x00000000u; // 800981DC
  c->lr=0x800981E4u; f_80169364(c); // 800981E0
  c->r[3]=c->r[28]|c->r[28]; // 800981E4
  c->r[4]=0u+0x00000000u; // 800981E8
  c->r[5]=0u+0x00000000u; // 800981EC
  c->lr=0x800981F4u; f_801696D8(c); // 800981F0
  c->r[3]=c->r[28]+0x00000020u; // 800981F4
  c->r[4]=0u+0x00000001u; // 800981F8
  c->r[5]=0u+0x00000001u; // 800981FC
  c->lr=0x80098204u; f_801696D8(c); // 80098200
  c->r[3]=c->r[28]+0x00000040u; // 80098204
  c->r[4]=0u+0x00000000u; // 80098208
  c->r[5]=0u+0x00000000u; // 8009820C
  c->lr=0x80098214u; f_801696D8(c); // 80098210
  c->r[3]=c->r[28]+0x00000060u; // 80098214
  c->r[4]=0u+0x00000000u; // 80098218
  c->r[5]=0u+0x00000000u; // 8009821C
  c->lr=0x80098224u; f_801696D8(c); // 80098220
  c->r[3]=c->r[28]+0x00000080u; // 80098224
  c->r[4]=0u+0x00000001u; // 80098228
  c->r[5]=0u+0x00000001u; // 8009822C
  c->lr=0x80098234u; f_801696D8(c); // 80098230
  c->r[29]=0u+0x00000000u; // 80098234
  c->r[31]=0u+0x00000000u; // 80098238
  c->r[28]=0u+0x00040000u; // 8009823C
L_80098240:;
  c->r[30]=c->r[31]+0x80F40000u; // 80098240
  c->lr=0x80098248u; f_8025AE00(c); // 80098244
  c->r[0]=rotl(c->r[3],24)&0xFF000000u; // 80098248
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8009824C
  c->r[0]=c->r[0]-c->r[3]; // 80098250
  c->r[0]=rotl(c->r[0],8)&0xFFFFFFFFu; // 80098254
  c->r[0]=c->r[0]+c->r[3]; // 80098258
  W8(c->r[30]+0xFFFFCF00u,c->r[0]); // 8009825C
  c->lr=0x80098264u; f_8025AE00(c); // 80098260
  c->r[0]=rotl(c->r[3],24)&0xFF000000u; // 80098264
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80098268
  c->r[0]=c->r[0]-c->r[3]; // 8009826C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFFFFu; // 80098270
  c->r[0]=c->r[0]+c->r[3]; // 80098274
  W8(c->r[30]+0xFFFFCF02u,c->r[0]); // 80098278
  c->lr=0x80098280u; f_8025AE00(c); // 8009827C
  c->r[0]=rotl(c->r[3],24)&0xFF000000u; // 80098280
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80098284
  c->r[0]=c->r[0]-c->r[3]; // 80098288
  c->r[0]=rotl(c->r[0],8)&0xFFFFFFFFu; // 8009828C
  c->r[0]=c->r[0]+c->r[3]; // 80098290
  W8(c->r[30]+0xFFFFCF01u,c->r[0]); // 80098294
  c->lr=0x8009829Cu; f_8025AE00(c); // 80098298
  c->r[0]=rotl(c->r[3],24)&0xFF000000u; // 8009829C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 800982A0
  c->r[0]=c->r[0]-c->r[3]; // 800982A4
  c->r[29]=c->r[29]+0x00000001u; // 800982A8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFFFFu; // 800982AC
  c->r[31]=c->r[31]+0x00000004u; // 800982B0
  c->r[0]=c->r[0]+c->r[3]; // 800982B4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 800982B8
  W8(c->r[30]+0xFFFFCF03u,c->r[0]); // 800982BC
  if (crb(c,0)) { IRQCHK(c); goto L_80098240; } // 800982C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800982C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800982C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800982CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800982D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800982D4
  c->lr=c->r[0]; // 800982D8
  c->r[1]=c->r[1]+0x00000020u; // 800982DC
  return; // 800982E0
}

// fn_800982E4
void f_800982E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800982E4
  c->r[0]=c->lr; // 800982E8
  cmps(c,0,(int32_t)c->r[4],0); // 800982EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800982F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800982F4
  c->r[31]=c->r[4]|c->r[4]; // 800982F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800982FC
  c->r[30]=c->r[3]|c->r[3]; // 80098300
  if (!crb(c,2)) { goto L_80098320; } // 80098304
  c->r[6]=R32(c->r[13]+0xFFFFA640u); // 80098308
  c->r[3]=0u+0x00000000u; // 8009830C
  c->r[5]=0u+0x00000000u; // 80098310
  c->r[4]=c->r[6]+0x0000001Au; // 80098314
  c->r[6]=c->r[6]+0x00000032u; // 80098318
  c->lr=0x80098320u; f_801686D0(c); // 8009831C
L_80098320:;
  c->r[3]=0u+0x80370000u; // 80098320
  c->r[0]=rotl(c->r[30],5)&0xFFFFFFE0u; // 80098324
  c->r[3]=c->r[3]+0x00004908u; // 80098328
  c->r[4]=0u+0x00000000u; // 8009832C
  c->r[3]=c->r[3]+c->r[0]; // 80098330
  c->r[5]=0u+0x00000000u; // 80098334
  c->lr=0x8009833Cu; f_800E4ABC(c); // 80098338
  cmps(c,0,(int32_t)c->r[31],0); // 8009833C
  if (!crb(c,2)) { goto L_8009835C; } // 80098340
  c->r[6]=R32(c->r[13]+0xFFFFA640u); // 80098344
  c->r[5]=0u+0x00000001u; // 80098348
  c->r[3]=R8(c->r[6]+0x00000019u); // 8009834C
  c->r[4]=c->r[6]+0x0000001Au; // 80098350
  c->r[6]=c->r[6]+0x00000032u; // 80098354
  c->lr=0x8009835Cu; f_801686D0(c); // 80098358
L_8009835C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009835C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80098360
  c->r[30]=R32(c->r[1]+0x00000008u); // 80098364
  c->lr=c->r[0]; // 80098368
  c->r[1]=c->r[1]+0x00000010u; // 8009836C
  return; // 80098370
}

// fn_80098374
void f_80098374(Ctx* __restrict c) {
  c->r[4]=0u+0x80370000u; // 80098374
  c->r[0]=rotl(c->r[3],5)&0xFFFFFFE0u; // 80098378
  c->r[4]=c->r[4]+0x00004908u; // 8009837C
  c->r[3]=c->r[4]+c->r[0]; // 80098380
  return; // 80098384
}

// fn_80098388
void f_80098388(Ctx* __restrict c) {
  c->r[4]=0u+0x802B0000u; // 80098388
  c->r[3]=0u+0x80370000u; // 8009838C
  c->r[4]=c->r[4]+0xFFFFA1E4u; // 80098390
  c->r[3]=c->r[3]+0x000048F8u; // 80098394
  W32(c->r[3]+0x00000008u,c->r[4]); // 80098398
  return; // 8009839C
}

// fn_800983A0
void f_800983A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800983A0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800983A4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800983A8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800983AC
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[0]=c->ps1[0]=RF32(ea);} // 800983B0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 800983B4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 800983B8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800983BC
  c->r[3]=0u+0x00000001u; // 800983C0
  return; // 800983C4
}

// fn_800983C8
void f_800983C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800983C8
  c->r[0]=c->lr; // 800983CC
  c->r[5]=c->r[13]+0xFFFF8A70u; // 800983D0
  c->r[8]=0u+0x802C0000u; // 800983D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800983D8
  c->r[6]=0u+0x800A0000u; // 800983DC
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800983E0
  c->r[7]=0u+0x00000000u; // 800983E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800983E8
  c->r[8]=c->r[8]+0xFFFFCB80u; // 800983EC
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[1]=c->ps1[1]=RF32(ea);} // 800983F0
  c->r[4]=c->r[5]+0x00000004u; // 800983F4
  c->r[6]=c->r[6]+0xFFFF83A0u; // 800983F8
  c->r[0]=0u+0x00000001u; // 800983FC
  W32(c->r[3]+0x00000040u,c->r[8]); // 80098400
  c->r[31]=c->r[3]|c->r[3]; // 80098404
  W32(c->r[3]+0x00000044u,c->r[7]); // 80098408
  W32(c->r[3]+0x00000048u,c->r[7]); // 8009840C
  W32(c->r[3]+0x00000070u,c->r[6]); // 80098410
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 80098414
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 80098418
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8009841C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80098420
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 80098424
  W32(c->r[3]+0x00000074u,c->r[7]); // 80098428
  W8(c->r[3]+0x00000038u,c->r[7]); // 8009842C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80098430
  W32(c->r[3]+0x00000050u,c->r[5]); // 80098434
  W32(c->r[3]+0x00000054u,c->r[4]); // 80098438
  W32(c->r[3]+0x00000058u,c->r[0]); // 8009843C
  c->r[3]=0u+0x00000010u; // 80098440
  c->lr=0x80098448u; f_800980D8(c); // 80098444
  W32(c->r[31]+0x0000006Cu,c->r[3]); // 80098448
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009844C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80098450
  c->lr=c->r[0]; // 80098454
  c->r[1]=c->r[1]+0x00000010u; // 80098458
  return; // 8009845C
}

// fn_80098460
void f_80098460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80098460
  c->r[0]=c->lr; // 80098464
  W32(c->r[1]+0x00000014u,c->r[0]); // 80098468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009846C
  c->r[31]=c->r[3]|c->r[3]; // 80098470
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 80098474
  c->r[12]=R32(c->r[12]+0x00000020u); // 80098478
  c->ctr=c->r[12]; // 8009847C
  if (true) { c->lr=0x80098484u; dispatch(c,c->ctr); } // 80098480
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 80098484
  c->r[3]=c->r[31]|c->r[31]; // 80098488
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009848C
  c->ctr=c->r[12]; // 80098490
  if (true) { c->lr=0x80098498u; dispatch(c,c->ctr); } // 80098494
  c->r[0]=R32(c->r[1]+0x00000014u); // 80098498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009849C
  c->lr=c->r[0]; // 800984A0
  c->r[1]=c->r[1]+0x00000010u; // 800984A4
  return; // 800984A8
}

// fn_800984AC
void f_800984AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800984AC
  c->r[0]=c->lr; // 800984B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800984B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800984B8
  c->r[31]=c->r[4]|c->r[4]; // 800984BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800984C0
  c->r[30]=c->r[3]|c->r[3]; // 800984C4
  c->lr=0x800984CCu; f_80098038(c); // 800984C8
  W32(c->r[30]+0x00000044u,c->r[3]); // 800984CC
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800984D0
  c->lr=0x800984D8u; f_80098028(c); // 800984D4
  c->lr=0x800984DCu; f_80098038(c); // 800984D8
  W32(c->r[30]+0x00000048u,c->r[3]); // 800984DC
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 800984E0
  c->lr=0x800984E8u; f_80098028(c); // 800984E4
  W32(c->r[30]+0x0000004Cu,c->r[31]); // 800984E8
  c->r[3]=c->r[30]|c->r[30]; // 800984EC
  c->r[12]=R32(c->r[30]+0x0000003Cu); // 800984F0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800984F4
  c->ctr=c->r[12]; // 800984F8
  if (true) { c->lr=0x80098500u; dispatch(c,c->ctr); } // 800984FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80098500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80098504
  c->r[30]=R32(c->r[1]+0x00000008u); // 80098508
  c->lr=c->r[0]; // 8009850C
  c->r[1]=c->r[1]+0x00000010u; // 80098510
  return; // 80098514
}

// fn_80098518
void f_80098518(Ctx* __restrict c) {
  W32(c->r[3]+0x00000044u,c->r[4]); // 80098518
  W32(c->r[3]+0x00000048u,c->r[5]); // 8009851C
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 80098520
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 80098524
  c->r[12]=R32(c->r[12]+0x00000020u); // 80098528
  c->ctr=c->r[12]; // 8009852C
  if (true) { dispatch(c,c->ctr); return; } // 80098530
}

// fn_80098534
void f_80098534(Ctx* __restrict c) {
  W32(c->r[3]+0x00000040u,c->r[4]); // 80098534
  return; // 80098538
}

// fn_8009853C
void f_8009853C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000050u,c->r[4]); // 8009853C
  W32(c->r[3]+0x00000054u,c->r[5]); // 80098540
  W32(c->r[3]+0x00000058u,c->r[6]); // 80098544
  return; // 80098548
}

// fn_8009854C
void f_8009854C(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009854C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 80098550
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80098554
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 80098558
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009855C
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 80098560
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098564
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80098568
  return; // 8009856C
}

// fn_80098570
void f_80098570(Ctx* __restrict c) {
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 80098570
  return; // 80098574
}

// fn_80098578
void f_80098578(Ctx* __restrict c) {
  W32(c->r[3]+0x00000070u,c->r[4]); // 80098578
  return; // 8009857C
}

// fn_80098580
void f_80098580(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000038u); // 80098580
  return; // 80098584
}

// fn_80098588
void f_80098588(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80098588
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009858C
  W32(c->r[3]+0x00000074u,c->r[0]); // 80098590
  c->r[6]=0u+0x00000000u; // 80098594
  c->r[5]=0u+0x00000000u; // 80098598
  W8(c->r[3]+0x00000038u,c->r[0]); // 8009859C
  goto L_800985B8; // 800985A0
L_800985A4:;
  c->r[0]=R32(c->r[3]+0x00000044u); // 800985A4
  c->r[6]=c->r[6]+0x00000001u; // 800985A8
  c->r[4]=c->r[0]+c->r[5]; // 800985AC
  c->r[5]=c->r[5]+0x00000040u; // 800985B0
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 800985B4
L_800985B8:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800985B8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800985BC
  if (crb(c,0)) { IRQCHK(c); goto L_800985A4; } // 800985C0
  return; // 800985C4
}

// fn_800985C8
void f_800985C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800985C8
  c->r[0]=c->lr; // 800985CC
  W32(c->r[1]+0x00000164u,c->r[0]); // 800985D0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 800985D4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 800985D8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 800985DC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 800985E0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 800985E4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 800985E8
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 800985EC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 800985F0
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 800985F4
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 800985F8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 800985FC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 80098600
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 80098604
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 80098608
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 8009860C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 80098610
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 80098614
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 80098618
  c->r[11]=c->r[1]+0x000000D0u; // 8009861C
  c->lr=0x80098624u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80098620
  c->r[0]=R32(c->r[3]+0x00000044u); // 80098624
  c->r[6]=0u+0x43300000u; // 80098628
  W32(c->r[1]+0x00000098u,c->r[6]); // 8009862C
  c->r[25]=c->r[3]|c->r[3]; // 80098630
  cmps(c,0,(int32_t)c->r[0],0); // 80098634
  c->r[26]=c->r[4]|c->r[4]; // 80098638
  W32(c->r[1]+0x000000A0u,c->r[6]); // 8009863C
  c->r[27]=c->r[5]|c->r[5]; // 80098640
  if (!crb(c,2)) { goto L_80098650; } // 80098644
  c->r[3]=0u+0x00000000u; // 80098648
  goto L_800989CC; // 8009864C
L_80098650:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 80098650
  cmps(c,0,(int32_t)c->r[0],0); // 80098654
  if (!crb(c,2)) { goto L_80098664; } // 80098658
  c->r[3]=0u+0x00000000u; // 8009865C
  goto L_800989CC; // 80098660
L_80098664:;
  c->r[5]=0u+0x80270000u; // 80098664
  {uint32_t ea=c->r[5]+0x00002458u; c->r[4]=R32(ea); c->r[5]=ea;} // 80098668
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[28]=RF64(ea);} // 8009866C
  c->r[29]=0u+0x00000000u; // 80098670
  c->r[3]=R32(c->r[5]+0x00000004u); // 80098674
  c->r[30]=0u+0x00000000u; // 80098678
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009867C
  c->r[31]=0u+0x00000000u; // 80098680
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[29]=c->ps1[29]=RF32(ea);} // 80098684
  W32(c->r[1]+0x00000008u,c->r[4]); // 80098688
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009868C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80098690
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80098694
  W32(c->r[1]+0x00000010u,c->r[0]); // 80098698
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[24]=c->ps1[24]=RF32(ea);} // 8009869C
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[27]=c->ps1[27]=RF32(ea);} // 800986A0
  goto L_800989B4; // 800986A4
L_800986A8:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 800986A8
  c->r[3]=c->r[0]+c->r[31]; // 800986AC
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800986B0
  fcmp(c,0,c->f[0],c->f[27]); // 800986B4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800986B8
  if (!crb(c,2)) { goto L_800989AC; } // 800986BC
  c->lr=0x800986C4u; f_8025AE00(c); // 800986C0
  c->r[4]=R32(c->r[25]+0x00000058u); // 800986C4
  c->r[24]=R32(c->r[25]+0x00000040u); // 800986C8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800986CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800986D0
  c->r[28]=c->r[3]-c->r[0]; // 800986D4
  c->lr=0x800986DCu; f_8025AE00(c); // 800986D8
  c->r[0]=c->r[3]^0x80000000u; // 800986DC
  {uint32_t ea=c->r[24]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800986E0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800986E4
  {uint32_t ea=c->r[24]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800986E8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 800986EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800986F0
  c->r[24]=R32(c->r[25]+0x00000040u); // 800986F4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 800986F8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 800986FC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098700
  c->f[26]=c->ps1[26]=S(c->f[1]+c->f[0]); // 80098704
  c->lr=0x8009870Cu; f_8025AE00(c); // 80098708
  c->r[0]=c->r[3]^0x80000000u; // 8009870C
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098710
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80098714
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098718
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009871C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098720
  c->r[24]=R32(c->r[25]+0x00000040u); // 80098724
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80098728
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009872C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098730
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 80098734
  c->lr=0x8009873Cu; f_8025AE00(c); // 80098738
  c->r[0]=c->r[3]^0x80000000u; // 8009873C
  {uint32_t ea=c->r[24]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80098740
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80098744
  {uint32_t ea=c->r[24]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098748
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009874C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098750
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80098754
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80098758
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009875C
  c->f[23]=c->ps1[23]=S(c->f[1]+c->f[0]); // 80098760
  c->lr=0x80098768u; f_8025AE00(c); // 80098764
  c->r[0]=c->r[3]^0x80000000u; // 80098768
  c->r[3]=c->r[1]+0x00000068u; // 8009876C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80098770
  c->r[4]=0u+0x00000079u; // 80098774
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 80098778
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 8009877C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 80098780
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80098784
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[0]); // 80098788
  c->lr=0x80098790u; f_80163C44(c); // 8009878C
  c->lr=0x80098794u; f_8025AE00(c); // 80098790
  c->r[0]=c->r[3]^0x80000000u; // 80098794
  c->r[3]=c->r[1]+0x00000038u; // 80098798
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009879C
  c->r[4]=0u+0x00000078u; // 800987A0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 800987A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 800987A8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 800987AC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 800987B0
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[0]); // 800987B4
  c->lr=0x800987BCu; f_80163C44(c); // 800987B8
  c->r[3]=c->r[1]+0x00000068u; // 800987BC
  c->r[4]=c->r[1]+0x00000038u; // 800987C0
  c->r[5]=c->r[3]|c->r[3]; // 800987C4
  c->lr=0x800987CCu; f_80163898(c); // 800987C8
  c->r[3]=c->r[1]+0x00000068u; // 800987CC
  c->r[4]=c->r[1]+0x00000008u; // 800987D0
  c->r[5]=c->r[1]+0x00000014u; // 800987D4
  c->lr=0x800987DCu; f_801643D8(c); // 800987D8
  c->f[1]=c->f[26]; // 800987DC
  c->r[3]=c->r[1]+0x00000014u; // 800987E0
  c->r[4]=c->r[1]+0x0000002Cu; // 800987E4
  c->lr=0x800987ECu; f_8016482C(c); // 800987E8
  c->f[1]=c->ps1[1]=S(c->f[26]+c->f[25]); // 800987EC
  c->r[3]=c->r[1]+0x00000014u; // 800987F0
  c->r[4]=c->r[1]+0x00000020u; // 800987F4
  c->lr=0x800987FCu; f_8016482C(c); // 800987F8
  c->r[0]=R32(c->r[25]+0x00000044u); // 800987FC
  c->r[4]=c->r[26]|c->r[26]; // 80098800
  c->r[3]=c->r[1]+0x00000020u; // 80098804
  c->r[5]=c->r[0]+c->r[31]; // 80098808
  c->lr=0x80098810u; f_801647E4(c); // 8009880C
  c->r[0]=R32(c->r[25]+0x00000044u); // 80098810
  c->r[4]=c->r[26]|c->r[26]; // 80098814
  c->r[3]=c->r[1]+0x0000002Cu; // 80098818
  c->r[5]=c->r[0]+c->r[31]; // 8009881C
  c->r[5]=c->r[5]+0x0000000Cu; // 80098820
  c->lr=0x80098828u; f_801647E4(c); // 80098824
  c->r[0]=R32(c->r[25]+0x00000044u); // 80098828
  c->f[1]=c->f[23]; // 8009882C
  c->r[3]=c->r[1]+0x00000014u; // 80098830
  c->r[4]=c->r[0]+c->r[31]; // 80098834
  c->r[4]=c->r[4]+0x00000018u; // 80098838
  c->lr=0x80098840u; f_8016482C(c); // 8009883C
  c->r[24]=R32(c->r[25]+0x00000040u); // 80098840
  c->lr=0x80098848u; f_8025AE00(c); // 80098844
  c->r[3]=c->r[3]^0x80000000u; // 80098848
  {uint32_t ea=c->r[24]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009884C
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80098850
  {uint32_t ea=c->r[24]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098854
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80098858
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009885C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098860
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80098864
  c->r[3]=c->r[0]+c->r[31]; // 80098868
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009886C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098870
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80098874
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80098878
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009887C
  c->lr=0x80098884u; f_8025AE00(c); // 80098880
  c->r[3]=c->r[3]^0x80000000u; // 80098884
  {uint32_t ea=c->r[24]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098888
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8009888C
  {uint32_t ea=c->r[24]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098890
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80098894
  c->r[0]=R32(c->r[25]+0x00000044u); // 80098898
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009889C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 800988A0
  c->r[3]=c->r[0]+c->r[31]; // 800988A4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 800988A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800988AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800988B0
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800988B4
  c->r[24]=R32(c->r[25]+0x00000040u); // 800988B8
  c->lr=0x800988C0u; f_8025AE00(c); // 800988BC
  c->r[3]=c->r[3]^0x80000000u; // 800988C0
  {uint32_t ea=c->r[24]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800988C4
  W32(c->r[1]+0x000000A4u,c->r[3]); // 800988C8
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800988CC
  {uint32_t ea=c->r[24]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800988D0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 800988D4
  c->r[0]=R32(c->r[25]+0x00000044u); // 800988D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800988DC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 800988E0
  c->r[3]=c->r[0]+c->r[31]; // 800988E4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 800988E8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800988EC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800988F0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800988F4
  c->r[0]=R32(c->r[25]+0x00000050u); // 800988F8
  c->r[3]=R32(c->r[25]+0x00000044u); // 800988FC
  c->r[4]=c->r[0]+c->r[5]; // 80098900
  c->r[0]=R8(c->r[5]+c->r[0]); // 80098904
  c->r[3]=c->r[3]+c->r[31]; // 80098908
  W8(c->r[3]+0x00000024u,c->r[0]); // 8009890C
  c->r[0]=R8(c->r[4]+0x00000001u); // 80098910
  W8(c->r[3]+0x00000025u,c->r[0]); // 80098914
  c->r[0]=R8(c->r[4]+0x00000002u); // 80098918
  W8(c->r[3]+0x00000026u,c->r[0]); // 8009891C
  c->r[0]=R8(c->r[4]+0x00000003u); // 80098920
  W8(c->r[3]+0x00000027u,c->r[0]); // 80098924
  c->r[0]=R32(c->r[25]+0x00000054u); // 80098928
  c->r[3]=R32(c->r[25]+0x00000044u); // 8009892C
  c->r[4]=c->r[0]+c->r[5]; // 80098930
  c->r[0]=R8(c->r[5]+c->r[0]); // 80098934
  c->r[3]=c->r[3]+c->r[31]; // 80098938
  W8(c->r[3]+0x00000028u,c->r[0]); // 8009893C
  c->r[0]=R8(c->r[4]+0x00000001u); // 80098940
  W8(c->r[3]+0x00000029u,c->r[0]); // 80098944
  c->r[0]=R8(c->r[4]+0x00000002u); // 80098948
  W8(c->r[3]+0x0000002Au,c->r[0]); // 8009894C
  c->r[0]=R8(c->r[4]+0x00000003u); // 80098950
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 80098954
  c->r[24]=R32(c->r[25]+0x00000040u); // 80098958
  c->lr=0x80098960u; f_8025AE00(c); // 8009895C
  c->r[3]=c->r[3]^0x80000000u; // 80098960
  c->r[29]=c->r[29]+0x00000001u; // 80098964
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 80098968
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 8009896C
  c->r[0]=R32(c->r[25]+0x00000044u); // 80098970
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80098974
  {uint32_t ea=c->r[24]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098978
  c->r[3]=c->r[0]+c->r[31]; // 8009897C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80098980
  {uint32_t ea=c->r[24]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098984
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098988
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009898C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098990
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80098994
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80098998
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009899C
  c->r[3]=c->r[0]+c->r[31]; // 800989A0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[24]);} // 800989A4
  if (!crb(c,0)) { goto L_800989C0; } // 800989A8
L_800989AC:;
  c->r[31]=c->r[31]+0x00000040u; // 800989AC
  c->r[30]=c->r[30]+0x00000001u; // 800989B0
L_800989B4:;
  c->r[0]=R32(c->r[25]+0x0000004Cu); // 800989B4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800989B8
  if (crb(c,0)) { IRQCHK(c); goto L_800986A8; } // 800989BC
L_800989C0:;
  c->r[0]=0u+0x00000001u; // 800989C0
  c->r[3]=0u+0x00000001u; // 800989C4
  W8(c->r[25]+0x00000038u,c->r[0]); // 800989C8
L_800989CC:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 800989CC
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 800989D0
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 800989D4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 800989D8
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 800989DC
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 800989E0
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 800989E4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 800989E8
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 800989EC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 800989F0
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 800989F4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 800989F8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 800989FC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 80098A00
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 80098A04
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 80098A08
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 80098A0C
  c->r[11]=c->r[1]+0x000000D0u; // 80098A10
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 80098A14
  c->lr=0x80098A1Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80098A18
  c->r[0]=R32(c->r[1]+0x00000164u); // 80098A1C
  c->lr=c->r[0]; // 80098A20
  c->r[1]=c->r[1]+0x00000160u; // 80098A24
  return; // 80098A28
}

// fn_80098A2C
void f_80098A2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80098A2C
  c->r[0]=c->lr; // 80098A30
  W32(c->r[1]+0x00000164u,c->r[0]); // 80098A34
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 80098A38
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 80098A3C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 80098A40
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 80098A44
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 80098A48
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 80098A4C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 80098A50
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 80098A54
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 80098A58
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 80098A5C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 80098A60
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 80098A64
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 80098A68
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 80098A6C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 80098A70
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 80098A74
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 80098A78
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 80098A7C
  c->r[11]=c->r[1]+0x000000D0u; // 80098A80
  c->lr=0x80098A88u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80098A84
  c->r[0]=R32(c->r[3]+0x00000044u); // 80098A88
  c->r[7]=0u+0x43300000u; // 80098A8C
  W32(c->r[1]+0x00000098u,c->r[7]); // 80098A90
  c->r[24]=c->r[3]|c->r[3]; // 80098A94
  cmps(c,0,(int32_t)c->r[0],0); // 80098A98
  c->r[25]=c->r[4]|c->r[4]; // 80098A9C
  W32(c->r[1]+0x000000A0u,c->r[7]); // 80098AA0
  c->r[26]=c->r[5]|c->r[5]; // 80098AA4
  c->r[27]=c->r[6]|c->r[6]; // 80098AA8
  if (!crb(c,2)) { goto L_80098AB8; } // 80098AAC
  c->r[3]=0u+0x00000000u; // 80098AB0
  goto L_80098E58; // 80098AB4
L_80098AB8:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 80098AB8
  cmps(c,0,(int32_t)c->r[0],0); // 80098ABC
  if (!crb(c,2)) { goto L_80098ACC; } // 80098AC0
  c->r[3]=0u+0x00000000u; // 80098AC4
  goto L_80098E58; // 80098AC8
L_80098ACC:;
  c->r[5]=0u+0x80270000u; // 80098ACC
  {uint32_t ea=c->r[5]+0x00002464u; c->r[4]=R32(ea); c->r[5]=ea;} // 80098AD0
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[27]=RF64(ea);} // 80098AD4
  c->r[29]=0u+0x00000000u; // 80098AD8
  c->r[3]=R32(c->r[5]+0x00000004u); // 80098ADC
  c->r[30]=0u+0x00000000u; // 80098AE0
  c->r[0]=R32(c->r[5]+0x00000008u); // 80098AE4
  c->r[31]=0u+0x00000000u; // 80098AE8
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[28]=c->ps1[28]=RF32(ea);} // 80098AEC
  W32(c->r[1]+0x00000008u,c->r[4]); // 80098AF0
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[29]=c->ps1[29]=RF32(ea);} // 80098AF4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80098AF8
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80098AFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80098B00
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 80098B04
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[24]=c->ps1[24]=RF32(ea);} // 80098B08
  goto L_80098E40; // 80098B0C
L_80098B10:;
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098B10
  c->r[3]=c->r[0]+c->r[31]; // 80098B14
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098B18
  fcmp(c,0,c->f[0],c->f[31]); // 80098B1C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80098B20
  if (!crb(c,2)) { goto L_80098E38; } // 80098B24
  c->lr=0x80098B2Cu; f_8025AE00(c); // 80098B28
  c->r[4]=R32(c->r[24]+0x00000058u); // 80098B2C
  c->r[23]=R32(c->r[24]+0x00000040u); // 80098B30
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 80098B34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80098B38
  c->r[28]=c->r[3]-c->r[0]; // 80098B3C
  c->lr=0x80098B44u; f_8025AE00(c); // 80098B40
  c->r[0]=c->r[3]^0x80000000u; // 80098B44
  {uint32_t ea=c->r[23]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80098B48
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80098B4C
  {uint32_t ea=c->r[23]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098B50
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80098B54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098B58
  c->r[23]=R32(c->r[24]+0x00000040u); // 80098B5C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80098B60
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80098B64
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098B68
  c->f[26]=c->ps1[26]=S(c->f[1]+c->f[0]); // 80098B6C
  c->lr=0x80098B74u; f_8025AE00(c); // 80098B70
  c->r[0]=c->r[3]^0x80000000u; // 80098B74
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098B78
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80098B7C
  {uint32_t ea=c->r[23]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098B80
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80098B84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098B88
  c->r[23]=R32(c->r[24]+0x00000040u); // 80098B8C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80098B90
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80098B94
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098B98
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 80098B9C
  c->lr=0x80098BA4u; f_8025AE00(c); // 80098BA0
  c->r[0]=c->r[3]^0x80000000u; // 80098BA4
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80098BA8
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80098BAC
  {uint32_t ea=c->r[23]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098BB0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80098BB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098BB8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80098BBC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80098BC0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098BC4
  c->f[23]=c->ps1[23]=S(c->f[1]+c->f[0]); // 80098BC8
  c->lr=0x80098BD0u; f_8025AE00(c); // 80098BCC
  c->r[0]=c->r[3]^0x80000000u; // 80098BD0
  c->r[3]=c->r[1]+0x00000068u; // 80098BD4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80098BD8
  c->r[4]=0u+0x00000079u; // 80098BDC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 80098BE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 80098BE4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 80098BE8
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 80098BEC
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 80098BF0
  c->lr=0x80098BF8u; f_80163C44(c); // 80098BF4
  c->lr=0x80098BFCu; f_8025AE00(c); // 80098BF8
  c->r[0]=c->r[3]^0x80000000u; // 80098BFC
  c->r[3]=c->r[1]+0x00000038u; // 80098C00
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80098C04
  c->r[4]=0u+0x00000078u; // 80098C08
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 80098C0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 80098C10
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 80098C14
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 80098C18
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 80098C1C
  c->lr=0x80098C24u; f_80163C44(c); // 80098C20
  c->r[3]=c->r[1]+0x00000068u; // 80098C24
  c->r[4]=c->r[1]+0x00000038u; // 80098C28
  c->r[5]=c->r[3]|c->r[3]; // 80098C2C
  c->lr=0x80098C34u; f_80163898(c); // 80098C30
  c->r[3]=c->r[1]+0x00000068u; // 80098C34
  c->r[4]=c->r[1]+0x00000008u; // 80098C38
  c->r[5]=c->r[1]+0x00000014u; // 80098C3C
  c->lr=0x80098C44u; f_801643D8(c); // 80098C40
  c->r[4]=c->r[26]|c->r[26]; // 80098C44
  c->r[3]=c->r[1]+0x00000014u; // 80098C48
  c->lr=0x80098C50u; f_801648E8(c); // 80098C4C
  fcmp(c,0,c->f[1],c->f[31]); // 80098C50
  if (!crb(c,0)) { goto L_80098C68; } // 80098C54
  c->r[3]=c->r[1]+0x00000014u; // 80098C58
  {uint32_t ea=c->r[2]+0xFFFF9360u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098C5C
  c->r[4]=c->r[3]|c->r[3]; // 80098C60
  c->lr=0x80098C68u; f_8016482C(c); // 80098C64
L_80098C68:;
  c->f[1]=c->f[26]; // 80098C68
  c->r[3]=c->r[1]+0x00000014u; // 80098C6C
  c->r[4]=c->r[1]+0x0000002Cu; // 80098C70
  c->lr=0x80098C78u; f_8016482C(c); // 80098C74
  c->f[1]=c->ps1[1]=S(c->f[26]+c->f[25]); // 80098C78
  c->r[3]=c->r[1]+0x00000014u; // 80098C7C
  c->r[4]=c->r[1]+0x00000020u; // 80098C80
  c->lr=0x80098C88u; f_8016482C(c); // 80098C84
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098C88
  c->r[4]=c->r[25]|c->r[25]; // 80098C8C
  c->r[3]=c->r[1]+0x00000020u; // 80098C90
  c->r[5]=c->r[0]+c->r[31]; // 80098C94
  c->lr=0x80098C9Cu; f_801647E4(c); // 80098C98
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098C9C
  c->r[4]=c->r[25]|c->r[25]; // 80098CA0
  c->r[3]=c->r[1]+0x0000002Cu; // 80098CA4
  c->r[5]=c->r[0]+c->r[31]; // 80098CA8
  c->r[5]=c->r[5]+0x0000000Cu; // 80098CAC
  c->lr=0x80098CB4u; f_801647E4(c); // 80098CB0
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098CB4
  c->f[1]=c->f[23]; // 80098CB8
  c->r[3]=c->r[1]+0x00000014u; // 80098CBC
  c->r[4]=c->r[0]+c->r[31]; // 80098CC0
  c->r[4]=c->r[4]+0x00000018u; // 80098CC4
  c->lr=0x80098CCCu; f_8016482C(c); // 80098CC8
  c->r[23]=R32(c->r[24]+0x00000040u); // 80098CCC
  c->lr=0x80098CD4u; f_8025AE00(c); // 80098CD0
  c->r[3]=c->r[3]^0x80000000u; // 80098CD4
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098CD8
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80098CDC
  {uint32_t ea=c->r[23]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098CE0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80098CE4
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098CE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098CEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80098CF0
  c->r[3]=c->r[0]+c->r[31]; // 80098CF4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80098CF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098CFC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80098D00
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80098D04
  c->r[23]=R32(c->r[24]+0x00000040u); // 80098D08
  c->lr=0x80098D10u; f_8025AE00(c); // 80098D0C
  c->r[3]=c->r[3]^0x80000000u; // 80098D10
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098D14
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 80098D18
  {uint32_t ea=c->r[23]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098D1C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80098D20
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098D24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098D28
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80098D2C
  c->r[3]=c->r[0]+c->r[31]; // 80098D30
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80098D34
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098D38
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80098D3C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80098D40
  c->r[23]=R32(c->r[24]+0x00000040u); // 80098D44
  c->lr=0x80098D4Cu; f_8025AE00(c); // 80098D48
  c->r[3]=c->r[3]^0x80000000u; // 80098D4C
  {uint32_t ea=c->r[23]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80098D50
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80098D54
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80098D58
  {uint32_t ea=c->r[23]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098D5C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80098D60
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098D64
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098D68
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80098D6C
  c->r[3]=c->r[0]+c->r[31]; // 80098D70
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80098D74
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098D78
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80098D7C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80098D80
  c->r[0]=R32(c->r[24]+0x00000050u); // 80098D84
  c->r[3]=R32(c->r[24]+0x00000044u); // 80098D88
  c->r[4]=c->r[0]+c->r[5]; // 80098D8C
  c->r[0]=R8(c->r[5]+c->r[0]); // 80098D90
  c->r[3]=c->r[3]+c->r[31]; // 80098D94
  W8(c->r[3]+0x00000024u,c->r[0]); // 80098D98
  c->r[0]=R8(c->r[4]+0x00000001u); // 80098D9C
  W8(c->r[3]+0x00000025u,c->r[0]); // 80098DA0
  c->r[0]=R8(c->r[4]+0x00000002u); // 80098DA4
  W8(c->r[3]+0x00000026u,c->r[0]); // 80098DA8
  c->r[0]=R8(c->r[4]+0x00000003u); // 80098DAC
  W8(c->r[3]+0x00000027u,c->r[0]); // 80098DB0
  c->r[0]=R32(c->r[24]+0x00000054u); // 80098DB4
  c->r[3]=R32(c->r[24]+0x00000044u); // 80098DB8
  c->r[4]=c->r[0]+c->r[5]; // 80098DBC
  c->r[0]=R8(c->r[5]+c->r[0]); // 80098DC0
  c->r[3]=c->r[3]+c->r[31]; // 80098DC4
  W8(c->r[3]+0x00000028u,c->r[0]); // 80098DC8
  c->r[0]=R8(c->r[4]+0x00000001u); // 80098DCC
  W8(c->r[3]+0x00000029u,c->r[0]); // 80098DD0
  c->r[0]=R8(c->r[4]+0x00000002u); // 80098DD4
  W8(c->r[3]+0x0000002Au,c->r[0]); // 80098DD8
  c->r[0]=R8(c->r[4]+0x00000003u); // 80098DDC
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 80098DE0
  c->r[23]=R32(c->r[24]+0x00000040u); // 80098DE4
  c->lr=0x80098DECu; f_8025AE00(c); // 80098DE8
  c->r[3]=c->r[3]^0x80000000u; // 80098DEC
  c->r[29]=c->r[29]+0x00000001u; // 80098DF0
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 80098DF4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 80098DF8
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098DFC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80098E00
  {uint32_t ea=c->r[23]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80098E04
  c->r[3]=c->r[0]+c->r[31]; // 80098E08
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80098E0C
  {uint32_t ea=c->r[23]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80098E10
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80098E14
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80098E18
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80098E1C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80098E20
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80098E24
  c->r[0]=R32(c->r[24]+0x00000044u); // 80098E28
  c->r[3]=c->r[0]+c->r[31]; // 80098E2C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[24]);} // 80098E30
  if (!crb(c,0)) { goto L_80098E4C; } // 80098E34
L_80098E38:;
  c->r[31]=c->r[31]+0x00000040u; // 80098E38
  c->r[30]=c->r[30]+0x00000001u; // 80098E3C
L_80098E40:;
  c->r[0]=R32(c->r[24]+0x0000004Cu); // 80098E40
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80098E44
  if (crb(c,0)) { IRQCHK(c); goto L_80098B10; } // 80098E48
L_80098E4C:;
  c->r[0]=0u+0x00000001u; // 80098E4C
  c->r[3]=0u+0x00000001u; // 80098E50
  W8(c->r[24]+0x00000038u,c->r[0]); // 80098E54
L_80098E58:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 80098E58
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 80098E5C
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 80098E60
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 80098E64
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 80098E68
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 80098E6C
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 80098E70
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 80098E74
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 80098E78
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 80098E7C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 80098E80
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 80098E84
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 80098E88
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 80098E8C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 80098E90
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 80098E94
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 80098E98
  c->r[11]=c->r[1]+0x000000D0u; // 80098E9C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 80098EA0
  c->lr=0x80098EA8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80098EA4
  c->r[0]=R32(c->r[1]+0x00000164u); // 80098EA8
  c->lr=c->r[0]; // 80098EAC
  c->r[1]=c->r[1]+0x00000160u; // 80098EB0
  return; // 80098EB4
}

// fn_80098EB8
void f_80098EB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80098EB8
  c->r[0]=c->lr; // 80098EBC
  W32(c->r[1]+0x000001C4u,c->r[0]); // 80098EC0
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[31]);} // 80098EC4
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,31,ea,0,0);} // 80098EC8
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[30]);} // 80098ECC
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,30,ea,0,0);} // 80098ED0
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[29]);} // 80098ED4
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,29,ea,0,0);} // 80098ED8
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[28]);} // 80098EDC
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,28,ea,0,0);} // 80098EE0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[27]);} // 80098EE4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,27,ea,0,0);} // 80098EE8
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[26]);} // 80098EEC
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,26,ea,0,0);} // 80098EF0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[25]);} // 80098EF4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,25,ea,0,0);} // 80098EF8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[24]);} // 80098EFC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,24,ea,0,0);} // 80098F00
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[23]);} // 80098F04
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,23,ea,0,0);} // 80098F08
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[22]);} // 80098F0C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,22,ea,0,0);} // 80098F10
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[21]);} // 80098F14
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,21,ea,0,0);} // 80098F18
  c->r[11]=c->r[1]+0x00000110u; // 80098F1C
  c->lr=0x80098F24u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80098F20
  c->r[0]=R32(c->r[3]+0x00000044u); // 80098F24
  c->r[7]=0u+0x43300000u; // 80098F28
  c->f[22]=c->f[1]; // 80098F2C
  W32(c->r[1]+0x000000D8u,c->r[7]); // 80098F30
  cmps(c,0,(int32_t)c->r[0],0); // 80098F34
  c->r[25]=c->r[3]|c->r[3]; // 80098F38
  W32(c->r[1]+0x000000E0u,c->r[7]); // 80098F3C
  c->r[26]=c->r[4]|c->r[4]; // 80098F40
  c->r[27]=c->r[6]|c->r[6]; // 80098F44
  if (!crb(c,2)) { goto L_80098F54; } // 80098F48
  c->r[3]=0u+0x00000000u; // 80098F4C
  goto L_80099340; // 80098F50
L_80098F54:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 80098F54
  cmps(c,0,(int32_t)c->r[0],0); // 80098F58
  if (!crb(c,2)) { goto L_80098F68; } // 80098F5C
  c->r[3]=0u+0x00000000u; // 80098F60
  goto L_80099340; // 80098F64
L_80098F68:;
  c->r[4]=0u+0x80270000u; // 80098F68
  {uint32_t ea=c->r[4]+0x00002470u; c->r[28]=R32(ea); c->r[4]=ea;} // 80098F6C
  c->r[6]=0u+0x80270000u; // 80098F70
  {uint32_t ea=c->r[6]+0x0000247Cu; c->r[10]=R32(ea); c->r[6]=ea;} // 80098F74
  c->r[7]=R32(c->r[5]+0x00000000u); // 80098F78
  c->r[3]=c->r[1]+0x00000078u; // 80098F7C
  c->r[12]=R32(c->r[4]+0x00000004u); // 80098F80
  c->r[29]=0u+0x00000000u; // 80098F84
  c->r[11]=R32(c->r[4]+0x00000008u); // 80098F88
  c->r[4]=c->r[1]+0x00000008u; // 80098F8C
  c->r[9]=R32(c->r[6]+0x00000004u); // 80098F90
  c->r[8]=R32(c->r[6]+0x00000008u); // 80098F94
  c->r[6]=R32(c->r[5]+0x00000004u); // 80098F98
  c->r[0]=R32(c->r[5]+0x00000008u); // 80098F9C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80098FA0
  W32(c->r[1]+0x00000024u,c->r[12]); // 80098FA4
  W32(c->r[1]+0x00000028u,c->r[11]); // 80098FA8
  W32(c->r[1]+0x00000014u,c->r[10]); // 80098FAC
  W32(c->r[1]+0x00000018u,c->r[9]); // 80098FB0
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80098FB4
  W32(c->r[1]+0x00000008u,c->r[7]); // 80098FB8
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80098FBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80098FC0
  c->lr=0x80098FC8u; f_80097B44(c); // 80098FC4
  c->r[3]=c->r[1]+0x00000078u; // 80098FC8
  c->r[4]=c->r[3]|c->r[3]; // 80098FCC
  c->lr=0x80098FD4u; f_80163AFC(c); // 80098FD0
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[27]=RF64(ea);} // 80098FD4
  c->r[30]=0u+0x00000000u; // 80098FD8
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[28]=c->ps1[28]=RF32(ea);} // 80098FDC
  c->r[31]=0u+0x00000000u; // 80098FE0
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[29]=c->ps1[29]=RF32(ea);} // 80098FE4
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 80098FE8
  {uint32_t ea=c->r[2]+0xFFFF9364u; c->f[31]=c->ps1[31]=RF32(ea);} // 80098FEC
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[21]=c->ps1[21]=RF32(ea);} // 80098FF0
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[26]=c->ps1[26]=RF32(ea);} // 80098FF4
  goto L_80099328; // 80098FF8
L_80098FFC:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 80098FFC
  c->r[3]=c->r[0]+c->r[31]; // 80099000
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099004
  fcmp(c,0,c->f[0],c->f[26]); // 80099008
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009900C
  if (!crb(c,2)) { goto L_80099320; } // 80099010
  c->lr=0x80099018u; f_8025AE00(c); // 80099014
  c->r[4]=R32(c->r[25]+0x00000058u); // 80099018
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009901C
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 80099020
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80099024
  c->r[28]=c->r[3]-c->r[0]; // 80099028
  c->lr=0x80099030u; f_8025AE00(c); // 8009902C
  c->r[0]=c->r[3]^0x80000000u; // 80099030
  {uint32_t ea=c->r[24]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099034
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80099038
  {uint32_t ea=c->r[24]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009903C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 80099040
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099044
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099048
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009904C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80099050
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099054
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 80099058
  c->lr=0x80099060u; f_8025AE00(c); // 8009905C
  c->r[0]=c->r[3]^0x80000000u; // 80099060
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099064
  W32(c->r[1]+0x000000E4u,c->r[0]); // 80099068
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009906C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=RF64(ea);} // 80099070
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099074
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099078
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009907C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80099080
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099084
  c->f[24]=c->ps1[24]=S(c->f[1]+c->f[0]); // 80099088
  c->lr=0x80099090u; f_8025AE00(c); // 8009908C
  c->r[0]=c->r[3]^0x80000000u; // 80099090
  {uint32_t ea=c->r[24]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099094
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80099098
  {uint32_t ea=c->r[24]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009909C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 800990A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800990A4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 800990A8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 800990AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800990B0
  c->f[23]=c->ps1[23]=S(c->f[1]+c->f[0]); // 800990B4
  c->lr=0x800990BCu; f_8025AE00(c); // 800990B8
  c->r[0]=c->r[3]^0x80000000u; // 800990BC
  c->r[3]=c->r[1]+0x000000A8u; // 800990C0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800990C4
  c->r[4]=0u+0x0000007Au; // 800990C8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=RF64(ea);} // 800990CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 800990D0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 800990D4
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 800990D8
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 800990DC
  c->lr=0x800990E4u; f_80163C44(c); // 800990E0
  c->lr=0x800990E8u; f_8025AE00(c); // 800990E4
  c->r[0]=c->r[3]^0x80000000u; // 800990E8
  c->f[0]=-c->f[22]; // 800990EC
  W32(c->r[1]+0x000000DCu,c->r[0]); // 800990F0
  c->f[2]=c->ps1[2]=S(c->f[22]*c->f[31]); // 800990F4
  c->r[3]=c->r[1]+0x00000048u; // 800990F8
  c->r[4]=0u+0x00000078u; // 800990FC
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[3]=RF64(ea);} // 80099100
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 80099104
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[27]); // 80099108
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 8009910C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[28]); // 80099110
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099114
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80099118
  c->lr=0x80099120u; f_80163C44(c); // 8009911C
  c->r[3]=c->r[1]+0x000000A8u; // 80099120
  c->r[4]=c->r[1]+0x00000048u; // 80099124
  c->r[5]=c->r[3]|c->r[3]; // 80099128
  c->lr=0x80099130u; f_80163898(c); // 8009912C
  c->r[4]=c->r[1]+0x000000A8u; // 80099130
  c->r[3]=c->r[1]+0x00000078u; // 80099134
  c->r[5]=c->r[4]|c->r[4]; // 80099138
  c->lr=0x80099140u; f_80163898(c); // 8009913C
  c->r[3]=c->r[1]+0x000000A8u; // 80099140
  c->r[4]=c->r[1]+0x00000020u; // 80099144
  c->r[5]=c->r[1]+0x00000014u; // 80099148
  c->lr=0x80099150u; f_801643D8(c); // 8009914C
  c->f[1]=c->f[25]; // 80099150
  c->r[3]=c->r[1]+0x00000014u; // 80099154
  c->r[4]=c->r[1]+0x0000003Cu; // 80099158
  c->lr=0x80099160u; f_8016482C(c); // 8009915C
  c->f[1]=c->ps1[1]=S(c->f[25]+c->f[24]); // 80099160
  c->r[3]=c->r[1]+0x00000014u; // 80099164
  c->r[4]=c->r[1]+0x00000030u; // 80099168
  c->lr=0x80099170u; f_8016482C(c); // 8009916C
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099170
  c->r[4]=c->r[26]|c->r[26]; // 80099174
  c->r[3]=c->r[1]+0x00000030u; // 80099178
  c->r[5]=c->r[0]+c->r[31]; // 8009917C
  c->lr=0x80099184u; f_801647E4(c); // 80099180
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099184
  c->r[4]=c->r[26]|c->r[26]; // 80099188
  c->r[3]=c->r[1]+0x0000003Cu; // 8009918C
  c->r[5]=c->r[0]+c->r[31]; // 80099190
  c->r[5]=c->r[5]+0x0000000Cu; // 80099194
  c->lr=0x8009919Cu; f_801647E4(c); // 80099198
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009919C
  c->f[1]=c->f[23]; // 800991A0
  c->r[3]=c->r[1]+0x00000014u; // 800991A4
  c->r[4]=c->r[0]+c->r[31]; // 800991A8
  c->r[4]=c->r[4]+0x00000018u; // 800991AC
  c->lr=0x800991B4u; f_8016482C(c); // 800991B0
  c->r[24]=R32(c->r[25]+0x00000040u); // 800991B4
  c->lr=0x800991BCu; f_8025AE00(c); // 800991B8
  c->r[3]=c->r[3]^0x80000000u; // 800991BC
  {uint32_t ea=c->r[24]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800991C0
  W32(c->r[1]+0x000000E4u,c->r[3]); // 800991C4
  {uint32_t ea=c->r[24]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800991C8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=RF64(ea);} // 800991CC
  c->r[0]=R32(c->r[25]+0x00000044u); // 800991D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800991D4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 800991D8
  c->r[3]=c->r[0]+c->r[31]; // 800991DC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 800991E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800991E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800991E8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800991EC
  c->r[24]=R32(c->r[25]+0x00000040u); // 800991F0
  c->lr=0x800991F8u; f_8025AE00(c); // 800991F4
  c->r[3]=c->r[3]^0x80000000u; // 800991F8
  {uint32_t ea=c->r[24]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800991FC
  W32(c->r[1]+0x000000DCu,c->r[3]); // 80099200
  {uint32_t ea=c->r[24]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099204
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 80099208
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009920C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099210
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80099214
  c->r[3]=c->r[0]+c->r[31]; // 80099218
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009921C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099220
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80099224
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80099228
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009922C
  c->lr=0x80099234u; f_8025AE00(c); // 80099230
  c->r[3]=c->r[3]^0x80000000u; // 80099234
  {uint32_t ea=c->r[24]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099238
  W32(c->r[1]+0x000000E4u,c->r[3]); // 8009923C
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80099240
  {uint32_t ea=c->r[24]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099244
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=RF64(ea);} // 80099248
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009924C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099250
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 80099254
  c->r[3]=c->r[0]+c->r[31]; // 80099258
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009925C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099260
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80099264
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80099268
  c->r[0]=R32(c->r[25]+0x00000050u); // 8009926C
  c->r[3]=R32(c->r[25]+0x00000044u); // 80099270
  c->r[4]=c->r[0]+c->r[5]; // 80099274
  c->r[0]=R8(c->r[5]+c->r[0]); // 80099278
  c->r[3]=c->r[3]+c->r[31]; // 8009927C
  W8(c->r[3]+0x00000024u,c->r[0]); // 80099280
  c->r[0]=R8(c->r[4]+0x00000001u); // 80099284
  W8(c->r[3]+0x00000025u,c->r[0]); // 80099288
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009928C
  W8(c->r[3]+0x00000026u,c->r[0]); // 80099290
  c->r[0]=R8(c->r[4]+0x00000003u); // 80099294
  W8(c->r[3]+0x00000027u,c->r[0]); // 80099298
  c->r[0]=R32(c->r[25]+0x00000054u); // 8009929C
  c->r[3]=R32(c->r[25]+0x00000044u); // 800992A0
  c->r[4]=c->r[0]+c->r[5]; // 800992A4
  c->r[0]=R8(c->r[5]+c->r[0]); // 800992A8
  c->r[3]=c->r[3]+c->r[31]; // 800992AC
  W8(c->r[3]+0x00000028u,c->r[0]); // 800992B0
  c->r[0]=R8(c->r[4]+0x00000001u); // 800992B4
  W8(c->r[3]+0x00000029u,c->r[0]); // 800992B8
  c->r[0]=R8(c->r[4]+0x00000002u); // 800992BC
  W8(c->r[3]+0x0000002Au,c->r[0]); // 800992C0
  c->r[0]=R8(c->r[4]+0x00000003u); // 800992C4
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 800992C8
  c->r[24]=R32(c->r[25]+0x00000040u); // 800992CC
  c->lr=0x800992D4u; f_8025AE00(c); // 800992D0
  c->r[3]=c->r[3]^0x80000000u; // 800992D4
  c->r[29]=c->r[29]+0x00000001u; // 800992D8
  W32(c->r[1]+0x000000DCu,c->r[3]); // 800992DC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 800992E0
  c->r[0]=R32(c->r[25]+0x00000044u); // 800992E4
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 800992E8
  {uint32_t ea=c->r[24]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800992EC
  c->r[3]=c->r[0]+c->r[31]; // 800992F0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 800992F4
  {uint32_t ea=c->r[24]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800992F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800992FC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80099300
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099304
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80099308
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8009930C
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099310
  c->r[3]=c->r[0]+c->r[31]; // 80099314
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[21]);} // 80099318
  if (!crb(c,0)) { goto L_80099334; } // 8009931C
L_80099320:;
  c->r[31]=c->r[31]+0x00000040u; // 80099320
  c->r[30]=c->r[30]+0x00000001u; // 80099324
L_80099328:;
  c->r[0]=R32(c->r[25]+0x0000004Cu); // 80099328
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009932C
  if (crb(c,0)) { IRQCHK(c); goto L_80098FFC; } // 80099330
L_80099334:;
  c->r[0]=0u+0x00000001u; // 80099334
  c->r[3]=0u+0x00000001u; // 80099338
  W8(c->r[25]+0x00000038u,c->r[0]); // 8009933C
L_80099340:;
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,31,ea,0,0);} // 80099340
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[31]=RF64(ea);} // 80099344
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,30,ea,0,0);} // 80099348
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[30]=RF64(ea);} // 8009934C
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,29,ea,0,0);} // 80099350
  {uint32_t ea=c->r[1]+0x00000190u; c->f[29]=RF64(ea);} // 80099354
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,28,ea,0,0);} // 80099358
  {uint32_t ea=c->r[1]+0x00000180u; c->f[28]=RF64(ea);} // 8009935C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,27,ea,0,0);} // 80099360
  {uint32_t ea=c->r[1]+0x00000170u; c->f[27]=RF64(ea);} // 80099364
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,26,ea,0,0);} // 80099368
  {uint32_t ea=c->r[1]+0x00000160u; c->f[26]=RF64(ea);} // 8009936C
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,25,ea,0,0);} // 80099370
  {uint32_t ea=c->r[1]+0x00000150u; c->f[25]=RF64(ea);} // 80099374
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,24,ea,0,0);} // 80099378
  {uint32_t ea=c->r[1]+0x00000140u; c->f[24]=RF64(ea);} // 8009937C
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,23,ea,0,0);} // 80099380
  {uint32_t ea=c->r[1]+0x00000130u; c->f[23]=RF64(ea);} // 80099384
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,22,ea,0,0);} // 80099388
  {uint32_t ea=c->r[1]+0x00000120u; c->f[22]=RF64(ea);} // 8009938C
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,21,ea,0,0);} // 80099390
  c->r[11]=c->r[1]+0x00000110u; // 80099394
  {uint32_t ea=c->r[1]+0x00000110u; c->f[21]=RF64(ea);} // 80099398
  c->lr=0x800993A0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009939C
  c->r[0]=R32(c->r[1]+0x000001C4u); // 800993A0
  c->lr=c->r[0]; // 800993A4
  c->r[1]=c->r[1]+0x000001C0u; // 800993A8
  return; // 800993AC
}

// fn_800993B0
void f_800993B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800993B0
  c->r[0]=c->lr; // 800993B4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800993B8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800993BC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800993C0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800993C4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800993C8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 800993CC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 800993D0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800993D4
  W32(c->r[1]+0x00000058u,c->r[30]); // 800993D8
  W32(c->r[1]+0x00000054u,c->r[29]); // 800993DC
  c->r[29]=c->r[3]|c->r[3]; // 800993E0
  W32(c->r[1]+0x00000050u,c->r[28]); // 800993E4
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 800993E8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800993EC
  c->ctr=c->r[12]; // 800993F0
  if (true) { c->lr=0x800993F8u; dispatch(c,c->ctr); } // 800993F4
  cmps(c,0,(int32_t)c->r[3],0); // 800993F8
  if (!crb(c,2)) { goto L_80099408; } // 800993FC
  c->r[3]=0u+0x00000000u; // 80099400
  goto L_800995E4; // 80099404
L_80099408:;
  {uint32_t ea=c->r[29]+0x00000034u; c->f[30]=c->ps1[30]=RF32(ea);} // 80099408
  c->r[30]=0u+0x00000000u; // 8009940C
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 80099410
  c->r[31]=0u+0x00000000u; // 80099414
  goto L_800995D4; // 80099418
L_8009941C:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009941C
  c->r[28]=c->r[0]+c->r[31]; // 80099420
  {uint32_t ea=c->r[28]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099424
  fcmp(c,0,c->f[0],c->f[31]); // 80099428
  if (!crb(c,1)) { goto L_800995CC; } // 8009942C
  {uint32_t ea=c->r[28]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099430
  {uint32_t ea=c->r[29]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80099434
  c->lr=0x8009943Cu; f_80262BAC(c); // 80099438
  {uint32_t ea=c->r[28]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009943C
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80099440
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80099444
  c->f[1]=c->f[30]; // 80099448
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009944C
  c->r[3]=c->r[28]+0x00000018u; // 80099450
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 80099454
  c->r[4]=c->r[1]+0x00000030u; // 80099458
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8009945C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80099460
  c->lr=0x80099468u; f_8016482C(c); // 80099464
  c->r[0]=R32(c->r[29]+0x00000044u); // 80099468
  c->r[3]=c->r[1]+0x00000030u; // 8009946C
  c->r[4]=c->r[1]+0x0000003Cu; // 80099470
  c->r[5]=c->r[0]+c->r[31]; // 80099474
  {uint32_t ea=c->r[5]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099478
  c->lr=0x80099480u; f_8016482C(c); // 8009947C
  c->r[0]=R32(c->r[29]+0x00000044u); // 80099480
  c->r[4]=c->r[1]+0x00000030u; // 80099484
  c->r[3]=c->r[0]+c->r[31]; // 80099488
  c->r[5]=c->r[3]|c->r[3]; // 8009948C
  c->lr=0x80099494u; f_801647E4(c); // 80099490
  c->r[0]=R32(c->r[29]+0x00000044u); // 80099494
  c->r[4]=c->r[1]+0x0000003Cu; // 80099498
  c->r[3]=c->r[0]+c->r[31]; // 8009949C
  c->r[3]=c->r[3]+0x0000000Cu; // 800994A0
  c->r[5]=c->r[3]|c->r[3]; // 800994A4
  c->lr=0x800994ACu; f_801647E4(c); // 800994A8
  c->r[0]=R32(c->r[29]+0x00000044u); // 800994AC
  c->r[3]=c->r[0]+c->r[31]; // 800994B0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800994B4
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800994B8
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 800994BC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 800994C0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800994C4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800994C8
  c->r[0]=R32(c->r[29]+0x00000044u); // 800994CC
  c->r[3]=c->r[0]+c->r[31]; // 800994D0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800994D4
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 800994D8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800994DC
  c->r[0]=R32(c->r[29]+0x00000044u); // 800994E0
  c->r[3]=c->r[0]+c->r[31]; // 800994E4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800994E8
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 800994EC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800994F0
  c->r[0]=R32(c->r[29]+0x00000044u); // 800994F4
  c->r[3]=c->r[0]+c->r[31]; // 800994F8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800994FC
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099500
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 80099504
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099508
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009950C
  c->r[0]=R32(c->r[29]+0x00000070u); // 80099510
  cmps(c,0,(int32_t)c->r[0],0); // 80099514
  if (crb(c,2)) { goto L_800995CC; } // 80099518
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009951C
  c->r[3]=c->r[1]+0x00000020u; // 80099520
  c->r[4]=c->r[1]+0x00000008u; // 80099524
  c->r[6]=c->r[0]+c->r[31]; // 80099528
  c->r[5]=R32(c->r[31]+c->r[0]); // 8009952C
  c->r[0]=R32(c->r[6]+0x00000004u); // 80099530
  W32(c->r[1]+0x00000008u,c->r[5]); // 80099534
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80099538
  c->r[0]=R32(c->r[6]+0x00000008u); // 8009953C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80099540
  c->r[12]=R32(c->r[29]+0x00000070u); // 80099544
  c->ctr=c->r[12]; // 80099548
  if (true) { c->lr=0x80099550u; dispatch(c,c->ctr); } // 8009954C
  cmps(c,0,(int32_t)c->r[3],0); // 80099550
  if (crb(c,2)) { goto L_800995CC; } // 80099554
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099558
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009955C
  fcmp(c,0,c->f[1],c->f[0]); // 80099560
  if (!crb(c,0)) { goto L_800995CC; } // 80099564
  c->r[0]=R32(c->r[29]+0x00000044u); // 80099568
  c->r[3]=c->r[0]+c->r[31]; // 8009956C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099570
  fcmp(c,0,c->f[1],c->f[0]); // 80099574
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80099578
  if (!crb(c,2)) { goto L_800995CC; } // 8009957C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80099580
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80099584
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80099588
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009958C
  {uint32_t ea=c->r[31]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80099590
  c->r[3]=c->r[0]+c->r[31]; // 80099594
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80099598
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009959C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800995A0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800995A4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800995A8
  c->r[0]=R32(c->r[29]+0x00000044u); // 800995AC
  c->r[3]=R32(c->r[29]+0x00000040u); // 800995B0
  c->r[4]=c->r[0]+c->r[31]; // 800995B4
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800995B8
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800995BC
  c->f[1]=-c->f[1]; // 800995C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800995C4
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 800995C8
L_800995CC:;
  c->r[31]=c->r[31]+0x00000040u; // 800995CC
  c->r[30]=c->r[30]+0x00000001u; // 800995D0
L_800995D4:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 800995D4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800995D8
  if (crb(c,0)) { IRQCHK(c); goto L_8009941C; } // 800995DC
  c->r[3]=0u+0x00000001u; // 800995E0
L_800995E4:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800995E4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800995E8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800995EC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800995F0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 800995F4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 800995F8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800995FC
  c->r[30]=R32(c->r[1]+0x00000058u); // 80099600
  c->r[29]=R32(c->r[1]+0x00000054u); // 80099604
  c->r[0]=R32(c->r[1]+0x00000094u); // 80099608
  c->r[28]=R32(c->r[1]+0x00000050u); // 8009960C
  c->lr=c->r[0]; // 80099610
  c->r[1]=c->r[1]+0x00000090u; // 80099614
  return; // 80099618
}

// fn_8009961C
void f_8009961C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009961C
  c->r[0]=c->lr; // 80099620
  W32(c->r[1]+0x00000014u,c->r[0]); // 80099624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80099628
  c->r[31]=c->r[3]|c->r[3]; // 8009962C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 80099630
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80099634
  c->ctr=c->r[12]; // 80099638
  if (true) { c->lr=0x80099640u; dispatch(c,c->ctr); } // 8009963C
  cmps(c,0,(int32_t)c->r[3],0); // 80099640
  if (!crb(c,2)) { goto L_80099650; } // 80099644
  c->r[3]=0u+0x00000000u; // 80099648
  goto L_80099834; // 8009964C
L_80099650:;
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099650
  c->r[4]=0u+0x00000000u; // 80099654
  c->r[5]=0u+0x00000000u; // 80099658
  c->r[3]=0u+0x00000000u; // 8009965C
  c->r[6]=0u+0x00000000u; // 80099660
  goto L_80099810; // 80099664
L_80099668:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 80099668
  c->r[7]=c->r[0]+c->r[3]; // 8009966C
  {uint32_t ea=c->r[7]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099670
  fcmp(c,0,c->f[0],c->f[1]); // 80099674
  if (!crb(c,1)) { goto L_80099808; } // 80099678
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009967C
  c->r[4]=c->r[4]+0x00000001u; // 80099680
  c->r[7]=R32(c->r[31]+0x00000048u); // 80099684
  {uint32_t ea=c->r[7]+c->r[6]; WF32(ea,c->f[0]);} // 80099688
  c->r[7]=R32(c->r[31]+0x00000044u); // 8009968C
  c->r[0]=R32(c->r[31]+0x00000048u); // 80099690
  c->r[7]=c->r[7]+c->r[3]; // 80099694
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099698
  c->r[7]=c->r[0]+c->r[6]; // 8009969C
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 800996A0
  c->r[7]=R32(c->r[31]+0x00000044u); // 800996A4
  c->r[0]=R32(c->r[31]+0x00000048u); // 800996A8
  c->r[7]=c->r[7]+c->r[3]; // 800996AC
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800996B0
  c->r[7]=c->r[0]+c->r[6]; // 800996B4
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 800996B8
  c->r[7]=R32(c->r[31]+0x00000044u); // 800996BC
  c->r[0]=R32(c->r[31]+0x00000048u); // 800996C0
  c->r[7]=c->r[7]+c->r[3]; // 800996C4
  c->r[8]=R8(c->r[7]+0x00000024u); // 800996C8
  c->r[7]=c->r[0]+c->r[6]; // 800996CC
  W8(c->r[7]+0x0000000Cu,c->r[8]); // 800996D0
  c->r[7]=R32(c->r[31]+0x00000044u); // 800996D4
  c->r[0]=R32(c->r[31]+0x00000048u); // 800996D8
  c->r[7]=c->r[7]+c->r[3]; // 800996DC
  c->r[8]=R8(c->r[7]+0x00000025u); // 800996E0
  c->r[7]=c->r[0]+c->r[6]; // 800996E4
  W8(c->r[7]+0x0000000Du,c->r[8]); // 800996E8
  c->r[7]=R32(c->r[31]+0x00000044u); // 800996EC
  c->r[0]=R32(c->r[31]+0x00000048u); // 800996F0
  c->r[7]=c->r[7]+c->r[3]; // 800996F4
  c->r[8]=R8(c->r[7]+0x00000026u); // 800996F8
  c->r[7]=c->r[0]+c->r[6]; // 800996FC
  W8(c->r[7]+0x0000000Eu,c->r[8]); // 80099700
  c->r[7]=R32(c->r[31]+0x00000044u); // 80099704
  c->r[0]=R32(c->r[31]+0x00000048u); // 80099708
  c->r[7]=c->r[7]+c->r[3]; // 8009970C
  c->r[8]=R8(c->r[7]+0x00000027u); // 80099710
  c->r[7]=c->r[0]+c->r[6]; // 80099714
  W8(c->r[7]+0x0000000Fu,c->r[8]); // 80099718
  c->r[0]=R32(c->r[31]+0x00000048u); // 8009971C
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099720
  c->r[7]=c->r[0]+c->r[6]; // 80099724
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 80099728
  c->r[0]=R32(c->r[31]+0x00000048u); // 8009972C
  {uint32_t ea=c->r[31]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099730
  c->r[7]=c->r[0]+c->r[6]; // 80099734
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 80099738
  c->r[7]=R32(c->r[31]+0x00000044u); // 8009973C
  c->r[0]=R32(c->r[31]+0x00000048u); // 80099740
  c->r[7]=c->r[7]+c->r[3]; // 80099744
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099748
  c->r[7]=c->r[0]+c->r[6]; // 8009974C
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[0]);} // 80099750
  c->r[7]=R32(c->r[31]+0x00000044u); // 80099754
  c->r[0]=R32(c->r[31]+0x00000048u); // 80099758
  c->r[7]=c->r[7]+c->r[3]; // 8009975C
  {uint32_t ea=c->r[7]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099760
  c->r[7]=c->r[0]+c->r[6]; // 80099764
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[0]);} // 80099768
  c->r[7]=R32(c->r[31]+0x00000044u); // 8009976C
  c->r[0]=R32(c->r[31]+0x00000048u); // 80099770
  c->r[7]=c->r[7]+c->r[3]; // 80099774
  {uint32_t ea=c->r[7]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099778
  c->r[7]=c->r[0]+c->r[6]; // 8009977C
  {uint32_t ea=c->r[7]+0x00000020u; WF32(ea,c->f[0]);} // 80099780
  c->r[7]=R32(c->r[31]+0x00000044u); // 80099784
  c->r[0]=R32(c->r[31]+0x00000048u); // 80099788
  c->r[7]=c->r[7]+c->r[3]; // 8009978C
  c->r[8]=R8(c->r[7]+0x00000028u); // 80099790
  c->r[7]=c->r[0]+c->r[6]; // 80099794
  W8(c->r[7]+0x00000024u,c->r[8]); // 80099798
  c->r[7]=R32(c->r[31]+0x00000044u); // 8009979C
  c->r[0]=R32(c->r[31]+0x00000048u); // 800997A0
  c->r[7]=c->r[7]+c->r[3]; // 800997A4
  c->r[8]=R8(c->r[7]+0x00000029u); // 800997A8
  c->r[7]=c->r[0]+c->r[6]; // 800997AC
  W8(c->r[7]+0x00000025u,c->r[8]); // 800997B0
  c->r[7]=R32(c->r[31]+0x00000044u); // 800997B4
  c->r[0]=R32(c->r[31]+0x00000048u); // 800997B8
  c->r[7]=c->r[7]+c->r[3]; // 800997BC
  c->r[8]=R8(c->r[7]+0x0000002Au); // 800997C0
  c->r[7]=c->r[0]+c->r[6]; // 800997C4
  W8(c->r[7]+0x00000026u,c->r[8]); // 800997C8
  c->r[7]=R32(c->r[31]+0x00000044u); // 800997CC
  c->r[0]=R32(c->r[31]+0x00000048u); // 800997D0
  c->r[7]=c->r[7]+c->r[3]; // 800997D4
  c->r[8]=R8(c->r[7]+0x0000002Bu); // 800997D8
  c->r[7]=c->r[0]+c->r[6]; // 800997DC
  W8(c->r[7]+0x00000027u,c->r[8]); // 800997E0
  c->r[0]=R32(c->r[31]+0x00000048u); // 800997E4
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800997E8
  c->r[7]=c->r[0]+c->r[6]; // 800997EC
  {uint32_t ea=c->r[7]+0x00000028u; WF32(ea,c->f[0]);} // 800997F0
  c->r[0]=R32(c->r[31]+0x00000048u); // 800997F4
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800997F8
  c->r[7]=c->r[0]+c->r[6]; // 800997FC
  c->r[6]=c->r[6]+0x00000030u; // 80099800
  {uint32_t ea=c->r[7]+0x0000002Cu; WF32(ea,c->f[0]);} // 80099804
L_80099808:;
  c->r[3]=c->r[3]+0x00000040u; // 80099808
  c->r[5]=c->r[5]+0x00000001u; // 8009980C
L_80099810:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 80099810
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80099814
  if (crb(c,0)) { IRQCHK(c); goto L_80099668; } // 80099818
  c->r[0]=0u-c->r[4]; // 8009981C
  W32(c->r[31]+0x00000074u,c->r[4]); // 80099820
  c->r[0]=c->r[0]&~c->r[4]; // 80099824
  c->r[3]=0u+0x00000001u; // 80099828
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8009982C
  W8(c->r[31]+0x00000038u,c->r[0]); // 80099830
L_80099834:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80099834
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80099838
  c->lr=c->r[0]; // 8009983C
  c->r[1]=c->r[1]+0x00000010u; // 80099840
  return; // 80099844
}

// fn_80099848
void f_80099848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80099848
  c->r[0]=c->lr; // 8009984C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80099850
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80099854
  c->r[31]=c->r[3]|c->r[3]; // 80099858
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009985C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80099860
  c->ctr=c->r[12]; // 80099864
  if (true) { c->lr=0x8009986Cu; dispatch(c,c->ctr); } // 80099868
  cmps(c,0,(int32_t)c->r[3],0); // 8009986C
  if (!crb(c,2)) { goto L_8009987C; } // 80099870
  c->r[3]=0u+0x00000000u; // 80099874
  goto L_80099900; // 80099878
L_8009987C:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 8009987C
  cmps(c,0,(int32_t)c->r[0],1); // 80099880
  if (!crb(c,0)) { goto L_80099890; } // 80099884
  c->r[3]=0u+0x00000000u; // 80099888
  goto L_80099900; // 8009988C
L_80099890:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80099890
  cmps(c,0,(int32_t)c->r[3],0); // 80099894
  if (crb(c,2)) { goto L_800998B4; } // 80099898
  c->r[12]=R32(c->r[3]+0x00000160u); // 8009989C
  c->r[4]=c->r[1]+0x00000008u; // 800998A0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800998A4
  c->ctr=c->r[12]; // 800998A8
  if (true) { c->lr=0x800998B0u; dispatch(c,c->ctr); } // 800998AC
  goto L_800998C0; // 800998B0
L_800998B4:;
  c->r[3]=c->r[31]+0x00000004u; // 800998B4
  c->r[4]=c->r[1]+0x00000008u; // 800998B8
  c->lr=0x800998C0u; f_80163864(c); // 800998BC
L_800998C0:;
  c->r[4]=R32(c->r[31]+0x00000040u); // 800998C0
  c->r[3]=0u+0x00000005u; // 800998C4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800998C8
  c->lr=0x800998D0u; f_800E6D14(c); // 800998CC
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800998D0
  c->r[4]=0u+0x00000000u; // 800998D4
  c->lr=0x800998DCu; f_800E6D10(c); // 800998D8
  c->r[3]=0u+0x00000000u; // 800998DC
  c->lr=0x800998E4u; f_800E6D6C(c); // 800998E0
  c->r[0]=R32(c->r[31]+0x00000074u); // 800998E4
  c->r[3]=c->r[1]+0x00000008u; // 800998E8
  c->r[4]=R32(c->r[31]+0x00000048u); // 800998EC
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800998F0
  c->lr=0x800998F8u; f_800E6D80(c); // 800998F4
  c->lr=0x800998FCu; f_800E6FE8(c); // 800998F8
  c->r[3]=0u+0x00000001u; // 800998FC
L_80099900:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80099900
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80099904
  c->lr=c->r[0]; // 80099908
  c->r[1]=c->r[1]+0x00000040u; // 8009990C
  return; // 80099910
}

// fn_80099914
void f_80099914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80099914
  c->r[0]=c->lr; // 80099918
  c->r[5]=c->r[13]+0xFFFF8A70u; // 8009991C
  c->r[8]=0u+0x802C0000u; // 80099920
  W32(c->r[1]+0x00000014u,c->r[0]); // 80099924
  c->r[6]=0u+0x800A0000u; // 80099928
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009992C
  c->r[7]=0u+0x00000000u; // 80099930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80099934
  c->r[4]=c->r[5]+0x00000004u; // 80099938
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009993C
  c->r[8]=c->r[8]+0xFFFFCBC8u; // 80099940
  {uint32_t ea=c->r[2]+0xFFFF9364u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099944
  c->r[0]=0u+0x00000001u; // 80099948
  c->r[6]=c->r[6]+0xFFFF83A0u; // 8009994C
  W32(c->r[3]+0x00000040u,c->r[8]); // 80099950
  c->r[31]=c->r[3]|c->r[3]; // 80099954
  W32(c->r[3]+0x00000044u,c->r[7]); // 80099958
  W32(c->r[3]+0x00000048u,c->r[7]); // 8009995C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[2]);} // 80099960
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 80099964
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80099968
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 8009996C
  W32(c->r[3]+0x00000070u,c->r[6]); // 80099970
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 80099974
  W32(c->r[3]+0x00000074u,c->r[7]); // 80099978
  W8(c->r[3]+0x00000038u,c->r[7]); // 8009997C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80099980
  W32(c->r[3]+0x00000050u,c->r[5]); // 80099984
  W32(c->r[3]+0x00000054u,c->r[4]); // 80099988
  W32(c->r[3]+0x00000058u,c->r[0]); // 8009998C
  c->r[3]=0u+0x00000006u; // 80099990
  c->lr=0x80099998u; f_800980D8(c); // 80099994
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 80099998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009999C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800999A0
  c->lr=c->r[0]; // 800999A4
  c->r[1]=c->r[1]+0x00000010u; // 800999A8
  return; // 800999AC
}

// fn_800999B0
void f_800999B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800999B0
  c->r[0]=c->lr; // 800999B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800999B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800999BC
  c->r[31]=c->r[3]|c->r[3]; // 800999C0
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 800999C4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800999C8
  c->ctr=c->r[12]; // 800999CC
  if (true) { c->lr=0x800999D4u; dispatch(c,c->ctr); } // 800999D0
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 800999D4
  c->r[3]=c->r[31]|c->r[31]; // 800999D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800999DC
  c->ctr=c->r[12]; // 800999E0
  if (true) { c->lr=0x800999E8u; dispatch(c,c->ctr); } // 800999E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800999E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800999EC
  c->lr=c->r[0]; // 800999F0
  c->r[1]=c->r[1]+0x00000010u; // 800999F4
  return; // 800999F8
}

// fn_800999FC
void f_800999FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800999FC
  c->r[0]=c->lr; // 80099A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80099A04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80099A08
  c->r[31]=c->r[4]|c->r[4]; // 80099A0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80099A10
  c->r[30]=c->r[3]|c->r[3]; // 80099A14
  c->lr=0x80099A1Cu; f_80098038(c); // 80099A18
  W32(c->r[30]+0x00000044u,c->r[3]); // 80099A1C
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)68); // 80099A20
  c->lr=0x80099A28u; f_80098028(c); // 80099A24
  c->lr=0x80099A2Cu; f_80098038(c); // 80099A28
  W32(c->r[30]+0x00000048u,c->r[3]); // 80099A2C
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)96); // 80099A30
  c->lr=0x80099A38u; f_80098028(c); // 80099A34
  W32(c->r[30]+0x0000004Cu,c->r[31]); // 80099A38
  c->r[3]=c->r[30]|c->r[30]; // 80099A3C
  c->r[12]=R32(c->r[30]+0x0000003Cu); // 80099A40
  c->r[12]=R32(c->r[12]+0x00000020u); // 80099A44
  c->ctr=c->r[12]; // 80099A48
  if (true) { c->lr=0x80099A50u; dispatch(c,c->ctr); } // 80099A4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80099A50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80099A54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80099A58
  c->lr=c->r[0]; // 80099A5C
  c->r[1]=c->r[1]+0x00000010u; // 80099A60
  return; // 80099A64
}

// fn_80099A68
void f_80099A68(Ctx* __restrict c) {
  cmps(c,1,(int32_t)c->r[6],0); // 80099A68
  W32(c->r[3]+0x00000044u,c->r[4]); // 80099A6C
  c->r[4]=0u+0x00000000u; // 80099A70
  W32(c->r[3]+0x00000048u,c->r[5]); // 80099A74
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 80099A78
  if (!crb(c,5)) return; // 80099A7C
  cmps(c,0,(int32_t)c->r[6],8); // 80099A80
  c->r[7]=c->r[6]+0xFFFFFFF8u; // 80099A84
  if (!crb(c,1)) { goto L_80099B38; } // 80099A88
  c->r[8]=0u+0x00000000u; // 80099A8C
  if (crb(c,4)) { goto L_80099AA8; } // 80099A90
  c->r[5]=0u+0x80000000u; // 80099A94
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 80099A98
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80099A9C
  if (crb(c,1)) { goto L_80099AA8; } // 80099AA0
  c->r[8]=0u+0x00000001u; // 80099AA4
L_80099AA8:;
  cmps(c,0,(int32_t)c->r[8],0); // 80099AA8
  if (crb(c,2)) { goto L_80099B38; } // 80099AAC
  c->r[0]=c->r[7]+0x00000007u; // 80099AB0
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099AB4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80099AB8
  c->r[8]=0u+0x00000000u; // 80099ABC
  c->ctr=c->r[0]; // 80099AC0
  cmps(c,0,(int32_t)c->r[7],0); // 80099AC4
  if (!crb(c,1)) { goto L_80099B38; } // 80099AC8
L_80099ACC:;
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099ACC
  c->r[4]=c->r[4]+0x00000008u; // 80099AD0
  c->r[5]=c->r[0]+c->r[8]; // 80099AD4
  {uint32_t ea=c->r[5]+0x00000040u; WF32(ea,c->f[0]);} // 80099AD8
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099ADC
  c->r[5]=c->r[0]+c->r[8]; // 80099AE0
  {uint32_t ea=c->r[5]+0x00000084u; WF32(ea,c->f[0]);} // 80099AE4
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099AE8
  c->r[5]=c->r[0]+c->r[8]; // 80099AEC
  {uint32_t ea=c->r[5]+0x000000C8u; WF32(ea,c->f[0]);} // 80099AF0
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099AF4
  c->r[5]=c->r[0]+c->r[8]; // 80099AF8
  {uint32_t ea=c->r[5]+0x0000010Cu; WF32(ea,c->f[0]);} // 80099AFC
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099B00
  c->r[5]=c->r[0]+c->r[8]; // 80099B04
  {uint32_t ea=c->r[5]+0x00000150u; WF32(ea,c->f[0]);} // 80099B08
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099B0C
  c->r[5]=c->r[0]+c->r[8]; // 80099B10
  {uint32_t ea=c->r[5]+0x00000194u; WF32(ea,c->f[0]);} // 80099B14
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099B18
  c->r[5]=c->r[0]+c->r[8]; // 80099B1C
  {uint32_t ea=c->r[5]+0x000001D8u; WF32(ea,c->f[0]);} // 80099B20
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099B24
  c->r[5]=c->r[0]+c->r[8]; // 80099B28
  c->r[8]=c->r[8]+0x00000220u; // 80099B2C
  {uint32_t ea=c->r[5]+0x0000021Cu; WF32(ea,c->f[0]);} // 80099B30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80099ACC; } // 80099B34
L_80099B38:;
  c->r[0]=c->r[6]-c->r[4]; // 80099B38
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099B3C
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 80099B40
  c->ctr=c->r[0]; // 80099B44
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 80099B48
  if (!crb(c,0)) return; // 80099B4C
L_80099B50:;
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099B50
  c->r[4]=c->r[0]+c->r[5]; // 80099B54
  c->r[5]=c->r[5]+0x00000044u; // 80099B58
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 80099B5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80099B50; } // 80099B60
  return; // 80099B64
}

// fn_80099B68
void f_80099B68(Ctx* __restrict c) {
  W32(c->r[3]+0x00000040u,c->r[4]); // 80099B68
  return; // 80099B6C
}

// fn_80099B70
void f_80099B70(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099B70
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 80099B74
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099B78
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 80099B7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099B80
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 80099B84
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099B88
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 80099B8C
  return; // 80099B90
}

// fn_80099B94
void f_80099B94(Ctx* __restrict c) {
  W32(c->r[3]+0x00000070u,c->r[4]); // 80099B94
  return; // 80099B98
}

// fn_80099B9C
void f_80099B9C(Ctx* __restrict c) {
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 80099B9C
  return; // 80099BA0
}

// fn_80099BA4
void f_80099BA4(Ctx* __restrict c) {
  W32(c->r[3]+0x00000050u,c->r[4]); // 80099BA4
  W32(c->r[3]+0x00000054u,c->r[5]); // 80099BA8
  W32(c->r[3]+0x00000058u,c->r[6]); // 80099BAC
  return; // 80099BB0
}

// fn_80099BB4
void f_80099BB4(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000038u); // 80099BB4
  return; // 80099BB8
}

// fn_80099BBC
void f_80099BBC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80099BBC
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099BC0
  W32(c->r[3]+0x00000074u,c->r[0]); // 80099BC4
  c->r[6]=0u+0x00000000u; // 80099BC8
  c->r[5]=0u+0x00000000u; // 80099BCC
  W8(c->r[3]+0x00000038u,c->r[0]); // 80099BD0
  goto L_80099BEC; // 80099BD4
L_80099BD8:;
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099BD8
  c->r[6]=c->r[6]+0x00000001u; // 80099BDC
  c->r[4]=c->r[0]+c->r[5]; // 80099BE0
  c->r[5]=c->r[5]+0x00000044u; // 80099BE4
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 80099BE8
L_80099BEC:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80099BEC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 80099BF0
  if (crb(c,0)) { IRQCHK(c); goto L_80099BD8; } // 80099BF4
  return; // 80099BF8
}

// fn_80099BFC
void f_80099BFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80099BFC
  c->r[0]=c->lr; // 80099C00
  W32(c->r[1]+0x00000164u,c->r[0]); // 80099C04
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 80099C08
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 80099C0C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 80099C10
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 80099C14
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 80099C18
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 80099C1C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 80099C20
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 80099C24
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 80099C28
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 80099C2C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 80099C30
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 80099C34
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 80099C38
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 80099C3C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 80099C40
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 80099C44
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 80099C48
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 80099C4C
  c->r[11]=c->r[1]+0x000000D0u; // 80099C50
  c->lr=0x80099C58u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80099C54
  c->r[0]=R32(c->r[3]+0x00000044u); // 80099C58
  c->r[6]=0u+0x43300000u; // 80099C5C
  W32(c->r[1]+0x00000098u,c->r[6]); // 80099C60
  c->r[25]=c->r[3]|c->r[3]; // 80099C64
  cmps(c,0,(int32_t)c->r[0],0); // 80099C68
  c->r[26]=c->r[4]|c->r[4]; // 80099C6C
  W32(c->r[1]+0x000000A0u,c->r[6]); // 80099C70
  c->r[27]=c->r[5]|c->r[5]; // 80099C74
  if (!crb(c,2)) { goto L_80099C84; } // 80099C78
  c->r[3]=0u+0x00000000u; // 80099C7C
  goto L_8009A03C; // 80099C80
L_80099C84:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 80099C84
  cmps(c,0,(int32_t)c->r[0],0); // 80099C88
  if (!crb(c,2)) { goto L_80099C98; } // 80099C8C
  c->r[3]=0u+0x00000000u; // 80099C90
  goto L_8009A03C; // 80099C94
L_80099C98:;
  c->r[5]=0u+0x80270000u; // 80099C98
  {uint32_t ea=c->r[5]+0x00002488u; c->r[4]=R32(ea); c->r[5]=ea;} // 80099C9C
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[28]=RF64(ea);} // 80099CA0
  c->r[29]=0u+0x00000000u; // 80099CA4
  c->r[3]=R32(c->r[5]+0x00000004u); // 80099CA8
  c->r[30]=0u+0x00000000u; // 80099CAC
  c->r[0]=R32(c->r[5]+0x00000008u); // 80099CB0
  c->r[31]=0u+0x00000000u; // 80099CB4
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[29]=c->ps1[29]=RF32(ea);} // 80099CB8
  W32(c->r[1]+0x00000008u,c->r[4]); // 80099CBC
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[30]=c->ps1[30]=RF32(ea);} // 80099CC0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80099CC4
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80099CC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80099CCC
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[24]=c->ps1[24]=RF32(ea);} // 80099CD0
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[27]=c->ps1[27]=RF32(ea);} // 80099CD4
  goto L_8009A024; // 80099CD8
L_80099CDC:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099CDC
  c->r[3]=c->r[0]+c->r[31]; // 80099CE0
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099CE4
  fcmp(c,0,c->f[0],c->f[27]); // 80099CE8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80099CEC
  if (!crb(c,2)) { goto L_8009A01C; } // 80099CF0
  c->lr=0x80099CF8u; f_8025AE00(c); // 80099CF4
  c->r[4]=R32(c->r[25]+0x00000058u); // 80099CF8
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099CFC
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 80099D00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80099D04
  c->r[28]=c->r[3]-c->r[0]; // 80099D08
  c->lr=0x80099D10u; f_8025AE00(c); // 80099D0C
  c->r[0]=c->r[3]^0x80000000u; // 80099D10
  {uint32_t ea=c->r[24]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099D14
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80099D18
  {uint32_t ea=c->r[24]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099D1C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80099D20
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099D24
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099D28
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80099D2C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80099D30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099D34
  c->f[26]=c->ps1[26]=S(c->f[1]+c->f[0]); // 80099D38
  c->lr=0x80099D40u; f_8025AE00(c); // 80099D3C
  c->r[0]=c->r[3]^0x80000000u; // 80099D40
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099D44
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80099D48
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099D4C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80099D50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099D54
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099D58
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80099D5C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80099D60
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099D64
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 80099D68
  c->lr=0x80099D70u; f_8025AE00(c); // 80099D6C
  c->r[0]=c->r[3]^0x80000000u; // 80099D70
  {uint32_t ea=c->r[24]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099D74
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80099D78
  {uint32_t ea=c->r[24]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099D7C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80099D80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099D84
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80099D88
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80099D8C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099D90
  c->f[23]=c->ps1[23]=S(c->f[1]+c->f[0]); // 80099D94
  c->lr=0x80099D9Cu; f_8025AE00(c); // 80099D98
  c->r[0]=c->r[3]^0x80000000u; // 80099D9C
  c->r[3]=c->r[1]+0x00000068u; // 80099DA0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80099DA4
  c->r[4]=0u+0x00000079u; // 80099DA8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 80099DAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 80099DB0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 80099DB4
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80099DB8
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[0]); // 80099DBC
  c->lr=0x80099DC4u; f_80163C44(c); // 80099DC0
  c->lr=0x80099DC8u; f_8025AE00(c); // 80099DC4
  c->r[0]=c->r[3]^0x80000000u; // 80099DC8
  c->r[3]=c->r[1]+0x00000038u; // 80099DCC
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 80099DD0
  c->r[4]=0u+0x00000078u; // 80099DD4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 80099DD8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 80099DDC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 80099DE0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80099DE4
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[0]); // 80099DE8
  c->lr=0x80099DF0u; f_80163C44(c); // 80099DEC
  c->r[3]=c->r[1]+0x00000068u; // 80099DF0
  c->r[4]=c->r[1]+0x00000038u; // 80099DF4
  c->r[5]=c->r[3]|c->r[3]; // 80099DF8
  c->lr=0x80099E00u; f_80163898(c); // 80099DFC
  c->r[3]=c->r[1]+0x00000068u; // 80099E00
  c->r[4]=c->r[1]+0x00000008u; // 80099E04
  c->r[5]=c->r[1]+0x00000014u; // 80099E08
  c->lr=0x80099E10u; f_801643D8(c); // 80099E0C
  c->f[1]=c->f[26]; // 80099E10
  c->r[3]=c->r[1]+0x00000014u; // 80099E14
  c->r[4]=c->r[1]+0x0000002Cu; // 80099E18
  c->lr=0x80099E20u; f_8016482C(c); // 80099E1C
  c->f[1]=c->ps1[1]=S(c->f[26]+c->f[25]); // 80099E20
  c->r[3]=c->r[1]+0x00000014u; // 80099E24
  c->r[4]=c->r[1]+0x00000020u; // 80099E28
  c->lr=0x80099E30u; f_8016482C(c); // 80099E2C
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099E30
  c->r[4]=c->r[26]|c->r[26]; // 80099E34
  c->r[3]=c->r[1]+0x00000020u; // 80099E38
  c->r[5]=c->r[0]+c->r[31]; // 80099E3C
  c->lr=0x80099E44u; f_801647E4(c); // 80099E40
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099E44
  c->r[4]=c->r[26]|c->r[26]; // 80099E48
  c->r[3]=c->r[1]+0x0000002Cu; // 80099E4C
  c->r[5]=c->r[0]+c->r[31]; // 80099E50
  c->r[5]=c->r[5]+0x0000000Cu; // 80099E54
  c->lr=0x80099E5Cu; f_801647E4(c); // 80099E58
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099E5C
  c->f[1]=c->f[23]; // 80099E60
  c->r[3]=c->r[1]+0x00000014u; // 80099E64
  c->r[4]=c->r[0]+c->r[31]; // 80099E68
  c->r[4]=c->r[4]+0x00000018u; // 80099E6C
  c->lr=0x80099E74u; f_8016482C(c); // 80099E70
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099E74
  c->lr=0x80099E7Cu; f_8025AE00(c); // 80099E78
  c->r[3]=c->r[3]^0x80000000u; // 80099E7C
  {uint32_t ea=c->r[24]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099E80
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80099E84
  {uint32_t ea=c->r[24]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099E88
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80099E8C
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099E90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099E94
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80099E98
  c->r[3]=c->r[0]+c->r[31]; // 80099E9C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80099EA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099EA4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80099EA8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80099EAC
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099EB0
  c->lr=0x80099EB8u; f_8025AE00(c); // 80099EB4
  c->r[3]=c->r[3]^0x80000000u; // 80099EB8
  {uint32_t ea=c->r[24]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099EBC
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 80099EC0
  {uint32_t ea=c->r[24]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099EC4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80099EC8
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099ECC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099ED0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80099ED4
  c->r[3]=c->r[0]+c->r[31]; // 80099ED8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80099EDC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099EE0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80099EE4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80099EE8
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099EEC
  c->lr=0x80099EF4u; f_8025AE00(c); // 80099EF0
  c->r[3]=c->r[3]^0x80000000u; // 80099EF4
  {uint32_t ea=c->r[24]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099EF8
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80099EFC
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80099F00
  {uint32_t ea=c->r[24]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099F04
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80099F08
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099F0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099F10
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80099F14
  c->r[3]=c->r[0]+c->r[31]; // 80099F18
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80099F1C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099F20
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80099F24
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80099F28
  c->r[0]=R32(c->r[25]+0x00000050u); // 80099F2C
  c->r[3]=R32(c->r[25]+0x00000044u); // 80099F30
  c->r[4]=c->r[0]+c->r[5]; // 80099F34
  c->r[0]=R8(c->r[5]+c->r[0]); // 80099F38
  c->r[3]=c->r[3]+c->r[31]; // 80099F3C
  W8(c->r[3]+0x00000024u,c->r[0]); // 80099F40
  c->r[0]=R8(c->r[4]+0x00000001u); // 80099F44
  W8(c->r[3]+0x00000025u,c->r[0]); // 80099F48
  c->r[0]=R8(c->r[4]+0x00000002u); // 80099F4C
  W8(c->r[3]+0x00000026u,c->r[0]); // 80099F50
  c->r[0]=R8(c->r[4]+0x00000003u); // 80099F54
  W8(c->r[3]+0x00000027u,c->r[0]); // 80099F58
  c->r[0]=R32(c->r[25]+0x00000054u); // 80099F5C
  c->r[3]=R32(c->r[25]+0x00000044u); // 80099F60
  c->r[4]=c->r[0]+c->r[5]; // 80099F64
  c->r[0]=R8(c->r[5]+c->r[0]); // 80099F68
  c->r[3]=c->r[3]+c->r[31]; // 80099F6C
  W8(c->r[3]+0x00000028u,c->r[0]); // 80099F70
  c->r[0]=R8(c->r[4]+0x00000001u); // 80099F74
  W8(c->r[3]+0x00000029u,c->r[0]); // 80099F78
  c->r[0]=R8(c->r[4]+0x00000002u); // 80099F7C
  W8(c->r[3]+0x0000002Au,c->r[0]); // 80099F80
  c->r[0]=R8(c->r[4]+0x00000003u); // 80099F84
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 80099F88
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099F8C
  c->lr=0x80099F94u; f_8025AE00(c); // 80099F90
  c->r[3]=c->r[3]^0x80000000u; // 80099F94
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80099F98
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 80099F9C
  {uint32_t ea=c->r[24]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099FA0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 80099FA4
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099FA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099FAC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80099FB0
  c->r[3]=c->r[0]+c->r[31]; // 80099FB4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80099FB8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80099FBC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80099FC0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80099FC4
  c->r[24]=R32(c->r[25]+0x00000040u); // 80099FC8
  c->lr=0x80099FD0u; f_8025AE00(c); // 80099FCC
  c->r[3]=c->r[3]^0x80000000u; // 80099FD0
  c->r[29]=c->r[29]+0x00000001u; // 80099FD4
  W32(c->r[1]+0x000000A4u,c->r[3]); // 80099FD8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 80099FDC
  c->r[0]=R32(c->r[25]+0x00000044u); // 80099FE0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 80099FE4
  {uint32_t ea=c->r[24]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80099FE8
  c->r[3]=c->r[0]+c->r[31]; // 80099FEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 80099FF0
  {uint32_t ea=c->r[24]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80099FF4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80099FF8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80099FFC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A000
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A004
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009A008
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A00C
  c->r[3]=c->r[0]+c->r[31]; // 8009A010
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[24]);} // 8009A014
  if (!crb(c,0)) { goto L_8009A030; } // 8009A018
L_8009A01C:;
  c->r[31]=c->r[31]+0x00000044u; // 8009A01C
  c->r[30]=c->r[30]+0x00000001u; // 8009A020
L_8009A024:;
  c->r[0]=R32(c->r[25]+0x0000004Cu); // 8009A024
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009A028
  if (crb(c,0)) { IRQCHK(c); goto L_80099CDC; } // 8009A02C
L_8009A030:;
  c->r[0]=0u+0x00000001u; // 8009A030
  c->r[3]=0u+0x00000001u; // 8009A034
  W8(c->r[25]+0x00000038u,c->r[0]); // 8009A038
L_8009A03C:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 8009A03C
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 8009A040
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 8009A044
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 8009A048
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 8009A04C
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 8009A050
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 8009A054
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 8009A058
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 8009A05C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 8009A060
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 8009A064
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 8009A068
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 8009A06C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 8009A070
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 8009A074
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 8009A078
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 8009A07C
  c->r[11]=c->r[1]+0x000000D0u; // 8009A080
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 8009A084
  c->lr=0x8009A08Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009A088
  c->r[0]=R32(c->r[1]+0x00000164u); // 8009A08C
  c->lr=c->r[0]; // 8009A090
  c->r[1]=c->r[1]+0x00000160u; // 8009A094
  return; // 8009A098
}

// fn_8009A09C
void f_8009A09C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009A09C
  c->r[0]=c->lr; // 8009A0A0
  W32(c->r[1]+0x00000164u,c->r[0]); // 8009A0A4
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 8009A0A8
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 8009A0AC
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 8009A0B0
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 8009A0B4
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 8009A0B8
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 8009A0BC
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 8009A0C0
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 8009A0C4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 8009A0C8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 8009A0CC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 8009A0D0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 8009A0D4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 8009A0D8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 8009A0DC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 8009A0E0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 8009A0E4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 8009A0E8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 8009A0EC
  c->r[11]=c->r[1]+0x000000D0u; // 8009A0F0
  c->lr=0x8009A0F8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009A0F4
  c->r[0]=R32(c->r[3]+0x00000044u); // 8009A0F8
  c->r[7]=0u+0x43300000u; // 8009A0FC
  W32(c->r[1]+0x00000098u,c->r[7]); // 8009A100
  c->r[24]=c->r[3]|c->r[3]; // 8009A104
  cmps(c,0,(int32_t)c->r[0],0); // 8009A108
  c->r[25]=c->r[4]|c->r[4]; // 8009A10C
  W32(c->r[1]+0x000000A0u,c->r[7]); // 8009A110
  c->r[26]=c->r[5]|c->r[5]; // 8009A114
  c->r[27]=c->r[6]|c->r[6]; // 8009A118
  if (!crb(c,2)) { goto L_8009A128; } // 8009A11C
  c->r[3]=0u+0x00000000u; // 8009A120
  goto L_8009A520; // 8009A124
L_8009A128:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 8009A128
  cmps(c,0,(int32_t)c->r[0],0); // 8009A12C
  if (!crb(c,2)) { goto L_8009A13C; } // 8009A130
  c->r[3]=0u+0x00000000u; // 8009A134
  goto L_8009A520; // 8009A138
L_8009A13C:;
  c->r[3]=0u+0x80270000u; // 8009A13C
  {uint32_t ea=c->r[3]+0x00002494u; c->r[8]=R32(ea); c->r[3]=ea;} // 8009A140
  c->r[5]=0u+0x80270000u; // 8009A144
  {uint32_t ea=c->r[5]+0x000024A0u; c->r[4]=R32(ea); c->r[5]=ea;} // 8009A148
  c->r[7]=R32(c->r[3]+0x00000004u); // 8009A14C
  c->r[29]=0u+0x00000000u; // 8009A150
  c->r[6]=R32(c->r[3]+0x00000008u); // 8009A154
  c->r[30]=0u+0x00000000u; // 8009A158
  c->r[3]=R32(c->r[5]+0x00000004u); // 8009A15C
  c->r[31]=0u+0x00000000u; // 8009A160
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009A164
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[27]=RF64(ea);} // 8009A168
  W32(c->r[1]+0x00000014u,c->r[8]); // 8009A16C
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[28]=c->ps1[28]=RF32(ea);} // 8009A170
  W32(c->r[1]+0x00000018u,c->r[7]); // 8009A174
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009A178
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 8009A17C
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8009A180
  W32(c->r[1]+0x00000008u,c->r[4]); // 8009A184
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009A188
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8009A18C
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[24]=c->ps1[24]=RF32(ea);} // 8009A190
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009A194
  goto L_8009A508; // 8009A198
L_8009A19C:;
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A19C
  c->r[3]=c->r[0]+c->r[31]; // 8009A1A0
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A1A4
  fcmp(c,0,c->f[0],c->f[31]); // 8009A1A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009A1AC
  if (!crb(c,2)) { goto L_8009A500; } // 8009A1B0
  c->lr=0x8009A1B8u; f_8025AE00(c); // 8009A1B4
  c->r[4]=R32(c->r[24]+0x00000058u); // 8009A1B8
  c->r[23]=R32(c->r[24]+0x00000040u); // 8009A1BC
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 8009A1C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8009A1C4
  c->r[28]=c->r[3]-c->r[0]; // 8009A1C8
  c->lr=0x8009A1D0u; f_8025AE00(c); // 8009A1CC
  c->r[0]=c->r[3]^0x80000000u; // 8009A1D0
  {uint32_t ea=c->r[23]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A1D4
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009A1D8
  {uint32_t ea=c->r[23]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A1DC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009A1E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A1E4
  c->r[23]=R32(c->r[24]+0x00000040u); // 8009A1E8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A1EC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A1F0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A1F4
  c->f[26]=c->ps1[26]=S(c->f[1]+c->f[0]); // 8009A1F8
  c->lr=0x8009A200u; f_8025AE00(c); // 8009A1FC
  c->r[0]=c->r[3]^0x80000000u; // 8009A200
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A204
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009A208
  {uint32_t ea=c->r[23]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A20C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009A210
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A214
  c->r[23]=R32(c->r[24]+0x00000040u); // 8009A218
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A21C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A220
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A224
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 8009A228
  c->lr=0x8009A230u; f_8025AE00(c); // 8009A22C
  c->r[0]=c->r[3]^0x80000000u; // 8009A230
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A234
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009A238
  {uint32_t ea=c->r[23]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A23C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009A240
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A244
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A248
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A24C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A250
  c->f[23]=c->ps1[23]=S(c->f[1]+c->f[0]); // 8009A254
  c->lr=0x8009A25Cu; f_8025AE00(c); // 8009A258
  c->r[0]=c->r[3]^0x80000000u; // 8009A25C
  c->r[3]=c->r[1]+0x00000068u; // 8009A260
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009A264
  c->r[4]=0u+0x00000079u; // 8009A268
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 8009A26C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8009A270
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 8009A274
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009A278
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 8009A27C
  c->lr=0x8009A284u; f_80163C44(c); // 8009A280
  c->lr=0x8009A288u; f_8025AE00(c); // 8009A284
  c->r[0]=c->r[3]^0x80000000u; // 8009A288
  c->r[3]=c->r[1]+0x00000038u; // 8009A28C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009A290
  c->r[4]=0u+0x00000078u; // 8009A294
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 8009A298
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8009A29C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 8009A2A0
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009A2A4
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 8009A2A8
  c->lr=0x8009A2B0u; f_80163C44(c); // 8009A2AC
  c->r[3]=c->r[1]+0x00000068u; // 8009A2B0
  c->r[4]=c->r[1]+0x00000038u; // 8009A2B4
  c->r[5]=c->r[3]|c->r[3]; // 8009A2B8
  c->lr=0x8009A2C0u; f_80163898(c); // 8009A2BC
  c->r[3]=c->r[1]+0x00000068u; // 8009A2C0
  c->r[4]=c->r[1]+0x00000014u; // 8009A2C4
  c->r[5]=c->r[1]+0x00000008u; // 8009A2C8
  c->lr=0x8009A2D0u; f_801643D8(c); // 8009A2CC
  c->r[4]=c->r[26]|c->r[26]; // 8009A2D0
  c->r[3]=c->r[1]+0x00000008u; // 8009A2D4
  c->lr=0x8009A2DCu; f_801648E8(c); // 8009A2D8
  fcmp(c,0,c->f[1],c->f[31]); // 8009A2DC
  if (!crb(c,0)) { goto L_8009A2F4; } // 8009A2E0
  c->r[3]=c->r[1]+0x00000008u; // 8009A2E4
  {uint32_t ea=c->r[2]+0xFFFF9360u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A2E8
  c->r[4]=c->r[3]|c->r[3]; // 8009A2EC
  c->lr=0x8009A2F4u; f_8016482C(c); // 8009A2F0
L_8009A2F4:;
  c->f[1]=c->f[26]; // 8009A2F4
  c->r[3]=c->r[1]+0x00000008u; // 8009A2F8
  c->r[4]=c->r[1]+0x0000002Cu; // 8009A2FC
  c->lr=0x8009A304u; f_8016482C(c); // 8009A300
  c->f[1]=c->ps1[1]=S(c->f[26]+c->f[25]); // 8009A304
  c->r[3]=c->r[1]+0x00000008u; // 8009A308
  c->r[4]=c->r[1]+0x00000020u; // 8009A30C
  c->lr=0x8009A314u; f_8016482C(c); // 8009A310
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A314
  c->r[4]=c->r[25]|c->r[25]; // 8009A318
  c->r[3]=c->r[1]+0x00000020u; // 8009A31C
  c->r[5]=c->r[0]+c->r[31]; // 8009A320
  c->lr=0x8009A328u; f_801647E4(c); // 8009A324
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A328
  c->r[4]=c->r[25]|c->r[25]; // 8009A32C
  c->r[3]=c->r[1]+0x0000002Cu; // 8009A330
  c->r[5]=c->r[0]+c->r[31]; // 8009A334
  c->r[5]=c->r[5]+0x0000000Cu; // 8009A338
  c->lr=0x8009A340u; f_801647E4(c); // 8009A33C
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A340
  c->f[1]=c->f[23]; // 8009A344
  c->r[3]=c->r[1]+0x00000008u; // 8009A348
  c->r[4]=c->r[0]+c->r[31]; // 8009A34C
  c->r[4]=c->r[4]+0x00000018u; // 8009A350
  c->lr=0x8009A358u; f_8016482C(c); // 8009A354
  c->r[23]=R32(c->r[24]+0x00000040u); // 8009A358
  c->lr=0x8009A360u; f_8025AE00(c); // 8009A35C
  c->r[3]=c->r[3]^0x80000000u; // 8009A360
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A364
  W32(c->r[1]+0x000000A4u,c->r[3]); // 8009A368
  {uint32_t ea=c->r[23]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A36C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009A370
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A374
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A378
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A37C
  c->r[3]=c->r[0]+c->r[31]; // 8009A380
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A384
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A388
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A38C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8009A390
  c->r[23]=R32(c->r[24]+0x00000040u); // 8009A394
  c->lr=0x8009A39Cu; f_8025AE00(c); // 8009A398
  c->r[3]=c->r[3]^0x80000000u; // 8009A39C
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A3A0
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8009A3A4
  {uint32_t ea=c->r[23]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A3A8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009A3AC
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A3B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A3B4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A3B8
  c->r[3]=c->r[0]+c->r[31]; // 8009A3BC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A3C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A3C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A3C8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8009A3CC
  c->r[23]=R32(c->r[24]+0x00000040u); // 8009A3D0
  c->lr=0x8009A3D8u; f_8025AE00(c); // 8009A3D4
  c->r[3]=c->r[3]^0x80000000u; // 8009A3D8
  {uint32_t ea=c->r[23]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A3DC
  W32(c->r[1]+0x000000A4u,c->r[3]); // 8009A3E0
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8009A3E4
  {uint32_t ea=c->r[23]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A3E8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009A3EC
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A3F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A3F4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A3F8
  c->r[3]=c->r[0]+c->r[31]; // 8009A3FC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A400
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A404
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A408
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8009A40C
  c->r[0]=R32(c->r[24]+0x00000050u); // 8009A410
  c->r[3]=R32(c->r[24]+0x00000044u); // 8009A414
  c->r[4]=c->r[0]+c->r[5]; // 8009A418
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009A41C
  c->r[3]=c->r[3]+c->r[31]; // 8009A420
  W8(c->r[3]+0x00000024u,c->r[0]); // 8009A424
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009A428
  W8(c->r[3]+0x00000025u,c->r[0]); // 8009A42C
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009A430
  W8(c->r[3]+0x00000026u,c->r[0]); // 8009A434
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009A438
  W8(c->r[3]+0x00000027u,c->r[0]); // 8009A43C
  c->r[0]=R32(c->r[24]+0x00000054u); // 8009A440
  c->r[3]=R32(c->r[24]+0x00000044u); // 8009A444
  c->r[4]=c->r[0]+c->r[5]; // 8009A448
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009A44C
  c->r[3]=c->r[3]+c->r[31]; // 8009A450
  W8(c->r[3]+0x00000028u,c->r[0]); // 8009A454
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009A458
  W8(c->r[3]+0x00000029u,c->r[0]); // 8009A45C
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009A460
  W8(c->r[3]+0x0000002Au,c->r[0]); // 8009A464
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009A468
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 8009A46C
  c->r[23]=R32(c->r[24]+0x00000040u); // 8009A470
  c->lr=0x8009A478u; f_8025AE00(c); // 8009A474
  c->r[3]=c->r[3]^0x80000000u; // 8009A478
  {uint32_t ea=c->r[23]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A47C
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8009A480
  {uint32_t ea=c->r[23]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A484
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009A488
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A48C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A490
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A494
  c->r[3]=c->r[0]+c->r[31]; // 8009A498
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A49C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A4A0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A4A4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8009A4A8
  c->r[23]=R32(c->r[24]+0x00000040u); // 8009A4AC
  c->lr=0x8009A4B4u; f_8025AE00(c); // 8009A4B0
  c->r[3]=c->r[3]^0x80000000u; // 8009A4B4
  c->r[29]=c->r[29]+0x00000001u; // 8009A4B8
  W32(c->r[1]+0x000000A4u,c->r[3]); // 8009A4BC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 8009A4C0
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A4C4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009A4C8
  {uint32_t ea=c->r[23]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A4CC
  c->r[3]=c->r[0]+c->r[31]; // 8009A4D0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A4D4
  {uint32_t ea=c->r[23]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A4D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A4DC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A4E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A4E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A4E8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009A4EC
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009A4F0
  c->r[3]=c->r[0]+c->r[31]; // 8009A4F4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[24]);} // 8009A4F8
  if (!crb(c,0)) { goto L_8009A514; } // 8009A4FC
L_8009A500:;
  c->r[31]=c->r[31]+0x00000044u; // 8009A500
  c->r[30]=c->r[30]+0x00000001u; // 8009A504
L_8009A508:;
  c->r[0]=R32(c->r[24]+0x0000004Cu); // 8009A508
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009A50C
  if (crb(c,0)) { IRQCHK(c); goto L_8009A19C; } // 8009A510
L_8009A514:;
  c->r[0]=0u+0x00000001u; // 8009A514
  c->r[3]=0u+0x00000001u; // 8009A518
  W8(c->r[24]+0x00000038u,c->r[0]); // 8009A51C
L_8009A520:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 8009A520
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 8009A524
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 8009A528
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 8009A52C
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 8009A530
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 8009A534
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 8009A538
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 8009A53C
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 8009A540
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 8009A544
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 8009A548
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 8009A54C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 8009A550
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 8009A554
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 8009A558
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 8009A55C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 8009A560
  c->r[11]=c->r[1]+0x000000D0u; // 8009A564
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 8009A568
  c->lr=0x8009A570u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009A56C
  c->r[0]=R32(c->r[1]+0x00000164u); // 8009A570
  c->lr=c->r[0]; // 8009A574
  c->r[1]=c->r[1]+0x00000160u; // 8009A578
  return; // 8009A57C
}

// fn_8009A580
void f_8009A580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009A580
  c->r[0]=c->lr; // 8009A584
  W32(c->r[1]+0x000001C4u,c->r[0]); // 8009A588
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[31]);} // 8009A58C
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,31,ea,0,0);} // 8009A590
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[30]);} // 8009A594
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,30,ea,0,0);} // 8009A598
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[29]);} // 8009A59C
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,29,ea,0,0);} // 8009A5A0
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[28]);} // 8009A5A4
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,28,ea,0,0);} // 8009A5A8
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[27]);} // 8009A5AC
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,27,ea,0,0);} // 8009A5B0
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[26]);} // 8009A5B4
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,26,ea,0,0);} // 8009A5B8
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[25]);} // 8009A5BC
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,25,ea,0,0);} // 8009A5C0
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[24]);} // 8009A5C4
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,24,ea,0,0);} // 8009A5C8
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[23]);} // 8009A5CC
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,23,ea,0,0);} // 8009A5D0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[22]);} // 8009A5D4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,22,ea,0,0);} // 8009A5D8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[21]);} // 8009A5DC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,21,ea,0,0);} // 8009A5E0
  c->r[11]=c->r[1]+0x00000110u; // 8009A5E4
  c->lr=0x8009A5ECu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009A5E8
  c->r[0]=R32(c->r[3]+0x00000044u); // 8009A5EC
  c->r[7]=0u+0x43300000u; // 8009A5F0
  c->f[22]=c->f[1]; // 8009A5F4
  W32(c->r[1]+0x000000D8u,c->r[7]); // 8009A5F8
  cmps(c,0,(int32_t)c->r[0],0); // 8009A5FC
  c->r[25]=c->r[3]|c->r[3]; // 8009A600
  W32(c->r[1]+0x000000E0u,c->r[7]); // 8009A604
  c->r[26]=c->r[4]|c->r[4]; // 8009A608
  c->r[27]=c->r[6]|c->r[6]; // 8009A60C
  if (!crb(c,2)) { goto L_8009A61C; } // 8009A610
  c->r[3]=0u+0x00000000u; // 8009A614
  goto L_8009AA44; // 8009A618
L_8009A61C:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 8009A61C
  cmps(c,0,(int32_t)c->r[0],0); // 8009A620
  if (!crb(c,2)) { goto L_8009A630; } // 8009A624
  c->r[3]=0u+0x00000000u; // 8009A628
  goto L_8009AA44; // 8009A62C
L_8009A630:;
  c->r[4]=0u+0x80270000u; // 8009A630
  {uint32_t ea=c->r[4]+0x000024ACu; c->r[28]=R32(ea); c->r[4]=ea;} // 8009A634
  c->r[6]=0u+0x80270000u; // 8009A638
  {uint32_t ea=c->r[6]+0x000024B8u; c->r[10]=R32(ea); c->r[6]=ea;} // 8009A63C
  c->r[7]=R32(c->r[5]+0x00000000u); // 8009A640
  c->r[3]=c->r[1]+0x00000078u; // 8009A644
  c->r[12]=R32(c->r[4]+0x00000004u); // 8009A648
  c->r[29]=0u+0x00000000u; // 8009A64C
  c->r[11]=R32(c->r[4]+0x00000008u); // 8009A650
  c->r[4]=c->r[1]+0x00000008u; // 8009A654
  c->r[9]=R32(c->r[6]+0x00000004u); // 8009A658
  c->r[8]=R32(c->r[6]+0x00000008u); // 8009A65C
  c->r[6]=R32(c->r[5]+0x00000004u); // 8009A660
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009A664
  W32(c->r[1]+0x00000020u,c->r[28]); // 8009A668
  W32(c->r[1]+0x00000024u,c->r[12]); // 8009A66C
  W32(c->r[1]+0x00000028u,c->r[11]); // 8009A670
  W32(c->r[1]+0x00000014u,c->r[10]); // 8009A674
  W32(c->r[1]+0x00000018u,c->r[9]); // 8009A678
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8009A67C
  W32(c->r[1]+0x00000008u,c->r[7]); // 8009A680
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8009A684
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009A688
  c->lr=0x8009A690u; f_80097B44(c); // 8009A68C
  c->r[3]=c->r[1]+0x00000078u; // 8009A690
  c->r[4]=c->r[3]|c->r[3]; // 8009A694
  c->lr=0x8009A69Cu; f_80163AFC(c); // 8009A698
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[27]=RF64(ea);} // 8009A69C
  c->r[30]=0u+0x00000000u; // 8009A6A0
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[28]=c->ps1[28]=RF32(ea);} // 8009A6A4
  c->r[31]=0u+0x00000000u; // 8009A6A8
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009A6AC
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8009A6B0
  {uint32_t ea=c->r[2]+0xFFFF9364u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009A6B4
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[21]=c->ps1[21]=RF32(ea);} // 8009A6B8
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[26]=c->ps1[26]=RF32(ea);} // 8009A6BC
  goto L_8009AA2C; // 8009A6C0
L_8009A6C4:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A6C4
  c->r[3]=c->r[0]+c->r[31]; // 8009A6C8
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A6CC
  fcmp(c,0,c->f[0],c->f[26]); // 8009A6D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009A6D4
  if (!crb(c,2)) { goto L_8009AA24; } // 8009A6D8
  c->lr=0x8009A6E0u; f_8025AE00(c); // 8009A6DC
  c->r[4]=R32(c->r[25]+0x00000058u); // 8009A6E0
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009A6E4
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 8009A6E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8009A6EC
  c->r[28]=c->r[3]-c->r[0]; // 8009A6F0
  c->lr=0x8009A6F8u; f_8025AE00(c); // 8009A6F4
  c->r[0]=c->r[3]^0x80000000u; // 8009A6F8
  {uint32_t ea=c->r[24]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A6FC
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8009A700
  {uint32_t ea=c->r[24]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A704
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 8009A708
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A70C
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009A710
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A714
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A718
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A71C
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 8009A720
  c->lr=0x8009A728u; f_8025AE00(c); // 8009A724
  c->r[0]=c->r[3]^0x80000000u; // 8009A728
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A72C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8009A730
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A734
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=RF64(ea);} // 8009A738
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A73C
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009A740
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A744
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A748
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A74C
  c->f[24]=c->ps1[24]=S(c->f[1]+c->f[0]); // 8009A750
  c->lr=0x8009A758u; f_8025AE00(c); // 8009A754
  c->r[0]=c->r[3]^0x80000000u; // 8009A758
  {uint32_t ea=c->r[24]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A75C
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8009A760
  {uint32_t ea=c->r[24]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A764
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 8009A768
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A76C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A770
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A774
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A778
  c->f[23]=c->ps1[23]=S(c->f[1]+c->f[0]); // 8009A77C
  c->lr=0x8009A784u; f_8025AE00(c); // 8009A780
  c->r[0]=c->r[3]^0x80000000u; // 8009A784
  c->r[3]=c->r[1]+0x000000A8u; // 8009A788
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8009A78C
  c->r[4]=0u+0x0000007Au; // 8009A790
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=RF64(ea);} // 8009A794
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8009A798
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 8009A79C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009A7A0
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 8009A7A4
  c->lr=0x8009A7ACu; f_80163C44(c); // 8009A7A8
  c->lr=0x8009A7B0u; f_8025AE00(c); // 8009A7AC
  c->r[0]=c->r[3]^0x80000000u; // 8009A7B0
  c->f[0]=-c->f[22]; // 8009A7B4
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8009A7B8
  c->f[2]=c->ps1[2]=S(c->f[22]*c->f[31]); // 8009A7BC
  c->r[3]=c->r[1]+0x00000048u; // 8009A7C0
  c->r[4]=0u+0x00000078u; // 8009A7C4
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[3]=RF64(ea);} // 8009A7C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8009A7CC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[27]); // 8009A7D0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 8009A7D4
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[28]); // 8009A7D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A7DC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8009A7E0
  c->lr=0x8009A7E8u; f_80163C44(c); // 8009A7E4
  c->r[3]=c->r[1]+0x000000A8u; // 8009A7E8
  c->r[4]=c->r[1]+0x00000048u; // 8009A7EC
  c->r[5]=c->r[3]|c->r[3]; // 8009A7F0
  c->lr=0x8009A7F8u; f_80163898(c); // 8009A7F4
  c->r[4]=c->r[1]+0x000000A8u; // 8009A7F8
  c->r[3]=c->r[1]+0x00000078u; // 8009A7FC
  c->r[5]=c->r[4]|c->r[4]; // 8009A800
  c->lr=0x8009A808u; f_80163898(c); // 8009A804
  c->r[3]=c->r[1]+0x000000A8u; // 8009A808
  c->r[4]=c->r[1]+0x00000020u; // 8009A80C
  c->r[5]=c->r[1]+0x00000014u; // 8009A810
  c->lr=0x8009A818u; f_801643D8(c); // 8009A814
  c->f[1]=c->f[25]; // 8009A818
  c->r[3]=c->r[1]+0x00000014u; // 8009A81C
  c->r[4]=c->r[1]+0x0000003Cu; // 8009A820
  c->lr=0x8009A828u; f_8016482C(c); // 8009A824
  c->f[1]=c->ps1[1]=S(c->f[25]+c->f[24]); // 8009A828
  c->r[3]=c->r[1]+0x00000014u; // 8009A82C
  c->r[4]=c->r[1]+0x00000030u; // 8009A830
  c->lr=0x8009A838u; f_8016482C(c); // 8009A834
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A838
  c->r[4]=c->r[26]|c->r[26]; // 8009A83C
  c->r[3]=c->r[1]+0x00000030u; // 8009A840
  c->r[5]=c->r[0]+c->r[31]; // 8009A844
  c->lr=0x8009A84Cu; f_801647E4(c); // 8009A848
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A84C
  c->r[4]=c->r[26]|c->r[26]; // 8009A850
  c->r[3]=c->r[1]+0x0000003Cu; // 8009A854
  c->r[5]=c->r[0]+c->r[31]; // 8009A858
  c->r[5]=c->r[5]+0x0000000Cu; // 8009A85C
  c->lr=0x8009A864u; f_801647E4(c); // 8009A860
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A864
  c->f[1]=c->f[23]; // 8009A868
  c->r[3]=c->r[1]+0x00000014u; // 8009A86C
  c->r[4]=c->r[0]+c->r[31]; // 8009A870
  c->r[4]=c->r[4]+0x00000018u; // 8009A874
  c->lr=0x8009A87Cu; f_8016482C(c); // 8009A878
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009A87C
  c->lr=0x8009A884u; f_8025AE00(c); // 8009A880
  c->r[3]=c->r[3]^0x80000000u; // 8009A884
  {uint32_t ea=c->r[24]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A888
  W32(c->r[1]+0x000000E4u,c->r[3]); // 8009A88C
  {uint32_t ea=c->r[24]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A890
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=RF64(ea);} // 8009A894
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A898
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A89C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A8A0
  c->r[3]=c->r[0]+c->r[31]; // 8009A8A4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A8A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A8AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A8B0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8009A8B4
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009A8B8
  c->lr=0x8009A8C0u; f_8025AE00(c); // 8009A8BC
  c->r[3]=c->r[3]^0x80000000u; // 8009A8C0
  {uint32_t ea=c->r[24]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A8C4
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8009A8C8
  {uint32_t ea=c->r[24]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A8CC
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 8009A8D0
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A8D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A8D8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A8DC
  c->r[3]=c->r[0]+c->r[31]; // 8009A8E0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A8E4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A8E8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A8EC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8009A8F0
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009A8F4
  c->lr=0x8009A8FCu; f_8025AE00(c); // 8009A8F8
  c->r[3]=c->r[3]^0x80000000u; // 8009A8FC
  {uint32_t ea=c->r[24]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A900
  W32(c->r[1]+0x000000E4u,c->r[3]); // 8009A904
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8009A908
  {uint32_t ea=c->r[24]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A90C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=RF64(ea);} // 8009A910
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A914
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A918
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A91C
  c->r[3]=c->r[0]+c->r[31]; // 8009A920
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A924
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A928
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A92C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8009A930
  c->r[0]=R32(c->r[25]+0x00000050u); // 8009A934
  c->r[3]=R32(c->r[25]+0x00000044u); // 8009A938
  c->r[4]=c->r[0]+c->r[5]; // 8009A93C
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009A940
  c->r[3]=c->r[3]+c->r[31]; // 8009A944
  W8(c->r[3]+0x00000024u,c->r[0]); // 8009A948
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009A94C
  W8(c->r[3]+0x00000025u,c->r[0]); // 8009A950
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009A954
  W8(c->r[3]+0x00000026u,c->r[0]); // 8009A958
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009A95C
  W8(c->r[3]+0x00000027u,c->r[0]); // 8009A960
  c->r[0]=R32(c->r[25]+0x00000054u); // 8009A964
  c->r[3]=R32(c->r[25]+0x00000044u); // 8009A968
  c->r[4]=c->r[0]+c->r[5]; // 8009A96C
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009A970
  c->r[3]=c->r[3]+c->r[31]; // 8009A974
  W8(c->r[3]+0x00000028u,c->r[0]); // 8009A978
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009A97C
  W8(c->r[3]+0x00000029u,c->r[0]); // 8009A980
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009A984
  W8(c->r[3]+0x0000002Au,c->r[0]); // 8009A988
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009A98C
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 8009A990
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009A994
  c->lr=0x8009A99Cu; f_8025AE00(c); // 8009A998
  c->r[3]=c->r[3]^0x80000000u; // 8009A99C
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A9A0
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8009A9A4
  {uint32_t ea=c->r[24]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A9A8
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 8009A9AC
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A9B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009A9B4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A9B8
  c->r[3]=c->r[0]+c->r[31]; // 8009A9BC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009A9C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009A9C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009A9C8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8009A9CC
  c->r[24]=R32(c->r[25]+0x00000040u); // 8009A9D0
  c->lr=0x8009A9D8u; f_8025AE00(c); // 8009A9D4
  c->r[3]=c->r[3]^0x80000000u; // 8009A9D8
  c->r[29]=c->r[29]+0x00000001u; // 8009A9DC
  W32(c->r[1]+0x000000E4u,c->r[3]); // 8009A9E0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 8009A9E4
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009A9E8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=RF64(ea);} // 8009A9EC
  {uint32_t ea=c->r[24]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009A9F0
  c->r[3]=c->r[0]+c->r[31]; // 8009A9F4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009A9F8
  {uint32_t ea=c->r[24]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009A9FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009AA00
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009AA04
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009AA08
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009AA0C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009AA10
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009AA14
  c->r[3]=c->r[0]+c->r[31]; // 8009AA18
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[21]);} // 8009AA1C
  if (!crb(c,0)) { goto L_8009AA38; } // 8009AA20
L_8009AA24:;
  c->r[31]=c->r[31]+0x00000044u; // 8009AA24
  c->r[30]=c->r[30]+0x00000001u; // 8009AA28
L_8009AA2C:;
  c->r[0]=R32(c->r[25]+0x0000004Cu); // 8009AA2C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009AA30
  if (crb(c,0)) { IRQCHK(c); goto L_8009A6C4; } // 8009AA34
L_8009AA38:;
  c->r[0]=0u+0x00000001u; // 8009AA38
  c->r[3]=0u+0x00000001u; // 8009AA3C
  W8(c->r[25]+0x00000038u,c->r[0]); // 8009AA40
L_8009AA44:;
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,31,ea,0,0);} // 8009AA44
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[31]=RF64(ea);} // 8009AA48
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,30,ea,0,0);} // 8009AA4C
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[30]=RF64(ea);} // 8009AA50
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,29,ea,0,0);} // 8009AA54
  {uint32_t ea=c->r[1]+0x00000190u; c->f[29]=RF64(ea);} // 8009AA58
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,28,ea,0,0);} // 8009AA5C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[28]=RF64(ea);} // 8009AA60
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,27,ea,0,0);} // 8009AA64
  {uint32_t ea=c->r[1]+0x00000170u; c->f[27]=RF64(ea);} // 8009AA68
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,26,ea,0,0);} // 8009AA6C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[26]=RF64(ea);} // 8009AA70
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,25,ea,0,0);} // 8009AA74
  {uint32_t ea=c->r[1]+0x00000150u; c->f[25]=RF64(ea);} // 8009AA78
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,24,ea,0,0);} // 8009AA7C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[24]=RF64(ea);} // 8009AA80
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,23,ea,0,0);} // 8009AA84
  {uint32_t ea=c->r[1]+0x00000130u; c->f[23]=RF64(ea);} // 8009AA88
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,22,ea,0,0);} // 8009AA8C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[22]=RF64(ea);} // 8009AA90
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,21,ea,0,0);} // 8009AA94
  c->r[11]=c->r[1]+0x00000110u; // 8009AA98
  {uint32_t ea=c->r[1]+0x00000110u; c->f[21]=RF64(ea);} // 8009AA9C
  c->lr=0x8009AAA4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009AAA0
  c->r[0]=R32(c->r[1]+0x000001C4u); // 8009AAA4
  c->lr=c->r[0]; // 8009AAA8
  c->r[1]=c->r[1]+0x000001C0u; // 8009AAAC
  return; // 8009AAB0
}

// fn_8009AAB4
void f_8009AAB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009AAB4
  c->r[0]=c->lr; // 8009AAB8
  W32(c->r[1]+0x00000094u,c->r[0]); // 8009AABC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8009AAC0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8009AAC4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8009AAC8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8009AACC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 8009AAD0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8009AAD4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8009AAD8
  W32(c->r[1]+0x00000058u,c->r[30]); // 8009AADC
  W32(c->r[1]+0x00000054u,c->r[29]); // 8009AAE0
  c->r[29]=c->r[3]|c->r[3]; // 8009AAE4
  W32(c->r[1]+0x00000050u,c->r[28]); // 8009AAE8
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009AAEC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009AAF0
  c->ctr=c->r[12]; // 8009AAF4
  if (true) { c->lr=0x8009AAFCu; dispatch(c,c->ctr); } // 8009AAF8
  cmps(c,0,(int32_t)c->r[3],0); // 8009AAFC
  if (!crb(c,2)) { goto L_8009AB0C; } // 8009AB00
  c->r[3]=0u+0x00000000u; // 8009AB04
  goto L_8009ACE8; // 8009AB08
L_8009AB0C:;
  {uint32_t ea=c->r[29]+0x00000034u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009AB0C
  c->r[30]=0u+0x00000000u; // 8009AB10
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009AB14
  c->r[31]=0u+0x00000000u; // 8009AB18
  goto L_8009ACD8; // 8009AB1C
L_8009AB20:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009AB20
  c->r[28]=c->r[0]+c->r[31]; // 8009AB24
  {uint32_t ea=c->r[28]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AB28
  fcmp(c,0,c->f[0],c->f[31]); // 8009AB2C
  if (!crb(c,1)) { goto L_8009ACD0; } // 8009AB30
  {uint32_t ea=c->r[28]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009AB34
  {uint32_t ea=c->r[29]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009AB38
  c->lr=0x8009AB40u; f_80262BAC(c); // 8009AB3C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009AB40
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8009AB44
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009AB48
  c->f[1]=c->f[30]; // 8009AB4C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AB50
  c->r[3]=c->r[28]+0x00000018u; // 8009AB54
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8009AB58
  c->r[4]=c->r[1]+0x00000030u; // 8009AB5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8009AB60
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009AB64
  c->lr=0x8009AB6Cu; f_8016482C(c); // 8009AB68
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009AB6C
  c->r[3]=c->r[1]+0x00000030u; // 8009AB70
  c->r[4]=c->r[1]+0x0000003Cu; // 8009AB74
  c->r[5]=c->r[0]+c->r[31]; // 8009AB78
  {uint32_t ea=c->r[5]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009AB7C
  c->lr=0x8009AB84u; f_8016482C(c); // 8009AB80
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009AB84
  c->r[4]=c->r[1]+0x00000030u; // 8009AB88
  c->r[3]=c->r[0]+c->r[31]; // 8009AB8C
  c->r[5]=c->r[3]|c->r[3]; // 8009AB90
  c->lr=0x8009AB98u; f_801647E4(c); // 8009AB94
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009AB98
  c->r[4]=c->r[1]+0x0000003Cu; // 8009AB9C
  c->r[3]=c->r[0]+c->r[31]; // 8009ABA0
  c->r[3]=c->r[3]+0x0000000Cu; // 8009ABA4
  c->r[5]=c->r[3]|c->r[3]; // 8009ABA8
  c->lr=0x8009ABB0u; f_801647E4(c); // 8009ABAC
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009ABB0
  c->r[3]=c->r[0]+c->r[31]; // 8009ABB4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009ABB8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009ABBC
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 8009ABC0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8009ABC4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009ABC8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009ABCC
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009ABD0
  c->r[3]=c->r[0]+c->r[31]; // 8009ABD4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009ABD8
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009ABDC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009ABE0
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009ABE4
  c->r[3]=c->r[0]+c->r[31]; // 8009ABE8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009ABEC
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009ABF0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8009ABF4
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009ABF8
  c->r[3]=c->r[0]+c->r[31]; // 8009ABFC
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009AC00
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AC04
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 8009AC08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009AC0C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 8009AC10
  c->r[0]=R32(c->r[29]+0x00000070u); // 8009AC14
  cmps(c,0,(int32_t)c->r[0],0); // 8009AC18
  if (crb(c,2)) { goto L_8009ACD0; } // 8009AC1C
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009AC20
  c->r[3]=c->r[1]+0x00000020u; // 8009AC24
  c->r[4]=c->r[1]+0x00000008u; // 8009AC28
  c->r[6]=c->r[0]+c->r[31]; // 8009AC2C
  c->r[5]=R32(c->r[31]+c->r[0]); // 8009AC30
  c->r[0]=R32(c->r[6]+0x00000004u); // 8009AC34
  W32(c->r[1]+0x00000008u,c->r[5]); // 8009AC38
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009AC3C
  c->r[0]=R32(c->r[6]+0x00000008u); // 8009AC40
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009AC44
  c->r[12]=R32(c->r[29]+0x00000070u); // 8009AC48
  c->ctr=c->r[12]; // 8009AC4C
  if (true) { c->lr=0x8009AC54u; dispatch(c,c->ctr); } // 8009AC50
  cmps(c,0,(int32_t)c->r[3],0); // 8009AC54
  if (crb(c,2)) { goto L_8009ACD0; } // 8009AC58
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009AC5C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AC60
  fcmp(c,0,c->f[1],c->f[0]); // 8009AC64
  if (!crb(c,0)) { goto L_8009ACD0; } // 8009AC68
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009AC6C
  c->r[3]=c->r[0]+c->r[31]; // 8009AC70
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AC74
  fcmp(c,0,c->f[1],c->f[0]); // 8009AC78
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009AC7C
  if (!crb(c,2)) { goto L_8009ACD0; } // 8009AC80
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009AC84
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009AC88
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8009AC8C
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009AC90
  {uint32_t ea=c->r[31]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AC94
  c->r[3]=c->r[0]+c->r[31]; // 8009AC98
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8009AC9C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009ACA0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009ACA4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009ACA8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8009ACAC
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009ACB0
  c->r[3]=R32(c->r[29]+0x00000040u); // 8009ACB4
  c->r[4]=c->r[0]+c->r[31]; // 8009ACB8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009ACBC
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009ACC0
  c->f[1]=-c->f[1]; // 8009ACC4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009ACC8
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009ACCC
L_8009ACD0:;
  c->r[31]=c->r[31]+0x00000044u; // 8009ACD0
  c->r[30]=c->r[30]+0x00000001u; // 8009ACD4
L_8009ACD8:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 8009ACD8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009ACDC
  if (crb(c,0)) { IRQCHK(c); goto L_8009AB20; } // 8009ACE0
  c->r[3]=0u+0x00000001u; // 8009ACE4
L_8009ACE8:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8009ACE8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8009ACEC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8009ACF0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8009ACF4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 8009ACF8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8009ACFC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8009AD00
  c->r[30]=R32(c->r[1]+0x00000058u); // 8009AD04
  c->r[29]=R32(c->r[1]+0x00000054u); // 8009AD08
  c->r[0]=R32(c->r[1]+0x00000094u); // 8009AD0C
  c->r[28]=R32(c->r[1]+0x00000050u); // 8009AD10
  c->lr=c->r[0]; // 8009AD14
  c->r[1]=c->r[1]+0x00000090u; // 8009AD18
  return; // 8009AD1C
}

// fn_8009AD20
void f_8009AD20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009AD20
  c->r[0]=c->lr; // 8009AD24
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8009AD28
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 8009AD2C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 8009AD30
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 8009AD34
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 8009AD38
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 8009AD3C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 8009AD40
  c->r[11]=c->r[1]+0x000000A0u; // 8009AD44
  c->lr=0x8009AD4Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009AD48
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009AD4C
  c->r[28]=c->r[3]|c->r[3]; // 8009AD50
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009AD54
  c->ctr=c->r[12]; // 8009AD58
  if (true) { c->lr=0x8009AD60u; dispatch(c,c->ctr); } // 8009AD5C
  cmps(c,0,(int32_t)c->r[3],0); // 8009AD60
  if (!crb(c,2)) { goto L_8009AD70; } // 8009AD64
  c->r[3]=0u+0x00000000u; // 8009AD68
  goto L_8009B12C; // 8009AD6C
L_8009AD70:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8009AD70
  c->r[7]=0u+0x80270000u; // 8009AD74
  {uint32_t ea=c->r[7]+0x000024C4u; c->r[6]=R32(ea); c->r[7]=ea;} // 8009AD78
  c->r[4]=c->r[1]+0x00000050u; // 8009AD7C
  c->r[12]=R32(c->r[3]+0x00000160u); // 8009AD80
  c->r[30]=0u+0x00000000u; // 8009AD84
  c->r[5]=R32(c->r[7]+0x00000004u); // 8009AD88
  c->r[0]=R32(c->r[7]+0x00000008u); // 8009AD8C
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009AD90
  W32(c->r[1]+0x00000014u,c->r[6]); // 8009AD94
  W32(c->r[1]+0x00000018u,c->r[5]); // 8009AD98
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009AD9C
  c->ctr=c->r[12]; // 8009ADA0
  if (true) { c->lr=0x8009ADA8u; dispatch(c,c->ctr); } // 8009ADA4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009ADA8
  c->r[29]=0u+0x00000000u; // 8009ADAC
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009ADB0
  c->r[31]=0u+0x00000000u; // 8009ADB4
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009ADB8
  c->r[27]=0u+0x00000000u; // 8009ADBC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8009ADC0
  {uint32_t ea=c->r[2]+0xFFFF9368u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009ADC4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8009ADC8
  {uint32_t ea=c->r[2]+0xFFFF936Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8009ADCC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009ADD0
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009ADD4
  goto L_8009B108; // 8009ADD8
L_8009ADDC:;
  c->r[0]=R32(c->r[28]+0x00000044u); // 8009ADDC
  c->r[3]=c->r[0]+c->r[31]; // 8009ADE0
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009ADE4
  fcmp(c,0,c->f[0],c->f[29]); // 8009ADE8
  if (!crb(c,1)) { goto L_8009B100; } // 8009ADEC
  c->r[4]=c->r[3]+0x0000000Cu; // 8009ADF0
  c->lr=0x8009ADF8u; f_80164A1C(c); // 8009ADF4
  fcmp(c,0,c->f[1],c->f[30]); // 8009ADF8
  if (!crb(c,0)) { goto L_8009AE08; } // 8009ADFC
  fcmp(c,0,c->f[1],c->f[31]); // 8009AE00
  if (crb(c,1)) { goto L_8009B100; } // 8009AE04
L_8009AE08:;
  c->r[7]=R32(c->r[1]+0x00000014u); // 8009AE08
  c->r[3]=c->r[1]+0x00000008u; // 8009AE0C
  c->r[4]=R32(c->r[1]+0x00000018u); // 8009AE10
  c->r[5]=c->r[1]+0x00000038u; // 8009AE14
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8009AE18
  c->r[6]=c->r[1]+0x00000020u; // 8009AE1C
  W32(c->r[1]+0x00000008u,c->r[7]); // 8009AE20
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009AE24
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009AE28
  c->r[0]=R32(c->r[28]+0x00000044u); // 8009AE2C
  c->r[4]=c->r[0]+c->r[31]; // 8009AE30
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009AE34
  c->lr=0x8009AE3Cu; f_800979AC(c); // 8009AE38
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AE3C
  c->r[3]=R32(c->r[28]+0x00000048u); // 8009AE40
  {uint32_t ea=c->r[3]+c->r[27]; WF32(ea,c->f[0]);} // 8009AE44
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AE48
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AE4C
  c->r[3]=c->r[0]+c->r[27]; // 8009AE50
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8009AE54
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AE58
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AE5C
  c->r[3]=c->r[0]+c->r[27]; // 8009AE60
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8009AE64
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AE68
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AE6C
  c->r[3]=c->r[3]+c->r[31]; // 8009AE70
  c->r[4]=R8(c->r[3]+0x00000024u); // 8009AE74
  c->r[3]=c->r[0]+c->r[27]; // 8009AE78
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 8009AE7C
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AE80
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AE84
  c->r[3]=c->r[3]+c->r[31]; // 8009AE88
  c->r[4]=R8(c->r[3]+0x00000025u); // 8009AE8C
  c->r[3]=c->r[0]+c->r[27]; // 8009AE90
  W8(c->r[3]+0x0000000Du,c->r[4]); // 8009AE94
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AE98
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AE9C
  c->r[3]=c->r[3]+c->r[31]; // 8009AEA0
  c->r[4]=R8(c->r[3]+0x00000026u); // 8009AEA4
  c->r[3]=c->r[0]+c->r[27]; // 8009AEA8
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 8009AEAC
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AEB0
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AEB4
  c->r[3]=c->r[3]+c->r[31]; // 8009AEB8
  c->r[4]=R8(c->r[3]+0x00000027u); // 8009AEBC
  c->r[3]=c->r[0]+c->r[27]; // 8009AEC0
  W8(c->r[3]+0x0000000Fu,c->r[4]); // 8009AEC4
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AEC8
  {uint32_t ea=c->r[28]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AECC
  c->r[3]=c->r[0]+c->r[27]; // 8009AED0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009AED4
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AED8
  {uint32_t ea=c->r[28]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AEDC
  c->r[3]=c->r[0]+c->r[27]; // 8009AEE0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8009AEE4
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AEE8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AEEC
  c->r[3]=c->r[0]+c->r[27]; // 8009AEF0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009AEF4
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AEF8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AEFC
  c->r[3]=c->r[0]+c->r[27]; // 8009AF00
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009AF04
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AF08
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AF0C
  c->r[3]=c->r[0]+c->r[27]; // 8009AF10
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8009AF14
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AF18
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AF1C
  c->r[3]=c->r[3]+c->r[31]; // 8009AF20
  c->r[4]=R8(c->r[3]+0x00000024u); // 8009AF24
  c->r[3]=c->r[0]+c->r[27]; // 8009AF28
  W8(c->r[3]+0x00000024u,c->r[4]); // 8009AF2C
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AF30
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AF34
  c->r[3]=c->r[3]+c->r[31]; // 8009AF38
  c->r[4]=R8(c->r[3]+0x00000025u); // 8009AF3C
  c->r[3]=c->r[0]+c->r[27]; // 8009AF40
  W8(c->r[3]+0x00000025u,c->r[4]); // 8009AF44
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AF48
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AF4C
  c->r[3]=c->r[3]+c->r[31]; // 8009AF50
  c->r[4]=R8(c->r[3]+0x00000026u); // 8009AF54
  c->r[3]=c->r[0]+c->r[27]; // 8009AF58
  W8(c->r[3]+0x00000026u,c->r[4]); // 8009AF5C
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AF60
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AF64
  c->r[3]=c->r[3]+c->r[31]; // 8009AF68
  c->r[4]=R8(c->r[3]+0x00000027u); // 8009AF6C
  c->r[3]=c->r[0]+c->r[27]; // 8009AF70
  W8(c->r[3]+0x00000027u,c->r[4]); // 8009AF74
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AF78
  {uint32_t ea=c->r[28]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AF7C
  c->r[3]=c->r[0]+c->r[27]; // 8009AF80
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8009AF84
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AF88
  {uint32_t ea=c->r[28]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AF8C
  c->r[3]=c->r[0]+c->r[27]; // 8009AF90
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8009AF94
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AF98
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AF9C
  c->r[3]=c->r[0]+c->r[27]; // 8009AFA0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8009AFA4
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AFA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AFAC
  c->r[3]=c->r[0]+c->r[27]; // 8009AFB0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8009AFB4
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AFB8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009AFBC
  c->r[3]=c->r[0]+c->r[27]; // 8009AFC0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8009AFC4
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AFC8
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AFCC
  c->r[3]=c->r[3]+c->r[31]; // 8009AFD0
  c->r[4]=R8(c->r[3]+0x00000028u); // 8009AFD4
  c->r[3]=c->r[0]+c->r[27]; // 8009AFD8
  W8(c->r[3]+0x0000003Cu,c->r[4]); // 8009AFDC
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AFE0
  c->r[30]=c->r[30]+0x00000001u; // 8009AFE4
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009AFE8
  c->r[3]=c->r[3]+c->r[31]; // 8009AFEC
  c->r[4]=R8(c->r[3]+0x00000029u); // 8009AFF0
  c->r[3]=c->r[0]+c->r[27]; // 8009AFF4
  W8(c->r[3]+0x0000003Du,c->r[4]); // 8009AFF8
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009AFFC
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B000
  c->r[3]=c->r[3]+c->r[31]; // 8009B004
  c->r[4]=R8(c->r[3]+0x0000002Au); // 8009B008
  c->r[3]=c->r[0]+c->r[27]; // 8009B00C
  W8(c->r[3]+0x0000003Eu,c->r[4]); // 8009B010
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009B014
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B018
  c->r[3]=c->r[3]+c->r[31]; // 8009B01C
  c->r[4]=R8(c->r[3]+0x0000002Bu); // 8009B020
  c->r[3]=c->r[0]+c->r[27]; // 8009B024
  W8(c->r[3]+0x0000003Fu,c->r[4]); // 8009B028
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B02C
  {uint32_t ea=c->r[28]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B030
  c->r[3]=c->r[0]+c->r[27]; // 8009B034
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 8009B038
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B03C
  {uint32_t ea=c->r[28]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B040
  c->r[3]=c->r[0]+c->r[27]; // 8009B044
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8009B048
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B04C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B050
  c->r[3]=c->r[0]+c->r[27]; // 8009B054
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8009B058
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B05C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B060
  c->r[3]=c->r[0]+c->r[27]; // 8009B064
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009B068
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B06C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B070
  c->r[3]=c->r[0]+c->r[27]; // 8009B074
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 8009B078
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009B07C
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B080
  c->r[3]=c->r[3]+c->r[31]; // 8009B084
  c->r[4]=R8(c->r[3]+0x00000028u); // 8009B088
  c->r[3]=c->r[0]+c->r[27]; // 8009B08C
  W8(c->r[3]+0x00000054u,c->r[4]); // 8009B090
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009B094
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B098
  c->r[3]=c->r[3]+c->r[31]; // 8009B09C
  c->r[4]=R8(c->r[3]+0x00000029u); // 8009B0A0
  c->r[3]=c->r[0]+c->r[27]; // 8009B0A4
  W8(c->r[3]+0x00000055u,c->r[4]); // 8009B0A8
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009B0AC
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B0B0
  c->r[3]=c->r[3]+c->r[31]; // 8009B0B4
  c->r[4]=R8(c->r[3]+0x0000002Au); // 8009B0B8
  c->r[3]=c->r[0]+c->r[27]; // 8009B0BC
  W8(c->r[3]+0x00000056u,c->r[4]); // 8009B0C0
  c->r[3]=R32(c->r[28]+0x00000044u); // 8009B0C4
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B0C8
  c->r[3]=c->r[3]+c->r[31]; // 8009B0CC
  c->r[4]=R8(c->r[3]+0x0000002Bu); // 8009B0D0
  c->r[3]=c->r[0]+c->r[27]; // 8009B0D4
  W8(c->r[3]+0x00000057u,c->r[4]); // 8009B0D8
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B0DC
  {uint32_t ea=c->r[28]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B0E0
  c->r[3]=c->r[0]+c->r[27]; // 8009B0E4
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 8009B0E8
  c->r[0]=R32(c->r[28]+0x00000048u); // 8009B0EC
  {uint32_t ea=c->r[28]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B0F0
  c->r[3]=c->r[0]+c->r[27]; // 8009B0F4
  c->r[27]=c->r[27]+0x00000060u; // 8009B0F8
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 8009B0FC
L_8009B100:;
  c->r[31]=c->r[31]+0x00000044u; // 8009B100
  c->r[29]=c->r[29]+0x00000001u; // 8009B104
L_8009B108:;
  c->r[0]=R32(c->r[28]+0x0000004Cu); // 8009B108
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009B10C
  if (crb(c,0)) { IRQCHK(c); goto L_8009ADDC; } // 8009B110
  c->r[0]=0u-c->r[30]; // 8009B114
  W32(c->r[28]+0x00000074u,c->r[30]); // 8009B118
  c->r[0]=c->r[0]&~c->r[30]; // 8009B11C
  c->r[3]=0u+0x00000001u; // 8009B120
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8009B124
  W8(c->r[28]+0x00000038u,c->r[0]); // 8009B128
L_8009B12C:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 8009B12C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 8009B130
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 8009B134
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 8009B138
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 8009B13C
  c->r[11]=c->r[1]+0x000000A0u; // 8009B140
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 8009B144
  c->lr=0x8009B14Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009B148
  c->r[0]=R32(c->r[1]+0x000000D4u); // 8009B14C
  c->lr=c->r[0]; // 8009B150
  c->r[1]=c->r[1]+0x000000D0u; // 8009B154
  return; // 8009B158
}

// fn_8009B15C
void f_8009B15C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B15C
  c->r[0]=c->lr; // 8009B160
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009B164
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8009B168
  c->r[31]=c->r[3]|c->r[3]; // 8009B16C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B170
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009B174
  c->ctr=c->r[12]; // 8009B178
  if (true) { c->lr=0x8009B180u; dispatch(c,c->ctr); } // 8009B17C
  cmps(c,0,(int32_t)c->r[3],0); // 8009B180
  if (!crb(c,2)) { goto L_8009B190; } // 8009B184
  c->r[3]=0u+0x00000000u; // 8009B188
  goto L_8009B204; // 8009B18C
L_8009B190:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 8009B190
  cmps(c,0,(int32_t)c->r[0],1); // 8009B194
  if (!crb(c,0)) { goto L_8009B1A4; } // 8009B198
  c->r[3]=0u+0x00000000u; // 8009B19C
  goto L_8009B204; // 8009B1A0
L_8009B1A4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8009B1A4
  cmps(c,0,(int32_t)c->r[3],0); // 8009B1A8
  if (crb(c,2)) { goto L_8009B1C8; } // 8009B1AC
  c->r[12]=R32(c->r[3]+0x00000160u); // 8009B1B0
  c->r[4]=c->r[1]+0x00000008u; // 8009B1B4
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009B1B8
  c->ctr=c->r[12]; // 8009B1BC
  if (true) { c->lr=0x8009B1C4u; dispatch(c,c->ctr); } // 8009B1C0
  goto L_8009B1D4; // 8009B1C4
L_8009B1C8:;
  c->r[3]=c->r[31]+0x00000004u; // 8009B1C8
  c->r[4]=c->r[1]+0x00000008u; // 8009B1CC
  c->lr=0x8009B1D4u; f_80163864(c); // 8009B1D0
L_8009B1D4:;
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 8009B1D4
  c->r[4]=0u+0x00000000u; // 8009B1D8
  c->lr=0x8009B1E0u; f_800E6FEC(c); // 8009B1DC
  c->lr=0x8009B1E4u; f_800E6FF0(c); // 8009B1E0
  c->r[0]=R32(c->r[31]+0x00000074u); // 8009B1E4
  c->r[3]=c->r[1]+0x00000008u; // 8009B1E8
  c->r[4]=R32(c->r[31]+0x00000048u); // 8009B1EC
  c->r[5]=0u+0x00000080u; // 8009B1F0
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009B1F4
  c->lr=0x8009B1FCu; f_800E6FF8(c); // 8009B1F8
  c->lr=0x8009B200u; f_800E7248(c); // 8009B1FC
  c->r[3]=0u+0x00000001u; // 8009B200
L_8009B204:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009B204
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8009B208
  c->lr=c->r[0]; // 8009B20C
  c->r[1]=c->r[1]+0x00000040u; // 8009B210
  return; // 8009B214
}

// fn_8009B218
void f_8009B218(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B218
  c->r[0]=c->lr; // 8009B21C
  c->r[5]=c->r[13]+0xFFFF8A70u; // 8009B220
  c->r[8]=0u+0x802C0000u; // 8009B224
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009B228
  c->r[6]=0u+0x800A0000u; // 8009B22C
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B230
  c->r[7]=0u+0x00000000u; // 8009B234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009B238
  c->r[4]=c->r[5]+0x00000004u; // 8009B23C
  c->r[8]=c->r[8]+0xFFFFCC10u; // 8009B240
  c->r[0]=0u+0x00000001u; // 8009B244
  c->r[6]=c->r[6]+0xFFFF83A0u; // 8009B248
  W32(c->r[3]+0x00000048u,c->r[8]); // 8009B24C
  c->r[31]=c->r[3]|c->r[3]; // 8009B250
  W32(c->r[3]+0x00000040u,c->r[7]); // 8009B254
  W32(c->r[3]+0x0000006Cu,c->r[6]); // 8009B258
  W32(c->r[3]+0x00000044u,c->r[7]); // 8009B25C
  W32(c->r[3]+0x00000070u,c->r[7]); // 8009B260
  W8(c->r[3]+0x00000038u,c->r[7]); // 8009B264
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8009B268
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 8009B26C
  W32(c->r[3]+0x00000050u,c->r[4]); // 8009B270
  W32(c->r[3]+0x00000054u,c->r[0]); // 8009B274
  c->r[3]=0u+0x00000006u; // 8009B278
  c->lr=0x8009B280u; f_800980D8(c); // 8009B27C
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B280
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009B284
  {uint32_t ea=c->r[2]+0xFFFF9364u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B288
  W32(c->r[31]+0x00000058u,c->r[3]); // 8009B28C
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[2]);} // 8009B290
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 8009B294
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 8009B298
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 8009B29C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009B2A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009B2A4
  c->lr=c->r[0]; // 8009B2A8
  c->r[1]=c->r[1]+0x00000010u; // 8009B2AC
  return; // 8009B2B0
}

// fn_8009B2B4
void f_8009B2B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B2B4
  c->r[0]=c->lr; // 8009B2B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009B2BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009B2C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009B2C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009B2C8
  c->r[29]=c->r[3]|c->r[3]; // 8009B2CC
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B2D0
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009B2D4
  c->ctr=c->r[12]; // 8009B2D8
  if (true) { c->lr=0x8009B2E0u; dispatch(c,c->ctr); } // 8009B2DC
  c->r[30]=0u+0x00000000u; // 8009B2E0
  c->r[31]=0u+0x00000000u; // 8009B2E4
  goto L_8009B314; // 8009B2E8
L_8009B2EC:;
  c->r[3]=R32(c->r[29]+0x00000040u); // 8009B2EC
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009B2F0
  cmps(c,0,(int32_t)c->r[3],0); // 8009B2F4
  if (crb(c,2)) { goto L_8009B30C; } // 8009B2F8
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B2FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8009B300
  c->ctr=c->r[12]; // 8009B304
  if (true) { c->lr=0x8009B30Cu; dispatch(c,c->ctr); } // 8009B308
L_8009B30C:;
  c->r[31]=c->r[31]+0x00000030u; // 8009B30C
  c->r[30]=c->r[30]+0x00000001u; // 8009B310
L_8009B314:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009B314
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009B318
  if (crb(c,0)) { IRQCHK(c); goto L_8009B2EC; } // 8009B31C
  c->r[0]=0u+0x00000000u; // 8009B320
  W32(c->r[29]+0x00000040u,c->r[0]); // 8009B324
  W32(c->r[29]+0x00000044u,c->r[0]); // 8009B328
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009B32C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009B330
  c->r[29]=R32(c->r[1]+0x00000014u); // 8009B334
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009B338
  c->lr=c->r[0]; // 8009B33C
  c->r[1]=c->r[1]+0x00000020u; // 8009B340
  return; // 8009B344
}

// fn_8009B348
void f_8009B348(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B348
  c->r[0]=c->lr; // 8009B34C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009B350
  c->r[11]=c->r[1]+0x00000030u; // 8009B354
  c->lr=0x8009B35Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009B358
  c->r[25]=c->r[3]|c->r[3]; // 8009B35C
  c->r[29]=c->r[4]|c->r[4]; // 8009B360
  c->r[26]=c->r[5]|c->r[5]; // 8009B364
  c->r[27]=c->r[6]|c->r[6]; // 8009B368
  c->r[28]=c->r[7]|c->r[7]; // 8009B36C
  c->lr=0x8009B374u; f_80098038(c); // 8009B370
  W32(c->r[25]+0x00000040u,c->r[3]); // 8009B374
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 8009B378
  c->lr=0x8009B380u; f_80098028(c); // 8009B37C
  c->r[31]=0u+0x802C0000u; // 8009B380
  W32(c->r[25]+0x00000044u,c->r[29]); // 8009B384
  c->r[31]=c->r[31]+0xFFFFCCD0u; // 8009B388
  c->r[29]=0u+0x00000000u; // 8009B38C
  c->r[30]=0u+0x00000000u; // 8009B390
  goto L_8009B414; // 8009B394
L_8009B398:;
  c->lr=0x8009B39Cu; f_80098038(c); // 8009B398
  cmps(c,0,(int32_t)c->r[3],0); // 8009B39C
  if (crb(c,2)) { goto L_8009B3A8; } // 8009B3A0
  W32(c->r[3]+0x0000003Cu,c->r[31]); // 8009B3A4
L_8009B3A8:;
  c->r[4]=R32(c->r[25]+0x00000040u); // 8009B3A8
  W32(c->r[4]+c->r[30],c->r[3]); // 8009B3AC
  c->r[3]=0u+0x0000009Cu; // 8009B3B0
  c->lr=0x8009B3B8u; f_80098028(c); // 8009B3B4
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009B3B8
  c->r[3]=R32(c->r[3]+c->r[30]); // 8009B3BC
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B3C0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009B3C4
  c->ctr=c->r[12]; // 8009B3C8
  if (true) { c->lr=0x8009B3D0u; dispatch(c,c->ctr); } // 8009B3CC
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009B3D0
  c->r[4]=c->r[26]|c->r[26]; // 8009B3D4
  c->r[5]=c->r[27]|c->r[27]; // 8009B3D8
  c->r[3]=R32(c->r[3]+c->r[30]); // 8009B3DC
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B3E0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8009B3E4
  c->ctr=c->r[12]; // 8009B3E8
  if (true) { c->lr=0x8009B3F0u; dispatch(c,c->ctr); } // 8009B3EC
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009B3F0
  c->r[4]=c->r[28]|c->r[28]; // 8009B3F4
  c->r[3]=R32(c->r[3]+c->r[30]); // 8009B3F8
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B3FC
  c->r[12]=R32(c->r[12]+0x00000054u); // 8009B400
  c->ctr=c->r[12]; // 8009B404
  if (true) { c->lr=0x8009B40Cu; dispatch(c,c->ctr); } // 8009B408
  c->r[30]=c->r[30]+0x00000030u; // 8009B40C
  c->r[29]=c->r[29]+0x00000001u; // 8009B410
L_8009B414:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009B414
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009B418
  if (crb(c,0)) { IRQCHK(c); goto L_8009B398; } // 8009B41C
  c->r[12]=R32(c->r[25]+0x0000003Cu); // 8009B420
  c->r[3]=c->r[25]|c->r[25]; // 8009B424
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009B428
  c->ctr=c->r[12]; // 8009B42C
  if (true) { c->lr=0x8009B434u; dispatch(c,c->ctr); } // 8009B430
  c->r[11]=c->r[1]+0x00000030u; // 8009B434
  c->lr=0x8009B43Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009B438
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009B43C
  c->lr=c->r[0]; // 8009B440
  c->r[1]=c->r[1]+0x00000030u; // 8009B444
  return; // 8009B448
}

// fn_8009B44C
void f_8009B44C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000048u,c->r[4]); // 8009B44C
  return; // 8009B450
}

// fn_8009B454
void f_8009B454(Ctx* __restrict c) {
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 8009B454
  W32(c->r[3]+0x00000050u,c->r[5]); // 8009B458
  W32(c->r[3]+0x00000054u,c->r[6]); // 8009B45C
  return; // 8009B460
}

// fn_8009B464
void f_8009B464(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B464
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 8009B468
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B46C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 8009B470
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B474
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8009B478
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B47C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 8009B480
  return; // 8009B484
}

// fn_8009B488
void f_8009B488(Ctx* __restrict c) {
  W32(c->r[3]+0x00000058u,c->r[4]); // 8009B488
  return; // 8009B48C
}

// fn_8009B490
void f_8009B490(Ctx* __restrict c) {
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 8009B490
  return; // 8009B494
}

// fn_8009B498
void f_8009B498(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000038u); // 8009B498
  return; // 8009B49C
}

// fn_8009B4A0
void f_8009B4A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B4A0
  c->r[0]=c->lr; // 8009B4A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009B4A8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8009B4AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8009B4B0
  c->r[0]=0u+0x00000000u; // 8009B4B4
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009B4B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009B4BC
  c->r[31]=0u+0x00000000u; // 8009B4C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009B4C4
  c->r[30]=0u+0x00000000u; // 8009B4C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009B4CC
  c->r[29]=c->r[3]|c->r[3]; // 8009B4D0
  W32(c->r[3]+0x00000070u,c->r[0]); // 8009B4D4
  W8(c->r[3]+0x00000038u,c->r[0]); // 8009B4D8
  goto L_8009B50C; // 8009B4DC
L_8009B4E0:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009B4E0
  c->r[3]=c->r[0]+c->r[31]; // 8009B4E4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[31]);} // 8009B4E8
  c->r[3]=R32(c->r[29]+0x00000040u); // 8009B4EC
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009B4F0
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B4F4
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009B4F8
  c->ctr=c->r[12]; // 8009B4FC
  if (true) { c->lr=0x8009B504u; dispatch(c,c->ctr); } // 8009B500
  c->r[31]=c->r[31]+0x00000030u; // 8009B504
  c->r[30]=c->r[30]+0x00000001u; // 8009B508
L_8009B50C:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009B50C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009B510
  if (crb(c,0)) { IRQCHK(c); goto L_8009B4E0; } // 8009B514
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8009B518
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009B51C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8009B520
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009B524
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009B528
  c->r[29]=R32(c->r[1]+0x00000014u); // 8009B52C
  c->lr=c->r[0]; // 8009B530
  c->r[1]=c->r[1]+0x00000030u; // 8009B534
  return; // 8009B538
}

// fn_8009B53C
void f_8009B53C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B53C
  c->r[0]=c->lr; // 8009B540
  W32(c->r[1]+0x00000154u,c->r[0]); // 8009B544
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[31]);} // 8009B548
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,31,ea,0,0);} // 8009B54C
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[30]);} // 8009B550
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,30,ea,0,0);} // 8009B554
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[29]);} // 8009B558
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,29,ea,0,0);} // 8009B55C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[28]);} // 8009B560
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,28,ea,0,0);} // 8009B564
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[27]);} // 8009B568
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,27,ea,0,0);} // 8009B56C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[26]);} // 8009B570
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,26,ea,0,0);} // 8009B574
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[25]);} // 8009B578
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,25,ea,0,0);} // 8009B57C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[24]);} // 8009B580
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,24,ea,0,0);} // 8009B584
  c->r[11]=c->r[1]+0x000000D0u; // 8009B588
  c->lr=0x8009B590u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009B58C
  c->r[0]=R32(c->r[3]+0x00000040u); // 8009B590
  c->r[6]=0u+0x43300000u; // 8009B594
  W32(c->r[1]+0x00000098u,c->r[6]); // 8009B598
  c->r[25]=c->r[3]|c->r[3]; // 8009B59C
  cmps(c,0,(int32_t)c->r[0],0); // 8009B5A0
  c->r[26]=c->r[4]|c->r[4]; // 8009B5A4
  W32(c->r[1]+0x000000A0u,c->r[6]); // 8009B5A8
  c->r[27]=c->r[5]|c->r[5]; // 8009B5AC
  if (!crb(c,2)) { goto L_8009B5BC; } // 8009B5B0
  c->r[3]=0u+0x00000000u; // 8009B5B4
  goto L_8009B940; // 8009B5B8
L_8009B5BC:;
  c->r[5]=0u+0x80270000u; // 8009B5BC
  {uint32_t ea=c->r[5]+0x000024D0u; c->r[4]=R32(ea); c->r[5]=ea;} // 8009B5C0
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[28]=RF64(ea);} // 8009B5C4
  c->r[29]=0u+0x00000000u; // 8009B5C8
  c->r[3]=R32(c->r[5]+0x00000004u); // 8009B5CC
  c->r[30]=0u+0x00000000u; // 8009B5D0
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009B5D4
  c->r[31]=0u+0x00000000u; // 8009B5D8
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009B5DC
  W32(c->r[1]+0x00000010u,c->r[4]); // 8009B5E0
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009B5E4
  W32(c->r[1]+0x00000014u,c->r[3]); // 8009B5E8
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8009B5EC
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009B5F0
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[25]=c->ps1[25]=RF32(ea);} // 8009B5F4
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[27]=c->ps1[27]=RF32(ea);} // 8009B5F8
  goto L_8009B928; // 8009B5FC
L_8009B600:;
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009B600
  c->r[3]=c->r[0]+c->r[31]; // 8009B604
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B608
  fcmp(c,0,c->f[0],c->f[27]); // 8009B60C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009B610
  if (!crb(c,2)) { goto L_8009B920; } // 8009B614
  c->r[3]=R32(c->r[3]+0x00000000u); // 8009B618
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B61C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009B620
  c->ctr=c->r[12]; // 8009B624
  if (true) { c->lr=0x8009B62Cu; dispatch(c,c->ctr); } // 8009B628
  cmps(c,0,(int32_t)c->r[3],0); // 8009B62C
  if (!crb(c,2)) { goto L_8009B920; } // 8009B630
  c->lr=0x8009B638u; f_8025AE00(c); // 8009B634
  c->r[4]=R32(c->r[25]+0x00000054u); // 8009B638
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009B63C
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 8009B640
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8009B644
  c->r[28]=c->r[3]-c->r[0]; // 8009B648
  c->lr=0x8009B650u; f_8025AE00(c); // 8009B64C
  c->r[0]=c->r[3]^0x80000000u; // 8009B650
  {uint32_t ea=c->r[24]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B654
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009B658
  {uint32_t ea=c->r[24]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B65C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009B660
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009B664
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009B668
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 8009B66C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009B670
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009B674
  c->f[26]=c->ps1[26]=S(c->f[1]+c->f[0]); // 8009B678
  c->lr=0x8009B680u; f_8025AE00(c); // 8009B67C
  c->r[0]=c->r[3]^0x80000000u; // 8009B680
  {uint32_t ea=c->r[24]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B684
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009B688
  {uint32_t ea=c->r[24]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B68C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009B690
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009B694
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 8009B698
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009B69C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009B6A0
  c->f[24]=c->ps1[24]=S(c->f[1]+c->f[0]); // 8009B6A4
  c->lr=0x8009B6ACu; f_8025AE00(c); // 8009B6A8
  c->r[0]=c->r[3]^0x80000000u; // 8009B6AC
  c->r[3]=c->r[1]+0x00000068u; // 8009B6B0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009B6B4
  c->r[4]=0u+0x00000079u; // 8009B6B8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 8009B6BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 8009B6C0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 8009B6C4
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8009B6C8
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[0]); // 8009B6CC
  c->lr=0x8009B6D4u; f_80163C44(c); // 8009B6D0
  c->lr=0x8009B6D8u; f_8025AE00(c); // 8009B6D4
  c->r[0]=c->r[3]^0x80000000u; // 8009B6D8
  c->r[3]=c->r[1]+0x00000038u; // 8009B6DC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009B6E0
  c->r[4]=0u+0x00000078u; // 8009B6E4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 8009B6E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 8009B6EC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[29]); // 8009B6F0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8009B6F4
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[0]); // 8009B6F8
  c->lr=0x8009B700u; f_80163C44(c); // 8009B6FC
  c->r[3]=c->r[1]+0x00000068u; // 8009B700
  c->r[4]=c->r[1]+0x00000038u; // 8009B704
  c->r[5]=c->r[3]|c->r[3]; // 8009B708
  c->lr=0x8009B710u; f_80163898(c); // 8009B70C
  c->r[3]=c->r[1]+0x00000068u; // 8009B710
  c->r[4]=c->r[1]+0x00000010u; // 8009B714
  c->r[5]=c->r[1]+0x0000001Cu; // 8009B718
  c->lr=0x8009B720u; f_801643D8(c); // 8009B71C
  c->f[1]=c->f[26]; // 8009B720
  c->r[3]=c->r[1]+0x0000001Cu; // 8009B724
  c->r[4]=c->r[1]+0x00000028u; // 8009B728
  c->lr=0x8009B730u; f_8016482C(c); // 8009B72C
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009B730
  c->r[4]=c->r[26]|c->r[26]; // 8009B734
  c->r[3]=c->r[1]+0x00000028u; // 8009B738
  c->r[5]=c->r[0]+c->r[31]; // 8009B73C
  c->r[5]=c->r[5]+0x00000004u; // 8009B740
  c->lr=0x8009B748u; f_801647E4(c); // 8009B744
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009B748
  c->f[1]=c->f[24]; // 8009B74C
  c->r[3]=c->r[1]+0x0000001Cu; // 8009B750
  c->r[4]=c->r[0]+c->r[31]; // 8009B754
  c->r[4]=c->r[4]+0x00000010u; // 8009B758
  c->lr=0x8009B760u; f_8016482C(c); // 8009B75C
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009B760
  c->lr=0x8009B768u; f_8025AE00(c); // 8009B764
  c->r[3]=c->r[3]^0x80000000u; // 8009B768
  {uint32_t ea=c->r[24]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B76C
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8009B770
  {uint32_t ea=c->r[24]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B774
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009B778
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009B77C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009B780
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 8009B784
  c->r[3]=c->r[0]+c->r[31]; // 8009B788
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009B78C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009B790
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009B794
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009B798
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009B79C
  c->lr=0x8009B7A4u; f_8025AE00(c); // 8009B7A0
  c->r[3]=c->r[3]^0x80000000u; // 8009B7A4
  {uint32_t ea=c->r[24]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B7A8
  W32(c->r[1]+0x000000A4u,c->r[3]); // 8009B7AC
  {uint32_t ea=c->r[24]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B7B0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009B7B4
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009B7B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009B7BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 8009B7C0
  c->r[3]=c->r[0]+c->r[31]; // 8009B7C4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009B7C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009B7CC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009B7D0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8009B7D4
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009B7D8
  c->lr=0x8009B7E0u; f_8025AE00(c); // 8009B7DC
  c->r[3]=c->r[3]^0x80000000u; // 8009B7E0
  {uint32_t ea=c->r[24]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B7E4
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8009B7E8
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8009B7EC
  {uint32_t ea=c->r[24]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B7F0
  c->r[4]=c->r[1]+0x00000008u; // 8009B7F4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009B7F8
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009B7FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009B800
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[28]); // 8009B804
  c->r[3]=c->r[0]+c->r[31]; // 8009B808
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009B80C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009B810
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009B814
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8009B818
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009B81C
  c->r[3]=c->r[0]+c->r[31]; // 8009B820
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[25]);} // 8009B824
  c->r[0]=R32(c->r[25]+0x0000004Cu); // 8009B828
  c->r[3]=c->r[0]+c->r[5]; // 8009B82C
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009B830
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009B834
  c->r[0]=R8(c->r[3]+0x00000001u); // 8009B838
  W8(c->r[1]+0x00000009u,c->r[0]); // 8009B83C
  c->r[0]=R8(c->r[3]+0x00000002u); // 8009B840
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8009B844
  c->r[0]=R8(c->r[3]+0x00000003u); // 8009B848
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8009B84C
  c->r[0]=R32(c->r[25]+0x00000050u); // 8009B850
  c->r[3]=c->r[0]+c->r[5]; // 8009B854
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009B858
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8009B85C
  c->r[0]=R8(c->r[3]+0x00000001u); // 8009B860
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8009B864
  c->r[0]=R8(c->r[3]+0x00000002u); // 8009B868
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 8009B86C
  c->r[0]=R8(c->r[3]+0x00000003u); // 8009B870
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8009B874
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009B878
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009B87C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B880
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009B884
  c->ctr=c->r[12]; // 8009B888
  if (true) { c->lr=0x8009B890u; dispatch(c,c->ctr); } // 8009B88C
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009B890
  c->r[4]=R32(c->r[25]+0x00000058u); // 8009B894
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009B898
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B89C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8009B8A0
  c->ctr=c->r[12]; // 8009B8A4
  if (true) { c->lr=0x8009B8ACu; dispatch(c,c->ctr); } // 8009B8A8
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009B8AC
  c->lr=0x8009B8B4u; f_8025AE00(c); // 8009B8B0
  c->r[0]=c->r[3]^0x80000000u; // 8009B8B4
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009B8B8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009B8BC
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009B8C0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 8009B8C4
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B8C8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[28]); // 8009B8CC
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B8D0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B8D4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8009B8D8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8009B8DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009B8E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009B8E4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8009B8E8
  c->ctr=c->r[12]; // 8009B8EC
  if (true) { c->lr=0x8009B8F4u; dispatch(c,c->ctr); } // 8009B8F0
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009B8F4
  c->r[4]=c->r[25]+0x0000005Cu; // 8009B8F8
  c->r[5]=0u+0x00000000u; // 8009B8FC
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009B900
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009B904
  c->r[12]=R32(c->r[12]+0x00000050u); // 8009B908
  c->ctr=c->r[12]; // 8009B90C
  if (true) { c->lr=0x8009B914u; dispatch(c,c->ctr); } // 8009B910
  c->r[29]=c->r[29]+0x00000001u; // 8009B914
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 8009B918
  if (!crb(c,0)) { goto L_8009B934; } // 8009B91C
L_8009B920:;
  c->r[31]=c->r[31]+0x00000030u; // 8009B920
  c->r[30]=c->r[30]+0x00000001u; // 8009B924
L_8009B928:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009B928
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009B92C
  if (crb(c,0)) { IRQCHK(c); goto L_8009B600; } // 8009B930
L_8009B934:;
  c->r[0]=0u+0x00000001u; // 8009B934
  c->r[3]=0u+0x00000001u; // 8009B938
  W8(c->r[25]+0x00000038u,c->r[0]); // 8009B93C
L_8009B940:;
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,31,ea,0,0);} // 8009B940
  {uint32_t ea=c->r[1]+0x00000140u; c->f[31]=RF64(ea);} // 8009B944
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,30,ea,0,0);} // 8009B948
  {uint32_t ea=c->r[1]+0x00000130u; c->f[30]=RF64(ea);} // 8009B94C
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,29,ea,0,0);} // 8009B950
  {uint32_t ea=c->r[1]+0x00000120u; c->f[29]=RF64(ea);} // 8009B954
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,28,ea,0,0);} // 8009B958
  {uint32_t ea=c->r[1]+0x00000110u; c->f[28]=RF64(ea);} // 8009B95C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,27,ea,0,0);} // 8009B960
  {uint32_t ea=c->r[1]+0x00000100u; c->f[27]=RF64(ea);} // 8009B964
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,26,ea,0,0);} // 8009B968
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[26]=RF64(ea);} // 8009B96C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,25,ea,0,0);} // 8009B970
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[25]=RF64(ea);} // 8009B974
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,24,ea,0,0);} // 8009B978
  c->r[11]=c->r[1]+0x000000D0u; // 8009B97C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[24]=RF64(ea);} // 8009B980
  c->lr=0x8009B988u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009B984
  c->r[0]=R32(c->r[1]+0x00000154u); // 8009B988
  c->lr=c->r[0]; // 8009B98C
  c->r[1]=c->r[1]+0x00000150u; // 8009B990
  return; // 8009B994
}

// fn_8009B998
void f_8009B998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B998
  c->r[0]=c->lr; // 8009B99C
  W32(c->r[1]+0x00000154u,c->r[0]); // 8009B9A0
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[31]);} // 8009B9A4
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,31,ea,0,0);} // 8009B9A8
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[30]);} // 8009B9AC
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,30,ea,0,0);} // 8009B9B0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[29]);} // 8009B9B4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,29,ea,0,0);} // 8009B9B8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[28]);} // 8009B9BC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,28,ea,0,0);} // 8009B9C0
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[27]);} // 8009B9C4
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,27,ea,0,0);} // 8009B9C8
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[26]);} // 8009B9CC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,26,ea,0,0);} // 8009B9D0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[25]);} // 8009B9D4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,25,ea,0,0);} // 8009B9D8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[24]);} // 8009B9DC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,24,ea,0,0);} // 8009B9E0
  c->r[11]=c->r[1]+0x000000D0u; // 8009B9E4
  c->lr=0x8009B9ECu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009B9E8
  c->r[0]=R32(c->r[3]+0x00000040u); // 8009B9EC
  c->r[7]=0u+0x43300000u; // 8009B9F0
  W32(c->r[1]+0x00000098u,c->r[7]); // 8009B9F4
  c->r[24]=c->r[3]|c->r[3]; // 8009B9F8
  cmps(c,0,(int32_t)c->r[0],0); // 8009B9FC
  c->r[25]=c->r[4]|c->r[4]; // 8009BA00
  W32(c->r[1]+0x000000A0u,c->r[7]); // 8009BA04
  c->r[26]=c->r[5]|c->r[5]; // 8009BA08
  c->r[27]=c->r[6]|c->r[6]; // 8009BA0C
  if (!crb(c,2)) { goto L_8009BA1C; } // 8009BA10
  c->r[3]=0u+0x00000000u; // 8009BA14
  goto L_8009BDC4; // 8009BA18
L_8009BA1C:;
  c->r[5]=0u+0x80270000u; // 8009BA1C
  {uint32_t ea=c->r[5]+0x000024DCu; c->r[4]=R32(ea); c->r[5]=ea;} // 8009BA20
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[27]=RF64(ea);} // 8009BA24
  c->r[29]=0u+0x00000000u; // 8009BA28
  c->r[3]=R32(c->r[5]+0x00000004u); // 8009BA2C
  c->r[30]=0u+0x00000000u; // 8009BA30
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009BA34
  c->r[31]=0u+0x00000000u; // 8009BA38
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[28]=c->ps1[28]=RF32(ea);} // 8009BA3C
  W32(c->r[1]+0x00000010u,c->r[4]); // 8009BA40
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009BA44
  W32(c->r[1]+0x00000014u,c->r[3]); // 8009BA48
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8009BA4C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009BA50
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009BA54
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[25]=c->ps1[25]=RF32(ea);} // 8009BA58
  goto L_8009BDAC; // 8009BA5C
L_8009BA60:;
  c->r[0]=R32(c->r[24]+0x00000040u); // 8009BA60
  c->r[3]=c->r[0]+c->r[31]; // 8009BA64
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BA68
  fcmp(c,0,c->f[0],c->f[31]); // 8009BA6C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009BA70
  if (!crb(c,2)) { goto L_8009BDA4; } // 8009BA74
  c->r[3]=R32(c->r[3]+0x00000000u); // 8009BA78
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009BA7C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009BA80
  c->ctr=c->r[12]; // 8009BA84
  if (true) { c->lr=0x8009BA8Cu; dispatch(c,c->ctr); } // 8009BA88
  cmps(c,0,(int32_t)c->r[3],0); // 8009BA8C
  if (!crb(c,2)) { goto L_8009BDA4; } // 8009BA90
  c->lr=0x8009BA98u; f_8025AE00(c); // 8009BA94
  c->r[4]=R32(c->r[24]+0x00000054u); // 8009BA98
  c->r[23]=R32(c->r[24]+0x00000048u); // 8009BA9C
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 8009BAA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8009BAA4
  c->r[28]=c->r[3]-c->r[0]; // 8009BAA8
  c->lr=0x8009BAB0u; f_8025AE00(c); // 8009BAAC
  c->r[0]=c->r[3]^0x80000000u; // 8009BAB0
  {uint32_t ea=c->r[23]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BAB4
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009BAB8
  {uint32_t ea=c->r[23]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BABC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009BAC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009BAC4
  c->r[23]=R32(c->r[24]+0x00000048u); // 8009BAC8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009BACC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009BAD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009BAD4
  c->f[26]=c->ps1[26]=S(c->f[1]+c->f[0]); // 8009BAD8
  c->lr=0x8009BAE0u; f_8025AE00(c); // 8009BADC
  c->r[0]=c->r[3]^0x80000000u; // 8009BAE0
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BAE4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009BAE8
  {uint32_t ea=c->r[23]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BAEC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009BAF0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009BAF4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009BAF8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009BAFC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009BB00
  c->f[24]=c->ps1[24]=S(c->f[1]+c->f[0]); // 8009BB04
  c->lr=0x8009BB0Cu; f_8025AE00(c); // 8009BB08
  c->r[0]=c->r[3]^0x80000000u; // 8009BB0C
  c->r[3]=c->r[1]+0x00000068u; // 8009BB10
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009BB14
  c->r[4]=0u+0x00000079u; // 8009BB18
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 8009BB1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8009BB20
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 8009BB24
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009BB28
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 8009BB2C
  c->lr=0x8009BB34u; f_80163C44(c); // 8009BB30
  c->lr=0x8009BB38u; f_8025AE00(c); // 8009BB34
  c->r[0]=c->r[3]^0x80000000u; // 8009BB38
  c->r[3]=c->r[1]+0x00000038u; // 8009BB3C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009BB40
  c->r[4]=0u+0x00000078u; // 8009BB44
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 8009BB48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8009BB4C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 8009BB50
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009BB54
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 8009BB58
  c->lr=0x8009BB60u; f_80163C44(c); // 8009BB5C
  c->r[3]=c->r[1]+0x00000068u; // 8009BB60
  c->r[4]=c->r[1]+0x00000038u; // 8009BB64
  c->r[5]=c->r[3]|c->r[3]; // 8009BB68
  c->lr=0x8009BB70u; f_80163898(c); // 8009BB6C
  c->r[3]=c->r[1]+0x00000068u; // 8009BB70
  c->r[4]=c->r[1]+0x00000010u; // 8009BB74
  c->r[5]=c->r[1]+0x0000001Cu; // 8009BB78
  c->lr=0x8009BB80u; f_801643D8(c); // 8009BB7C
  c->r[4]=c->r[26]|c->r[26]; // 8009BB80
  c->r[3]=c->r[1]+0x0000001Cu; // 8009BB84
  c->lr=0x8009BB8Cu; f_801648E8(c); // 8009BB88
  fcmp(c,0,c->f[1],c->f[31]); // 8009BB8C
  if (!crb(c,0)) { goto L_8009BBA4; } // 8009BB90
  c->r[3]=c->r[1]+0x0000001Cu; // 8009BB94
  {uint32_t ea=c->r[2]+0xFFFF9360u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BB98
  c->r[4]=c->r[3]|c->r[3]; // 8009BB9C
  c->lr=0x8009BBA4u; f_8016482C(c); // 8009BBA0
L_8009BBA4:;
  c->f[1]=c->f[26]; // 8009BBA4
  c->r[3]=c->r[1]+0x0000001Cu; // 8009BBA8
  c->r[4]=c->r[1]+0x00000028u; // 8009BBAC
  c->lr=0x8009BBB4u; f_8016482C(c); // 8009BBB0
  c->r[0]=R32(c->r[24]+0x00000040u); // 8009BBB4
  c->r[4]=c->r[25]|c->r[25]; // 8009BBB8
  c->r[3]=c->r[1]+0x00000028u; // 8009BBBC
  c->r[5]=c->r[0]+c->r[31]; // 8009BBC0
  c->r[5]=c->r[5]+0x00000004u; // 8009BBC4
  c->lr=0x8009BBCCu; f_801647E4(c); // 8009BBC8
  c->r[0]=R32(c->r[24]+0x00000040u); // 8009BBCC
  c->f[1]=c->f[24]; // 8009BBD0
  c->r[3]=c->r[1]+0x0000001Cu; // 8009BBD4
  c->r[4]=c->r[0]+c->r[31]; // 8009BBD8
  c->r[4]=c->r[4]+0x00000010u; // 8009BBDC
  c->lr=0x8009BBE4u; f_8016482C(c); // 8009BBE0
  c->r[23]=R32(c->r[24]+0x00000048u); // 8009BBE4
  c->lr=0x8009BBECu; f_8025AE00(c); // 8009BBE8
  c->r[3]=c->r[3]^0x80000000u; // 8009BBEC
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BBF0
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8009BBF4
  {uint32_t ea=c->r[23]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BBF8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009BBFC
  c->r[0]=R32(c->r[24]+0x00000040u); // 8009BC00
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009BC04
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009BC08
  c->r[3]=c->r[0]+c->r[31]; // 8009BC0C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009BC10
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009BC14
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009BC18
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009BC1C
  c->r[23]=R32(c->r[24]+0x00000048u); // 8009BC20
  c->lr=0x8009BC28u; f_8025AE00(c); // 8009BC24
  c->r[3]=c->r[3]^0x80000000u; // 8009BC28
  {uint32_t ea=c->r[23]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BC2C
  W32(c->r[1]+0x000000A4u,c->r[3]); // 8009BC30
  {uint32_t ea=c->r[23]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BC34
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 8009BC38
  c->r[0]=R32(c->r[24]+0x00000040u); // 8009BC3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009BC40
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009BC44
  c->r[3]=c->r[0]+c->r[31]; // 8009BC48
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009BC4C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009BC50
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009BC54
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8009BC58
  c->r[23]=R32(c->r[24]+0x00000048u); // 8009BC5C
  c->lr=0x8009BC64u; f_8025AE00(c); // 8009BC60
  c->r[3]=c->r[3]^0x80000000u; // 8009BC64
  {uint32_t ea=c->r[23]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BC68
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8009BC6C
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8009BC70
  {uint32_t ea=c->r[23]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BC74
  c->r[4]=c->r[1]+0x00000008u; // 8009BC78
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=RF64(ea);} // 8009BC7C
  c->r[0]=R32(c->r[24]+0x00000040u); // 8009BC80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009BC84
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009BC88
  c->r[3]=c->r[0]+c->r[31]; // 8009BC8C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009BC90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009BC94
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009BC98
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8009BC9C
  c->r[0]=R32(c->r[24]+0x00000040u); // 8009BCA0
  c->r[3]=c->r[0]+c->r[31]; // 8009BCA4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[25]);} // 8009BCA8
  c->r[0]=R32(c->r[24]+0x0000004Cu); // 8009BCAC
  c->r[3]=c->r[0]+c->r[5]; // 8009BCB0
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009BCB4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009BCB8
  c->r[0]=R8(c->r[3]+0x00000001u); // 8009BCBC
  W8(c->r[1]+0x00000009u,c->r[0]); // 8009BCC0
  c->r[0]=R8(c->r[3]+0x00000002u); // 8009BCC4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8009BCC8
  c->r[0]=R8(c->r[3]+0x00000003u); // 8009BCCC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8009BCD0
  c->r[0]=R32(c->r[24]+0x00000050u); // 8009BCD4
  c->r[3]=c->r[0]+c->r[5]; // 8009BCD8
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009BCDC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8009BCE0
  c->r[0]=R8(c->r[3]+0x00000001u); // 8009BCE4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8009BCE8
  c->r[0]=R8(c->r[3]+0x00000002u); // 8009BCEC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 8009BCF0
  c->r[0]=R8(c->r[3]+0x00000003u); // 8009BCF4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8009BCF8
  c->r[3]=R32(c->r[24]+0x00000040u); // 8009BCFC
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009BD00
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009BD04
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009BD08
  c->ctr=c->r[12]; // 8009BD0C
  if (true) { c->lr=0x8009BD14u; dispatch(c,c->ctr); } // 8009BD10
  c->r[3]=R32(c->r[24]+0x00000040u); // 8009BD14
  c->r[4]=R32(c->r[24]+0x00000058u); // 8009BD18
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009BD1C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009BD20
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8009BD24
  c->ctr=c->r[12]; // 8009BD28
  if (true) { c->lr=0x8009BD30u; dispatch(c,c->ctr); } // 8009BD2C
  c->r[23]=R32(c->r[24]+0x00000048u); // 8009BD30
  c->lr=0x8009BD38u; f_8025AE00(c); // 8009BD34
  c->r[0]=c->r[3]^0x80000000u; // 8009BD38
  c->r[3]=R32(c->r[24]+0x00000040u); // 8009BD3C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009BD40
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009BD44
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 8009BD48
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009BD4C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[27]); // 8009BD50
  {uint32_t ea=c->r[23]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BD54
  {uint32_t ea=c->r[23]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BD58
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8009BD5C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009BD60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009BD64
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009BD68
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8009BD6C
  c->ctr=c->r[12]; // 8009BD70
  if (true) { c->lr=0x8009BD78u; dispatch(c,c->ctr); } // 8009BD74
  c->r[3]=R32(c->r[24]+0x00000040u); // 8009BD78
  c->r[4]=c->r[24]+0x0000005Cu; // 8009BD7C
  c->r[5]=0u+0x00000000u; // 8009BD80
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009BD84
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009BD88
  c->r[12]=R32(c->r[12]+0x00000050u); // 8009BD8C
  c->ctr=c->r[12]; // 8009BD90
  if (true) { c->lr=0x8009BD98u; dispatch(c,c->ctr); } // 8009BD94
  c->r[29]=c->r[29]+0x00000001u; // 8009BD98
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 8009BD9C
  if (!crb(c,0)) { goto L_8009BDB8; } // 8009BDA0
L_8009BDA4:;
  c->r[31]=c->r[31]+0x00000030u; // 8009BDA4
  c->r[30]=c->r[30]+0x00000001u; // 8009BDA8
L_8009BDAC:;
  c->r[0]=R32(c->r[24]+0x00000044u); // 8009BDAC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009BDB0
  if (crb(c,0)) { IRQCHK(c); goto L_8009BA60; } // 8009BDB4
L_8009BDB8:;
  c->r[0]=0u+0x00000001u; // 8009BDB8
  c->r[3]=0u+0x00000001u; // 8009BDBC
  W8(c->r[24]+0x00000038u,c->r[0]); // 8009BDC0
L_8009BDC4:;
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,31,ea,0,0);} // 8009BDC4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[31]=RF64(ea);} // 8009BDC8
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,30,ea,0,0);} // 8009BDCC
  {uint32_t ea=c->r[1]+0x00000130u; c->f[30]=RF64(ea);} // 8009BDD0
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,29,ea,0,0);} // 8009BDD4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[29]=RF64(ea);} // 8009BDD8
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,28,ea,0,0);} // 8009BDDC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[28]=RF64(ea);} // 8009BDE0
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,27,ea,0,0);} // 8009BDE4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[27]=RF64(ea);} // 8009BDE8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,26,ea,0,0);} // 8009BDEC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[26]=RF64(ea);} // 8009BDF0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,25,ea,0,0);} // 8009BDF4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[25]=RF64(ea);} // 8009BDF8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,24,ea,0,0);} // 8009BDFC
  c->r[11]=c->r[1]+0x000000D0u; // 8009BE00
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[24]=RF64(ea);} // 8009BE04
  c->lr=0x8009BE0Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009BE08
  c->r[0]=R32(c->r[1]+0x00000154u); // 8009BE0C
  c->lr=c->r[0]; // 8009BE10
  c->r[1]=c->r[1]+0x00000150u; // 8009BE14
  return; // 8009BE18
}

// fn_8009BE1C
void f_8009BE1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BE1C
  c->r[0]=c->lr; // 8009BE20
  W32(c->r[1]+0x000001A4u,c->r[0]); // 8009BE24
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[31]);} // 8009BE28
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,31,ea,0,0);} // 8009BE2C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[30]);} // 8009BE30
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,30,ea,0,0);} // 8009BE34
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[29]);} // 8009BE38
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,29,ea,0,0);} // 8009BE3C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[28]);} // 8009BE40
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,28,ea,0,0);} // 8009BE44
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[27]);} // 8009BE48
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,27,ea,0,0);} // 8009BE4C
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[26]);} // 8009BE50
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,26,ea,0,0);} // 8009BE54
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[25]);} // 8009BE58
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,25,ea,0,0);} // 8009BE5C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[24]);} // 8009BE60
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,24,ea,0,0);} // 8009BE64
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[23]);} // 8009BE68
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,23,ea,0,0);} // 8009BE6C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[22]);} // 8009BE70
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,22,ea,0,0);} // 8009BE74
  c->r[11]=c->r[1]+0x00000100u; // 8009BE78
  c->lr=0x8009BE80u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009BE7C
  c->r[0]=R32(c->r[3]+0x00000040u); // 8009BE80
  c->r[7]=0u+0x43300000u; // 8009BE84
  c->f[23]=c->f[1]; // 8009BE88
  W32(c->r[1]+0x000000D0u,c->r[7]); // 8009BE8C
  cmps(c,0,(int32_t)c->r[0],0); // 8009BE90
  c->r[25]=c->r[3]|c->r[3]; // 8009BE94
  W32(c->r[1]+0x000000D8u,c->r[7]); // 8009BE98
  c->r[26]=c->r[4]|c->r[4]; // 8009BE9C
  c->r[27]=c->r[6]|c->r[6]; // 8009BEA0
  if (!crb(c,2)) { goto L_8009BEB0; } // 8009BEA4
  c->r[3]=0u+0x00000000u; // 8009BEA8
  goto L_8009C2A4; // 8009BEAC
L_8009BEB0:;
  c->r[4]=0u+0x80270000u; // 8009BEB0
  {uint32_t ea=c->r[4]+0x000024E8u; c->r[28]=R32(ea); c->r[4]=ea;} // 8009BEB4
  c->r[6]=0u+0x80270000u; // 8009BEB8
  {uint32_t ea=c->r[6]+0x000024F4u; c->r[10]=R32(ea); c->r[6]=ea;} // 8009BEBC
  c->r[7]=R32(c->r[5]+0x00000000u); // 8009BEC0
  c->r[3]=c->r[1]+0x00000070u; // 8009BEC4
  c->r[12]=R32(c->r[4]+0x00000004u); // 8009BEC8
  c->r[29]=0u+0x00000000u; // 8009BECC
  c->r[11]=R32(c->r[4]+0x00000008u); // 8009BED0
  c->r[4]=c->r[1]+0x00000010u; // 8009BED4
  c->r[9]=R32(c->r[6]+0x00000004u); // 8009BED8
  c->r[8]=R32(c->r[6]+0x00000008u); // 8009BEDC
  c->r[6]=R32(c->r[5]+0x00000004u); // 8009BEE0
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009BEE4
  W32(c->r[1]+0x00000028u,c->r[28]); // 8009BEE8
  W32(c->r[1]+0x0000002Cu,c->r[12]); // 8009BEEC
  W32(c->r[1]+0x00000030u,c->r[11]); // 8009BEF0
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 8009BEF4
  W32(c->r[1]+0x00000020u,c->r[9]); // 8009BEF8
  W32(c->r[1]+0x00000024u,c->r[8]); // 8009BEFC
  W32(c->r[1]+0x00000010u,c->r[7]); // 8009BF00
  W32(c->r[1]+0x00000014u,c->r[6]); // 8009BF04
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009BF08
  c->lr=0x8009BF10u; f_80097B44(c); // 8009BF0C
  c->r[3]=c->r[1]+0x00000070u; // 8009BF10
  c->r[4]=c->r[3]|c->r[3]; // 8009BF14
  c->lr=0x8009BF1Cu; f_80163AFC(c); // 8009BF18
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[27]=RF64(ea);} // 8009BF1C
  c->r[30]=0u+0x00000000u; // 8009BF20
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[28]=c->ps1[28]=RF32(ea);} // 8009BF24
  c->r[31]=0u+0x00000000u; // 8009BF28
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009BF2C
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 8009BF30
  {uint32_t ea=c->r[2]+0xFFFF9364u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009BF34
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[22]=c->ps1[22]=RF32(ea);} // 8009BF38
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[26]=c->ps1[26]=RF32(ea);} // 8009BF3C
  goto L_8009C28C; // 8009BF40
L_8009BF44:;
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009BF44
  c->r[3]=c->r[0]+c->r[31]; // 8009BF48
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BF4C
  fcmp(c,0,c->f[0],c->f[26]); // 8009BF50
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009BF54
  if (!crb(c,2)) { goto L_8009C284; } // 8009BF58
  c->r[3]=R32(c->r[3]+0x00000000u); // 8009BF5C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009BF60
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009BF64
  c->ctr=c->r[12]; // 8009BF68
  if (true) { c->lr=0x8009BF70u; dispatch(c,c->ctr); } // 8009BF6C
  cmps(c,0,(int32_t)c->r[3],0); // 8009BF70
  if (!crb(c,2)) { goto L_8009C284; } // 8009BF74
  c->lr=0x8009BF7Cu; f_8025AE00(c); // 8009BF78
  c->r[4]=R32(c->r[25]+0x00000054u); // 8009BF7C
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009BF80
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 8009BF84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8009BF88
  c->r[28]=c->r[3]-c->r[0]; // 8009BF8C
  c->lr=0x8009BF94u; f_8025AE00(c); // 8009BF90
  c->r[0]=c->r[3]^0x80000000u; // 8009BF94
  {uint32_t ea=c->r[24]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BF98
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8009BF9C
  {uint32_t ea=c->r[24]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BFA0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=RF64(ea);} // 8009BFA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009BFA8
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009BFAC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009BFB0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009BFB4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009BFB8
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 8009BFBC
  c->lr=0x8009BFC4u; f_8025AE00(c); // 8009BFC0
  c->r[0]=c->r[3]^0x80000000u; // 8009BFC4
  {uint32_t ea=c->r[24]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BFC8
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8009BFCC
  {uint32_t ea=c->r[24]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BFD0
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 8009BFD4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009BFD8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009BFDC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009BFE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009BFE4
  c->f[24]=c->ps1[24]=S(c->f[1]+c->f[0]); // 8009BFE8
  c->lr=0x8009BFF0u; f_8025AE00(c); // 8009BFEC
  c->r[0]=c->r[3]^0x80000000u; // 8009BFF0
  c->r[3]=c->r[1]+0x000000A0u; // 8009BFF4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8009BFF8
  c->r[4]=0u+0x0000007Au; // 8009BFFC
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 8009C000
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 8009C004
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 8009C008
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009C00C
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[0]); // 8009C010
  c->lr=0x8009C018u; f_80163C44(c); // 8009C014
  c->lr=0x8009C01Cu; f_8025AE00(c); // 8009C018
  c->r[0]=c->r[3]^0x80000000u; // 8009C01C
  c->f[0]=-c->f[23]; // 8009C020
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8009C024
  c->f[2]=c->ps1[2]=S(c->f[23]*c->f[31]); // 8009C028
  c->r[3]=c->r[1]+0x00000040u; // 8009C02C
  c->r[4]=0u+0x00000078u; // 8009C030
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[3]=RF64(ea);} // 8009C034
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8009C038
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[27]); // 8009C03C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 8009C040
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[28]); // 8009C044
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009C048
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8009C04C
  c->lr=0x8009C054u; f_80163C44(c); // 8009C050
  c->r[3]=c->r[1]+0x000000A0u; // 8009C054
  c->r[4]=c->r[1]+0x00000040u; // 8009C058
  c->r[5]=c->r[3]|c->r[3]; // 8009C05C
  c->lr=0x8009C064u; f_80163898(c); // 8009C060
  c->r[4]=c->r[1]+0x000000A0u; // 8009C064
  c->r[3]=c->r[1]+0x00000070u; // 8009C068
  c->r[5]=c->r[4]|c->r[4]; // 8009C06C
  c->lr=0x8009C074u; f_80163898(c); // 8009C070
  c->r[3]=c->r[1]+0x000000A0u; // 8009C074
  c->r[4]=c->r[1]+0x00000028u; // 8009C078
  c->r[5]=c->r[1]+0x0000001Cu; // 8009C07C
  c->lr=0x8009C084u; f_801643D8(c); // 8009C080
  c->f[1]=c->f[25]; // 8009C084
  c->r[3]=c->r[1]+0x0000001Cu; // 8009C088
  c->r[4]=c->r[1]+0x00000034u; // 8009C08C
  c->lr=0x8009C094u; f_8016482C(c); // 8009C090
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009C094
  c->r[4]=c->r[26]|c->r[26]; // 8009C098
  c->r[3]=c->r[1]+0x00000034u; // 8009C09C
  c->r[5]=c->r[0]+c->r[31]; // 8009C0A0
  c->r[5]=c->r[5]+0x00000004u; // 8009C0A4
  c->lr=0x8009C0ACu; f_801647E4(c); // 8009C0A8
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009C0AC
  c->f[1]=c->f[24]; // 8009C0B0
  c->r[3]=c->r[1]+0x0000001Cu; // 8009C0B4
  c->r[4]=c->r[0]+c->r[31]; // 8009C0B8
  c->r[4]=c->r[4]+0x00000010u; // 8009C0BC
  c->lr=0x8009C0C4u; f_8016482C(c); // 8009C0C0
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009C0C4
  c->lr=0x8009C0CCu; f_8025AE00(c); // 8009C0C8
  c->r[3]=c->r[3]^0x80000000u; // 8009C0CC
  {uint32_t ea=c->r[24]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C0D0
  W32(c->r[1]+0x000000D4u,c->r[3]); // 8009C0D4
  {uint32_t ea=c->r[24]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C0D8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=RF64(ea);} // 8009C0DC
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009C0E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009C0E4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009C0E8
  c->r[3]=c->r[0]+c->r[31]; // 8009C0EC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009C0F0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009C0F4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009C0F8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009C0FC
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009C100
  c->lr=0x8009C108u; f_8025AE00(c); // 8009C104
  c->r[3]=c->r[3]^0x80000000u; // 8009C108
  {uint32_t ea=c->r[24]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C10C
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8009C110
  {uint32_t ea=c->r[24]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C114
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=RF64(ea);} // 8009C118
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009C11C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009C120
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009C124
  c->r[3]=c->r[0]+c->r[31]; // 8009C128
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009C12C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009C130
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009C134
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8009C138
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009C13C
  c->lr=0x8009C144u; f_8025AE00(c); // 8009C140
  c->r[3]=c->r[3]^0x80000000u; // 8009C144
  {uint32_t ea=c->r[24]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C148
  W32(c->r[1]+0x000000D4u,c->r[3]); // 8009C14C
  c->r[5]=rotl(c->r[28],2)&0xFFFFFFFCu; // 8009C150
  {uint32_t ea=c->r[24]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C154
  c->r[4]=c->r[1]+0x00000008u; // 8009C158
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=RF64(ea);} // 8009C15C
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009C160
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009C164
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 8009C168
  c->r[3]=c->r[0]+c->r[31]; // 8009C16C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009C170
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009C174
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009C178
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8009C17C
  c->r[0]=R32(c->r[25]+0x00000040u); // 8009C180
  c->r[3]=c->r[0]+c->r[31]; // 8009C184
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[22]);} // 8009C188
  c->r[0]=R32(c->r[25]+0x0000004Cu); // 8009C18C
  c->r[3]=c->r[0]+c->r[5]; // 8009C190
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009C194
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009C198
  c->r[0]=R8(c->r[3]+0x00000001u); // 8009C19C
  W8(c->r[1]+0x00000009u,c->r[0]); // 8009C1A0
  c->r[0]=R8(c->r[3]+0x00000002u); // 8009C1A4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8009C1A8
  c->r[0]=R8(c->r[3]+0x00000003u); // 8009C1AC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8009C1B0
  c->r[0]=R32(c->r[25]+0x00000050u); // 8009C1B4
  c->r[3]=c->r[0]+c->r[5]; // 8009C1B8
  c->r[0]=R8(c->r[5]+c->r[0]); // 8009C1BC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8009C1C0
  c->r[0]=R8(c->r[3]+0x00000001u); // 8009C1C4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8009C1C8
  c->r[0]=R8(c->r[3]+0x00000002u); // 8009C1CC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 8009C1D0
  c->r[0]=R8(c->r[3]+0x00000003u); // 8009C1D4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8009C1D8
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009C1DC
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C1E0
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C1E4
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009C1E8
  c->ctr=c->r[12]; // 8009C1EC
  if (true) { c->lr=0x8009C1F4u; dispatch(c,c->ctr); } // 8009C1F0
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009C1F4
  c->r[4]=R32(c->r[25]+0x00000058u); // 8009C1F8
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C1FC
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C200
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8009C204
  c->ctr=c->r[12]; // 8009C208
  if (true) { c->lr=0x8009C210u; dispatch(c,c->ctr); } // 8009C20C
  c->r[24]=R32(c->r[25]+0x00000048u); // 8009C210
  c->lr=0x8009C218u; f_8025AE00(c); // 8009C214
  c->r[0]=c->r[3]^0x80000000u; // 8009C218
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009C21C
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8009C220
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C224
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 8009C228
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C22C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[27]); // 8009C230
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C234
  {uint32_t ea=c->r[24]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C238
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8009C23C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8009C240
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009C244
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009C248
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8009C24C
  c->ctr=c->r[12]; // 8009C250
  if (true) { c->lr=0x8009C258u; dispatch(c,c->ctr); } // 8009C254
  c->r[3]=R32(c->r[25]+0x00000040u); // 8009C258
  c->r[4]=c->r[25]+0x0000005Cu; // 8009C25C
  c->r[5]=0u+0x00000000u; // 8009C260
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C264
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C268
  c->r[12]=R32(c->r[12]+0x00000050u); // 8009C26C
  c->ctr=c->r[12]; // 8009C270
  if (true) { c->lr=0x8009C278u; dispatch(c,c->ctr); } // 8009C274
  c->r[29]=c->r[29]+0x00000001u; // 8009C278
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 8009C27C
  if (!crb(c,0)) { goto L_8009C298; } // 8009C280
L_8009C284:;
  c->r[31]=c->r[31]+0x00000030u; // 8009C284
  c->r[30]=c->r[30]+0x00000001u; // 8009C288
L_8009C28C:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 8009C28C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009C290
  if (crb(c,0)) { IRQCHK(c); goto L_8009BF44; } // 8009C294
L_8009C298:;
  c->r[0]=0u+0x00000001u; // 8009C298
  c->r[3]=0u+0x00000001u; // 8009C29C
  W8(c->r[25]+0x00000038u,c->r[0]); // 8009C2A0
L_8009C2A4:;
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,31,ea,0,0);} // 8009C2A4
  {uint32_t ea=c->r[1]+0x00000190u; c->f[31]=RF64(ea);} // 8009C2A8
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,30,ea,0,0);} // 8009C2AC
  {uint32_t ea=c->r[1]+0x00000180u; c->f[30]=RF64(ea);} // 8009C2B0
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,29,ea,0,0);} // 8009C2B4
  {uint32_t ea=c->r[1]+0x00000170u; c->f[29]=RF64(ea);} // 8009C2B8
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,28,ea,0,0);} // 8009C2BC
  {uint32_t ea=c->r[1]+0x00000160u; c->f[28]=RF64(ea);} // 8009C2C0
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,27,ea,0,0);} // 8009C2C4
  {uint32_t ea=c->r[1]+0x00000150u; c->f[27]=RF64(ea);} // 8009C2C8
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,26,ea,0,0);} // 8009C2CC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[26]=RF64(ea);} // 8009C2D0
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,25,ea,0,0);} // 8009C2D4
  {uint32_t ea=c->r[1]+0x00000130u; c->f[25]=RF64(ea);} // 8009C2D8
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,24,ea,0,0);} // 8009C2DC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[24]=RF64(ea);} // 8009C2E0
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,23,ea,0,0);} // 8009C2E4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[23]=RF64(ea);} // 8009C2E8
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,22,ea,0,0);} // 8009C2EC
  c->r[11]=c->r[1]+0x00000100u; // 8009C2F0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[22]=RF64(ea);} // 8009C2F4
  c->lr=0x8009C2FCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009C2F8
  c->r[0]=R32(c->r[1]+0x000001A4u); // 8009C2FC
  c->lr=c->r[0]; // 8009C300
  c->r[1]=c->r[1]+0x000001A0u; // 8009C304
  return; // 8009C308
}

// fn_8009C30C
void f_8009C30C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C30C
  c->r[0]=c->lr; // 8009C310
  W32(c->r[1]+0x00000094u,c->r[0]); // 8009C314
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8009C318
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8009C31C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8009C320
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8009C324
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 8009C328
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8009C32C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8009C330
  W32(c->r[1]+0x00000058u,c->r[30]); // 8009C334
  W32(c->r[1]+0x00000054u,c->r[29]); // 8009C338
  c->r[29]=c->r[3]|c->r[3]; // 8009C33C
  W32(c->r[1]+0x00000050u,c->r[28]); // 8009C340
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C344
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009C348
  c->ctr=c->r[12]; // 8009C34C
  if (true) { c->lr=0x8009C354u; dispatch(c,c->ctr); } // 8009C350
  cmps(c,0,(int32_t)c->r[3],0); // 8009C354
  if (!crb(c,2)) { goto L_8009C364; } // 8009C358
  c->r[3]=0u+0x00000000u; // 8009C35C
  goto L_8009C560; // 8009C360
L_8009C364:;
  {uint32_t ea=c->r[29]+0x00000034u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009C364
  c->r[30]=0u+0x00000000u; // 8009C368
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009C36C
  c->r[31]=0u+0x00000000u; // 8009C370
  goto L_8009C550; // 8009C374
L_8009C378:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C378
  c->r[28]=c->r[0]+c->r[31]; // 8009C37C
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C380
  fcmp(c,0,c->f[0],c->f[31]); // 8009C384
  if (!crb(c,1)) { goto L_8009C530; } // 8009C388
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C38C
  {uint32_t ea=c->r[29]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C390
  c->lr=0x8009C398u; f_80262BAC(c); // 8009C394
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009C398
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8009C39C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C3A0
  c->f[1]=c->f[30]; // 8009C3A4
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C3A8
  c->r[3]=c->r[28]+0x00000010u; // 8009C3AC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[3]);} // 8009C3B0
  c->r[4]=c->r[1]+0x00000020u; // 8009C3B4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 8009C3B8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8009C3BC
  c->lr=0x8009C3C4u; f_8016482C(c); // 8009C3C0
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C3C4
  c->r[4]=c->r[1]+0x00000020u; // 8009C3C8
  c->r[3]=c->r[0]+c->r[31]; // 8009C3CC
  c->r[3]=c->r[3]+0x00000004u; // 8009C3D0
  c->r[5]=c->r[3]|c->r[3]; // 8009C3D4
  c->lr=0x8009C3DCu; f_801647E4(c); // 8009C3D8
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C3DC
  c->r[3]=c->r[0]+c->r[31]; // 8009C3E0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C3E4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C3E8
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 8009C3EC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8009C3F0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009C3F4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8009C3F8
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C3FC
  c->r[3]=c->r[0]+c->r[31]; // 8009C400
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C404
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009C408
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009C40C
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C410
  c->r[3]=c->r[0]+c->r[31]; // 8009C414
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C418
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009C41C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009C420
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C424
  c->r[3]=c->r[0]+c->r[31]; // 8009C428
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C42C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C430
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 8009C434
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009C438
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8009C43C
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 8009C440
  cmps(c,0,(int32_t)c->r[0],0); // 8009C444
  if (crb(c,2)) { goto L_8009C4DC; } // 8009C448
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C44C
  c->r[3]=c->r[1]+0x00000038u; // 8009C450
  c->r[4]=c->r[1]+0x00000014u; // 8009C454
  c->r[6]=c->r[0]+c->r[31]; // 8009C458
  c->r[5]=R32(c->r[6]+0x00000004u); // 8009C45C
  c->r[0]=R32(c->r[6]+0x00000008u); // 8009C460
  W32(c->r[1]+0x00000014u,c->r[5]); // 8009C464
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009C468
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8009C46C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009C470
  c->r[12]=R32(c->r[29]+0x0000006Cu); // 8009C474
  c->ctr=c->r[12]; // 8009C478
  if (true) { c->lr=0x8009C480u; dispatch(c,c->ctr); } // 8009C47C
  cmps(c,0,(int32_t)c->r[3],0); // 8009C480
  if (crb(c,2)) { goto L_8009C4DC; } // 8009C484
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C488
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C48C
  fcmp(c,0,c->f[1],c->f[0]); // 8009C490
  if (!crb(c,0)) { goto L_8009C4DC; } // 8009C494
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C498
  c->r[3]=c->r[0]+c->r[31]; // 8009C49C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C4A0
  fcmp(c,0,c->f[1],c->f[0]); // 8009C4A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009C4A8
  if (!crb(c,2)) { goto L_8009C4DC; } // 8009C4AC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009C4B0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009C4B4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8009C4B8
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C4BC
  c->r[3]=R32(c->r[29]+0x00000048u); // 8009C4C0
  c->r[4]=c->r[0]+c->r[31]; // 8009C4C4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C4C8
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C4CC
  c->f[1]=-c->f[1]; // 8009C4D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009C4D4
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 8009C4D8
L_8009C4DC:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 8009C4DC
  c->r[4]=c->r[1]+0x00000008u; // 8009C4E0
  c->r[5]=c->r[0]+c->r[31]; // 8009C4E4
  c->r[3]=R32(c->r[5]+0x00000004u); // 8009C4E8
  c->r[0]=R32(c->r[5]+0x00000008u); // 8009C4EC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8009C4F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009C4F4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8009C4F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009C4FC
  c->r[3]=R32(c->r[29]+0x00000040u); // 8009C500
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C504
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C508
  c->r[12]=R32(c->r[12]+0x00000064u); // 8009C50C
  c->ctr=c->r[12]; // 8009C510
  if (true) { c->lr=0x8009C518u; dispatch(c,c->ctr); } // 8009C514
  c->r[3]=R32(c->r[29]+0x00000040u); // 8009C518
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C51C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C520
  c->r[12]=R32(c->r[12]+0x00000024u); // 8009C524
  c->ctr=c->r[12]; // 8009C528
  if (true) { c->lr=0x8009C530u; dispatch(c,c->ctr); } // 8009C52C
L_8009C530:;
  c->r[3]=R32(c->r[29]+0x00000040u); // 8009C530
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C534
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C538
  c->r[12]=R32(c->r[12]+0x00000028u); // 8009C53C
  c->ctr=c->r[12]; // 8009C540
  if (true) { c->lr=0x8009C548u; dispatch(c,c->ctr); } // 8009C544
  c->r[31]=c->r[31]+0x00000030u; // 8009C548
  c->r[30]=c->r[30]+0x00000001u; // 8009C54C
L_8009C550:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009C550
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009C554
  if (crb(c,0)) { IRQCHK(c); goto L_8009C378; } // 8009C558
  c->r[3]=0u+0x00000001u; // 8009C55C
L_8009C560:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8009C560
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8009C564
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8009C568
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8009C56C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 8009C570
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8009C574
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8009C578
  c->r[30]=R32(c->r[1]+0x00000058u); // 8009C57C
  c->r[29]=R32(c->r[1]+0x00000054u); // 8009C580
  c->r[0]=R32(c->r[1]+0x00000094u); // 8009C584
  c->r[28]=R32(c->r[1]+0x00000050u); // 8009C588
  c->lr=c->r[0]; // 8009C58C
  c->r[1]=c->r[1]+0x00000090u; // 8009C590
  return; // 8009C594
}

// fn_8009C598
void f_8009C598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C598
  c->r[0]=c->lr; // 8009C59C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009C5A0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8009C5A4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8009C5A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009C5AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009C5B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009C5B4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8009C5B8
  c->r[28]=c->r[3]|c->r[3]; // 8009C5BC
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C5C0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009C5C4
  c->ctr=c->r[12]; // 8009C5C8
  if (true) { c->lr=0x8009C5D0u; dispatch(c,c->ctr); } // 8009C5CC
  cmps(c,0,(int32_t)c->r[3],0); // 8009C5D0
  if (!crb(c,2)) { goto L_8009C5E0; } // 8009C5D4
  c->r[3]=0u+0x00000000u; // 8009C5D8
  goto L_8009C670; // 8009C5DC
L_8009C5E0:;
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009C5E0
  c->r[30]=0u+0x00000000u; // 8009C5E4
  c->r[29]=0u+0x00000000u; // 8009C5E8
  c->r[31]=0u+0x00000000u; // 8009C5EC
  goto L_8009C64C; // 8009C5F0
L_8009C5F4:;
  c->r[3]=R32(c->r[28]+0x00000040u); // 8009C5F4
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C5F8
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C5FC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009C600
  c->ctr=c->r[12]; // 8009C604
  if (true) { c->lr=0x8009C60Cu; dispatch(c,c->ctr); } // 8009C608
  cmps(c,0,(int32_t)c->r[3],0); // 8009C60C
  if (!crb(c,2)) { goto L_8009C628; } // 8009C610
  c->r[0]=R32(c->r[28]+0x00000040u); // 8009C614
  c->r[3]=c->r[0]+c->r[31]; // 8009C618
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C61C
  fcmp(c,0,c->f[0],c->f[31]); // 8009C620
  if (!crb(c,1)) { goto L_8009C644; } // 8009C624
L_8009C628:;
  c->r[3]=R32(c->r[28]+0x00000040u); // 8009C628
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C62C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C630
  c->r[12]=R32(c->r[12]+0x00000030u); // 8009C634
  c->ctr=c->r[12]; // 8009C638
  if (true) { c->lr=0x8009C640u; dispatch(c,c->ctr); } // 8009C63C
  c->r[30]=c->r[30]+0x00000001u; // 8009C640
L_8009C644:;
  c->r[31]=c->r[31]+0x00000030u; // 8009C644
  c->r[29]=c->r[29]+0x00000001u; // 8009C648
L_8009C64C:;
  c->r[0]=R32(c->r[28]+0x00000044u); // 8009C64C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8009C650
  if (crb(c,0)) { IRQCHK(c); goto L_8009C5F4; } // 8009C654
  c->r[0]=0u-c->r[30]; // 8009C658
  W32(c->r[28]+0x00000070u,c->r[30]); // 8009C65C
  c->r[0]=c->r[0]&~c->r[30]; // 8009C660
  c->r[3]=0u+0x00000001u; // 8009C664
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8009C668
  W8(c->r[28]+0x00000038u,c->r[0]); // 8009C66C
L_8009C670:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8009C670
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009C674
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8009C678
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009C67C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009C680
  c->r[29]=R32(c->r[1]+0x00000014u); // 8009C684
  c->r[28]=R32(c->r[1]+0x00000010u); // 8009C688
  c->lr=c->r[0]; // 8009C68C
  c->r[1]=c->r[1]+0x00000030u; // 8009C690
  return; // 8009C694
}

// fn_8009C698
void f_8009C698(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C698
  c->r[0]=c->lr; // 8009C69C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C6A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009C6A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009C6A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009C6AC
  c->r[29]=c->r[3]|c->r[3]; // 8009C6B0
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C6B4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009C6B8
  c->ctr=c->r[12]; // 8009C6BC
  if (true) { c->lr=0x8009C6C4u; dispatch(c,c->ctr); } // 8009C6C0
  cmps(c,0,(int32_t)c->r[3],0); // 8009C6C4
  if (!crb(c,2)) { goto L_8009C6D4; } // 8009C6C8
  c->r[3]=0u+0x00000000u; // 8009C6CC
  goto L_8009C740; // 8009C6D0
L_8009C6D4:;
  c->r[0]=R32(c->r[29]+0x00000070u); // 8009C6D4
  cmps(c,0,(int32_t)c->r[0],1); // 8009C6D8
  if (!crb(c,0)) { goto L_8009C6E8; } // 8009C6DC
  c->r[3]=0u+0x00000000u; // 8009C6E0
  goto L_8009C740; // 8009C6E4
L_8009C6E8:;
  c->r[30]=0u+0x00000000u; // 8009C6E8
  c->r[31]=0u+0x00000000u; // 8009C6EC
  goto L_8009C730; // 8009C6F0
L_8009C6F4:;
  c->r[3]=R32(c->r[29]+0x00000040u); // 8009C6F4
  c->r[4]=R32(c->r[29]+0x00000000u); // 8009C6F8
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C6FC
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C700
  c->r[12]=R32(c->r[12]+0x00000010u); // 8009C704
  c->ctr=c->r[12]; // 8009C708
  if (true) { c->lr=0x8009C710u; dispatch(c,c->ctr); } // 8009C70C
  c->r[3]=R32(c->r[29]+0x00000040u); // 8009C710
  c->r[3]=R32(c->r[3]+c->r[31]); // 8009C714
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C718
  c->r[12]=R32(c->r[12]+0x00000038u); // 8009C71C
  c->ctr=c->r[12]; // 8009C720
  if (true) { c->lr=0x8009C728u; dispatch(c,c->ctr); } // 8009C724
  c->r[31]=c->r[31]+0x00000030u; // 8009C728
  c->r[30]=c->r[30]+0x00000001u; // 8009C72C
L_8009C730:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 8009C730
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8009C734
  if (crb(c,0)) { IRQCHK(c); goto L_8009C6F4; } // 8009C738
  c->r[3]=0u+0x00000001u; // 8009C73C
L_8009C740:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C740
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009C744
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009C748
  c->r[29]=R32(c->r[1]+0x00000014u); // 8009C74C
  c->lr=c->r[0]; // 8009C750
  c->r[1]=c->r[1]+0x00000020u; // 8009C754
  return; // 8009C758
}

// fn_8009C75C
void f_8009C75C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8009C75C
  return; // 8009C760
}

// fn_8009C764
void f_8009C764(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8009C764
  return; // 8009C768
}

// fn_8009C76C
void f_8009C76C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8009C76C
  return; // 8009C770
}

// fn_8009C774
void f_8009C774(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009C774
  c->r[0]=0u+0x00000000u; // 8009C778
  {uint32_t ea=c->r[2]+0xFFFF9374u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C77C
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C780
  {uint32_t ea=c->r[2]+0xFFFF937Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C784
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8009C788
  W32(c->r[3]+0x00000050u,c->r[0]); // 8009C78C
  W32(c->r[3]+0x00000074u,c->r[0]); // 8009C790
  W32(c->r[3]+0x00000078u,c->r[0]); // 8009C794
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[3]);} // 8009C798
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[2]);} // 8009C79C
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 8009C7A0
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[3]);} // 8009C7A4
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 8009C7A8
  W32(c->r[3]+0x00000088u,c->r[0]); // 8009C7AC
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8009C7B0
  W32(c->r[3]+0x00000094u,c->r[0]); // 8009C7B4
  return; // 8009C7B8
}

// fn_8009C7BC
void f_8009C7BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C7BC
  c->r[0]=c->lr; // 8009C7C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009C7C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009C7C8
  c->r[31]=c->r[3]|c->r[3]; // 8009C7CC
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009C7D0
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009C7D4
  c->ctr=c->r[12]; // 8009C7D8
  if (true) { c->lr=0x8009C7E0u; dispatch(c,c->ctr); } // 8009C7DC
  c->r[0]=0u+0x00000000u; // 8009C7E0
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 8009C7E4
  W32(c->r[31]+0x00000050u,c->r[0]); // 8009C7E8
  W32(c->r[31]+0x00000088u,c->r[0]); // 8009C7EC
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 8009C7F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009C7F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009C7F8
  c->lr=c->r[0]; // 8009C7FC
  c->r[1]=c->r[1]+0x00000010u; // 8009C800
  return; // 8009C804
}

// fn_8009C808
void f_8009C808(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C808
  c->r[0]=c->lr; // 8009C80C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009C810
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009C814
  c->r[31]=c->r[3]|c->r[3]; // 8009C818
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8009C81C
  cmps(c,0,(int32_t)c->r[0],0); // 8009C820
  if (!crb(c,2)) { goto L_8009C894; } // 8009C824
  c->r[0]=R32(c->r[3]+0x00000050u); // 8009C828
  cmps(c,0,(int32_t)c->r[0],0); // 8009C82C
  if (!crb(c,2)) { goto L_8009C894; } // 8009C830
  cmps(c,0,(int32_t)c->r[4],128); // 8009C834
  W32(c->r[3]+0x00000074u,c->r[4]); // 8009C838
  if (!crb(c,1)) { goto L_8009C848; } // 8009C83C
  c->r[0]=0u+0x00000080u; // 8009C840
  W32(c->r[3]+0x00000074u,c->r[0]); // 8009C844
L_8009C848:;
  cmps(c,0,(int32_t)c->r[5],32); // 8009C848
  W32(c->r[3]+0x00000078u,c->r[5]); // 8009C84C
  if (!crb(c,1)) { goto L_8009C85C; } // 8009C850
  c->r[0]=0u+0x00000020u; // 8009C854
  W32(c->r[3]+0x00000078u,c->r[0]); // 8009C858
L_8009C85C:;
  c->lr=0x8009C860u; f_80098038(c); // 8009C85C
  c->r[0]=R32(c->r[31]+0x00000074u); // 8009C860
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8009C864
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009C868
  c->lr=0x8009C870u; f_80098028(c); // 8009C86C
  c->lr=0x8009C874u; f_80098038(c); // 8009C870
  c->r[5]=R32(c->r[31]+0x00000074u); // 8009C874
  c->r[4]=R32(c->r[31]+0x00000078u); // 8009C878
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8009C87C
  W32(c->r[31]+0x00000050u,c->r[3]); // 8009C880
  c->r[0]=c->r[4]+0x00000001u; // 8009C884
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 8009C888
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8009C88C
  c->lr=0x8009C894u; f_80098028(c); // 8009C890
L_8009C894:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009C894
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009C898
  c->lr=c->r[0]; // 8009C89C
  c->r[1]=c->r[1]+0x00000010u; // 8009C8A0
  return; // 8009C8A4
}

// fn_8009C8A8
void f_8009C8A8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],128); // 8009C8A8
  W32(c->r[3]+0x00000074u,c->r[4]); // 8009C8AC
  if (!crb(c,1)) { goto L_8009C8BC; } // 8009C8B0
  c->r[0]=0u+0x00000080u; // 8009C8B4
  W32(c->r[3]+0x00000074u,c->r[0]); // 8009C8B8
L_8009C8BC:;
  cmps(c,0,(int32_t)c->r[5],32); // 8009C8BC
  W32(c->r[3]+0x00000078u,c->r[5]); // 8009C8C0
  if (!crb(c,1)) { goto L_8009C8D0; } // 8009C8C4
  c->r[0]=0u+0x00000020u; // 8009C8C8
  W32(c->r[3]+0x00000078u,c->r[0]); // 8009C8CC
L_8009C8D0:;
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 8009C8D0
  W32(c->r[3]+0x00000050u,c->r[7]); // 8009C8D4
  return; // 8009C8D8
}

// fn_8009C8DC
void f_8009C8DC(Ctx* __restrict c) {
  c->r[11]=R8(c->r[4]+0x00000000u); // 8009C8DC
  c->r[10]=R8(c->r[4]+0x00000001u); // 8009C8E0
  c->r[9]=R8(c->r[4]+0x00000002u); // 8009C8E4
  c->r[7]=c->r[11]|c->r[11]; // 8009C8E8
  c->r[8]=R8(c->r[4]+0x00000003u); // 8009C8EC
  c->r[6]=c->r[10]|c->r[10]; // 8009C8F0
  c->r[5]=c->r[9]|c->r[9]; // 8009C8F4
  W8(c->r[3]+0x00000054u,c->r[11]); // 8009C8F8
  c->r[0]=c->r[8]|c->r[8]; // 8009C8FC
  W8(c->r[3]+0x00000055u,c->r[10]); // 8009C900
  W8(c->r[3]+0x00000056u,c->r[9]); // 8009C904
  W8(c->r[3]+0x00000057u,c->r[8]); // 8009C908
  W8(c->r[3]+0x00000058u,c->r[7]); // 8009C90C
  W8(c->r[3]+0x00000059u,c->r[6]); // 8009C910
  W8(c->r[3]+0x0000005Au,c->r[5]); // 8009C914
  W8(c->r[3]+0x0000005Bu,c->r[0]); // 8009C918
  return; // 8009C91C
}

// fn_8009C920
void f_8009C920(Ctx* __restrict c) {
  c->r[0]=R8(c->r[4]+0x00000000u); // 8009C920
  W8(c->r[3]+0x00000054u,c->r[0]); // 8009C924
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009C928
  W8(c->r[3]+0x00000055u,c->r[0]); // 8009C92C
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009C930
  W8(c->r[3]+0x00000056u,c->r[0]); // 8009C934
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009C938
  W8(c->r[3]+0x00000057u,c->r[0]); // 8009C93C
  c->r[0]=R8(c->r[4]+0x00000004u); // 8009C940
  W8(c->r[3]+0x00000058u,c->r[0]); // 8009C944
  c->r[0]=R8(c->r[4]+0x00000005u); // 8009C948
  W8(c->r[3]+0x00000059u,c->r[0]); // 8009C94C
  c->r[0]=R8(c->r[4]+0x00000006u); // 8009C950
  W8(c->r[3]+0x0000005Au,c->r[0]); // 8009C954
  c->r[0]=R8(c->r[4]+0x00000007u); // 8009C958
  W8(c->r[3]+0x0000005Bu,c->r[0]); // 8009C95C
  return; // 8009C960
}

// fn_8009C964
void f_8009C964(Ctx* __restrict c) {
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8009C964
  return; // 8009C968
}

// fn_8009C96C
void f_8009C96C(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C96C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 8009C970
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C974
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8009C978
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C97C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 8009C980
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C984
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 8009C988
  W32(c->r[3]+0x00000098u,c->r[5]); // 8009C98C
  return; // 8009C990
}

// fn_8009C994
void f_8009C994(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C994
  c->r[4]=c->r[4]^0x80000000u; // 8009C998
  c->r[0]=0u+0x43300000u; // 8009C99C
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=RF64(ea);} // 8009C9A0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009C9A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009C9A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8009C9AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009C9B0
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 8009C9B4
  c->r[1]=c->r[1]+0x00000010u; // 8009C9B8
  return; // 8009C9BC
}

// fn_8009C9C0
void f_8009C9C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C9C0
  c->r[4]=c->r[4]^0x80000000u; // 8009C9C4
  c->r[0]=0u+0x43300000u; // 8009C9C8
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=RF64(ea);} // 8009C9CC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009C9D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009C9D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8009C9D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009C9DC
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 8009C9E0
  c->r[1]=c->r[1]+0x00000010u; // 8009C9E4
  return; // 8009C9E8
}

// fn_8009C9EC
void f_8009C9EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 8009C9EC
  return; // 8009C9F0
}

// fn_8009C9F4
void f_8009C9F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 8009C9F4
  return; // 8009C9F8
}

// fn_8009C9FC
void f_8009C9FC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 8009C9FC
  c->r[0]=0u-c->r[3]; // 8009CA00
  c->r[0]=c->r[0]&~c->r[3]; // 8009CA04
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8009CA08
  return; // 8009CA0C
}

// fn_8009CA10
void f_8009CA10(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF937Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CA10
  c->r[0]=0u+0x00000000u; // 8009CA14
  W32(c->r[3]+0x00000088u,c->r[0]); // 8009CA18
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8009CA1C
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 8009CA20
  W32(c->r[3]+0x00000094u,c->r[0]); // 8009CA24
  return; // 8009CA28
}

// fn_8009CA2C
void f_8009CA2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CA2C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CA30
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CA34
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 8009CA38
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8009CA3C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8009CA40
  return; // 8009CA44
}

// fn_8009CA48
void f_8009CA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CA48
  c->r[0]=c->lr; // 8009CA4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009CA50
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009CA54
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009CA58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CA5C
  c->r[31]=c->r[3]|c->r[3]; // 8009CA60
  c->lr=0x8009CA68u; f_800076EC(c); // 8009CA64
  c->f[31]=c->f[1]; // 8009CA68
  c->lr=0x8009CA70u; f_80013AA4(c); // 8009CA6C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[31]); // 8009CA70
  {uint32_t ea=c->r[31]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CA74
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CA78
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8009CA7C
  fcmp(c,0,c->f[1],c->f[0]); // 8009CA80
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[1]);} // 8009CA84
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009CA88
  if (!crb(c,2)) { goto L_8009CD50; } // 8009CA8C
  c->r[3]=R32(c->r[31]+0x00000088u); // 8009CA90
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009CA94
  c->r[5]=R32(c->r[31]+0x00000074u); // 8009CA98
  c->r[6]=c->r[3]+0x00000001u; // 8009CA9C
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 8009CAA0
  c->r[4]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 8009CAA4
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 8009CAA8
  c->r[0]=c->r[3]+0x00000001u; // 8009CAAC
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 8009CAB0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8009CAB4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 8009CAB8
  c->r[0]=c->r[6]-c->r[0]; // 8009CABC
  W32(c->r[31]+0x00000088u,c->r[0]); // 8009CAC0
  if (!crb(c,1)) { goto L_8009CACC; } // 8009CAC4
  W32(c->r[31]+0x0000008Cu,c->r[5]); // 8009CAC8
L_8009CACC:;
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 8009CACC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8009CAD0
  cmps(c,1,(int32_t)c->r[3],1); // 8009CAD4
  if (crb(c,4)) { goto L_8009CD50; } // 8009CAD8
  cmps(c,0,(int32_t)c->r[3],8); // 8009CADC
  if (!crb(c,1)) { goto L_8009CD0C; } // 8009CAE0
  c->r[5]=0u+0x00000000u; // 8009CAE4
  c->r[6]=0u+0x00000000u; // 8009CAE8
  c->r[7]=0u+0x00000000u; // 8009CAEC
  if (crb(c,4)) { goto L_8009CB08; } // 8009CAF0
  c->r[4]=0u+0x80000000u; // 8009CAF4
  c->r[0]=c->r[4]+0x00000001u; // 8009CAF8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009CAFC
  if (crb(c,0)) { goto L_8009CB08; } // 8009CB00
  c->r[7]=0u+0x00000001u; // 8009CB04
L_8009CB08:;
  cmps(c,0,(int32_t)c->r[7],0); // 8009CB08
  if (crb(c,2)) { goto L_8009CB4C; } // 8009CB0C
  c->r[8]=R32(c->r[31]+0x0000008Cu); // 8009CB10
  c->r[4]=0u+0x00000001u; // 8009CB14
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 8009CB18
  c->r[7]=rotl(c->r[0],0)&0x80000000u; // 8009CB1C
  c->r[0]=c->r[7]+0x80000000u; // 8009CB20
  cmpu(c,0,c->r[0],0x00000000u); // 8009CB24
  if (!crb(c,2)) { goto L_8009CB40; } // 8009CB28
  c->r[0]=c->r[8]+0xFFFFFFFEu; // 8009CB2C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 8009CB30
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8009CB34
  if (crb(c,2)) { goto L_8009CB40; } // 8009CB38
  c->r[4]=0u+0x00000000u; // 8009CB3C
L_8009CB40:;
  cmps(c,0,(int32_t)c->r[4],0); // 8009CB40
  if (crb(c,2)) { goto L_8009CB4C; } // 8009CB44
  c->r[6]=0u+0x00000001u; // 8009CB48
L_8009CB4C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8009CB4C
  if (crb(c,2)) { goto L_8009CB84; } // 8009CB50
  c->r[6]=R32(c->r[31]+0x0000008Cu); // 8009CB54
  c->r[4]=0u+0x00000001u; // 8009CB58
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 8009CB5C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8009CB60
  if (!crb(c,2)) { goto L_8009CB78; } // 8009CB64
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 8009CB68
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8009CB6C
  if (crb(c,2)) { goto L_8009CB78; } // 8009CB70
  c->r[4]=0u+0x00000000u; // 8009CB74
L_8009CB78:;
  cmps(c,0,(int32_t)c->r[4],0); // 8009CB78
  if (crb(c,2)) { goto L_8009CB84; } // 8009CB7C
  c->r[5]=0u+0x00000001u; // 8009CB80
L_8009CB84:;
  cmps(c,0,(int32_t)c->r[5],0); // 8009CB84
  if (crb(c,2)) { goto L_8009CD0C; } // 8009CB88
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009CB8C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8009CB90
  c->r[12]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8009CB94
  c->ctr=c->r[0]; // 8009CB98
  cmps(c,0,(int32_t)c->r[3],9); // 8009CB9C
  if (crb(c,0)) { goto L_8009CD0C; } // 8009CBA0
L_8009CBA4:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009CBA4
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8009CBA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009CBAC
  c->r[9]=c->r[3]+0xFFFFFFFEu; // 8009CBB0
  c->r[8]=c->r[3]+0xFFFFFFFDu; // 8009CBB4
  c->r[7]=c->r[3]+0xFFFFFFFCu; // 8009CBB8
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CBBC
  c->r[10]=c->r[4]+c->r[12]; // 8009CBC0
  c->r[11]=c->r[4]+c->r[0]; // 8009CBC4
  c->r[6]=c->r[3]+0xFFFFFFFBu; // 8009CBC8
  {uint32_t ea=c->r[10]+0x00000000u; WF32(ea,c->f[0]);} // 8009CBCC
  c->r[5]=c->r[3]+0xFFFFFFFAu; // 8009CBD0
  c->r[4]=c->r[3]+0xFFFFFFF9u; // 8009CBD4
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 8009CBD8
  {uint32_t ea=c->r[11]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CBDC
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 8009CBE0
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8009CBE4
  {uint32_t ea=c->r[10]+0x00000004u; WF32(ea,c->f[0]);} // 8009CBE8
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 8009CBEC
  {uint32_t ea=c->r[11]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CBF0
  {uint32_t ea=c->r[10]+0x00000008u; WF32(ea,c->f[0]);} // 8009CBF4
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 8009CBF8
  c->r[10]=R32(c->r[31]+0x0000004Cu); // 8009CBFC
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8009CC00
  {uint32_t ea=c->r[9]+c->r[10]; c->f[0]=c->ps1[0]=RF32(ea); c->r[9]=ea;} // 8009CC04
  c->r[10]=c->r[10]+c->r[12]; // 8009CC08
  {uint32_t ea=c->r[10]+0xFFFFFFF4u; WF32(ea,c->f[0]);} // 8009CC0C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8009CC10
  {uint32_t ea=c->r[9]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC14
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8009CC18
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; WF32(ea,c->f[0]);} // 8009CC1C
  {uint32_t ea=c->r[9]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009CC24
  {uint32_t ea=c->r[10]+0xFFFFFFFCu; WF32(ea,c->f[0]);} // 8009CC28
  c->r[9]=R32(c->r[31]+0x0000004Cu); // 8009CC2C
  c->r[8]=c->r[9]+c->r[8]; // 8009CC30
  c->r[9]=c->r[9]+c->r[12]; // 8009CC34
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC38
  {uint32_t ea=c->r[9]+0xFFFFFFE8u; WF32(ea,c->f[0]);} // 8009CC3C
  {uint32_t ea=c->r[8]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC40
  {uint32_t ea=c->r[9]+0xFFFFFFECu; WF32(ea,c->f[0]);} // 8009CC44
  {uint32_t ea=c->r[8]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC48
  {uint32_t ea=c->r[9]+0xFFFFFFF0u; WF32(ea,c->f[0]);} // 8009CC4C
  c->r[8]=R32(c->r[31]+0x0000004Cu); // 8009CC50
  c->r[7]=c->r[8]+c->r[7]; // 8009CC54
  c->r[8]=c->r[8]+c->r[12]; // 8009CC58
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC5C
  {uint32_t ea=c->r[8]+0xFFFFFFDCu; WF32(ea,c->f[0]);} // 8009CC60
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC64
  {uint32_t ea=c->r[8]+0xFFFFFFE0u; WF32(ea,c->f[0]);} // 8009CC68
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC6C
  {uint32_t ea=c->r[8]+0xFFFFFFE4u; WF32(ea,c->f[0]);} // 8009CC70
  c->r[7]=R32(c->r[31]+0x0000004Cu); // 8009CC74
  c->r[6]=c->r[7]+c->r[6]; // 8009CC78
  c->r[7]=c->r[7]+c->r[12]; // 8009CC7C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC80
  {uint32_t ea=c->r[7]+0xFFFFFFD0u; WF32(ea,c->f[0]);} // 8009CC84
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC88
  {uint32_t ea=c->r[7]+0xFFFFFFD4u; WF32(ea,c->f[0]);} // 8009CC8C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC90
  {uint32_t ea=c->r[7]+0xFFFFFFD8u; WF32(ea,c->f[0]);} // 8009CC94
  c->r[6]=R32(c->r[31]+0x0000004Cu); // 8009CC98
  c->r[5]=c->r[6]+c->r[5]; // 8009CC9C
  c->r[6]=c->r[6]+c->r[12]; // 8009CCA0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCA4
  {uint32_t ea=c->r[6]+0xFFFFFFC4u; WF32(ea,c->f[0]);} // 8009CCA8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCAC
  {uint32_t ea=c->r[6]+0xFFFFFFC8u; WF32(ea,c->f[0]);} // 8009CCB0
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCB4
  {uint32_t ea=c->r[6]+0xFFFFFFCCu; WF32(ea,c->f[0]);} // 8009CCB8
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8009CCBC
  c->r[4]=c->r[5]+c->r[4]; // 8009CCC0
  c->r[5]=c->r[5]+c->r[12]; // 8009CCC4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCC8
  {uint32_t ea=c->r[5]+0xFFFFFFB8u; WF32(ea,c->f[0]);} // 8009CCCC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCD0
  {uint32_t ea=c->r[5]+0xFFFFFFBCu; WF32(ea,c->f[0]);} // 8009CCD4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCD8
  {uint32_t ea=c->r[5]+0xFFFFFFC0u; WF32(ea,c->f[0]);} // 8009CCDC
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8009CCE0
  c->r[5]=c->r[4]+c->r[0]; // 8009CCE4
  c->r[4]=c->r[4]+c->r[12]; // 8009CCE8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCEC
  c->r[12]=c->r[12]+0xFFFFFFA0u; // 8009CCF0
  {uint32_t ea=c->r[4]+0xFFFFFFACu; WF32(ea,c->f[0]);} // 8009CCF4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCF8
  {uint32_t ea=c->r[4]+0xFFFFFFB0u; WF32(ea,c->f[0]);} // 8009CCFC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD00
  {uint32_t ea=c->r[4]+0xFFFFFFB4u; WF32(ea,c->f[0]);} // 8009CD04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009CBA4; } // 8009CD08
L_8009CD0C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8009CD0C
  c->ctr=c->r[3]; // 8009CD10
  cmps(c,0,(int32_t)c->r[3],1); // 8009CD14
  if (crb(c,0)) { goto L_8009CD50; } // 8009CD18
L_8009CD1C:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009CD1C
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8009CD20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009CD24
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8009CD28
  c->r[6]=c->r[5]+c->r[4]; // 8009CD2C
  c->r[4]=c->r[4]+0xFFFFFFF4u; // 8009CD30
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[5]=ea;} // 8009CD34
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 8009CD38
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD3C
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 8009CD40
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD44
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 8009CD48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009CD1C; } // 8009CD4C
L_8009CD50:;
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8009CD50
  c->r[0]=0u+0x00000001u; // 8009CD54
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD58
  c->r[3]=0u+0x00000001u; // 8009CD5C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8009CD60
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD64
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009CD68
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD6C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009CD70
  W32(c->r[31]+0x00000094u,c->r[0]); // 8009CD74
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009CD78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009CD7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CD80
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009CD84
  c->lr=c->r[0]; // 8009CD88
  c->r[1]=c->r[1]+0x00000020u; // 8009CD8C
  return; // 8009CD90
}

// fn_8009CD94
void f_8009CD94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CD94
  c->r[0]=c->lr; // 8009CD98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009CD9C
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 8009CDA0
  cmps(c,0,(int32_t)c->r[4],0); // 8009CDA4
  if (crb(c,1)) { goto L_8009CDB4; } // 8009CDA8
  c->r[3]=0u+0x00000000u; // 8009CDAC
  goto L_8009CE20; // 8009CDB0
L_8009CDB4:;
  c->r[0]=R32(c->r[3]+0x00000094u); // 8009CDB4
  cmps(c,0,(int32_t)c->r[0],0); // 8009CDB8
  if (!crb(c,2)) { goto L_8009CE14; } // 8009CDBC
  c->r[4]=c->r[4]^0x80000000u; // 8009CDC0
  c->r[0]=0u+0x43300000u; // 8009CDC4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009CDC8
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[2]=RF64(ea);} // 8009CDCC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009CDD0
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CDD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8009CDD8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009CDDC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009CDE0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8009CDE4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8009CDE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CDEC
  cmps(c,0,(int32_t)c->r[0],3); // 8009CDF0
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8009CDF4
  if (!crb(c,0)) { goto L_8009CE14; } // 8009CDF8
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009CDFC
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009CE00
  c->ctr=c->r[12]; // 8009CE04
  if (true) { c->lr=0x8009CE0Cu; dispatch(c,c->ctr); } // 8009CE08
  c->r[3]=0u+0x00000000u; // 8009CE0C
  goto L_8009CE20; // 8009CE10
L_8009CE14:;
  c->r[0]=0u+0x00000000u; // 8009CE14
  W32(c->r[3]+0x00000094u,c->r[0]); // 8009CE18
  c->r[3]=0u+0x00000001u; // 8009CE1C
L_8009CE20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009CE20
  c->lr=c->r[0]; // 8009CE24
  c->r[1]=c->r[1]+0x00000020u; // 8009CE28
  return; // 8009CE2C
}

// fn_8009CE30
void f_8009CE30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CE30
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[31]);} // 8009CE34
  {uint32_t ea=c->r[1]+0x00000298u; psq_store(c,31,ea,0,0);} // 8009CE38
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[30]);} // 8009CE3C
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,30,ea,0,0);} // 8009CE40
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[29]);} // 8009CE44
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,29,ea,0,0);} // 8009CE48
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[28]);} // 8009CE4C
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,28,ea,0,0);} // 8009CE50
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[27]);} // 8009CE54
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,27,ea,0,0);} // 8009CE58
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[26]);} // 8009CE5C
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,26,ea,0,0);} // 8009CE60
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[25]);} // 8009CE64
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,25,ea,0,0);} // 8009CE68
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[24]);} // 8009CE6C
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,24,ea,0,0);} // 8009CE70
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[23]);} // 8009CE74
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,23,ea,0,0);} // 8009CE78
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[22]);} // 8009CE7C
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,22,ea,0,0);} // 8009CE80
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[21]);} // 8009CE84
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,21,ea,0,0);} // 8009CE88
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[20]);} // 8009CE8C
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,20,ea,0,0);} // 8009CE90
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[19]);} // 8009CE94
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,19,ea,0,0);} // 8009CE98
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[18]);} // 8009CE9C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,18,ea,0,0);} // 8009CEA0
  c->r[0]=0u+0x43300000u; // 8009CEA4
  W32(c->r[1]+0x000001BCu,c->r[31]); // 8009CEA8
  W32(c->r[1]+0x000001B8u,c->r[30]); // 8009CEAC
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 8009CEB0
  W32(c->r[1]+0x00000188u,c->r[0]); // 8009CEB4
  cmps(c,0,(int32_t)c->r[4],3); // 8009CEB8
  W32(c->r[1]+0x00000190u,c->r[0]); // 8009CEBC
  if (crb(c,1)) { goto L_8009CECC; } // 8009CEC0
  c->r[3]=0u+0x00000000u; // 8009CEC4
  goto L_8009D314; // 8009CEC8
L_8009CECC:;
  c->r[11]=R32(c->r[3]+0x00000078u); // 8009CECC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8009CED0
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=RF64(ea);} // 8009CED4
  c->r[8]=0u+0x00000000u; // 8009CED8
  c->r[6]=c->r[11]+0x00000001u; // 8009CEDC
  {uint32_t ea=c->r[2]+0xFFFF93A0u; c->f[0]=RF64(ea);} // 8009CEE0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8009CEE4
  {uint32_t ea=c->r[2]+0xFFFF9374u; c->f[8]=c->ps1[8]=RF32(ea);} // 8009CEE8
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[7]=c->ps1[7]=RF32(ea);} // 8009CEEC
  c->r[4]=0u+0x00000000u; // 8009CEF0
  {uint32_t ea=c->r[2]+0xFFFF938Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8009CEF4
  {uint32_t ea=c->r[2]+0xFFFF9390u; c->f[5]=c->ps1[5]=RF32(ea);} // 8009CEF8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8009CEFC
  {uint32_t ea=c->r[2]+0xFFFF9394u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009CF00
  {uint32_t ea=c->r[2]+0xFFFF9398u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CF04
  c->r[0]=c->r[0]^0x80000000u; // 8009CF08
  goto L_8009D300; // 8009CF0C
L_8009CF10:;
  cmps(c,0,(int32_t)c->r[8],0); // 8009CF10
  if (!crb(c,2)) { goto L_8009CF2C; } // 8009CF14
  c->r[7]=0u+0x00000000u; // 8009CF18
  c->r[9]=0u+0x00000000u; // 8009CF1C
  c->r[10]=0u+0x00000001u; // 8009CF20
  c->r[5]=0u+0x00000001u; // 8009CF24
  goto L_8009CF5C; // 8009CF28
L_8009CF2C:;
  c->r[5]=c->r[7]+0xFFFFFFFEu; // 8009CF2C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 8009CF30
  if (!crb(c,2)) { goto L_8009CF4C; } // 8009CF34
  c->r[10]=c->r[7]+0xFFFFFFFFu; // 8009CF38
  c->r[9]=c->r[8]|c->r[8]; // 8009CF3C
  c->r[7]=c->r[8]+0xFFFFFFFFu; // 8009CF40
  c->r[5]=c->r[10]|c->r[10]; // 8009CF44
  goto L_8009CF5C; // 8009CF48
L_8009CF4C:;
  c->r[9]=c->r[8]|c->r[8]; // 8009CF4C
  c->r[7]=c->r[8]+0xFFFFFFFFu; // 8009CF50
  c->r[10]=c->r[8]+0x00000001u; // 8009CF54
  c->r[5]=c->r[8]+0x00000002u; // 8009CF58
L_8009CF5C:;
  cmps(c,0,(int32_t)c->r[11],0); // 8009CF5C
  if (!crb(c,2)) { goto L_8009CF84; } // 8009CF60
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 8009CF64
  {uint32_t ea=c->r[5]+c->r[4]; c->f[10]=c->ps1[10]=RF32(ea); c->r[5]=ea;} // 8009CF68
  {uint32_t ea=c->r[5]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 8009CF6C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009CF70
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[10]);} // 8009CF74
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[9]);} // 8009CF78
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8009CF7C
  goto L_8009D0D0; // 8009CF80
L_8009CF84:;
  cmps(c,0,(int32_t)c->r[6],0); // 8009CF84
  c->r[30]=0u+0x00000000u; // 8009CF88
  if (!crb(c,1)) { goto L_8009D0D0; } // 8009CF8C
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8009CF90
  c->r[31]=R32(c->r[3]+0x0000004Cu); // 8009CF94
  c->r[12]=c->r[1]+0x00000008u; // 8009CF98
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)12); // 8009CF9C
  c->r[11]=c->r[31]+c->r[6]; // 8009CFA0
  c->r[6]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 8009CFA4
  c->r[10]=c->r[31]+c->r[5]; // 8009CFA8
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 8009CFAC
  c->r[9]=c->r[31]+c->r[6]; // 8009CFB0
  c->r[7]=c->r[31]+c->r[5]; // 8009CFB4
  goto L_8009D0C0; // 8009CFB8
L_8009CFBC:;
  c->r[6]=c->r[30]^0x80000000u; // 8009CFBC
  c->r[5]=c->r[5]^0x80000000u; // 8009CFC0
  W32(c->r[1]+0x0000018Cu,c->r[6]); // 8009CFC4
  c->r[30]=c->r[30]+0x00000001u; // 8009CFC8
  {uint32_t ea=c->r[7]+0x00000000u; c->f[22]=c->ps1[22]=RF32(ea);} // 8009CFCC
  W32(c->r[1]+0x00000194u,c->r[5]); // 8009CFD0
  {uint32_t ea=c->r[1]+0x00000188u; c->f[9]=RF64(ea);} // 8009CFD4
  {uint32_t ea=c->r[1]+0x00000190u; c->f[3]=RF64(ea);} // 8009CFD8
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[1]); // 8009CFDC
  {uint32_t ea=c->r[9]+0x00000000u; c->f[23]=c->ps1[23]=RF32(ea);} // 8009CFE0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 8009CFE4
  {uint32_t ea=c->r[7]+0x00000004u; c->f[26]=c->ps1[26]=RF32(ea);} // 8009CFE8
  {uint32_t ea=c->r[9]+0x00000004u; c->f[27]=c->ps1[27]=RF32(ea);} // 8009CFEC
  {uint32_t ea=c->r[10]+0x00000000u; c->f[21]=c->ps1[21]=RF32(ea);} // 8009CFF0
  c->f[13]=c->ps1[13]=S(c->f[9]/c->f[3]); // 8009CFF4
  {uint32_t ea=c->r[7]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009CFF8
  {uint32_t ea=c->r[9]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009CFFC
  {uint32_t ea=c->r[10]+0x00000004u; c->f[25]=c->ps1[25]=RF32(ea);} // 8009D000
  {uint32_t ea=c->r[11]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009D004
  {uint32_t ea=c->r[10]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009D008
  c->f[10]=c->ps1[10]=S(c->f[13]*c->f[13]); // 8009D00C
  {uint32_t ea=c->r[11]+0x00000004u; c->f[24]=c->ps1[24]=RF32(ea);} // 8009D010
  {uint32_t ea=c->r[11]+0x00000008u; c->f[28]=c->ps1[28]=RF32(ea);} // 8009D014
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[13]); // 8009D018
  c->f[18]=c->ps1[18]=S(c->f[8]*c->f[10]); // 8009D01C
  c->f[11]=c->ps1[11]=S(c->f[6]*c->f[10]); // 8009D020
  c->f[20]=-c->f[9]; // 8009D024
  c->f[12]=c->ps1[12]=S(c->f[7]*c->f[9]); // 8009D028
  c->f[19]=c->ps1[19]=S(c->f[5]*c->f[9]); // 8009D02C
  c->f[18]=c->ps1[18]=S(c->f[20]+c->f[18]); // 8009D030
  c->f[11]=c->ps1[11]=S(c->f[12]-c->f[11]); // 8009D034
  c->f[20]=c->ps1[20]=S(c->f[4]*c->f[10]); // 8009D038
  c->f[12]=c->ps1[12]=S(c->f[18]-c->f[13]); // 8009D03C
  c->f[11]=c->ps1[11]=S(c->f[8]+c->f[11]); // 8009D040
  c->f[20]=c->ps1[20]=S(c->f[19]+c->f[20]); // 8009D044
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[10]); // 8009D048
  c->f[22]=c->ps1[22]=S(c->f[12]*c->f[22]); // 8009D04C
  c->f[10]=c->ps1[10]=S(c->f[13]+c->f[20]); // 8009D050
  c->f[23]=c->ps1[23]=S(c->f[11]*c->f[23]); // 8009D054
  c->f[13]=c->ps1[13]=S(c->f[11]*c->f[27]); // 8009D058
  c->f[26]=c->ps1[26]=S(c->f[12]*c->f[26]); // 8009D05C
  c->f[23]=c->ps1[23]=S(c->f[22]+c->f[23]); // 8009D060
  c->f[21]=c->ps1[21]=S(c->f[10]*c->f[21]); // 8009D064
  c->f[27]=c->ps1[27]=S(c->f[10]*c->f[25]); // 8009D068
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[30]); // 8009D06C
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[31]); // 8009D070
  c->f[22]=c->ps1[22]=S(c->f[9]*c->f[3]); // 8009D074
  c->f[25]=c->ps1[25]=S(c->f[21]+c->f[23]); // 8009D078
  c->f[3]=c->ps1[3]=S(c->f[12]+c->f[11]); // 8009D07C
  c->f[13]=c->ps1[13]=S(c->f[26]+c->f[13]); // 8009D080
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[29]); // 8009D084
  c->f[12]=c->ps1[12]=S(c->f[9]*c->f[24]); // 8009D088
  c->f[11]=c->ps1[11]=S(c->f[27]+c->f[13]); // 8009D08C
  c->f[25]=c->ps1[25]=S(c->f[22]+c->f[25]); // 8009D090
  c->f[3]=c->ps1[3]=S(c->f[10]+c->f[3]); // 8009D094
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[28]); // 8009D098
  c->f[13]=c->ps1[13]=S(c->f[2]*c->f[25]); // 8009D09C
  c->f[10]=c->ps1[10]=S(c->f[12]+c->f[11]); // 8009D0A0
  c->f[3]=c->ps1[3]=S(c->f[9]+c->f[3]); // 8009D0A4
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[13]);} // 8009D0A8
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 8009D0AC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 8009D0B0
  {uint32_t ea=c->r[12]+0x00000004u; WF32(ea,c->f[9]);} // 8009D0B4
  {uint32_t ea=c->r[12]+0x00000008u; WF32(ea,c->f[3]);} // 8009D0B8
  c->r[12]=c->r[12]+0x0000000Cu; // 8009D0BC
L_8009D0C0:;
  c->r[5]=R32(c->r[3]+0x00000078u); // 8009D0C0
  c->r[5]=c->r[5]+0x00000001u; // 8009D0C4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[5]); // 8009D0C8
  if (crb(c,0)) { IRQCHK(c); goto L_8009CFBC; } // 8009D0CC
L_8009D0D0:;
  c->r[5]=c->r[1]+0x00000008u; // 8009D0D0
  c->r[7]=0u+0x00000000u; // 8009D0D4
  goto L_8009D2E8; // 8009D0D8
L_8009D0DC:;
  c->r[6]=c->r[11]+0x00000001u; // 8009D0DC
  W32(c->r[1]+0x00000194u,c->r[0]); // 8009D0E0
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 8009D0E4
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D0E8
  {uint32_t ea=c->r[1]+0x00000190u; c->f[3]=RF64(ea);} // 8009D0EC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 8009D0F0
  c->f[11]=c->ps1[11]=S(c->f[3]-c->f[1]); // 8009D0F4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 8009D0F8
  c->r[10]=c->r[7]+c->r[6]; // 8009D0FC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009D100
  c->r[6]=(uint32_t)((int32_t)c->r[10]*(int32_t)24); // 8009D104
  c->r[10]=c->r[10]^0x80000000u; // 8009D108
  W32(c->r[1]+0x0000018Cu,c->r[10]); // 8009D10C
  {uint32_t ea=c->r[9]+c->r[6]; WF32(ea,c->f[10]); c->r[9]=ea;} // 8009D110
  {uint32_t ea=c->r[1]+0x00000188u; c->f[10]=RF64(ea);} // 8009D114
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[9]);} // 8009D118
  c->f[9]=c->ps1[9]=S(c->f[10]-c->f[1]); // 8009D11C
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[3]);} // 8009D120
  c->r[11]=R8(c->r[3]+0x00000054u); // 8009D124
  c->f[3]=c->ps1[3]=S(c->f[9]/c->f[11]); // 8009D128
  c->r[10]=R8(c->r[3]+0x00000058u); // 8009D12C
  W32(c->r[1]+0x0000018Cu,c->r[11]); // 8009D130
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D134
  {uint32_t ea=c->r[1]+0x00000188u; c->f[9]=RF64(ea);} // 8009D138
  W32(c->r[1]+0x00000194u,c->r[10]); // 8009D13C
  {uint32_t ea=c->r[1]+0x00000190u; c->f[10]=RF64(ea);} // 8009D140
  c->f[11]=c->ps1[11]=S(c->f[9]-c->f[0]); // 8009D144
  W32(c->r[1]+0x0000018Cu,c->r[11]); // 8009D148
  c->r[9]=c->r[9]+c->r[6]; // 8009D14C
  c->f[10]=c->ps1[10]=S(c->f[10]-c->f[0]); // 8009D150
  {uint32_t ea=c->r[1]+0x00000188u; c->f[9]=RF64(ea);} // 8009D154
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[0]); // 8009D158
  c->f[9]=c->ps1[9]=S(c->f[10]-c->f[9]); // 8009D15C
  c->f[9]=c->ps1[9]=S(c->f[3]*c->f[9]); // 8009D160
  c->f[9]=c->ps1[9]=S(c->f[11]+c->f[9]); // 8009D164
  c->f[9]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[9],true)); // 8009D168
  {uint32_t ea=c->r[1]+0x00000198u; WF64(ea,c->f[9]);} // 8009D16C
  c->r[10]=R32(c->r[1]+0x0000019Cu); // 8009D170
  W8(c->r[9]+0x0000000Cu,c->r[10]); // 8009D174
  c->r[11]=R8(c->r[3]+0x00000055u); // 8009D178
  c->r[10]=R8(c->r[3]+0x00000059u); // 8009D17C
  W32(c->r[1]+0x00000194u,c->r[11]); // 8009D180
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D184
  {uint32_t ea=c->r[1]+0x00000190u; c->f[9]=RF64(ea);} // 8009D188
  W32(c->r[1]+0x0000018Cu,c->r[10]); // 8009D18C
  c->r[9]=c->r[9]+c->r[6]; // 8009D190
  c->f[11]=c->ps1[11]=S(c->f[9]-c->f[0]); // 8009D194
  W32(c->r[1]+0x00000194u,c->r[11]); // 8009D198
  {uint32_t ea=c->r[1]+0x00000188u; c->f[10]=RF64(ea);} // 8009D19C
  {uint32_t ea=c->r[1]+0x00000190u; c->f[9]=RF64(ea);} // 8009D1A0
  c->f[10]=c->ps1[10]=S(c->f[10]-c->f[0]); // 8009D1A4
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[0]); // 8009D1A8
  c->f[9]=c->ps1[9]=S(c->f[10]-c->f[9]); // 8009D1AC
  c->f[9]=c->ps1[9]=S(c->f[3]*c->f[9]); // 8009D1B0
  c->f[9]=c->ps1[9]=S(c->f[11]+c->f[9]); // 8009D1B4
  c->f[9]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[9],true)); // 8009D1B8
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[9]);} // 8009D1BC
  c->r[10]=R32(c->r[1]+0x000001A4u); // 8009D1C0
  W8(c->r[9]+0x0000000Du,c->r[10]); // 8009D1C4
  c->r[11]=R8(c->r[3]+0x00000056u); // 8009D1C8
  c->r[10]=R8(c->r[3]+0x0000005Au); // 8009D1CC
  W32(c->r[1]+0x0000018Cu,c->r[11]); // 8009D1D0
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D1D4
  {uint32_t ea=c->r[1]+0x00000188u; c->f[9]=RF64(ea);} // 8009D1D8
  W32(c->r[1]+0x00000194u,c->r[10]); // 8009D1DC
  c->r[9]=c->r[9]+c->r[6]; // 8009D1E0
  c->f[11]=c->ps1[11]=S(c->f[9]-c->f[0]); // 8009D1E4
  W32(c->r[1]+0x0000018Cu,c->r[11]); // 8009D1E8
  {uint32_t ea=c->r[1]+0x00000190u; c->f[10]=RF64(ea);} // 8009D1EC
  {uint32_t ea=c->r[1]+0x00000188u; c->f[9]=RF64(ea);} // 8009D1F0
  c->f[10]=c->ps1[10]=S(c->f[10]-c->f[0]); // 8009D1F4
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[0]); // 8009D1F8
  c->f[9]=c->ps1[9]=S(c->f[10]-c->f[9]); // 8009D1FC
  c->f[9]=c->ps1[9]=S(c->f[3]*c->f[9]); // 8009D200
  c->f[9]=c->ps1[9]=S(c->f[11]+c->f[9]); // 8009D204
  c->f[9]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[9],true)); // 8009D208
  {uint32_t ea=c->r[1]+0x000001A8u; WF64(ea,c->f[9]);} // 8009D20C
  c->r[10]=R32(c->r[1]+0x000001ACu); // 8009D210
  W8(c->r[9]+0x0000000Eu,c->r[10]); // 8009D214
  c->r[11]=R8(c->r[3]+0x00000057u); // 8009D218
  c->r[10]=R8(c->r[3]+0x0000005Bu); // 8009D21C
  W32(c->r[1]+0x00000194u,c->r[11]); // 8009D220
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D224
  {uint32_t ea=c->r[1]+0x00000190u; c->f[9]=RF64(ea);} // 8009D228
  W32(c->r[1]+0x0000018Cu,c->r[10]); // 8009D22C
  c->r[9]=c->r[9]+c->r[6]; // 8009D230
  c->f[12]=c->ps1[12]=S(c->f[9]-c->f[0]); // 8009D234
  {uint32_t ea=c->r[3]+0x00000070u; c->f[9]=c->ps1[9]=RF32(ea);} // 8009D238
  W32(c->r[1]+0x00000194u,c->r[11]); // 8009D23C
  {uint32_t ea=c->r[1]+0x00000188u; c->f[11]=RF64(ea);} // 8009D240
  {uint32_t ea=c->r[1]+0x00000190u; c->f[10]=RF64(ea);} // 8009D244
  c->f[11]=c->ps1[11]=S(c->f[11]-c->f[0]); // 8009D248
  c->f[10]=c->ps1[10]=S(c->f[10]-c->f[0]); // 8009D24C
  c->f[10]=c->ps1[10]=S(c->f[11]-c->f[10]); // 8009D250
  c->f[10]=c->ps1[10]=S(c->f[3]*c->f[10]); // 8009D254
  c->f[10]=c->ps1[10]=S(c->f[12]+c->f[10]); // 8009D258
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[10]); // 8009D25C
  c->f[9]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[9],true)); // 8009D260
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[9]);} // 8009D264
  c->r[10]=R32(c->r[1]+0x000001B4u); // 8009D268
  W8(c->r[9]+0x0000000Fu,c->r[10]); // 8009D26C
  c->r[9]=R32(c->r[3]+0x00000098u); // 8009D270
  cmps(c,0,(int32_t)c->r[9],0); // 8009D274
  if (crb(c,2)) { goto L_8009D2B0; } // 8009D278
  {uint32_t ea=c->r[3]+0x00000068u; c->f[9]=c->ps1[9]=RF32(ea);} // 8009D27C
  {uint32_t ea=c->r[3]+0x00000060u; c->f[10]=c->ps1[10]=RF32(ea);} // 8009D280
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D284
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[10]); // 8009D288
  c->r[9]=c->r[9]+c->r[6]; // 8009D28C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[9]); // 8009D290
  c->f[3]=c->ps1[3]=S(c->f[10]+c->f[3]); // 8009D294
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[3]);} // 8009D298
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D29C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009D2A0
  c->r[6]=c->r[9]+c->r[6]; // 8009D2A4
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[3]);} // 8009D2A8
  goto L_8009D2E0; // 8009D2AC
L_8009D2B0:;
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D2B0
  {uint32_t ea=c->r[3]+0x00000060u; c->f[9]=c->ps1[9]=RF32(ea);} // 8009D2B4
  c->r[9]=c->r[9]+c->r[6]; // 8009D2B8
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[9]);} // 8009D2BC
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 8009D2C0
  {uint32_t ea=c->r[3]+0x00000064u; c->f[10]=c->ps1[10]=RF32(ea);} // 8009D2C4
  c->r[9]=R32(c->r[3]+0x00000050u); // 8009D2C8
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[10]); // 8009D2CC
  c->r[6]=c->r[9]+c->r[6]; // 8009D2D0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[9]); // 8009D2D4
  c->f[3]=c->ps1[3]=S(c->f[10]+c->f[3]); // 8009D2D8
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[3]);} // 8009D2DC
L_8009D2E0:;
  c->r[5]=c->r[5]+0x0000000Cu; // 8009D2E0
  c->r[7]=c->r[7]+0x00000001u; // 8009D2E4
L_8009D2E8:;
  c->r[11]=R32(c->r[3]+0x00000078u); // 8009D2E8
  c->r[6]=c->r[11]+0x00000001u; // 8009D2EC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 8009D2F0
  if (crb(c,0)) { IRQCHK(c); goto L_8009D0DC; } // 8009D2F4
  c->r[4]=c->r[4]+0x0000000Cu; // 8009D2F8
  c->r[8]=c->r[8]+0x00000001u; // 8009D2FC
L_8009D300:;
  c->r[7]=R32(c->r[3]+0x0000008Cu); // 8009D300
  c->r[5]=c->r[7]+0xFFFFFFFFu; // 8009D304
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 8009D308
  if (crb(c,0)) { IRQCHK(c); goto L_8009CF10; } // 8009D30C
  c->r[3]=0u+0x00000001u; // 8009D310
L_8009D314:;
  {uint32_t ea=c->r[1]+0x00000298u; psq_load(c,31,ea,0,0);} // 8009D314
  {uint32_t ea=c->r[1]+0x00000290u; c->f[31]=RF64(ea);} // 8009D318
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,30,ea,0,0);} // 8009D31C
  {uint32_t ea=c->r[1]+0x00000280u; c->f[30]=RF64(ea);} // 8009D320
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,29,ea,0,0);} // 8009D324
  {uint32_t ea=c->r[1]+0x00000270u; c->f[29]=RF64(ea);} // 8009D328
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,28,ea,0,0);} // 8009D32C
  {uint32_t ea=c->r[1]+0x00000260u; c->f[28]=RF64(ea);} // 8009D330
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,27,ea,0,0);} // 8009D334
  {uint32_t ea=c->r[1]+0x00000250u; c->f[27]=RF64(ea);} // 8009D338
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,26,ea,0,0);} // 8009D33C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[26]=RF64(ea);} // 8009D340
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,25,ea,0,0);} // 8009D344
  {uint32_t ea=c->r[1]+0x00000230u; c->f[25]=RF64(ea);} // 8009D348
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,24,ea,0,0);} // 8009D34C
  {uint32_t ea=c->r[1]+0x00000220u; c->f[24]=RF64(ea);} // 8009D350
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,23,ea,0,0);} // 8009D354
  {uint32_t ea=c->r[1]+0x00000210u; c->f[23]=RF64(ea);} // 8009D358
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,22,ea,0,0);} // 8009D35C
  {uint32_t ea=c->r[1]+0x00000200u; c->f[22]=RF64(ea);} // 8009D360
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,21,ea,0,0);} // 8009D364
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[21]=RF64(ea);} // 8009D368
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,20,ea,0,0);} // 8009D36C
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[20]=RF64(ea);} // 8009D370
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,19,ea,0,0);} // 8009D374
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[19]=RF64(ea);} // 8009D378
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,18,ea,0,0);} // 8009D37C
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[18]=RF64(ea);} // 8009D380
  c->r[31]=R32(c->r[1]+0x000001BCu); // 8009D384
  c->r[30]=R32(c->r[1]+0x000001B8u); // 8009D388
  c->r[1]=c->r[1]+0x000002A0u; // 8009D38C
  return; // 8009D390
}

// fn_8009D394
void f_8009D394(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D394
  c->r[0]=c->lr; // 8009D398
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009D39C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8009D3A0
  W32(c->r[1]+0x00000038u,c->r[30]); // 8009D3A4
  c->r[30]=c->r[3]|c->r[3]; // 8009D3A8
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009D3AC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009D3B0
  c->ctr=c->r[12]; // 8009D3B4
  if (true) { c->lr=0x8009D3BCu; dispatch(c,c->ctr); } // 8009D3B8
  cmps(c,0,(int32_t)c->r[3],0); // 8009D3BC
  if (!crb(c,2)) { goto L_8009D3CC; } // 8009D3C0
  c->r[3]=0u+0x00000000u; // 8009D3C4
  goto L_8009D440; // 8009D3C8
L_8009D3CC:;
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 8009D3CC
  cmps(c,0,(int32_t)c->r[3],3); // 8009D3D0
  if (crb(c,1)) { goto L_8009D3E0; } // 8009D3D4
  c->r[3]=0u+0x00000000u; // 8009D3D8
  goto L_8009D440; // 8009D3DC
L_8009D3E0:;
  c->r[5]=R32(c->r[30]+0x00000078u); // 8009D3E0
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 8009D3E4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8009D3E8
  c->r[4]=c->r[1]+0x00000008u; // 8009D3EC
  c->r[0]=c->r[5]+0x00000001u; // 8009D3F0
  c->r[12]=R32(c->r[3]+0x00000160u); // 8009D3F4
  c->r[31]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 8009D3F8
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009D3FC
  c->ctr=c->r[12]; // 8009D400
  if (true) { c->lr=0x8009D408u; dispatch(c,c->ctr); } // 8009D404
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 8009D408
  c->r[4]=0u+0x00000000u; // 8009D40C
  c->lr=0x8009D414u; f_800E6D10(c); // 8009D410
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009D414
  c->r[3]=0u+0x00000005u; // 8009D418
  c->lr=0x8009D420u; f_800E6D14(c); // 8009D41C
  c->r[3]=0u+0x00000001u; // 8009D420
  c->lr=0x8009D428u; f_800E6D6C(c); // 8009D424
  c->r[4]=R32(c->r[30]+0x00000050u); // 8009D428
  c->r[5]=c->r[31]|c->r[31]; // 8009D42C
  c->r[3]=c->r[1]+0x00000008u; // 8009D430
  c->lr=0x8009D438u; f_800E6D80(c); // 8009D434
  c->lr=0x8009D43Cu; f_800E6FE8(c); // 8009D438
  c->r[3]=0u+0x00000001u; // 8009D43C
L_8009D440:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009D440
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8009D444
  c->r[30]=R32(c->r[1]+0x00000038u); // 8009D448
  c->lr=c->r[0]; // 8009D44C
  c->r[1]=c->r[1]+0x00000040u; // 8009D450
  return; // 8009D454
}

// fn_8009D458
void f_8009D458(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009D458
  c->r[0]=0u+0x00000000u; // 8009D45C
  {uint32_t ea=c->r[2]+0xFFFF9374u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009D460
  {uint32_t ea=c->r[2]+0xFFFF938Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009D464
  {uint32_t ea=c->r[2]+0xFFFF93A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009D468
  {uint32_t ea=c->r[2]+0xFFFF937Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D46C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8009D470
  W32(c->r[3]+0x00000050u,c->r[0]); // 8009D474
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 8009D478
  W32(c->r[3]+0x00000080u,c->r[0]); // 8009D47C
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[4]);} // 8009D480
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[3]);} // 8009D484
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[2]);} // 8009D488
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 8009D48C
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009D490
  W32(c->r[3]+0x00000094u,c->r[0]); // 8009D494
  W32(c->r[3]+0x00000098u,c->r[0]); // 8009D498
  W8(c->r[3]+0x000000A0u,c->r[0]); // 8009D49C
  return; // 8009D4A0
}

// fn_8009D4A4
void f_8009D4A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D4A4
  c->r[0]=c->lr; // 8009D4A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D4AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D4B0
  c->r[31]=c->r[3]|c->r[3]; // 8009D4B4
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009D4B8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009D4BC
  c->ctr=c->r[12]; // 8009D4C0
  if (true) { c->lr=0x8009D4C8u; dispatch(c,c->ctr); } // 8009D4C4
  c->r[0]=0u+0x00000000u; // 8009D4C8
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 8009D4CC
  W32(c->r[31]+0x00000050u,c->r[0]); // 8009D4D0
  W32(c->r[31]+0x00000094u,c->r[0]); // 8009D4D4
  W32(c->r[31]+0x00000098u,c->r[0]); // 8009D4D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009D4DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D4E0
  c->lr=c->r[0]; // 8009D4E4
  c->r[1]=c->r[1]+0x00000010u; // 8009D4E8
  return; // 8009D4EC
}

// fn_8009D4F0
void f_8009D4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D4F0
  c->r[0]=c->lr; // 8009D4F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D4F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D4FC
  c->r[31]=c->r[3]|c->r[3]; // 8009D500
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8009D504
  cmps(c,0,(int32_t)c->r[0],0); // 8009D508
  if (!crb(c,2)) { goto L_8009D57C; } // 8009D50C
  c->r[0]=R32(c->r[3]+0x00000050u); // 8009D510
  cmps(c,0,(int32_t)c->r[0],0); // 8009D514
  if (!crb(c,2)) { goto L_8009D57C; } // 8009D518
  cmps(c,0,(int32_t)c->r[4],128); // 8009D51C
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 8009D520
  if (!crb(c,1)) { goto L_8009D530; } // 8009D524
  c->r[0]=0u+0x00000080u; // 8009D528
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 8009D52C
L_8009D530:;
  cmps(c,0,(int32_t)c->r[5],32); // 8009D530
  W32(c->r[3]+0x00000080u,c->r[5]); // 8009D534
  if (!crb(c,1)) { goto L_8009D544; } // 8009D538
  c->r[0]=0u+0x00000020u; // 8009D53C
  W32(c->r[3]+0x00000080u,c->r[0]); // 8009D540
L_8009D544:;
  c->lr=0x8009D548u; f_80098038(c); // 8009D544
  c->r[0]=R32(c->r[31]+0x0000007Cu); // 8009D548
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8009D54C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009D550
  c->lr=0x8009D558u; f_80098028(c); // 8009D554
  c->lr=0x8009D55Cu; f_80098038(c); // 8009D558
  c->r[5]=R32(c->r[31]+0x0000007Cu); // 8009D55C
  c->r[4]=R32(c->r[31]+0x00000080u); // 8009D560
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8009D564
  W32(c->r[31]+0x00000050u,c->r[3]); // 8009D568
  c->r[0]=c->r[4]+0x00000001u; // 8009D56C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 8009D570
  c->r[3]=rotl(c->r[0],6)&0xFFFFFFC0u; // 8009D574
  c->lr=0x8009D57Cu; f_80098028(c); // 8009D578
L_8009D57C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D57C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009D580
  c->lr=c->r[0]; // 8009D584
  c->r[1]=c->r[1]+0x00000010u; // 8009D588
  return; // 8009D58C
}

// fn_8009D590
void f_8009D590(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],128); // 8009D590
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 8009D594
  if (!crb(c,1)) { goto L_8009D5A4; } // 8009D598
  c->r[0]=0u+0x00000080u; // 8009D59C
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 8009D5A0
L_8009D5A4:;
  cmps(c,0,(int32_t)c->r[5],32); // 8009D5A4
  W32(c->r[3]+0x00000080u,c->r[5]); // 8009D5A8
  if (!crb(c,1)) { goto L_8009D5B8; } // 8009D5AC
  c->r[0]=0u+0x00000020u; // 8009D5B0
  W32(c->r[3]+0x00000080u,c->r[0]); // 8009D5B4
L_8009D5B8:;
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 8009D5B8
  W32(c->r[3]+0x00000050u,c->r[7]); // 8009D5BC
  return; // 8009D5C0
}

// fn_8009D5C4
void f_8009D5C4(Ctx* __restrict c) {
  c->r[11]=R8(c->r[4]+0x00000000u); // 8009D5C4
  c->r[10]=R8(c->r[4]+0x00000001u); // 8009D5C8
  c->r[9]=R8(c->r[4]+0x00000002u); // 8009D5CC
  c->r[7]=c->r[11]|c->r[11]; // 8009D5D0
  c->r[8]=R8(c->r[4]+0x00000003u); // 8009D5D4
  c->r[6]=c->r[10]|c->r[10]; // 8009D5D8
  c->r[5]=c->r[9]|c->r[9]; // 8009D5DC
  W8(c->r[3]+0x00000054u,c->r[11]); // 8009D5E0
  c->r[0]=c->r[8]|c->r[8]; // 8009D5E4
  W8(c->r[3]+0x00000055u,c->r[10]); // 8009D5E8
  W8(c->r[3]+0x00000056u,c->r[9]); // 8009D5EC
  W8(c->r[3]+0x00000057u,c->r[8]); // 8009D5F0
  W8(c->r[3]+0x00000058u,c->r[7]); // 8009D5F4
  W8(c->r[3]+0x00000059u,c->r[6]); // 8009D5F8
  W8(c->r[3]+0x0000005Au,c->r[5]); // 8009D5FC
  W8(c->r[3]+0x0000005Bu,c->r[0]); // 8009D600
  return; // 8009D604
}

// fn_8009D608
void f_8009D608(Ctx* __restrict c) {
  c->r[0]=R8(c->r[4]+0x00000000u); // 8009D608
  W8(c->r[3]+0x00000054u,c->r[0]); // 8009D60C
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009D610
  W8(c->r[3]+0x00000055u,c->r[0]); // 8009D614
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009D618
  W8(c->r[3]+0x00000056u,c->r[0]); // 8009D61C
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009D620
  W8(c->r[3]+0x00000057u,c->r[0]); // 8009D624
  c->r[0]=R8(c->r[4]+0x00000004u); // 8009D628
  W8(c->r[3]+0x00000058u,c->r[0]); // 8009D62C
  c->r[0]=R8(c->r[4]+0x00000005u); // 8009D630
  W8(c->r[3]+0x00000059u,c->r[0]); // 8009D634
  c->r[0]=R8(c->r[4]+0x00000006u); // 8009D638
  W8(c->r[3]+0x0000005Au,c->r[0]); // 8009D63C
  c->r[0]=R8(c->r[4]+0x00000007u); // 8009D640
  W8(c->r[3]+0x0000005Bu,c->r[0]); // 8009D644
  return; // 8009D648
}

// fn_8009D64C
void f_8009D64C(Ctx* __restrict c) {
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8009D64C
  W32(c->r[3]+0x00000060u,c->r[5]); // 8009D650
  W32(c->r[3]+0x00000064u,c->r[6]); // 8009D654
  return; // 8009D658
}

// fn_8009D65C
void f_8009D65C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000068u,c->r[4]); // 8009D65C
  return; // 8009D660
}

// fn_8009D664
void f_8009D664(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D664
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 8009D668
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D66C
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 8009D670
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D674
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8009D678
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D67C
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 8009D680
  W8(c->r[3]+0x000000A1u,c->r[5]); // 8009D684
  return; // 8009D688
}

// fn_8009D68C
void f_8009D68C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D68C
  c->r[4]=c->r[4]^0x80000000u; // 8009D690
  c->r[0]=0u+0x43300000u; // 8009D694
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=RF64(ea);} // 8009D698
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009D69C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009D6A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8009D6A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009D6A8
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 8009D6AC
  c->r[1]=c->r[1]+0x00000010u; // 8009D6B0
  return; // 8009D6B4
}

// fn_8009D6B8
void f_8009D6B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D6B8
  c->r[4]=c->r[4]^0x80000000u; // 8009D6BC
  c->r[0]=0u+0x43300000u; // 8009D6C0
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=RF64(ea);} // 8009D6C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009D6C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009D6CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8009D6D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009D6D4
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 8009D6D8
  c->r[1]=c->r[1]+0x00000010u; // 8009D6DC
  return; // 8009D6E0
}

// fn_8009D6E4
void f_8009D6E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[1]);} // 8009D6E4
  return; // 8009D6E8
}

// fn_8009D6EC
void f_8009D6EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 8009D6EC
  return; // 8009D6F0
}

// fn_8009D6F4
void f_8009D6F4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000098u); // 8009D6F4
  c->r[0]=0u-c->r[3]; // 8009D6F8
  c->r[0]=c->r[0]&~c->r[3]; // 8009D6FC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8009D700
  return; // 8009D704
}

// fn_8009D708
void f_8009D708(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF937Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D708
  c->r[0]=0u+0x00000000u; // 8009D70C
  W32(c->r[3]+0x00000094u,c->r[0]); // 8009D710
  W32(c->r[3]+0x00000098u,c->r[0]); // 8009D714
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009D718
  W8(c->r[3]+0x000000A0u,c->r[0]); // 8009D71C
  return; // 8009D720
}

// fn_8009D724
void f_8009D724(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009D724
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009D728
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D72C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 8009D730
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8009D734
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8009D738
  return; // 8009D73C
}

// fn_8009D740
void f_8009D740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D740
  c->r[0]=c->lr; // 8009D744
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D748
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009D74C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009D750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D754
  c->r[31]=c->r[3]|c->r[3]; // 8009D758
  c->r[0]=R8(c->r[3]+0x000000A0u); // 8009D75C
  cmps(c,0,(int32_t)c->r[0],0); // 8009D760
  if (crb(c,2)) { goto L_8009D794; } // 8009D764
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 8009D768
  c->r[3]=c->r[3]+0x00000040u; // 8009D76C
  c->lr=0x8009D774u; f_80164A1C(c); // 8009D770
  {uint32_t ea=c->r[2]+0xFFFF937Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D774
  fcmp(c,0,c->f[1],c->f[0]); // 8009D778
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009D77C
  if (!crb(c,2)) { goto L_8009D794; } // 8009D780
  c->r[0]=0u+0x00000001u; // 8009D784
  c->r[3]=0u+0x00000001u; // 8009D788
  W8(c->r[31]+0x000000A0u,c->r[0]); // 8009D78C
  goto L_8009DAA8; // 8009D790
L_8009D794:;
  c->lr=0x8009D798u; f_800076EC(c); // 8009D794
  c->f[31]=c->f[1]; // 8009D798
  c->lr=0x8009D7A0u; f_80013AA4(c); // 8009D79C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[31]); // 8009D7A0
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009D7A4
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D7A8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8009D7AC
  fcmp(c,0,c->f[1],c->f[0]); // 8009D7B0
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[1]);} // 8009D7B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009D7B8
  if (!crb(c,2)) { goto L_8009DA80; } // 8009D7BC
  c->r[3]=R32(c->r[31]+0x00000094u); // 8009D7C0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009D7C4
  c->r[5]=R32(c->r[31]+0x0000007Cu); // 8009D7C8
  c->r[6]=c->r[3]+0x00000001u; // 8009D7CC
  c->r[3]=R32(c->r[31]+0x00000098u); // 8009D7D0
  c->r[4]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 8009D7D4
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009D7D8
  c->r[0]=c->r[3]+0x00000001u; // 8009D7DC
  W32(c->r[31]+0x00000098u,c->r[0]); // 8009D7E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8009D7E4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 8009D7E8
  c->r[0]=c->r[6]-c->r[0]; // 8009D7EC
  W32(c->r[31]+0x00000094u,c->r[0]); // 8009D7F0
  if (!crb(c,1)) { goto L_8009D7FC; } // 8009D7F4
  W32(c->r[31]+0x00000098u,c->r[5]); // 8009D7F8
L_8009D7FC:;
  c->r[3]=R32(c->r[31]+0x00000098u); // 8009D7FC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8009D800
  cmps(c,1,(int32_t)c->r[3],1); // 8009D804
  if (crb(c,4)) { goto L_8009DA80; } // 8009D808
  cmps(c,0,(int32_t)c->r[3],8); // 8009D80C
  if (!crb(c,1)) { goto L_8009DA3C; } // 8009D810
  c->r[5]=0u+0x00000000u; // 8009D814
  c->r[6]=0u+0x00000000u; // 8009D818
  c->r[7]=0u+0x00000000u; // 8009D81C
  if (crb(c,4)) { goto L_8009D838; } // 8009D820
  c->r[4]=0u+0x80000000u; // 8009D824
  c->r[0]=c->r[4]+0x00000001u; // 8009D828
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009D82C
  if (crb(c,0)) { goto L_8009D838; } // 8009D830
  c->r[7]=0u+0x00000001u; // 8009D834
L_8009D838:;
  cmps(c,0,(int32_t)c->r[7],0); // 8009D838
  if (crb(c,2)) { goto L_8009D87C; } // 8009D83C
  c->r[8]=R32(c->r[31]+0x00000098u); // 8009D840
  c->r[4]=0u+0x00000001u; // 8009D844
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 8009D848
  c->r[7]=rotl(c->r[0],0)&0x80000000u; // 8009D84C
  c->r[0]=c->r[7]+0x80000000u; // 8009D850
  cmpu(c,0,c->r[0],0x00000000u); // 8009D854
  if (!crb(c,2)) { goto L_8009D870; } // 8009D858
  c->r[0]=c->r[8]+0xFFFFFFFEu; // 8009D85C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 8009D860
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8009D864
  if (crb(c,2)) { goto L_8009D870; } // 8009D868
  c->r[4]=0u+0x00000000u; // 8009D86C
L_8009D870:;
  cmps(c,0,(int32_t)c->r[4],0); // 8009D870
  if (crb(c,2)) { goto L_8009D87C; } // 8009D874
  c->r[6]=0u+0x00000001u; // 8009D878
L_8009D87C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8009D87C
  if (crb(c,2)) { goto L_8009D8B4; } // 8009D880
  c->r[6]=R32(c->r[31]+0x00000098u); // 8009D884
  c->r[4]=0u+0x00000001u; // 8009D888
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 8009D88C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8009D890
  if (!crb(c,2)) { goto L_8009D8A8; } // 8009D894
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 8009D898
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8009D89C
  if (crb(c,2)) { goto L_8009D8A8; } // 8009D8A0
  c->r[4]=0u+0x00000000u; // 8009D8A4
L_8009D8A8:;
  cmps(c,0,(int32_t)c->r[4],0); // 8009D8A8
  if (crb(c,2)) { goto L_8009D8B4; } // 8009D8AC
  c->r[5]=0u+0x00000001u; // 8009D8B0
L_8009D8B4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8009D8B4
  if (crb(c,2)) { goto L_8009DA3C; } // 8009D8B8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009D8BC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8009D8C0
  c->r[12]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8009D8C4
  c->ctr=c->r[0]; // 8009D8C8
  cmps(c,0,(int32_t)c->r[3],9); // 8009D8CC
  if (crb(c,0)) { goto L_8009DA3C; } // 8009D8D0
L_8009D8D4:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009D8D4
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8009D8D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009D8DC
  c->r[9]=c->r[3]+0xFFFFFFFEu; // 8009D8E0
  c->r[8]=c->r[3]+0xFFFFFFFDu; // 8009D8E4
  c->r[7]=c->r[3]+0xFFFFFFFCu; // 8009D8E8
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D8EC
  c->r[10]=c->r[4]+c->r[12]; // 8009D8F0
  c->r[11]=c->r[4]+c->r[0]; // 8009D8F4
  c->r[6]=c->r[3]+0xFFFFFFFBu; // 8009D8F8
  {uint32_t ea=c->r[10]+0x00000000u; WF32(ea,c->f[0]);} // 8009D8FC
  c->r[5]=c->r[3]+0xFFFFFFFAu; // 8009D900
  c->r[4]=c->r[3]+0xFFFFFFF9u; // 8009D904
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 8009D908
  {uint32_t ea=c->r[11]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D90C
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 8009D910
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8009D914
  {uint32_t ea=c->r[10]+0x00000004u; WF32(ea,c->f[0]);} // 8009D918
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 8009D91C
  {uint32_t ea=c->r[11]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D920
  {uint32_t ea=c->r[10]+0x00000008u; WF32(ea,c->f[0]);} // 8009D924
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 8009D928
  c->r[10]=R32(c->r[31]+0x0000004Cu); // 8009D92C
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8009D930
  {uint32_t ea=c->r[9]+c->r[10]; c->f[0]=c->ps1[0]=RF32(ea); c->r[9]=ea;} // 8009D934
  c->r[10]=c->r[10]+c->r[12]; // 8009D938
  {uint32_t ea=c->r[10]+0xFFFFFFF4u; WF32(ea,c->f[0]);} // 8009D93C
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8009D940
  {uint32_t ea=c->r[9]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D944
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8009D948
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; WF32(ea,c->f[0]);} // 8009D94C
  {uint32_t ea=c->r[9]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D950
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009D954
  {uint32_t ea=c->r[10]+0xFFFFFFFCu; WF32(ea,c->f[0]);} // 8009D958
  c->r[9]=R32(c->r[31]+0x0000004Cu); // 8009D95C
  c->r[8]=c->r[9]+c->r[8]; // 8009D960
  c->r[9]=c->r[9]+c->r[12]; // 8009D964
  {uint32_t ea=c->r[8]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D968
  {uint32_t ea=c->r[9]+0xFFFFFFE8u; WF32(ea,c->f[0]);} // 8009D96C
  {uint32_t ea=c->r[8]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D970
  {uint32_t ea=c->r[9]+0xFFFFFFECu; WF32(ea,c->f[0]);} // 8009D974
  {uint32_t ea=c->r[8]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D978
  {uint32_t ea=c->r[9]+0xFFFFFFF0u; WF32(ea,c->f[0]);} // 8009D97C
  c->r[8]=R32(c->r[31]+0x0000004Cu); // 8009D980
  c->r[7]=c->r[8]+c->r[7]; // 8009D984
  c->r[8]=c->r[8]+c->r[12]; // 8009D988
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D98C
  {uint32_t ea=c->r[8]+0xFFFFFFDCu; WF32(ea,c->f[0]);} // 8009D990
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D994
  {uint32_t ea=c->r[8]+0xFFFFFFE0u; WF32(ea,c->f[0]);} // 8009D998
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D99C
  {uint32_t ea=c->r[8]+0xFFFFFFE4u; WF32(ea,c->f[0]);} // 8009D9A0
  c->r[7]=R32(c->r[31]+0x0000004Cu); // 8009D9A4
  c->r[6]=c->r[7]+c->r[6]; // 8009D9A8
  c->r[7]=c->r[7]+c->r[12]; // 8009D9AC
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D9B0
  {uint32_t ea=c->r[7]+0xFFFFFFD0u; WF32(ea,c->f[0]);} // 8009D9B4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D9B8
  {uint32_t ea=c->r[7]+0xFFFFFFD4u; WF32(ea,c->f[0]);} // 8009D9BC
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D9C0
  {uint32_t ea=c->r[7]+0xFFFFFFD8u; WF32(ea,c->f[0]);} // 8009D9C4
  c->r[6]=R32(c->r[31]+0x0000004Cu); // 8009D9C8
  c->r[5]=c->r[6]+c->r[5]; // 8009D9CC
  c->r[6]=c->r[6]+c->r[12]; // 8009D9D0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D9D4
  {uint32_t ea=c->r[6]+0xFFFFFFC4u; WF32(ea,c->f[0]);} // 8009D9D8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D9DC
  {uint32_t ea=c->r[6]+0xFFFFFFC8u; WF32(ea,c->f[0]);} // 8009D9E0
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D9E4
  {uint32_t ea=c->r[6]+0xFFFFFFCCu; WF32(ea,c->f[0]);} // 8009D9E8
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8009D9EC
  c->r[4]=c->r[5]+c->r[4]; // 8009D9F0
  c->r[5]=c->r[5]+c->r[12]; // 8009D9F4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D9F8
  {uint32_t ea=c->r[5]+0xFFFFFFB8u; WF32(ea,c->f[0]);} // 8009D9FC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA00
  {uint32_t ea=c->r[5]+0xFFFFFFBCu; WF32(ea,c->f[0]);} // 8009DA04
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA08
  {uint32_t ea=c->r[5]+0xFFFFFFC0u; WF32(ea,c->f[0]);} // 8009DA0C
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8009DA10
  c->r[5]=c->r[4]+c->r[0]; // 8009DA14
  c->r[4]=c->r[4]+c->r[12]; // 8009DA18
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA1C
  c->r[12]=c->r[12]+0xFFFFFFA0u; // 8009DA20
  {uint32_t ea=c->r[4]+0xFFFFFFACu; WF32(ea,c->f[0]);} // 8009DA24
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA28
  {uint32_t ea=c->r[4]+0xFFFFFFB0u; WF32(ea,c->f[0]);} // 8009DA2C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA30
  {uint32_t ea=c->r[4]+0xFFFFFFB4u; WF32(ea,c->f[0]);} // 8009DA34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009D8D4; } // 8009DA38
L_8009DA3C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8009DA3C
  c->ctr=c->r[3]; // 8009DA40
  cmps(c,0,(int32_t)c->r[3],1); // 8009DA44
  if (crb(c,0)) { goto L_8009DA80; } // 8009DA48
L_8009DA4C:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009DA4C
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8009DA50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009DA54
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8009DA58
  c->r[6]=c->r[5]+c->r[4]; // 8009DA5C
  c->r[4]=c->r[4]+0xFFFFFFF4u; // 8009DA60
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[5]=ea;} // 8009DA64
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 8009DA68
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA6C
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 8009DA70
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA74
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 8009DA78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009DA4C; } // 8009DA7C
L_8009DA80:;
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 8009DA80
  c->r[0]=0u+0x00000001u; // 8009DA84
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA88
  c->r[3]=0u+0x00000001u; // 8009DA8C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8009DA90
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA94
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009DA98
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DA9C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009DAA0
  W8(c->r[31]+0x000000A0u,c->r[0]); // 8009DAA4
L_8009DAA8:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009DAA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009DAAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009DAB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009DAB4
  c->lr=c->r[0]; // 8009DAB8
  c->r[1]=c->r[1]+0x00000020u; // 8009DABC
  return; // 8009DAC0
}

// fn_8009DAC4
void f_8009DAC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009DAC4
  c->r[0]=c->lr; // 8009DAC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009DACC
  c->r[4]=R32(c->r[3]+0x00000098u); // 8009DAD0
  cmps(c,0,(int32_t)c->r[4],0); // 8009DAD4
  if (crb(c,1)) { goto L_8009DAE4; } // 8009DAD8
  c->r[3]=0u+0x00000000u; // 8009DADC
  goto L_8009DB50; // 8009DAE0
L_8009DAE4:;
  c->r[0]=R8(c->r[3]+0x000000A0u); // 8009DAE4
  cmps(c,0,(int32_t)c->r[0],0); // 8009DAE8
  if (!crb(c,2)) { goto L_8009DB44; } // 8009DAEC
  c->r[4]=c->r[4]^0x80000000u; // 8009DAF0
  c->r[0]=0u+0x43300000u; // 8009DAF4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009DAF8
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[2]=RF64(ea);} // 8009DAFC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009DB00
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DB04
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8009DB08
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009DB0C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009DB10
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8009DB14
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8009DB18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009DB1C
  cmps(c,0,(int32_t)c->r[0],3); // 8009DB20
  W32(c->r[3]+0x00000098u,c->r[0]); // 8009DB24
  if (!crb(c,0)) { goto L_8009DB44; } // 8009DB28
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009DB2C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009DB30
  c->ctr=c->r[12]; // 8009DB34
  if (true) { c->lr=0x8009DB3Cu; dispatch(c,c->ctr); } // 8009DB38
  c->r[3]=0u+0x00000000u; // 8009DB3C
  goto L_8009DB50; // 8009DB40
L_8009DB44:;
  c->r[0]=0u+0x00000000u; // 8009DB44
  W8(c->r[3]+0x000000A0u,c->r[0]); // 8009DB48
  c->r[3]=0u+0x00000001u; // 8009DB4C
L_8009DB50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009DB50
  c->lr=c->r[0]; // 8009DB54
  c->r[1]=c->r[1]+0x00000020u; // 8009DB58
  return; // 8009DB5C
}

// fn_8009DB60
void f_8009DB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFA60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009DB60
  c->r[0]=c->lr; // 8009DB64
  W32(c->r[1]+0x000005A4u,c->r[0]); // 8009DB68
  {uint32_t ea=c->r[1]+0x00000590u; WF64(ea,c->f[31]);} // 8009DB6C
  {uint32_t ea=c->r[1]+0x00000598u; psq_store(c,31,ea,0,0);} // 8009DB70
  {uint32_t ea=c->r[1]+0x00000580u; WF64(ea,c->f[30]);} // 8009DB74
  {uint32_t ea=c->r[1]+0x00000588u; psq_store(c,30,ea,0,0);} // 8009DB78
  {uint32_t ea=c->r[1]+0x00000570u; WF64(ea,c->f[29]);} // 8009DB7C
  {uint32_t ea=c->r[1]+0x00000578u; psq_store(c,29,ea,0,0);} // 8009DB80
  {uint32_t ea=c->r[1]+0x00000560u; WF64(ea,c->f[28]);} // 8009DB84
  {uint32_t ea=c->r[1]+0x00000568u; psq_store(c,28,ea,0,0);} // 8009DB88
  {uint32_t ea=c->r[1]+0x00000550u; WF64(ea,c->f[27]);} // 8009DB8C
  {uint32_t ea=c->r[1]+0x00000558u; psq_store(c,27,ea,0,0);} // 8009DB90
  {uint32_t ea=c->r[1]+0x00000540u; WF64(ea,c->f[26]);} // 8009DB94
  {uint32_t ea=c->r[1]+0x00000548u; psq_store(c,26,ea,0,0);} // 8009DB98
  {uint32_t ea=c->r[1]+0x00000530u; WF64(ea,c->f[25]);} // 8009DB9C
  {uint32_t ea=c->r[1]+0x00000538u; psq_store(c,25,ea,0,0);} // 8009DBA0
  {uint32_t ea=c->r[1]+0x00000520u; WF64(ea,c->f[24]);} // 8009DBA4
  {uint32_t ea=c->r[1]+0x00000528u; psq_store(c,24,ea,0,0);} // 8009DBA8
  c->r[11]=c->r[1]+0x00000520u; // 8009DBAC
  c->lr=0x8009DBB4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009DBB0
  c->r[4]=R32(c->r[3]+0x00000098u); // 8009DBB4
  c->r[0]=0u+0x43300000u; // 8009DBB8
  W32(c->r[1]+0x000004D0u,c->r[0]); // 8009DBBC
  c->r[26]=c->r[3]|c->r[3]; // 8009DBC0
  cmps(c,0,(int32_t)c->r[4],3); // 8009DBC4
  W32(c->r[1]+0x000004D8u,c->r[0]); // 8009DBC8
  if (crb(c,1)) { goto L_8009DBD8; } // 8009DBCC
  c->r[3]=0u+0x00000000u; // 8009DBD0
  goto L_8009E1DC; // 8009DBD4
L_8009DBD8:;
  c->r[5]=R32(c->r[3]+0x00000080u); // 8009DBD8
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 8009DBDC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8009DBE0
  c->r[4]=c->r[1]+0x00000020u; // 8009DBE4
  c->r[0]=c->r[5]+0x00000001u; // 8009DBE8
  c->r[12]=R32(c->r[3]+0x00000160u); // 8009DBEC
  c->r[27]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 8009DBF0
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009DBF4
  c->ctr=c->r[12]; // 8009DBF8
  if (true) { c->lr=0x8009DC00u; dispatch(c,c->ctr); } // 8009DBFC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009DC00
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 8009DC04
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009DC08
  c->r[31]=c->r[0]^0x80000000u; // 8009DC0C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DC10
  c->r[27]=0u+0x00000000u; // 8009DC14
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8009DC18
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[30]=RF64(ea);} // 8009DC1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8009DC20
  {uint32_t ea=c->r[2]+0xFFFF93A0u; c->f[31]=RF64(ea);} // 8009DC24
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009DC28
  {uint32_t ea=c->r[2]+0xFFFF9374u; c->f[24]=c->ps1[24]=RF32(ea);} // 8009DC2C
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[25]=c->ps1[25]=RF32(ea);} // 8009DC30
  {uint32_t ea=c->r[2]+0xFFFF938Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 8009DC34
  {uint32_t ea=c->r[2]+0xFFFF9390u; c->f[27]=c->ps1[27]=RF32(ea);} // 8009DC38
  {uint32_t ea=c->r[2]+0xFFFF9394u; c->f[28]=c->ps1[28]=RF32(ea);} // 8009DC3C
  {uint32_t ea=c->r[2]+0xFFFF9398u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009DC40
  c->r[28]=R32(c->r[1]+0x00000014u); // 8009DC44
  c->r[29]=R32(c->r[1]+0x00000018u); // 8009DC48
  c->r[30]=R32(c->r[1]+0x0000001Cu); // 8009DC4C
  goto L_8009E1C8; // 8009DC50
L_8009DC54:;
  cmps(c,0,(int32_t)c->r[27],0); // 8009DC54
  if (!crb(c,2)) { goto L_8009DC70; } // 8009DC58
  c->r[0]=0u+0x00000000u; // 8009DC5C
  c->r[3]=0u+0x00000000u; // 8009DC60
  c->r[5]=0u+0x00000001u; // 8009DC64
  c->r[4]=0u+0x00000001u; // 8009DC68
  goto L_8009DCA0; // 8009DC6C
L_8009DC70:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8009DC70
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 8009DC74
  if (!crb(c,2)) { goto L_8009DC90; } // 8009DC78
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8009DC7C
  c->r[3]=c->r[27]|c->r[27]; // 8009DC80
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 8009DC84
  c->r[4]=c->r[5]|c->r[5]; // 8009DC88
  goto L_8009DCA0; // 8009DC8C
L_8009DC90:;
  c->r[3]=c->r[27]|c->r[27]; // 8009DC90
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 8009DC94
  c->r[5]=c->r[27]+0x00000001u; // 8009DC98
  c->r[4]=c->r[27]+0x00000002u; // 8009DC9C
L_8009DCA0:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8009DCA0
  c->r[7]=c->r[1]+0x00000350u; // 8009DCA4
  c->r[12]=0u+0x00000000u; // 8009DCA8
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8009DCAC
  c->r[10]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8009DCB0
  c->r[11]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009DCB4
  goto L_8009DDD0; // 8009DCB8
L_8009DCBC:;
  c->r[3]=c->r[12]^0x80000000u; // 8009DCBC
  c->r[0]=c->r[0]^0x80000000u; // 8009DCC0
  W32(c->r[1]+0x000004D4u,c->r[3]); // 8009DCC4
  c->r[12]=c->r[12]+0x00000001u; // 8009DCC8
  c->r[6]=R32(c->r[26]+0x0000004Cu); // 8009DCCC
  W32(c->r[1]+0x000004DCu,c->r[0]); // 8009DCD0
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[1]=RF64(ea);} // 8009DCD4
  c->r[4]=c->r[6]+c->r[10]; // 8009DCD8
  {uint32_t ea=c->r[1]+0x000004D8u; c->f[0]=RF64(ea);} // 8009DCDC
  c->r[3]=c->r[6]+c->r[11]; // 8009DCE0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[30]); // 8009DCE4
  {uint32_t ea=c->r[6]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 8009DCE8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 8009DCEC
  {uint32_t ea=c->r[6]+c->r[10]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DCF0
  {uint32_t ea=c->r[6]+c->r[9]; c->f[6]=c->ps1[6]=RF32(ea);} // 8009DCF4
  c->r[5]=c->r[6]+c->r[9]; // 8009DCF8
  c->f[11]=c->ps1[11]=S(c->f[3]/c->f[2]); // 8009DCFC
  {uint32_t ea=c->r[6]+c->r[8]; c->f[7]=c->ps1[7]=RF32(ea); c->r[6]=ea;} // 8009DD00
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[11]); // 8009DD04
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[11]); // 8009DD08
  c->f[4]=c->ps1[4]=S(c->f[24]*c->f[10]); // 8009DD0C
  c->f[2]=c->ps1[2]=S(c->f[26]*c->f[10]); // 8009DD10
  c->f[8]=-c->f[9]; // 8009DD14
  c->f[3]=c->ps1[3]=S(c->f[25]*c->f[9]); // 8009DD18
  c->f[5]=c->ps1[5]=S(c->f[27]*c->f[9]); // 8009DD1C
  c->f[8]=c->ps1[8]=S(c->f[8]+c->f[4]); // 8009DD20
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8009DD24
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[10]); // 8009DD28
  c->f[3]=c->ps1[3]=S(c->f[8]-c->f[11]); // 8009DD2C
  c->f[2]=c->ps1[2]=S(c->f[24]+c->f[2]); // 8009DD30
  c->f[8]=c->ps1[8]=S(c->f[5]+c->f[4]); // 8009DD34
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[1]); // 8009DD38
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[0]); // 8009DD3C
  c->f[1]=c->ps1[1]=S(c->f[11]+c->f[8]); // 8009DD40
  c->f[0]=c->ps1[0]=S(c->f[9]-c->f[10]); // 8009DD44
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 8009DD48
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[6]); // 8009DD4C
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[7]); // 8009DD50
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 8009DD54
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[4]); // 8009DD58
  c->f[4]=c->ps1[4]=S(c->f[29]*c->f[4]); // 8009DD5C
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[4]);} // 8009DD60
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8009DD64
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009DD68
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 8009DD6C
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[5]); // 8009DD70
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 8009DD74
  {uint32_t ea=c->r[6]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 8009DD78
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[6]); // 8009DD7C
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 8009DD80
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 8009DD84
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[4]); // 8009DD88
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[4]); // 8009DD8C
  c->f[4]=c->ps1[4]=S(c->f[29]*c->f[4]); // 8009DD90
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[4]);} // 8009DD94
  {uint32_t ea=c->r[3]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8009DD98
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009DD9C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 8009DDA0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 8009DDA4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 8009DDA8
  {uint32_t ea=c->r[6]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009DDAC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 8009DDB0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[4]); // 8009DDB4
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[2]); // 8009DDB8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009DDBC
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 8009DDC0
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 8009DDC4
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 8009DDC8
  c->r[7]=c->r[7]+0x0000000Cu; // 8009DDCC
L_8009DDD0:;
  c->r[3]=R32(c->r[26]+0x00000080u); // 8009DDD0
  c->r[0]=c->r[3]+0x00000001u; // 8009DDD4
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 8009DDD8
  if (crb(c,0)) { IRQCHK(c); goto L_8009DCBC; } // 8009DDDC
  W32(c->r[1]+0x00000008u,c->r[28]); // 8009DDE0
  c->r[4]=c->r[1]+0x00000008u; // 8009DDE4
  c->r[5]=c->r[1]+0x00000350u; // 8009DDE8
  c->r[6]=c->r[1]+0x000001D0u; // 8009DDEC
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8009DDF0
  c->r[7]=c->r[1]+0x00000050u; // 8009DDF4
  W32(c->r[1]+0x00000010u,c->r[30]); // 8009DDF8
  c->r[3]=R32(c->r[26]+0x00000080u); // 8009DDFC
  {uint32_t ea=c->r[26]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009DE00
  c->r[3]=c->r[3]+0x00000001u; // 8009DE04
  c->lr=0x8009DE0Cu; f_80097830(c); // 8009DE08
  c->r[3]=c->r[1]+0x000001D0u; // 8009DE0C
  c->r[4]=c->r[1]+0x00000050u; // 8009DE10
  c->r[6]=0u+0x00000000u; // 8009DE14
  goto L_8009E1B4; // 8009DE18
L_8009DE1C:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[0]); // 8009DE1C
  W32(c->r[1]+0x000004DCu,c->r[31]); // 8009DE20
  c->r[5]=R32(c->r[26]+0x00000050u); // 8009DE24
  {uint32_t ea=c->r[1]+0x000004D8u; c->f[1]=RF64(ea);} // 8009DE28
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DE2C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 8009DE30
  c->r[9]=c->r[6]+c->r[0]; // 8009DE34
  c->r[0]=rotl(c->r[9],6)&0xFFFFFFC0u; // 8009DE38
  {uint32_t ea=c->r[5]+c->r[0]; WF32(ea,c->f[0]);} // 8009DE3C
  c->r[7]=c->r[9]^0x80000000u; // 8009DE40
  c->r[8]=c->r[5]+c->r[0]; // 8009DE44
  c->r[5]=rotl(c->r[9],1)&0xFFFFFFFEu; // 8009DE48
  W32(c->r[1]+0x000004D4u,c->r[7]); // 8009DE4C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DE50
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[2]=RF64(ea);} // 8009DE54
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[0]);} // 8009DE58
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[30]); // 8009DE5C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DE60
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[0]);} // 8009DE64
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[1]); // 8009DE68
  c->r[9]=R8(c->r[26]+0x00000054u); // 8009DE6C
  c->r[8]=R8(c->r[26]+0x00000058u); // 8009DE70
  W32(c->r[1]+0x000004D4u,c->r[9]); // 8009DE74
  c->r[7]=R32(c->r[26]+0x00000050u); // 8009DE78
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[1]=RF64(ea);} // 8009DE7C
  W32(c->r[1]+0x000004DCu,c->r[8]); // 8009DE80
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 8009DE84
  c->r[7]=c->r[7]+c->r[0]; // 8009DE88
  W32(c->r[1]+0x000004D4u,c->r[9]); // 8009DE8C
  {uint32_t ea=c->r[1]+0x000004D8u; c->f[2]=RF64(ea);} // 8009DE90
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[1]=RF64(ea);} // 8009DE94
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 8009DE98
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8009DE9C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009DEA0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009DEA4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009DEA8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8009DEAC
  {uint32_t ea=c->r[1]+0x000004E0u; WF64(ea,c->f[1]);} // 8009DEB0
  c->r[8]=R32(c->r[1]+0x000004E4u); // 8009DEB4
  W8(c->r[7]+0x0000000Cu,c->r[8]); // 8009DEB8
  c->r[9]=R8(c->r[26]+0x00000055u); // 8009DEBC
  c->r[8]=R8(c->r[26]+0x00000059u); // 8009DEC0
  W32(c->r[1]+0x000004DCu,c->r[9]); // 8009DEC4
  c->r[7]=R32(c->r[26]+0x00000050u); // 8009DEC8
  {uint32_t ea=c->r[1]+0x000004D8u; c->f[1]=RF64(ea);} // 8009DECC
  W32(c->r[1]+0x000004D4u,c->r[8]); // 8009DED0
  c->r[7]=c->r[7]+c->r[0]; // 8009DED4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 8009DED8
  W32(c->r[1]+0x000004DCu,c->r[9]); // 8009DEDC
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[2]=RF64(ea);} // 8009DEE0
  {uint32_t ea=c->r[1]+0x000004D8u; c->f[1]=RF64(ea);} // 8009DEE4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 8009DEE8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8009DEEC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009DEF0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009DEF4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009DEF8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8009DEFC
  {uint32_t ea=c->r[1]+0x000004E8u; WF64(ea,c->f[1]);} // 8009DF00
  c->r[8]=R32(c->r[1]+0x000004ECu); // 8009DF04
  W8(c->r[7]+0x0000000Du,c->r[8]); // 8009DF08
  c->r[9]=R8(c->r[26]+0x00000056u); // 8009DF0C
  c->r[8]=R8(c->r[26]+0x0000005Au); // 8009DF10
  W32(c->r[1]+0x000004D4u,c->r[9]); // 8009DF14
  c->r[7]=R32(c->r[26]+0x00000050u); // 8009DF18
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[1]=RF64(ea);} // 8009DF1C
  W32(c->r[1]+0x000004DCu,c->r[8]); // 8009DF20
  c->r[7]=c->r[7]+c->r[0]; // 8009DF24
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 8009DF28
  W32(c->r[1]+0x000004D4u,c->r[9]); // 8009DF2C
  {uint32_t ea=c->r[1]+0x000004D8u; c->f[2]=RF64(ea);} // 8009DF30
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[1]=RF64(ea);} // 8009DF34
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 8009DF38
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8009DF3C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009DF40
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009DF44
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009DF48
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8009DF4C
  {uint32_t ea=c->r[1]+0x000004F0u; WF64(ea,c->f[1]);} // 8009DF50
  c->r[8]=R32(c->r[1]+0x000004F4u); // 8009DF54
  W8(c->r[7]+0x0000000Eu,c->r[8]); // 8009DF58
  c->r[10]=R8(c->r[26]+0x00000057u); // 8009DF5C
  c->r[7]=c->r[5]+0x00000001u; // 8009DF60
  c->r[9]=R8(c->r[26]+0x0000005Bu); // 8009DF64
  c->r[7]=rotl(c->r[7],5)&0xFFFFFFE0u; // 8009DF68
  W32(c->r[1]+0x000004DCu,c->r[10]); // 8009DF6C
  c->r[8]=R32(c->r[26]+0x00000050u); // 8009DF70
  {uint32_t ea=c->r[1]+0x000004D8u; c->f[1]=RF64(ea);} // 8009DF74
  W32(c->r[1]+0x000004D4u,c->r[9]); // 8009DF78
  c->r[8]=c->r[8]+c->r[0]; // 8009DF7C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 8009DF80
  W32(c->r[1]+0x000004DCu,c->r[10]); // 8009DF84
  {uint32_t ea=c->r[1]+0x000004D0u; c->f[2]=RF64(ea);} // 8009DF88
  {uint32_t ea=c->r[1]+0x000004D8u; c->f[1]=RF64(ea);} // 8009DF8C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 8009DF90
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8009DF94
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009DF98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009DF9C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009DFA0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8009DFA4
  {uint32_t ea=c->r[1]+0x000004F8u; WF64(ea,c->f[1]);} // 8009DFA8
  c->r[9]=R32(c->r[1]+0x000004FCu); // 8009DFAC
  W8(c->r[8]+0x0000000Fu,c->r[9]); // 8009DFB0
  c->r[8]=R32(c->r[26]+0x00000050u); // 8009DFB4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009DFB8
  {uint32_t ea=c->r[7]+c->r[8]; WF32(ea,c->f[1]); c->r[7]=ea;} // 8009DFBC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009DFC0
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[1]);} // 8009DFC4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009DFC8
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 8009DFCC
  c->r[7]=R32(c->r[26]+0x00000050u); // 8009DFD0
  c->r[8]=c->r[7]+c->r[0]; // 8009DFD4
  c->r[7]=R8(c->r[8]+0x0000000Cu); // 8009DFD8
  W8(c->r[8]+0x0000002Cu,c->r[7]); // 8009DFDC
  c->r[7]=R32(c->r[26]+0x00000050u); // 8009DFE0
  c->r[8]=c->r[7]+c->r[0]; // 8009DFE4
  c->r[7]=R8(c->r[8]+0x0000000Du); // 8009DFE8
  W8(c->r[8]+0x0000002Du,c->r[7]); // 8009DFEC
  c->r[7]=R32(c->r[26]+0x00000050u); // 8009DFF0
  c->r[8]=c->r[7]+c->r[0]; // 8009DFF4
  c->r[7]=R8(c->r[8]+0x0000000Eu); // 8009DFF8
  W8(c->r[8]+0x0000002Eu,c->r[7]); // 8009DFFC
  c->r[7]=R32(c->r[26]+0x00000050u); // 8009E000
  c->r[7]=c->r[7]+c->r[0]; // 8009E004
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 8009E008
  W8(c->r[7]+0x0000002Fu,c->r[0]); // 8009E00C
  c->r[0]=R8(c->r[26]+0x000000A1u); // 8009E010
  cmps(c,0,(int32_t)c->r[0],0); // 8009E014
  if (crb(c,2)) { goto L_8009E0E4; } // 8009E018
  {uint32_t ea=c->r[26]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E01C
  c->r[7]=rotl(c->r[5],5)&0xFFFFFFE0u; // 8009E020
  {uint32_t ea=c->r[26]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E024
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E028
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E02C
  c->r[5]=c->r[0]+c->r[7]; // 8009E030
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009E034
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009E038
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 8009E03C
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E040
  {uint32_t ea=c->r[26]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E044
  c->r[5]=c->r[0]+c->r[7]; // 8009E048
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[1]);} // 8009E04C
  {uint32_t ea=c->r[26]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E050
  {uint32_t ea=c->r[26]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E054
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E058
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E05C
  c->r[5]=c->r[0]+c->r[7]; // 8009E060
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009E064
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009E068
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[1]);} // 8009E06C
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E070
  {uint32_t ea=c->r[26]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E074
  c->r[5]=c->r[0]+c->r[7]; // 8009E078
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[1]);} // 8009E07C
  {uint32_t ea=c->r[26]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E080
  {uint32_t ea=c->r[26]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E084
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E088
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E08C
  c->r[5]=c->r[0]+c->r[7]; // 8009E090
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009E094
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009E098
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8009E09C
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E0A0
  {uint32_t ea=c->r[26]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E0A4
  c->r[5]=c->r[0]+c->r[7]; // 8009E0A8
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[1]);} // 8009E0AC
  {uint32_t ea=c->r[26]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E0B0
  {uint32_t ea=c->r[26]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E0B4
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E0B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E0BC
  c->r[5]=c->r[0]+c->r[7]; // 8009E0C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009E0C4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8009E0C8
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[0]);} // 8009E0CC
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E0D0
  {uint32_t ea=c->r[26]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E0D4
  c->r[5]=c->r[0]+c->r[7]; // 8009E0D8
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009E0DC
  goto L_8009E1A8; // 8009E0E0
L_8009E0E4:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E0E4
  c->r[7]=rotl(c->r[5],5)&0xFFFFFFE0u; // 8009E0E8
  {uint32_t ea=c->r[26]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E0EC
  c->r[5]=c->r[0]+c->r[7]; // 8009E0F0
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[1]);} // 8009E0F4
  {uint32_t ea=c->r[26]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E0F8
  {uint32_t ea=c->r[26]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E0FC
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E100
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E104
  c->r[5]=c->r[0]+c->r[7]; // 8009E108
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009E10C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009E110
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[1]);} // 8009E114
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E118
  {uint32_t ea=c->r[26]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E11C
  c->r[5]=c->r[0]+c->r[7]; // 8009E120
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[1]);} // 8009E124
  {uint32_t ea=c->r[26]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E128
  {uint32_t ea=c->r[26]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E12C
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E130
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E134
  c->r[5]=c->r[0]+c->r[7]; // 8009E138
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009E13C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009E140
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[1]);} // 8009E144
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E148
  {uint32_t ea=c->r[26]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E14C
  c->r[5]=c->r[0]+c->r[7]; // 8009E150
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 8009E154
  {uint32_t ea=c->r[26]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E158
  {uint32_t ea=c->r[26]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E15C
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E160
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E164
  c->r[5]=c->r[0]+c->r[7]; // 8009E168
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009E16C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009E170
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[1]);} // 8009E174
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E178
  {uint32_t ea=c->r[26]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E17C
  c->r[5]=c->r[0]+c->r[7]; // 8009E180
  {uint32_t ea=c->r[5]+0x00000038u; WF32(ea,c->f[1]);} // 8009E184
  {uint32_t ea=c->r[26]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E188
  {uint32_t ea=c->r[26]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E18C
  c->r[0]=R32(c->r[26]+0x00000050u); // 8009E190
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E194
  c->r[5]=c->r[0]+c->r[7]; // 8009E198
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009E19C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8009E1A0
  {uint32_t ea=c->r[5]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009E1A4
L_8009E1A8:;
  c->r[3]=c->r[3]+0x0000000Cu; // 8009E1A8
  c->r[4]=c->r[4]+0x0000000Cu; // 8009E1AC
  c->r[6]=c->r[6]+0x00000001u; // 8009E1B0
L_8009E1B4:;
  c->r[5]=R32(c->r[26]+0x00000080u); // 8009E1B4
  c->r[0]=c->r[5]+0x00000001u; // 8009E1B8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8009E1BC
  if (crb(c,0)) { IRQCHK(c); goto L_8009DE1C; } // 8009E1C0
  c->r[27]=c->r[27]+0x00000001u; // 8009E1C4
L_8009E1C8:;
  c->r[3]=R32(c->r[26]+0x00000098u); // 8009E1C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009E1CC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 8009E1D0
  if (crb(c,0)) { IRQCHK(c); goto L_8009DC54; } // 8009E1D4
  c->r[3]=0u+0x00000001u; // 8009E1D8
L_8009E1DC:;
  {uint32_t ea=c->r[1]+0x00000598u; psq_load(c,31,ea,0,0);} // 8009E1DC
  {uint32_t ea=c->r[1]+0x00000590u; c->f[31]=RF64(ea);} // 8009E1E0
  {uint32_t ea=c->r[1]+0x00000588u; psq_load(c,30,ea,0,0);} // 8009E1E4
  {uint32_t ea=c->r[1]+0x00000580u; c->f[30]=RF64(ea);} // 8009E1E8
  {uint32_t ea=c->r[1]+0x00000578u; psq_load(c,29,ea,0,0);} // 8009E1EC
  {uint32_t ea=c->r[1]+0x00000570u; c->f[29]=RF64(ea);} // 8009E1F0
  {uint32_t ea=c->r[1]+0x00000568u; psq_load(c,28,ea,0,0);} // 8009E1F4
  {uint32_t ea=c->r[1]+0x00000560u; c->f[28]=RF64(ea);} // 8009E1F8
  {uint32_t ea=c->r[1]+0x00000558u; psq_load(c,27,ea,0,0);} // 8009E1FC
  {uint32_t ea=c->r[1]+0x00000550u; c->f[27]=RF64(ea);} // 8009E200
  {uint32_t ea=c->r[1]+0x00000548u; psq_load(c,26,ea,0,0);} // 8009E204
  {uint32_t ea=c->r[1]+0x00000540u; c->f[26]=RF64(ea);} // 8009E208
  {uint32_t ea=c->r[1]+0x00000538u; psq_load(c,25,ea,0,0);} // 8009E20C
  {uint32_t ea=c->r[1]+0x00000530u; c->f[25]=RF64(ea);} // 8009E210
  {uint32_t ea=c->r[1]+0x00000528u; psq_load(c,24,ea,0,0);} // 8009E214
  c->r[11]=c->r[1]+0x00000520u; // 8009E218
  {uint32_t ea=c->r[1]+0x00000520u; c->f[24]=RF64(ea);} // 8009E21C
  c->lr=0x8009E224u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009E220
  c->r[0]=R32(c->r[1]+0x000005A4u); // 8009E224
  c->lr=c->r[0]; // 8009E228
  c->r[1]=c->r[1]+0x000005A0u; // 8009E22C
  return; // 8009E230
}

// fn_8009E234
void f_8009E234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E234
  c->r[0]=c->lr; // 8009E238
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009E23C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009E240
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009E244
  c->r[30]=c->r[3]|c->r[3]; // 8009E248
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009E24C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009E250
  c->ctr=c->r[12]; // 8009E254
  if (true) { c->lr=0x8009E25Cu; dispatch(c,c->ctr); } // 8009E258
  cmps(c,0,(int32_t)c->r[3],0); // 8009E25C
  if (!crb(c,2)) { goto L_8009E26C; } // 8009E260
  c->r[3]=0u+0x00000000u; // 8009E264
  goto L_8009E2E0; // 8009E268
L_8009E26C:;
  c->r[4]=R32(c->r[30]+0x00000098u); // 8009E26C
  cmps(c,0,(int32_t)c->r[4],3); // 8009E270
  if (crb(c,1)) { goto L_8009E280; } // 8009E274
  c->r[3]=0u+0x00000000u; // 8009E278
  goto L_8009E2E0; // 8009E27C
L_8009E280:;
  c->r[3]=R32(c->r[30]+0x00000080u); // 8009E280
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8009E284
  {uint32_t ea=c->r[30]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E288
  c->r[0]=c->r[3]+0x00000001u; // 8009E28C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8009E290
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8009E294
  {uint32_t ea=c->r[30]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E298
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8009E29C
  c->r[31]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8009E2A0
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 8009E2A4
  c->r[4]=R32(c->r[30]+0x00000060u); // 8009E2A8
  c->r[5]=R32(c->r[30]+0x00000064u); // 8009E2AC
  c->lr=0x8009E2B4u; f_800E724C(c); // 8009E2B0
  {uint32_t ea=c->r[2]+0xFFFF937Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E2B4
  c->r[3]=c->r[1]+0x00000008u; // 8009E2B8
  c->lr=0x8009E2C0u; f_800E72A0(c); // 8009E2BC
  c->r[3]=R32(c->r[30]+0x00000000u); // 8009E2C0
  c->r[6]=c->r[31]|c->r[31]; // 8009E2C4
  c->r[4]=R32(c->r[30]+0x00000050u); // 8009E2C8
  c->r[5]=0u+0x00000098u; // 8009E2CC
  c->r[7]=R32(c->r[30]+0x00000068u); // 8009E2D0
  c->lr=0x8009E2D8u; f_800E7584(c); // 8009E2D4
  c->lr=0x8009E2DCu; f_800E7714(c); // 8009E2D8
  c->r[3]=0u+0x00000001u; // 8009E2DC
L_8009E2E0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009E2E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009E2E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009E2E8
  c->lr=c->r[0]; // 8009E2EC
  c->r[1]=c->r[1]+0x00000020u; // 8009E2F0
  return; // 8009E2F4
}

// fn_8009E2F8
void f_8009E2F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E2F8
  c->r[0]=0u+0x00000000u; // 8009E2FC
  {uint32_t ea=c->r[2]+0xFFFF9374u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E300
  {uint32_t ea=c->r[2]+0xFFFF937Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E304
  W32(c->r[3]+0x00000058u,c->r[0]); // 8009E308
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 8009E30C
  W32(c->r[3]+0x00000084u,c->r[0]); // 8009E310
  W32(c->r[3]+0x00000088u,c->r[0]); // 8009E314
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[2]);} // 8009E318
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 8009E31C
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009E320
  W32(c->r[3]+0x00000094u,c->r[0]); // 8009E324
  W32(c->r[3]+0x00000098u,c->r[0]); // 8009E328
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8009E32C
  return; // 8009E330
}

// fn_8009E334
void f_8009E334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E334
  c->r[0]=c->lr; // 8009E338
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009E33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009E340
  c->r[31]=c->r[3]|c->r[3]; // 8009E344
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009E348
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009E34C
  c->ctr=c->r[12]; // 8009E350
  if (true) { c->lr=0x8009E358u; dispatch(c,c->ctr); } // 8009E354
  c->r[0]=0u+0x00000000u; // 8009E358
  W32(c->r[31]+0x00000058u,c->r[0]); // 8009E35C
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8009E360
  W32(c->r[31]+0x00000094u,c->r[0]); // 8009E364
  W32(c->r[31]+0x00000098u,c->r[0]); // 8009E368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009E36C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009E370
  c->lr=c->r[0]; // 8009E374
  c->r[1]=c->r[1]+0x00000010u; // 8009E378
  return; // 8009E37C
}

// fn_8009E380
void f_8009E380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E380
  c->r[0]=c->lr; // 8009E384
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009E388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009E38C
  c->r[31]=c->r[3]|c->r[3]; // 8009E390
  c->r[0]=R32(c->r[3]+0x00000058u); // 8009E394
  cmps(c,0,(int32_t)c->r[0],0); // 8009E398
  if (!crb(c,2)) { goto L_8009E40C; } // 8009E39C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8009E3A0
  cmps(c,0,(int32_t)c->r[0],0); // 8009E3A4
  if (!crb(c,2)) { goto L_8009E40C; } // 8009E3A8
  cmps(c,0,(int32_t)c->r[4],128); // 8009E3AC
  W32(c->r[3]+0x00000084u,c->r[4]); // 8009E3B0
  if (!crb(c,1)) { goto L_8009E3C0; } // 8009E3B4
  c->r[0]=0u+0x00000080u; // 8009E3B8
  W32(c->r[3]+0x00000084u,c->r[0]); // 8009E3BC
L_8009E3C0:;
  cmps(c,0,(int32_t)c->r[5],32); // 8009E3C0
  W32(c->r[3]+0x00000088u,c->r[5]); // 8009E3C4
  if (!crb(c,1)) { goto L_8009E3D4; } // 8009E3C8
  c->r[0]=0u+0x00000020u; // 8009E3CC
  W32(c->r[3]+0x00000088u,c->r[0]); // 8009E3D0
L_8009E3D4:;
  c->lr=0x8009E3D8u; f_80098038(c); // 8009E3D4
  c->r[0]=R32(c->r[31]+0x00000084u); // 8009E3D8
  W32(c->r[31]+0x00000058u,c->r[3]); // 8009E3DC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8009E3E0
  c->lr=0x8009E3E8u; f_80098028(c); // 8009E3E4
  c->lr=0x8009E3ECu; f_80098038(c); // 8009E3E8
  c->r[5]=R32(c->r[31]+0x00000084u); // 8009E3EC
  c->r[4]=R32(c->r[31]+0x00000088u); // 8009E3F0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8009E3F4
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 8009E3F8
  c->r[0]=c->r[4]+0x00000001u; // 8009E3FC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 8009E400
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8009E404
  c->lr=0x8009E40Cu; f_80098028(c); // 8009E408
L_8009E40C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009E40C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009E410
  c->lr=c->r[0]; // 8009E414
  c->r[1]=c->r[1]+0x00000010u; // 8009E418
  return; // 8009E41C
}

// fn_8009E420
void f_8009E420(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],128); // 8009E420
  W32(c->r[3]+0x00000084u,c->r[4]); // 8009E424
  if (!crb(c,1)) { goto L_8009E434; } // 8009E428
  c->r[0]=0u+0x00000080u; // 8009E42C
  W32(c->r[3]+0x00000084u,c->r[0]); // 8009E430
L_8009E434:;
  cmps(c,0,(int32_t)c->r[5],32); // 8009E434
  W32(c->r[3]+0x00000088u,c->r[5]); // 8009E438
  if (!crb(c,1)) { goto L_8009E448; } // 8009E43C
  c->r[0]=0u+0x00000020u; // 8009E440
  W32(c->r[3]+0x00000088u,c->r[0]); // 8009E444
L_8009E448:;
  W32(c->r[3]+0x00000058u,c->r[6]); // 8009E448
  W32(c->r[3]+0x0000005Cu,c->r[7]); // 8009E44C
  return; // 8009E450
}

// fn_8009E454
void f_8009E454(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E454
  c->r[0]=c->lr; // 8009E458
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009E45C
  c->r[11]=c->r[1]+0x00000030u; // 8009E460
  c->lr=0x8009E468u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009E464
  c->r[25]=R8(c->r[4]+0x00000000u); // 8009E468
  c->r[26]=R8(c->r[4]+0x00000001u); // 8009E46C
  c->r[27]=R8(c->r[4]+0x00000002u); // 8009E470
  c->r[29]=c->r[25]|c->r[25]; // 8009E474
  c->r[28]=R8(c->r[4]+0x00000003u); // 8009E478
  c->r[30]=c->r[26]|c->r[26]; // 8009E47C
  c->r[31]=c->r[27]|c->r[27]; // 8009E480
  c->r[11]=c->r[25]|c->r[25]; // 8009E484
  c->r[12]=c->r[28]|c->r[28]; // 8009E488
  c->r[10]=c->r[26]|c->r[26]; // 8009E48C
  c->r[9]=c->r[27]|c->r[27]; // 8009E490
  c->r[8]=c->r[28]|c->r[28]; // 8009E494
  c->r[7]=c->r[25]|c->r[25]; // 8009E498
  c->r[6]=c->r[26]|c->r[26]; // 8009E49C
  c->r[5]=c->r[27]|c->r[27]; // 8009E4A0
  c->r[0]=c->r[28]|c->r[28]; // 8009E4A4
  W8(c->r[3]+0x00000068u,c->r[11]); // 8009E4A8
  c->r[11]=c->r[1]+0x00000030u; // 8009E4AC
  W8(c->r[3]+0x00000060u,c->r[25]); // 8009E4B0
  W8(c->r[3]+0x00000061u,c->r[26]); // 8009E4B4
  W8(c->r[3]+0x00000062u,c->r[27]); // 8009E4B8
  W8(c->r[3]+0x00000063u,c->r[28]); // 8009E4BC
  W8(c->r[3]+0x00000064u,c->r[29]); // 8009E4C0
  W8(c->r[3]+0x00000065u,c->r[30]); // 8009E4C4
  W8(c->r[3]+0x00000066u,c->r[31]); // 8009E4C8
  W8(c->r[3]+0x00000067u,c->r[12]); // 8009E4CC
  W8(c->r[3]+0x00000069u,c->r[10]); // 8009E4D0
  W8(c->r[3]+0x0000006Au,c->r[9]); // 8009E4D4
  W8(c->r[3]+0x0000006Bu,c->r[8]); // 8009E4D8
  W8(c->r[3]+0x0000006Cu,c->r[7]); // 8009E4DC
  W8(c->r[3]+0x0000006Du,c->r[6]); // 8009E4E0
  W8(c->r[3]+0x0000006Eu,c->r[5]); // 8009E4E4
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 8009E4E8
  c->lr=0x8009E4F0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009E4EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009E4F0
  c->lr=c->r[0]; // 8009E4F4
  c->r[1]=c->r[1]+0x00000030u; // 8009E4F8
  return; // 8009E4FC
}

// fn_8009E500
void f_8009E500(Ctx* __restrict c) {
  c->r[0]=R8(c->r[4]+0x00000000u); // 8009E500
  W8(c->r[3]+0x00000060u,c->r[0]); // 8009E504
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009E508
  W8(c->r[3]+0x00000061u,c->r[0]); // 8009E50C
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009E510
  W8(c->r[3]+0x00000062u,c->r[0]); // 8009E514
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009E518
  W8(c->r[3]+0x00000063u,c->r[0]); // 8009E51C
  c->r[0]=R8(c->r[4]+0x00000004u); // 8009E520
  W8(c->r[3]+0x00000064u,c->r[0]); // 8009E524
  c->r[0]=R8(c->r[4]+0x00000005u); // 8009E528
  W8(c->r[3]+0x00000065u,c->r[0]); // 8009E52C
  c->r[0]=R8(c->r[4]+0x00000006u); // 8009E530
  W8(c->r[3]+0x00000066u,c->r[0]); // 8009E534
  c->r[0]=R8(c->r[4]+0x00000007u); // 8009E538
  W8(c->r[3]+0x00000067u,c->r[0]); // 8009E53C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8009E540
  W8(c->r[3]+0x00000068u,c->r[0]); // 8009E544
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009E548
  W8(c->r[3]+0x00000069u,c->r[0]); // 8009E54C
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009E550
  W8(c->r[3]+0x0000006Au,c->r[0]); // 8009E554
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009E558
  W8(c->r[3]+0x0000006Bu,c->r[0]); // 8009E55C
  c->r[0]=R8(c->r[4]+0x00000004u); // 8009E560
  W8(c->r[3]+0x0000006Cu,c->r[0]); // 8009E564
  c->r[0]=R8(c->r[4]+0x00000005u); // 8009E568
  W8(c->r[3]+0x0000006Du,c->r[0]); // 8009E56C
  c->r[0]=R8(c->r[4]+0x00000006u); // 8009E570
  W8(c->r[3]+0x0000006Eu,c->r[0]); // 8009E574
  c->r[0]=R8(c->r[4]+0x00000007u); // 8009E578
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 8009E57C
  return; // 8009E580
}

// fn_8009E584
void f_8009E584(Ctx* __restrict c) {
  c->r[0]=R8(c->r[4]+0x00000000u); // 8009E584
  W8(c->r[3]+0x00000060u,c->r[0]); // 8009E588
  c->r[0]=R8(c->r[4]+0x00000001u); // 8009E58C
  W8(c->r[3]+0x00000061u,c->r[0]); // 8009E590
  c->r[0]=R8(c->r[4]+0x00000002u); // 8009E594
  W8(c->r[3]+0x00000062u,c->r[0]); // 8009E598
  c->r[0]=R8(c->r[4]+0x00000003u); // 8009E59C
  W8(c->r[3]+0x00000063u,c->r[0]); // 8009E5A0
  c->r[0]=R8(c->r[4]+0x00000004u); // 8009E5A4
  W8(c->r[3]+0x00000064u,c->r[0]); // 8009E5A8
  c->r[0]=R8(c->r[4]+0x00000005u); // 8009E5AC
  W8(c->r[3]+0x00000065u,c->r[0]); // 8009E5B0
  c->r[0]=R8(c->r[4]+0x00000006u); // 8009E5B4
  W8(c->r[3]+0x00000066u,c->r[0]); // 8009E5B8
  c->r[0]=R8(c->r[4]+0x00000007u); // 8009E5BC
  W8(c->r[3]+0x00000067u,c->r[0]); // 8009E5C0
  c->r[0]=R8(c->r[5]+0x00000000u); // 8009E5C4
  W8(c->r[3]+0x00000068u,c->r[0]); // 8009E5C8
  c->r[0]=R8(c->r[5]+0x00000001u); // 8009E5CC
  W8(c->r[3]+0x00000069u,c->r[0]); // 8009E5D0
  c->r[0]=R8(c->r[5]+0x00000002u); // 8009E5D4
  W8(c->r[3]+0x0000006Au,c->r[0]); // 8009E5D8
  c->r[0]=R8(c->r[5]+0x00000003u); // 8009E5DC
  W8(c->r[3]+0x0000006Bu,c->r[0]); // 8009E5E0
  c->r[0]=R8(c->r[5]+0x00000004u); // 8009E5E4
  W8(c->r[3]+0x0000006Cu,c->r[0]); // 8009E5E8
  c->r[0]=R8(c->r[5]+0x00000005u); // 8009E5EC
  W8(c->r[3]+0x0000006Du,c->r[0]); // 8009E5F0
  c->r[0]=R8(c->r[5]+0x00000006u); // 8009E5F4
  W8(c->r[3]+0x0000006Eu,c->r[0]); // 8009E5F8
  c->r[0]=R8(c->r[5]+0x00000007u); // 8009E5FC
  W8(c->r[3]+0x0000006Fu,c->r[0]); // 8009E600
  return; // 8009E604
}

// fn_8009E608
void f_8009E608(Ctx* __restrict c) {
  W32(c->r[3]+0x00000070u,c->r[4]); // 8009E608
  return; // 8009E60C
}

// fn_8009E610
void f_8009E610(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E610
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 8009E614
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E618
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 8009E61C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E620
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 8009E624
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E628
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 8009E62C
  W32(c->r[3]+0x000000A4u,c->r[5]); // 8009E630
  return; // 8009E634
}

// fn_8009E638
void f_8009E638(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E638
  c->r[4]=c->r[4]^0x80000000u; // 8009E63C
  c->r[0]=0u+0x43300000u; // 8009E640
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=RF64(ea);} // 8009E644
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009E648
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009E64C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8009E650
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009E654
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 8009E658
  c->r[1]=c->r[1]+0x00000010u; // 8009E65C
  return; // 8009E660
}

// fn_8009E664
void f_8009E664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E664
  c->r[4]=c->r[4]^0x80000000u; // 8009E668
  c->r[0]=0u+0x43300000u; // 8009E66C
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=RF64(ea);} // 8009E670
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009E674
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009E678
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8009E67C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009E680
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 8009E684
  c->r[1]=c->r[1]+0x00000010u; // 8009E688
  return; // 8009E68C
}

// fn_8009E690
void f_8009E690(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000098u); // 8009E690
  c->r[0]=0u-c->r[3]; // 8009E694
  c->r[0]=c->r[0]&~c->r[3]; // 8009E698
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8009E69C
  return; // 8009E6A0
}

// fn_8009E6A4
void f_8009E6A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF937Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E6A4
  c->r[0]=0u+0x00000000u; // 8009E6A8
  W32(c->r[3]+0x00000094u,c->r[0]); // 8009E6AC
  W32(c->r[3]+0x00000098u,c->r[0]); // 8009E6B0
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009E6B4
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8009E6B8
  return; // 8009E6BC
}

// fn_8009E6C0
void f_8009E6C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8009E6C0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009E6C4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009E6C8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E6CC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E6D0
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E6D4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[5]);} // 8009E6D8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[4]);} // 8009E6DC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[3]);} // 8009E6E0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[2]);} // 8009E6E4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 8009E6E8
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 8009E6EC
  return; // 8009E6F0
}

// fn_8009E6F4
void f_8009E6F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E6F4
  c->r[0]=c->lr; // 8009E6F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009E6FC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8009E700
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8009E704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009E708
  c->r[31]=c->r[3]|c->r[3]; // 8009E70C
  c->lr=0x8009E714u; f_800076EC(c); // 8009E710
  c->f[31]=c->f[1]; // 8009E714
  c->lr=0x8009E71Cu; f_80013AA4(c); // 8009E718
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[31]); // 8009E71C
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E720
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E724
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8009E728
  fcmp(c,0,c->f[1],c->f[0]); // 8009E72C
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[1]);} // 8009E730
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009E734
  if (!crb(c,2)) { goto L_8009E8F4; } // 8009E738
  c->r[3]=R32(c->r[31]+0x00000094u); // 8009E73C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009E740
  c->r[5]=R32(c->r[31]+0x00000084u); // 8009E744
  c->r[6]=c->r[3]+0x00000001u; // 8009E748
  c->r[3]=R32(c->r[31]+0x00000098u); // 8009E74C
  c->r[4]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 8009E750
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009E754
  c->r[0]=c->r[3]+0x00000001u; // 8009E758
  W32(c->r[31]+0x00000098u,c->r[0]); // 8009E75C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8009E760
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 8009E764
  c->r[0]=c->r[6]-c->r[0]; // 8009E768
  W32(c->r[31]+0x00000094u,c->r[0]); // 8009E76C
  if (!crb(c,1)) { goto L_8009E778; } // 8009E770
  W32(c->r[31]+0x00000098u,c->r[5]); // 8009E774
L_8009E778:;
  c->r[3]=R32(c->r[31]+0x00000098u); // 8009E778
  c->r[9]=c->r[3]+0xFFFFFFFFu; // 8009E77C
  cmps(c,0,(int32_t)c->r[9],1); // 8009E780
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 8009E784
  c->r[3]=c->r[9]|c->r[9]; // 8009E788
  if (crb(c,0)) { goto L_8009E8F4; } // 8009E78C
  c->r[0]=rotl(c->r[9],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 8009E790
  c->ctr=c->r[0]; // 8009E794
  if (crb(c,2)) { goto L_8009E880; } // 8009E798
L_8009E79C:;
  c->r[0]=c->r[9]+0xFFFFFFFFu; // 8009E79C
  c->r[8]=R32(c->r[31]+0x00000058u); // 8009E7A0
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009E7A4
  c->r[4]=c->r[8]+c->r[7]; // 8009E7A8
  c->r[0]=c->r[9]+0xFFFFFFFEu; // 8009E7AC
  {uint32_t ea=c->r[8]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E7B0
  c->r[5]=c->r[8]+c->r[6]; // 8009E7B4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009E7B8
  {uint32_t ea=c->r[8]+c->r[7]; WF32(ea,c->f[0]);} // 8009E7BC
  c->r[7]=c->r[7]+0xFFFFFFF4u; // 8009E7C0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E7C4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009E7C8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E7CC
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009E7D0
  c->r[0]=R32(c->r[31]+0x00000084u); // 8009E7D4
  c->r[8]=R32(c->r[31]+0x00000058u); // 8009E7D8
  c->r[5]=c->r[9]+c->r[0]; // 8009E7DC
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 8009E7E0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8009E7E4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009E7E8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8009E7EC
  {uint32_t ea=c->r[8]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E7F0
  c->r[5]=c->r[8]+c->r[4]; // 8009E7F4
  {uint32_t ea=c->r[8]+c->r[0]; WF32(ea,c->f[0]);} // 8009E7F8
  c->r[4]=c->r[8]+c->r[0]; // 8009E7FC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E800
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009E804
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E808
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009E80C
  c->r[8]=R32(c->r[31]+0x00000058u); // 8009E810
  {uint32_t ea=c->r[8]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E814
  c->r[5]=c->r[8]+c->r[6]; // 8009E818
  c->r[4]=c->r[8]+c->r[7]; // 8009E81C
  {uint32_t ea=c->r[8]+c->r[7]; WF32(ea,c->f[0]);} // 8009E820
  c->r[7]=c->r[7]+0xFFFFFFF4u; // 8009E824
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E828
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009E82C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E830
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009E834
  c->r[0]=R32(c->r[31]+0x00000084u); // 8009E838
  c->r[8]=R32(c->r[31]+0x00000058u); // 8009E83C
  c->r[5]=c->r[9]+c->r[0]; // 8009E840
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 8009E844
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8009E848
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009E84C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8009E850
  {uint32_t ea=c->r[8]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E854
  c->r[5]=c->r[8]+c->r[4]; // 8009E858
  {uint32_t ea=c->r[8]+c->r[0]; WF32(ea,c->f[0]);} // 8009E85C
  c->r[4]=c->r[8]+c->r[0]; // 8009E860
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E864
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009E868
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E86C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009E870
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009E79C; } // 8009E874
  c->r[3]=c->r[3]&0x00000001u; cr0(c,c->r[3]); // 8009E878
  if (crb(c,2)) { goto L_8009E8F4; } // 8009E87C
L_8009E880:;
  c->ctr=c->r[3]; // 8009E880
L_8009E884:;
  c->r[0]=c->r[9]+0xFFFFFFFFu; // 8009E884
  c->r[8]=R32(c->r[31]+0x00000058u); // 8009E888
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009E88C
  c->r[4]=c->r[8]+c->r[7]; // 8009E890
  {uint32_t ea=c->r[8]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E894
  c->r[5]=c->r[8]+c->r[6]; // 8009E898
  {uint32_t ea=c->r[8]+c->r[7]; WF32(ea,c->f[0]);} // 8009E89C
  c->r[7]=c->r[7]+0xFFFFFFF4u; // 8009E8A0
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E8A4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009E8A8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E8AC
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009E8B0
  c->r[0]=R32(c->r[31]+0x00000084u); // 8009E8B4
  c->r[8]=R32(c->r[31]+0x00000058u); // 8009E8B8
  c->r[5]=c->r[9]+c->r[0]; // 8009E8BC
  c->r[9]=c->r[9]+0xFFFFFFFFu; // 8009E8C0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8009E8C4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009E8C8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8009E8CC
  {uint32_t ea=c->r[8]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E8D0
  c->r[5]=c->r[8]+c->r[4]; // 8009E8D4
  {uint32_t ea=c->r[8]+c->r[0]; WF32(ea,c->f[0]);} // 8009E8D8
  c->r[4]=c->r[8]+c->r[0]; // 8009E8DC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E8E0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009E8E4
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E8E8
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009E8EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009E884; } // 8009E8F0
L_8009E8F4:;
  c->r[4]=R32(c->r[31]+0x00000058u); // 8009E8F4
  c->r[0]=0u+0x00000001u; // 8009E8F8
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E8FC
  c->r[3]=0u+0x00000001u; // 8009E900
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8009E904
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E908
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009E90C
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E910
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009E914
  c->r[4]=R32(c->r[31]+0x00000084u); // 8009E918
  c->r[5]=R32(c->r[31]+0x00000058u); // 8009E91C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E920
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8009E924
  {uint32_t ea=c->r[4]+c->r[5]; WF32(ea,c->f[0]); c->r[4]=ea;} // 8009E928
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E92C
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009E930
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E934
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009E938
  W32(c->r[31]+0x000000A0u,c->r[0]); // 8009E93C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8009E940
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8009E944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009E948
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009E94C
  c->lr=c->r[0]; // 8009E950
  c->r[1]=c->r[1]+0x00000020u; // 8009E954
  return; // 8009E958
}

// fn_8009E95C
void f_8009E95C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E95C
  c->r[0]=c->lr; // 8009E960
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009E964
  c->r[4]=R32(c->r[3]+0x00000098u); // 8009E968
  cmps(c,0,(int32_t)c->r[4],0); // 8009E96C
  if (crb(c,1)) { goto L_8009E97C; } // 8009E970
  c->r[3]=0u+0x00000000u; // 8009E974
  goto L_8009E9E8; // 8009E978
L_8009E97C:;
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8009E97C
  cmps(c,0,(int32_t)c->r[0],0); // 8009E980
  if (!crb(c,2)) { goto L_8009E9DC; } // 8009E984
  c->r[4]=c->r[4]^0x80000000u; // 8009E988
  c->r[0]=0u+0x43300000u; // 8009E98C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009E990
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[2]=RF64(ea);} // 8009E994
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009E998
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E99C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8009E9A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009E9A4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009E9A8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8009E9AC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8009E9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009E9B4
  cmps(c,0,(int32_t)c->r[0],3); // 8009E9B8
  W32(c->r[3]+0x00000098u,c->r[0]); // 8009E9BC
  if (!crb(c,0)) { goto L_8009E9DC; } // 8009E9C0
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009E9C4
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009E9C8
  c->ctr=c->r[12]; // 8009E9CC
  if (true) { c->lr=0x8009E9D4u; dispatch(c,c->ctr); } // 8009E9D0
  c->r[3]=0u+0x00000000u; // 8009E9D4
  goto L_8009E9E8; // 8009E9D8
L_8009E9DC:;
  c->r[0]=0u+0x00000000u; // 8009E9DC
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8009E9E0
  c->r[3]=0u+0x00000001u; // 8009E9E4
L_8009E9E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009E9E8
  c->lr=c->r[0]; // 8009E9EC
  c->r[1]=c->r[1]+0x00000020u; // 8009E9F0
  return; // 8009E9F4
}

// fn_8009E9F8
void f_8009E9F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E9F8
  c->r[0]=c->lr; // 8009E9FC
  W32(c->r[1]+0x00000184u,c->r[0]); // 8009EA00
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[31]);} // 8009EA04
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,31,ea,0,0);} // 8009EA08
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[30]);} // 8009EA0C
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,30,ea,0,0);} // 8009EA10
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[29]);} // 8009EA14
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,29,ea,0,0);} // 8009EA18
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[28]);} // 8009EA1C
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,28,ea,0,0);} // 8009EA20
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[27]);} // 8009EA24
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,27,ea,0,0);} // 8009EA28
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[26]);} // 8009EA2C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,26,ea,0,0);} // 8009EA30
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[25]);} // 8009EA34
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,25,ea,0,0);} // 8009EA38
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[24]);} // 8009EA3C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,24,ea,0,0);} // 8009EA40
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[23]);} // 8009EA44
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,23,ea,0,0);} // 8009EA48
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[22]);} // 8009EA4C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,22,ea,0,0);} // 8009EA50
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[21]);} // 8009EA54
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,21,ea,0,0);} // 8009EA58
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[20]);} // 8009EA5C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,20,ea,0,0);} // 8009EA60
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[19]);} // 8009EA64
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,19,ea,0,0);} // 8009EA68
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[18]);} // 8009EA6C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,18,ea,0,0);} // 8009EA70
  c->r[11]=c->r[1]+0x000000A0u; // 8009EA74
  c->lr=0x8009EA7Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009EA78
  c->r[5]=R32(c->r[3]+0x00000098u); // 8009EA7C
  c->r[0]=0u+0x43300000u; // 8009EA80
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009EA84
  cmps(c,0,(int32_t)c->r[5],3); // 8009EA88
  W32(c->r[1]+0x00000028u,c->r[0]); // 8009EA8C
  if (crb(c,1)) { goto L_8009EA9C; } // 8009EA90
  c->r[3]=0u+0x00000000u; // 8009EA94
  goto L_8009F0FC; // 8009EA98
L_8009EA9C:;
  c->r[4]=R32(c->r[3]+0x00000088u); // 8009EA9C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8009EAA0
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[12]=RF64(ea);} // 8009EAA4
  c->r[30]=0u+0x00000000u; // 8009EAA8
  c->r[0]=c->r[4]+0x00000001u; // 8009EAAC
  {uint32_t ea=c->r[2]+0xFFFF9374u; c->f[11]=c->ps1[11]=RF32(ea);} // 8009EAB0
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 8009EAB4
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[10]=c->ps1[10]=RF32(ea);} // 8009EAB8
  {uint32_t ea=c->r[2]+0xFFFF938Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 8009EABC
  {uint32_t ea=c->r[2]+0xFFFF9390u; c->f[8]=c->ps1[8]=RF32(ea);} // 8009EAC0
  {uint32_t ea=c->r[2]+0xFFFF9394u; c->f[7]=c->ps1[7]=RF32(ea);} // 8009EAC4
  {uint32_t ea=c->r[2]+0xFFFF9398u; c->f[6]=c->ps1[6]=RF32(ea);} // 8009EAC8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8009EACC
  {uint32_t ea=c->r[2]+0xFFFF93A0u; c->f[0]=RF64(ea);} // 8009EAD0
  c->r[0]=c->r[0]^0x80000000u; // 8009EAD4
  goto L_8009F0E8; // 8009EAD8
L_8009EADC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8009EADC
  if (!crb(c,2)) { goto L_8009EAF8; } // 8009EAE0
  c->r[4]=0u+0x00000000u; // 8009EAE4
  c->r[5]=0u+0x00000000u; // 8009EAE8
  c->r[11]=0u+0x00000001u; // 8009EAEC
  c->r[6]=0u+0x00000001u; // 8009EAF0
  goto L_8009EB28; // 8009EAF4
L_8009EAF8:;
  c->r[4]=c->r[5]+0xFFFFFFFEu; // 8009EAF8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[4]); // 8009EAFC
  if (!crb(c,2)) { goto L_8009EB18; } // 8009EB00
  c->r[11]=c->r[5]+0xFFFFFFFFu; // 8009EB04
  c->r[5]=c->r[30]|c->r[30]; // 8009EB08
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 8009EB0C
  c->r[6]=c->r[11]|c->r[11]; // 8009EB10
  goto L_8009EB28; // 8009EB14
L_8009EB18:;
  c->r[5]=c->r[30]|c->r[30]; // 8009EB18
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 8009EB1C
  c->r[11]=c->r[30]+0x00000001u; // 8009EB20
  c->r[6]=c->r[30]+0x00000002u; // 8009EB24
L_8009EB28:;
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8009EB28
  c->r[29]=0u+0x00000000u; // 8009EB2C
  c->r[8]=(uint32_t)((int32_t)c->r[11]*(int32_t)12); // 8009EB30
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8009EB34
  c->r[10]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8009EB38
  goto L_8009F0D4; // 8009EB3C
L_8009EB40:;
  c->r[12]=c->r[29]^0x80000000u; // 8009EB40
  c->r[25]=c->r[21]^0x80000000u; // 8009EB44
  W32(c->r[1]+0x00000024u,c->r[12]); // 8009EB48
  c->r[26]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[21]); // 8009EB4C
  c->r[12]=R32(c->r[3]+0x00000058u); // 8009EB50
  W32(c->r[1]+0x0000002Cu,c->r[25]); // 8009EB54
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8009EB58
  c->r[23]=c->r[12]+c->r[9]; // 8009EB5C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8009EB60
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[12]); // 8009EB64
  c->r[28]=c->r[29]+c->r[26]; // 8009EB68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[12]); // 8009EB6C
  c->r[31]=R32(c->r[3]+0x00000084u); // 8009EB70
  c->r[27]=c->r[28]^0x80000000u; // 8009EB74
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8009EB78
  c->f[28]=c->ps1[28]=S(c->f[2]/c->f[1]); // 8009EB7C
  W32(c->r[1]+0x00000024u,c->r[27]); // 8009EB80
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 8009EB84
  c->r[24]=c->r[12]+c->r[10]; // 8009EB88
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=RF64(ea);} // 8009EB8C
  c->r[22]=c->r[12]+c->r[8]; // 8009EB90
  c->f[13]=c->ps1[13]=S(c->f[28]*c->f[28]); // 8009EB94
  c->r[25]=c->r[6]+c->r[31]; // 8009EB98
  c->r[26]=c->r[11]+c->r[31]; // 8009EB9C
  c->r[27]=c->r[5]+c->r[31]; // 8009EBA0
  {uint32_t ea=c->r[12]+c->r[10]; c->f[27]=c->ps1[27]=RF32(ea);} // 8009EBA4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[12]); // 8009EBA8
  c->f[1]=c->ps1[1]=S(c->f[13]*c->f[28]); // 8009EBAC
  {uint32_t ea=c->r[12]+c->r[9]; c->f[26]=c->ps1[26]=RF32(ea);} // 8009EBB0
  c->f[19]=c->ps1[19]=S(c->f[11]*c->f[13]); // 8009EBB4
  {uint32_t ea=c->r[24]+0x00000004u; c->f[24]=c->ps1[24]=RF32(ea);} // 8009EBB8
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[13]); // 8009EBBC
  {uint32_t ea=c->r[23]+0x00000004u; c->f[23]=c->ps1[23]=RF32(ea);} // 8009EBC0
  c->f[20]=-c->f[1]; // 8009EBC4
  {uint32_t ea=c->r[22]+0x00000004u; c->f[25]=c->ps1[25]=RF32(ea);} // 8009EBC8
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[1]); // 8009EBCC
  c->r[21]=c->r[12]+c->r[7]; // 8009EBD0
  c->f[18]=c->ps1[18]=S(c->f[8]*c->f[1]); // 8009EBD4
  c->r[25]=(uint32_t)((int32_t)c->r[25]*(int32_t)12); // 8009EBD8
  c->f[22]=c->ps1[22]=S(c->f[20]+c->f[19]); // 8009EBDC
  {uint32_t ea=c->r[24]+0x00000008u; c->f[20]=c->ps1[20]=RF32(ea);} // 8009EBE0
  c->f[21]=c->ps1[21]=S(c->f[3]-c->f[2]); // 8009EBE4
  {uint32_t ea=c->r[23]+0x00000008u; c->f[19]=c->ps1[19]=RF32(ea);} // 8009EBE8
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[13]); // 8009EBEC
  {uint32_t ea=c->r[12]+c->r[8]; c->f[2]=c->ps1[2]=RF32(ea);} // 8009EBF0
  c->f[29]=c->ps1[29]=S(c->f[22]-c->f[28]); // 8009EBF4
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 8009EBF8
  c->f[30]=c->ps1[30]=S(c->f[11]+c->f[21]); // 8009EBFC
  {uint32_t ea=c->r[22]+0x00000008u; c->f[21]=c->ps1[21]=RF32(ea);} // 8009EC00
  c->f[18]=c->ps1[18]=S(c->f[18]+c->f[3]); // 8009EC04
  {uint32_t ea=c->r[12]+c->r[7]; c->f[3]=c->ps1[3]=RF32(ea);} // 8009EC08
  c->f[13]=c->ps1[13]=S(c->f[1]-c->f[13]); // 8009EC0C
  {uint32_t ea=c->r[21]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009EC10
  c->f[31]=c->ps1[31]=S(c->f[28]+c->f[18]); // 8009EC14
  {uint32_t ea=c->r[21]+0x00000008u; c->f[22]=c->ps1[22]=RF32(ea);} // 8009EC18
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[12]); // 8009EC1C
  c->r[27]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 8009EC20
  c->f[27]=c->ps1[27]=S(c->f[29]*c->f[27]); // 8009EC24
  c->r[24]=c->r[12]+c->r[25]; // 8009EC28
  c->f[28]=c->ps1[28]=S(c->f[5]/c->f[4]); // 8009EC2C
  c->r[23]=c->r[12]+c->r[26]; // 8009EC30
  c->r[22]=c->r[12]+c->r[27]; // 8009EC34
  c->f[26]=c->ps1[26]=S(c->f[30]*c->f[26]); // 8009EC38
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[19]); // 8009EC3C
  c->f[19]=c->ps1[19]=S(c->f[31]*c->f[21]); // 8009EC40
  c->f[24]=c->ps1[24]=S(c->f[29]*c->f[24]); // 8009EC44
  c->f[23]=c->ps1[23]=S(c->f[30]*c->f[23]); // 8009EC48
  c->f[5]=c->ps1[5]=S(c->f[29]*c->f[20]); // 8009EC4C
  c->f[18]=c->ps1[18]=S(c->f[31]*c->f[2]); // 8009EC50
  c->f[26]=c->ps1[26]=S(c->f[27]+c->f[26]); // 8009EC54
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[4]); // 8009EC58
  c->f[21]=c->ps1[21]=S(c->f[13]*c->f[3]); // 8009EC5C
  c->f[5]=c->ps1[5]=S(c->f[13]*c->f[1]); // 8009EC60
  c->f[25]=c->ps1[25]=S(c->f[31]*c->f[25]); // 8009EC64
  c->f[20]=c->ps1[20]=S(c->f[24]+c->f[23]); // 8009EC68
  c->f[3]=c->ps1[3]=S(c->f[18]+c->f[26]); // 8009EC6C
  c->f[1]=c->ps1[1]=S(c->f[19]+c->f[2]); // 8009EC70
  c->f[4]=c->ps1[4]=S(c->f[25]+c->f[20]); // 8009EC74
  c->f[20]=c->ps1[20]=S(c->f[21]+c->f[3]); // 8009EC78
  c->f[3]=c->ps1[3]=S(c->f[13]*c->f[22]); // 8009EC7C
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[4]); // 8009EC80
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[20]); // 8009EC84
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009EC88
  c->f[4]=c->ps1[4]=S(c->f[6]*c->f[2]); // 8009EC8C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 8009EC90
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[1]); // 8009EC94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 8009EC98
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8009EC9C
  c->r[27]=c->r[4]+c->r[31]; // 8009ECA0
  {uint32_t ea=c->r[22]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009ECA4
  c->r[27]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 8009ECA8
  {uint32_t ea=c->r[24]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009ECAC
  c->f[20]=c->ps1[20]=S(c->f[30]*c->f[1]); // 8009ECB0
  {uint32_t ea=c->r[23]+0x00000000u; c->f[19]=c->ps1[19]=RF32(ea);} // 8009ECB4
  {uint32_t ea=c->r[22]+0x00000004u; c->f[23]=c->ps1[23]=RF32(ea);} // 8009ECB8
  c->r[31]=rotl(c->r[28],1)&0xFFFFFFFEu; // 8009ECBC
  {uint32_t ea=c->r[12]+c->r[27]; c->f[21]=c->ps1[21]=RF32(ea);} // 8009ECC0
  c->r[21]=c->r[12]+c->r[27]; // 8009ECC4
  {uint32_t ea=c->r[21]+0x00000004u; c->f[22]=c->ps1[22]=RF32(ea);} // 8009ECC8
  c->r[12]=(uint32_t)((int32_t)c->r[31]*(int32_t)24); // 8009ECCC
  c->f[25]=c->ps1[25]=S(c->f[29]*c->f[21]); // 8009ECD0
  c->r[27]=R32(c->r[3]+0x0000005Cu); // 8009ECD4
  {uint32_t ea=c->r[24]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009ECD8
  c->f[19]=c->ps1[19]=S(c->f[31]*c->f[19]); // 8009ECDC
  {uint32_t ea=c->r[23]+0x00000004u; c->f[21]=c->ps1[21]=RF32(ea);} // 8009ECE0
  c->f[20]=c->ps1[20]=S(c->f[25]+c->f[20]); // 8009ECE4
  {uint32_t ea=c->r[24]+0x00000008u; c->f[24]=c->ps1[24]=RF32(ea);} // 8009ECE8
  c->r[25]=c->r[27]+c->r[12]; // 8009ECEC
  {uint32_t ea=c->r[23]+0x00000008u; c->f[25]=c->ps1[25]=RF32(ea);} // 8009ECF0
  c->f[2]=c->ps1[2]=S(c->f[13]*c->f[2]); // 8009ECF4
  {uint32_t ea=c->r[21]+0x00000008u; c->f[26]=c->ps1[26]=RF32(ea);} // 8009ECF8
  {uint32_t ea=c->r[22]+0x00000008u; c->f[27]=c->ps1[27]=RF32(ea);} // 8009ECFC
  c->f[20]=c->ps1[20]=S(c->f[19]+c->f[20]); // 8009ED00
  c->f[22]=c->ps1[22]=S(c->f[29]*c->f[22]); // 8009ED04
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[5]);} // 8009ED08
  c->f[5]=c->ps1[5]=S(c->f[30]*c->f[27]); // 8009ED0C
  c->f[27]=c->ps1[27]=S(c->f[31]*c->f[21]); // 8009ED10
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[4]);} // 8009ED14
  c->f[4]=c->ps1[4]=S(c->f[31]*c->f[25]); // 8009ED18
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[26]); // 8009ED1C
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[3]);} // 8009ED20
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[20]); // 8009ED24
  c->f[21]=c->ps1[21]=S(c->f[13]*c->f[1]); // 8009ED28
  c->r[21]=R8(c->r[3]+0x00000060u); // 8009ED2C
  c->f[23]=c->ps1[23]=S(c->f[30]*c->f[23]); // 8009ED30
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[2]); // 8009ED34
  c->r[28]=R8(c->r[3]+0x00000064u); // 8009ED38
  W32(c->r[1]+0x00000024u,c->r[21]); // 8009ED3C
  c->f[2]=c->ps1[2]=S(c->f[29]+c->f[5]); // 8009ED40
  c->r[27]=R32(c->r[3]+0x0000005Cu); // 8009ED44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8009ED48
  c->f[25]=c->ps1[25]=S(c->f[13]*c->f[24]); // 8009ED4C
  W32(c->r[1]+0x0000002Cu,c->r[28]); // 8009ED50
  c->f[13]=c->ps1[13]=S(c->f[4]+c->f[2]); // 8009ED54
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 8009ED58
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 8009ED5C
  W32(c->r[1]+0x00000024u,c->r[21]); // 8009ED60
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[0]); // 8009ED64
  c->r[27]=c->r[27]+c->r[12]; // 8009ED68
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8009ED6C
  c->f[26]=c->ps1[26]=S(c->f[22]+c->f[23]); // 8009ED70
  c->f[13]=c->ps1[13]=S(c->f[25]+c->f[13]); // 8009ED74
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 8009ED78
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8009ED7C
  c->f[26]=c->ps1[26]=S(c->f[27]+c->f[26]); // 8009ED80
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[1]); // 8009ED84
  c->f[24]=c->ps1[24]=S(c->f[21]+c->f[26]); // 8009ED88
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[13]); // 8009ED8C
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[4]); // 8009ED90
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[24]); // 8009ED94
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 8009ED98
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 8009ED9C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8009EDA0
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8009EDA4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[4]);} // 8009EDA8
  c->r[28]=R32(c->r[1]+0x00000034u); // 8009EDAC
  W8(c->r[27]+0x0000000Cu,c->r[28]); // 8009EDB0
  c->r[21]=R8(c->r[3]+0x00000061u); // 8009EDB4
  c->r[28]=c->r[31]+0x00000001u; // 8009EDB8
  c->r[31]=R8(c->r[3]+0x00000065u); // 8009EDBC
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8009EDC0
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8009EDC4
  c->r[27]=R32(c->r[3]+0x0000005Cu); // 8009EDC8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 8009EDCC
  W32(c->r[1]+0x00000024u,c->r[31]); // 8009EDD0
  c->r[27]=c->r[27]+c->r[12]; // 8009EDD4
  c->f[13]=c->ps1[13]=S(c->f[4]-c->f[0]); // 8009EDD8
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8009EDDC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=RF64(ea);} // 8009EDE0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 8009EDE4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 8009EDE8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8009EDEC
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 8009EDF0
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[4]); // 8009EDF4
  c->f[4]=c->ps1[4]=S(c->f[13]+c->f[4]); // 8009EDF8
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8009EDFC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[4]);} // 8009EE00
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8009EE04
  W8(c->r[27]+0x0000000Du,c->r[31]); // 8009EE08
  c->r[21]=R8(c->r[3]+0x00000062u); // 8009EE0C
  c->r[31]=R8(c->r[3]+0x00000066u); // 8009EE10
  W32(c->r[1]+0x00000024u,c->r[21]); // 8009EE14
  c->r[27]=R32(c->r[3]+0x0000005Cu); // 8009EE18
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 8009EE1C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8009EE20
  c->r[27]=c->r[27]+c->r[12]; // 8009EE24
  c->f[13]=c->ps1[13]=S(c->f[4]-c->f[0]); // 8009EE28
  W32(c->r[1]+0x00000024u,c->r[21]); // 8009EE2C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[5]=RF64(ea);} // 8009EE30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 8009EE34
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 8009EE38
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8009EE3C
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 8009EE40
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[4]); // 8009EE44
  c->f[4]=c->ps1[4]=S(c->f[13]+c->f[4]); // 8009EE48
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8009EE4C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8009EE50
  c->r[31]=R32(c->r[1]+0x00000044u); // 8009EE54
  W8(c->r[27]+0x0000000Eu,c->r[31]); // 8009EE58
  c->r[21]=R8(c->r[3]+0x00000063u); // 8009EE5C
  c->r[27]=R8(c->r[3]+0x00000067u); // 8009EE60
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8009EE64
  c->r[31]=R32(c->r[3]+0x0000005Cu); // 8009EE68
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 8009EE6C
  W32(c->r[1]+0x00000024u,c->r[27]); // 8009EE70
  c->r[31]=c->r[31]+c->r[12]; // 8009EE74
  c->f[13]=c->ps1[13]=S(c->f[4]-c->f[0]); // 8009EE78
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8009EE7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=RF64(ea);} // 8009EE80
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 8009EE84
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 8009EE88
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 8009EE8C
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 8009EE90
  c->f[4]=c->ps1[4]=S(c->f[28]*c->f[4]); // 8009EE94
  c->f[4]=c->ps1[4]=S(c->f[13]+c->f[4]); // 8009EE98
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 8009EE9C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[4]);} // 8009EEA0
  c->r[27]=R32(c->r[1]+0x0000004Cu); // 8009EEA4
  W8(c->r[31]+0x0000000Fu,c->r[27]); // 8009EEA8
  c->r[31]=R32(c->r[3]+0x0000005Cu); // 8009EEAC
  {uint32_t ea=c->r[31]+c->r[28]; WF32(ea,c->f[3]);} // 8009EEB0
  c->r[21]=c->r[31]+c->r[28]; // 8009EEB4
  {uint32_t ea=c->r[21]+0x00000004u; WF32(ea,c->f[2]);} // 8009EEB8
  {uint32_t ea=c->r[21]+0x00000008u; WF32(ea,c->f[1]);} // 8009EEBC
  c->r[21]=R8(c->r[3]+0x00000068u); // 8009EEC0
  c->r[31]=R8(c->r[3]+0x0000006Cu); // 8009EEC4
  W32(c->r[1]+0x00000024u,c->r[21]); // 8009EEC8
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009EECC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8009EED0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8009EED4
  c->r[28]=c->r[28]+c->r[12]; // 8009EED8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8009EEDC
  W32(c->r[1]+0x00000024u,c->r[21]); // 8009EEE0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 8009EEE4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8009EEE8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8009EEEC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8009EEF0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009EEF4
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009EEF8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009EEFC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8009EF00
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 8009EF04
  c->r[31]=R32(c->r[1]+0x00000054u); // 8009EF08
  W8(c->r[28]+0x00000024u,c->r[31]); // 8009EF0C
  c->r[21]=R8(c->r[3]+0x00000069u); // 8009EF10
  c->r[31]=R8(c->r[3]+0x0000006Du); // 8009EF14
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8009EF18
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009EF1C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8009EF20
  W32(c->r[1]+0x00000024u,c->r[31]); // 8009EF24
  c->r[28]=c->r[28]+c->r[12]; // 8009EF28
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8009EF2C
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8009EF30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8009EF34
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8009EF38
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8009EF3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8009EF40
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009EF44
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009EF48
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009EF4C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8009EF50
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[1]);} // 8009EF54
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8009EF58
  W8(c->r[28]+0x00000025u,c->r[31]); // 8009EF5C
  c->r[21]=R8(c->r[3]+0x0000006Au); // 8009EF60
  c->r[31]=R8(c->r[3]+0x0000006Eu); // 8009EF64
  W32(c->r[1]+0x00000024u,c->r[21]); // 8009EF68
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009EF6C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8009EF70
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8009EF74
  c->r[28]=c->r[28]+c->r[12]; // 8009EF78
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8009EF7C
  W32(c->r[1]+0x00000024u,c->r[21]); // 8009EF80
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 8009EF84
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8009EF88
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8009EF8C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8009EF90
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009EF94
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009EF98
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009EF9C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8009EFA0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[1]);} // 8009EFA4
  c->r[31]=R32(c->r[1]+0x00000064u); // 8009EFA8
  W8(c->r[28]+0x00000026u,c->r[31]); // 8009EFAC
  c->r[21]=R8(c->r[3]+0x0000006Bu); // 8009EFB0
  c->r[31]=R8(c->r[3]+0x0000006Fu); // 8009EFB4
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8009EFB8
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009EFBC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8009EFC0
  W32(c->r[1]+0x00000024u,c->r[31]); // 8009EFC4
  c->r[28]=c->r[28]+c->r[12]; // 8009EFC8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8009EFCC
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 8009EFD0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8009EFD4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8009EFD8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 8009EFDC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8009EFE0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009EFE4
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009EFE8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009EFEC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8009EFF0
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[1]);} // 8009EFF4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8009EFF8
  W8(c->r[28]+0x00000027u,c->r[31]); // 8009EFFC
  c->r[28]=R32(c->r[3]+0x000000A4u); // 8009F000
  cmps(c,0,(int32_t)c->r[28],0); // 8009F004
  if (crb(c,2)) { goto L_8009F070; } // 8009F008
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F00C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F010
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009F014
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009F018
  c->r[28]=c->r[28]+c->r[12]; // 8009F01C
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009F020
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009F024
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[1]);} // 8009F028
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009F02C
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F030
  c->r[28]=c->r[28]+c->r[12]; // 8009F034
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[1]);} // 8009F038
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F03C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F040
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009F044
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009F048
  c->r[28]=c->r[28]+c->r[12]; // 8009F04C
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009F050
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009F054
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[1]);} // 8009F058
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009F05C
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F060
  c->r[12]=c->r[28]+c->r[12]; // 8009F064
  {uint32_t ea=c->r[12]+0x0000002Cu; WF32(ea,c->f[1]);} // 8009F068
  goto L_8009F0D0; // 8009F06C
L_8009F070:;
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009F070
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F074
  c->r[28]=c->r[28]+c->r[12]; // 8009F078
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[1]);} // 8009F07C
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F080
  {uint32_t ea=c->r[3]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F084
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009F088
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009F08C
  c->r[28]=c->r[28]+c->r[12]; // 8009F090
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009F094
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009F098
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[1]);} // 8009F09C
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009F0A0
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F0A4
  c->r[28]=c->r[28]+c->r[12]; // 8009F0A8
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[1]);} // 8009F0AC
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F0B0
  {uint32_t ea=c->r[3]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F0B4
  c->r[28]=R32(c->r[3]+0x0000005Cu); // 8009F0B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009F0BC
  c->r[12]=c->r[28]+c->r[12]; // 8009F0C0
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009F0C4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009F0C8
  {uint32_t ea=c->r[12]+0x0000002Cu; WF32(ea,c->f[1]);} // 8009F0CC
L_8009F0D0:;
  c->r[29]=c->r[29]+0x00000001u; // 8009F0D0
L_8009F0D4:;
  c->r[12]=R32(c->r[3]+0x00000088u); // 8009F0D4
  c->r[21]=c->r[12]+0x00000001u; // 8009F0D8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[21]); // 8009F0DC
  if (crb(c,0)) { IRQCHK(c); goto L_8009EB40; } // 8009F0E0
  c->r[30]=c->r[30]+0x00000001u; // 8009F0E4
L_8009F0E8:;
  c->r[5]=R32(c->r[3]+0x00000098u); // 8009F0E8
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 8009F0EC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[4]); // 8009F0F0
  if (crb(c,0)) { IRQCHK(c); goto L_8009EADC; } // 8009F0F4
  c->r[3]=0u+0x00000001u; // 8009F0F8
L_8009F0FC:;
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,31,ea,0,0);} // 8009F0FC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[31]=RF64(ea);} // 8009F100
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,30,ea,0,0);} // 8009F104
  {uint32_t ea=c->r[1]+0x00000160u; c->f[30]=RF64(ea);} // 8009F108
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,29,ea,0,0);} // 8009F10C
  {uint32_t ea=c->r[1]+0x00000150u; c->f[29]=RF64(ea);} // 8009F110
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,28,ea,0,0);} // 8009F114
  {uint32_t ea=c->r[1]+0x00000140u; c->f[28]=RF64(ea);} // 8009F118
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,27,ea,0,0);} // 8009F11C
  {uint32_t ea=c->r[1]+0x00000130u; c->f[27]=RF64(ea);} // 8009F120
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,26,ea,0,0);} // 8009F124
  {uint32_t ea=c->r[1]+0x00000120u; c->f[26]=RF64(ea);} // 8009F128
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,25,ea,0,0);} // 8009F12C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[25]=RF64(ea);} // 8009F130
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,24,ea,0,0);} // 8009F134
  {uint32_t ea=c->r[1]+0x00000100u; c->f[24]=RF64(ea);} // 8009F138
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,23,ea,0,0);} // 8009F13C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[23]=RF64(ea);} // 8009F140
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,22,ea,0,0);} // 8009F144
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[22]=RF64(ea);} // 8009F148
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,21,ea,0,0);} // 8009F14C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[21]=RF64(ea);} // 8009F150
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,20,ea,0,0);} // 8009F154
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[20]=RF64(ea);} // 8009F158
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,19,ea,0,0);} // 8009F15C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[19]=RF64(ea);} // 8009F160
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,18,ea,0,0);} // 8009F164
  c->r[11]=c->r[1]+0x000000A0u; // 8009F168
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[18]=RF64(ea);} // 8009F16C
  c->lr=0x8009F174u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009F170
  c->r[0]=R32(c->r[1]+0x00000184u); // 8009F174
  c->lr=c->r[0]; // 8009F178
  c->r[1]=c->r[1]+0x00000180u; // 8009F17C
  return; // 8009F180
}

// fn_8009F184
void f_8009F184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F184
  c->r[0]=c->lr; // 8009F188
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009F18C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8009F190
  W32(c->r[1]+0x00000038u,c->r[30]); // 8009F194
  c->r[30]=c->r[3]|c->r[3]; // 8009F198
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009F19C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009F1A0
  c->ctr=c->r[12]; // 8009F1A4
  if (true) { c->lr=0x8009F1ACu; dispatch(c,c->ctr); } // 8009F1A8
  cmps(c,0,(int32_t)c->r[3],0); // 8009F1AC
  if (!crb(c,2)) { goto L_8009F1BC; } // 8009F1B0
  c->r[3]=0u+0x00000000u; // 8009F1B4
  goto L_8009F228; // 8009F1B8
L_8009F1BC:;
  c->r[3]=R32(c->r[30]+0x00000098u); // 8009F1BC
  cmps(c,0,(int32_t)c->r[3],3); // 8009F1C0
  if (crb(c,1)) { goto L_8009F1D0; } // 8009F1C4
  c->r[3]=0u+0x00000000u; // 8009F1C8
  goto L_8009F228; // 8009F1CC
L_8009F1D0:;
  c->r[5]=R32(c->r[30]+0x00000088u); // 8009F1D0
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 8009F1D4
  c->r[3]=R32(c->r[30]+0x00000000u); // 8009F1D8
  c->r[4]=c->r[1]+0x00000008u; // 8009F1DC
  c->r[0]=c->r[5]+0x00000001u; // 8009F1E0
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 8009F1E4
  c->r[12]=R32(c->r[3]+0x00000160u); // 8009F1E8
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009F1EC
  c->r[31]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8009F1F0
  c->ctr=c->r[12]; // 8009F1F4
  if (true) { c->lr=0x8009F1FCu; dispatch(c,c->ctr); } // 8009F1F8
  c->r[3]=R32(c->r[30]+0x00000070u); // 8009F1FC
  c->r[4]=0u+0x00000000u; // 8009F200
  c->lr=0x8009F208u; f_800E6FEC(c); // 8009F204
  c->lr=0x8009F20Cu; f_800E6FF0(c); // 8009F208
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 8009F20C
  c->r[6]=c->r[31]|c->r[31]; // 8009F210
  c->r[3]=c->r[1]+0x00000008u; // 8009F214
  c->r[5]=0u+0x00000098u; // 8009F218
  c->lr=0x8009F220u; f_800E6FF8(c); // 8009F21C
  c->lr=0x8009F224u; f_800E7248(c); // 8009F220
  c->r[3]=0u+0x00000001u; // 8009F224
L_8009F228:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009F228
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8009F22C
  c->r[30]=R32(c->r[1]+0x00000038u); // 8009F230
  c->lr=c->r[0]; // 8009F234
  c->r[1]=c->r[1]+0x00000040u; // 8009F238
  return; // 8009F23C
}

// fn_8009F240
void f_8009F240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F240
  c->r[0]=c->lr; // 8009F244
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009F248
  c->r[0]=0u+0x00000000u; // 8009F24C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009F250
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009F254
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009F258
  c->r[29]=c->r[3]|c->r[3]; // 8009F25C
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8009F260
  W32(c->r[3]+0x00000050u,c->r[0]); // 8009F264
  W32(c->r[3]+0x00000054u,c->r[0]); // 8009F268
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009F26C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009F270
  c->ctr=c->r[12]; // 8009F274
  if (true) { c->lr=0x8009F27Cu; dispatch(c,c->ctr); } // 8009F278
  c->r[3]=0u+0x802C0000u; // 8009F27C
  c->r[4]=0u+0x802C0000u; // 8009F280
  c->r[3]=c->r[3]+0xFFFFCF28u; // 8009F284
  c->r[0]=0u+0x00000004u; // 8009F288
  c->r[4]=c->r[4]+0xFFFFCF18u; // 8009F28C
  W32(c->r[29]+0x00000058u,c->r[3]); // 8009F290
  c->r[3]=0u+0x00000016u; // 8009F294
  W32(c->r[29]+0x0000005Cu,c->r[4]); // 8009F298
  W32(c->r[29]+0x00000060u,c->r[0]); // 8009F29C
  c->lr=0x8009F2A4u; f_800980D8(c); // 8009F2A0
  c->r[30]=c->r[3]|c->r[3]; // 8009F2A4
  c->r[3]=0u+0x00000015u; // 8009F2A8
  c->lr=0x8009F2B0u; f_800980D8(c); // 8009F2AC
  c->r[31]=c->r[3]|c->r[3]; // 8009F2B0
  c->r[3]=0u+0x00000000u; // 8009F2B4
  c->lr=0x8009F2BCu; f_80098374(c); // 8009F2B8
  c->r[0]=0u+0x00000001u; // 8009F2BC
  W32(c->r[29]+0x00000064u,c->r[3]); // 8009F2C0
  c->r[3]=c->r[29]|c->r[29]; // 8009F2C4
  {uint32_t ea=c->r[2]+0xFFFF93B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F2C8
  W32(c->r[29]+0x00000068u,c->r[31]); // 8009F2CC
  W32(c->r[29]+0x0000006Cu,c->r[30]); // 8009F2D0
  W32(c->r[29]+0x00000070u,c->r[0]); // 8009F2D4
  c->r[12]=R32(c->r[29]+0x0000003Cu); // 8009F2D8
  c->r[12]=R32(c->r[12]+0x00000018u); // 8009F2DC
  c->ctr=c->r[12]; // 8009F2E0
  if (true) { c->lr=0x8009F2E8u; dispatch(c,c->ctr); } // 8009F2E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009F2E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009F2EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009F2F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8009F2F4
  c->lr=c->r[0]; // 8009F2F8
  c->r[1]=c->r[1]+0x00000020u; // 8009F2FC
  return; // 8009F300
}

// fn_8009F304
void f_8009F304(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F304
  c->r[0]=c->lr; // 8009F308
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F30C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F310
  c->r[31]=c->r[3]|c->r[3]; // 8009F314
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009F318
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009F31C
  c->ctr=c->r[12]; // 8009F320
  if (true) { c->lr=0x8009F328u; dispatch(c,c->ctr); } // 8009F324
  c->r[0]=0u+0x00000000u; // 8009F328
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 8009F32C
  W32(c->r[31]+0x00000050u,c->r[0]); // 8009F330
  W32(c->r[31]+0x00000054u,c->r[0]); // 8009F334
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F338
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F33C
  c->lr=c->r[0]; // 8009F340
  c->r[1]=c->r[1]+0x00000010u; // 8009F344
  return; // 8009F348
}

// fn_8009F34C
void f_8009F34C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F34C
  c->r[0]=c->lr; // 8009F350
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F354
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F358
  c->r[31]=c->r[4]|c->r[4]; // 8009F35C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009F360
  c->r[30]=c->r[3]|c->r[3]; // 8009F364
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8009F368
  cmps(c,0,(int32_t)c->r[0],0); // 8009F36C
  if (!crb(c,2)) { goto L_8009F3A4; } // 8009F370
  c->r[0]=R32(c->r[3]+0x00000050u); // 8009F374
  cmps(c,0,(int32_t)c->r[0],0); // 8009F378
  if (!crb(c,2)) { goto L_8009F3A4; } // 8009F37C
  c->lr=0x8009F384u; f_80098038(c); // 8009F380
  W32(c->r[30]+0x0000004Cu,c->r[3]); // 8009F384
  c->r[3]=rotl(c->r[31],5)&0xFFFFFFE0u; // 8009F388
  c->lr=0x8009F390u; f_80098028(c); // 8009F38C
  c->lr=0x8009F394u; f_80098038(c); // 8009F390
  W32(c->r[30]+0x00000050u,c->r[3]); // 8009F394
  c->r[3]=rotl(c->r[31],7)&0xFFFFFF80u; // 8009F398
  c->lr=0x8009F3A0u; f_80098028(c); // 8009F39C
  W32(c->r[30]+0x00000054u,c->r[31]); // 8009F3A0
L_8009F3A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F3A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F3A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009F3AC
  c->lr=c->r[0]; // 8009F3B0
  c->r[1]=c->r[1]+0x00000010u; // 8009F3B4
  return; // 8009F3B8
}

// fn_8009F3BC
void f_8009F3BC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000058u,c->r[4]); // 8009F3BC
  return; // 8009F3C0
}

// fn_8009F3C4
void f_8009F3C4(Ctx* __restrict c) {
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8009F3C4
  W32(c->r[3]+0x00000060u,c->r[5]); // 8009F3C8
  return; // 8009F3CC
}

// fn_8009F3D0
void f_8009F3D0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000070u,c->r[4]); // 8009F3D0
  return; // 8009F3D4
}

// fn_8009F3D8
void f_8009F3D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F3D8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F3DC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F3E0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 8009F3E4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8009F3E8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8009F3EC
  return; // 8009F3F0
}

// fn_8009F3F4
void f_8009F3F4(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000038u); // 8009F3F4
  return; // 8009F3F8
}

// fn_8009F3FC
void f_8009F3FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF93B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F3FC
  c->r[6]=0u+0x00000000u; // 8009F400
  c->r[5]=0u+0x00000000u; // 8009F404
  goto L_8009F420; // 8009F408
L_8009F40C:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8009F40C
  c->r[6]=c->r[6]+0x00000001u; // 8009F410
  c->r[4]=c->r[0]+c->r[5]; // 8009F414
  c->r[5]=c->r[5]+0x00000020u; // 8009F418
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009F41C
L_8009F420:;
  c->r[0]=R32(c->r[3]+0x00000054u); // 8009F420
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8009F424
  if (crb(c,0)) { IRQCHK(c); goto L_8009F40C; } // 8009F428
  c->r[0]=0u+0x00000000u; // 8009F42C
  W32(c->r[3]+0x00000074u,c->r[0]); // 8009F430
  W8(c->r[3]+0x00000038u,c->r[0]); // 8009F434
  return; // 8009F438
}

// fn_8009F43C
void f_8009F43C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F43C
  c->r[0]=c->lr; // 8009F440
  {uint32_t ea=c->r[2]+0xFFFF93B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F444
  c->r[6]=0u+0x00000000u; // 8009F448
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009F44C
  c->r[5]=0u+0x00000000u; // 8009F450
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8009F454
  W32(c->r[1]+0x00000028u,c->r[30]); // 8009F458
  c->r[30]=c->r[3]|c->r[3]; // 8009F45C
  W32(c->r[1]+0x00000024u,c->r[29]); // 8009F460
  W32(c->r[1]+0x00000020u,c->r[28]); // 8009F464
  c->r[0]=R32(c->r[3]+0x00000054u); // 8009F468
  c->ctr=c->r[0]; // 8009F46C
  cmps(c,0,(int32_t)c->r[0],0); // 8009F470
  if (!crb(c,1)) { goto L_8009F5F4; } // 8009F474
L_8009F478:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8009F478
  c->r[4]=c->r[0]+c->r[5]; // 8009F47C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F480
  fcmp(c,0,c->f[1],c->f[0]); // 8009F484
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009F488
  if (!crb(c,2)) { goto L_8009F5E8; } // 8009F48C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F490
  c->r[31]=rotl(c->r[6],5)&0xFFFFFFE0u; // 8009F494
  c->r[4]=c->r[0]+c->r[31]; // 8009F498
  {uint32_t ea=c->r[31]+c->r[0]; WF32(ea,c->f[0]);} // 8009F49C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F4A0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009F4A4
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F4A8
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8009F4AC
  c->lr=0x8009F4B4u; f_8025AE00(c); // 8009F4B0
  c->r[6]=R32(c->r[30]+0x00000060u); // 8009F4B4
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 8009F4B8
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[6]); // 8009F4BC
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 8009F4C0
  c->r[7]=c->r[0]+c->r[31]; // 8009F4C4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 8009F4C8
  c->r[0]=c->r[3]-c->r[0]; // 8009F4CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009F4D0
  c->r[3]=c->r[4]+c->r[0]; // 8009F4D4
  c->r[0]=R8(c->r[4]+c->r[0]); // 8009F4D8
  W8(c->r[7]+0x0000000Cu,c->r[0]); // 8009F4DC
  c->r[0]=R8(c->r[3]+0x00000001u); // 8009F4E0
  W8(c->r[7]+0x0000000Du,c->r[0]); // 8009F4E4
  c->r[0]=R8(c->r[3]+0x00000002u); // 8009F4E8
  W8(c->r[7]+0x0000000Eu,c->r[0]); // 8009F4EC
  c->r[0]=R8(c->r[3]+0x00000003u); // 8009F4F0
  W8(c->r[7]+0x0000000Fu,c->r[0]); // 8009F4F4
  c->r[28]=R32(c->r[30]+0x00000058u); // 8009F4F8
  c->lr=0x8009F500u; f_8025AE00(c); // 8009F4FC
  c->r[0]=c->r[3]^0x80000000u; // 8009F500
  c->r[29]=0u+0x43300000u; // 8009F504
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009F508
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 8009F50C
  W32(c->r[1]+0x00000008u,c->r[29]); // 8009F510
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[1]=RF64(ea);} // 8009F514
  c->r[3]=c->r[0]+c->r[31]; // 8009F518
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8009F51C
  {uint32_t ea=c->r[2]+0xFFFF93B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F520
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 8009F524
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F528
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F52C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8009F530
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009F534
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009F538
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009F53C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009F540
  c->r[28]=R32(c->r[30]+0x00000058u); // 8009F544
  c->lr=0x8009F54Cu; f_8025AE00(c); // 8009F548
  c->r[3]=c->r[3]^0x80000000u; // 8009F54C
  W32(c->r[1]+0x00000010u,c->r[29]); // 8009F550
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[3]=RF64(ea);} // 8009F554
  W32(c->r[1]+0x00000014u,c->r[3]); // 8009F558
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 8009F55C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8009F560
  {uint32_t ea=c->r[2]+0xFFFF93B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F564
  c->r[3]=c->r[0]+c->r[31]; // 8009F568
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 8009F56C
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F570
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F574
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8009F578
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009F57C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8009F580
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009F584
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8009F588
  c->r[28]=R32(c->r[30]+0x00000058u); // 8009F58C
  c->lr=0x8009F594u; f_8025AE00(c); // 8009F590
  c->r[3]=c->r[3]^0x80000000u; // 8009F594
  W32(c->r[1]+0x00000018u,c->r[29]); // 8009F598
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[2]=RF64(ea);} // 8009F59C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8009F5A0
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 8009F5A4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8009F5A8
  {uint32_t ea=c->r[2]+0xFFFF93B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F5AC
  c->r[3]=c->r[0]+c->r[31]; // 8009F5B0
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[2]); // 8009F5B4
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F5B8
  {uint32_t ea=c->r[28]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F5BC
  {uint32_t ea=c->r[2]+0xFFFF93B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F5C0
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 8009F5C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009F5C8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8009F5CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009F5D0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8009F5D4
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 8009F5D8
  c->r[3]=c->r[0]+c->r[31]; // 8009F5DC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009F5E0
  goto L_8009F5F4; // 8009F5E4
L_8009F5E8:;
  c->r[5]=c->r[5]+0x00000020u; // 8009F5E8
  c->r[6]=c->r[6]+0x00000001u; // 8009F5EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009F478; } // 8009F5F0
L_8009F5F4:;
  c->r[0]=0u+0x00000001u; // 8009F5F4
  c->r[3]=0u+0x00000001u; // 8009F5F8
  W8(c->r[30]+0x00000038u,c->r[0]); // 8009F5FC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8009F600
  c->r[30]=R32(c->r[1]+0x00000028u); // 8009F604
  c->r[29]=R32(c->r[1]+0x00000024u); // 8009F608
  c->r[28]=R32(c->r[1]+0x00000020u); // 8009F60C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009F610
  c->lr=c->r[0]; // 8009F614
  c->r[1]=c->r[1]+0x00000030u; // 8009F618
  return; // 8009F61C
}

// fn_8009F620
void f_8009F620(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F620
  c->r[0]=c->lr; // 8009F624
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F62C
  c->r[31]=c->r[3]|c->r[3]; // 8009F630
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009F634
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009F638
  c->ctr=c->r[12]; // 8009F63C
  if (true) { c->lr=0x8009F644u; dispatch(c,c->ctr); } // 8009F640
  cmps(c,0,(int32_t)c->r[3],0); // 8009F644
  if (!crb(c,2)) { goto L_8009F654; } // 8009F648
  c->r[3]=0u+0x00000000u; // 8009F64C
  goto L_8009F6A4; // 8009F650
L_8009F654:;
  {uint32_t ea=c->r[2]+0xFFFF93B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F654
  c->r[5]=0u+0x00000000u; // 8009F658
  c->r[3]=0u+0x00000000u; // 8009F65C
  goto L_8009F694; // 8009F660
L_8009F664:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 8009F664
  c->r[4]=c->r[0]+c->r[3]; // 8009F668
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F66C
  fcmp(c,0,c->f[3],c->f[2]); // 8009F670
  if (!crb(c,1)) { goto L_8009F68C; } // 8009F674
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F678
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F67C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8009F680
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 8009F684
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009F688
L_8009F68C:;
  c->r[3]=c->r[3]+0x00000020u; // 8009F68C
  c->r[5]=c->r[5]+0x00000001u; // 8009F690
L_8009F694:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 8009F694
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8009F698
  if (crb(c,0)) { IRQCHK(c); goto L_8009F664; } // 8009F69C
  c->r[3]=0u+0x00000001u; // 8009F6A0
L_8009F6A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F6A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F6A8
  c->lr=c->r[0]; // 8009F6AC
  c->r[1]=c->r[1]+0x00000010u; // 8009F6B0
  return; // 8009F6B4
}

// fn_8009F6B8
void f_8009F6B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F6B8
  c->r[0]=c->lr; // 8009F6BC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009F6C0
  c->r[11]=c->r[1]+0x00000050u; // 8009F6C4
  c->lr=0x8009F6CCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009F6C8
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009F6CC
  c->r[0]=0u+0x43300000u; // 8009F6D0
  c->r[30]=c->r[3]|c->r[3]; // 8009F6D4
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009F6D8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009F6DC
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009F6E0
  c->ctr=c->r[12]; // 8009F6E4
  if (true) { c->lr=0x8009F6ECu; dispatch(c,c->ctr); } // 8009F6E8
  cmps(c,0,(int32_t)c->r[3],0); // 8009F6EC
  if (!crb(c,2)) { goto L_8009F6FC; } // 8009F6F0
  c->r[3]=0u+0x00000000u; // 8009F6F4
  goto L_8009F930; // 8009F6F8
L_8009F6FC:;
  c->r[6]=0u+0x80270000u; // 8009F6FC
  {uint32_t ea=c->r[6]+0x00002500u; c->r[5]=R32(ea); c->r[6]=ea;} // 8009F700
  {uint32_t ea=c->r[2]+0xFFFF93B0u; c->f[10]=c->ps1[10]=RF32(ea);} // 8009F704
  c->r[11]=0u+0x00000000u; // 8009F708
  c->r[4]=R32(c->r[6]+0x00000004u); // 8009F70C
  c->r[12]=0u+0x00000000u; // 8009F710
  c->r[3]=R32(c->r[6]+0x00000008u); // 8009F714
  c->r[7]=0u+0x00000000u; // 8009F718
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8009F71C
  c->r[8]=0u+0x00000000u; // 8009F720
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[8]=RF64(ea);} // 8009F724
  c->r[28]=0u+0x00000000u; // 8009F728
  W32(c->r[1]+0x00000008u,c->r[5]); // 8009F72C
  c->r[29]=0u+0x00000004u; // 8009F730
  {uint32_t ea=c->r[2]+0xFFFF93CCu; c->f[7]=c->ps1[7]=RF32(ea);} // 8009F734
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009F738
  {uint32_t ea=c->r[2]+0xFFFF93C8u; c->f[11]=c->ps1[11]=RF32(ea);} // 8009F73C
  W32(c->r[1]+0x00000010u,c->r[3]); // 8009F740
  {uint32_t ea=c->r[2]+0xFFFF93D0u; c->f[9]=RF64(ea);} // 8009F744
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F748
  {uint32_t ea=c->r[2]+0xFFFF93B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F74C
  goto L_8009F900; // 8009F750
L_8009F754:;
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 8009F754
  c->r[5]=c->r[0]+c->r[7]; // 8009F758
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F75C
  fcmp(c,0,c->f[3],c->f[0]); // 8009F760
  if (!crb(c,1)) { goto L_8009F8F8; } // 8009F764
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F768
  c->f[4]=c->ps1[4]=S(c->f[11]*c->f[3]); // 8009F76C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F770
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009F774
  fcmp(c,0,c->f[4],c->f[10]); // 8009F778
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8009F77C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009F780
  if (!crb(c,1)) { goto L_8009F790; } // 8009F784
  c->f[4]=c->f[10]; // 8009F788
  goto L_8009F79C; // 8009F78C
L_8009F790:;
  fcmp(c,0,c->f[4],c->f[0]); // 8009F790
  if (!crb(c,0)) { goto L_8009F79C; } // 8009F794
  c->f[4]=c->f[0]; // 8009F798
L_8009F79C:;
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 8009F79C
  c->r[9]=c->r[1]+0x00000008u; // 8009F7A0
  c->r[3]=R8(c->r[5]+0x0000000Cu); // 8009F7A4
  c->r[31]=0u+0x00000000u; // 8009F7A8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009F7AC
  c->r[10]=0u+0x00000000u; // 8009F7B0
  c->r[4]=R8(c->r[5]+0x0000000Du); // 8009F7B4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 8009F7B8
  c->r[5]=R8(c->r[5]+0x0000000Eu); // 8009F7BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[9]); // 8009F7C0
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 8009F7C4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8009F7C8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[2]);} // 8009F7CC
  c->r[6]=R32(c->r[1]+0x0000002Cu); // 8009F7D0
  c->ctr=c->r[29]; // 8009F7D4
L_8009F7D8:;
  c->r[25]=R32(c->r[9]+0x00000000u); // 8009F7D8
  c->r[0]=rotl(c->r[31],1)&0x00000001u; // 8009F7DC
  c->r[0]=c->r[0]+c->r[31]; // 8009F7E0
  c->r[27]=c->r[31]+c->r[8]; // 8009F7E4
  c->r[25]=c->r[25]^0x80000000u; // 8009F7E8
  c->r[24]=R32(c->r[30]+0x0000004Cu); // 8009F7EC
  W32(c->r[1]+0x00000024u,c->r[25]); // 8009F7F0
  c->r[0]=sraw(c,c->r[0],1); // 8009F7F4
  c->r[26]=c->r[0]^0x80000000u; // 8009F7F8
  {uint32_t ea=c->r[7]+c->r[24]; c->f[5]=c->ps1[5]=RF32(ea);} // 8009F7FC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8009F800
  c->r[0]=c->r[10]+c->r[28]; // 8009F804
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 8009F808
  c->r[27]=rotl(c->r[27],5)&0xFFFFFFE0u; // 8009F80C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 8009F810
  c->r[9]=c->r[9]+0x00000004u; // 8009F814
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=RF64(ea);} // 8009F818
  c->r[10]=c->r[10]+0x00000020u; // 8009F81C
  W32(c->r[1]+0x00000024u,c->r[25]); // 8009F820
  c->r[31]=c->r[31]+0x00000001u; // 8009F824
  c->f[6]=c->ps1[6]=S(c->f[7]*c->f[2]); // 8009F828
  c->r[25]=R32(c->r[30]+0x00000050u); // 8009F82C
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[8]); // 8009F830
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8009F834
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 8009F838
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[10]); // 8009F83C
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[4]); // 8009F840
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[8]); // 8009F844
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 8009F848
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[6]); // 8009F84C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[10]); // 8009F850
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 8009F854
  c->f[6]=c->ps1[6]=S(c->f[5]+c->f[6]); // 8009F858
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[4]); // 8009F85C
  {uint32_t ea=c->r[25]+c->r[0]; WF32(ea,c->f[6]);} // 8009F860
  c->r[26]=R32(c->r[30]+0x0000004Cu); // 8009F864
  c->r[25]=R32(c->r[30]+0x00000050u); // 8009F868
  c->r[26]=c->r[7]+c->r[26]; // 8009F86C
  {uint32_t ea=c->r[26]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009F870
  c->r[25]=c->r[25]+c->r[0]; // 8009F874
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[4]);} // 8009F878
  c->r[25]=R32(c->r[30]+0x0000004Cu); // 8009F87C
  c->r[26]=R32(c->r[30]+0x00000050u); // 8009F880
  c->r[25]=c->r[7]+c->r[25]; // 8009F884
  {uint32_t ea=c->r[25]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009F888
  c->r[26]=c->r[26]+c->r[0]; // 8009F88C
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 8009F890
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[4]);} // 8009F894
  c->r[26]=R32(c->r[30]+0x00000050u); // 8009F898
  c->r[24]=c->r[26]+c->r[27]; // 8009F89C
  W8(c->r[24]+0x0000000Cu,c->r[3]); // 8009F8A0
  W8(c->r[24]+0x0000000Du,c->r[4]); // 8009F8A4
  W8(c->r[24]+0x0000000Eu,c->r[5]); // 8009F8A8
  W8(c->r[24]+0x0000000Fu,c->r[6]); // 8009F8AC
  c->r[27]=R32(c->r[30]+0x00000050u); // 8009F8B0
  c->r[27]=c->r[27]+c->r[0]; // 8009F8B4
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[3]);} // 8009F8B8
  c->r[27]=R32(c->r[30]+0x00000050u); // 8009F8BC
  c->r[27]=c->r[27]+c->r[0]; // 8009F8C0
  {uint32_t ea=c->r[27]+0x00000014u; WF32(ea,c->f[2]);} // 8009F8C4
  c->r[27]=R32(c->r[30]+0x00000050u); // 8009F8C8
  c->r[24]=c->r[27]+c->r[0]; // 8009F8CC
  {uint32_t ea=c->r[24]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F8D0
  {uint32_t ea=c->r[24]+0x00000018u; WF32(ea,c->f[2]);} // 8009F8D4
  c->r[27]=R32(c->r[30]+0x00000050u); // 8009F8D8
  c->r[24]=c->r[27]+c->r[0]; // 8009F8DC
  {uint32_t ea=c->r[24]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F8E0
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[2]);} // 8009F8E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8009F7D8; } // 8009F8E8
  c->r[8]=c->r[8]+0x00000004u; // 8009F8EC
  c->r[28]=c->r[28]+0x00000080u; // 8009F8F0
  c->r[11]=c->r[11]+0x00000001u; // 8009F8F4
L_8009F8F8:;
  c->r[7]=c->r[7]+0x00000020u; // 8009F8F8
  c->r[12]=c->r[12]+0x00000001u; // 8009F8FC
L_8009F900:;
  c->r[0]=R32(c->r[30]+0x00000054u); // 8009F900
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 8009F904
  if (crb(c,0)) { IRQCHK(c); goto L_8009F754; } // 8009F908
  cmps(c,0,(int32_t)c->r[11],0); // 8009F90C
  W32(c->r[30]+0x00000074u,c->r[11]); // 8009F910
  if (!crb(c,2)) { goto L_8009F92C; } // 8009F914
  c->r[12]=R32(c->r[30]+0x0000003Cu); // 8009F918
  c->r[3]=c->r[30]|c->r[30]; // 8009F91C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009F920
  c->ctr=c->r[12]; // 8009F924
  if (true) { c->lr=0x8009F92Cu; dispatch(c,c->ctr); } // 8009F928
L_8009F92C:;
  c->r[3]=0u+0x00000001u; // 8009F92C
L_8009F930:;
  c->r[11]=c->r[1]+0x00000050u; // 8009F930
  c->lr=0x8009F938u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009F934
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009F938
  c->lr=c->r[0]; // 8009F93C
  c->r[1]=c->r[1]+0x00000050u; // 8009F940
  return; // 8009F944
}

// fn_8009F948
void f_8009F948(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009F948
  c->r[0]=c->lr; // 8009F94C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009F950
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009F954
  c->r[31]=c->r[3]|c->r[3]; // 8009F958
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009F95C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8009F960
  c->ctr=c->r[12]; // 8009F964
  if (true) { c->lr=0x8009F96Cu; dispatch(c,c->ctr); } // 8009F968
  cmps(c,0,(int32_t)c->r[3],0); // 8009F96C
  if (!crb(c,2)) { goto L_8009F97C; } // 8009F970
  c->r[3]=0u+0x00000000u; // 8009F974
  goto L_8009F9BC; // 8009F978
L_8009F97C:;
  c->r[3]=R32(c->r[31]+0x00000064u); // 8009F97C
  c->r[4]=R32(c->r[31]+0x00000068u); // 8009F980
  c->r[5]=R32(c->r[31]+0x0000006Cu); // 8009F984
  c->lr=0x8009F98Cu; f_800E724C(c); // 8009F988
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009F98C
  {uint32_t ea=c->r[2]+0xFFFF93B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F990
  c->lr=0x8009F998u; f_800E72A0(c); // 8009F994
  c->r[0]=R32(c->r[31]+0x00000074u); // 8009F998
  c->r[5]=0u+0x00000080u; // 8009F99C
  c->r[3]=R32(c->r[31]+0x00000000u); // 8009F9A0
  c->r[4]=R32(c->r[31]+0x00000050u); // 8009F9A4
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009F9A8
  c->r[7]=R32(c->r[31]+0x00000070u); // 8009F9AC
  c->lr=0x8009F9B4u; f_800E7584(c); // 8009F9B0
  c->lr=0x8009F9B8u; f_800E7714(c); // 8009F9B4
  c->r[3]=0u+0x00000001u; // 8009F9B8
L_8009F9BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009F9BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009F9C0
  c->lr=c->r[0]; // 8009F9C4
  c->r[1]=c->r[1]+0x00000010u; // 8009F9C8
  return; // 8009F9CC
}

// fn_8009F9D0
void f_8009F9D0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000040u,c->r[4]); // 8009F9D0
  W32(c->r[3]+0x00000044u,c->r[5]); // 8009F9D4
  return; // 8009F9D8
}

// fn_8009F9DC
void f_8009F9DC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000054u,c->r[4]); // 8009F9DC
  return; // 8009F9E0
}

// fn_8009F9E4
void f_8009F9E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 8009F9E4
  return; // 8009F9E8
}

// fn_8009F9EC
void f_8009F9EC(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000038u); // 8009F9EC
  return; // 8009F9F0
}

// fn_8009F9F4
void f_8009F9F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F9F4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F9F8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F9FC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8009FA00
  {uint32_t ea=c->r[2]+0xFFFF93D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA04
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 8009FA08
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8009FA0C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8009FA10
  c->r[3]=0u+0x00000001u; // 8009FA14
  return; // 8009FA18
}

// fn_8009FA1C
void f_8009FA1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009FA1C
  c->r[0]=c->lr; // 8009FA20
  c->r[10]=0u+0x80270000u; // 8009FA24
  c->r[4]=0u+0x00000000u; // 8009FA28
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009FA2C
  c->r[5]=0u+0x00000000u; // 8009FA30
  c->r[6]=0u+0x00000000u; // 8009FA34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009FA38
  c->r[31]=c->r[3]|c->r[3]; // 8009FA3C
  {uint32_t ea=c->r[10]+0x00002510u; c->r[9]=R32(ea); c->r[10]=ea;} // 8009FA40
  c->r[8]=R32(c->r[10]+0x00000004u); // 8009FA44
  c->r[7]=R32(c->r[10]+0x00000008u); // 8009FA48
  c->r[0]=R32(c->r[10]+0x0000000Cu); // 8009FA4C
  W32(c->r[1]+0x00000008u,c->r[9]); // 8009FA50
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 8009FA54
  W32(c->r[1]+0x00000010u,c->r[7]); // 8009FA58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009FA5C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009FA60
  c->r[12]=R32(c->r[12]+0x00000040u); // 8009FA64
  c->ctr=c->r[12]; // 8009FA68
  if (true) { c->lr=0x8009FA70u; dispatch(c,c->ctr); } // 8009FA6C
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FA70
  c->r[3]=c->r[31]|c->r[31]; // 8009FA74
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009FA78
  c->ctr=c->r[12]; // 8009FA7C
  if (true) { c->lr=0x8009FA84u; dispatch(c,c->ctr); } // 8009FA80
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FA84
  c->r[4]=0u+0x802C0000u; // 8009FA88
  c->r[3]=c->r[31]|c->r[31]; // 8009FA8C
  c->r[12]=R32(c->r[12]+0x00000058u); // 8009FA90
  c->r[4]=c->r[4]+0xFFFFCFC0u; // 8009FA94
  c->ctr=c->r[12]; // 8009FA98
  if (true) { c->lr=0x8009FAA0u; dispatch(c,c->ctr); } // 8009FA9C
  c->r[3]=0u+0x0000000Fu; // 8009FAA0
  c->lr=0x8009FAA8u; f_800980D8(c); // 8009FAA4
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FAA8
  c->r[4]=c->r[3]|c->r[3]; // 8009FAAC
  c->r[3]=c->r[31]|c->r[31]; // 8009FAB0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8009FAB4
  c->ctr=c->r[12]; // 8009FAB8
  if (true) { c->lr=0x8009FAC0u; dispatch(c,c->ctr); } // 8009FABC
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FAC0
  c->r[3]=c->r[31]|c->r[31]; // 8009FAC4
  c->r[4]=c->r[13]+0xFFFF8AC0u; // 8009FAC8
  c->r[5]=0u+0x00000001u; // 8009FACC
  c->r[12]=R32(c->r[12]+0x00000044u); // 8009FAD0
  c->ctr=c->r[12]; // 8009FAD4
  if (true) { c->lr=0x8009FADCu; dispatch(c,c->ctr); } // 8009FAD8
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FADC
  c->r[3]=c->r[31]|c->r[31]; // 8009FAE0
  c->r[4]=c->r[1]+0x00000008u; // 8009FAE4
  c->r[12]=R32(c->r[12]+0x00000060u); // 8009FAE8
  c->ctr=c->r[12]; // 8009FAEC
  if (true) { c->lr=0x8009FAF4u; dispatch(c,c->ctr); } // 8009FAF0
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FAF4
  c->r[4]=0u+0x800A0000u; // 8009FAF8
  c->r[3]=c->r[31]|c->r[31]; // 8009FAFC
  c->r[12]=R32(c->r[12]+0x00000048u); // 8009FB00
  c->r[4]=c->r[4]+0xFFFFF9F4u; // 8009FB04
  c->ctr=c->r[12]; // 8009FB08
  if (true) { c->lr=0x8009FB10u; dispatch(c,c->ctr); } // 8009FB0C
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FB10
  c->r[3]=c->r[31]|c->r[31]; // 8009FB14
  {uint32_t ea=c->r[2]+0xFFFF93DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FB18
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8009FB1C
  c->ctr=c->r[12]; // 8009FB20
  if (true) { c->lr=0x8009FB28u; dispatch(c,c->ctr); } // 8009FB24
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FB28
  c->r[3]=c->r[31]|c->r[31]; // 8009FB2C
  {uint32_t ea=c->r[2]+0xFFFF93DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FB30
  c->r[12]=R32(c->r[12]+0x00000018u); // 8009FB34
  c->ctr=c->r[12]; // 8009FB38
  if (true) { c->lr=0x8009FB40u; dispatch(c,c->ctr); } // 8009FB3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009FB40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009FB44
  c->lr=c->r[0]; // 8009FB48
  c->r[1]=c->r[1]+0x00000020u; // 8009FB4C
  return; // 8009FB50
}

// fn_8009FB54
void f_8009FB54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009FB54
  c->r[0]=c->lr; // 8009FB58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009FB5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009FB60
  c->r[31]=c->r[3]|c->r[3]; // 8009FB64
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8009FB68
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009FB6C
  c->ctr=c->r[12]; // 8009FB70
  if (true) { c->lr=0x8009FB78u; dispatch(c,c->ctr); } // 8009FB74
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 8009FB78
  c->r[3]=c->r[31]|c->r[31]; // 8009FB7C
  c->r[4]=0u+0x00000000u; // 8009FB80
  c->r[5]=0u+0x00000000u; // 8009FB84
  c->r[12]=R32(c->r[12]+0x00000040u); // 8009FB88
  c->r[6]=0u+0x00000000u; // 8009FB8C
  c->ctr=c->r[12]; // 8009FB90
  if (true) { c->lr=0x8009FB98u; dispatch(c,c->ctr); } // 8009FB94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009FB98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009FB9C
  c->lr=c->r[0]; // 8009FBA0
  c->r[1]=c->r[1]+0x00000010u; // 8009FBA4
  return; // 8009FBA8
}

// fn_8009FBAC
void f_8009FBAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009FBAC
  c->r[0]=c->lr; // 8009FBB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009FBB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009FBB8
  c->r[31]=c->r[4]|c->r[4]; // 8009FBBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009FBC0
  c->r[30]=c->r[3]|c->r[3]; // 8009FBC4
  c->lr=0x8009FBCCu; f_80098038(c); // 8009FBC8
  W32(c->r[30]+0x00000058u,c->r[3]); // 8009FBCC
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 8009FBD0
  c->lr=0x8009FBD8u; f_80098028(c); // 8009FBD4
  c->lr=0x8009FBDCu; f_80098038(c); // 8009FBD8
  W32(c->r[30]+0x0000005Cu,c->r[3]); // 8009FBDC
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)44); // 8009FBE0
  c->lr=0x8009FBE8u; f_80098028(c); // 8009FBE4
  W32(c->r[30]+0x0000004Cu,c->r[31]); // 8009FBE8
  c->r[3]=c->r[30]|c->r[30]; // 8009FBEC
  c->r[12]=R32(c->r[30]+0x0000003Cu); // 8009FBF0
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009FBF4
  c->ctr=c->r[12]; // 8009FBF8
  if (true) { c->lr=0x8009FC00u; dispatch(c,c->ctr); } // 8009FBFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009FC00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009FC04
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009FC08
  c->lr=c->r[0]; // 8009FC0C
  c->r[1]=c->r[1]+0x00000010u; // 8009FC10
  return; // 8009FC14
}

// fn_8009FC18
void f_8009FC18(Ctx* __restrict c) {
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 8009FC18
  c->r[7]=0u+0x00000000u; // 8009FC1C
  {uint32_t ea=c->r[2]+0xFFFF93D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FC20
  c->r[5]=0u+0x00000000u; // 8009FC24
  W32(c->r[3]+0x00000058u,c->r[4]); // 8009FC28
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 8009FC2C
  goto L_8009FC48; // 8009FC30
L_8009FC34:;
  c->r[0]=R32(c->r[3]+0x00000058u); // 8009FC34
  c->r[7]=c->r[7]+0x00000001u; // 8009FC38
  c->r[4]=c->r[0]+c->r[5]; // 8009FC3C
  c->r[5]=c->r[5]+0x00000040u; // 8009FC40
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009FC44
L_8009FC48:;
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 8009FC48
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8009FC4C
  if (crb(c,0)) { IRQCHK(c); goto L_8009FC34; } // 8009FC50
  return; // 8009FC54
}

